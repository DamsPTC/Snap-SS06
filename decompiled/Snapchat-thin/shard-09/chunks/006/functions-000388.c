/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106eed3d0; end: 106eed43f; -[SCSpectaclesPairingManager sendRequest:] */

void FUN_106eed3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eed440; end: 106eed4af; -[SCSpectaclesPairingManager sendEncryptionRequest:] */

void FUN_106eed440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15bc00();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eed4b0; end: 106eed52b; -[SCSpectaclesPairingManager _activeHandler] */

void FUN_106eed4b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 - 10U < 2) {
    func_0x00010c2913e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 9) {
    func_0x00010bf21a60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 3) {
    func_0x00010bf1ca40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eed52c; end: 106eed5bf; -[SCSpectaclesPairingManager _isActivePeripheral:] */

bool FUN_106eed52c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f99c0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_3 == lVar2;
    _objc_release();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106eed5c0; end: 106eed6bf; -[SCSpectaclesPairingManager peripheralRequiresEncryptionSetup:] */

void FUN_106eed5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_2;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eed6c0; end: 106eed703;  */

void FUN_106eed6c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010be3df40();
  if ((int)lVar1 != 0) {
    func_0x00010becf280(param_1,param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eed704; end: 106eed803; -[SCSpectaclesPairingManager peripheralDidOpenStream:] */

void FUN_106eed704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_2;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eed804; end: 106eed847;  */

void FUN_106eed804(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010be3df40();
  if ((int)lVar1 != 0) {
    func_0x00010becf280(param_1,param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eed848; end: 106eed967; -[SCSpectaclesPairingManager peripheral:didReceiveResponse:] */

void FUN_106eed848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eed968; end: 106eedef3;  */

void FUN_106eed968(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((uVar2 == 0) || (uVar7 = uVar2, func_0x00010be3df40(), (int)uVar7 == 0)) goto LAB_106eede28;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb0d20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19cd80();
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd38e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5640();
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf17500(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f9e0();
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd48c0();
  if (iVar1 != 0) {
    func_0x00010bf175c0(*(undefined8 *)(param_1 + 0x20));
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fa60();
    _objc_release(uVar7);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c2a0da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a0da0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224180();
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010bf540c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar3 != 0) {
    uVar7 = uVar2;
    func_0x00010bf71080(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf540c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f3280(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0c4760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c4760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c43e0();
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd6420();
  if (iVar1 != 0) {
    func_0x00010bf700a0(*(undefined8 *)(param_1 + 0x20));
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c800();
    _objc_release(uVar7);
  }
  if (*(long *)(uVar2 + 0x30) == 0) {
LAB_106eedc9c:
    uVar7 = uVar2;
    func_0x00010c252440();
    if (uVar7 != 5) {
      uVar7 = uVar2;
      func_0x00010bdc5240();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      _objc_opt_respondsToSelector();
      _objc_release(uVar7);
      if ((uVar6 & 1) != 0) {
        uVar7 = uVar2;
        func_0x00010bdc5240(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd2500();
        _objc_release(uVar7);
      }
      goto LAB_106eede28;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_106eede28;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15e740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcfc0();
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar7 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171940();
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010c09a420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf13800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492c0(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    func_0x00010c0d9840(*(undefined8 *)(uVar2 + 0x38));
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(uVar2 + 0x30);
    _objc_release();
    if (lVar3 != lVar5) goto LAB_106eedc9c;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c13bcc0();
    if (lVar3 == 4) {
      uVar7 = *(ulong *)(param_1 + 0x20);
      func_0x00010c296a00();
      if ((uVar7 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c112940(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        func_0x00010bf13800(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e2840();
        _objc_release(uVar7);
        _objc_release(uVar4);
        uVar7 = uVar2;
        func_0x00010c09a420(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bf13800(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010bf708e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2492c0(uVar7);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar7);
        func_0x00010c0d9840(*(undefined8 *)(uVar2 + 0x38));
        goto LAB_106eede28;
      }
    }
  }
  func_0x00010becf280(uVar2);
LAB_106eede28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106eedef4; end: 106eee023; -[SCSpectaclesPairingManager peripheral:didReceiveEncryptionResponse:] */

void FUN_106eedef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eee024; end: 106eee0b7;  */

void FUN_106eee024(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010be3df40();
  if ((int)uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010bdc5240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bdc5240(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0fa0();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eee0b8; end: 106eee1e7; -[SCSpectaclesPairingManager peripheral:didFailWithError:] */

void FUN_106eee0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eee1e8; end: 106eee353;  */

void FUN_106eee1e8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) &&
     (uVar2 = uVar1, func_0x00010be3df40(uVar1,param_2,*(undefined8 *)(param_1 + 0x20)),
     (int)uVar2 != 0)) {
    uVar2 = uVar1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074be0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010bf3ec40();
    if ((lVar5 != 7) || ((uVar4 & 1) == 0)) {
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010bf3ec40();
      if (lVar5 == 3) {
        uVar7 = 0x18;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x28);
        func_0x00010bf3ec40();
        uVar7 = 0x13;
        if (lVar5 == 5) {
          uVar7 = 0x14;
        }
      }
      uVar2 = uVar1;
      func_0x00010c09a420(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf13800(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf708e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2492c0(uVar2,param_2,uVar7,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar8 = *(undefined8 *)(uVar1 + 0x38);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8,param_2,puVar6);
      _objc_release(puVar6);
      func_0x00010becf280(uVar1,param_2,0xd);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eee354; end: 106eee40b; -[SCSpectaclesPairingManager pairingBLEAuthenticatorDidExchangeEncryptionKey:] */

void FUN_106eee354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195ce0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171940();
  _objc_release(uVar1);
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228900();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eee40c; end: 106eee4a3; -[SCSpectaclesPairingManager pairingBLEAuthenticatorDidFail] */

void FUN_106eee40c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0xd);
  return;
}



/* Entry: 106eee4a4; end: 106eee54b; -[SCSpectaclesPairingManager pairingBTConnectorDidConnectAccessory:] */

void FUN_106eee4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174100();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161140();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,10);
    return;
  }
  return;
}



/* Entry: 106eee54c; end: 106eee5d7; -[SCSpectaclesPairingManager pairingBTConnectorDidShowPicker] */

void FUN_106eee54c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9748);
  return;
}



/* Entry: 106eee5d8; end: 106eee663; -[SCSpectaclesPairingManager pairingBTConnectorDidFindAccessory] */

void FUN_106eee5d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9760);
  return;
}



/* Entry: 106eee664; end: 106eee6ef; -[SCSpectaclesPairingManager pairingBTConnectorPickerDidCancel] */

void FUN_106eee664(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9778);
  return;
}



/* Entry: 106eee6f0; end: 106eee77b; -[SCSpectaclesPairingManager pairingBTConnectorPickerDidFailKeyMismatch] */

void FUN_106eee6f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9790);
  return;
}



/* Entry: 106eee77c; end: 106eee807; -[SCSpectaclesPairingManager pairingBTConnectorPickerDidFail] */

void FUN_106eee77c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c97a8);
  return;
}



/* Entry: 106eee808; end: 106eee893; -[SCSpectaclesPairingManager pairingBTConnectorDidDetectOverload] */

void FUN_106eee808(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c97c0);
  return;
}



/* Entry: 106eee894; end: 106eee95b; -[SCSpectaclesPairingManager pairingBTAuthenticatorDidSucceed] */

void FUN_106eee894(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106eee95c; end: 106eee98b;  */

void FUN_106eee95c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eee98c; end: 106eee993; -[SCSpectaclesPairingManager pairingBTAuthenticatorDidFailWithoutEaSession] */

void FUN_106eee98c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pairingBTAuthenticatorDidFailWi_1125798b8,1)
  ;
  return;
}



/* Entry: 106eee994; end: 106eee99b; -[SCSpectaclesPairingManager pairingBTAuthenticatorDidFail] */

void FUN_106eee994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pairingBTAuthenticatorDidFailWi_1125798b8,0)
  ;
  return;
}



/* Entry: 106eee99c; end: 106eeea63; -[SCSpectaclesPairingManager _pairingBTAuthenticatorDidFailWithoutEaSession:] */

void FUN_106eee99c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106eeea64; end: 106eeeb0b;  */

void FUN_106eeea64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1,param_2,0x17,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c97d8);
  func_0x00010becf280(param_1,param_2,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eeeb0c; end: 106eeeb47; -[SCSpectaclesPairingManager pairingUserAssociatorDidSucceed] */

void FUN_106eeeb0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 0xb) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0xc);
    return;
  }
  return;
}



/* Entry: 106eeeb48; end: 106eeec53; -[SCSpectaclesPairingManager pairingUserAssociatorDidFail:] */

void FUN_106eeeb48(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_3 < 3) {
    puVar4 = (&PTR_PTR_110983478)[param_3];
    lVar1 = param_1;
    func_0x00010c09a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492c0(lVar1,param_2,param_3 + 0x19,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar4);
  }
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 106eeec54; end: 106eeec5f;  */

void FUN_106eeec54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__transitionToState__112591648,0xd);
  return;
}



/* Entry: 106eeec60; end: 106eeec67; -[SCSpectaclesPairingManager pairingUpdate] */

undefined8 FUN_106eeec60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106eeec68; end: 106eeec6f; -[SCSpectaclesPairingManager centralManager] */

undefined8 FUN_106eeec68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106eeec70; end: 106eeec9f; -[SCSpectaclesPairingManager setCentralManager:] */

void FUN_106eeec70(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eeeca0; end: 106eeeca7; -[SCSpectaclesPairingManager performer] */

undefined8 FUN_106eeeca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106eeeca8; end: 106eeecd7; -[SCSpectaclesPairingManager setPerformer:] */

void FUN_106eeeca8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eeecd8; end: 106eeecef; -[SCSpectaclesPairingManager listener] */

void FUN_106eeecd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eeecf0; end: 106eeecfb; -[SCSpectaclesPairingManager setListener:] */

void FUN_106eeecf0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106eeecfc; end: 106eeed03; -[SCSpectaclesPairingManager state] */

undefined8 FUN_106eeecfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106eeed04; end: 106eeed0b; -[SCSpectaclesPairingManager setState:] */

void FUN_106eeed04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 106eeed0c; end: 106eeed13; -[SCSpectaclesPairingManager deviceStore] */

undefined8 FUN_106eeed0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106eeed14; end: 106eeed43; -[SCSpectaclesPairingManager setDeviceStore:] */

void FUN_106eeed14(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eeed44; end: 106eeed4b; -[SCSpectaclesPairingManager userDisplayName] */

undefined8 FUN_106eeed44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106eeed4c; end: 106eeed53; -[SCSpectaclesPairingManager setUserDisplayName:] */

void FUN_106eeed4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106eeed54; end: 106eeed5b; -[SCSpectaclesPairingManager advertisementCode] */

undefined8 FUN_106eeed54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106eeed5c; end: 106eeed8b; -[SCSpectaclesPairingManager setAdvertisementCode:] */

void FUN_106eeed5c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eeed8c; end: 106eeed93; -[SCSpectaclesPairingManager babyDevice] */

undefined8 FUN_106eeed8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106eeed94; end: 106eeedc3; -[SCSpectaclesPairingManager setBabyDevice:] */

void FUN_106eeed94(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eeedc4; end: 106eeedcb; -[SCSpectaclesPairingManager pairingSessionId] */

undefined8 FUN_106eeedc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106eeedcc; end: 106eeedd3; -[SCSpectaclesPairingManager stateTransitionTimeout] */

undefined8 FUN_106eeedcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106eeedd4; end: 106eeee03; -[SCSpectaclesPairingManager setStateTransitionTimeout:] */

void FUN_106eeedd4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eeee04; end: 106eeee0b; -[SCSpectaclesPairingManager watchdogTimer] */

undefined8 FUN_106eeee04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106eeee0c; end: 106eeee3b; -[SCSpectaclesPairingManager setWatchdogTimer:] */

void FUN_106eeee0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeee3c; end: 106eeee43; -[SCSpectaclesPairingManager scanner] */

undefined8 FUN_106eeee3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106eeee44; end: 106eeee73; -[SCSpectaclesPairingManager setScanner:] */

void FUN_106eeee44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeee74; end: 106eeee7b; -[SCSpectaclesPairingManager bleAuthenticator] */

undefined8 FUN_106eeee74(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106eeee7c; end: 106eeeeab; -[SCSpectaclesPairingManager setBleAuthenticator:] */

void FUN_106eeee7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeeeac; end: 106eeeeb3; -[SCSpectaclesPairingManager btConnector] */

undefined8 FUN_106eeeeac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106eeeeb4; end: 106eeeee3; -[SCSpectaclesPairingManager setBtConnector:] */

void FUN_106eeeeb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeeee4; end: 106eeeeeb; -[SCSpectaclesPairingManager btAuthenticator] */

undefined8 FUN_106eeeee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106eeeeec; end: 106eeef1b; -[SCSpectaclesPairingManager setBtAuthenticator:] */

void FUN_106eeeeec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeef1c; end: 106eeef23; -[SCSpectaclesPairingManager userAssociator] */

undefined8 FUN_106eeef1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106eeef24; end: 106eeef53; -[SCSpectaclesPairingManager setUserAssociator:] */

void FUN_106eeef24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeef54; end: 106eeef5b; -[SCSpectaclesPairingManager authProviders] */

undefined8 FUN_106eeef54(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106eeef5c; end: 106eeef8b; -[SCSpectaclesPairingManager setAuthProviders:] */

void FUN_106eeef5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eeef8c; end: 106eef0b3; -[SCSpectaclesPairingManager .cxx_destruct] */

void FUN_106eeef8c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 106eef0b4; end: 106eef52b; +[SCSpectaclesDeviceNamer nextFullDisplayNameForUserDisplayName:shortDisplayName:hardwareVersion:username:nextDeviceNumber:] */

void FUN_106eef0b4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010c074be0();
  if ((int)uVar1 == 0) {
    puVar2 = PTR_PTR_1126d3290;
    func_0x00010be19c80(PTR_PTR_1126d3290);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    puVar3 = param_6;
    if ((param_3 != (undefined *)0x0) &&
       (puVar8 = param_3, func_0x00010c08fa60(), puVar8 != (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_retain(puVar8);
      _objc_release(param_6);
      puVar4 = puVar8;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      puVar3 = puVar8;
      if ((undefined *)0x1 < puVar5) {
        puVar3 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar5 == (undefined *)0x0) {
          puVar3 = puVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
        }
        else {
          puVar3 = puVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f3a0();
          puVar5 = puVar3;
          func_0x00010c260c80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar6 = puVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
      _objc_release(puVar8);
    }
    if (puVar3 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126c0c78;
      func_0x00010bf8e400(PTR_PTR_1126c0c78);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (param_7 == 1) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      puVar5 = PTR_PTR_1126d3290;
      func_0x00010be1b140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      while (((undefined *)0x1d < puVar6 &&
             (puVar8 = puVar3, func_0x00010c08fa60(), puVar8 != (undefined *)0x0))) {
        func_0x00010c08fa60(puVar3);
        func_0x00010c11f3a0(puVar3);
        puVar8 = puVar3;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126d3290;
        func_0x00010be1b140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010bf64920();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        _objc_release(puVar5);
        puVar5 = puVar3;
        puVar3 = puVar8;
      }
      puVar8 = PTR_PTR_1126c0c78;
      func_0x00010c27c880(PTR_PTR_1126c0c78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(ppuVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_4);
    puVar8 = param_4;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106eef52c; end: 106eef5f3; +[SCSpectaclesDeviceNamer _generateFullDisplayNameWithEmoji:name:nameTemplate:deviceIndexStr:] */

void FUN_106eef52c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  puVar1 = puVar2;
  func_0x00010c14de00(puVar2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dae518;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db9a38;
  }
  func_0x00010c14de00(puVar2,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106eef5f4; end: 106eef62b; +[SCSpectaclesDeviceNamer _fullDisplayNameTemplateWithHardwareVersion:] */

void FUN_106eef5f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010c06e7e0();
  if (param_3 == 0) {
    func_0x000109026428();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109026458();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eef62c; end: 106eef66b; -[SCSpectaclesBabyDevice init] */

void FUN_106eef62c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f7c58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    *(undefined8 *)((long)puVar1 + 0x80) = 0;
    *(undefined8 *)((long)puVar1 + 0x88) = 0;
  }
  return;
}



/* Entry: 106eef66c; end: 106eef753; -[SCSpectaclesBabyDevice isReadyToGrowUp] */

bool FUN_106eef66c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_1;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_1;
      func_0x00010bfbb7e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        bVar1 = false;
      }
      else {
        lVar5 = param_1;
        func_0x00010c22d240();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          bVar1 = false;
        }
        else {
          func_0x00010c15e740(param_1);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = param_1 != 0;
          _objc_release();
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106eef754; end: 106eef883; -[SCSpectaclesBabyDevice deviceInformation] */

void FUN_106eef754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d3160;
  _objc_alloc(PTR_PTR_1126d3160);
  uVar2 = param_1;
  func_0x00010c15e740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfbb7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfb0d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfd38e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf1cb20(param_1);
  uVar7 = param_1;
  func_0x00010bf21ac0(param_1);
  uVar8 = param_1;
  func_0x00010bf700a0();
  func_0x00010c112940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044960(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106eef884; end: 106eef88b; -[SCSpectaclesBabyDevice peripheral] */

undefined8 FUN_106eef884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106eef88c; end: 106eef8bb; -[SCSpectaclesBabyDevice setPeripheral:] */

void FUN_106eef88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eef8bc; end: 106eef8c3; -[SCSpectaclesBabyDevice networkClient] */

undefined8 FUN_106eef8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106eef8c4; end: 106eef8f3; -[SCSpectaclesBabyDevice setNetworkClient:] */

void FUN_106eef8c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eef8f4; end: 106eef8fb; -[SCSpectaclesBabyDevice accessory] */

undefined8 FUN_106eef8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106eef8fc; end: 106eef92b; -[SCSpectaclesBabyDevice setAccessory:] */

void FUN_106eef8fc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eef92c; end: 106eef933; -[SCSpectaclesBabyDevice encryptionKey] */

undefined8 FUN_106eef92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106eef934; end: 106eef963; -[SCSpectaclesBabyDevice setEncryptionKey:] */

void FUN_106eef934(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eef964; end: 106eef96b; -[SCSpectaclesBabyDevice fullDisplayName] */

undefined8 FUN_106eef964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106eef96c; end: 106eef973; -[SCSpectaclesBabyDevice setFullDisplayName:] */

void FUN_106eef96c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106eef974; end: 106eef97b; -[SCSpectaclesBabyDevice shortDisplayName] */

undefined8 FUN_106eef974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106eef97c; end: 106eef983; -[SCSpectaclesBabyDevice setShortDisplayName:] */

void FUN_106eef97c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106eef984; end: 106eef98b; -[SCSpectaclesBabyDevice deviceNumber] */

undefined8 FUN_106eef984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106eef98c; end: 106eef993; -[SCSpectaclesBabyDevice setDeviceNumber:] */

void FUN_106eef98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106eef994; end: 106eef99b; -[SCSpectaclesBabyDevice serialNumber] */

undefined8 FUN_106eef994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106eef99c; end: 106eef9a3; -[SCSpectaclesBabyDevice setSerialNumber:] */

void FUN_106eef99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106eef9a4; end: 106eef9ab; -[SCSpectaclesBabyDevice firmwareVersion] */

undefined8 FUN_106eef9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106eef9ac; end: 106eef9db; -[SCSpectaclesBabyDevice setFirmwareVersion:] */

void FUN_106eef9ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eef9dc; end: 106eef9e3; -[SCSpectaclesBabyDevice hardwareVersion] */

undefined8 FUN_106eef9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106eef9e4; end: 106eefa13; -[SCSpectaclesBabyDevice setHardwareVersion:] */

void FUN_106eef9e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eefa14; end: 106eefa1b; -[SCSpectaclesBabyDevice batteryLevel] */

undefined8 FUN_106eefa14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106eefa1c; end: 106eefa4b; -[SCSpectaclesBabyDevice setBatteryLevel:] */

void FUN_106eefa1c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eefa4c; end: 106eefa53; -[SCSpectaclesBabyDevice batteryLevelStatus] */

undefined8 FUN_106eefa4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106eefa54; end: 106eefa5b; -[SCSpectaclesBabyDevice setBatteryLevelStatus:] */

void FUN_106eefa54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106eefa5c; end: 106eefa63; -[SCSpectaclesBabyDevice voltageLevel] */

undefined8 FUN_106eefa5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106eefa64; end: 106eefa93; -[SCSpectaclesBabyDevice setVoltageLevel:] */

void FUN_106eefa64(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eefa94; end: 106eefa9b; -[SCSpectaclesBabyDevice mediaCount] */

undefined8 FUN_106eefa94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


