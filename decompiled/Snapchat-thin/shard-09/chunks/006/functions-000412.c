/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f7d0e0; end: 106f7d1a7; -[SCSpectaclesDevicePeripheral openStream] */

void FUN_106f7d0e0(undefined8 param_1)

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



/* Entry: 106f7d1a8; end: 106f7d1eb;  */

void FUN_106f7d1a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8e20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7d1ec; end: 106f7d273; -[SCSpectaclesDevicePeripheral isReadyToExchangeMessages] */

ulong FUN_106f7d1ec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0791a0();
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48ce0();
    if ((uVar3 & 1) == 0) {
      func_0x00010bf93da0(param_1);
    }
    else {
      param_1 = 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106f7d274; end: 106f7d3ab; -[SCSpectaclesDevicePeripheral setupEncryptionWithKey:] */

void FUN_106f7d274(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c195c40(param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9a40();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f7d3ac; end: 106f7d407;  */

void FUN_106f7d3ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f0b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40();
  _objc_release(lVar1);
  func_0x00010be97e20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7d408; end: 106f7d59f; -[SCSpectaclesDevicePeripheral _runEncryptionSetup] */

void FUN_106f7d408(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0f0b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d99e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7340(param_1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0ef280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0f0b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf221e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195d80(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        return;
      }
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(lVar2,param_2,param_1,puVar4);
      _objc_release(puVar4);
    }
    else {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f9a40();
      lVar2 = param_1;
    }
  }
  else {
    func_0x00010c0ef280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106f7d5a0; end: 106f7d5ff; -[SCSpectaclesDevicePeripheral _handleEncryptionSetupResponse:] */

void FUN_106f7d5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f0b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0fe0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be97e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runEncryptionSetup_112583928);
  return;
}



/* Entry: 106f7d600; end: 106f7d6f7; -[SCSpectaclesDevicePeripheral sendRequest:] */

void FUN_106f7d600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7d6f8; end: 106f7db4f;  */

void FUN_106f7d6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_106f7db0c;
  puVar2 = puVar1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0791a0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(puVar2,param_2,puVar1,puVar3);
LAB_106f7db00:
    _objc_release(puVar3);
  }
  else {
    puVar2 = puVar1;
    func_0x00010c1423a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1423e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    if ((puVar3 != (undefined *)0x0) &&
       (puVar4 = puVar3, func_0x00010bf529e0(), puVar4 != (undefined *)0x0)) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(puVar3);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
      if (puVar4 != (undefined *)0x0) {
        lVar10 = *plStack_120;
        do {
          puVar11 = (undefined *)0x0;
          puVar5 = puVar4;
          do {
            if (*plStack_120 != lVar10) {
              puVar5 = puVar3;
              _objc_enumerationMutation(puVar3);
            }
            puVar12 = *(undefined **)(lStack_128 + (long)puVar11 * 8);
            func_0x000106f829c0();
            puVar6 = puVar1;
            func_0x00010c1423a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c229380();
            _objc_release(puVar6);
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            if (puVar12 == (undefined *)0x0) {
              puVar5 = puVar1;
              func_0x00010bf6b020();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                                  &PTR____CFConstantStringClassReference_110e78258,2,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f99e0(puVar5,param_2,puVar1,puVar6);
            }
            else {
              puVar6 = puVar1;
              func_0x00010c1373a0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0dff20(puVar6,param_2,puVar7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar7);
              _objc_release(puVar6);
              puVar6 = puVar1;
              func_0x00010c1373a0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126d2fd0;
              _objc_alloc(PTR_PTR_1126d2fd0);
              uVar13 = *(undefined8 *)(param_1 + 0x20);
              puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c03ed20(puVar7,param_2,uVar13,puVar8,0);
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar6,param_2,puVar7,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar7);
              _objc_release(puVar8);
              _objc_release(puVar6);
              puVar5 = puVar1;
              func_0x00010bf94040();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010bf48ce0();
              _objc_release(puVar5);
              if ((int)puVar6 != 0) {
                puVar5 = puVar1;
                func_0x00010bf94040();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                func_0x00010bf93920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar12);
                _objc_release(puVar5);
                puVar12 = puVar6;
              }
              puVar6 = puVar1;
              func_0x00010c25c420(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar1;
              func_0x00010c0cb2c0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              func_0x00010bf64c40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2bda00(puVar6,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(puVar5);
              puVar5 = puVar12;
            }
            _objc_release(puVar6);
            _objc_release();
            puVar11 = puVar11 + 1;
          } while (puVar4 != puVar11);
          puVar4 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar4 != (undefined *)0x0);
      }
      goto LAB_106f7db00;
    }
  }
  _objc_release(puVar2);
LAB_106f7db0c:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 106f7db50; end: 106f7db53; -[SCSpectaclesDevicePeripheral sendEncryptionRequest:] */

void FUN_106f7db50(void)

{
  return;
}



/* Entry: 106f7db54; end: 106f7dd63; -[SCSpectaclesDevicePeripheral messageBufferReceivedData:messageType:] */

void FUN_106f7db54(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_4 < 6) {
    if (param_4 == 0) {
      func_0x00010be2e940(param_1,param_2,param_3);
      goto LAB_106f7dd4c;
    }
    if (param_4 != 4) goto LAB_106f7dd4c;
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) goto LAB_106f7dc98;
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf678c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) goto LAB_106f7dce8;
    func_0x00010be2e940(param_1,param_2,puVar2);
  }
  else {
    if (param_4 != 7) {
      if (param_4 == 6) {
        func_0x00010be2f3c0(param_1,param_2,param_3);
      }
      goto LAB_106f7dd4c;
    }
    puVar1 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
LAB_106f7dc98:
      puVar2 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(puVar2,param_2,param_1,puVar1);
    }
    else {
      puVar1 = param_1;
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf678c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar2 != (undefined *)0x0) {
        func_0x00010be2f3c0(param_1,param_2,puVar2);
        goto LAB_106f7dd44;
      }
LAB_106f7dce8:
      puVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(puVar1,param_2,param_1,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
LAB_106f7dd44:
  _objc_release(puVar2);
LAB_106f7dd4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f7dd64; end: 106f7de47; -[SCSpectaclesDevicePeripheral channelDidOpen:] */

void FUN_106f7dd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7de48; end: 106f7de8f;  */

void FUN_106f7de48(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9a60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7de90; end: 106f7df9b; -[SCSpectaclesDevicePeripheral channel:didReadData:] */

void FUN_106f7de90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7df9c; end: 106f7dfef;  */

void FUN_106f7df9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cb2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1147e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7dff0; end: 106f7dff3; -[SCSpectaclesDevicePeripheral channelDidWriteData:] */

void FUN_106f7dff0(void)

{
  return;
}



/* Entry: 106f7dff4; end: 106f7e0ff; -[SCSpectaclesDevicePeripheral channel:didError:] */

void FUN_106f7dff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7e100; end: 106f7e157;  */

void FUN_106f7e100(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f99e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7e158; end: 106f7e15b; -[SCSpectaclesDevicePeripheral channelDidClose:] */

void FUN_106f7e158(void)

{
  return;
}



/* Entry: 106f7e15c; end: 106f7e297; -[SCSpectaclesDevicePeripheral channel:didReadRSSI:error:] */

void FUN_106f7e15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7e298; end: 106f7e2cb;  */

void FUN_106f7e298(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e6e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7e2cc; end: 106f7e2e3; -[SCSpectaclesDevicePeripheral delegate] */

void FUN_106f7e2cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7e2e4; end: 106f7e2ef; -[SCSpectaclesDevicePeripheral setDelegate:] */

void FUN_106f7e2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106f7e2f0; end: 106f7e2f7; -[SCSpectaclesDevicePeripheral peripheral] */

undefined8 FUN_106f7e2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f7e2f8; end: 106f7e327; -[SCSpectaclesDevicePeripheral setPeripheral:] */

void FUN_106f7e2f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e328; end: 106f7e32f; -[SCSpectaclesDevicePeripheral RSSI] */

undefined8 FUN_106f7e328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f7e330; end: 106f7e35f; -[SCSpectaclesDevicePeripheral setRSSI:] */

void FUN_106f7e330(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e360; end: 106f7e367; -[SCSpectaclesDevicePeripheral performer] */

undefined8 FUN_106f7e360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f7e368; end: 106f7e397; -[SCSpectaclesDevicePeripheral setPerformer:] */

void FUN_106f7e368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f7e398; end: 106f7e39f; -[SCSpectaclesDevicePeripheral messageBuffer] */

undefined8 FUN_106f7e398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f7e3a0; end: 106f7e3cf; -[SCSpectaclesDevicePeripheral setMessageBuffer:] */

void FUN_106f7e3a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e3d0; end: 106f7e3d7; -[SCSpectaclesDevicePeripheral encryptor] */

undefined8 FUN_106f7e3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f7e3d8; end: 106f7e407; -[SCSpectaclesDevicePeripheral setEncryptor:] */

void FUN_106f7e3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f7e408; end: 106f7e40f; -[SCSpectaclesDevicePeripheral encryptionDisabled] */

undefined1 FUN_106f7e408(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106f7e410; end: 106f7e417; -[SCSpectaclesDevicePeripheral setEncryptionDisabled:] */

void FUN_106f7e410(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106f7e418; end: 106f7e41f; -[SCSpectaclesDevicePeripheral stream] */

undefined8 FUN_106f7e418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f7e420; end: 106f7e44f; -[SCSpectaclesDevicePeripheral setStream:] */

void FUN_106f7e420(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e450; end: 106f7e457; -[SCSpectaclesDevicePeripheral requests] */

undefined8 FUN_106f7e450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106f7e458; end: 106f7e487; -[SCSpectaclesDevicePeripheral setRequests:] */

void FUN_106f7e458(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e488; end: 106f7e48f; -[SCSpectaclesDevicePeripheral outstandingEncryptionSetupRequest] */

undefined8 FUN_106f7e488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106f7e490; end: 106f7e4bf; -[SCSpectaclesDevicePeripheral setOutstandingEncryptionSetupRequest:] */

void FUN_106f7e490(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e4c0; end: 106f7e4c7; -[SCSpectaclesDevicePeripheral rpcMessageFactory] */

undefined8 FUN_106f7e4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106f7e4c8; end: 106f7e4f7; -[SCSpectaclesDevicePeripheral setRpcMessageFactory:] */

void FUN_106f7e4c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e4f8; end: 106f7e4ff; -[SCSpectaclesDevicePeripheral packetEncryptorBuilder] */

undefined8 FUN_106f7e4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106f7e500; end: 106f7e52f; -[SCSpectaclesDevicePeripheral setPacketEncryptorBuilder:] */

void FUN_106f7e500(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7e530; end: 106f7e5d3; -[SCSpectaclesDevicePeripheral .cxx_destruct] */

void FUN_106f7e530(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f7e5d4; end: 106f7e657; -[SCSpectaclesHermosaBLENetworkResponse initWithRPCResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106f7e5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761bc0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f7e658; end: 106f7e687; -[SCSpectaclesHermosaBLENetworkResponse responseStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f7e658(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112761bc0);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010c13ba40();
    uVar2 = 4;
    if ((int)lVar1 == 1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 106f7e688; end: 106f7e697; -[SCSpectaclesHermosaBLENetworkResponse serializedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7e688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112761bc0),PTR_s_serializedSize_112635518);
  return;
}



/* Entry: 106f7e698; end: 106f7e757; -[SCSpectaclesHermosaBLENetworkResponse mediaList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7e698(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761bc0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf12860();
    _objc_release(lVar2);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (lVar3 != 0) {
      puVar4 = *(undefined **)(param_1 + lVar7);
      func_0x00010c0c64c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf12840();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      FUN_106f826b4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  else {
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f7e758; end: 106f7e81b; -[SCSpectaclesHermosaBLENetworkResponse metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7e758(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761bc0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd91a0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      puVar4 = PTR_PTR_1126d38d0;
      _objc_alloc(PTR_PTR_1126d38d0);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0c64c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b860(puVar4,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_106f7e808;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f7e808:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f7e81c; end: 106f7e933; -[SCSpectaclesHermosaBLENetworkResponse mediaUUID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7e81c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761bc0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfd8f80();
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfde280();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 == 0) goto LAB_106f7e908;
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0c64c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_106fcfe84();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  else {
LAB_106f7e908:
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106f7e934; end: 106f7ea8f; -[SCSpectaclesHermosaBLENetworkResponse mediaData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7e934(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761bc0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8f80();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
LAB_106f7ea04:
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfd91a0();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) goto LAB_106f7ea74;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bfd6200();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((int)uVar5 == 0) goto LAB_106f7ea04;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
LAB_106f7ea74:
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106f7ea90; end: 106f7ed43; -[SCSpectaclesHermosaBLENetworkResponse mediaDataRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106f7ea90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  
  lVar20 = (long)_DAT_112761bc0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar20);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8f80();
    if ((int)uVar3 == 0) {
LAB_106f7eca0:
      _objc_release(uVar2);
LAB_106f7eca8:
      uVar2 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfd91a0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) goto LAB_106f7ed14;
      uVar12 = *(ulong *)(param_1 + lVar20);
      func_0x00010c0c64c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar12;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c15ebe0();
      uVar19 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfd3ca0();
      if ((int)uVar5 == 0) {
LAB_106f7ec90:
        _objc_release(uVar3);
        _objc_release(uVar4);
        goto LAB_106f7eca0;
      }
      uVar6 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfdca00();
      if ((int)uVar8 == 0) {
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar6);
        goto LAB_106f7ec90;
      }
      uVar9 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bfd84c0();
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((int)uVar11 == 0) goto LAB_106f7eca8;
      uVar12 = *(ulong *)(param_1 + lVar20);
      func_0x00010c0c64c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar12;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar17;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar13;
      func_0x00010c24d960();
      uVar19 = uVar19 & 0xffffffff;
      uVar14 = *(ulong *)(param_1 + lVar20);
      func_0x00010c0c64c0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar16;
      func_0x00010c08fa40();
      uVar18 = uVar18 & 0xffffffff;
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
    }
    _objc_release(uVar17);
    _objc_release(uVar12);
  }
  else {
LAB_106f7ed14:
    uVar19 = 0;
    uVar18 = 0;
  }
  auVar21._8_8_ = uVar18;
  auVar21._0_8_ = uVar19;
  return auVar21;
}



/* Entry: 106f7ed44; end: 106f7ef47; -[SCSpectaclesHermosaBLENetworkResponse backupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7ed44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112761bc0;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010c13ba40();
  if ((int)lVar2 == 0x109) {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + lVar10);
    func_0x00010bfc2d00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf14d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(undefined8 *)(lVar9 * 8);
        puVar3 = PTR_PTR_1126d38d8;
        _objc_alloc(PTR_PTR_1126d38d8);
        uVar4 = uVar11;
        func_0x00010bf4c700(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c26dda0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        FUN_106fcfe84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26e2a0(uVar11);
        func_0x00010bf14c80(uVar11);
        func_0x00010bff6760(puVar3);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        func_0x00010befa120(puVar8);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112761bc0,0);
  return;
}



/* Entry: 106f7ef48; end: 106f7ef5b; -[SCSpectaclesHermosaBLENetworkResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7ef48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761bc0,0);
  return;
}



/* Entry: 106f7ef5c; end: 106f7efcf; -[SCSpectaclesHermosaContentMetadata initWithProto:] */

undefined1 * FUN_106f7ef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8078;
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



/* Entry: 106f7efd0; end: 106f7efd7; -[SCSpectaclesHermosaContentMetadata serializedSize] */

void FUN_106f7efd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_serializedSize_112635518);
  return;
}



/* Entry: 106f7efd8; end: 106f7efdf; -[SCSpectaclesHermosaContentMetadata rawData] */

void FUN_106f7efd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_data_1125b6738);
  return;
}



/* Entry: 106f7efe0; end: 106f7effb; -[SCSpectaclesHermosaContentMetadata contentType] */

ulong FUN_106f7efe0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfd7d60(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 106f7effc; end: 106f7f0ab; -[SCSpectaclesHermosaContentMetadata videoDuration] */

void FUN_106f7effc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfde440();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c299c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd6800();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c299c20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf8b340();
      func_0x00010c0df720((double)(int)uVar3 / 1000.0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f7f098;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f7f098:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f7f0ac; end: 106f7f14f; -[SCSpectaclesHermosaContentMetadata timeOfCapture] */

void FUN_106f7f0ac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdd540();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd5220();
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((int)uVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010c26f000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf314a0();
      func_0x00010bf655e0((double)uVar5,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      goto LAB_106f7f13c;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_106f7f13c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f7f150; end: 106f7f18f; -[SCSpectaclesHermosaContentMetadata randBytes] */

void FUN_106f7f150(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdad80();
  if (iVar1 != 0) {
    func_0x00010c11f100(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7f190; end: 106f7f1d7; -[SCSpectaclesHermosaContentMetadata multisnapGroupID] */

void FUN_106f7f190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d28c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f7f1d8; end: 106f7f21b; -[SCSpectaclesHermosaContentMetadata isHEVC] */

bool FUN_106f7f1d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c299c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3efc0();
  _objc_release(uVar1);
  return (int)uVar2 == 2;
}



/* Entry: 106f7f21c; end: 106f7f2b3; -[SCSpectaclesHermosaContentMetadata multisnapIndex] */

void FUN_106f7f21c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d28c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7ec0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d28c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfec9e0();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f2b4; end: 106f7f32f; -[SCSpectaclesHermosaContentMetadata firmwareVersion] */

void FUN_106f7f2b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0c68;
  _objc_alloc(PTR_PTR_1126c0c68);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfbc500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfccca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f7f330; end: 106f7f3c7; -[SCSpectaclesHermosaContentMetadata batterySoc] */

void FUN_106f7f330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd48e0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c267380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf176a0();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f3c8; end: 106f7f407; -[SCSpectaclesHermosaContentMetadata hasCharging] */

undefined8 FUN_106f7f3c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f7f408; end: 106f7f447; -[SCSpectaclesHermosaContentMetadata charging] */

undefined8 FUN_106f7f408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf35b20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f7f448; end: 106f7f4df; -[SCSpectaclesHermosaContentMetadata storagePercentage] */

void FUN_106f7f448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcc00();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf022a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c257260();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f4e0; end: 106f7f577; -[SCSpectaclesHermosaContentMetadata socTemperature] */

void FUN_106f7f4e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd40a0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c267380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf02360();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f578; end: 106f7f60b; -[SCSpectaclesHermosaContentMetadata nordicTemperature] */

void FUN_106f7f578(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9880();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c267380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db2a0();
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f60c; end: 106f7f6a3; -[SCSpectaclesHermosaContentMetadata wifiTemperature] */

void FUN_106f7f60c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde8c0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c267380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a5660();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f6a4; end: 106f7f73b; -[SCSpectaclesHermosaContentMetadata ambientLightIntensity] */

void FUN_106f7f6a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3fc0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf01d60();
    func_0x00010c0df820(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f73c; end: 106f7f7d3; -[SCSpectaclesHermosaContentMetadata sensorBeginTemperature] */

void FUN_106f7f73c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdca40();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c250ea0();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f7d4; end: 106f7f86b; -[SCSpectaclesHermosaContentMetadata sensorEndTemperature] */

void FUN_106f7f7d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6ac0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf95720();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f86c; end: 106f7f903; -[SCSpectaclesHermosaContentMetadata sensorCurrentDgc] */

void FUN_106f7f86c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6460();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf71be0();
    func_0x00010c0df820(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f904; end: 106f7f99b; -[SCSpectaclesHermosaContentMetadata sensorCurrentAgc] */

void FUN_106f7f904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3e60();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010befe760();
    func_0x00010c0df820(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7f99c; end: 106f7fa33; -[SCSpectaclesHermosaContentMetadata startEvIndex] */

void FUN_106f7f99c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdca20();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c24eb20();
    func_0x00010c0df820(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7fa34; end: 106f7facb; -[SCSpectaclesHermosaContentMetadata endEvIndex] */

void FUN_106f7fa34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2aca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6aa0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2aca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf94860();
    func_0x00010c0df820(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7facc; end: 106f7fb93; -[SCSpectaclesHermosaContentMetadata droppedFramesVin0] */

void FUN_106f7facc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c299c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ab80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde580();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c299c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8ab80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29f820();
    func_0x00010c0df760(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f7fb94; end: 106f7fc5b; -[SCSpectaclesHermosaContentMetadata droppedFramesVin1] */

void FUN_106f7fb94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c299c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ab80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde5a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c299c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8ab80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29f840();
    func_0x00010c0df760(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f7fc5c; end: 106f7fcf3; -[SCSpectaclesHermosaContentMetadata nordicLastBootSession] */

void FUN_106f7fc5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0db240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4c20();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0db240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1fa60();
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7fcf4; end: 106f7fcfb; -[SCSpectaclesHermosaContentMetadata bleUUID] */

undefined8 FUN_106f7fcf4(void)

{
  return 0;
}



/* Entry: 106f7fcfc; end: 106f7fd93; -[SCSpectaclesHermosaContentMetadata bleConnected] */

void FUN_106f7fcfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4ac0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c267380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1ca60();
    func_0x00010c0df6e0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7fd94; end: 106f7fd9b; -[SCSpectaclesHermosaContentMetadata buttonPressType] */

undefined8 FUN_106f7fd94(void)

{
  return 0;
}



/* Entry: 106f7fd9c; end: 106f7fda3; -[SCSpectaclesHermosaContentMetadata snapcodeDetected] */

undefined8 FUN_106f7fd9c(void)

{
  return 0;
}



/* Entry: 106f7fda4; end: 106f7fdab; -[SCSpectaclesHermosaContentMetadata userAssociated] */

undefined8 FUN_106f7fda4(void)

{
  return 0;
}



/* Entry: 106f7fdac; end: 106f7fdf7; -[SCSpectaclesHermosaContentMetadata buttonSide] */

undefined8 FUN_106f7fdac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfd4e20();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf258e0();
    uVar2 = 2;
    if (iVar1 != 1) {
      uVar2 = 0;
    }
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 106f7fdf8; end: 106f7ffe7; -[SCSpectaclesHermosaContentMetadata location] */

void FUN_106f7fdf8(float param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 8);
  func_0x00010bfd8a00();
  if (iVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
    func_0x00010c09ed60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd83a0();
    if (((int)uVar3 == 0) || (uVar3 = uVar2, func_0x00010bfd8c40(), (int)uVar3 == 0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
      func_0x00010c08b3c0(uVar2);
      dVar7 = (double)param_1;
      func_0x00010c0b55a0(uVar2);
      dVar6 = (double)param_1;
      _CLLocationCoordinate2DMake(dVar7,dVar6);
      uVar3 = uVar2;
      func_0x00010bfd7bc0();
      dVar8 = 0.0;
      dVar9 = 0.0;
      if ((int)uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010bfe0920(uVar2);
        dVar9 = (double)(int)uVar3 * 0.001;
      }
      uVar3 = uVar2;
      func_0x00010bfd79a0();
      if ((int)uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010bfcfd80(uVar2);
        dVar8 = (double)(uVar3 & 0xffffffff) * 0.001;
      }
      uVar3 = uVar2;
      func_0x00010bfde2c0();
      dVar10 = 0.0;
      dVar11 = 0.0;
      if ((int)uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010c294f00(uVar2);
        dVar11 = (double)(uVar3 & 0xffffffff) * 0.001;
      }
      uVar3 = uVar2;
      func_0x00010bfd7b80();
      if ((int)uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010bfe0380(uVar2);
        dVar10 = (double)(int)uVar3;
      }
      uVar3 = uVar2;
      func_0x00010bfdc860();
      dVar12 = 0.0;
      if ((int)uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010c249e00(uVar2);
        dVar12 = (double)(uVar3 & 0xffffffff);
      }
      uVar3 = uVar2;
      func_0x00010bfde260();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if ((uVar3 & 1) == 0) {
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar3 = uVar2;
        func_0x00010c294d20(uVar2);
        func_0x00010bf655e0((double)uVar3,puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c005aa0(dVar7,dVar6,dVar9,dVar8,dVar11,dVar10,dVar12,puVar5,param_3,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f7ffe8; end: 106f80257; -[SCSpectaclesHermosaContentMetadata genericAssetMetadata] */

undefined * FUN_106f7ffe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_140;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bfc0e00();
  if (lVar2 == 0) {
    puStack_140 = (undefined *)0x0;
  }
  else {
    puStack_140 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfc0de0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar3);
          }
          puVar11 = *(undefined **)(lStack_128 + lVar10 * 8);
          _objc_retain(puVar11);
          puVar4 = puVar11;
          func_0x00010bfd7160();
          if ((((int)puVar4 == 0) || (puVar4 = puVar11, func_0x00010bfdc180(), (int)puVar4 == 0)) ||
             (puVar4 = puVar11, func_0x00010bfd4360(), (int)puVar4 == 0)) {
LAB_106f801dc:
            _objc_release(puVar11);
          }
          else {
            puVar4 = puVar11;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010bfddb00();
            _objc_release(puVar4);
            if (((ulong)puVar5 & 1) == 0) goto LAB_106f801dc;
            puVar4 = puVar11;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c27dd80();
            _objc_release(puVar4);
            uVar1 = 3;
            if ((int)puVar5 != 3) {
              uVar1 = 0xfffffffffbadbeef;
            }
            puVar4 = PTR_PTR_1126d3838;
            _objc_alloc();
            puVar5 = puVar11;
            func_0x00010bfacde0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar11;
            func_0x00010c23d0a0(puVar11);
            puVar7 = puVar11;
            func_0x00010bf0af00(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c012c40(puVar4,param_2,puVar5,(ulong)puVar6 & 0xffffffff,puVar8,uVar1);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar5);
            _objc_release(puVar11);
            if (puVar4 != (undefined *)0x0) {
              func_0x00010befa120(puStack_140,param_2,puVar4);
              puVar11 = puVar4;
              goto LAB_106f801dc;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_140);
  return puStack_140;
}



/* Entry: 106f80258; end: 106f8025f; -[SCSpectaclesHermosaContentMetadata flightMode] */

undefined8 FUN_106f80258(void)

{
  return 0;
}



/* Entry: 106f80260; end: 106f80267; -[SCSpectaclesHermosaContentMetadata flightId] */

undefined8 FUN_106f80260(void)

{
  return 0;
}



/* Entry: 106f80268; end: 106f802a3; -[SCSpectaclesHermosaContentMetadata isValid] */

undefined8 FUN_106f80268(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfd7d60();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bfde450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_hasVideoData_1125d52d0);
  return uVar2;
}



/* Entry: 106f802a4; end: 106f802af; -[SCSpectaclesHermosaContentMetadata .cxx_destruct] */

void FUN_106f802a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f802b0; end: 106f80337; -[SCSpectaclesHermosaMessageBuffer initWithDelegate:] */

undefined1 * FUN_106f802b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f80338; end: 106f803bf; -[SCSpectaclesHermosaMessageBuffer dataWithTlvHeaderPrepended:messageType:] */

void FUN_106f80338(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uStack_24;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  uStack_24 = param_4 | (int)uVar1 << 8;
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,&uStack_24,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ae0();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f803c0; end: 106f803eb; -[SCSpectaclesHermosaMessageBuffer processData:] */

void FUN_106f803c0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bf06ae0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__parseBuffer_112579980);
  return;
}



/* Entry: 106f803ec; end: 106f804c7; -[SCSpectaclesHermosaMessageBuffer _parseBuffer] */

void FUN_106f803ec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  if (3 < uVar1) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c08fa60();
    lVar2 = param_1;
    func_0x00010becc640();
    if (lVar2 + 4U <= uVar1) {
      lVar2 = param_1;
      func_0x00010becc640(param_1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c25eac0(uVar3,param_2,4,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becc660(param_1);
      func_0x00010c130ce0(*(undefined8 *)(param_1 + 8),param_2,0,lVar2 + 4,0,0);
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0cb2e0();
      _objc_release(lVar2);
      func_0x00010be6ff80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}


