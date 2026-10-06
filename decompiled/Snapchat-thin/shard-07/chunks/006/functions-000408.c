/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10577d718; end: 10577d74b; -[SCSoundEffects _stopVibration] */

void FUN_10577d718(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 10577d74c; end: 10577d833; -[SCSoundEffects _vibrateOnce] */

void FUN_10577d74c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  if ((puVar3 == (undefined *)0x0) && (puVar3 = puVar1, func_0x00010c07b6a0(), (int)puVar3 != 0)) {
    puVar3 = puVar1;
    func_0x00010c119d40();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10577d81c;
  }
  else {
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x2) {
    if (1 < *(ulong *)(param_1 + 0x10)) goto LAB_10577d81c;
    lVar4 = *(ulong *)(param_1 + 0x10) + 1;
  }
  else {
    lVar4 = 0;
  }
  *(long *)(param_1 + 0x10) = lVar4;
  _AudioServicesPlaySystemSound(0xfff);
LAB_10577d81c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10577d834; end: 10577d8e7; -[SCSoundEffects lockRingingWithLabel:] */

void FUN_10577d834(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c156d80(puVar2,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x40),param_2,puVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c101220();
  if (iVar1 != 0) {
    func_0x00010c256840(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10577d8e8; end: 10577d957; -[SCSoundEffects unlockRingingWithToken:] */

void FUN_10577d8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if ((lVar2 == 0) && (uVar3 = *(ulong *)(param_1 + 0x48), uVar3 != 0)) {
      func_0x00010be97620(param_1,param_2,uVar3,uVar3 < 3,*(undefined8 *)(param_1 + 0x58));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577d958; end: 10577d97b; -[SCSoundEffects ringForBestFriend:incoming:customRingtoneId:] */

void FUN_10577d958(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 2;
  if (param_4 == 0) {
    uVar1 = 4;
  }
  uVar2 = 3;
  if (param_4 != 0) {
    uVar2 = 1;
  }
  if (param_3 == 0) {
    uVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be97630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__ringWithSound_incoming_customRi_112583728,uVar1);
  return;
}



/* Entry: 10577d97c; end: 10577da23; -[SCSoundEffects stopRinging] */

void FUN_10577d97c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10577da24;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10577da24; end: 10577da73;  */

void FUN_10577da24(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x50) = 0;
    func_0x00010bec3b40(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577da74; end: 10577db03; -[SCSoundEffects isRingingForBestFriend:isIncoming:isVibrating:shouldRingOnResume:customRingtoneId:] */

void FUN_10577da74(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined1 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    *(bool *)param_3 = *(long *)(param_1 + 0x28) == 2 || *(long *)(param_1 + 0x28) == 4;
  }
  if (param_4 != 0) {
    *(bool *)param_4 = *(long *)(param_1 + 0x28) - 1U < 2;
  }
  if (param_5 != 0) {
    *(bool *)param_5 = *(long *)(param_1 + 8) != 0;
  }
  if (param_7 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    _objc_retainAutorelease();
    *param_7 = uVar1;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = *(undefined1 *)(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c101230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_playing_11261dea8);
  return;
}



/* Entry: 10577db04; end: 10577dcb3; -[SCSoundEffects _ringWithSound:incoming:customRingtoneId:] */

void FUN_10577db04(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c247240();
  if (((lVar1 != param_3) || (*(long *)(param_1 + 8) == 0)) ||
     (param_5 != *(long *)(param_1 + 0x58))) {
    *(long *)(param_1 + 0x48) = param_3;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = param_5;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
      else {
        func_0x00010c0fe420(*(undefined8 *)(param_1 + 0x20));
      }
      lVar1 = *(long *)(param_1 + 0x60) + 1;
      *(long *)(param_1 + 0x60) = lVar1;
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf07b60();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x2) {
        puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
        func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_48,param_1);
        _objc_copyWeak(auStack_60,auStack_48);
        uStack_50 = (undefined1)param_4;
        lStack_58 = lVar1;
        func_0x00010bfc81e0(puVar3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_48);
        _objc_release(puVar3);
        goto LAB_10577dc78;
      }
    }
    if (param_4 != 0) {
      func_0x00010bec20c0(param_1);
    }
  }
LAB_10577dc78:
  _objc_release(param_5);
  return;
}



/* Entry: 10577dcb4; end: 10577ddb7;  */

void FUN_10577dcb4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x28) == *(long *)(lVar1 + 0x60))) &&
     (*(long *)(lVar1 + 0x48) != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    if (((puVar3 != (undefined *)0x2) || (lVar4 = param_2, func_0x00010bf10fa0(), lVar4 != 1)) &&
       (*(char *)(param_1 + 0x30) == '\x01')) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10577ddb8;
      puStack_50 = &UNK_110842e18;
      lStack_48 = lVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10577ddb8; end: 10577ddbf;  */

void FUN_10577ddb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec20d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startVibration_11258e1d8);
  return;
}



/* Entry: 10577ddc0; end: 10577ddcf; -[SCSoundEffects isHandlingVolumeButtonEvents] */

bool FUN_10577ddc0(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}



/* Entry: 10577ddd0; end: 10577df07; -[SCSoundEffects startHandlingVolumeButtonEvents] */

void FUN_10577ddd0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010c074ac0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14cae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s__handleButtonDown__11252ac10;
  puVar5 = puVar4;
  func_0x00010c14cba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar3,param_2,param_1,puVar2,puVar5,0);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c14cbe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar3,param_2,param_1,puVar2,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10577df08; end: 10577e017; -[SCSoundEffects stopHandlingVolumeButtonEvents] */

void FUN_10577df08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14cba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0(puVar2,param_2,param_1,puVar4,0);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c14cbe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0(puVar2,param_2,param_1,puVar4,0);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ca60();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10577e018; end: 10577e01b; -[SCSoundEffects _handleButtonDown:] */

void FUN_10577e018(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopRinging_112673438);
  return;
}



/* Entry: 10577e01c; end: 10577e063; -[SCSoundEffects _audioSessionWillDeactivate] */

void FUN_10577e01c(long param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x18));
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c101220();
    *(undefined1 *)(param_1 + 0x50) = uVar1;
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 10577e064; end: 10577e097; -[SCSoundEffects _audioSessionActivated] */

void FUN_10577e064(long param_1)

{
  if ((*(char *)(param_1 + 0x38) == '\x01') &&
     (*(undefined1 *)(param_1 + 0x38) = 0, *(char *)(param_1 + 0x50) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c0fe430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_playContinuously_customRingtoneI_11261d328,
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58));
    return;
  }
  return;
}



/* Entry: 10577e098; end: 10577e0f7; -[SCSoundEffects .cxx_destruct] */

void FUN_10577e098(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577e0f8; end: 10577e28b; -[SCSoundPlayer initWithSoundContentDelivery:graphene:respectMuteSwitchForSounds:cachePlayingState:] */

undefined1 *
FUN_10577e0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea238;
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
    *(undefined1 *)((long)puVar1 + 0x48) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    if (*(char *)((long)puVar1 + 0x48) == '\x01') {
      puVar3 = PTR_PTR_1126b6df8;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
      *(undefined **)((long)puVar1 + 0x50) = puVar3;
      _objc_release(uVar2);
      func_0x00010c24d960(*(undefined8 *)((long)puVar1 + 0x50));
      func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x50));
      puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577e28c; end: 10577e2e3; -[SCSoundPlayer dealloc] */

void FUN_10577e28c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c12cf80(*(long *)(param_1 + 0x50),param_2,param_1);
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x50));
  }
  puStack_28 = PTR_PTR_1126ea238;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10577e2e4; end: 10577e2ff; -[SCSoundPlayer playing] */

bool FUN_10577e2e4(long param_1)

{
  func_0x00010c247240();
  return param_1 != 0;
}



/* Entry: 10577e300; end: 10577e393; -[SCSoundPlayer soundPlaying] */

long FUN_10577e300(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf27530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cachedSoundPlaying_1125a76f0);
    return param_1;
  }
  lVar3 = param_1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c07a400();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  _objc_release(lVar3);
  return lVar4;
}



/* Entry: 10577e394; end: 10577e44b; -[SCSoundPlayer playOnce:] */

void FUN_10577e394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10577e44c; end: 10577e487;  */

void FUN_10577e44c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577e488; end: 10577e567; -[SCSoundPlayer playContinuously:customRingtoneId:] */

void FUN_10577e488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10577e568; end: 10577e5d3;  */

void FUN_10577e568(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c247240();
  if (lVar2 == *(long *)(param_1 + 0x30)) {
    if ((1 < lVar2 - 1U) || (lVar2 = *(long *)(param_1 + 0x20), *(long *)(lVar1 + 0x38) == lVar2))
    goto LAB_10577e5c4;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  func_0x00010be78e40(lVar1,param_2,*(long *)(param_1 + 0x30),1,lVar2);
LAB_10577e5c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10577e5d4; end: 10577e67b; -[SCSoundPlayer stop] */

void FUN_10577e5d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10577e67c; end: 10577e713;  */

void FUN_10577e67c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010c100720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255780();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      func_0x00010c175500(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577e714; end: 10577e757; -[SCSoundPlayer _appWillEnterForeground] */

void FUN_10577e714(long param_1)

{
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(long *)(param_1 + 0x50) != 0)) {
    func_0x00010c255780();
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_start_112671080);
    return;
  }
  return;
}



/* Entry: 10577e758; end: 10577e817; -[SCSoundPlayer _isUsingBuiltInSpeaker] */

undefined * FUN_10577e758(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c104100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 10577e818; end: 10577e9ff; -[SCSoundPlayer _preparePlayerAndPlaySound:continuously:customRingtoneId:] */

void FUN_10577e818(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar4 = param_2;
  func_0x00010c100720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255780();
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010c175500(param_2,param_3,0);
  }
  *(long *)(param_2 + 0x20) = param_4;
  *(undefined1 *)(param_2 + 0x28) = 1;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(long *)(param_2 + 0x38) = param_6;
  _objc_release(uVar3);
  if ((param_4 - 1U < 2) && (param_6 != 0)) {
    *(long *)(param_2 + 0x18) = param_4;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = param_6;
    _objc_release(uVar3);
    func_0x00010bdf1a40(param_2,param_3,param_4,param_6,puVar1);
  }
  else {
    lVar4 = param_2;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 == 0) || (*(long *)(param_2 + 0x18) != param_4)) {
      _objc_release();
    }
    else {
      lVar4 = *(long *)(param_2 + 0x40);
      _objc_release();
      if (lVar4 == param_6) {
        lVar4 = param_2;
        func_0x00010c100720(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf60480();
        _objc_release(lVar4);
        if (param_1 != 0.0) {
          lVar4 = param_2;
          func_0x00010c100720(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c187d00(0);
          _objc_release(lVar4);
        }
        func_0x00010be74980(param_2,param_3,param_4,puVar1,param_5);
        goto LAB_10577e9d8;
      }
    }
    *(long *)(param_2 + 0x18) = param_4;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = param_6;
    _objc_release(uVar3);
    func_0x00010bdf1a00(param_2,param_3,param_4,param_5,puVar1);
  }
LAB_10577e9d8:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10577ea00; end: 10577eaf3; -[SCSoundPlayer _createPlayerForSound:continuously:preparationStartTime:] */

void FUN_10577ea00(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  _objc_retain(param_5);
  uStack_50 = param_4;
  func_0x00010bf57b00(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 10577eaf4; end: 10577ebcf;  */

void FUN_10577eaf4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10577ebd0; end: 10577ebff;  */

void FUN_10577ebd0(long param_1,undefined8 param_2)

{
  func_0x00010c1dda40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be74990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__playSound_preparationStartTime__11257ac00,
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 10577ec00; end: 10577ed43; -[SCSoundPlayer _createPlayerWithCustomRingtoneForSound:customRingtoneId:preparationStartTime:] */

void FUN_10577ec00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2a30;
  func_0x00010bf61b20(PTR_PTR_1126b2a30,param_2,param_4);
  puVar2 = PTR_PTR_1126b2a30;
  func_0x00010c247040(PTR_PTR_1126b2a30,param_2,puVar1,param_3 == 2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bdf1a00(param_1,param_2,param_3,1,param_5);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf57b20(uVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dda40(param_1,param_2,uVar4);
    _objc_release(uVar4);
    func_0x00010be74980(param_1,param_2,param_3,param_5,1);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10577ed44; end: 10577ef9b; -[SCSoundPlayer _playSound:preparationStartTime:continuously:] */

void FUN_10577ed44(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,byte param_5)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) goto LAB_10577ef80;
  if (((*(char *)(param_1 + 0x48) == '\x01') && (lVar3 = *(long *)(param_1 + 0x50), lVar3 != 0)) &&
     (func_0x00010c0cfd40(), lVar3 == 1)) {
    uVar2 = param_1;
    func_0x00010be45220();
    dVar8 = 0.0;
    if ((uVar2 & 1) == 0) goto LAB_10577edc0;
  }
  else {
LAB_10577edc0:
    dVar8 = 5.24696615599211e-315;
    if (param_3 != 6) {
      dVar8 = 5.26354424712089e-315;
    }
  }
  uVar2 = param_1;
  func_0x00010c100720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2241a0();
  _objc_release(uVar2);
  func_0x00010c26f3a0(param_4);
  bVar1 = param_5;
  if (-0.1 < dVar8) {
    bVar1 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == param_3) && ((*(byte *)(param_1 + 0x28) & bVar1 & 1) != 0)) {
    uVar2 = param_1;
    func_0x00010c100720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfd20();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar7 != 0) {
      uVar2 = param_1;
      func_0x00010c100720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar2);
      func_0x00010c175500(param_1,param_2,param_3);
    }
    uVar2 = param_1;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0fe360();
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((int)uVar7 != 0) {
        func_0x00010c175500(param_1,param_2,0);
      }
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = PTR_PTR_1126bdeb8;
    if ((param_5 & 1) == 0) {
      func_0x00010c247220(PTR_PTR_1126bdeb8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c141340();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfec2a0(uVar7,param_2,puVar6);
    _objc_release(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar7 != 0) {
      func_0x00010c175500(param_1,param_2,0);
    }
  }
LAB_10577ef80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10577ef9c; end: 10577f067; -[SCSoundPlayer secretFeatureChecker:didCheckSecretFeatureMode:] */

void FUN_10577ef9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10577f068; end: 10577f0ff;  */

void FUN_10577f068(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 == 0) || (uVar3 = uVar2, func_0x00010c07a400(), (int)uVar3 == 0)) goto LAB_10577f0e4;
  if (*(long *)(param_1 + 0x28) == 1) {
    uVar3 = uVar1;
    func_0x00010be45220();
    uVar4 = 0;
    if ((uVar3 & 1) == 0) goto LAB_10577f0c4;
  }
  else {
LAB_10577f0c4:
    uVar4 = 0x3f4ccccd;
    if (*(long *)(uVar1 + 0x18) != 6) {
      uVar4 = 0x3f800000;
    }
  }
  func_0x00010c2241a0(uVar4,uVar2);
LAB_10577f0e4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10577f100; end: 10577f1ff; -[SCSoundPlayer audioPlayerDidFinishPlaying:successfully:] */

void FUN_10577f100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 10577f200; end: 10577f27f;  */

void FUN_10577f200(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = lVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == lVar2) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c07a400();
    _objc_release(lVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c175500(lVar1,param_2,0);
    }
  }
  else {
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10577f280; end: 10577f28b; -[SCSoundPlayer player] */

void FUN_10577f280(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 10577f28c; end: 10577f293; -[SCSoundPlayer setPlayer:] */

void FUN_10577f28c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10577f294; end: 10577f29b; -[SCSoundPlayer cachedSoundPlaying] */

undefined8 FUN_10577f294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10577f29c; end: 10577f2a3; -[SCSoundPlayer setCachedSoundPlaying:] */

void FUN_10577f29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10577f2a4; end: 10577f31b; -[SCSoundPlayer .cxx_destruct] */

void FUN_10577f2a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577f31c; end: 10577f3a3;  */

void FUN_10577f31c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfde58;
  if (1 < param_1 - 3U) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfde38;
  }
  _objc_retain(ppuVar1);
  FUN_10577f3a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25ce40(ppuVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10577f3a4; end: 10577f3c7;  */

undefined * FUN_10577f3a4(long param_1)

{
  if (param_1 - 1U < 6) {
    return (&PTR_PTR_1108b09c0)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 10577f3c8; end: 10577f427;  */

void FUN_10577f3c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  FUN_10577f3a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar1,param_2,param_1,0xd);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10577f428; end: 10577f4a3;  */

void FUN_10577f428(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8;
  _objc_alloc(PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8);
  func_0x00010c008360();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10577f4a4; end: 10577f4cf; +[SCGrapheneSoundMetric soundPlay] */

void FUN_10577f4a4(void)

{
  _objc_alloc(PTR_PTR_1126bdeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577f4d0; end: 10577f4fb; +[SCGrapheneSoundMetric ringtonePlay] */

void FUN_10577f4d0(void)

{
  _objc_alloc(PTR_PTR_1126bdeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577f4fc; end: 10577f527; +[SCGrapheneSoundMetric playerInitSuccess] */

void FUN_10577f4fc(void)

{
  _objc_alloc(PTR_PTR_1126bdeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577f528; end: 10577f553; +[SCGrapheneSoundMetric playerInitFailure] */

void FUN_10577f528(void)

{
  _objc_alloc(PTR_PTR_1126bdeb8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577f554; end: 10577f5f3; -[SCGrapheneSoundMetric description] */

void FUN_10577f554(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfdf38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dfdf38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10577f5f4; end: 10577f813; -[SCGrapheneRegistry soundGraphene] */

void FUN_10577f5f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10577f67c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfea8 != -1) {
    func_0x00010002a2fc(0x1136bfea8,&puStack_48);
  }
  uVar1 = uRam00000001136bfea0;
  _objc_retain(uRam00000001136bfea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10577f814; end: 10577f897; -[SCBitmojiStickerServicesEntryPoint _searchDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577f814(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_1127292ec;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfecac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5afa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10577f898; end: 10577f8b3; -[SCBitmojiStickerServicesEntryPoint _refresher] */

void FUN_10577f898(void)

{
  _objc_alloc_init(PTR_PTR_1126bded8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577f8b4; end: 10577fa43; -[SCBitmojiStickerServicesEntryPoint _search] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577f8b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126bdee0;
  _objc_alloc(PTR_PTR_1126bdee0);
  lVar2 = param_1;
  func_0x00010be9c600(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127292f4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bf13100(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112729304;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010bfb7c20(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112729300;
    _objc_loadWeakRetained(lVar9);
  }
  lVar5 = lVar9;
  func_0x00010bf1c460(lVar9);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127292f0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf62fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009420(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,8,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10577fa44; end: 10577faff; -[SCBitmojiStickerServicesEntryPoint _iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577fa44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bdee8;
  _objc_alloc(PTR_PTR_1126bdee8);
  lVar2 = param_1 + _DAT_1127292f4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127292f8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6260(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10577fb00; end: 10577fb8f; -[SCBitmojiStickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577fb00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127292e8,0);
  _objc_destroyWeak(param_1 + _DAT_112729308);
  _objc_destroyWeak(param_1 + _DAT_112729304);
  _objc_destroyWeak(param_1 + _DAT_1127292f8);
  _objc_destroyWeak(param_1 + _DAT_1127292f4);
  _objc_destroyWeak(param_1 + _DAT_1127292f0);
  _objc_destroyWeak(param_1 + _DAT_112729300);
  _objc_destroyWeak(param_1 + _DAT_1127292ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127292fc);
  return;
}



/* Entry: 10577fb90; end: 10577fc33; -[SCBitmojiStickerCategoryIconProvider initWithAvatarProvider:selfieFetcher:] */

undefined1 *
FUN_10577fb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577fc34; end: 10577fdb3; -[SCBitmojiStickerCategoryIconProvider stickerCategoryIcon] */

void FUN_10577fc34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar6 = puVar1;
  if (lVar2 == 0) {
    func_0x00010bf43d60(puVar1,param_2,0);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b4bc0;
    _objc_alloc(PTR_PTR_1126b4bc0);
    func_0x00010c05ace0();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10577fdb4;
    puStack_40 = &UNK_1108b0a98;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x00010bfaa020(uVar5,param_2,puVar4,0,0x10,PTR___dispatch_main_q_11034be20,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10577fdb4; end: 10577fe1f;  */

void FUN_10577fdb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,0,
                      &PTR____CFConstantStringClassReference_110dfe038,0xfffffffffffffed4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10577fe20; end: 10577fe4f; -[SCBitmojiStickerCategoryIconProvider .cxx_destruct] */

void FUN_10577fe20(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577fe50; end: 10577ffa7; -[SCBitmojiStickerRefresher refreshEncodedBitmojiId:avatarId:friendAvatarId:] */

void FUN_10577fe50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long in_x3;
  undefined8 in_x4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126bac28;
  func_0x00010c0f3fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined *)0x0;
  if ((in_x3 != 0) && (puVar2 != (undefined *)0x0)) {
    puVar5 = puVar2;
    func_0x00010bfb7be0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0;
    if (puVar5 != (undefined *)0x0) {
      uVar1 = in_x4;
    }
    _objc_retain(uVar1);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      lVar6 = -1;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c130220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c067ec0();
      lVar6 = (long)(int)puVar4;
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
    puVar3 = puVar2;
    func_0x00010c26afc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c06c000(puVar2);
    puVar5 = puVar3;
    func_0x00010b0e4c28(puVar3,puVar4,in_x3,uVar1,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10577ffa8; end: 10578017f; -[SCBitmojiStickerRefresher refreshBitmojiSticker:avatarId:friendAvatarId:] */

void FUN_10577ffa8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c27dd80();
  puVar4 = param_3;
  if (puVar1 == (undefined *)0x3) {
    lVar2 = param_5;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar1 = param_3;
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125280(param_1,param_2,puVar1,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (param_1 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar1 = param_3;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)puVar3 == 0) {
          puVar1 = param_3;
          func_0x00010c271a60(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bf1c360();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16da00();
          _objc_release(puVar3);
          _objc_release(puVar4);
          puVar4 = puVar1;
          func_0x00010c0cc0c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bf1c360();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19fa20();
          _objc_release(puVar3);
          _objc_release(puVar4);
          puVar4 = PTR_PTR_1126ba7a8;
          _objc_alloc(PTR_PTR_1126ba7a8);
          func_0x00010c020180();
          _objc_release(puVar1);
        }
        else {
          _objc_retain();
        }
      }
      _objc_release(param_1);
    }
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105780180; end: 105780333; -[SCBitmojiStickerRefresher refreshBitmojiStickers:avatarId:friendAvatarId:] */

undefined1 *
FUN_105780180(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010bf529e0(param_3);
  func_0x00010c0ecd60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = param_1;
        func_0x00010c125080();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_160;
  pcStack_138 = FUN_105780334;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_158 = PTR_PTR_1126ea250;
  lStack_160 = lVar2;
  _objc_msgSendSuper2(&lStack_160,PTR_s_init_1125d9248);
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bfe4c00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)plVar5 + 8);
    *(undefined1 **)((long)plVar5 + 8) = puVar6;
    _objc_release(uVar8);
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bfe4d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)plVar5 + 0x10);
    *(undefined1 **)((long)plVar5 + 0x10) = puVar6;
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  return (undefined1 *)plVar5;
}



/* Entry: 105780334; end: 1057803d3; -[SCBitmojiAuthRequestManager initWithNetworkServices:] */

undefined1 * FUN_105780334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bfe4c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bfe4d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057803d4; end: 10578052f; -[SCBitmojiAuthRequestManager verifyAuthRequestForURL:userId:completion:] */

void FUN_1057803d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,0,0,0);
  }
  else {
    lVar2 = param_3;
    func_0x00010c11d6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    func_0x00010c1d0640(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee8400(param_1);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105780530; end: 10578063b; -[SCBitmojiAuthRequestManager sendApprovalRequestWithToken:completion:] */

void FUN_105780530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dfe078;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = puVar1;
  puVar4 = puVar2;
  func_0x00010be9e8c0(param_1);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dfe078;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar2;
  puVar9 = puVar3;
  puVar10 = puVar4;
  func_0x00010be9eea0(puVar1,param_2,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  puVar4 = puVar2;
  func_0x00010be657c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dfe0b8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar2 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10578095c;
  puStack_160 = &UNK_110884ec8;
  _objc_retain(puVar9);
  uVar6 = uVar5;
  puStack_158 = puVar9;
  func_0x00010bf225e0(uVar5,param_2,1,puVar4,0,0,&puStack_178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1057809a0;
  puStack_198 = &UNK_1108b0ac8;
  puStack_190 = puVar2;
  puStack_188 = puVar9;
  puStack_180 = puVar10;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  func_0x00010c25f600(uVar5,param_2,uVar6,puVar8,PTR___dispatch_main_q_11034be20,&puStack_1b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puStack_158);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  return;
}



/* Entry: 10578063c; end: 105780747; -[SCBitmojiAuthRequestManager sendDenialRequestWithApprovalToken:completion:] */

void FUN_10578063c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dfe078;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = puVar1;
  puVar9 = puVar2;
  uVar10 = param_4;
  func_0x00010be9eea0(param_1,param_2,puVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  _objc_retain(puVar8);
  puVar3 = puVar1;
  func_0x00010be657c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfe0b8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10578095c;
  puStack_f0 = &UNK_110884ec8;
  _objc_retain(puVar9);
  uVar5 = uVar4;
  puStack_e8 = puVar9;
  func_0x00010bf225e0(uVar4,param_2,1,puVar3,0,0,&puStack_108);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)(puVar1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar2;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1057809a0;
  puStack_128 = &UNK_1108b0ac8;
  puStack_120 = puVar1;
  puStack_118 = puVar9;
  uStack_110 = uVar10;
  _objc_retain(uVar10);
  _objc_retain(puVar9);
  func_0x00010c25f600(uVar4,param_2,uVar5,puVar8,PTR___dispatch_main_q_11034be20,&puStack_140);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uStack_110);
  _objc_release(puStack_118);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puStack_e8);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  return;
}



/* Entry: 105780748; end: 10578095b; -[SCBitmojiAuthRequestManager _verifyAuthRequestWithKey:params:completion:] */

void FUN_105780748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be657c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe0b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10578095c;
  puStack_80 = &UNK_110884ec8;
  _objc_retain(param_4);
  uVar4 = uVar3;
  uStack_78 = param_4;
  func_0x00010bf225e0(uVar3,param_2,1,lVar2,0,0,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1057809a0;
  puStack_b8 = &UNK_1108b0ac8;
  lStack_b0 = param_1;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c25f600(uVar3,param_2,uVar4,puVar7,PTR___dispatch_main_q_11034be20,&puStack_d0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 10578095c; end: 10578099f;  */

void FUN_10578095c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057809a0; end: 1057809bb;  */

void FUN_1057809a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be32f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleVerificationWithParams_da_11256a578,
             *(undefined8 *)(param_1 + 0x28),param_5,param_4,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1057809bc; end: 105780b6b; -[SCBitmojiAuthRequestManager _handleVerificationWithParams:data:response:completion:] */

void FUN_1057809bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c08fa60();
  if ((puVar7 == (undefined *)0x0) && (lVar3 = param_5, func_0x00010c252ee0(), lVar3 == 200)) {
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      pcVar9 = *(code **)(param_6 + 0x10);
      puVar7 = (undefined *)0x0;
      uVar8 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      pcVar9 = *(code **)(param_6 + 0x10);
      puVar7 = puVar2;
    }
    bVar6 = puVar4 != (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    pcVar9 = *(code **)(param_6 + 0x10);
    bVar6 = false;
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
    puVar4 = puVar1;
  }
  (*pcVar9)(param_6,bVar6,puVar7,uVar8,puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105780b6c; end: 105780d6b; -[SCBitmojiAuthRequestManager _sendApprovalWithKey:params:completion:] */

void FUN_105780b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be657c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe0d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105780d6c;
  puStack_80 = &UNK_110884ec8;
  uStack_78 = param_4;
  _objc_retain(param_4);
  uVar4 = uVar3;
  func_0x00010bf225e0(uVar3,param_2,1,lVar2,0,0,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105780db0;
  puStack_b0 = &UNK_1108b0af8;
  lStack_a8 = param_1;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  func_0x00010c25f600(uVar3,param_2,uVar4,puVar7,PTR___dispatch_main_q_11034be20,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_a0);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 105780d6c; end: 105780e1f;  */

void FUN_105780d6c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105780e20; end: 105780f67; -[SCBitmojiAuthRequestManager _handleApprovalWithResponseJSON:error:completion:] */

void FUN_105780e20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_3 == 0) || (param_4 != 0)) {
    (**(code **)(param_5 + 0x10))(param_5,0,0,0,0,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c08fa60();
    if (((lVar5 == 0) || (lVar5 = lVar2, func_0x00010c08fa60(), lVar5 == 0)) ||
       (lVar5 = lVar3, func_0x00010c08fa60(), lVar5 == 0)) {
      pcVar8 = *(code **)(param_5 + 0x10);
      uVar4 = 0;
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      pcVar8 = *(code **)(param_5 + 0x10);
      uVar4 = 1;
      lVar5 = lVar1;
      lVar6 = lVar3;
      lVar7 = lVar2;
    }
    (*pcVar8)(param_5,uVar4,lVar5,lVar6,lVar7,0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105780f68; end: 105781167; -[SCBitmojiAuthRequestManager _sendDenialWithKey:params:completion:] */

void FUN_105780f68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be657c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe0f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105781168;
  puStack_80 = &UNK_110884ec8;
  uStack_78 = param_4;
  _objc_retain(param_4);
  uVar4 = uVar3;
  func_0x00010bf225e0(uVar3,param_2,1,lVar2,0,0,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1057811ac;
  puStack_b0 = &UNK_1108b0af8;
  lStack_a8 = param_1;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  func_0x00010c25f600(uVar3,param_2,uVar4,puVar7,PTR___dispatch_main_q_11034be20,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_a0);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 105781168; end: 1057811ab;  */

void FUN_105781168(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057811ac; end: 1057811c3;  */

void FUN_1057811ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleDenialWithData_response_e_112567a78,
             param_5,param_4,param_6,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057811c4; end: 105781297; -[SCBitmojiAuthRequestManager _handleDenialWithData:response:error:completion:] */

void FUN_1057811c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_release(param_5);
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_6 + 0x10))(param_6,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105781298; end: 105781337; -[SCBitmojiAuthRequestManager _oAuthURLWithEndpoint:] */

void FUN_105781298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8670;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bf10920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105781338; end: 105781367; -[SCBitmojiAuthRequestManager .cxx_destruct] */

void FUN_105781338(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105781368; end: 105781567; -[SCBitmojiAuthViewController initWithAuthDeepLink:requestManager:eventLogger:userLinkingServices:avatarBuilderScopeExposer:userId:username:bitmojiAccountLinked:authFlowCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105781368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ea258;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272931c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112729320;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112729324;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112729328;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272932c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112729330;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112729334;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729338) = param_10;
    uVar2 = param_12;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272933c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272933c) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105781568; end: 1057817c3; -[SCBitmojiAuthViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781568(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar9 = (long)_DAT_112729340;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar9));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar8 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1057817c4;
  puStack_a8 = PTR_PTR_1126ea258;
  uStack_b0 = uVar8;
  uStack_a0 = uVar3;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bee83e0(uVar8);
  return;
}



/* Entry: 1057817c4; end: 10578180b; -[SCBitmojiAuthViewController viewDidLoad] */

void FUN_1057817c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ea258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bee83e0(param_1);
  return;
}



/* Entry: 10578180c; end: 105781813; -[SCBitmojiAuthViewController preferredStatusBarStyle] */

undefined8 FUN_10578180c(void)

{
  return 0;
}



/* Entry: 105781814; end: 10578185f; -[SCBitmojiAuthViewController bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781814(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11272932c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfcfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didConfirmAuthorization_11255cd88);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfd1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDenyAuthorization_11255ce18);
  return;
}



/* Entry: 105781860; end: 105781be7; -[SCBitmojiAuthViewController _showConfirmAuthorizationAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781860(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  undefined1 auStack_a0 [8];
  byte bStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729324);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef00();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + _DAT_11272931c);
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(param_1 + _DAT_112729338) & 1) != 0) {
      bVar13 = 0;
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      ppuVar8 = &PTR____CFConstantStringClassReference_110daeb38;
      ppuVar6 = &PTR____CFConstantStringClassReference_110dfe198;
      goto LAB_105781998;
    }
    ppuVar8 = &PTR____CFConstantStringClassReference_110dfe1f8;
    ppuVar6 = &PTR____CFConstantStringClassReference_110dfe1d8;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dfe1b8;
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dfe178;
    ppuVar6 = &PTR____CFConstantStringClassReference_110dfe158;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dfe138;
  }
  bVar13 = (byte)uVar4 ^ 1;
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105781998:
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bcbeaa8(ppuVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  func_0x00010bcbeaa8(ppuVar8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  puVar9 = PTR_PTR_1126af180;
  _objc_copyWeak(auStack_a0,auStack_90);
  bStack_98 = bVar13;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126af180;
  ppuVar6 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar11 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar9;
  puStack_80 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  ppuVar5 = ppuVar5 + 4;
  _objc_loadWeakRetained(ppuVar5);
  func_0x00010bdfee40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 105781be8; end: 105781c1b;  */

void FUN_105781be8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfee40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105781c1c; end: 105781c33;  */

void FUN_105781c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDenyAuthorization_11255ce18);
  return;
}



/* Entry: 105781c34; end: 105781ccb; -[SCBitmojiAuthViewController _didPressContinueWithIsForCreate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781c34(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126af678;
    _objc_alloc(PTR_PTR_1126af678);
    func_0x00010c04a940();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11272932c));
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfcfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didConfirmAuthorization_11255cd88);
  return;
}



/* Entry: 105781ccc; end: 105781d13; -[SCBitmojiAuthViewController _didDenyAuthorization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781ccc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112729344);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendDenialRequest_112585548);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showErrorMessage__11258bd78,0);
  return;
}



/* Entry: 105781d14; end: 105781d5b; -[SCBitmojiAuthViewController _didConfirmAuthorization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781d14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112729344);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendApprovalRequest_1125853d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showErrorMessage__11258bd78,0);
  return;
}



/* Entry: 105781d5c; end: 105781e5b; -[SCBitmojiAuthViewController _verifyAuthRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781d5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_112729340));
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729320);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272931c);
  func_0x00010bdc2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c298580(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105781e5c; end: 105781edb;  */

void FUN_105781e5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd14e0();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105781edc; end: 105781f87; -[SCBitmojiAuthViewController _authRequestCompletedWithSuccess:approvalToken:isOriginAppSnapchat:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781edc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112729340));
  if ((param_3 & 1) == 0) {
    func_0x00010beb8f40(param_1,param_2,param_6);
  }
  else {
    lVar2 = (long)_DAT_112729344;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
    if (param_5 == 0) {
      func_0x00010beb8640(param_1);
    }
    else {
      func_0x00010bdfcfa0();
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105781f88; end: 105782087; -[SCBitmojiAuthViewController _sendApprovalRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105781f88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112729344);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_112729340));
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112729320);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c15b5a0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showErrorMessage__11258bd78,0);
  return;
}



/* Entry: 105782088; end: 10578212f;  */

void FUN_105782088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcef60();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


