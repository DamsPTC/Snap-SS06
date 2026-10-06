/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c37a54; end: 106c37ac7; -[SCNotificationSettingBlizzardLogger initWithBlizzard:] */

undefined1 * FUN_106c37a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5dc8;
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



/* Entry: 106c37ac8; end: 106c37ba3; -[SCNotificationSettingBlizzardLogger logSettingEventWithName:oldValue:newValue:] */

void FUN_106c37ac8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 < 0x25) {
    lVar1 = param_1;
    func_0x00010af60340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf979e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d1820;
    _objc_opt_new(PTR_PTR_1126d1820);
    func_0x00010c1b06c0();
    func_0x00010c1fe3e0(puVar3,param_2,lVar2);
    func_0x00010c1d0d20(puVar3,param_2,param_4);
    func_0x00010c1ccc60(puVar3,param_2,param_5);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106c37ba4; end: 106c37baf; -[SCNotificationSettingBlizzardLogger .cxx_destruct] */

void FUN_106c37ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c37bb0; end: 106c37cab; -[SCNotificationBitmojiSettingMutatorImpl initWithUpdatesPublisher:userPreferences:preferenceKey:updateSettingClient:] */

undefined1 *
FUN_106c37bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5dd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c37cac; end: 106c37e53; -[SCNotificationBitmojiSettingMutatorImpl updateBitmojiSetting:onComplete:] */

void FUN_106c37cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_b0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x106c37e58;
  puStack_90 = &UNK_110847658;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106c37e6c;
  puStack_b8 = &UNK_110847658;
  puStack_88 = puStack_b0;
  puStack_78 = puStack_b0;
  func_0x00010c0c0ea0(param_3);
  _objc_initWeak(auStack_d8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_e0,auStack_d8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c283d60(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c37e54; end: 106c37e7b;  */

void FUN_106c37e54(void)

{
  return;
}



/* Entry: 106c37e7c; end: 106c37f9f;  */

void FUN_106c37e7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c08c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106c37fa0; end: 106c38063;  */

void FUN_106c37fa0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bea9ec0();
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126d1828;
  func_0x00010c261740(PTR_PTR_1126d1828);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c38064; end: 106c380c3; -[SCNotificationBitmojiSettingMutatorImpl _setUserPreference:] */

void FUN_106c38064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c380c4; end: 106c3810b; -[SCNotificationBitmojiSettingMutatorImpl .cxx_destruct] */

void FUN_106c380c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c3810c; end: 106c3817f; -[SCNotificationDeviceLPSETokenMutatorImpl initWithRegisterTokenClient:] */

undefined1 * FUN_106c3810c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5dd8;
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



/* Entry: 106c38180; end: 106c38287; -[SCNotificationDeviceLPSETokenMutatorImpl updateDeviceToken:onComplete:] */

void FUN_106c38180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1268e0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c38288; end: 106c383db;  */

void FUN_106c38288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106c383dc;
  puStack_70 = &UNK_110848378;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_90,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c08c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106c383dc; end: 106c3840f;  */

void FUN_106c383dc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c38410; end: 106c38453;  */

void FUN_106c38410(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c38454; end: 106c384af; -[SCNotificationDeviceLPSETokenMutatorImpl _networkingUpdateSuccessWithLPSEToken:onComplete:] */

void FUN_106c38454(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126d1830;
  _objc_retain(in_x3);
  func_0x00010c261740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c384b0; end: 106c38523; -[SCNotificationDeviceLPSETokenMutatorImpl _networkingUpdateErrorWithLPSEToken:statusCode:onComplete:] */

void FUN_106c384b0(void)

{
  undefined *puVar1;
  long in_x4;
  
  puVar1 = PTR_PTR_1126d1830;
  _objc_retain(in_x4);
  func_0x00010bfbed80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x4 + 0x10))(in_x4,puVar1);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c38524; end: 106c3852f; -[SCNotificationDeviceLPSETokenMutatorImpl .cxx_destruct] */

void FUN_106c38524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c38530; end: 106c385a3; -[SCNotificationDeviceTokenMutatorImpl initWithRegisterTokenClient:] */

undefined1 * FUN_106c38530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5de0;
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



/* Entry: 106c385a4; end: 106c386c7; -[SCNotificationDeviceTokenMutatorImpl updateDeviceToken:encryptionKey:onComplete:] */

void FUN_106c385a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c125c40(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c386c8; end: 106c3881b;  */

void FUN_106c386c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106c3881c;
  puStack_70 = &UNK_110848378;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_90,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c08c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106c3881c; end: 106c3884f;  */

void FUN_106c3881c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c38850; end: 106c38893;  */

void FUN_106c38850(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c38894; end: 106c388ef; -[SCNotificationDeviceTokenMutatorImpl _networkingUpdateSuccessWithApnsToken:onComplete:] */

void FUN_106c38894(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126d1838;
  _objc_retain(in_x3);
  func_0x00010c261740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c388f0; end: 106c38963; -[SCNotificationDeviceTokenMutatorImpl _networkingUpdateErrorWithApnsToken:statusCode:onComplete:] */

void FUN_106c388f0(void)

{
  undefined *puVar1;
  long in_x4;
  
  puVar1 = PTR_PTR_1126d1838;
  _objc_retain(in_x4);
  func_0x00010bfbed80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x4 + 0x10))(in_x4,puVar1);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c38964; end: 106c3896f; -[SCNotificationDeviceTokenMutatorImpl .cxx_destruct] */

void FUN_106c38964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c38970; end: 106c389e3; -[SCNotificationDeviceVoipTokenMutatorImpl initWithRegisterTokenClient:] */

undefined1 * FUN_106c38970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5de8;
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



/* Entry: 106c389e4; end: 106c38aeb; -[SCNotificationDeviceVoipTokenMutatorImpl updateDeviceToken:onComplete:] */

void FUN_106c389e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c127640(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c38aec; end: 106c38c3f;  */

void FUN_106c38aec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106c38c40;
  puStack_70 = &UNK_110848378;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_90,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c08c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106c38c40; end: 106c38c73;  */

void FUN_106c38c40(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c38c74; end: 106c38cb7;  */

void FUN_106c38c74(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c38cb8; end: 106c38d13; -[SCNotificationDeviceVoipTokenMutatorImpl _networkingUpdateSuccessWithVoipToken:onComplete:] */

void FUN_106c38cb8(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126d1840;
  _objc_retain(in_x3);
  func_0x00010c261740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c38d14; end: 106c38d87; -[SCNotificationDeviceVoipTokenMutatorImpl _networkingUpdateErrorWithVoipToken:statusCode:onComplete:] */

void FUN_106c38d14(void)

{
  undefined *puVar1;
  long in_x4;
  
  puVar1 = PTR_PTR_1126d1840;
  _objc_retain(in_x4);
  func_0x00010bfbed80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x4 + 0x10))(in_x4,puVar1);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c38d88; end: 106c38d93; -[SCNotificationDeviceVoipTokenMutatorImpl .cxx_destruct] */

void FUN_106c38d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c38d94; end: 106c38eb7; -[SCNotificationEnabledSettingMutatorImpl initWithUpdatesPublisher:userPreferences:preferenceKey:updateSettingClient:graphene:] */

undefined1 *
FUN_106c38d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5df0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c38eb8; end: 106c39057; -[SCNotificationEnabledSettingMutatorImpl updateEnabledSetting:onComplete:] */

void FUN_106c38eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x106c3905c;
  puStack_80 = &UNK_110847658;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106c39070;
  puStack_a8 = &UNK_110847658;
  puStack_78 = puStack_a0;
  puStack_68 = puStack_a0;
  func_0x00010c0c0ea0(param_3);
  _objc_initWeak(auStack_c8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c285820(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c39058; end: 106c3907f;  */

void FUN_106c39058(void)

{
  return;
}



/* Entry: 106c39080; end: 106c39187;  */

void FUN_106c39080(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0c08c0(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c39188; end: 106c3924f;  */

void FUN_106c39188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bea9ec0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010be904c0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126d1848;
  func_0x00010c261740(PTR_PTR_1126d1848);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c39250; end: 106c392af; -[SCNotificationEnabledSettingMutatorImpl _setUserPreference:] */

void FUN_106c39250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c392b0; end: 106c3930b; -[SCNotificationEnabledSettingMutatorImpl _reportSuccessGraphene] */

void FUN_106c392b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010bf92aa0(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3930c; end: 106c393df; -[SCNotificationEnabledSettingMutatorImpl _reportFailureGrapheneWithstatusCode:] */

void FUN_106c3930c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010bf92a80(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e7a6b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106c393e0; end: 106c39433; -[SCNotificationEnabledSettingMutatorImpl .cxx_destruct] */

void FUN_106c393e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c39434; end: 106c3952f; -[SCNotificationPrivacySettingMutatorImpl initWithUpdatesPublisher:userPreferences:preferenceKey:updateSettingClient:graphene:] */

undefined1 *
FUN_106c39434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5df8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c39530; end: 106c396d3; -[SCNotificationPrivacySettingMutatorImpl updatePrivacySetting:onComplete:] */

void FUN_106c39530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x106c396d8;
  puStack_80 = &UNK_110847658;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106c396ec;
  puStack_a8 = &UNK_110847658;
  puStack_78 = puStack_a0;
  puStack_68 = puStack_a0;
  func_0x00010c0c0ec0(param_3);
  _objc_initWeak(auStack_c8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c288c80(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c396d4; end: 106c396ff;  */

void FUN_106c396d4(void)

{
  return;
}



/* Entry: 106c39700; end: 106c39807;  */

void FUN_106c39700(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0c08c0(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c39808; end: 106c398cf;  */

void FUN_106c39808(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bea9ec0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010be904c0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126d1850;
  func_0x00010c261740(PTR_PTR_1126d1850);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c398d0; end: 106c3992f; -[SCNotificationPrivacySettingMutatorImpl _setUserPreference:] */

void FUN_106c398d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c39930; end: 106c3998b; -[SCNotificationPrivacySettingMutatorImpl _reportSuccessGraphene] */

void FUN_106c39930(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010c114080(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3998c; end: 106c39a5f; -[SCNotificationPrivacySettingMutatorImpl _reportFailureGrapheneWithstatusCode:] */

void FUN_106c3998c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010c114060(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e7a6b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106c39a60; end: 106c39ab3; -[SCNotificationPrivacySettingMutatorImpl .cxx_destruct] */

void FUN_106c39a60(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c39ab4; end: 106c39b3b; -[SCNotificationDataDeltaSyncProcessor initWithUserId:] */

undefined1 * FUN_106c39ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5e00;
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



/* Entry: 106c39b3c; end: 106c39b67; -[SCNotificationDataDeltaSyncProcessor type] */

void FUN_106c39b3c(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c39b68; end: 106c39bc7; -[SCNotificationDataDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_106c39b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c087060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c071ae0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c39bc8; end: 106c3a9bf; -[SCNotificationDataDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_106c39bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  ,long param_6,undefined **param_7)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined8 uStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 *puStack_4d8;
  undefined1 *puStack_4d0;
  code *pcStack_4c8;
  undefined **ppuStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined **ppuStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a1;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 **ppuStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined **appuStack_298 [49];
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_c8 [3];
  long *plStack_b0;
  long *plStack_a8;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4a0 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lStack_498 = param_6;
  _objc_retain(param_6);
  ppuStack_410 = param_7;
  _objc_retain(param_7);
  lStack_490 = param_5;
  if (param_4 != 0) {
    _objc_opt_class(PTR_PTR_1126d17d0);
    if (ppuStack_410 == (undefined **)0x0) {
      uStack_e0 = 0;
      puStack_f8 = (undefined *)0x0;
      pcStack_100 = (code *)0x0;
      uStack_e8 = 0;
      ppuStack_f0 = (undefined8 **)0x0;
      pppuStack_108 = (undefined ***)0x0;
      ppuStack_110 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_110);
    }
    puStack_2e0 = (undefined8 *)0x0;
    ppuStack_2d8 = (undefined8 **)0x0;
    pcStack_2d0 = (code *)0x0;
    uStack_3a0 = (ulong)uStack_3a0._4_4_ << 0x20;
    pppuVar2 = &ppuStack_110;
    func_0x00010054c81c(pppuVar2,&puStack_2e0,&uStack_3a0);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_2e0 != (undefined8 *)0x0) {
      ppuStack_2d8 = (undefined8 **)puStack_2e0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_e8);
    _objc_release(puStack_f8);
    _objc_release(pcStack_100);
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    puStack_310 = (undefined8 *)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    _objc_retain(pppuVar2);
    pppuVar3 = pppuVar2;
    func_0x00010bf52a60();
    if (pppuVar3 != (undefined ***)0x0) {
      param_7 = (undefined **)*puStack_310;
      do {
        pppuVar15 = (undefined ***)0x0;
        do {
          if ((undefined **)*puStack_310 != param_7) {
            _objc_enumerationMutation(pppuVar2);
          }
          puVar4 = PTR_PTR_1126d1858;
          FUN_106c3cabc(PTR_PTR_1126d1858,*(undefined8 *)(lStack_318 + (long)pppuVar15 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(ppuStack_410);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
          pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
        } while (pppuVar3 != pppuVar15);
        pppuVar3 = pppuVar2;
        func_0x00010bf52a60();
      } while (pppuVar3 != (undefined ***)0x0);
    }
    _objc_release(pppuVar2);
    _objc_release(pppuVar2);
  }
  lVar5 = lStack_490;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  _objc_retain(lStack_490);
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lStack_458 = *plStack_350;
    ppuStack_460 = &PTR____CFConstantStringClassReference_110db1158;
    ppuStack_470 = &PTR____CFConstantStringClassReference_110db0518;
    ppuStack_468 = &PTR____CFConstantStringClassReference_110db04f8;
    ppuStack_480 = &PTR____CFConstantStringClassReference_110db0558;
    ppuStack_478 = &PTR____CFConstantStringClassReference_110db0538;
    ppuStack_488 = &PTR____CFConstantStringClassReference_110e75c98;
    do {
      lVar13 = 0;
      lStack_450 = lVar5;
      do {
        if (*plStack_350 != lStack_458) {
          _objc_enumerationMutation(lStack_490);
        }
        uVar19 = *(undefined8 *)(lStack_358 + lVar13 * 8);
        puVar4 = PTR_PTR_1126d17d0;
        _objc_alloc();
        uVar12 = uVar19;
        func_0x00010c084700();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar12;
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        uStack_430 = uVar12;
        FUN_106c3a9c0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar19;
        uStack_428 = uVar6;
        uStack_408 = uVar7;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = (undefined8 *)0x0;
        pcStack_2d0 = (code *)0x2020000000;
        puStack_2c8 = (undefined *)0x0;
        uVar6 = uVar12;
        ppuStack_2d8 = &puStack_2e0;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
        pppuStack_108 = (undefined ***)0xc2000000;
        pcStack_100 = FUN_106c3aca0;
        puStack_f8 = &UNK_110885e08;
        uStack_4b8 = 0;
        ppuStack_4c0 = (undefined **)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_420 = uVar12;
        ppuStack_f0 = &puStack_2e0;
        func_0x00010c0c0580();
        puStack_418 = puVar4;
        _objc_release(uVar6);
        __Block_object_dispose(&puStack_2e0,8);
        uVar12 = uVar19;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = (undefined8 *)0x0;
        pcStack_2d0 = (code *)0x2020000000;
        puStack_2c8 = (undefined *)0x0;
        uVar6 = uVar12;
        ppuStack_2d8 = &puStack_2e0;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
        pppuStack_108 = (undefined ***)0xc2000000;
        pcStack_100 = (code *)0x106c3acb0;
        puStack_f8 = &UNK_110885e08;
        uStack_4b8 = 0;
        ppuStack_4c0 = (undefined **)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_438 = uVar12;
        ppuStack_f0 = &puStack_2e0;
        func_0x00010c0c0580();
        _objc_release(uVar6);
        __Block_object_dispose(&puStack_2e0,8);
        uVar12 = uVar19;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = (undefined **)0x0;
        pcStack_100 = (code *)0x3032000000;
        puStack_f8 = (undefined *)0x106c3ac50;
        ppuStack_f0 = (undefined8 **)0x106c3ac60;
        uStack_e8 = 0;
        uStack_440 = uVar12;
        pppuStack_108 = &ppuStack_110;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_2d8 = (undefined8 **)0xc2000000;
        pcStack_2d0 = FUN_106c3acc0;
        puStack_2c8 = &UNK_110864a68;
        uStack_4b8 = 0;
        ppuStack_4c0 = (undefined **)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        pppuStack_2c0 = &ppuStack_110;
        func_0x00010c0c0580();
        _objc_release(uVar12);
        param_7 = pppuStack_108[5];
        _objc_retain(param_7);
        __Block_object_dispose(&ppuStack_110,8);
        _objc_release(uStack_e8);
        uVar12 = uVar19;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = (undefined **)0x0;
        pcStack_100 = (code *)0x3032000000;
        puStack_f8 = (undefined *)0x106c3ac50;
        ppuStack_f0 = (undefined8 **)0x106c3ac60;
        uStack_e8 = 0;
        uStack_448 = uVar12;
        pppuStack_108 = &ppuStack_110;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_2d8 = (undefined8 **)0xc2000000;
        pcStack_2d0 = (code *)0x106c3acf8;
        puStack_2c8 = &UNK_110864a68;
        uStack_4b8 = 0;
        ppuStack_4c0 = (undefined **)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        pppuStack_2c0 = &ppuStack_110;
        func_0x00010c0c0580();
        _objc_release(uVar12);
        ppuVar16 = pppuStack_108[5];
        _objc_retain(ppuVar16);
        __Block_object_dispose(&ppuStack_110,8);
        _objc_release(uStack_e8);
        uVar12 = uVar19;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = (undefined8 *)0x0;
        pcStack_2d0 = (code *)0x2020000000;
        puStack_2c8 = (undefined *)0x0;
        uVar6 = uVar12;
        ppuStack_2d8 = &puStack_2e0;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
        pppuStack_108 = (undefined ***)0xc2000000;
        pcStack_100 = FUN_106c3ad30;
        puStack_f8 = &UNK_110885e08;
        uStack_4b8 = 0;
        ppuStack_4c0 = (undefined **)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        ppuStack_f0 = &puStack_2e0;
        func_0x00010c0c0580();
        _objc_release(uVar6);
        __Block_object_dispose(&puStack_2e0,8);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = (undefined **)0x0;
        pcStack_100 = (code *)0x3032000000;
        puStack_f8 = (undefined *)0x106c3ac50;
        ppuStack_f0 = (undefined8 **)0x106c3ac60;
        uStack_e8 = 0;
        uVar6 = uVar19;
        pppuStack_108 = &ppuStack_110;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_2d8 = (undefined8 **)0xc2000000;
        pcStack_2d0 = FUN_106c3ad40;
        puStack_2c8 = &UNK_110864a68;
        uStack_4b8 = 0;
        ppuStack_4c0 = (undefined **)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        pppuStack_2c0 = &ppuStack_110;
        func_0x00010c0c0580();
        _objc_release(uVar6);
        ppuVar20 = pppuStack_108[5];
        _objc_retain(ppuVar20);
        __Block_object_dispose(&ppuStack_110,8);
        _objc_release(uStack_e8);
        puVar4 = puStack_418;
        ppuStack_4c0 = ppuVar20;
        func_0x00010c02d6c0(puStack_418);
        _objc_release(ppuVar20);
        _objc_release(uVar19);
        _objc_release(uVar12);
        _objc_release(ppuVar16);
        _objc_release(uStack_448);
        _objc_release(param_7);
        _objc_release(uStack_440);
        _objc_release(uStack_438);
        _objc_release(uStack_420);
        _objc_release(uStack_408);
        _objc_release(uStack_428);
        _objc_release(uStack_430);
        puVar8 = puVar4;
        FUN_106c3cb30(puVar4,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(ppuStack_410);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lStack_450 != lVar13);
      lVar5 = lStack_490;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lStack_490);
  lVar5 = lStack_498;
  func_0x000100504554(lStack_498,&PTR___NSConcreteGlobalBlock_11096aaa0);
  _objc_opt_class(PTR_PTR_1126d17d0);
  if (ppuStack_410 == (undefined **)0x0) {
    uStack_370 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3a0);
  }
  puVar9 = &uStack_3a1;
  FUN_106c3c09c(puVar9);
  _objc_retain(lVar5);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3c0 = 0;
  lVar13 = lVar5;
  func_0x00010bf529e0(lVar5);
  func_0x0001004c2bb4(&uStack_3c0,lVar13);
  ppuStack_2d8 = (undefined8 **)0x0;
  puStack_2e0 = (undefined8 *)0x0;
  puStack_2c8 = (undefined *)0x0;
  pcStack_2d0 = (code *)0x0;
  uStack_2b8 = 0;
  pppuStack_2c0 = (undefined ***)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  _objc_retain(lVar5);
  lVar13 = lVar5;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar14 = *(long *)pcStack_2d0;
    do {
      lVar17 = 0;
      do {
        if (*(long *)pcStack_2d0 != lVar14) {
          _objc_enumerationMutation(lVar5);
        }
        param_7 = *(undefined ***)((long)ppuStack_2d8 + lVar17 * 8);
        _objc_retain(param_7);
        appuStack_298[0] = param_7;
        func_0x0001004c2d3c(&uStack_3c0,appuStack_298);
        _objc_release(appuStack_298[0]);
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
      lVar13 = lVar5;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  func_0x0001004c2e3c(&ppuStack_110,0xc,puVar9,&uStack_3c0);
  puStack_2e0 = (undefined8 *)0x0;
  ppuStack_2d8 = (undefined8 **)0x0;
  pcStack_2d0 = (code *)0x0;
  appuStack_298[0] = (undefined **)((ulong)appuStack_298[0] & 0xffffffff00000000);
  puVar10 = &uStack_3a0;
  func_0x0001000e77a0(puVar10,&ppuStack_110,&puStack_2e0,appuStack_298);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2e0 != (undefined8 *)0x0) {
    ppuStack_2d8 = (undefined8 **)puStack_2e0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2e0 = auStack_c8;
  func_0x000100105004(&puStack_2e0);
  puStack_2e0 = &uStack_3c0;
  func_0x000100105004(&puStack_2e0);
  func_0x0001000e76e0(&uStack_378);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  _objc_retain(puVar10);
  puVar11 = puVar10;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar13 = *plStack_3f0;
    do {
      puVar18 = (undefined8 *)0x0;
      do {
        if (*plStack_3f0 != lVar13) {
          _objc_enumerationMutation(puVar10);
        }
        param_7 = (undefined **)PTR_PTR_1126d1858;
        FUN_106c3cabc(PTR_PTR_1126d1858,*(undefined8 *)(lStack_3f8 + (long)puVar18 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(ppuStack_410);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(param_7);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (puVar11 != puVar18);
      puVar11 = puVar10;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar10);
  _objc_release(puVar10);
  _objc_release(lVar5);
  _objc_release(ppuStack_410);
  _objc_release(lStack_498);
  _objc_release(lStack_490);
  uVar12 = uStack_4a0;
  _objc_release(uStack_4a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  _objc_release(ppuStack_410);
  _objc_release(lStack_498);
  _objc_release(lStack_490);
  _objc_release(uStack_4a0);
  __Unwind_Resume(uVar12);
  pcStack_4c8 = FUN_106c3a9c0;
  puStack_518 = &uStack_520;
  uStack_520 = 0;
  uStack_510 = 0x3032000000;
  uStack_508 = 0x106c3ac50;
  uStack_500 = 0x106c3ac60;
  uStack_4f8 = 0;
  ppuStack_4f0 = param_7;
  uStack_4e8 = 0;
  lStack_4e0 = lVar5;
  puStack_4d8 = puVar10;
  puStack_4d0 = &stack0xfffffffffffffff0;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee60();
  _objc_release(uVar6);
  _objc_release(uVar12);
  uVar12 = puStack_518[5];
  _objc_retain(uVar12);
  __Block_object_dispose(&uStack_520,8);
  _objc_release(uStack_4f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 106c3a9c0; end: 106c3aaef;  */

void FUN_106c3a9c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  uStack_48 = 0x106c3ac50;
  uStack_40 = 0x106c3ac60;
  uStack_38 = 0;
  func_0x00010c0dfd40(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee60();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c3aaf0; end: 106c3ab4b;  */

void FUN_106c3aaf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f5860(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c3a9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c3ab4c; end: 106c3ab7b; -[SCNotificationDataDeltaSyncProcessor dataSyncerIdentifier] */

void FUN_106c3ab4c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e7a438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e7a438);
  return;
}



/* Entry: 106c3ab7c; end: 106c3aba7; -[SCNotificationDataDeltaSyncProcessor deltaSyncClientType] */

void FUN_106c3ab7c(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c3aba8; end: 106c3ac37; -[SCNotificationDataDeltaSyncProcessor deltaSyncKey] */

void FUN_106c3aba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc(PTR_PTR_1126b0440);
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e7a438,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c3ac38; end: 106c3ac3f; -[SCNotificationDataDeltaSyncProcessor deltaSyncType] */

undefined8 FUN_106c3ac38(void)

{
  return 2;
}



/* Entry: 106c3ac40; end: 106c3ac43; -[SCNotificationDataDeltaSyncProcessor onDeltaSync:isFullSync:updates:deletions:transactionContext:] */

void FUN_106c3ac40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processDeltaSyncWithGroupKey_isF_112622c68);
  return;
}



/* Entry: 106c3ac44; end: 106c3ac67; -[SCNotificationDataDeltaSyncProcessor .cxx_destruct] */

void FUN_106c3ac44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c3ac68; end: 106c3ac9f;  */

void FUN_106c3ac68(long param_1,undefined8 param_2)

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



/* Entry: 106c3aca0; end: 106c3acbf;  */

void FUN_106c3aca0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106c3acc0; end: 106c3ad2f;  */

void FUN_106c3acc0(long param_1,undefined8 param_2)

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



/* Entry: 106c3ad30; end: 106c3ad3f;  */

void FUN_106c3ad30(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106c3ad40; end: 106c3ad77;  */

void FUN_106c3ad40(long param_1,undefined8 param_2)

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



/* Entry: 106c3ad78; end: 106c3aeff; -[SCNotificationDataProviderFactory providerWithDocObjectContext:dataObjectType:mutatorUpdates:fallbackValueProvider:newDataProvider:] */

void FUN_106c3ad78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d1860;
  _objc_alloc(PTR_PTR_1126d1860);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106c3af00;
  puStack_70 = &UNK_11096aac0;
  _objc_retain(param_3);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106c3afe4;
  puStack_a8 = &UNK_11096aaf0;
  uStack_a0 = param_1;
  uStack_90 = param_4;
  uStack_68 = param_3;
  _objc_retain(param_6);
  uStack_98 = param_6;
  func_0x00010c00dae0(puVar2,param_2,param_3,&puStack_88,param_5,&puStack_c0,param_7);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c3af00; end: 106c3afe3;  */

void FUN_106c3af00(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d17d0);
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,lVar1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar2 = &uStack_70;
  func_0x00010054c81c(puVar2,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c3afe4; end: 106c3b2a7;  */

void FUN_106c3afe4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  if (puVar1 == (undefined *)0x1) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4da0();
    _objc_release(uVar2);
    puVar3 = param_2;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar6 = *(long *)(param_1 + 0x30);
    puVar3 = (undefined *)0x0;
    if (lVar6 < 3) {
      if (lVar6 == 0) {
        puVar3 = puVar1;
        func_0x00010bf71140(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar6 == 1) {
        puVar3 = puVar1;
        func_0x00010bf71220(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar6 == 2) {
        puVar3 = puVar1;
        func_0x00010bf929e0(puVar1);
        FUN_106c375f8();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar6 == 3) {
      puVar3 = puVar1;
      func_0x00010c114000(puVar1);
      FUN_106c376d4();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar6 == 4) {
      puVar4 = puVar1;
      func_0x00010bf1c220();
      FUN_106c375f8();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ce100;
      func_0x00010c2808e0(PTR_PTR_1126ce100);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      puVar3 = puVar4;
      if ((int)puVar5 != 0) {
        puVar3 = PTR_PTR_1126ce100;
        func_0x00010bf926c0(PTR_PTR_1126ce100);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
    }
    else if (lVar6 == 5) {
      puVar3 = puVar1;
      func_0x00010bf70a20(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  else {
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4da0();
    _objc_release(uVar2);
    puVar3 = *(undefined **)(param_1 + 0x28);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      (**(code **)(puVar3 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c3b2a8; end: 106c3b2b3; -[SCNotificationDataProviderFactory .cxx_destruct] */

void FUN_106c3b2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c3b2b4; end: 106c3b59f; -[SCNotificationDataProviderImpl initWithDocObjectContext:fetchedResultProvider:mutatorUpdates:propertyProcessor:newDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106c3b2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126f5e10;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11275b2d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2d4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2d4) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2d8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2dc) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11275b2e0) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106c3b5a0;
    puStack_98 = &UNK_11096ab20;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2e4);
    *(undefined **)((long)puVar1 + (long)_DAT_11275b2e4) = puVar3;
    _objc_release(uVar2);
    if (param_5 != 0) {
      _objc_copyWeak(auStack_b8,auStack_88);
      lVar5 = param_5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2e8);
      *(long *)((long)puVar1 + (long)_DAT_11275b2e8) = lVar5;
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_b8);
    }
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c3b5a0; end: 106c3b5f3;  */

void FUN_106c3b5a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee5520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c3b5f4; end: 106c3b65f;  */

void FUN_106c3b5f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c3b660; end: 106c3b6cf; -[SCNotificationDataProviderImpl currentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3b660(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11275b2d8);
  func_0x00010be156a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c3b6d0; end: 106c3b6df; -[SCNotificationDataProviderImpl updates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3b6d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275b2e4),PTR_s_target_112678178);
  return;
}



/* Entry: 106c3b6e0; end: 106c3b6f3; -[SCNotificationDataProviderImpl _fetchedResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3b6e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106c3b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_11275b2d4) + 0x10))();
  return;
}



/* Entry: 106c3b6f4; end: 106c3b807; -[SCNotificationDataProviderImpl _updatesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3b6f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010be156a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275b2d0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275b2e0);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0e0500(lVar1,param_2,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106c3b808; end: 106c3b92b; -[SCNotificationDataProviderImpl _processNewData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3b808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b2d0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c3b92c; end: 106c3b99b;  */

void FUN_106c3b92c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71b80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c3b99c; end: 106c3bbaf; -[SCNotificationDataProviderImpl _performDocObjectTransaction:transactionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3b99c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(PTR_PTR_1126d17d0);
  if (param_4 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_4);
  }
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_9c = 0;
  puVar1 = &uStack_80;
  func_0x00010054c81c(puVar1,&lStack_98,&uStack_9c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  puVar2 = puVar1;
  func_0x00010bf0a540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf0a540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = *(long *)(param_1 + _DAT_11275b2dc);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_106c3cb30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c3bbb0; end: 106c3bc3f; -[SCNotificationDataProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3bbb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b2e8,0);
  _objc_storeStrong(param_1 + _DAT_11275b2e4,0);
  _objc_storeStrong(param_1 + _DAT_11275b2e0,0);
  _objc_storeStrong(param_1 + _DAT_11275b2dc,0);
  _objc_storeStrong(param_1 + _DAT_11275b2d8,0);
  _objc_storeStrong(param_1 + _DAT_11275b2d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b2d0,0);
  return;
}



/* Entry: 106c3bc40; end: 106c3bd97; -[SCNotificationData initWithName:enabledSetting:privacySetting:deviceToken:deviceVoipToken:bitmojiSetting:deviceLocationPushToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c3bc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f5e18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2ec) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2f0) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2f4) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2fc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b2fc) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b300) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b304);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b304) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c3bd98; end: 106c3bdbb; -[SCNotificationData copyWithZone:] */

undefined8 FUN_106c3bd98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c3bdbc; end: 106c3be8b; -[SCNotificationData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106c3bdbc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b2ec);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11275b2f0);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11275b2f4);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275b2f8);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b2fc);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11275b300);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275b304);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c3bfa4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c3bfb0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + (long)_DAT_11275b2f0) == *(long *)(param_3 + _DAT_11275b2f0) &&
         (*(long *)((long)puVar3 + (long)_DAT_11275b2f4) == *(long *)(param_3 + _DAT_11275b2f4))) &&
        (*(long *)((long)puVar3 + (long)_DAT_11275b300) == *(long *)(param_3 + _DAT_11275b300))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11275b2ec);
      if ((lVar5 == *(long *)(param_3 + _DAT_11275b2ec)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11275b2f8);
        if ((lVar5 == *(long *)(param_3 + _DAT_11275b2f8)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11275b2fc);
          if ((lVar5 == *(long *)(param_3 + _DAT_11275b2fc)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11275b304);
            if (puVar6 != *(undefined1 **)(param_3 + _DAT_11275b304)) {
              func_0x00010c071ae0();
              goto LAB_106c3bfb0;
            }
            goto LAB_106c3bfa4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c3bfb0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c3be8c; end: 106c3bfcb; -[SCNotificationData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c3be8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c3bfa4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c3bfb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + (long)_DAT_11275b2f0) == *(long *)(param_3 + (long)_DAT_11275b2f0) &&
         (*(long *)(param_1 + (long)_DAT_11275b2f4) == *(long *)(param_3 + (long)_DAT_11275b2f4)))
        && (*(long *)(param_1 + (long)_DAT_11275b300) == *(long *)(param_3 + (long)_DAT_11275b300)))
       )) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11275b2ec);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11275b2ec)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11275b2f8);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11275b2f8)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11275b2fc);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11275b2fc)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11275b304);
            if (lVar3 != *(long *)(param_3 + (long)_DAT_11275b304)) {
              func_0x00010c071ae0();
              goto LAB_106c3bfb0;
            }
            goto LAB_106c3bfa4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c3bfb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c3bfcc; end: 106c3bfdb; -[SCNotificationData name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3bfcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b2ec);
}



/* Entry: 106c3bfdc; end: 106c3bfeb; -[SCNotificationData enabledSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3bfdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b2f0);
}



/* Entry: 106c3bfec; end: 106c3bffb; -[SCNotificationData privacySetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3bfec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b2f4);
}



/* Entry: 106c3bffc; end: 106c3c00b; -[SCNotificationData deviceToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3bffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b2f8);
}



/* Entry: 106c3c00c; end: 106c3c01b; -[SCNotificationData deviceVoipToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3c00c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b2fc);
}



/* Entry: 106c3c01c; end: 106c3c02b; -[SCNotificationData bitmojiSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3c01c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b300);
}



/* Entry: 106c3c02c; end: 106c3c03b; -[SCNotificationData deviceLocationPushToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c3c02c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275b304);
}



/* Entry: 106c3c03c; end: 106c3c09b; -[SCNotificationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c3c03c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b304,0);
  _objc_storeStrong(param_1 + _DAT_11275b2fc,0);
  _objc_storeStrong(param_1 + _DAT_11275b2f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b2ec,0);
  return;
}



/* Entry: 106c3c09c; end: 106c3c0ff;  */

undefined ** FUN_106c3c09c(void)

{
  int iVar1;
  
  if ((bRam000000011381e720 & 1) == 0) {
    iVar1 = 0x1381e720;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113178e60,0x100000000);
      ___cxa_guard_release(0x11381e720);
    }
  }
  return &PTR_PTR_113178e60;
}



/* Entry: 106c3c100; end: 106c3c187;  */

void FUN_106c3c100(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c3c188; end: 106c3c213;  */

void FUN_106c3c188(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c3c214; end: 106c3c21f; +[SCNotificationData table] */

undefined * FUN_106c3c214(void)

{
  return &UNK_10f3c3181;
}


