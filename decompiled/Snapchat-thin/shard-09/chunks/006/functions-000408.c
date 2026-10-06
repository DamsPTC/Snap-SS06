/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f6f55c; end: 106f6f59f;  */

void FUN_106f6f55c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010be1e000(), (int)lVar1 != 0)) {
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6f5a0; end: 106f6f663; -[SCSpectaclesBTCMFIClientController bluetoothDidDisconnect:] */

void FUN_106f6f5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6f664; end: 106f6f6ab;  */

void FUN_106f6f664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = 4;
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6f6ac; end: 106f6f753; -[SCSpectaclesBTCMFIClientController bluetoothNeedsPicker] */

void FUN_106f6f6ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6f754; end: 106f6f883;  */

void FUN_106f6f754(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281d00();
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined8 *)(param_1 + 0x50) = 4;
    unaff_x20 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e8fbd8;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x20;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48));
  }
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106f6f884;
  puStack_70 = unaff_x20;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_78,lVar1);
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106f6f884; end: 106f6f92b; -[SCSpectaclesBTCMFIClientController bluetoothDetectedOverload] */

void FUN_106f6f884(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6f92c; end: 106f6f973;  */

void FUN_106f6f92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = 4;
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6f974; end: 106f6fba7; -[SCSpectaclesBTCMFIClientController _startBTCOnSpectacles] */

void FUN_106f6f974(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf175c0();
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106fd25bc(lVar3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x48),PTR_s_handleEvent__1125d1dd0,4);
    return;
  }
  func_0x00010bee0a20(param_1);
  _objc_initWeak(auStack_58,param_1);
  puVar7 = PTR_PTR_1126d2fd8;
  func_0x00010bf275e0(PTR_PTR_1126d2fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b6718;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf1e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d420(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c15c740(uVar9);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106f6fba8; end: 106f6fcab;  */

void FUN_106f6fba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f6fcac; end: 106f6fd33;  */

void FUN_106f6fcac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((*(long *)(param_1 + 0x20) == 0) && (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) &&
       (func_0x00010c13bcc0(), lVar3 == 4)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 4;
      *(undefined8 *)(lVar1 + 0x50) = 4;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined8 *)(lVar1 + 0x58) = uVar4;
      _objc_release(uVar2);
    }
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x48),param_2,uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6fd34; end: 106f6fde7; -[SCSpectaclesBTCMFIClientController _connectExternalAccessory] */

void FUN_106f6fd34(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010bee0a20();
  puVar1 = PTR_PTR_1126d32b8;
  _objc_alloc();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0448a0();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010befac20(*(undefined8 *)(param_1 + 8));
  lVar2 = param_1;
  func_0x00010be1e000();
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x48),PTR_s_handleEvent__1125d1dd0,2);
    return;
  }
  return;
}



/* Entry: 106f6fde8; end: 106f6fefb; -[SCSpectaclesBTCMFIClientController _connectClient] */

void FUN_106f6fde8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  func_0x00010bee0a20();
  puVar1 = PTR_PTR_1126d3240;
  func_0x00010bf95ea0(PTR_PTR_1126d3240,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d3238;
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7900(0x4024000000000000,puVar7,param_2,lVar3,puVar1,0,lVar6,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar7;
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c24d960(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f6fefc; end: 106f6ff7b; -[SCSpectaclesBTCMFIClientController _clientConnected] */

void FUN_106f6fefc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bee0a20();
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x60));
  func_0x00010c0df720(param_1 * -1000.0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3cc20(lVar1,param_3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6ff7c; end: 106f70013; -[SCSpectaclesBTCMFIClientController _interrupt] */

void FUN_106f6ff7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bee0a20();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf3cc60();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  func_0x00010bfcfec0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12dde0(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopBTCOnSpectacles_11258e538);
  return;
}



/* Entry: 106f70014; end: 106f700c3; -[SCSpectaclesBTCMFIClientController _BTCStoppedOnSpectacles] */

void FUN_106f70014(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bee0a20();
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fe0(0x4008000000000000,uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f700c4; end: 106f7010b;  */

void FUN_106f700c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3cc40();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7010c; end: 106f70153; -[SCSpectaclesBTCMFIClientController _stateTimeoutWhileDisconnecting] */

void FUN_106f7010c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  func_0x00010bee0a20(param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3cc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f70154; end: 106f701df; -[SCSpectaclesBTCMFIClientController _updateStateTimeout] */

void FUN_106f70154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c252440();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010c252440();
    if (lVar2 != 4) {
      puVar3 = PTR_PTR_1126bc890;
      func_0x00010c150380(*(undefined8 *)(param_1 + 0x68),PTR_PTR_1126bc890,param_2,param_1,
                          PTR_s__handleStateTimeoutTimer_112536348,0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 106f701e0; end: 106f70287; -[SCSpectaclesBTCMFIClientController _handleStateTimeoutTimer] */

void FUN_106f701e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f70288; end: 106f702bf;  */

void FUN_106f70288(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f702c0; end: 106f7039b; -[SCSpectaclesBTCMFIClientController _stopBTCOnSpectacles] */

void FUN_106f702c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c27d400(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c15c740(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106f7039c; end: 106f70477;  */

void FUN_106f7039c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f70478; end: 106f704af;  */

void FUN_106f70478(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f704b0; end: 106f70537; -[SCSpectaclesBTCMFIClientController _getConnectedExternalAccessory] */

bool FUN_106f704b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126d32b8;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf485a0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 106f70538; end: 106f7053f; -[SCSpectaclesBTCMFIClientController timeout] */

undefined8 FUN_106f70538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106f70540; end: 106f70547; -[SCSpectaclesBTCMFIClientController setTimeout:] */

void FUN_106f70540(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 106f70548; end: 106f705db; -[SCSpectaclesBTCMFIClientController .cxx_destruct] */

void FUN_106f70548(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f705dc; end: 106f708ff; -[SCSpectaclesClientControllerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f705dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_68;
  
  lVar10 = (long)_DAT_112761aac;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27a200();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar11 = PTR_PTR_1126d37a0;
    _objc_alloc(PTR_PTR_1126d37a0);
    uStack_68 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar7 = uStack_68;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar2);
    lVar9 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00bd20(puVar11);
  }
  else {
    if (lVar2 == 1) {
      puVar11 = PTR_PTR_1126d37a8;
      _objc_alloc(PTR_PTR_1126d37a8);
      uStack_68 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar7 = uStack_68;
      func_0x00010bf6fd20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar1);
      lVar8 = lVar1;
      func_0x00010bf48c40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar2);
      lVar9 = lVar2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + _DAT_112761ab0;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010c2a4c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00bd40(puVar11);
      _objc_release(lVar6);
    }
    else {
      if (lVar2 != 2) {
        puVar11 = (undefined *)0x0;
        goto LAB_106f70888;
      }
      puVar11 = PTR_PTR_1126d3798;
      _objc_alloc(PTR_PTR_1126d3798);
      uStack_68 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar7 = uStack_68;
      func_0x00010bf6fd20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar8 = lVar1;
      func_0x00010c0f9a80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar2);
      lVar9 = lVar2;
      func_0x00010bf48c40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar3 = lVar5;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar6);
      lVar4 = lVar6;
      func_0x00010bf1e580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c020(puVar11);
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(uStack_68);
LAB_106f70888:
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf3cc80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,puVar11);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 106f70900; end: 106f70937; -[SCSpectaclesClientControllerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f70900(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112761ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761aac);
  return;
}



/* Entry: 106f70938; end: 106f70a6f; -[SCSpectaclesClientControllerScope initWithTransferChannel:device:peripheralResponseHandler:connectionHub:bluetoothCentralManager:delegate:clientControllerPlugin:] */

undefined1 *
FUN_106f70938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f8008;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f70a70; end: 106f70a77; -[SCSpectaclesClientControllerScope transferChannel] */

undefined8 FUN_106f70a70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f70a78; end: 106f70a8f; -[SCSpectaclesClientControllerScope device] */

void FUN_106f70a78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f70a90; end: 106f70aa7; -[SCSpectaclesClientControllerScope peripheralResponseHandler] */

void FUN_106f70a90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f70aa8; end: 106f70abf; -[SCSpectaclesClientControllerScope connectionHub] */

void FUN_106f70aa8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f70ac0; end: 106f70ad7; -[SCSpectaclesClientControllerScope bluetoothCentralManager] */

void FUN_106f70ac0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f70ad8; end: 106f70aef; -[SCSpectaclesClientControllerScope delegate] */

void FUN_106f70ad8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f70af0; end: 106f70af7; -[SCSpectaclesClientControllerScope clientControllerPlugin] */

undefined8 FUN_106f70af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f70af8; end: 106f70b43; -[SCSpectaclesClientControllerScope .cxx_destruct] */

void FUN_106f70af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106f70b44; end: 106f711af; -[SCSpectaclesWiFiClientController initWithDevice:connectionHub:delegate:wiFiNetworksControllerFactory:] */

undefined8 *
FUN_106f70b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126f8010;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_70;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 2,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar3);
    puVar2 = auStack_78;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 3,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_6);
    uVar3 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar3);
    puVar1[0xe] = 0x404e000000000000;
    puVar1[10] = 0;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126d3790;
    _objc_alloc();
    puVar6 = PTR_PTR_1126c7878;
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(puVar1);
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c226900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c0554c0();
    uVar3 = puVar1[8];
    puVar1[8] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  return puVar1;
}



/* Entry: 106f711b0; end: 106f711b7; -[SCSpectaclesWiFiClientController transferChannel] */

undefined8 FUN_106f711b0(void)

{
  return 1;
}



/* Entry: 106f711b8; end: 106f7122f; -[SCSpectaclesWiFiClientController state] */

undefined8 FUN_106f711b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c252440();
  if (lVar1 - 1U < 6) {
    uVar2 = *(undefined8 *)(&UNK_10de19010 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 3;
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f71230; end: 106f712a7; -[SCSpectaclesWiFiClientController connect] */

void FUN_106f71230(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,0);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f712a8; end: 106f7133b; -[SCSpectaclesWiFiClientController reConnectClient] */

void FUN_106f712a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c252440();
  if (lVar1 == 4) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar3;
    _objc_release(uVar2);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,9);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7133c; end: 106f713ab; -[SCSpectaclesWiFiClientController disconnect] */

void FUN_106f7133c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,6);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f713ac; end: 106f713f3; -[SCSpectaclesWiFiClientController client] */

void FUN_106f713ac(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f713f4; end: 106f71477; -[SCSpectaclesWiFiClientController handleResponse:] */

void FUN_106f713f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfde880();
  if (((int)uVar1 != 0) && (uVar1 = param_3, func_0x00010c2a5440(), (int)uVar1 != 0)) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f71478; end: 106f7147f; -[SCSpectaclesWiFiClientController responseMonitorState] */

undefined8 FUN_106f71478(void)

{
  return 0;
}



/* Entry: 106f71480; end: 106f714eb; -[SCSpectaclesWiFiClientController wiFiNetworksControllerConnectedWiFiNetwork:] */

void FUN_106f71480(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f714ec; end: 106f715e3; -[SCSpectaclesWiFiClientController wiFiNetworksController:failedWithError:] */

void FUN_106f714ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar2 == 0) {
    uVar3 = 4;
  }
  else {
    lVar2 = param_4;
    func_0x00010bf3ec40();
    uVar3 = 2;
    if (lVar2 != 3) {
      uVar3 = 4;
    }
  }
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = param_4;
  _objc_release(uVar3);
  func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,6);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f715e4; end: 106f7165b; -[SCSpectaclesWiFiClientController communicationClientDidBecomeActive:] */

void FUN_106f715e4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 == *(long *)(param_1 + 0x30)) {
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f7165c; end: 106f71713; -[SCSpectaclesWiFiClientController communicationClient:didError:] */

void FUN_106f7165c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 == *(long *)(param_1 + 0x30)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release();
    *(undefined8 *)(param_1 + 0x50) = 5;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = param_4;
    _objc_release(uVar1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,4);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f71714; end: 106f717bb; -[SCSpectaclesWiFiClientController _startWiFiAPOnSpectacles] */

void FUN_106f71714(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f717bc; end: 106f718ab;  */

void FUN_106f717bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    _objc_retain(uVar1);
    _objc_sync_enter(uVar1);
    func_0x00010bee0a20(uVar1);
    uVar2 = uVar1;
    func_0x00010bdf5c60();
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(uVar1 + 0x28);
      _objc_copyWeak(auStack_38,param_1 + 0x20);
      func_0x00010bf38120(uVar3);
      _objc_destroyWeak(auStack_38);
    }
    _objc_sync_exit(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106f718ac; end: 106f7198f;  */

void FUN_106f718ac(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_50,param_1 + 0x20);
    uStack_48 = param_2;
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106f71990; end: 106f71ae3;  */

void FUN_106f71990(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    _objc_sync_enter(lVar1);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bec2220(lVar1);
    }
    else {
      if (*(long *)(param_1 + 0x20) == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        uStack_38 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_30 = *(long *)(param_1 + 0x20);
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
      }
      *(undefined8 *)(lVar1 + 0x50) = 4;
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined **)(lVar1 + 0x58) = puVar2;
      _objc_release(uVar5);
      func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x40));
      _objc_release(puVar6);
    }
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
  }
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar1);
  lVar4 = lVar3;
  __Unwind_Resume();
  pcStack_48 = FUN_106f71ae4;
  lStack_60 = lVar3;
  lStack_58 = lVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_68,lVar4);
  uVar5 = *(undefined8 *)(lVar4 + 0x38);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106f71ae4; end: 106f71b8b; -[SCSpectaclesWiFiClientController _joinWiFiNetwork] */

void FUN_106f71ae4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f71b8c; end: 106f71c47;  */

void FUN_106f71b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bee0a20(param_1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c075fc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010c12dde0(*(undefined8 *)(param_1 + 8),param_2,param_1);
    }
    func_0x00010c24e5c0(*(undefined8 *)(param_1 + 0x28));
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f71c48; end: 106f71cef; -[SCSpectaclesWiFiClientController _connectClient] */

void FUN_106f71c48(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f71cf0; end: 106f71e77;  */

void FUN_106f71cf0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bee0a20(param_1);
    puVar2 = PTR_PTR_1126d3240;
    lVar1 = param_1;
    func_0x00010bdfc000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95ec0(puVar2,param_2,lVar1,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126d3238;
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d78e0(0x4014000000000000,puVar7,param_2,lVar3,puVar2,lVar6,param_1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar7;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f71e78; end: 106f71f1f; -[SCSpectaclesWiFiClientController _clientConnected] */

void FUN_106f71e78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f71f20; end: 106f71feb;  */

void FUN_106f71f20(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_sync_enter(param_2);
    func_0x00010bee0a20(param_2);
    _objc_sync_exit(param_2);
    _objc_release(param_2);
    lVar1 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x60));
    func_0x00010c0df720(param_1 * -1000.0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3cc20(lVar1,param_3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f71fec; end: 106f72093; -[SCSpectaclesWiFiClientController _reConnectClient] */

void FUN_106f71fec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f72094; end: 106f72163;  */

void FUN_106f72094(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bee0a20(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf3cc00();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,6);
      _objc_sync_exit(param_1);
      _objc_release(param_1);
    }
    else {
      func_0x00010bde62c0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f72164; end: 106f7220b; -[SCSpectaclesWiFiClientController _connectClientAfterDelay] */

void FUN_106f72164(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f7220c; end: 106f7230f;  */

void FUN_106f7220c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    _objc_sync_enter(lVar1);
    func_0x00010bee0a20(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010c0f7fe0(0x3fe0000000000000,uVar2);
    _objc_destroyWeak(auStack_38);
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f72310; end: 106f7237b;  */

void FUN_106f72310(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,5);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7237c; end: 106f72423; -[SCSpectaclesWiFiClientController _interrupt] */

void FUN_106f7237c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f72424; end: 106f7255b;  */

void FUN_106f72424(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bee0a20(param_1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c075fc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010c12dde0(*(undefined8 *)(param_1 + 8),param_2,param_1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar4);
    *(undefined8 *)(param_1 + 0x50) = 0;
    func_0x00010bfcfec0(*(undefined8 *)(param_1 + 0x30));
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar4);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar4);
    func_0x00010bec3c00(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3cc60();
    _objc_release(lVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7255c; end: 106f72603; -[SCSpectaclesWiFiClientController _wifiAPStoppedOnSpectacles] */

void FUN_106f7255c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f72604; end: 106f72687;  */

void FUN_106f72604(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bee0a20(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3cc40();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f72688; end: 106f72713; -[SCSpectaclesWiFiClientController _stateTimeout] */

void FUN_106f72688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined8 *)(param_1 + 0x50) = 3;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8fb78,2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  func_0x00010be3d540(param_1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f72714; end: 106f727bb; -[SCSpectaclesWiFiClientController _stateTimeoutWhileDisconnecting] */

void FUN_106f72714(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f727bc; end: 106f7283f;  */

void FUN_106f727bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bee0a20(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3cc40();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f72840; end: 106f728d3; -[SCSpectaclesWiFiClientController _updateStateTimeout] */

void FUN_106f72840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c252440();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c252440();
    puVar3 = PTR_PTR_1126bc890;
    if (lVar2 != 4) {
      func_0x00010c270480(param_1);
      func_0x00010c150380(puVar3,param_2,param_1,PTR_s__handleStateTimeoutTimer_112536348,0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 106f728d4; end: 106f7297b; -[SCSpectaclesWiFiClientController _handleStateTimeoutTimer] */

void FUN_106f728d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f7297c; end: 106f729e7;  */

void FUN_106f7297c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,8);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f729e8; end: 106f72b7b; -[SCSpectaclesWiFiClientController _createWifiNetworksController] */

undefined8 FUN_106f729e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a52e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bebf1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bdfc000(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf557c0(uVar1,param_2,param_1,lVar4,lVar5,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x28) == 0) {
      *(undefined8 *)(param_1 + 0x50) = 4;
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e8fb78,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar7;
      _objc_release(uVar9);
      func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40),param_2,6);
      uVar9 = 0;
      goto LAB_106f72aec;
    }
  }
  uVar9 = 1;
LAB_106f72aec:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar9;
}



/* Entry: 106f72b7c; end: 106f72dbb; -[SCSpectaclesWiFiClientController _startWiFiOnSpectacles] */

void FUN_106f72b7c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c075fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar8 != 0) {
    func_0x00010befac20(*(undefined8 *)(param_1 + 8));
  }
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf4b900();
  _objc_release(puVar3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2a5280();
  _objc_release(lVar1);
  if (((int)lVar2 == 0) && ((int)puVar4 != 0)) {
    _objc_release(lVar8);
    lVar8 = 0;
  }
  puVar3 = PTR_PTR_1126b6718;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c2a52e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bebf1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c15c740(uVar7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(lVar8);
  return;
}



/* Entry: 106f72dbc; end: 106f72fb3;  */

void FUN_106f72dbc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *unaff_x22;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106f72f48;
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if ((param_2 == 0) || (param_3 != 0)) {
    *(undefined8 *)(param_1 + 0x50) = 4;
    if (param_3 == 0) {
      unaff_x22 = (undefined *)0x0;
    }
    else {
      uStack_58 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_50 = param_3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106f72ef0:
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _objc_release(uVar4);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40));
    _objc_release(unaff_x22);
  }
  else {
    lVar1 = param_2;
    func_0x00010c13bcc0();
    if (lVar1 != 4) {
LAB_106f72ee4:
      unaff_x22 = (undefined *)0x0;
      *(undefined8 *)(param_1 + 0x50) = 4;
      goto LAB_106f72ef0;
    }
    lVar1 = param_2;
    func_0x00010bfde880();
    if (((int)lVar1 == 0) || (lVar1 = param_2, func_0x00010c2a5440(), (int)lVar1 == 0)) {
      unaff_x22 = (undefined *)(param_1 + 0x10);
      _objc_loadWeakRetained();
      puVar2 = unaff_x22;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c075fc0();
      _objc_release(puVar2);
      _objc_release(unaff_x22);
      if (((ulong)puVar3 & 1) == 0) goto LAB_106f72ee4;
    }
    else {
      func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40));
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
LAB_106f72f48:
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  lVar1 = param_2;
  __Unwind_Resume();
  pcStack_68 = FUN_106f72fb4;
  puStack_90 = unaff_x22;
  lStack_88 = param_1;
  lStack_80 = param_3;
  lStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_98,lVar1);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  puVar2 = PTR_PTR_1126b6718;
  func_0x00010c27d6c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c15c740(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  return;
}



/* Entry: 106f72fb4; end: 106f7308f; -[SCSpectaclesWiFiClientController _stopWiFiOnSpectacles] */

void FUN_106f72fb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c27d6c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c15c740(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106f73090; end: 106f7312f;  */

void FUN_106f73090(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x40));
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f73130; end: 106f73257; -[SCSpectaclesWiFiClientController _deviceWiFiURL] */

void FUN_106f73130(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c075fc0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0774a0();
    if ((uVar5 & 1) == 0) {
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar6 = param_1;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c078aa0();
      _objc_release(lVar6);
      _objc_release(param_1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      ppuVar8 = &PTR____CFConstantStringClassReference_110e8a6f8;
      if ((int)lVar7 == 0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110e8fc18;
      }
      goto LAB_106f7322c;
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  ppuVar8 = &PTR____CFConstantStringClassReference_110e8a6f8;
LAB_106f7322c:
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f73258; end: 106f7333f; -[SCSpectaclesWiFiClientController _ssidPassword] */

void FUN_106f73258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  func_0x00010c263a40();
  _objc_release(lVar6);
  if ((int)lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      _objc_alloc_init();
      lVar6 = 0x1e;
      do {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e8fbf8;
        func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e8fbf8);
        _arc4random_uniform();
        func_0x00010bf35920(&PTR____CFConstantStringClassReference_110e8fbf8,param_2,
                            (ulong)ppuVar3 & 0xffffffff);
        func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc1af8);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      puVar4 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar4;
      _objc_release(uVar5);
      lVar6 = *(long *)(param_1 + 0x68);
    }
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106f73340; end: 106f73347; -[SCSpectaclesWiFiClientController timeout] */

undefined8 FUN_106f73340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106f73348; end: 106f7334f; -[SCSpectaclesWiFiClientController setTimeout:] */

void FUN_106f73348(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 106f73350; end: 106f733ef; -[SCSpectaclesWiFiClientController .cxx_destruct] */

void FUN_106f73350(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f733f0; end: 106f733f7; -[SCSpectaclesBlockResponseMonitor initWithHandler:successBlock:failureBlock:timeoutBlock:] */

void FUN_106f733f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c019a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4034000000000000,param_1,PTR_s_initWithHandler_successBlock_fai_1125e4068);
  return;
}



/* Entry: 106f733f8; end: 106f7354b; -[SCSpectaclesBlockResponseMonitor initWithHandler:successBlock:failureBlock:timeoutBlock:timeout:] */

undefined1 *
FUN_106f733f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f8018;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bc890;
    func_0x00010c150380(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f7354c; end: 106f7359b; -[SCSpectaclesBlockResponseMonitor _didTimeout] */

void FUN_106f7354c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x30) = 1;
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f7358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106f7359c; end: 106f73657; -[SCSpectaclesBlockResponseMonitor handleResponse:] */

void FUN_106f7359c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 uStack_22;
  
  _objc_retain(param_3);
  uStack_22 = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_106f73640;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
LAB_106f73624:
    if (((char)uStack_22 != '\x01') || (lVar1 = *(long *)(param_1 + 0x18), lVar1 == 0))
    goto LAB_106f73640;
  }
  else {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,(long)&uStack_22 + 1,&uStack_22);
    if (((uStack_22 & 0x100) == 0) && ((uStack_22 & 1) == 0)) goto LAB_106f73624;
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x30) = 2;
    if ((uStack_22._1_1_ != '\x01') || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0))
    goto LAB_106f73624;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_106f73640:
  _objc_release(param_3);
  return;
}



/* Entry: 106f73658; end: 106f7365f; -[SCSpectaclesBlockResponseMonitor handlerBlock] */

undefined8 FUN_106f73658(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f73660; end: 106f73667; -[SCSpectaclesBlockResponseMonitor setHandlerBlock:] */

void FUN_106f73660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f73668; end: 106f7366f; -[SCSpectaclesBlockResponseMonitor successBlock] */

undefined8 FUN_106f73668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f73670; end: 106f73677; -[SCSpectaclesBlockResponseMonitor setSuccessBlock:] */

void FUN_106f73670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f73678; end: 106f7367f; -[SCSpectaclesBlockResponseMonitor failureBlock] */

undefined8 FUN_106f73678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f73680; end: 106f73687; -[SCSpectaclesBlockResponseMonitor setFailureBlock:] */

void FUN_106f73680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f73688; end: 106f7368f; -[SCSpectaclesBlockResponseMonitor timeoutBlock] */

undefined8 FUN_106f73688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f73690; end: 106f73697; -[SCSpectaclesBlockResponseMonitor setTimeoutBlock:] */

void FUN_106f73690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f73698; end: 106f7369f; -[SCSpectaclesBlockResponseMonitor timer] */

undefined8 FUN_106f73698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f736a0; end: 106f736cf; -[SCSpectaclesBlockResponseMonitor setTimer:] */

void FUN_106f736a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


