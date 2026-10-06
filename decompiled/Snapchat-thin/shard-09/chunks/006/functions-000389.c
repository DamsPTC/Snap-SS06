/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106eefa9c; end: 106eefacb; -[SCSpectaclesBabyDevice setMediaCount:] */

void FUN_106eefa9c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eefacc; end: 106eefad3; -[SCSpectaclesBabyDevice bleState] */

undefined8 FUN_106eefacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106eefad4; end: 106eefadb; -[SCSpectaclesBabyDevice setBleState:] */

void FUN_106eefad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 106eefadc; end: 106eefae3; -[SCSpectaclesBabyDevice btcState] */

undefined8 FUN_106eefadc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106eefae4; end: 106eefaeb; -[SCSpectaclesBabyDevice setBtcState:] */

void FUN_106eefae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 106eefaec; end: 106eefaf3; -[SCSpectaclesBabyDevice deviceColor] */

undefined8 FUN_106eefaec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106eefaf4; end: 106eefafb; -[SCSpectaclesBabyDevice setDeviceColor:] */

void FUN_106eefaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 106eefafc; end: 106eefb03; -[SCSpectaclesBabyDevice isLocationEnabled] */

undefined1 FUN_106eefafc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106eefb04; end: 106eefb0b; -[SCSpectaclesBabyDevice setLocationEnabled:] */

void FUN_106eefb04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106eefb0c; end: 106eefb13; -[SCSpectaclesBabyDevice isSetupComplete] */

undefined1 FUN_106eefb0c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106eefb14; end: 106eefb1b; -[SCSpectaclesBabyDevice setSetupComplete:] */

void FUN_106eefb14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106eefb1c; end: 106eefb23; -[SCSpectaclesBabyDevice previousUserMediaCount] */

undefined8 FUN_106eefb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106eefb24; end: 106eefb53; -[SCSpectaclesBabyDevice setPreviousUserMediaCount:] */

void FUN_106eefb24(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eefb54; end: 106eefc07; -[SCSpectaclesBabyDevice .cxx_destruct] */

void FUN_106eefb54(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106eefc08; end: 106eefe27;  */

void FUN_106eefc08(undefined8 param_1,undefined8 param_2)

{
  undefined2 uStack_13;
  undefined1 uStack_11;
  
  uStack_13 = 0x3430;
  uStack_11 = 0x30;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,&uStack_13,3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eefe28; end: 106eeff1b; -[SCSpectaclesPairingBTConnector initWithSerialNumber:displayName:performer:delegate:] */

undefined1 *
FUN_106eefe28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f7c60;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106eeff1c; end: 106eeffcf; -[SCSpectaclesPairingBTConnector startConnecting] */

void FUN_106eeff1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d32b8;
  _objc_alloc();
  func_0x00010c0448a0();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR_PTR_1126b6718;
  lVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be61d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d420(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106eeffd0; end: 106ef001b; +[SCSpectaclesPairingBTConnector _shuffle:] */

void FUN_106eeffd0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_3;
  _strlen();
  pbVar1 = param_3;
  for (; pbVar2 != (byte *)0x0; pbVar2 = pbVar2 + -1) {
    *pbVar1 = ~*pbVar1;
    pbVar1 = pbVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithUTF8String__1126750c8,param_3);
  return;
}



/* Entry: 106ef001c; end: 106ef0087; +[SCSpectaclesPairingBTConnector _notifType1] */

void FUN_106ef001c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0xbb9a9c96899abb97;
  uStack_40 = 0x8b90908b9a8a93bd;
  uStack_28 = 0x99968b90b19b;
  uStack_30 = 0x9a8d9a89909c8c96;
  uStack_22 = 0x9c96;
  uStack_20 = 0x9190968b9e;
  func_0x00010bebbf40(param_1,param_2,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar3 = &uStack_80;
    pcStack_48 = FUN_106ef0088;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_78 = 0xaa9a9c96899abb97;
    uStack_80 = 0x8b90908b9a8a93bd;
    uStack_68 = 0x8b9e9c9699968b;
    uStack_70 = 0x90b19b9a8b9e9b8f;
    uStack_61 = 0x919096;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bebbf40();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      _objc_retain(puVar3);
      func_0x00010bf68fa0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      func_0x00010be641e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined1 *)puVar3;
      func_0x00010c0dfc60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c104980(puVar1,param_2,param_1,puVar2);
      _objc_release(puVar2);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ef0088; end: 106ef00f7; +[SCSpectaclesPairingBTConnector _notifType2] */

void FUN_106ef0088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0xaa9a9c96899abb97;
  uStack_40 = 0x8b90908b9a8a93bd;
  uStack_28 = 0x8b9e9c9699968b;
  uStack_30 = 0x90b19b9a8b9e9b8f;
  uStack_21 = 0x919096;
  func_0x00010bebbf40(param_1,param_2,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(puVar3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010be641e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar3;
  func_0x00010c0dfc60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c104980(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ef00f8; end: 106ef019b; -[SCSpectaclesPairingBTConnector _forwardNotifications:] */

void FUN_106ef00f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010be641e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c104980(puVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ef019c; end: 106ef01e7; +[SCSpectaclesPairingBTConnector _myUUID] */

void FUN_106ef019c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2fd8;
  func_0x00010bf275e0(PTR_PTR_1126d2fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ef01e8; end: 106ef027b; -[SCSpectaclesPairingBTConnector _handleBluetoothCompletionWithError:] */

void FUN_106ef01e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    if (lVar1 == 2) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f2d20();
    }
    else {
      lVar1 = param_3;
      func_0x00010bf3ec40();
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      if (lVar1 == 3) {
        func_0x00010c0f2d60();
      }
      else {
        func_0x00010c0f2d40();
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ef027c; end: 106ef035f; -[SCSpectaclesPairingBTConnector _showBluetoothPicker] */

void FUN_106ef027c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f2d00();
  _objc_release(lVar1);
  _objc_initWeak(auStack_28,param_1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ef0360;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  lStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ef0360; end: 106ef04f7;  */

void FUN_106ef0360(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106ef04f8;
  puStack_60 = &UNK_1108f84e0;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  func_0x00010c1063a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0;
  func_0x00010c22b6c0(PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,param_1 + 0x28);
  func_0x00010c2362e0(puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar3);
  func_0x00010be64200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106ef04f8; end: 106ef057f;  */

undefined8 FUN_106ef04f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (uVar2 = param_2, func_0x00010c0720c0(), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0f2ce0();
    _objc_release(lVar1);
    uVar2 = 1;
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106ef0580; end: 106ef065b;  */

void FUN_106ef0580(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106ef065c; end: 106ef0697;  */

void FUN_106ef065c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be26800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ef0698; end: 106ef069f; -[SCSpectaclesPairingBTConnector handleResponse:] */

void FUN_106ef0698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_handleResponse__1125d22e8);
  return;
}



/* Entry: 106ef06a0; end: 106ef0777; -[SCSpectaclesPairingBTConnector bluetoothDidConnect:] */

void FUN_106ef06a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ef0778; end: 106ef07cb;  */

void FUN_106ef0778(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0f2ca0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ef07cc; end: 106ef07cf; -[SCSpectaclesPairingBTConnector bluetoothDidDisconnect:] */

void FUN_106ef07cc(void)

{
  return;
}



/* Entry: 106ef07d0; end: 106ef08ef; -[SCSpectaclesPairingBTConnector bluetoothNeedsPicker] */

void FUN_106ef07d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    func_0x00010be64200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240(puVar1);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106ef08f0; end: 106ef0923;  */

void FUN_106ef08f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb80e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ef0924; end: 106ef09cb; -[SCSpectaclesPairingBTConnector bluetoothDetectedOverload] */

void FUN_106ef0924(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ef09cc; end: 106ef0a0f;  */

void FUN_106ef09cc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0f2cc0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ef0a10; end: 106ef0a5f; -[SCSpectaclesPairingBTConnector .cxx_destruct] */

void FUN_106ef0a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ef0a60; end: 106ef0b3f; -[SCSpectaclesPairingUserAssociator initWithSpectaclesProfile:config:delegate:] */

undefined8 *
FUN_106ef0a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_5);
  puStack_40 = PTR_PTR_1126f7c68;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(byte *)((long)puVar1 + 0x1a) = (byte)((uint)param_4 >> 8) & 1;
    *(byte *)(puVar1 + 3) = ((byte)param_4 ^ 0xff) & 1;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 2,puVar3);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ef0b40; end: 106ef0b83; -[SCSpectaclesPairingUserAssociator startAssociating] */

void FUN_106ef0b40(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f3580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendAssociationMessageIfReady_1125853f0);
  return;
}



/* Entry: 106ef0b84; end: 106ef0c53; -[SCSpectaclesPairingUserAssociator _sendAssociationMessageIfReady] */

void FUN_106ef0b84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(char *)(param_1 + 0x19) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c087b20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c2913a0(PTR_PTR_1126b6718,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106ef0c54; end: 106ef0cc3; -[SCSpectaclesPairingUserAssociator handleResponse:] */

void FUN_106ef0c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1222e0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c122320();
    if ((int)uVar1 != 0) {
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f3580();
      _objc_release(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    func_0x00010be9e920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ef0cc4; end: 106ef0cef; -[SCSpectaclesPairingUserAssociator .cxx_destruct] */

void FUN_106ef0cc4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ef0cf0; end: 106ef0def; -[SCSpectaclesPairingUserAssociatorHermosa initWithSpectaclesProfile:authorizationProvider:fideliusKeyProvider:delegate:] */

undefined1 *
FUN_106ef0cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f7c70;
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
    func_0x00010c18b5e0(param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ef0df0; end: 106ef0df3; -[SCSpectaclesPairingUserAssociatorHermosa startAssociating] */

void FUN_106ef0df0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendClientIdRequest_1125854b8);
  return;
}



/* Entry: 106ef0df4; end: 106ef0e47; -[SCSpectaclesPairingUserAssociatorHermosa _sendClientIdRequest] */

void FUN_106ef0df4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc3b00(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c6e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ef0e48; end: 106ef0e9b; -[SCSpectaclesPairingUserAssociatorHermosa _sendAuthzCode:codeVerifier:redirectUri:] */

void FUN_106ef0e48(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf111e0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c6e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ef0e9c; end: 106ef0f07; -[SCSpectaclesPairingUserAssociatorHermosa _sendAccessTokenForDeviceWithAccessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:] */

void FUN_106ef0e9c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010beecd00(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c6e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ef0f08; end: 106ef0fd7; -[SCSpectaclesPairingUserAssociatorHermosa handleResponse:] */

void FUN_106ef0f08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3e600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c122320();
    if ((int)lVar1 != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f3580();
      _objc_release(param_1);
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3e600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c0dfb00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c134ae0();
    *(char *)(param_1 + 0x40) = (char)lVar1;
    func_0x00010c24da20(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x30),0,
                        *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ef0fd8; end: 106ef0fe7; -[SCSpectaclesPairingUserAssociatorHermosa sendAuthzCodeForDevice:authzCode:codeVerifier:redirectUri:] */

void FUN_106ef0fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendAuthzCode_codeVerifier_redi_112585408,param_4,param_5,param_6);
  return;
}



/* Entry: 106ef0fe8; end: 106ef10df; -[SCSpectaclesPairingUserAssociatorHermosa sendAccessTokenForDevice:accessToken:refreshToken:expirationTimeMs:userId:] */

void FUN_106ef0fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c23f2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8d6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9e620(param_1,param_2,param_4,param_5,param_6,param_7,uVar3,uVar1,uVar2,
                      *(undefined8 *)(param_1 + 0x18));
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106ef10e0; end: 106ef1157; -[SCSpectaclesPairingUserAssociatorHermosa authorizationFailed:] */

void FUN_106ef10e0(long param_1,undefined8 param_2,long param_3)

{
  if (1 < *(long *)(param_1 + 0x28)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f3560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c24da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_startAccessTokenAuthenticationFo_1126710b0,
               *(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 106ef1158; end: 106ef11b3; -[SCSpectaclesPairingUserAssociatorHermosa .cxx_destruct] */

void FUN_106ef1158(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ef11b4; end: 106ef12ef; -[SCSpectaclesPairingScanner initWithCentralManager:performer:delegate:] */

undefined1 *
FUN_106ef11b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7c78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    func_0x00010bef9980(param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_5);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ef12f0; end: 106ef1323; -[SCSpectaclesPairingScanner dealloc] */

void FUN_106ef12f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7c78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ef1324; end: 106ef136b; -[SCSpectaclesPairingScanner startSearchForNewDevices:] */

void FUN_106ef1324(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010c200580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,1);
  return;
}



/* Entry: 106ef136c; end: 106ef140f; -[SCSpectaclesPairingScanner cancelSearchForNewDevices] */

void FUN_106ef136c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf2f740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf34940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf2f740(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ea00(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
    return;
  }
  return;
}



/* Entry: 106ef1410; end: 106ef144b; -[SCSpectaclesPairingScanner finishSearchForNewDevices] */

void FUN_106ef1410(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
    return;
  }
  return;
}



/* Entry: 106ef144c; end: 106ef17d7; -[SCSpectaclesPairingScanner _transitionToState:] */

void FUN_106ef144c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  puVar2 = param_3;
  func_0x00010c252440();
  if (puVar1 == param_3) goto LAB_106ef1780;
  func_0x00010c252440(param_1);
  func_0x00010c209fc0(param_1,param_2,param_3);
  puVar1 = param_1;
  func_0x00010c252440();
  puVar2 = param_1;
  if ((long)puVar1 < 2) {
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c1782e0(param_1,param_2,0);
      func_0x00010c1e8b80(param_1,param_2,0);
      func_0x00010bf34940(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      puVar1 = param_1;
      func_0x00010bf34940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256900();
      _objc_release(puVar1);
      _objc_sync_exit(puVar2);
LAB_106ef166c:
      _objc_release(puVar2);
    }
    else if (puVar1 == (undefined *)0x1) {
      puVar1 = param_1;
      func_0x00010c157ae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      _objc_release(puVar1);
      puVar1 = param_1;
      func_0x00010bf34940(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      func_0x00010bf34940();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c252440();
      _objc_release(puVar2);
      if (puVar3 == (undefined *)0x5) {
        puVar2 = param_1;
        func_0x00010bf34940();
        _objc_retainAutoreleasedReturnValue();
        uStack_58 = *(undefined8 *)PTR__CBCentralManagerScanOptionAllowDuplicatesKey_11034ba48;
        puStack_50 = PTR____kCFBooleanTrue_11034ab68;
        param_5 = 1;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,
                            1);
        _objc_retainAutoreleasedReturnValue();
        param_4 = puVar3;
        func_0x00010c14ec00(puVar2,param_2,0,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      _objc_sync_exit(puVar1);
      _objc_release(puVar1);
    }
  }
  else if (puVar1 == (undefined *)0x2) {
    puVar1 = param_1;
    func_0x00010bf34940(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    uStack_68 = *(undefined8 *)PTR__CBConnectPeripheralOptionEnableTransportBridgingKey_11034ba50;
    puStack_60 = PTR____kCFBooleanTrue_11034ab68;
    param_5 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf34940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256900();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bf34940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf2f740(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar2;
    func_0x00010bf482e0(puVar3,param_2,puVar4,puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
  }
  else if (puVar1 == (undefined *)0x3) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf2f740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c123060();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar3;
    func_0x00010c0f3340(puVar2,param_2,puVar1,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    goto LAB_106ef166c;
  }
  param_3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(param_1);
  func_0x00010c0f33c0(param_3,param_2,param_1);
  puVar1 = param_3;
  _objc_release();
  puVar2 = param_1;
LAB_106ef1780:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_3);
  __Unwind_Resume();
  _objc_retain(puVar2);
  puVar3 = puVar1;
  func_0x00010c22ea80(puVar1,param_2,puVar2,param_4,param_5);
  if ((int)puVar3 != 0) {
    func_0x00010c1782e0(puVar1,param_2,puVar2);
    func_0x00010becf280(puVar1,param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106ef17d8; end: 106ef1843; -[SCSpectaclesPairingScanner _handlePeripheralDiscovery:advertisementData:RSSI:] */

void FUN_106ef17d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c22ea80(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar1 != 0) {
    func_0x00010c1782e0(param_1,param_2,param_3);
    func_0x00010becf280(param_1,param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ef1844; end: 106ef1bf3; -[SCSpectaclesPairingScanner shouldConnectToPeripheral:advertisement:RSSI:] */

undefined *
FUN_106ef1844(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5)

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
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010befe440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar9 = PTR_PTR_1126d32c8;
  if (puVar1 == (undefined *)0x0) {
LAB_106ef197c:
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010be60780();
    puVar5 = param_5;
    func_0x00010c230620(puVar9,param_2,param_5);
    if (((ulong)puVar9 & 1) != 0) goto LAB_106ef197c;
    puVar9 = param_1;
    func_0x00010c137680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c137680();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      puVar5 = puVar3;
      func_0x00010bf4bb00(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(puVar9);
      if ((int)puVar4 == 0) goto LAB_106ef197c;
    }
    uVar10 = *(ulong *)(param_1 + 0x40);
    puVar9 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf4b900(uVar10,param_2,puVar9);
    _objc_release(puVar9);
    if ((uVar10 & 1) != 0) goto LAB_106ef197c;
    puVar9 = PTR_PTR_1126d32c8;
    func_0x00010c06efe0(PTR_PTR_1126d32c8,param_2,param_4);
    puVar1 = PTR_PTR_1126d32c8;
    func_0x00010bf4ba60(PTR_PTR_1126d32c8,param_2,param_4);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = param_1;
    func_0x00010befe440();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_f0;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar12 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          puVar13 = *(undefined **)(lStack_128 + (long)puVar8 * 8);
          puVar5 = PTR_PTR_1126d32c8;
          puVar2 = puVar13;
          func_0x00010c07f000(PTR_PTR_1126d32c8,param_2,param_4);
          if ((int)puVar5 != 0) {
            puVar6 = param_1;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            puVar5 = puVar13;
            func_0x00010c0f3380();
            _objc_release(puVar6);
            if (((ulong)puVar7 & 1) != 0) {
              _objc_retain(puVar13);
              _objc_release(puVar3);
              if (puVar13 == (undefined *)0x0) goto LAB_106ef1b40;
              if (((uint)puVar9 & (uint)puVar1) != 1) goto LAB_106ef1bdc;
              puVar5 = puVar13;
              func_0x00010c1e8b80(param_1,param_2,puVar13);
              puVar9 = (undefined *)0x1;
              goto LAB_106ef1be0;
            }
            uVar11 = *(undefined8 *)(param_1 + 0x40);
            puVar2 = param_3;
            func_0x00010bfe5ec0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar11,param_2,puVar2);
            _objc_release(puVar2);
          }
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar2 = auStack_f0;
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_130,puVar2,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
LAB_106ef1b40:
    uVar10 = *(ulong *)(param_1 + 8);
    puVar9 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4b900(uVar10,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar9);
    if ((uVar10 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      puVar9 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010befa120(uVar11,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar9);
    }
    puVar13 = (undefined *)0x0;
LAB_106ef1bdc:
    puVar9 = (undefined *)0x0;
LAB_106ef1be0:
    _objc_release(puVar13);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010c0e00e0(puVar2,param_2,
                      *(undefined8 *)PTR__CBAdvertisementDataManufacturerDataKey_11034ba28);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar9 = puVar2;
  }
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c157ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfe5ec0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c157ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfe5ec0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c071cc0();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) != 0) goto LAB_106ef1d7c;
    func_0x00010c157ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bfe5ec0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
  }
  func_0x00010c1d0640(puVar2,param_2,puVar9,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
LAB_106ef1d7c:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return puVar5;
}



/* Entry: 106ef1bf4; end: 106ef1d9f; -[SCSpectaclesPairingScanner _logAdvertisement:advertisementData:RSSI:] */

void FUN_106ef1bf4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,
                      *(undefined8 *)PTR__CBAdvertisementDataManufacturerDataKey_11034ba28);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x00010c157ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c157ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 != 0) {
    uVar4 = uVar2;
    func_0x00010c0e00e0(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c071cc0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) goto LAB_106ef1d7c;
    func_0x00010c157ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
  }
  func_0x00010c1d0640(uVar2,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_106ef1d7c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ef1da0; end: 106ef1de3; -[SCSpectaclesPairingScanner _minimumRSSI] */

undefined8 FUN_106ef1da0(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010c13c940();
  if ((param_1 & 1) == 0) {
    func_0x00010c230600();
    uVar2 = 0xffffffffffffffb0;
    if (iVar1 == 0) {
      uVar2 = 0xffffffff80000000;
    }
  }
  else {
    uVar2 = 0xffffffffffffffd8;
  }
  return uVar2;
}



/* Entry: 106ef1de4; end: 106ef1e53; +[SCSpectaclesPairingScanner shouldConsiderAdvertisement:RSSI:] */

undefined8 FUN_106ef1de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d32c8;
  func_0x00010c07eca0(PTR_PTR_1126d32c8,param_2,param_3);
  if ((int)puVar1 == 0) {
LAB_106ef1e38:
    uVar2 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126d32c8;
    func_0x00010c06efe0(PTR_PTR_1126d32c8,param_2,param_3);
    if ((int)puVar1 != 0) {
      puVar1 = PTR_PTR_1126d32c8;
      func_0x00010bf4ba60(PTR_PTR_1126d32c8,param_2,param_3);
      if ((int)puVar1 == 0) goto LAB_106ef1e38;
    }
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106ef1e54; end: 106ef1f87; -[SCSpectaclesPairingScanner centralManagerDidUpdateState:] */

void FUN_106ef1e54(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if ((lVar2 == 5) && (lVar2 = param_1, func_0x00010c252440(), lVar2 == 1)) {
    lVar2 = param_1;
    func_0x00010bf34940(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar3;
    func_0x00010c14ec00(lVar2);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c252440();
  _objc_release(param_3);
  func_0x00010c0f33a0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar4 = param_1;
  _objc_opt_class();
  iVar1 = (int)lVar4;
  func_0x00010c22eaa0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_98,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 106ef1f88; end: 106ef2103; -[SCSpectaclesPairingScanner centralManager:didDiscoverPeripheral:advertisementData:RSSI:] */

void FUN_106ef1f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_1;
  _objc_opt_class();
  iVar1 = (int)uVar2;
  func_0x00010c22eaa0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ef2104; end: 106ef21f3;  */

void FUN_106ef2104(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  if (lVar2 == 1) {
    func_0x00010be50160(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    func_0x00010be2dda0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    lVar2 = lVar1;
    func_0x00010bf34940(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106ef21f4;
    puStack_40 = &UNK_110842e18;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    func_0x00010c0f7fc0(lVar3,param_2,&puStack_58);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106ef21f4; end: 106ef21f7;  */

void FUN_106ef21f4(void)

{
  return;
}



/* Entry: 106ef21f8; end: 106ef2303; -[SCSpectaclesPairingScanner centralManager:didConnectPeripheral:] */

void FUN_106ef21f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 106ef2304; end: 106ef23b3;  */

void FUN_106ef2304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2f740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c071ae0(lVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar5 != 0) {
    func_0x00010c252440(lVar1);
    func_0x00010becf280(lVar1,param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ef23b4; end: 106ef24ef; -[SCSpectaclesPairingScanner centralManager:didDisconnectPeripheral:error:] */

void FUN_106ef23b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ef24f0; end: 106ef25bb;  */

void FUN_106ef24f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2f740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c071ae0(lVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar5 != 0) {
    lVar2 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f3360();
    _objc_release(lVar2);
    func_0x00010becf280(lVar1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ef25bc; end: 106ef25c3; -[SCSpectaclesPairingScanner advertisementCodes] */

undefined8 FUN_106ef25bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ef25c4; end: 106ef25cb; -[SCSpectaclesPairingScanner setAdvertisementCodes:] */

void FUN_106ef25c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ef25cc; end: 106ef25d3; -[SCSpectaclesPairingScanner restrictRSSIForFactory] */

undefined1 FUN_106ef25cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106ef25d4; end: 106ef25db; -[SCSpectaclesPairingScanner setRestrictRSSIForFactory:] */

void FUN_106ef25d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106ef25dc; end: 106ef25e3; -[SCSpectaclesPairingScanner requiredPeripheralName] */

undefined8 FUN_106ef25dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ef25e4; end: 106ef25eb; -[SCSpectaclesPairingScanner setRequiredPeripheralName:] */

void FUN_106ef25e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ef25ec; end: 106ef25f3; -[SCSpectaclesPairingScanner centralManager] */

undefined8 FUN_106ef25ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ef25f4; end: 106ef2623; -[SCSpectaclesPairingScanner setCentralManager:] */

void FUN_106ef25f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ef2624; end: 106ef262b; -[SCSpectaclesPairingScanner performer] */

undefined8 FUN_106ef2624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ef262c; end: 106ef265b; -[SCSpectaclesPairingScanner setPerformer:] */

void FUN_106ef262c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ef265c; end: 106ef2663; -[SCSpectaclesPairingScanner seenPeripherals] */

undefined8 FUN_106ef265c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ef2664; end: 106ef2693; -[SCSpectaclesPairingScanner setSeenPeripherals:] */

void FUN_106ef2664(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ef2694; end: 106ef269b; -[SCSpectaclesPairingScanner peripheralsToIgnore] */

undefined8 FUN_106ef2694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ef269c; end: 106ef26cb; -[SCSpectaclesPairingScanner setPeripheralsToIgnore:] */

void FUN_106ef269c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ef26cc; end: 106ef26d3; -[SCSpectaclesPairingScanner state] */

undefined8 FUN_106ef26cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ef26d4; end: 106ef26db; -[SCSpectaclesPairingScanner setState:] */

void FUN_106ef26d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106ef26dc; end: 106ef26f3; -[SCSpectaclesPairingScanner delegate] */

void FUN_106ef26dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ef26f4; end: 106ef26ff; -[SCSpectaclesPairingScanner setDelegate:] */

void FUN_106ef26f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106ef2700; end: 106ef2707; -[SCSpectaclesPairingScanner shouldFilterRSSI] */

undefined1 FUN_106ef2700(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106ef2708; end: 106ef270f; -[SCSpectaclesPairingScanner setShouldFilterRSSI:] */

void FUN_106ef2708(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 106ef2710; end: 106ef2717; -[SCSpectaclesPairingScanner candidatePeripheral] */

undefined8 FUN_106ef2710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106ef2718; end: 106ef2747; -[SCSpectaclesPairingScanner setCandidatePeripheral:] */

void FUN_106ef2718(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ef2748; end: 106ef274f; -[SCSpectaclesPairingScanner recognizedAdvertisementCode] */

undefined8 FUN_106ef2748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106ef2750; end: 106ef277f; -[SCSpectaclesPairingScanner setRecognizedAdvertisementCode:] */

void FUN_106ef2750(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ef2780; end: 106ef280b; -[SCSpectaclesPairingScanner .cxx_destruct] */

void FUN_106ef2780(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ef280c; end: 106ef28ab; -[SCSpectaclesBLEPairingStateMachine initWithDelegate:] */

undefined1 * FUN_106ef280c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126d32d0;
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  func_0x00010becf420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f7c80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTransitions_initialState_1125f2f40,puVar1,0,
                      &PTR____CFConstantStringClassReference_110e8c4b8,0x11);
  _objc_release(puVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 106ef28ac; end: 106ef2b43; +[SCSpectaclesBLEPairingStateMachine _transitionsWithDelegate:] */

undefined1 * FUN_106ef28ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126c7878;
  puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7878;
  puStack_a8 = puVar1;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7878;
  puStack_a0 = puVar2;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7878;
  puStack_98 = puVar3;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c7878;
  puStack_90 = puVar4;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c7878;
  puStack_88 = puVar5;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c7878;
  puStack_80 = puVar6;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7878;
  puStack_78 = puVar7;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126d32d8;
  ppuVar11 = &puStack_f0;
  pcStack_b8 = FUN_106ef2b44;
  puStack_e0 = puVar9;
  puStack_d8 = puVar2;
  puStack_d0 = puVar10;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  func_0x00010becf420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR_PTR_1126f7c88;
  puStack_f0 = puVar3;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_initWithTransitions_initialState_1125f2f40,puVar4,0,
                      &PTR____CFConstantStringClassReference_110e8c4d8,0x11);
  _objc_release(puVar4);
  _objc_release(puVar12);
  return (undefined1 *)ppuVar11;
}



/* Entry: 106ef2b44; end: 106ef2be3; -[SCSpectaclesBTCPairingStateMachine initWithDelegate:] */

undefined1 * FUN_106ef2b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126d32d8;
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  func_0x00010becf420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f7c88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTransitions_initialState_1125f2f40,puVar1,0,
                      &PTR____CFConstantStringClassReference_110e8c4d8,0x11);
  _objc_release(puVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 106ef2be4; end: 106ef2cbf; +[SCSpectaclesBTCPairingStateMachine _transitionsWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_106ef2be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7878;
  func_0x00010c27ac40(PTR_PTR_1126c7878,param_2,0,1,9,PTR_s_authenticateAccessory_112536108,param_3)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_78,puVar5);
  puVar2 = PTR_PTR_1126d3260;
  _objc_retain();
  func_0x00010becf420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR_PTR_1126f7c90;
  ppuVar3 = &puStack_88;
  puStack_88 = puVar1;
  _objc_msgSendSuper2(ppuVar3,PTR_s_initWithTransitions_initialState_1125f2f40,puVar2,0,
                      &PTR____CFConstantStringClassReference_110e8c4f8,0x11);
  _objc_release(puVar2);
  _objc_release(puVar5);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = auStack_78;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak((long)ppuVar3 + (long)_DAT_1127610a8,puVar4);
    _objc_release(puVar4);
    func_0x00010c137fe0(ppuVar3);
  }
  _objc_destroyWeak(auStack_78);
  return ppuVar3;
}


