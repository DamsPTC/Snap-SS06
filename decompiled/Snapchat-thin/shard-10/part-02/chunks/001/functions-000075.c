/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b1b350; end: 107b1b3bf; +[SCNotificationDeviceVoipTokenUpdateResult generalErrorWithMessage:statusCode:] */

void FUN_107b1b350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b3c0; end: 107b1b407; +[SCNotificationDeviceVoipTokenUpdateResult success] */

void FUN_107b1b3c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b408; end: 107b1b42b; -[SCNotificationDeviceVoipTokenUpdateResult copyWithZone:] */

undefined8 FUN_107b1b408(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1b42c; end: 107b1b4a3; -[SCNotificationDeviceVoipTokenUpdateResult hash] */

void FUN_107b1b42c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f9de8;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1b4a4; end: 107b1b4e7; -[SCNotificationDeviceVoipTokenUpdateResult internalInit] */

void FUN_107b1b4a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9de8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1b4e8; end: 107b1b597; -[SCNotificationDeviceVoipTokenUpdateResult isEqual:] */

long FUN_107b1b4e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b1b57c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_107b1b57c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107b1b57c;
    }
  }
  lVar3 = 1;
LAB_107b1b57c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b1b598; end: 107b1b61b; -[SCNotificationDeviceVoipTokenUpdateResult matchSuccess:generalError:] */

void FUN_107b1b598(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1b61c; end: 107b1b627; -[SCNotificationDeviceVoipTokenUpdateResult .cxx_destruct] */

void FUN_107b1b61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b1b628; end: 107b1b697; +[SCNotificationDeviceLPSETokenUpdateResult generalErrorWithMessage:statusCode:] */

void FUN_107b1b628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1830;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b698; end: 107b1b6df; +[SCNotificationDeviceLPSETokenUpdateResult success] */

void FUN_107b1b698(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1830;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b6e0; end: 107b1b703; -[SCNotificationDeviceLPSETokenUpdateResult copyWithZone:] */

undefined8 FUN_107b1b6e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1b704; end: 107b1b77b; -[SCNotificationDeviceLPSETokenUpdateResult hash] */

void FUN_107b1b704(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f9df0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1b77c; end: 107b1b7bf; -[SCNotificationDeviceLPSETokenUpdateResult internalInit] */

void FUN_107b1b77c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1b7c0; end: 107b1b86f; -[SCNotificationDeviceLPSETokenUpdateResult isEqual:] */

long FUN_107b1b7c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b1b854;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_107b1b854;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107b1b854;
    }
  }
  lVar3 = 1;
LAB_107b1b854:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b1b870; end: 107b1b8f3; -[SCNotificationDeviceLPSETokenUpdateResult matchSuccess:generalError:] */

void FUN_107b1b870(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1b8f4; end: 107b1b8ff; -[SCNotificationDeviceLPSETokenUpdateResult .cxx_destruct] */

void FUN_107b1b8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b1b900; end: 107b1b967; +[SCNotificationEnabledSettingUpdateResult generalErrorWithMessage:] */

void FUN_107b1b900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1848;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b968; end: 107b1b9af; +[SCNotificationEnabledSettingUpdateResult success] */

void FUN_107b1b968(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1848;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b9b0; end: 107b1b9d3; -[SCNotificationEnabledSettingUpdateResult copyWithZone:] */

undefined8 FUN_107b1b9b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1b9d4; end: 107b1ba33; -[SCNotificationEnabledSettingUpdateResult hash] */

void FUN_107b1b9d4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f9df8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1ba34; end: 107b1ba77; -[SCNotificationEnabledSettingUpdateResult internalInit] */

void FUN_107b1ba34(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9df8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1ba78; end: 107b1bb17; -[SCNotificationEnabledSettingUpdateResult isEqual:] */

long FUN_107b1ba78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b1bafc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107b1bafc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107b1bafc;
    }
  }
  lVar3 = 1;
LAB_107b1bafc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b1bb18; end: 107b1bb9b; -[SCNotificationEnabledSettingUpdateResult matchSuccess:generalError:] */

void FUN_107b1bb18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1bb9c; end: 107b1bba7; -[SCNotificationEnabledSettingUpdateResult .cxx_destruct] */

void FUN_107b1bb9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b1bba8; end: 107b1bc0f; +[SCNotificationBitmojiSettingUpdateResult generalErrorWithMessage:] */

void FUN_107b1bba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1bc10; end: 107b1bc57; +[SCNotificationBitmojiSettingUpdateResult success] */

void FUN_107b1bc10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1bc58; end: 107b1bc7b; -[SCNotificationBitmojiSettingUpdateResult copyWithZone:] */

undefined8 FUN_107b1bc58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1bc7c; end: 107b1bcdb; -[SCNotificationBitmojiSettingUpdateResult hash] */

void FUN_107b1bc7c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f9e00;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bcdc; end: 107b1bd1f; -[SCNotificationBitmojiSettingUpdateResult internalInit] */

void FUN_107b1bcdc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bd20; end: 107b1bdbf; -[SCNotificationBitmojiSettingUpdateResult isEqual:] */

long FUN_107b1bd20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b1bda4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107b1bda4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107b1bda4;
    }
  }
  lVar3 = 1;
LAB_107b1bda4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b1bdc0; end: 107b1be43; -[SCNotificationBitmojiSettingUpdateResult matchSuccess:generalError:] */

void FUN_107b1bdc0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1be44; end: 107b1be4f; -[SCNotificationBitmojiSettingUpdateResult .cxx_destruct] */

void FUN_107b1be44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b1be50; end: 107b1be7b; +[SCGrapheneNotificationsMetric pushReceived] */

void FUN_107b1be50(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1be7c; end: 107b1bea7; +[SCGrapheneNotificationsMetric validated] */

void FUN_107b1be7c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bea8; end: 107b1bed3; +[SCGrapheneNotificationsMetric queuedToDisplay] */

void FUN_107b1bea8(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bed4; end: 107b1beff; +[SCGrapheneNotificationsMetric nothingToDisplay] */

void FUN_107b1bed4(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bf00; end: 107b1bf2b; +[SCGrapheneNotificationsMetric wrongUser] */

void FUN_107b1bf00(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bf2c; end: 107b1bf57; +[SCGrapheneNotificationsMetric processingPath] */

void FUN_107b1bf2c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bf58; end: 107b1bf83; +[SCGrapheneNotificationsMetric handlerProcessing] */

void FUN_107b1bf58(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bf84; end: 107b1bfaf; +[SCGrapheneNotificationsMetric missingHandler] */

void FUN_107b1bf84(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bfb0; end: 107b1bfdb; +[SCGrapheneNotificationsMetric handlerError] */

void FUN_107b1bfb0(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1bfdc; end: 107b1c007; +[SCGrapheneNotificationsMetric displayed] */

void FUN_107b1bfdc(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c008; end: 107b1c033; +[SCGrapheneNotificationsMetric displayDropped] */

void FUN_107b1c008(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c034; end: 107b1c05f; +[SCGrapheneNotificationsMetric totalProcessingLatency] */

void FUN_107b1c034(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c060; end: 107b1c08b; +[SCGrapheneNotificationsMetric totalDisplayLatency] */

void FUN_107b1c060(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c08c; end: 107b1c0b7; +[SCGrapheneNotificationsMetric dataProviderAllUpdates] */

void FUN_107b1c08c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c0b8; end: 107b1c0e3; +[SCGrapheneNotificationsMetric dataProviderDeltaSync] */

void FUN_107b1c0b8(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c0e4; end: 107b1c10f; +[SCGrapheneNotificationsMetric dataProviderAbConfig] */

void FUN_107b1c0e4(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c110; end: 107b1c13b; +[SCGrapheneNotificationsMetric pushDisplayedNoNseExec] */

void FUN_107b1c110(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c13c; end: 107b1c167; +[SCGrapheneNotificationsMetric watchPairingStatusFg] */

void FUN_107b1c13c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c168; end: 107b1c193; +[SCGrapheneNotificationsMetric watchAppInstallStatusFg] */

void FUN_107b1c168(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c194; end: 107b1c1bf; +[SCGrapheneNotificationsMetric ackNotifSuccessPnsHttp] */

void FUN_107b1c194(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c1c0; end: 107b1c1eb; +[SCGrapheneNotificationsMetric ackNotifFailurePnsHttp] */

void FUN_107b1c1c0(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c1ec; end: 107b1c217; +[SCGrapheneNotificationsMetric tokenRegHandleEvent] */

void FUN_107b1c1ec(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c218; end: 107b1c243; +[SCGrapheneNotificationsMetric tokenRegCheck] */

void FUN_107b1c218(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c244; end: 107b1c26f; +[SCGrapheneNotificationsMetric tokenRegistrationSuccess] */

void FUN_107b1c244(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c270; end: 107b1c29b; +[SCGrapheneNotificationsMetric tokenRegistrationFailure] */

void FUN_107b1c270(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c29c; end: 107b1c2c7; +[SCGrapheneNotificationsMetric tokenRegMissedUpdateOne] */

void FUN_107b1c29c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c2c8; end: 107b1c2f3; +[SCGrapheneNotificationsMetric enabledUpdateSuccess] */

void FUN_107b1c2c8(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c2f4; end: 107b1c31f; +[SCGrapheneNotificationsMetric enabledUpdateFailure] */

void FUN_107b1c2f4(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c320; end: 107b1c34b; +[SCGrapheneNotificationsMetric privacyUpdateSuccess] */

void FUN_107b1c320(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c34c; end: 107b1c377; +[SCGrapheneNotificationsMetric privacyUpdateFailure] */

void FUN_107b1c34c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c378; end: 107b1c3a3; +[SCGrapheneNotificationsMetric missingProcessingPlugin] */

void FUN_107b1c378(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c3a4; end: 107b1c3cf; +[SCGrapheneNotificationsMetric missingNotifPluginCollector] */

void FUN_107b1c3a4(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c3d0; end: 107b1c3fb; +[SCGrapheneNotificationsMetric sigNotSubmitted] */

void FUN_107b1c3d0(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c3fc; end: 107b1c427; +[SCGrapheneNotificationsMetric sigSubmitted] */

void FUN_107b1c3fc(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c428; end: 107b1c453; +[SCGrapheneNotificationsMetric decryptNotAttemptedMainapp] */

void FUN_107b1c428(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c454; end: 107b1c47f; +[SCGrapheneNotificationsMetric decryptSuccessMainapp] */

void FUN_107b1c454(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c480; end: 107b1c4ab; +[SCGrapheneNotificationsMetric decryptFailureMainapp] */

void FUN_107b1c480(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c4ac; end: 107b1c4d7; +[SCGrapheneNotificationsMetric decryptSuccessMainappLatency] */

void FUN_107b1c4ac(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c4d8; end: 107b1c503; +[SCGrapheneNotificationsMetric decryptFailureMainappLatency] */

void FUN_107b1c4d8(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c504; end: 107b1c52f; +[SCGrapheneNotificationsMetric nseExecutionDidNotFinished] */

void FUN_107b1c504(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c530; end: 107b1c55b; +[SCGrapheneNotificationsMetric notifOpened] */

void FUN_107b1c530(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c55c; end: 107b1c587; +[SCGrapheneNotificationsMetric gnotifOpened] */

void FUN_107b1c55c(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c588; end: 107b1c5b3; +[SCGrapheneNotificationsMetric appOpenClear] */

void FUN_107b1c588(void)

{
  _objc_alloc(PTR_PTR_1126b7a20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1c5b4; end: 107b1c653; -[SCGrapheneNotificationsMetric description] */

void FUN_107b1c5b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ead758;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ead758,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f9e08;
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



/* Entry: 107b1c654; end: 107b1c6db; -[SCGrapheneRegistry notificationsGraphene] */

void FUN_107b1c654(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b1c6dc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113727510 != -1) {
    func_0x00010002a2fc(0x113727510,&puStack_48);
  }
  uVar1 = uRam0000000113727508;
  _objc_retain(uRam0000000113727508);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b1c6dc; end: 107b1c943;  */

undefined * FUN_107b1c6dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_190 = &PTR____CFConstantStringClassReference_110e7a718;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110ead778;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ead798;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110ead7b8;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110ead7d8;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ead7f8;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ead818;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ead838;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ead858;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ead878;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ead898;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ead8b8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ead8d8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ead8f8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ead918;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ead938;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ead958;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ead978;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ead998;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ead9b8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ead9d8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ead9f8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110eada18;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110eada38;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110eada58;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110eada78;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110eada98;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110eadab8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110eadad8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110eadaf8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eadb18;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110eadb38;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eadb58;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eadb78;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110eadb98;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eadbb8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110eadbd8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eadbf8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110eadc18;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eadc38;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110eadc58;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eadc78;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eadc98;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_190,0x2b);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c126d60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727508;
  uRam0000000113727508 = uVar3;
  _objc_release(uVar1);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_1c0;
  pcStack_198 = FUN_107b1c944;
  puStack_1b8 = PTR_PTR_1126f9e10;
  puStack_1c0 = puVar4;
  puStack_1b0 = puVar2;
  uStack_1a8 = uVar7;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_1c0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = (undefined1 *)ppuVar5;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  return (undefined *)ppuVar5;
}



/* Entry: 107b1c944; end: 107b1c9b7; -[SCGrapheneIntentDonationMainAppMetric2 init] */

undefined1 * FUN_107b1c944(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b1c9b8; end: 107b1cc2f;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1cc00) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1c9b8(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  double dVar15;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 *puStack_8c8;
  char *pcStack_8c0;
  char *pcStack_8b8;
  undefined8 ****ppppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 *puStack_880;
  undefined8 auStack_878 [2];
  char cStack_861;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  char *pcStack_840;
  char *pcStack_838;
  char *pcStack_830;
  char *pcStack_828;
  char *pcStack_820;
  char *pcStack_818;
  undefined8 ****ppppuStack_810;
  code *pcStack_808;
  char acStack_800 [24];
  undefined1 *puStack_7e8;
  char acStack_7e0 [24];
  undefined1 auStack_7c8 [24];
  undefined8 auStack_7b0 [2];
  char cStack_799;
  long lStack_798;
  undefined8 ****ppppuStack_750;
  code *pcStack_748;
  char acStack_740 [24];
  undefined1 *puStack_728;
  char acStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 ****ppppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  char acStack_660 [24];
  undefined1 auStack_648 [24];
  undefined8 auStack_630 [2];
  char cStack_619;
  long lStack_618;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  char acStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_500 [24];
  undefined1 *puStack_4e8;
  char acStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_438 [24];
  char *pcStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_398 [24];
  char *pcStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 *puStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_2f8 [24];
  char *pcStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  long *plStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  pcVar4 = param_5;
  pcVar8 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      param_4 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      param_4 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,param_4);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pcVar5 = pcVar2;
    pcVar4 = param_6;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_5);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_a0);
  _objc_release(param_5);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar11 = acStack_140;
  pcStack_c8 = FUN_107b1cc30;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  pcStack_100 = param_4;
  pcStack_f8 = unaff_x23;
  pcStack_f0 = acStack_a0;
  pcStack_e8 = pcVar2;
  pcStack_e0 = param_5;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar13 = (long *)0x0;
  pcVar2 = acStack_a0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_120;
    func_0x00010002b838(auStack_120,pcVar4);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,auStack_120,&lStack_108,1);
    pcVar6 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    pcVar7 = pcVar11;
    pcVar4 = pcVar5;
    pcVar2 = acStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      pcVar7 = pcVar11;
      pcVar4 = pcVar5;
      pcVar2 = acStack_140;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar11 = pcVar5;
  __Unwind_Resume();
  pcVar10 = acStack_1c0;
  pcStack_148 = FUN_107b1cda4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar6;
  pcVar9 = pcVar7;
  pcStack_180 = param_4;
  pcStack_178 = unaff_x23;
  pcStack_170 = pcVar2;
  plStack_168 = plVar13;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(pcVar6);
  plVar13 = (long *)0x0;
  if (pcVar11 != (char *)0x0) {
    plVar13 = *(long **)(pcVar11 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_1a0;
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    pcVar3 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar9 = pcVar10;
    pcVar4 = pcVar7;
    pcVar2 = acStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar9 = pcVar10;
      pcVar4 = pcVar7;
      pcVar2 = acStack_1c0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar11 = pcVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_107b1cf18;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar3;
  pcVar7 = pcVar9;
  pcVar10 = pcVar4;
  pcStack_200 = param_4;
  pcStack_1f8 = unaff_x23;
  pcStack_1f0 = pcVar2;
  plStack_1e8 = plVar13;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar6;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar11 != (char *)0x0) {
    plVar13 = *(long **)(pcVar11 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    param_4 = (char *)auStack_238;
    func_0x00010002b838(auStack_238,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_258[0] = '\0';
    acStack_258[1] = '\0';
    acStack_258[2] = '\0';
    acStack_258[3] = '\0';
    acStack_258[4] = '\0';
    acStack_258[5] = '\0';
    acStack_258[6] = '\0';
    acStack_258[7] = '\0';
    acStack_258[8] = '\0';
    acStack_258[9] = '\0';
    acStack_258[10] = '\0';
    acStack_258[0xb] = '\0';
    acStack_258[0xc] = '\0';
    acStack_258[0xd] = '\0';
    acStack_258[0xe] = '\0';
    acStack_258[0xf] = '\0';
    acStack_258[0x10] = '\0';
    acStack_258[0x11] = '\0';
    acStack_258[0x12] = '\0';
    acStack_258[0x13] = '\0';
    acStack_258[0x14] = '\0';
    acStack_258[0x15] = '\0';
    acStack_258[0x16] = '\0';
    acStack_258[0x17] = '\0';
    func_0x00010007e1e8(acStack_258,auStack_238,&lStack_208,2);
    pcVar5 = "";
    unaff_x23 = acStack_258;
    pcVar7 = acStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_240 = unaff_x23;
    func_0x00010007e5dc(&pcStack_240);
    lVar12 = 0;
    puVar14 = auStack_238;
    pcVar10 = pcVar4;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcStack_268 = FUN_107b1d148;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar7;
  pcVar4 = pcVar5;
  pcVar2 = pcVar7;
  dVar15 = param_1;
  ppppuStack_270 = &pppuStack_1d0;
  _objc_retain();
  if (pcVar1 != (char *)0x0) {
    _objc_retain(pcVar7);
    plVar13 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    puVar14 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_2c0,pcVar1);
    acStack_2f8[0] = '\0';
    acStack_2f8[1] = '\0';
    acStack_2f8[2] = '\0';
    acStack_2f8[3] = '\0';
    acStack_2f8[4] = '\0';
    acStack_2f8[5] = '\0';
    acStack_2f8[6] = '\0';
    acStack_2f8[7] = '\0';
    acStack_2f8[8] = '\0';
    acStack_2f8[9] = '\0';
    acStack_2f8[10] = '\0';
    acStack_2f8[0xb] = '\0';
    acStack_2f8[0xc] = '\0';
    acStack_2f8[0xd] = '\0';
    acStack_2f8[0xe] = '\0';
    acStack_2f8[0xf] = '\0';
    acStack_2f8[0x10] = '\0';
    acStack_2f8[0x11] = '\0';
    acStack_2f8[0x12] = '\0';
    acStack_2f8[0x13] = '\0';
    acStack_2f8[0x14] = '\0';
    acStack_2f8[0x15] = '\0';
    acStack_2f8[0x16] = '\0';
    acStack_2f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2f8,auStack_2d8,&lStack_2a8,2);
    dVar15 = param_1 * 1000.0;
    pcVar10 = (char *)(long)dVar15;
    pcVar4 = "\x01";
    pcVar2 = acStack_2f8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_2e0 = acStack_2f8;
    func_0x00010007e5dc(&pcStack_2e0);
    lVar12 = 0;
    pcVar5 = (char *)auStack_2d8;
    do {
      if ((&cStack_2a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
    pcVar6 = pcVar7;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_2c1 < '\0') {
      __ZdlPv(auStack_2d8[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar11 = pcVar6;
    __Unwind_Resume();
    pcStack_308 = FUN_107b1d354;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar4;
    pcVar3 = pcVar2;
    pcVar9 = pcVar10;
    pcStack_340 = param_4;
    pcStack_338 = unaff_x23;
    puStack_330 = puVar14;
    pcStack_328 = pcVar5;
    pcStack_320 = pcVar6;
    pcStack_318 = pcVar7;
    ppppuStack_310 = &ppppuStack_270;
    _objc_retain(pcVar4);
    _objc_retain(pcVar2);
    puVar14 = (undefined8 *)0x0;
    if (pcVar11 != (char *)0x0) {
      plVar13 = *(long **)(pcVar11 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      param_4 = (char *)auStack_378;
      func_0x00010002b838(auStack_378,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_360,pcVar1);
      acStack_398[0] = '\0';
      acStack_398[1] = '\0';
      acStack_398[2] = '\0';
      acStack_398[3] = '\0';
      acStack_398[4] = '\0';
      acStack_398[5] = '\0';
      acStack_398[6] = '\0';
      acStack_398[7] = '\0';
      acStack_398[8] = '\0';
      acStack_398[9] = '\0';
      acStack_398[10] = '\0';
      acStack_398[0xb] = '\0';
      acStack_398[0xc] = '\0';
      acStack_398[0xd] = '\0';
      acStack_398[0xe] = '\0';
      acStack_398[0xf] = '\0';
      acStack_398[0x10] = '\0';
      acStack_398[0x11] = '\0';
      acStack_398[0x12] = '\0';
      acStack_398[0x13] = '\0';
      acStack_398[0x14] = '\0';
      acStack_398[0x15] = '\0';
      acStack_398[0x16] = '\0';
      acStack_398[0x17] = '\0';
      func_0x00010007e1e8(acStack_398,auStack_378,&lStack_348,2);
      pcVar1 = "";
      unaff_x23 = acStack_398;
      pcVar3 = acStack_398;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcStack_380 = unaff_x23;
      func_0x00010007e5dc(&pcStack_380);
      lVar12 = 0;
      puVar14 = auStack_378;
      pcVar9 = pcVar10;
      do {
        if ((&cStack_349)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar2);
    pcVar5 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_361 < '\0') {
      __ZdlPv(auStack_378[0]);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar4);
    pcVar7 = pcVar5;
    __Unwind_Resume();
    pcStack_3a8 = FUN_107b1d584;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar1;
    pcVar11 = pcVar3;
    pcVar10 = pcVar9;
    pcStack_3e0 = param_4;
    pcStack_3d8 = unaff_x23;
    puStack_3d0 = puVar14;
    pcStack_3c8 = pcVar5;
    pcStack_3c0 = pcVar2;
    pcStack_3b8 = pcVar4;
    ppppuStack_3b0 = &ppppuStack_310;
    _objc_retain(pcVar1);
    _objc_retain(pcVar3);
    if (pcVar7 != (char *)0x0) {
      plVar13 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      param_4 = (char *)auStack_418;
      func_0x00010002b838(auStack_418,pcVar5);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar5 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_400,pcVar5);
      acStack_438[0] = '\0';
      acStack_438[1] = '\0';
      acStack_438[2] = '\0';
      acStack_438[3] = '\0';
      acStack_438[4] = '\0';
      acStack_438[5] = '\0';
      acStack_438[6] = '\0';
      acStack_438[7] = '\0';
      acStack_438[8] = '\0';
      acStack_438[9] = '\0';
      acStack_438[10] = '\0';
      acStack_438[0xb] = '\0';
      acStack_438[0xc] = '\0';
      acStack_438[0xd] = '\0';
      acStack_438[0xe] = '\0';
      acStack_438[0xf] = '\0';
      acStack_438[0x10] = '\0';
      acStack_438[0x11] = '\0';
      acStack_438[0x12] = '\0';
      acStack_438[0x13] = '\0';
      acStack_438[0x14] = '\0';
      acStack_438[0x15] = '\0';
      acStack_438[0x16] = '\0';
      acStack_438[0x17] = '\0';
      func_0x00010007e1e8(acStack_438,auStack_418,&lStack_3e8,2);
      pcVar6 = "";
      pcVar11 = acStack_438;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcStack_420 = acStack_438;
      func_0x00010007e5dc(&pcStack_420);
      lVar12 = 0;
      pcVar10 = pcVar9;
      do {
        if ((&cStack_3e9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar3);
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_401 < '\0') {
      __ZdlPv(auStack_418[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar3 = acStack_500;
    pcStack_448 = FUN_107b1d7b4;
    lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar6;
    pcVar1 = pcVar11;
    pcVar4 = pcVar10;
    pcVar2 = pcVar8;
    ppppuStack_450 = &ppppuStack_3b0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar11);
    _objc_retain(pcVar10);
    if (pcVar5 != (char *)0x0) {
      plVar13 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(acStack_4e0,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_4c8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_4b0,pcVar1);
      acStack_500[0] = '\0';
      acStack_500[1] = '\0';
      acStack_500[2] = '\0';
      acStack_500[3] = '\0';
      acStack_500[4] = '\0';
      acStack_500[5] = '\0';
      acStack_500[6] = '\0';
      acStack_500[7] = '\0';
      acStack_500[8] = '\0';
      acStack_500[9] = '\0';
      acStack_500[10] = '\0';
      acStack_500[0xb] = '\0';
      acStack_500[0xc] = '\0';
      acStack_500[0xd] = '\0';
      acStack_500[0xe] = '\0';
      acStack_500[0xf] = '\0';
      acStack_500[0x10] = '\0';
      acStack_500[0x11] = '\0';
      acStack_500[0x12] = '\0';
      acStack_500[0x13] = '\0';
      acStack_500[0x14] = '\0';
      acStack_500[0x15] = '\0';
      acStack_500[0x16] = '\0';
      acStack_500[0x17] = '\0';
      func_0x00010007e1e8(acStack_500,acStack_4e0,&lStack_498,3);
      pcVar7 = "";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_4e8 = acStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      lVar12 = 0;
      pcVar1 = pcVar3;
      pcVar4 = pcVar8;
      do {
        if ((&cStack_499)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        param_4 = acStack_500;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar11);
    pcVar5 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      param_4 = param_4 + -0x18;
    } while (param_4 != acStack_4e0);
    _objc_release(pcVar10);
    _objc_release(pcVar11);
    _objc_release(pcVar6);
    pcVar6 = pcVar5;
    __Unwind_Resume();
    pcVar9 = acStack_5c0;
    pcStack_508 = FUN_107b1da74;
    lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar7;
    pcVar3 = pcVar1;
    pcVar11 = pcVar4;
    ppppuStack_510 = &ppppuStack_450;
    _objc_retain(pcVar7);
    _objc_retain(pcVar4);
    if (pcVar6 != (char *)0x0) {
      _objc_retain(pcVar7);
      _objc_retain(pcVar4);
      plVar13 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      param_4 = acStack_5a0;
      func_0x00010002b838(acStack_5a0,pcVar5);
      pcVar5 = "true";
      if ((int)pcVar1 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_588,pcVar5);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_570,pcVar1);
      acStack_5c0[0] = '\0';
      acStack_5c0[1] = '\0';
      acStack_5c0[2] = '\0';
      acStack_5c0[3] = '\0';
      acStack_5c0[4] = '\0';
      acStack_5c0[5] = '\0';
      acStack_5c0[6] = '\0';
      acStack_5c0[7] = '\0';
      acStack_5c0[8] = '\0';
      acStack_5c0[9] = '\0';
      acStack_5c0[10] = '\0';
      acStack_5c0[0xb] = '\0';
      acStack_5c0[0xc] = '\0';
      acStack_5c0[0xd] = '\0';
      acStack_5c0[0xe] = '\0';
      acStack_5c0[0xf] = '\0';
      acStack_5c0[0x10] = '\0';
      acStack_5c0[0x11] = '\0';
      acStack_5c0[0x12] = '\0';
      acStack_5c0[0x13] = '\0';
      acStack_5c0[0x14] = '\0';
      acStack_5c0[0x15] = '\0';
      acStack_5c0[0x16] = '\0';
      acStack_5c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_5c0,acStack_5a0,&lStack_558,3);
      pcVar11 = (char *)(long)(dVar15 * 1000.0);
      pcVar8 = "\x01";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_5a8 = acStack_5c0;
      func_0x00010007e5dc(&puStack_5a8);
      lVar12 = 0;
      pcVar5 = acStack_5a0;
      pcVar3 = pcVar9;
      do {
        if ((&cStack_559)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x48);
      _objc_release(pcVar4);
      _objc_release(pcVar7);
    }
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_558) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar5 = pcVar5 + -0x18;
      } while (pcVar5 != acStack_5a0);
      _objc_release(pcVar4);
      _objc_release(pcVar7);
      _objc_release(pcVar4);
      _objc_release(pcVar7);
      __Unwind_Resume();
      pcVar9 = acStack_680;
      pcStack_5c8 = FUN_107b1dd24;
      lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = pcVar8;
      pcVar4 = pcVar3;
      pcVar6 = pcVar11;
      pcVar7 = pcVar2;
      ppppuStack_5d0 = &ppppuStack_510;
      _objc_retain(pcVar8);
      _objc_retain(pcVar3);
      _objc_retain(pcVar11);
      if (pcVar1 != (char *)0x0) {
        plVar13 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(acStack_660,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520(pcVar3);
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_648,pcVar1);
        _objc_retain(pcVar11);
        if (pcVar11 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar11);
          pcVar1 = pcVar11;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar11);
        func_0x00010002b838(auStack_630,pcVar1);
        acStack_680[0] = '\0';
        acStack_680[1] = '\0';
        acStack_680[2] = '\0';
        acStack_680[3] = '\0';
        acStack_680[4] = '\0';
        acStack_680[5] = '\0';
        acStack_680[6] = '\0';
        acStack_680[7] = '\0';
        acStack_680[8] = '\0';
        acStack_680[9] = '\0';
        acStack_680[10] = '\0';
        acStack_680[0xb] = '\0';
        acStack_680[0xc] = '\0';
        acStack_680[0xd] = '\0';
        acStack_680[0xe] = '\0';
        acStack_680[0xf] = '\0';
        acStack_680[0x10] = '\0';
        acStack_680[0x11] = '\0';
        acStack_680[0x12] = '\0';
        acStack_680[0x13] = '\0';
        acStack_680[0x14] = '\0';
        acStack_680[0x15] = '\0';
        acStack_680[0x16] = '\0';
        acStack_680[0x17] = '\0';
        func_0x00010007e1e8(acStack_680,acStack_660,&lStack_618,3);
        pcVar5 = "";
        (**(code **)(*plVar13 + 0x18))(plVar13);
        puStack_668 = acStack_680;
        func_0x00010007e5dc(&puStack_668);
        lVar12 = 0;
        pcVar4 = pcVar9;
        pcVar6 = pcVar2;
        do {
          if ((&cStack_619)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_630 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          param_4 = acStack_680;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar11);
      _objc_release(pcVar3);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar11);
      do {
        param_4 = param_4 + -0x18;
      } while (param_4 != acStack_660);
      _objc_release(pcVar11);
      _objc_release(pcVar3);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar9 = acStack_740;
      pcStack_688 = FUN_107b1dfe4;
      lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar5;
      pcVar2 = pcVar4;
      pcVar3 = pcVar6;
      pcVar11 = pcVar7;
      ppppuStack_690 = &ppppuStack_5d0;
      _objc_retain(pcVar5);
      _objc_retain(pcVar4);
      _objc_retain(pcVar6);
      if (pcVar1 != (char *)0x0) {
        plVar13 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x00010002b838(acStack_720,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_708,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_6f0,pcVar1);
        acStack_740[0] = '\0';
        acStack_740[1] = '\0';
        acStack_740[2] = '\0';
        acStack_740[3] = '\0';
        acStack_740[4] = '\0';
        acStack_740[5] = '\0';
        acStack_740[6] = '\0';
        acStack_740[7] = '\0';
        acStack_740[8] = '\0';
        acStack_740[9] = '\0';
        acStack_740[10] = '\0';
        acStack_740[0xb] = '\0';
        acStack_740[0xc] = '\0';
        acStack_740[0xd] = '\0';
        acStack_740[0xe] = '\0';
        acStack_740[0xf] = '\0';
        acStack_740[0x10] = '\0';
        acStack_740[0x11] = '\0';
        acStack_740[0x12] = '\0';
        acStack_740[0x13] = '\0';
        acStack_740[0x14] = '\0';
        acStack_740[0x15] = '\0';
        acStack_740[0x16] = '\0';
        acStack_740[0x17] = '\0';
        func_0x00010007e1e8(acStack_740,acStack_720,&lStack_6d8,3);
        pcVar8 = "";
        (**(code **)(*plVar13 + 0x18))(plVar13);
        puStack_728 = acStack_740;
        func_0x00010007e5dc(&puStack_728);
        lVar12 = 0;
        pcVar2 = pcVar9;
        pcVar3 = pcVar7;
        do {
          if ((&cStack_6d9)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          param_4 = acStack_740;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar6);
      do {
        param_4 = param_4 + -0x18;
      } while (param_4 != acStack_720);
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      __Unwind_Resume();
      pcVar7 = acStack_800;
      pcStack_748 = FUN_107b1e2a4;
      lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = pcVar8;
      pcVar4 = pcVar2;
      pcVar6 = pcVar3;
      ppppuStack_750 = &ppppuStack_690;
      _objc_retain(pcVar8);
      _objc_retain(pcVar2);
      _objc_retain(pcVar3);
      if (pcVar1 != (char *)0x0) {
        plVar13 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(acStack_7e0,pcVar1);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar1 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_7c8,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520(pcVar3);
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_7b0,pcVar1);
        acStack_800[0] = '\0';
        acStack_800[1] = '\0';
        acStack_800[2] = '\0';
        acStack_800[3] = '\0';
        acStack_800[4] = '\0';
        acStack_800[5] = '\0';
        acStack_800[6] = '\0';
        acStack_800[7] = '\0';
        acStack_800[8] = '\0';
        acStack_800[9] = '\0';
        acStack_800[10] = '\0';
        acStack_800[0xb] = '\0';
        acStack_800[0xc] = '\0';
        acStack_800[0xd] = '\0';
        acStack_800[0xe] = '\0';
        acStack_800[0xf] = '\0';
        acStack_800[0x10] = '\0';
        acStack_800[0x11] = '\0';
        acStack_800[0x12] = '\0';
        acStack_800[0x13] = '\0';
        acStack_800[0x14] = '\0';
        acStack_800[0x15] = '\0';
        acStack_800[0x16] = '\0';
        acStack_800[0x17] = '\0';
        func_0x00010007e1e8(acStack_800,acStack_7e0,&lStack_798,3);
        pcVar5 = "";
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fcc20,acStack_800,pcVar11);
        puStack_7e8 = acStack_800;
        func_0x00010007e5dc(&puStack_7e8);
        lVar12 = 0;
        pcVar4 = pcVar7;
        pcVar6 = pcVar11;
        do {
          if ((&cStack_799)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_7b0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          param_4 = acStack_800;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar3);
      _objc_release(pcVar2);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar3);
      pcStack_838 = acStack_7e0;
      do {
        param_4 = param_4 + -0x18;
      } while (param_4 != pcStack_838);
      _objc_release(pcVar3);
      _objc_release(pcVar2);
      _objc_release(pcVar8);
      pcVar11 = pcVar1;
      __Unwind_Resume();
      pcStack_808 = FUN_107b1e564;
      lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar7 = pcVar5;
      pcStack_840 = param_4;
      pcStack_830 = pcVar1;
      pcStack_828 = pcVar3;
      pcStack_820 = pcVar2;
      pcStack_818 = pcVar8;
      ppppuStack_810 = &ppppuStack_750;
      _objc_retain(pcVar5);
      _objc_retain(pcVar4);
      if (pcVar11 != (char *)0x0) {
        plVar13 = *(long **)(pcVar11 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_878,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_860,pcVar1);
        uStack_898 = 0;
        uStack_890 = 0;
        uStack_888 = 0;
        func_0x00010007e1e8(&uStack_898,auStack_878,&lStack_848,2);
        pcVar7 = "";
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fcd00,&uStack_898,pcVar6);
        puStack_880 = &uStack_898;
        func_0x00010007e5dc(&puStack_880);
        lVar12 = 0;
        do {
          if ((&cStack_849)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != -0x30);
      }
      _objc_release(pcVar4);
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar4);
      if (cStack_861 < '\0') {
        __ZdlPv(auStack_878[0]);
      }
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      __Unwind_Resume();
      puStack_8c8 = (undefined1 *)&uStack_8e0;
      pcStack_8a8 = FUN_107b1e794;
      if (pcVar1 != (char *)0x0) {
        uStack_8e0 = 0;
        uStack_8d8 = 0;
        uStack_8d0 = 0;
        pcStack_8c0 = pcVar4;
        pcStack_8b8 = pcVar5;
        ppppuStack_8b0 = &ppppuStack_810;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_1109fcd50,&uStack_8e0,pcVar7);
        func_0x00010007e5dc(&puStack_8c8);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
  return;
}



/* Entry: 107b1cc30; end: 107b1cda3;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1cc30(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  char *unaff_x24;
  double dVar14;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined1 *puStack_808;
  char *pcStack_800;
  char *pcStack_7f8;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 auStack_7b8 [2];
  char cStack_7a1;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  char *pcStack_780;
  char *pcStack_778;
  char *pcStack_770;
  char *pcStack_768;
  char *pcStack_760;
  char *pcStack_758;
  undefined8 ****ppppuStack_750;
  code *pcStack_748;
  char acStack_740 [24];
  undefined1 *puStack_728;
  char acStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 ****ppppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  char acStack_660 [24];
  undefined1 auStack_648 [24];
  undefined8 auStack_630 [2];
  char cStack_619;
  long lStack_618;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  char acStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_500 [24];
  undefined1 *puStack_4e8;
  char acStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  char acStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 *puStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ****ppppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar9 = acStack_100;
  pcStack_88 = FUN_107b1cda4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar9;
    param_5 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar9;
      param_5 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_107b1cf18;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  pcVar9 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = (char *)auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = "";
    unaff_x23 = acStack_198;
    pcVar2 = acStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar12 = 0;
    puVar13 = auStack_178;
    pcVar9 = param_5;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_1a8 = FUN_107b1d148;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar5 = pcVar1;
  pcVar6 = pcVar2;
  dVar14 = param_1;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain();
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar2);
    plVar11 = *(long **)(pcVar3 + 8);
    pcVar3 = "true";
    if ((int)pcVar1 == 0) {
      pcVar3 = "false";
    }
    puVar13 = auStack_218;
    func_0x00010002b838(auStack_218,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    dVar14 = param_1 * 1000.0;
    pcVar9 = (char *)(long)dVar14;
    pcVar5 = "\x01";
    pcVar6 = acStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_220 = acStack_238;
    func_0x00010007e5dc(&pcStack_220);
    lVar12 = 0;
    pcVar1 = (char *)auStack_218;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
    pcVar4 = pcVar2;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_201 < '\0') {
      __ZdlPv(auStack_218[0]);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    pcVar10 = pcVar4;
    __Unwind_Resume();
    pcStack_248 = FUN_107b1d354;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar5;
    pcVar7 = pcVar6;
    pcVar8 = pcVar9;
    pcStack_280 = unaff_x24;
    pcStack_278 = unaff_x23;
    puStack_270 = puVar13;
    pcStack_268 = pcVar1;
    pcStack_260 = pcVar4;
    pcStack_258 = pcVar2;
    ppppuStack_250 = &pppuStack_1b0;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    puVar13 = (undefined8 *)0x0;
    if (pcVar10 != (char *)0x0) {
      plVar11 = *(long **)(pcVar10 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      unaff_x24 = (char *)auStack_2b8;
      func_0x00010002b838(auStack_2b8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_2a0,pcVar1);
      acStack_2d8[0] = '\0';
      acStack_2d8[1] = '\0';
      acStack_2d8[2] = '\0';
      acStack_2d8[3] = '\0';
      acStack_2d8[4] = '\0';
      acStack_2d8[5] = '\0';
      acStack_2d8[6] = '\0';
      acStack_2d8[7] = '\0';
      acStack_2d8[8] = '\0';
      acStack_2d8[9] = '\0';
      acStack_2d8[10] = '\0';
      acStack_2d8[0xb] = '\0';
      acStack_2d8[0xc] = '\0';
      acStack_2d8[0xd] = '\0';
      acStack_2d8[0xe] = '\0';
      acStack_2d8[0xf] = '\0';
      acStack_2d8[0x10] = '\0';
      acStack_2d8[0x11] = '\0';
      acStack_2d8[0x12] = '\0';
      acStack_2d8[0x13] = '\0';
      acStack_2d8[0x14] = '\0';
      acStack_2d8[0x15] = '\0';
      acStack_2d8[0x16] = '\0';
      acStack_2d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
      pcVar3 = "";
      unaff_x23 = acStack_2d8;
      pcVar7 = acStack_2d8;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      pcStack_2c0 = unaff_x23;
      func_0x00010007e5dc(&pcStack_2c0);
      lVar12 = 0;
      puVar13 = auStack_2b8;
      pcVar8 = pcVar9;
      do {
        if ((&cStack_289)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_2a1 < '\0') {
      __ZdlPv(auStack_2b8[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcStack_2e8 = FUN_107b1d584;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar3;
    pcVar4 = pcVar7;
    pcVar10 = pcVar8;
    pcStack_320 = unaff_x24;
    pcStack_318 = unaff_x23;
    puStack_310 = puVar13;
    pcStack_308 = pcVar1;
    pcStack_300 = pcVar6;
    pcStack_2f8 = pcVar5;
    ppppuStack_2f0 = &ppppuStack_250;
    _objc_retain(pcVar3);
    _objc_retain(pcVar7);
    if (pcVar2 != (char *)0x0) {
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = (char *)auStack_358;
      func_0x00010002b838(auStack_358,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_340,pcVar1);
      acStack_378[0] = '\0';
      acStack_378[1] = '\0';
      acStack_378[2] = '\0';
      acStack_378[3] = '\0';
      acStack_378[4] = '\0';
      acStack_378[5] = '\0';
      acStack_378[6] = '\0';
      acStack_378[7] = '\0';
      acStack_378[8] = '\0';
      acStack_378[9] = '\0';
      acStack_378[10] = '\0';
      acStack_378[0xb] = '\0';
      acStack_378[0xc] = '\0';
      acStack_378[0xd] = '\0';
      acStack_378[0xe] = '\0';
      acStack_378[0xf] = '\0';
      acStack_378[0x10] = '\0';
      acStack_378[0x11] = '\0';
      acStack_378[0x12] = '\0';
      acStack_378[0x13] = '\0';
      acStack_378[0x14] = '\0';
      acStack_378[0x15] = '\0';
      acStack_378[0x16] = '\0';
      acStack_378[0x17] = '\0';
      func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
      pcVar9 = "";
      pcVar4 = acStack_378;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      pcStack_360 = acStack_378;
      func_0x00010007e5dc(&pcStack_360);
      lVar12 = 0;
      pcVar10 = pcVar8;
      do {
        if ((&cStack_329)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_341 < '\0') {
      __ZdlPv(auStack_358[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar7 = acStack_440;
    pcStack_388 = FUN_107b1d7b4;
    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcVar3 = pcVar4;
    pcVar5 = pcVar10;
    pcVar6 = param_6;
    ppppuStack_390 = &ppppuStack_2f0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar4);
    _objc_retain(pcVar10);
    if (pcVar1 != (char *)0x0) {
      plVar11 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_420,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_408,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_3f0,pcVar1);
      acStack_440[0] = '\0';
      acStack_440[1] = '\0';
      acStack_440[2] = '\0';
      acStack_440[3] = '\0';
      acStack_440[4] = '\0';
      acStack_440[5] = '\0';
      acStack_440[6] = '\0';
      acStack_440[7] = '\0';
      acStack_440[8] = '\0';
      acStack_440[9] = '\0';
      acStack_440[10] = '\0';
      acStack_440[0xb] = '\0';
      acStack_440[0xc] = '\0';
      acStack_440[0xd] = '\0';
      acStack_440[0xe] = '\0';
      acStack_440[0xf] = '\0';
      acStack_440[0x10] = '\0';
      acStack_440[0x11] = '\0';
      acStack_440[0x12] = '\0';
      acStack_440[0x13] = '\0';
      acStack_440[0x14] = '\0';
      acStack_440[0x15] = '\0';
      acStack_440[0x16] = '\0';
      acStack_440[0x17] = '\0';
      func_0x00010007e1e8(acStack_440,acStack_420,&lStack_3d8,3);
      pcVar2 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_428 = acStack_440;
      func_0x00010007e5dc(&puStack_428);
      lVar12 = 0;
      pcVar3 = pcVar7;
      pcVar5 = param_6;
      do {
        if ((&cStack_3d9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = acStack_440;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar4);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_420);
    _objc_release(pcVar10);
    _objc_release(pcVar4);
    _objc_release(pcVar9);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcVar8 = acStack_500;
    pcStack_448 = FUN_107b1da74;
    lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar2;
    pcVar7 = pcVar3;
    pcVar10 = pcVar5;
    ppppuStack_450 = &ppppuStack_390;
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(pcVar2);
      _objc_retain(pcVar5);
      plVar11 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x24 = acStack_4e0;
      func_0x00010002b838(acStack_4e0,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_4c8,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_4b0,pcVar1);
      acStack_500[0] = '\0';
      acStack_500[1] = '\0';
      acStack_500[2] = '\0';
      acStack_500[3] = '\0';
      acStack_500[4] = '\0';
      acStack_500[5] = '\0';
      acStack_500[6] = '\0';
      acStack_500[7] = '\0';
      acStack_500[8] = '\0';
      acStack_500[9] = '\0';
      acStack_500[10] = '\0';
      acStack_500[0xb] = '\0';
      acStack_500[0xc] = '\0';
      acStack_500[0xd] = '\0';
      acStack_500[0xe] = '\0';
      acStack_500[0xf] = '\0';
      acStack_500[0x10] = '\0';
      acStack_500[0x11] = '\0';
      acStack_500[0x12] = '\0';
      acStack_500[0x13] = '\0';
      acStack_500[0x14] = '\0';
      acStack_500[0x15] = '\0';
      acStack_500[0x16] = '\0';
      acStack_500[0x17] = '\0';
      func_0x00010007e1e8(acStack_500,acStack_4e0,&lStack_498,3);
      pcVar10 = (char *)(long)(dVar14 * 1000.0);
      pcVar9 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_4e8 = acStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      lVar12 = 0;
      pcVar1 = acStack_4e0;
      pcVar7 = pcVar8;
      do {
        if ((&cStack_499)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x48);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
    }
    pcVar3 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        pcVar1 = pcVar1 + -0x18;
      } while (pcVar1 != acStack_4e0);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcVar8 = acStack_5c0;
      pcStack_508 = FUN_107b1dd24;
      lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar9;
      pcVar2 = pcVar7;
      pcVar5 = pcVar10;
      pcVar4 = pcVar6;
      ppppuStack_510 = &ppppuStack_450;
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      _objc_retain(pcVar10);
      if (pcVar3 != (char *)0x0) {
        plVar11 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_5a0,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_588,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_570,pcVar1);
        acStack_5c0[0] = '\0';
        acStack_5c0[1] = '\0';
        acStack_5c0[2] = '\0';
        acStack_5c0[3] = '\0';
        acStack_5c0[4] = '\0';
        acStack_5c0[5] = '\0';
        acStack_5c0[6] = '\0';
        acStack_5c0[7] = '\0';
        acStack_5c0[8] = '\0';
        acStack_5c0[9] = '\0';
        acStack_5c0[10] = '\0';
        acStack_5c0[0xb] = '\0';
        acStack_5c0[0xc] = '\0';
        acStack_5c0[0xd] = '\0';
        acStack_5c0[0xe] = '\0';
        acStack_5c0[0xf] = '\0';
        acStack_5c0[0x10] = '\0';
        acStack_5c0[0x11] = '\0';
        acStack_5c0[0x12] = '\0';
        acStack_5c0[0x13] = '\0';
        acStack_5c0[0x14] = '\0';
        acStack_5c0[0x15] = '\0';
        acStack_5c0[0x16] = '\0';
        acStack_5c0[0x17] = '\0';
        func_0x00010007e1e8(acStack_5c0,acStack_5a0,&lStack_558,3);
        pcVar1 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puStack_5a8 = acStack_5c0;
        func_0x00010007e5dc(&puStack_5a8);
        lVar12 = 0;
        pcVar2 = pcVar8;
        pcVar5 = pcVar6;
        do {
          if ((&cStack_559)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_5c0;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      pcVar3 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_558) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_5a0);
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar8 = acStack_680;
      pcStack_5c8 = FUN_107b1dfe4;
      lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar1;
      pcVar9 = pcVar2;
      pcVar7 = pcVar5;
      pcVar10 = pcVar4;
      ppppuStack_5d0 = &ppppuStack_510;
      _objc_retain(pcVar1);
      _objc_retain(pcVar2);
      _objc_retain(pcVar5);
      if (pcVar3 != (char *)0x0) {
        plVar11 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(acStack_660,pcVar3);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar3 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_648,pcVar3);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_630,pcVar3);
        acStack_680[0] = '\0';
        acStack_680[1] = '\0';
        acStack_680[2] = '\0';
        acStack_680[3] = '\0';
        acStack_680[4] = '\0';
        acStack_680[5] = '\0';
        acStack_680[6] = '\0';
        acStack_680[7] = '\0';
        acStack_680[8] = '\0';
        acStack_680[9] = '\0';
        acStack_680[10] = '\0';
        acStack_680[0xb] = '\0';
        acStack_680[0xc] = '\0';
        acStack_680[0xd] = '\0';
        acStack_680[0xe] = '\0';
        acStack_680[0xf] = '\0';
        acStack_680[0x10] = '\0';
        acStack_680[0x11] = '\0';
        acStack_680[0x12] = '\0';
        acStack_680[0x13] = '\0';
        acStack_680[0x14] = '\0';
        acStack_680[0x15] = '\0';
        acStack_680[0x16] = '\0';
        acStack_680[0x17] = '\0';
        func_0x00010007e1e8(acStack_680,acStack_660,&lStack_618,3);
        pcVar6 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puStack_668 = acStack_680;
        func_0x00010007e5dc(&puStack_668);
        lVar12 = 0;
        pcVar9 = pcVar8;
        pcVar7 = pcVar4;
        do {
          if ((&cStack_619)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_630 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_680;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      pcVar3 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_660);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcVar4 = acStack_740;
      pcStack_688 = FUN_107b1e2a4;
      lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar6;
      pcVar2 = pcVar9;
      pcVar5 = pcVar7;
      ppppuStack_690 = &ppppuStack_5d0;
      _objc_retain(pcVar6);
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        plVar11 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_720,pcVar1);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar1 = pcVar9;
          func_0x00010bdc3520(pcVar9);
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_708,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_6f0,pcVar1);
        acStack_740[0] = '\0';
        acStack_740[1] = '\0';
        acStack_740[2] = '\0';
        acStack_740[3] = '\0';
        acStack_740[4] = '\0';
        acStack_740[5] = '\0';
        acStack_740[6] = '\0';
        acStack_740[7] = '\0';
        acStack_740[8] = '\0';
        acStack_740[9] = '\0';
        acStack_740[10] = '\0';
        acStack_740[0xb] = '\0';
        acStack_740[0xc] = '\0';
        acStack_740[0xd] = '\0';
        acStack_740[0xe] = '\0';
        acStack_740[0xf] = '\0';
        acStack_740[0x10] = '\0';
        acStack_740[0x11] = '\0';
        acStack_740[0x12] = '\0';
        acStack_740[0x13] = '\0';
        acStack_740[0x14] = '\0';
        acStack_740[0x15] = '\0';
        acStack_740[0x16] = '\0';
        acStack_740[0x17] = '\0';
        func_0x00010007e1e8(acStack_740,acStack_720,&lStack_6d8,3);
        pcVar1 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_740,pcVar10);
        puStack_728 = acStack_740;
        func_0x00010007e5dc(&puStack_728);
        lVar12 = 0;
        pcVar2 = pcVar4;
        pcVar5 = pcVar10;
        do {
          if ((&cStack_6d9)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_740;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      pcVar3 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_778 = acStack_720;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != pcStack_778);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      _objc_release(pcVar6);
      pcVar10 = pcVar3;
      __Unwind_Resume();
      pcStack_748 = FUN_107b1e564;
      lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar1;
      pcStack_780 = unaff_x24;
      pcStack_770 = pcVar3;
      pcStack_768 = pcVar7;
      pcStack_760 = pcVar9;
      pcStack_758 = pcVar6;
      ppppuStack_750 = &ppppuStack_690;
      _objc_retain(pcVar1);
      _objc_retain(pcVar2);
      if (pcVar10 != (char *)0x0) {
        plVar11 = *(long **)(pcVar10 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_7b8,pcVar3);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar3 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_7a0,pcVar3);
        uStack_7d8 = 0;
        uStack_7d0 = 0;
        uStack_7c8 = 0;
        func_0x00010007e1e8(&uStack_7d8,auStack_7b8,&lStack_788,2);
        pcVar4 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_7d8,pcVar5);
        puStack_7c0 = &uStack_7d8;
        func_0x00010007e5dc(&puStack_7c0);
        lVar12 = 0;
        do {
          if ((&cStack_789)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_7a0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != -0x30);
      }
      _objc_release(pcVar2);
      pcVar3 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      if (cStack_7a1 < '\0') {
        __ZdlPv(auStack_7b8[0]);
      }
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_808 = (undefined1 *)&uStack_820;
      pcStack_7e8 = FUN_107b1e794;
      if (pcVar3 != (char *)0x0) {
        uStack_820 = 0;
        uStack_818 = 0;
        uStack_810 = 0;
        pcStack_800 = pcVar2;
        pcStack_7f8 = pcVar1;
        ppppuStack_7f0 = &ppppuStack_750;
        (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                  (*(long **)(pcVar3 + 8),&UNK_1109fcd50,&uStack_820,pcVar4);
        func_0x00010007e5dc(&puStack_808);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 107b1cda4; end: 107b1cf17;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1cda4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  char *unaff_x24;
  double dVar14;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  char *pcStack_780;
  char *pcStack_778;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 *puStack_740;
  undefined8 auStack_738 [2];
  char cStack_721;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  char *pcStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  undefined8 ****ppppuStack_6d0;
  code *pcStack_6c8;
  char acStack_6c0 [24];
  undefined1 *puStack_6a8;
  char acStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  undefined8 ****ppppuStack_610;
  code *pcStack_608;
  char acStack_600 [24];
  undefined1 *puStack_5e8;
  char acStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined8 auStack_5b0 [2];
  char cStack_599;
  long lStack_598;
  undefined8 ****ppppuStack_550;
  code *pcStack_548;
  char acStack_540 [24];
  undefined1 *puStack_528;
  char acStack_520 [24];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  char acStack_480 [24];
  undefined1 *puStack_468;
  char acStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_2f8 [24];
  char *pcStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 *puStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_107b1cf18;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar5 = pcVar6;
  pcVar9 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar4 = "";
    unaff_x23 = acStack_118;
    pcVar5 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    pcVar9 = param_5;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_107b1d148;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar1 = pcVar4;
  pcVar6 = pcVar5;
  dVar14 = param_1;
  ppuStack_130 = &puStack_90;
  _objc_retain();
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar5);
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    puVar13 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    dVar14 = param_1 * 1000.0;
    pcVar9 = (char *)(long)dVar14;
    pcVar1 = "\x01";
    pcVar6 = acStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_1a0 = acStack_1b8;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar12 = 0;
    pcVar4 = (char *)auStack_198;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
    pcVar3 = pcVar5;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_181 < '\0') {
      __ZdlPv(auStack_198[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar5);
    pcVar10 = pcVar3;
    __Unwind_Resume();
    pcStack_1c8 = FUN_107b1d354;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar1;
    pcVar7 = pcVar6;
    pcVar8 = pcVar9;
    pcStack_200 = unaff_x24;
    pcStack_1f8 = unaff_x23;
    puStack_1f0 = puVar13;
    pcStack_1e8 = pcVar4;
    pcStack_1e0 = pcVar3;
    pcStack_1d8 = pcVar5;
    pppuStack_1d0 = &ppuStack_130;
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    puVar13 = (undefined8 *)0x0;
    if (pcVar10 != (char *)0x0) {
      plVar11 = *(long **)(pcVar10 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x24 = (char *)auStack_238;
      func_0x00010002b838(auStack_238,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_220,pcVar2);
      acStack_258[0] = '\0';
      acStack_258[1] = '\0';
      acStack_258[2] = '\0';
      acStack_258[3] = '\0';
      acStack_258[4] = '\0';
      acStack_258[5] = '\0';
      acStack_258[6] = '\0';
      acStack_258[7] = '\0';
      acStack_258[8] = '\0';
      acStack_258[9] = '\0';
      acStack_258[10] = '\0';
      acStack_258[0xb] = '\0';
      acStack_258[0xc] = '\0';
      acStack_258[0xd] = '\0';
      acStack_258[0xe] = '\0';
      acStack_258[0xf] = '\0';
      acStack_258[0x10] = '\0';
      acStack_258[0x11] = '\0';
      acStack_258[0x12] = '\0';
      acStack_258[0x13] = '\0';
      acStack_258[0x14] = '\0';
      acStack_258[0x15] = '\0';
      acStack_258[0x16] = '\0';
      acStack_258[0x17] = '\0';
      func_0x00010007e1e8(acStack_258,auStack_238,&lStack_208,2);
      pcVar2 = "";
      unaff_x23 = acStack_258;
      pcVar7 = acStack_258;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      pcStack_240 = unaff_x23;
      func_0x00010007e5dc(&pcStack_240);
      lVar12 = 0;
      puVar13 = auStack_238;
      pcVar8 = pcVar9;
      do {
        if ((&cStack_209)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar4 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_221 < '\0') {
      __ZdlPv(auStack_238[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_268 = FUN_107b1d584;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar2;
    pcVar3 = pcVar7;
    pcVar10 = pcVar8;
    pcStack_2a0 = unaff_x24;
    pcStack_298 = unaff_x23;
    puStack_290 = puVar13;
    pcStack_288 = pcVar4;
    pcStack_280 = pcVar6;
    pcStack_278 = pcVar1;
    ppppuStack_270 = &pppuStack_1d0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar7);
    if (pcVar5 != (char *)0x0) {
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x24 = (char *)auStack_2d8;
      func_0x00010002b838(auStack_2d8,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_2c0,pcVar1);
      acStack_2f8[0] = '\0';
      acStack_2f8[1] = '\0';
      acStack_2f8[2] = '\0';
      acStack_2f8[3] = '\0';
      acStack_2f8[4] = '\0';
      acStack_2f8[5] = '\0';
      acStack_2f8[6] = '\0';
      acStack_2f8[7] = '\0';
      acStack_2f8[8] = '\0';
      acStack_2f8[9] = '\0';
      acStack_2f8[10] = '\0';
      acStack_2f8[0xb] = '\0';
      acStack_2f8[0xc] = '\0';
      acStack_2f8[0xd] = '\0';
      acStack_2f8[0xe] = '\0';
      acStack_2f8[0xf] = '\0';
      acStack_2f8[0x10] = '\0';
      acStack_2f8[0x11] = '\0';
      acStack_2f8[0x12] = '\0';
      acStack_2f8[0x13] = '\0';
      acStack_2f8[0x14] = '\0';
      acStack_2f8[0x15] = '\0';
      acStack_2f8[0x16] = '\0';
      acStack_2f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_2f8,auStack_2d8,&lStack_2a8,2);
      pcVar9 = "";
      pcVar3 = acStack_2f8;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      pcStack_2e0 = acStack_2f8;
      func_0x00010007e5dc(&pcStack_2e0);
      lVar12 = 0;
      pcVar10 = pcVar8;
      do {
        if ((&cStack_2a9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_2c1 < '\0') {
      __ZdlPv(auStack_2d8[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar7 = acStack_3c0;
    pcStack_308 = FUN_107b1d7b4;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar9;
    pcVar6 = pcVar3;
    pcVar2 = pcVar10;
    pcVar4 = param_6;
    ppppuStack_310 = &ppppuStack_270;
    _objc_retain(pcVar9);
    _objc_retain(pcVar3);
    _objc_retain(pcVar10);
    if (pcVar1 != (char *)0x0) {
      plVar11 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_3a0,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_388,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_370,pcVar1);
      acStack_3c0[0] = '\0';
      acStack_3c0[1] = '\0';
      acStack_3c0[2] = '\0';
      acStack_3c0[3] = '\0';
      acStack_3c0[4] = '\0';
      acStack_3c0[5] = '\0';
      acStack_3c0[6] = '\0';
      acStack_3c0[7] = '\0';
      acStack_3c0[8] = '\0';
      acStack_3c0[9] = '\0';
      acStack_3c0[10] = '\0';
      acStack_3c0[0xb] = '\0';
      acStack_3c0[0xc] = '\0';
      acStack_3c0[0xd] = '\0';
      acStack_3c0[0xe] = '\0';
      acStack_3c0[0xf] = '\0';
      acStack_3c0[0x10] = '\0';
      acStack_3c0[0x11] = '\0';
      acStack_3c0[0x12] = '\0';
      acStack_3c0[0x13] = '\0';
      acStack_3c0[0x14] = '\0';
      acStack_3c0[0x15] = '\0';
      acStack_3c0[0x16] = '\0';
      acStack_3c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3c0,acStack_3a0,&lStack_358,3);
      pcVar5 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_3a8 = acStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      lVar12 = 0;
      pcVar6 = pcVar7;
      pcVar2 = param_6;
      do {
        if ((&cStack_359)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = acStack_3c0;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar3);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_3a0);
    _objc_release(pcVar10);
    _objc_release(pcVar3);
    _objc_release(pcVar9);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcVar8 = acStack_480;
    pcStack_3c8 = FUN_107b1da74;
    lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar5;
    pcVar7 = pcVar6;
    pcVar10 = pcVar2;
    ppppuStack_3d0 = &ppppuStack_310;
    _objc_retain(pcVar5);
    _objc_retain(pcVar2);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar5);
      _objc_retain(pcVar2);
      plVar11 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      unaff_x24 = acStack_460;
      func_0x00010002b838(acStack_460,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar6 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_448,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_430,pcVar1);
      acStack_480[0] = '\0';
      acStack_480[1] = '\0';
      acStack_480[2] = '\0';
      acStack_480[3] = '\0';
      acStack_480[4] = '\0';
      acStack_480[5] = '\0';
      acStack_480[6] = '\0';
      acStack_480[7] = '\0';
      acStack_480[8] = '\0';
      acStack_480[9] = '\0';
      acStack_480[10] = '\0';
      acStack_480[0xb] = '\0';
      acStack_480[0xc] = '\0';
      acStack_480[0xd] = '\0';
      acStack_480[0xe] = '\0';
      acStack_480[0xf] = '\0';
      acStack_480[0x10] = '\0';
      acStack_480[0x11] = '\0';
      acStack_480[0x12] = '\0';
      acStack_480[0x13] = '\0';
      acStack_480[0x14] = '\0';
      acStack_480[0x15] = '\0';
      acStack_480[0x16] = '\0';
      acStack_480[0x17] = '\0';
      func_0x00010007e1e8(acStack_480,acStack_460,&lStack_418,3);
      pcVar10 = (char *)(long)(dVar14 * 1000.0);
      pcVar9 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_468 = acStack_480;
      func_0x00010007e5dc(&puStack_468);
      lVar12 = 0;
      pcVar1 = acStack_460;
      pcVar7 = pcVar8;
      do {
        if ((&cStack_419)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x48);
      _objc_release(pcVar2);
      _objc_release(pcVar5);
    }
    pcVar6 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      do {
        pcVar1 = pcVar1 + -0x18;
      } while (pcVar1 != acStack_460);
      _objc_release(pcVar2);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      _objc_release(pcVar5);
      __Unwind_Resume();
      pcVar8 = acStack_540;
      pcStack_488 = FUN_107b1dd24;
      lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar9;
      pcVar2 = pcVar7;
      pcVar5 = pcVar10;
      pcVar3 = pcVar4;
      ppppuStack_490 = &ppppuStack_3d0;
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      _objc_retain(pcVar10);
      if (pcVar6 != (char *)0x0) {
        plVar11 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_520,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_508,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_4f0,pcVar1);
        acStack_540[0] = '\0';
        acStack_540[1] = '\0';
        acStack_540[2] = '\0';
        acStack_540[3] = '\0';
        acStack_540[4] = '\0';
        acStack_540[5] = '\0';
        acStack_540[6] = '\0';
        acStack_540[7] = '\0';
        acStack_540[8] = '\0';
        acStack_540[9] = '\0';
        acStack_540[10] = '\0';
        acStack_540[0xb] = '\0';
        acStack_540[0xc] = '\0';
        acStack_540[0xd] = '\0';
        acStack_540[0xe] = '\0';
        acStack_540[0xf] = '\0';
        acStack_540[0x10] = '\0';
        acStack_540[0x11] = '\0';
        acStack_540[0x12] = '\0';
        acStack_540[0x13] = '\0';
        acStack_540[0x14] = '\0';
        acStack_540[0x15] = '\0';
        acStack_540[0x16] = '\0';
        acStack_540[0x17] = '\0';
        func_0x00010007e1e8(acStack_540,acStack_520,&lStack_4d8,3);
        pcVar1 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puStack_528 = acStack_540;
        func_0x00010007e5dc(&puStack_528);
        lVar12 = 0;
        pcVar2 = pcVar8;
        pcVar5 = pcVar4;
        do {
          if ((&cStack_4d9)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_540;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      pcVar6 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_520);
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar8 = acStack_600;
      pcStack_548 = FUN_107b1dfe4;
      lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar1;
      pcVar9 = pcVar2;
      pcVar7 = pcVar5;
      pcVar10 = pcVar3;
      ppppuStack_550 = &ppppuStack_490;
      _objc_retain(pcVar1);
      _objc_retain(pcVar2);
      _objc_retain(pcVar5);
      if (pcVar6 != (char *)0x0) {
        plVar11 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(acStack_5e0,pcVar6);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar6 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_5c8,pcVar6);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar6 = pcVar5;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_5b0,pcVar6);
        acStack_600[0] = '\0';
        acStack_600[1] = '\0';
        acStack_600[2] = '\0';
        acStack_600[3] = '\0';
        acStack_600[4] = '\0';
        acStack_600[5] = '\0';
        acStack_600[6] = '\0';
        acStack_600[7] = '\0';
        acStack_600[8] = '\0';
        acStack_600[9] = '\0';
        acStack_600[10] = '\0';
        acStack_600[0xb] = '\0';
        acStack_600[0xc] = '\0';
        acStack_600[0xd] = '\0';
        acStack_600[0xe] = '\0';
        acStack_600[0xf] = '\0';
        acStack_600[0x10] = '\0';
        acStack_600[0x11] = '\0';
        acStack_600[0x12] = '\0';
        acStack_600[0x13] = '\0';
        acStack_600[0x14] = '\0';
        acStack_600[0x15] = '\0';
        acStack_600[0x16] = '\0';
        acStack_600[0x17] = '\0';
        func_0x00010007e1e8(acStack_600,acStack_5e0,&lStack_598,3);
        pcVar4 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puStack_5e8 = acStack_600;
        func_0x00010007e5dc(&puStack_5e8);
        lVar12 = 0;
        pcVar9 = pcVar8;
        pcVar7 = pcVar3;
        do {
          if ((&cStack_599)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5b0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_600;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      pcVar6 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_5e0);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcVar3 = acStack_6c0;
      pcStack_608 = FUN_107b1e2a4;
      lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar4;
      pcVar2 = pcVar9;
      pcVar5 = pcVar7;
      ppppuStack_610 = &ppppuStack_550;
      _objc_retain(pcVar4);
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      if (pcVar6 != (char *)0x0) {
        plVar11 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar4;
          _objc_retainAutorelease(pcVar4);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        func_0x00010002b838(acStack_6a0,pcVar1);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar1 = pcVar9;
          func_0x00010bdc3520(pcVar9);
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_688,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_670,pcVar1);
        acStack_6c0[0] = '\0';
        acStack_6c0[1] = '\0';
        acStack_6c0[2] = '\0';
        acStack_6c0[3] = '\0';
        acStack_6c0[4] = '\0';
        acStack_6c0[5] = '\0';
        acStack_6c0[6] = '\0';
        acStack_6c0[7] = '\0';
        acStack_6c0[8] = '\0';
        acStack_6c0[9] = '\0';
        acStack_6c0[10] = '\0';
        acStack_6c0[0xb] = '\0';
        acStack_6c0[0xc] = '\0';
        acStack_6c0[0xd] = '\0';
        acStack_6c0[0xe] = '\0';
        acStack_6c0[0xf] = '\0';
        acStack_6c0[0x10] = '\0';
        acStack_6c0[0x11] = '\0';
        acStack_6c0[0x12] = '\0';
        acStack_6c0[0x13] = '\0';
        acStack_6c0[0x14] = '\0';
        acStack_6c0[0x15] = '\0';
        acStack_6c0[0x16] = '\0';
        acStack_6c0[0x17] = '\0';
        func_0x00010007e1e8(acStack_6c0,acStack_6a0,&lStack_658,3);
        pcVar1 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_6c0,pcVar10);
        puStack_6a8 = acStack_6c0;
        func_0x00010007e5dc(&puStack_6a8);
        lVar12 = 0;
        pcVar2 = pcVar3;
        pcVar5 = pcVar10;
        do {
          if ((&cStack_659)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_670 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_6c0;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      pcVar6 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_6f8 = acStack_6a0;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != pcStack_6f8);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      _objc_release(pcVar4);
      pcVar10 = pcVar6;
      __Unwind_Resume();
      pcStack_6c8 = FUN_107b1e564;
      lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = pcVar1;
      pcStack_700 = unaff_x24;
      pcStack_6f0 = pcVar6;
      pcStack_6e8 = pcVar7;
      pcStack_6e0 = pcVar9;
      pcStack_6d8 = pcVar4;
      ppppuStack_6d0 = &ppppuStack_610;
      _objc_retain(pcVar1);
      _objc_retain(pcVar2);
      if (pcVar10 != (char *)0x0) {
        plVar11 = *(long **)(pcVar10 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_738,pcVar6);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar6 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_720,pcVar6);
        uStack_758 = 0;
        uStack_750 = 0;
        uStack_748 = 0;
        func_0x00010007e1e8(&uStack_758,auStack_738,&lStack_708,2);
        pcVar3 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_758,pcVar5);
        puStack_740 = &uStack_758;
        func_0x00010007e5dc(&puStack_740);
        lVar12 = 0;
        do {
          if ((&cStack_709)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != -0x30);
      }
      _objc_release(pcVar2);
      pcVar6 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      if (cStack_721 < '\0') {
        __ZdlPv(auStack_738[0]);
      }
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_788 = (undefined1 *)&uStack_7a0;
      pcStack_768 = FUN_107b1e794;
      if (pcVar6 != (char *)0x0) {
        uStack_7a0 = 0;
        uStack_798 = 0;
        uStack_790 = 0;
        pcStack_780 = pcVar2;
        pcStack_778 = pcVar1;
        ppppuStack_770 = &ppppuStack_6d0;
        (**(code **)(**(long **)(pcVar6 + 8) + 0x18))
                  (*(long **)(pcVar6 + 8),&UNK_1109fcd50,&uStack_7a0,pcVar3);
        func_0x00010007e5dc(&puStack_788);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 107b1cf18; end: 107b1d147;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1cf18(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  char *unaff_x24;
  double dVar14;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  char *pcStack_680;
  char *pcStack_678;
  char *pcStack_670;
  char *pcStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  char acStack_640 [24];
  undefined1 *puStack_628;
  char acStack_620 [24];
  undefined1 auStack_608 [24];
  undefined8 auStack_5f0 [2];
  char cStack_5d9;
  long lStack_5d8;
  undefined8 ****ppppuStack_590;
  code *pcStack_588;
  char acStack_580 [24];
  undefined1 *puStack_568;
  char acStack_560 [24];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    pcVar9 = param_5;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_107b1d148;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar4;
  pcVar5 = pcVar1;
  pcVar6 = pcVar4;
  dVar14 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar4);
    plVar12 = *(long **)(pcVar2 + 8);
    pcVar9 = "true";
    if ((int)pcVar1 == 0) {
      pcVar9 = "false";
    }
    puVar13 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar9);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_100,pcVar1);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    dVar14 = param_1 * 1000.0;
    pcVar9 = (char *)(long)dVar14;
    pcVar5 = "\x01";
    pcVar6 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    pcVar1 = (char *)auStack_118;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
    pcVar3 = pcVar4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(pcVar4);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar4);
    pcVar10 = pcVar3;
    __Unwind_Resume();
    pcStack_148 = FUN_107b1d354;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar5;
    pcVar7 = pcVar6;
    pcVar8 = pcVar9;
    pcStack_180 = unaff_x24;
    pcStack_178 = unaff_x23;
    puStack_170 = puVar13;
    pcStack_168 = pcVar1;
    pcStack_160 = pcVar3;
    pcStack_158 = pcVar4;
    ppuStack_150 = &puStack_b0;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    puVar13 = (undefined8 *)0x0;
    if (pcVar10 != (char *)0x0) {
      plVar12 = *(long **)(pcVar10 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      unaff_x24 = (char *)auStack_1b8;
      func_0x00010002b838(auStack_1b8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1a0,pcVar1);
      acStack_1d8[0] = '\0';
      acStack_1d8[1] = '\0';
      acStack_1d8[2] = '\0';
      acStack_1d8[3] = '\0';
      acStack_1d8[4] = '\0';
      acStack_1d8[5] = '\0';
      acStack_1d8[6] = '\0';
      acStack_1d8[7] = '\0';
      acStack_1d8[8] = '\0';
      acStack_1d8[9] = '\0';
      acStack_1d8[10] = '\0';
      acStack_1d8[0xb] = '\0';
      acStack_1d8[0xc] = '\0';
      acStack_1d8[0xd] = '\0';
      acStack_1d8[0xe] = '\0';
      acStack_1d8[0xf] = '\0';
      acStack_1d8[0x10] = '\0';
      acStack_1d8[0x11] = '\0';
      acStack_1d8[0x12] = '\0';
      acStack_1d8[0x13] = '\0';
      acStack_1d8[0x14] = '\0';
      acStack_1d8[0x15] = '\0';
      acStack_1d8[0x16] = '\0';
      acStack_1d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
      pcVar2 = "";
      unaff_x23 = acStack_1d8;
      pcVar7 = acStack_1d8;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      pcStack_1c0 = unaff_x23;
      func_0x00010007e5dc(&pcStack_1c0);
      lVar11 = 0;
      puVar13 = auStack_1b8;
      pcVar8 = pcVar9;
      do {
        if ((&cStack_189)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_107b1d584;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar2;
    pcVar3 = pcVar7;
    pcVar10 = pcVar8;
    pcStack_220 = unaff_x24;
    pcStack_218 = unaff_x23;
    puStack_210 = puVar13;
    pcStack_208 = pcVar1;
    pcStack_200 = pcVar6;
    pcStack_1f8 = pcVar5;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(pcVar2);
    _objc_retain(pcVar7);
    if (pcVar4 != (char *)0x0) {
      plVar12 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x24 = (char *)auStack_258;
      func_0x00010002b838(auStack_258,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_240,pcVar1);
      acStack_278[0] = '\0';
      acStack_278[1] = '\0';
      acStack_278[2] = '\0';
      acStack_278[3] = '\0';
      acStack_278[4] = '\0';
      acStack_278[5] = '\0';
      acStack_278[6] = '\0';
      acStack_278[7] = '\0';
      acStack_278[8] = '\0';
      acStack_278[9] = '\0';
      acStack_278[10] = '\0';
      acStack_278[0xb] = '\0';
      acStack_278[0xc] = '\0';
      acStack_278[0xd] = '\0';
      acStack_278[0xe] = '\0';
      acStack_278[0xf] = '\0';
      acStack_278[0x10] = '\0';
      acStack_278[0x11] = '\0';
      acStack_278[0x12] = '\0';
      acStack_278[0x13] = '\0';
      acStack_278[0x14] = '\0';
      acStack_278[0x15] = '\0';
      acStack_278[0x16] = '\0';
      acStack_278[0x17] = '\0';
      func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
      pcVar9 = "";
      pcVar3 = acStack_278;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      pcStack_260 = acStack_278;
      func_0x00010007e5dc(&pcStack_260);
      lVar11 = 0;
      pcVar10 = pcVar8;
      do {
        if ((&cStack_229)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_241 < '\0') {
      __ZdlPv(auStack_258[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar7 = acStack_340;
    pcStack_288 = FUN_107b1d7b4;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar9;
    pcVar2 = pcVar3;
    pcVar5 = pcVar10;
    pcVar6 = param_6;
    ppppuStack_290 = &pppuStack_1f0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar3);
    _objc_retain(pcVar10);
    if (pcVar1 != (char *)0x0) {
      plVar12 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_320,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_308,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_2f0,pcVar1);
      acStack_340[0] = '\0';
      acStack_340[1] = '\0';
      acStack_340[2] = '\0';
      acStack_340[3] = '\0';
      acStack_340[4] = '\0';
      acStack_340[5] = '\0';
      acStack_340[6] = '\0';
      acStack_340[7] = '\0';
      acStack_340[8] = '\0';
      acStack_340[9] = '\0';
      acStack_340[10] = '\0';
      acStack_340[0xb] = '\0';
      acStack_340[0xc] = '\0';
      acStack_340[0xd] = '\0';
      acStack_340[0xe] = '\0';
      acStack_340[0xf] = '\0';
      acStack_340[0x10] = '\0';
      acStack_340[0x11] = '\0';
      acStack_340[0x12] = '\0';
      acStack_340[0x13] = '\0';
      acStack_340[0x14] = '\0';
      acStack_340[0x15] = '\0';
      acStack_340[0x16] = '\0';
      acStack_340[0x17] = '\0';
      func_0x00010007e1e8(acStack_340,acStack_320,&lStack_2d8,3);
      pcVar4 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_328 = acStack_340;
      func_0x00010007e5dc(&puStack_328);
      lVar11 = 0;
      pcVar2 = pcVar7;
      pcVar5 = param_6;
      do {
        if ((&cStack_2d9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = acStack_340;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar3);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_320);
    _objc_release(pcVar10);
    _objc_release(pcVar3);
    _objc_release(pcVar9);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcVar8 = acStack_400;
    pcStack_348 = FUN_107b1da74;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar4;
    pcVar7 = pcVar2;
    pcVar10 = pcVar5;
    ppppuStack_350 = &ppppuStack_290;
    _objc_retain(pcVar4);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar4);
      _objc_retain(pcVar5);
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      unaff_x24 = acStack_3e0;
      func_0x00010002b838(acStack_3e0,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar2 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_3c8,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_3b0,pcVar1);
      acStack_400[0] = '\0';
      acStack_400[1] = '\0';
      acStack_400[2] = '\0';
      acStack_400[3] = '\0';
      acStack_400[4] = '\0';
      acStack_400[5] = '\0';
      acStack_400[6] = '\0';
      acStack_400[7] = '\0';
      acStack_400[8] = '\0';
      acStack_400[9] = '\0';
      acStack_400[10] = '\0';
      acStack_400[0xb] = '\0';
      acStack_400[0xc] = '\0';
      acStack_400[0xd] = '\0';
      acStack_400[0xe] = '\0';
      acStack_400[0xf] = '\0';
      acStack_400[0x10] = '\0';
      acStack_400[0x11] = '\0';
      acStack_400[0x12] = '\0';
      acStack_400[0x13] = '\0';
      acStack_400[0x14] = '\0';
      acStack_400[0x15] = '\0';
      acStack_400[0x16] = '\0';
      acStack_400[0x17] = '\0';
      func_0x00010007e1e8(acStack_400,acStack_3e0,&lStack_398,3);
      pcVar10 = (char *)(long)(dVar14 * 1000.0);
      pcVar9 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_3e8 = acStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      lVar11 = 0;
      pcVar1 = acStack_3e0;
      pcVar7 = pcVar8;
      do {
        if ((&cStack_399)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x48);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
    }
    pcVar2 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        pcVar1 = pcVar1 + -0x18;
      } while (pcVar1 != acStack_3e0);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      __Unwind_Resume();
      pcVar8 = acStack_4c0;
      pcStack_408 = FUN_107b1dd24;
      lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar9;
      pcVar4 = pcVar7;
      pcVar5 = pcVar10;
      pcVar3 = pcVar6;
      ppppuStack_410 = &ppppuStack_350;
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      _objc_retain(pcVar10);
      if (pcVar2 != (char *)0x0) {
        plVar12 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_4a0,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_488,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_470,pcVar1);
        acStack_4c0[0] = '\0';
        acStack_4c0[1] = '\0';
        acStack_4c0[2] = '\0';
        acStack_4c0[3] = '\0';
        acStack_4c0[4] = '\0';
        acStack_4c0[5] = '\0';
        acStack_4c0[6] = '\0';
        acStack_4c0[7] = '\0';
        acStack_4c0[8] = '\0';
        acStack_4c0[9] = '\0';
        acStack_4c0[10] = '\0';
        acStack_4c0[0xb] = '\0';
        acStack_4c0[0xc] = '\0';
        acStack_4c0[0xd] = '\0';
        acStack_4c0[0xe] = '\0';
        acStack_4c0[0xf] = '\0';
        acStack_4c0[0x10] = '\0';
        acStack_4c0[0x11] = '\0';
        acStack_4c0[0x12] = '\0';
        acStack_4c0[0x13] = '\0';
        acStack_4c0[0x14] = '\0';
        acStack_4c0[0x15] = '\0';
        acStack_4c0[0x16] = '\0';
        acStack_4c0[0x17] = '\0';
        func_0x00010007e1e8(acStack_4c0,acStack_4a0,&lStack_458,3);
        pcVar1 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12);
        puStack_4a8 = acStack_4c0;
        func_0x00010007e5dc(&puStack_4a8);
        lVar11 = 0;
        pcVar4 = pcVar8;
        pcVar5 = pcVar6;
        do {
          if ((&cStack_459)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
          unaff_x24 = acStack_4c0;
        } while (lVar11 != -0x48);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      pcVar2 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_4a0);
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar8 = acStack_580;
      pcStack_4c8 = FUN_107b1dfe4;
      lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar1;
      pcVar6 = pcVar4;
      pcVar7 = pcVar5;
      pcVar10 = pcVar3;
      ppppuStack_4d0 = &ppppuStack_410;
      _objc_retain(pcVar1);
      _objc_retain(pcVar4);
      _objc_retain(pcVar5);
      if (pcVar2 != (char *)0x0) {
        plVar12 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          pcVar9 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(acStack_560,pcVar9);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar9 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_548,pcVar9);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar9 = pcVar5;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_530,pcVar9);
        acStack_580[0] = '\0';
        acStack_580[1] = '\0';
        acStack_580[2] = '\0';
        acStack_580[3] = '\0';
        acStack_580[4] = '\0';
        acStack_580[5] = '\0';
        acStack_580[6] = '\0';
        acStack_580[7] = '\0';
        acStack_580[8] = '\0';
        acStack_580[9] = '\0';
        acStack_580[10] = '\0';
        acStack_580[0xb] = '\0';
        acStack_580[0xc] = '\0';
        acStack_580[0xd] = '\0';
        acStack_580[0xe] = '\0';
        acStack_580[0xf] = '\0';
        acStack_580[0x10] = '\0';
        acStack_580[0x11] = '\0';
        acStack_580[0x12] = '\0';
        acStack_580[0x13] = '\0';
        acStack_580[0x14] = '\0';
        acStack_580[0x15] = '\0';
        acStack_580[0x16] = '\0';
        acStack_580[0x17] = '\0';
        func_0x00010007e1e8(acStack_580,acStack_560,&lStack_518,3);
        pcVar9 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12);
        puStack_568 = acStack_580;
        func_0x00010007e5dc(&puStack_568);
        lVar11 = 0;
        pcVar6 = pcVar8;
        pcVar7 = pcVar3;
        do {
          if ((&cStack_519)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
          unaff_x24 = acStack_580;
        } while (lVar11 != -0x48);
      }
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      pcVar2 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_560);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcVar3 = acStack_640;
      pcStack_588 = FUN_107b1e2a4;
      lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar9;
      pcVar4 = pcVar6;
      pcVar5 = pcVar7;
      ppppuStack_590 = &ppppuStack_4d0;
      _objc_retain(pcVar9);
      _objc_retain(pcVar6);
      _objc_retain(pcVar7);
      if (pcVar2 != (char *)0x0) {
        plVar12 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_620,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_608,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_5f0,pcVar1);
        acStack_640[0] = '\0';
        acStack_640[1] = '\0';
        acStack_640[2] = '\0';
        acStack_640[3] = '\0';
        acStack_640[4] = '\0';
        acStack_640[5] = '\0';
        acStack_640[6] = '\0';
        acStack_640[7] = '\0';
        acStack_640[8] = '\0';
        acStack_640[9] = '\0';
        acStack_640[10] = '\0';
        acStack_640[0xb] = '\0';
        acStack_640[0xc] = '\0';
        acStack_640[0xd] = '\0';
        acStack_640[0xe] = '\0';
        acStack_640[0xf] = '\0';
        acStack_640[0x10] = '\0';
        acStack_640[0x11] = '\0';
        acStack_640[0x12] = '\0';
        acStack_640[0x13] = '\0';
        acStack_640[0x14] = '\0';
        acStack_640[0x15] = '\0';
        acStack_640[0x16] = '\0';
        acStack_640[0x17] = '\0';
        func_0x00010007e1e8(acStack_640,acStack_620,&lStack_5d8,3);
        pcVar1 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fcc20,acStack_640,pcVar10);
        puStack_628 = acStack_640;
        func_0x00010007e5dc(&puStack_628);
        lVar11 = 0;
        pcVar4 = pcVar3;
        pcVar5 = pcVar10;
        do {
          if ((&cStack_5d9)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5f0 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
          unaff_x24 = acStack_640;
        } while (lVar11 != -0x48);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      pcVar2 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_678 = acStack_620;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != pcStack_678);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      _objc_release(pcVar9);
      pcVar10 = pcVar2;
      __Unwind_Resume();
      pcStack_648 = FUN_107b1e564;
      lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = pcVar1;
      pcStack_680 = unaff_x24;
      pcStack_670 = pcVar2;
      pcStack_668 = pcVar7;
      pcStack_660 = pcVar6;
      pcStack_658 = pcVar9;
      ppppuStack_650 = &ppppuStack_590;
      _objc_retain(pcVar1);
      _objc_retain(pcVar4);
      if (pcVar10 != (char *)0x0) {
        plVar12 = *(long **)(pcVar10 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          pcVar9 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_6b8,pcVar9);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar9 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_6a0,pcVar9);
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6c8 = 0;
        func_0x00010007e1e8(&uStack_6d8,auStack_6b8,&lStack_688,2);
        pcVar3 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fcd00,&uStack_6d8,pcVar5);
        puStack_6c0 = &uStack_6d8;
        func_0x00010007e5dc(&puStack_6c0);
        lVar11 = 0;
        do {
          if ((&cStack_689)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != -0x30);
      }
      _objc_release(pcVar4);
      pcVar9 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar4);
      if (cStack_6a1 < '\0') {
        __ZdlPv(auStack_6b8[0]);
      }
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_708 = (undefined1 *)&uStack_720;
      pcStack_6e8 = FUN_107b1e794;
      if (pcVar9 != (char *)0x0) {
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        pcStack_700 = pcVar4;
        pcStack_6f8 = pcVar1;
        ppppuStack_6f0 = &ppppuStack_650;
        (**(code **)(**(long **)(pcVar9 + 8) + 0x18))
                  (*(long **)(pcVar9 + 8),&UNK_1109fcd50,&uStack_720,pcVar3);
        func_0x00010007e5dc(&puStack_708);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 107b1d148; end: 107b1d353;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1d148(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  char *unaff_x24;
  double dVar14;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_5a0 [24];
  undefined1 *puStack_588;
  char acStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4e0 [24];
  undefined1 *puStack_4c8;
  char acStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  char acStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_360 [24];
  undefined1 *puStack_348;
  char acStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  char acStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  pcVar2 = param_3;
  pcVar5 = param_4;
  dVar14 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_4);
    plVar11 = *(long **)(param_2 + 8);
    pcVar2 = "true";
    if ((int)param_3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    dVar14 = param_1 * 1000.0;
    param_5 = (char *)(long)dVar14;
    pcVar2 = "\x01";
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
    pcVar1 = param_4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(param_4);
    __Unwind_Resume();
    pcStack_a8 = FUN_107b1d354;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar2;
    pcVar8 = pcVar5;
    pcVar4 = param_5;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    puVar13 = (undefined8 *)0x0;
    if (pcVar1 != (char *)0x0) {
      plVar11 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x24 = (char *)auStack_118;
      func_0x00010002b838(auStack_118,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_100,pcVar1);
      acStack_138[0] = '\0';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      acStack_138[8] = '\0';
      acStack_138[9] = '\0';
      acStack_138[10] = '\0';
      acStack_138[0xb] = '\0';
      acStack_138[0xc] = '\0';
      acStack_138[0xd] = '\0';
      acStack_138[0xe] = '\0';
      acStack_138[0xf] = '\0';
      acStack_138[0x10] = '\0';
      acStack_138[0x11] = '\0';
      acStack_138[0x12] = '\0';
      acStack_138[0x13] = '\0';
      acStack_138[0x14] = '\0';
      acStack_138[0x15] = '\0';
      acStack_138[0x16] = '\0';
      acStack_138[0x17] = '\0';
      func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
      pcVar6 = "";
      unaff_x23 = acStack_138;
      pcVar8 = acStack_138;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      pcStack_120 = unaff_x23;
      func_0x00010007e5dc(&pcStack_120);
      lVar12 = 0;
      puVar13 = auStack_118;
      pcVar4 = param_5;
      do {
        if ((&cStack_e9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar5);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcStack_148 = FUN_107b1d584;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar6;
    pcVar10 = pcVar8;
    pcVar9 = pcVar4;
    pcStack_180 = unaff_x24;
    pcStack_178 = unaff_x23;
    puStack_170 = puVar13;
    pcStack_168 = pcVar1;
    pcStack_160 = pcVar5;
    pcStack_158 = pcVar2;
    ppuStack_150 = &puStack_b0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      plVar11 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = (char *)auStack_1b8;
      func_0x00010002b838(auStack_1b8,pcVar2);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar2 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1a0,pcVar2);
      acStack_1d8[0] = '\0';
      acStack_1d8[1] = '\0';
      acStack_1d8[2] = '\0';
      acStack_1d8[3] = '\0';
      acStack_1d8[4] = '\0';
      acStack_1d8[5] = '\0';
      acStack_1d8[6] = '\0';
      acStack_1d8[7] = '\0';
      acStack_1d8[8] = '\0';
      acStack_1d8[9] = '\0';
      acStack_1d8[10] = '\0';
      acStack_1d8[0xb] = '\0';
      acStack_1d8[0xc] = '\0';
      acStack_1d8[0xd] = '\0';
      acStack_1d8[0xe] = '\0';
      acStack_1d8[0xf] = '\0';
      acStack_1d8[0x10] = '\0';
      acStack_1d8[0x11] = '\0';
      acStack_1d8[0x12] = '\0';
      acStack_1d8[0x13] = '\0';
      acStack_1d8[0x14] = '\0';
      acStack_1d8[0x15] = '\0';
      acStack_1d8[0x16] = '\0';
      acStack_1d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
      pcVar7 = "";
      pcVar10 = acStack_1d8;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      pcStack_1c0 = acStack_1d8;
      func_0x00010007e5dc(&pcStack_1c0);
      lVar12 = 0;
      pcVar9 = pcVar4;
      do {
        if ((&cStack_189)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar2 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcVar8 = acStack_2a0;
    pcStack_1e8 = FUN_107b1d7b4;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_4 = pcVar7;
    pcVar5 = pcVar10;
    pcVar1 = pcVar9;
    pcVar6 = param_6;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(pcVar7);
    _objc_retain(pcVar10);
    _objc_retain(pcVar9);
    if (pcVar2 != (char *)0x0) {
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_280,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar2 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_268,pcVar2);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar2 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_250,pcVar2);
      acStack_2a0[0] = '\0';
      acStack_2a0[1] = '\0';
      acStack_2a0[2] = '\0';
      acStack_2a0[3] = '\0';
      acStack_2a0[4] = '\0';
      acStack_2a0[5] = '\0';
      acStack_2a0[6] = '\0';
      acStack_2a0[7] = '\0';
      acStack_2a0[8] = '\0';
      acStack_2a0[9] = '\0';
      acStack_2a0[10] = '\0';
      acStack_2a0[0xb] = '\0';
      acStack_2a0[0xc] = '\0';
      acStack_2a0[0xd] = '\0';
      acStack_2a0[0xe] = '\0';
      acStack_2a0[0xf] = '\0';
      acStack_2a0[0x10] = '\0';
      acStack_2a0[0x11] = '\0';
      acStack_2a0[0x12] = '\0';
      acStack_2a0[0x13] = '\0';
      acStack_2a0[0x14] = '\0';
      acStack_2a0[0x15] = '\0';
      acStack_2a0[0x16] = '\0';
      acStack_2a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2a0,acStack_280,&lStack_238,3);
      param_4 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_288 = acStack_2a0;
      func_0x00010007e5dc(&puStack_288);
      lVar12 = 0;
      pcVar5 = pcVar8;
      pcVar1 = param_6;
      do {
        if ((&cStack_239)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = acStack_2a0;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar10);
    pcVar2 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_280);
    _objc_release(pcVar9);
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    pcVar4 = pcVar2;
    __Unwind_Resume();
    pcVar3 = acStack_360;
    pcStack_2a8 = FUN_107b1da74;
    lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = param_4;
    pcVar7 = pcVar5;
    pcVar10 = pcVar1;
    ppppuStack_2b0 = &pppuStack_1f0;
    _objc_retain(param_4);
    _objc_retain(pcVar1);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_4);
      _objc_retain(pcVar1);
      plVar11 = *(long **)(pcVar4 + 8);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      unaff_x24 = acStack_340;
      func_0x00010002b838(acStack_340,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar5 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_328,pcVar2);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar1);
        pcVar2 = pcVar1;
        func_0x00010bdc3520(pcVar1);
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_310,pcVar2);
      acStack_360[0] = '\0';
      acStack_360[1] = '\0';
      acStack_360[2] = '\0';
      acStack_360[3] = '\0';
      acStack_360[4] = '\0';
      acStack_360[5] = '\0';
      acStack_360[6] = '\0';
      acStack_360[7] = '\0';
      acStack_360[8] = '\0';
      acStack_360[9] = '\0';
      acStack_360[10] = '\0';
      acStack_360[0xb] = '\0';
      acStack_360[0xc] = '\0';
      acStack_360[0xd] = '\0';
      acStack_360[0xe] = '\0';
      acStack_360[0xf] = '\0';
      acStack_360[0x10] = '\0';
      acStack_360[0x11] = '\0';
      acStack_360[0x12] = '\0';
      acStack_360[0x13] = '\0';
      acStack_360[0x14] = '\0';
      acStack_360[0x15] = '\0';
      acStack_360[0x16] = '\0';
      acStack_360[0x17] = '\0';
      func_0x00010007e1e8(acStack_360,acStack_340,&lStack_2f8,3);
      pcVar10 = (char *)(long)(dVar14 * 1000.0);
      pcVar8 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_348 = acStack_360;
      func_0x00010007e5dc(&puStack_348);
      lVar12 = 0;
      pcVar2 = acStack_340;
      pcVar7 = pcVar3;
      do {
        if ((&cStack_2f9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x48);
      _objc_release(pcVar1);
      _objc_release(param_4);
    }
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_340);
      _objc_release(pcVar1);
      _objc_release(param_4);
      _objc_release(pcVar1);
      _objc_release(param_4);
      __Unwind_Resume();
      pcVar9 = acStack_420;
      pcStack_368 = FUN_107b1dd24;
      lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar8;
      pcVar1 = pcVar7;
      pcVar4 = pcVar10;
      pcVar3 = pcVar6;
      ppppuStack_370 = &ppppuStack_2b0;
      _objc_retain(pcVar8);
      _objc_retain(pcVar7);
      _objc_retain(pcVar10);
      if (pcVar5 != (char *)0x0) {
        plVar11 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(acStack_400,pcVar2);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar2 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_3e8,pcVar2);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar2 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_3d0,pcVar2);
        acStack_420[0] = '\0';
        acStack_420[1] = '\0';
        acStack_420[2] = '\0';
        acStack_420[3] = '\0';
        acStack_420[4] = '\0';
        acStack_420[5] = '\0';
        acStack_420[6] = '\0';
        acStack_420[7] = '\0';
        acStack_420[8] = '\0';
        acStack_420[9] = '\0';
        acStack_420[10] = '\0';
        acStack_420[0xb] = '\0';
        acStack_420[0xc] = '\0';
        acStack_420[0xd] = '\0';
        acStack_420[0xe] = '\0';
        acStack_420[0xf] = '\0';
        acStack_420[0x10] = '\0';
        acStack_420[0x11] = '\0';
        acStack_420[0x12] = '\0';
        acStack_420[0x13] = '\0';
        acStack_420[0x14] = '\0';
        acStack_420[0x15] = '\0';
        acStack_420[0x16] = '\0';
        acStack_420[0x17] = '\0';
        func_0x00010007e1e8(acStack_420,acStack_400,&lStack_3b8,3);
        pcVar2 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puStack_408 = acStack_420;
        func_0x00010007e5dc(&puStack_408);
        lVar12 = 0;
        pcVar1 = pcVar9;
        pcVar4 = pcVar6;
        do {
          if ((&cStack_3b9)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_420;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      pcVar5 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_400);
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar9 = acStack_4e0;
      pcStack_428 = FUN_107b1dfe4;
      lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar2;
      pcVar8 = pcVar1;
      pcVar7 = pcVar4;
      pcVar10 = pcVar3;
      ppppuStack_430 = &ppppuStack_370;
      _objc_retain(pcVar2);
      _objc_retain(pcVar1);
      _objc_retain(pcVar4);
      if (pcVar5 != (char *)0x0) {
        plVar11 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(acStack_4c0,pcVar5);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(pcVar1);
          pcVar5 = pcVar1;
          func_0x00010bdc3520(pcVar1);
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_4a8,pcVar5);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar5 = pcVar4;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_490,pcVar5);
        acStack_4e0[0] = '\0';
        acStack_4e0[1] = '\0';
        acStack_4e0[2] = '\0';
        acStack_4e0[3] = '\0';
        acStack_4e0[4] = '\0';
        acStack_4e0[5] = '\0';
        acStack_4e0[6] = '\0';
        acStack_4e0[7] = '\0';
        acStack_4e0[8] = '\0';
        acStack_4e0[9] = '\0';
        acStack_4e0[10] = '\0';
        acStack_4e0[0xb] = '\0';
        acStack_4e0[0xc] = '\0';
        acStack_4e0[0xd] = '\0';
        acStack_4e0[0xe] = '\0';
        acStack_4e0[0xf] = '\0';
        acStack_4e0[0x10] = '\0';
        acStack_4e0[0x11] = '\0';
        acStack_4e0[0x12] = '\0';
        acStack_4e0[0x13] = '\0';
        acStack_4e0[0x14] = '\0';
        acStack_4e0[0x15] = '\0';
        acStack_4e0[0x16] = '\0';
        acStack_4e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_4e0,acStack_4c0,&lStack_478,3);
        pcVar6 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puStack_4c8 = acStack_4e0;
        func_0x00010007e5dc(&puStack_4c8);
        lVar12 = 0;
        pcVar8 = pcVar9;
        pcVar7 = pcVar3;
        do {
          if ((&cStack_479)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_4e0;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      pcVar5 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_4c0);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcVar3 = acStack_5a0;
      pcStack_4e8 = FUN_107b1e2a4;
      lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar6;
      pcVar1 = pcVar8;
      pcVar4 = pcVar7;
      ppppuStack_4f0 = &ppppuStack_430;
      _objc_retain(pcVar6);
      _objc_retain(pcVar8);
      _objc_retain(pcVar7);
      if (pcVar5 != (char *)0x0) {
        plVar11 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_580,pcVar2);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar2 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_568,pcVar2);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar2 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_550,pcVar2);
        acStack_5a0[0] = '\0';
        acStack_5a0[1] = '\0';
        acStack_5a0[2] = '\0';
        acStack_5a0[3] = '\0';
        acStack_5a0[4] = '\0';
        acStack_5a0[5] = '\0';
        acStack_5a0[6] = '\0';
        acStack_5a0[7] = '\0';
        acStack_5a0[8] = '\0';
        acStack_5a0[9] = '\0';
        acStack_5a0[10] = '\0';
        acStack_5a0[0xb] = '\0';
        acStack_5a0[0xc] = '\0';
        acStack_5a0[0xd] = '\0';
        acStack_5a0[0xe] = '\0';
        acStack_5a0[0xf] = '\0';
        acStack_5a0[0x10] = '\0';
        acStack_5a0[0x11] = '\0';
        acStack_5a0[0x12] = '\0';
        acStack_5a0[0x13] = '\0';
        acStack_5a0[0x14] = '\0';
        acStack_5a0[0x15] = '\0';
        acStack_5a0[0x16] = '\0';
        acStack_5a0[0x17] = '\0';
        func_0x00010007e1e8(acStack_5a0,acStack_580,&lStack_538,3);
        pcVar2 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_5a0,pcVar10);
        puStack_588 = acStack_5a0;
        func_0x00010007e5dc(&puStack_588);
        lVar12 = 0;
        pcVar1 = pcVar3;
        pcVar4 = pcVar10;
        do {
          if ((&cStack_539)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = acStack_5a0;
        } while (lVar12 != -0x48);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar8);
      pcVar5 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_5d8 = acStack_580;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != pcStack_5d8);
      _objc_release(pcVar7);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      pcVar3 = pcVar5;
      __Unwind_Resume();
      pcStack_5a8 = FUN_107b1e564;
      lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar2;
      pcStack_5e0 = unaff_x24;
      pcStack_5d0 = pcVar5;
      pcStack_5c8 = pcVar7;
      pcStack_5c0 = pcVar8;
      pcStack_5b8 = pcVar6;
      ppppuStack_5b0 = &ppppuStack_4f0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar1);
      if (pcVar3 != (char *)0x0) {
        plVar11 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_618,pcVar5);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(pcVar1);
          pcVar5 = pcVar1;
          func_0x00010bdc3520(pcVar1);
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_600,pcVar5);
        uStack_638 = 0;
        uStack_630 = 0;
        uStack_628 = 0;
        func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5e8,2);
        pcVar10 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_638,pcVar4);
        puStack_620 = &uStack_638;
        func_0x00010007e5dc(&puStack_620);
        lVar12 = 0;
        do {
          if ((&cStack_5e9)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != -0x30);
      }
      _objc_release(pcVar1);
      pcVar5 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar1);
      if (cStack_601 < '\0') {
        __ZdlPv(auStack_618[0]);
      }
      _objc_release(pcVar1);
      _objc_release(pcVar2);
      __Unwind_Resume();
      puStack_668 = (undefined1 *)&uStack_680;
      pcStack_648 = FUN_107b1e794;
      if (pcVar5 != (char *)0x0) {
        uStack_680 = 0;
        uStack_678 = 0;
        uStack_670 = 0;
        pcStack_660 = pcVar1;
        pcStack_658 = pcVar2;
        ppppuStack_650 = &ppppuStack_5b0;
        (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                  (*(long **)(pcVar5 + 8),&UNK_1109fcd50,&uStack_680,pcVar10);
        func_0x00010007e5dc(&puStack_668);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b1d354; end: 107b1d583;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1d354(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  char *pcStack_540;
  char *pcStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_500 [24];
  undefined1 *puStack_4e8;
  char acStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  char acStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  char acStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  char acStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  pcVar13 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    pcVar13 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_107b1d584;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar4 = pcVar5;
  pcVar7 = pcVar13;
  pcStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar6 = "";
    pcVar4 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    pcVar7 = pcVar13;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar13 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_200;
  pcStack_148 = FUN_107b1d7b4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar5 = pcVar4;
  pcVar2 = pcVar7;
  pcVar3 = param_6;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  if (pcVar13 != (char *)0x0) {
    plVar11 = *(long **)(pcVar13 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_1e0,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1b0,pcVar1);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,acStack_1e0,&lStack_198,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar10 = 0;
    pcVar5 = pcVar9;
    pcVar2 = param_6;
    do {
      if ((&cStack_199)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_200;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  pcVar13 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_1e0);
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  _objc_release(pcVar6);
  pcVar4 = pcVar13;
  __Unwind_Resume();
  pcVar8 = acStack_2c0;
  pcStack_208 = FUN_107b1da74;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  pcVar9 = pcVar2;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar2);
    plVar11 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = acStack_2a0;
    func_0x00010002b838(acStack_2a0,pcVar13);
    pcVar13 = "true";
    if ((int)pcVar5 == 0) {
      pcVar13 = "false";
    }
    func_0x00010002b838(auStack_288,pcVar13);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar5 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_270,pcVar5);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,acStack_2a0,&lStack_258,3);
    pcVar9 = (char *)(long)(param_1 * 1000.0);
    pcVar6 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar10 = 0;
    pcVar13 = acStack_2a0;
    pcVar7 = pcVar8;
    do {
      if ((&cStack_259)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x48);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
  }
  pcVar5 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_2a0);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar8 = acStack_380;
    pcStack_2c8 = FUN_107b1dd24;
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    pcVar13 = pcVar7;
    pcVar2 = pcVar9;
    pcVar4 = pcVar3;
    ppppuStack_2d0 = &pppuStack_210;
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    _objc_retain(pcVar9);
    if (pcVar5 != (char *)0x0) {
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(acStack_360,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_348,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_330,pcVar1);
      acStack_380[0] = '\0';
      acStack_380[1] = '\0';
      acStack_380[2] = '\0';
      acStack_380[3] = '\0';
      acStack_380[4] = '\0';
      acStack_380[5] = '\0';
      acStack_380[6] = '\0';
      acStack_380[7] = '\0';
      acStack_380[8] = '\0';
      acStack_380[9] = '\0';
      acStack_380[10] = '\0';
      acStack_380[0xb] = '\0';
      acStack_380[0xc] = '\0';
      acStack_380[0xd] = '\0';
      acStack_380[0xe] = '\0';
      acStack_380[0xf] = '\0';
      acStack_380[0x10] = '\0';
      acStack_380[0x11] = '\0';
      acStack_380[0x12] = '\0';
      acStack_380[0x13] = '\0';
      acStack_380[0x14] = '\0';
      acStack_380[0x15] = '\0';
      acStack_380[0x16] = '\0';
      acStack_380[0x17] = '\0';
      func_0x00010007e1e8(acStack_380,acStack_360,&lStack_318,3);
      pcVar1 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_368 = acStack_380;
      func_0x00010007e5dc(&puStack_368);
      lVar10 = 0;
      pcVar13 = pcVar8;
      pcVar2 = pcVar3;
      do {
        if ((&cStack_319)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_380;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    pcVar5 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_360);
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcVar8 = acStack_440;
    pcStack_388 = FUN_107b1dfe4;
    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar1;
    pcVar3 = pcVar13;
    pcVar7 = pcVar2;
    pcVar9 = pcVar4;
    ppppuStack_390 = &ppppuStack_2d0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar13);
    _objc_retain(pcVar2);
    if (pcVar5 != (char *)0x0) {
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_420,pcVar5);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar5 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_408,pcVar5);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar5 = pcVar2;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_3f0,pcVar5);
      acStack_440[0] = '\0';
      acStack_440[1] = '\0';
      acStack_440[2] = '\0';
      acStack_440[3] = '\0';
      acStack_440[4] = '\0';
      acStack_440[5] = '\0';
      acStack_440[6] = '\0';
      acStack_440[7] = '\0';
      acStack_440[8] = '\0';
      acStack_440[9] = '\0';
      acStack_440[10] = '\0';
      acStack_440[0xb] = '\0';
      acStack_440[0xc] = '\0';
      acStack_440[0xd] = '\0';
      acStack_440[0xe] = '\0';
      acStack_440[0xf] = '\0';
      acStack_440[0x10] = '\0';
      acStack_440[0x11] = '\0';
      acStack_440[0x12] = '\0';
      acStack_440[0x13] = '\0';
      acStack_440[0x14] = '\0';
      acStack_440[0x15] = '\0';
      acStack_440[0x16] = '\0';
      acStack_440[0x17] = '\0';
      func_0x00010007e1e8(acStack_440,acStack_420,&lStack_3d8,3);
      pcVar6 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_428 = acStack_440;
      func_0x00010007e5dc(&puStack_428);
      lVar10 = 0;
      pcVar3 = pcVar8;
      pcVar7 = pcVar4;
      do {
        if ((&cStack_3d9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_440;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar13);
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_420);
    _objc_release(pcVar2);
    _objc_release(pcVar13);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar4 = acStack_500;
    pcStack_448 = FUN_107b1e2a4;
    lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    pcVar13 = pcVar3;
    pcVar2 = pcVar7;
    ppppuStack_450 = &ppppuStack_390;
    _objc_retain(pcVar6);
    _objc_retain(pcVar3);
    _objc_retain(pcVar7);
    if (pcVar5 != (char *)0x0) {
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(acStack_4e0,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_4c8,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_4b0,pcVar1);
      acStack_500[0] = '\0';
      acStack_500[1] = '\0';
      acStack_500[2] = '\0';
      acStack_500[3] = '\0';
      acStack_500[4] = '\0';
      acStack_500[5] = '\0';
      acStack_500[6] = '\0';
      acStack_500[7] = '\0';
      acStack_500[8] = '\0';
      acStack_500[9] = '\0';
      acStack_500[10] = '\0';
      acStack_500[0xb] = '\0';
      acStack_500[0xc] = '\0';
      acStack_500[0xd] = '\0';
      acStack_500[0xe] = '\0';
      acStack_500[0xf] = '\0';
      acStack_500[0x10] = '\0';
      acStack_500[0x11] = '\0';
      acStack_500[0x12] = '\0';
      acStack_500[0x13] = '\0';
      acStack_500[0x14] = '\0';
      acStack_500[0x15] = '\0';
      acStack_500[0x16] = '\0';
      acStack_500[0x17] = '\0';
      func_0x00010007e1e8(acStack_500,acStack_4e0,&lStack_498,3);
      pcVar1 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_500,pcVar9);
      puStack_4e8 = acStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      lVar10 = 0;
      pcVar13 = pcVar4;
      pcVar2 = pcVar9;
      do {
        if ((&cStack_499)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_500;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar3);
    pcVar5 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_538 = acStack_4e0;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != pcStack_538);
      _objc_release(pcVar7);
      _objc_release(pcVar3);
      _objc_release(pcVar6);
      pcVar9 = pcVar5;
      __Unwind_Resume();
      pcStack_508 = FUN_107b1e564;
      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar1;
      pcStack_540 = unaff_x24;
      pcStack_530 = pcVar5;
      pcStack_528 = pcVar7;
      pcStack_520 = pcVar3;
      pcStack_518 = pcVar6;
      ppppuStack_510 = &ppppuStack_450;
      _objc_retain(pcVar1);
      _objc_retain(pcVar13);
      if (pcVar9 != (char *)0x0) {
        plVar11 = *(long **)(pcVar9 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_578,pcVar5);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar5 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x00010002b838(auStack_560,pcVar5);
        uStack_598 = 0;
        uStack_590 = 0;
        uStack_588 = 0;
        func_0x00010007e1e8(&uStack_598,auStack_578,&lStack_548,2);
        pcVar4 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_598,pcVar2);
        puStack_580 = &uStack_598;
        func_0x00010007e5dc(&puStack_580);
        lVar10 = 0;
        do {
          if ((&cStack_549)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x30);
      }
      _objc_release(pcVar13);
      pcVar5 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
        ___stack_chk_fail();
        _objc_release(pcVar13);
        if (cStack_561 < '\0') {
          __ZdlPv(auStack_578[0]);
        }
        _objc_release(pcVar13);
        _objc_release(pcVar1);
        __Unwind_Resume();
        puStack_5c8 = (undefined1 *)&uStack_5e0;
        pcStack_5a8 = FUN_107b1e794;
        if (pcVar5 != (char *)0x0) {
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          pcStack_5c0 = pcVar13;
          pcStack_5b8 = pcVar1;
          ppppuStack_5b0 = &ppppuStack_510;
          (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                    (*(long **)(pcVar5 + 8),&UNK_1109fcd50,&uStack_5e0,pcVar4);
          func_0x00010007e5dc(&puStack_5c8);
        }
        return;
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 107b1d584; end: 107b1d7b3;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1d584(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  char *unaff_x24;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_460 [24];
  undefined1 *puStack_448;
  char acStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  char acStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  char acStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  char acStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  char acStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_4;
  pcVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar2 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar6 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  pcVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar8 = acStack_160;
  pcStack_a8 = FUN_107b1d7b4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar5 = pcVar2;
  pcVar4 = pcVar6;
  pcVar9 = param_6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  if (pcVar12 != (char *)0x0) {
    plVar11 = *(long **)(pcVar12 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_140,pcVar12);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar12 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_128,pcVar12);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar12 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_110,pcVar12);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,acStack_140,&lStack_f8,3);
    pcVar3 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar10 = 0;
    pcVar5 = pcVar8;
    pcVar4 = param_6;
    do {
      if ((&cStack_f9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  pcVar12 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_140);
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar2 = pcVar12;
  __Unwind_Resume();
  pcVar7 = acStack_220;
  pcStack_168 = FUN_107b1da74;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  pcVar6 = pcVar5;
  pcVar8 = pcVar4;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar3);
    _objc_retain(pcVar4);
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = acStack_200;
    func_0x00010002b838(acStack_200,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_1d0,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,acStack_200,&lStack_1b8,3);
    pcVar8 = (char *)(long)(param_1 * 1000.0);
    pcVar1 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar10 = 0;
    pcVar12 = acStack_200;
    pcVar6 = pcVar7;
    do {
      if ((&cStack_1b9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x48);
    _objc_release(pcVar4);
    _objc_release(pcVar3);
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    pcVar12 = pcVar12 + -0x18;
  } while (pcVar12 != acStack_200);
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcVar7 = acStack_2e0;
  pcStack_228 = FUN_107b1dd24;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar1;
  pcVar3 = pcVar6;
  pcVar5 = pcVar8;
  pcVar4 = pcVar9;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2c0,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_2a8,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_290,pcVar2);
    acStack_2e0[0] = '\0';
    acStack_2e0[1] = '\0';
    acStack_2e0[2] = '\0';
    acStack_2e0[3] = '\0';
    acStack_2e0[4] = '\0';
    acStack_2e0[5] = '\0';
    acStack_2e0[6] = '\0';
    acStack_2e0[7] = '\0';
    acStack_2e0[8] = '\0';
    acStack_2e0[9] = '\0';
    acStack_2e0[10] = '\0';
    acStack_2e0[0xb] = '\0';
    acStack_2e0[0xc] = '\0';
    acStack_2e0[0xd] = '\0';
    acStack_2e0[0xe] = '\0';
    acStack_2e0[0xf] = '\0';
    acStack_2e0[0x10] = '\0';
    acStack_2e0[0x11] = '\0';
    acStack_2e0[0x12] = '\0';
    acStack_2e0[0x13] = '\0';
    acStack_2e0[0x14] = '\0';
    acStack_2e0[0x15] = '\0';
    acStack_2e0[0x16] = '\0';
    acStack_2e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2e0,acStack_2c0,&lStack_278,3);
    pcVar12 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_2c8 = acStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar10 = 0;
    pcVar3 = pcVar7;
    pcVar5 = pcVar9;
    do {
      if ((&cStack_279)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_2e0;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_2c0);
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar7 = acStack_3a0;
    pcStack_2e8 = FUN_107b1dfe4;
    lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar12;
    pcVar6 = pcVar3;
    pcVar9 = pcVar5;
    pcVar8 = pcVar4;
    ppppuStack_2f0 = &pppuStack_230;
    _objc_retain(pcVar12);
    _objc_retain(pcVar3);
    _objc_retain(pcVar5);
    if (pcVar2 != (char *)0x0) {
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      func_0x00010002b838(acStack_380,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_368,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_350,pcVar1);
      acStack_3a0[0] = '\0';
      acStack_3a0[1] = '\0';
      acStack_3a0[2] = '\0';
      acStack_3a0[3] = '\0';
      acStack_3a0[4] = '\0';
      acStack_3a0[5] = '\0';
      acStack_3a0[6] = '\0';
      acStack_3a0[7] = '\0';
      acStack_3a0[8] = '\0';
      acStack_3a0[9] = '\0';
      acStack_3a0[10] = '\0';
      acStack_3a0[0xb] = '\0';
      acStack_3a0[0xc] = '\0';
      acStack_3a0[0xd] = '\0';
      acStack_3a0[0xe] = '\0';
      acStack_3a0[0xf] = '\0';
      acStack_3a0[0x10] = '\0';
      acStack_3a0[0x11] = '\0';
      acStack_3a0[0x12] = '\0';
      acStack_3a0[0x13] = '\0';
      acStack_3a0[0x14] = '\0';
      acStack_3a0[0x15] = '\0';
      acStack_3a0[0x16] = '\0';
      acStack_3a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3a0,acStack_380,&lStack_338,3);
      pcVar1 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_388 = acStack_3a0;
      func_0x00010007e5dc(&puStack_388);
      lVar10 = 0;
      pcVar6 = pcVar7;
      pcVar9 = pcVar4;
      do {
        if ((&cStack_339)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_3a0;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar3);
    pcVar2 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_380);
    _objc_release(pcVar5);
    _objc_release(pcVar3);
    _objc_release(pcVar12);
    __Unwind_Resume();
    pcVar4 = acStack_460;
    pcStack_3a8 = FUN_107b1e2a4;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar1;
    pcVar3 = pcVar6;
    pcVar5 = pcVar9;
    ppppuStack_3b0 = &ppppuStack_2f0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    _objc_retain(pcVar9);
    if (pcVar2 != (char *)0x0) {
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_440,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_428,pcVar2);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar2 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_410,pcVar2);
      acStack_460[0] = '\0';
      acStack_460[1] = '\0';
      acStack_460[2] = '\0';
      acStack_460[3] = '\0';
      acStack_460[4] = '\0';
      acStack_460[5] = '\0';
      acStack_460[6] = '\0';
      acStack_460[7] = '\0';
      acStack_460[8] = '\0';
      acStack_460[9] = '\0';
      acStack_460[10] = '\0';
      acStack_460[0xb] = '\0';
      acStack_460[0xc] = '\0';
      acStack_460[0xd] = '\0';
      acStack_460[0xe] = '\0';
      acStack_460[0xf] = '\0';
      acStack_460[0x10] = '\0';
      acStack_460[0x11] = '\0';
      acStack_460[0x12] = '\0';
      acStack_460[0x13] = '\0';
      acStack_460[0x14] = '\0';
      acStack_460[0x15] = '\0';
      acStack_460[0x16] = '\0';
      acStack_460[0x17] = '\0';
      func_0x00010007e1e8(acStack_460,acStack_440,&lStack_3f8,3);
      pcVar12 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_460,pcVar8);
      puStack_448 = acStack_460;
      func_0x00010007e5dc(&puStack_448);
      lVar10 = 0;
      pcVar3 = pcVar4;
      pcVar5 = pcVar8;
      do {
        if ((&cStack_3f9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_460;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    pcStack_498 = acStack_440;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcStack_498);
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar8 = pcVar2;
    __Unwind_Resume();
    pcStack_468 = FUN_107b1e564;
    lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar12;
    pcStack_4a0 = unaff_x24;
    pcStack_490 = pcVar2;
    pcStack_488 = pcVar9;
    pcStack_480 = pcVar6;
    pcStack_478 = pcVar1;
    ppppuStack_470 = &ppppuStack_3b0;
    _objc_retain(pcVar12);
    _objc_retain(pcVar3);
    if (pcVar8 != (char *)0x0) {
      plVar11 = *(long **)(pcVar8 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_4d8,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_4c0,pcVar1);
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      func_0x00010007e1e8(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
      pcVar4 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_4f8,pcVar5);
      puStack_4e0 = &uStack_4f8;
      func_0x00010007e5dc(&puStack_4e0);
      lVar10 = 0;
      do {
        if ((&cStack_4a9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar3);
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      if (cStack_4c1 < '\0') {
        __ZdlPv(auStack_4d8[0]);
      }
      _objc_release(pcVar3);
      _objc_release(pcVar12);
      __Unwind_Resume();
      puStack_528 = (undefined1 *)&uStack_540;
      pcStack_508 = FUN_107b1e794;
      if (pcVar1 != (char *)0x0) {
        uStack_540 = 0;
        uStack_538 = 0;
        uStack_530 = 0;
        pcStack_520 = pcVar3;
        pcStack_518 = pcVar12;
        ppppuStack_510 = &ppppuStack_470;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_1109fcd50,&uStack_540,pcVar4);
        func_0x00010007e5dc(&puStack_528);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107b1d7b4; end: 107b1da73;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1da3c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1d7b4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  char *unaff_x24;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar11 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  pcVar8 = param_5;
  pcVar5 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar3 = pcVar11;
    pcVar8 = param_6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = pcVar11;
  __Unwind_Resume();
  pcVar7 = acStack_180;
  pcStack_c8 = FUN_107b1da74;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar3;
  pcVar9 = pcVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar8);
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = acStack_160;
    func_0x00010002b838(acStack_160,pcVar11);
    pcVar11 = "true";
    if ((int)pcVar3 == 0) {
      pcVar11 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar11);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_130,pcVar3);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar9 = (char *)(long)(param_1 * 1000.0);
    pcVar4 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar10 = 0;
    pcVar11 = acStack_160;
    pcVar6 = pcVar7;
    do {
      if ((&cStack_119)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x48);
    _objc_release(pcVar8);
    _objc_release(pcVar1);
  }
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  do {
    pcVar11 = pcVar11 + -0x18;
  } while (pcVar11 != acStack_160);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_240;
  pcStack_188 = FUN_107b1dd24;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar8 = pcVar6;
  pcVar11 = pcVar9;
  pcVar2 = pcVar5;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(acStack_220,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar10 = 0;
    pcVar8 = pcVar7;
    pcVar11 = pcVar5;
    do {
      if ((&cStack_1d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar7 = acStack_300;
  pcStack_248 = FUN_107b1dfe4;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar4 = pcVar8;
  pcVar6 = pcVar11;
  pcVar9 = pcVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2e0,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar3 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
    pcVar5 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar10 = 0;
    pcVar4 = pcVar7;
    pcVar6 = pcVar2;
    do {
      if ((&cStack_299)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    _objc_release(pcVar11);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_2e0);
    _objc_release(pcVar11);
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar2 = acStack_3c0;
    pcStack_308 = FUN_107b1e2a4;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar5;
    pcVar8 = pcVar4;
    pcVar11 = pcVar6;
    pppuStack_310 = &pppuStack_250;
    _objc_retain(pcVar5);
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(acStack_3a0,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_388,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_370,pcVar1);
      acStack_3c0[0] = '\0';
      acStack_3c0[1] = '\0';
      acStack_3c0[2] = '\0';
      acStack_3c0[3] = '\0';
      acStack_3c0[4] = '\0';
      acStack_3c0[5] = '\0';
      acStack_3c0[6] = '\0';
      acStack_3c0[7] = '\0';
      acStack_3c0[8] = '\0';
      acStack_3c0[9] = '\0';
      acStack_3c0[10] = '\0';
      acStack_3c0[0xb] = '\0';
      acStack_3c0[0xc] = '\0';
      acStack_3c0[0xd] = '\0';
      acStack_3c0[0xe] = '\0';
      acStack_3c0[0xf] = '\0';
      acStack_3c0[0x10] = '\0';
      acStack_3c0[0x11] = '\0';
      acStack_3c0[0x12] = '\0';
      acStack_3c0[0x13] = '\0';
      acStack_3c0[0x14] = '\0';
      acStack_3c0[0x15] = '\0';
      acStack_3c0[0x16] = '\0';
      acStack_3c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3c0,acStack_3a0,&lStack_358,3);
      pcVar1 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fcc20,acStack_3c0,pcVar9);
      puStack_3a8 = acStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      lVar10 = 0;
      pcVar8 = pcVar2;
      pcVar11 = pcVar9;
      do {
        if ((&cStack_359)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_3c0;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar4);
    pcVar3 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      pcStack_3f8 = acStack_3a0;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != pcStack_3f8);
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      _objc_release(pcVar5);
      pcVar9 = pcVar3;
      __Unwind_Resume();
      pcStack_3c8 = FUN_107b1e564;
      lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar1;
      pcStack_400 = unaff_x24;
      pcStack_3f0 = pcVar3;
      pcStack_3e8 = pcVar6;
      pcStack_3e0 = pcVar4;
      pcStack_3d8 = pcVar5;
      pppuStack_3d0 = &pppuStack_310;
      _objc_retain(pcVar1);
      _objc_retain(pcVar8);
      if (pcVar9 != (char *)0x0) {
        plVar12 = *(long **)(pcVar9 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_438,pcVar3);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar3 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_420,pcVar3);
        uStack_458 = 0;
        uStack_450 = 0;
        uStack_448 = 0;
        func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
        pcVar2 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fcd00,&uStack_458,pcVar11);
        puStack_440 = &uStack_458;
        func_0x00010007e5dc(&puStack_440);
        lVar10 = 0;
        do {
          if ((&cStack_409)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x30);
      }
      _objc_release(pcVar8);
      pcVar3 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
        ___stack_chk_fail();
        _objc_release(pcVar8);
        if (cStack_421 < '\0') {
          __ZdlPv(auStack_438[0]);
        }
        _objc_release(pcVar8);
        _objc_release(pcVar1);
        __Unwind_Resume();
        puStack_488 = (undefined1 *)&uStack_4a0;
        pcStack_468 = FUN_107b1e794;
        if (pcVar3 != (char *)0x0) {
          uStack_4a0 = 0;
          uStack_498 = 0;
          uStack_490 = 0;
          pcStack_480 = pcVar8;
          pcStack_478 = pcVar1;
          pppuStack_470 = &pppuStack_3d0;
          (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                    (*(long **)(pcVar3 + 8),&UNK_1109fcd50,&uStack_4a0,pcVar2);
          func_0x00010007e5dc(&puStack_488);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107b1da74; end: 107b1dd23;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dce4) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1da74(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined1 *unaff_x22;
  char *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined1 *puStack_340;
  undefined1 *puStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_5);
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_a0;
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar9 = (char *)(long)(param_1 * 1000.0);
    pcVar1 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    unaff_x22 = auStack_a0;
    pcVar6 = pcVar2;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x48);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  pcVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x22 = unaff_x22 + -0x18;
  } while (unaff_x22 != auStack_a0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar3 = acStack_180;
  pcStack_c8 = FUN_107b1dd24;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar7 = pcVar6;
  pcVar10 = pcVar9;
  pcVar5 = param_6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar12 = 0;
    pcVar7 = pcVar3;
    pcVar10 = param_6;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar8 = acStack_240;
  pcStack_188 = FUN_107b1dfe4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar6 = pcVar7;
  pcVar9 = pcVar10;
  pcVar3 = pcVar5;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_220,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar12 = 0;
    pcVar6 = pcVar8;
    pcVar9 = pcVar5;
    do {
      if ((&cStack_1d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_220);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar5 = acStack_300;
  pcStack_248 = FUN_107b1e2a4;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar7 = pcVar6;
  pcVar10 = pcVar9;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2e0,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_2c8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_2b0,pcVar2);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,auStack_2e0,&lStack_298,3);
    pcVar4 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_300,pcVar3);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar12 = 0;
    pcVar7 = pcVar5;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_299)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  puStack_338 = auStack_2e0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_338);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_308 = FUN_107b1e564;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  puStack_340 = unaff_x24;
  pcStack_330 = pcVar2;
  pcStack_328 = pcVar9;
  pcStack_320 = pcVar6;
  pcStack_318 = pcVar1;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_378,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_360,pcVar1);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
    pcVar5 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_398,pcVar10);
    puStack_380 = &uStack_398;
    func_0x00010007e5dc(&puStack_380);
    lVar12 = 0;
    do {
      if ((&cStack_349)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_361 < '\0') {
      __ZdlPv(auStack_378[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar4);
    __Unwind_Resume();
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    pcStack_3a8 = FUN_107b1e794;
    if (pcVar1 != (char *)0x0) {
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      pcStack_3c0 = pcVar7;
      pcStack_3b8 = pcVar4;
      pppuStack_3b0 = &pppuStack_310;
      (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                (*(long **)(pcVar1 + 8),&UNK_1109fcd50,&uStack_3e0,pcVar5);
      func_0x00010007e5dc(&puStack_3c8);
    }
    return;
  }
  return;
}



/* Entry: 107b1dd24; end: 107b1dfe3;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1dfac) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1dd24(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar5 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar7 = pcVar2;
    pcVar5 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_107b1dfe4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar10 = pcVar5;
  pcVar4 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar6 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    pcVar8 = pcVar9;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_160);
    _objc_release(pcVar5);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar2 = acStack_240;
    pcStack_188 = FUN_107b1e2a4;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    pcVar7 = pcVar8;
    pcVar5 = pcVar10;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    _objc_retain(pcVar10);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_220,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_208,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_1f0,pcVar1);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x00010007e1e8(acStack_240,auStack_220,&lStack_1d8,3);
      pcVar1 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fcc20,acStack_240,pcVar4);
      puStack_228 = acStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar11 = 0;
      pcVar7 = pcVar2;
      pcVar5 = pcVar4;
      do {
        if ((&cStack_1d9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = acStack_240;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar8);
    pcVar3 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      puStack_278 = auStack_220;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != puStack_278);
      _objc_release(pcVar10);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      pcVar4 = pcVar3;
      __Unwind_Resume();
      pcStack_248 = FUN_107b1e564;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar1;
      puStack_280 = unaff_x24;
      pcStack_270 = pcVar3;
      pcStack_268 = pcVar10;
      pcStack_260 = pcVar8;
      pcStack_258 = pcVar6;
      pppuStack_250 = &ppuStack_190;
      _objc_retain(pcVar1);
      _objc_retain(pcVar7);
      if (pcVar4 != (char *)0x0) {
        plVar12 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_2b8,pcVar3);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar3 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_2a0,pcVar3);
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
        pcVar2 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fcd00,&uStack_2d8,pcVar5);
        puStack_2c0 = &uStack_2d8;
        func_0x00010007e5dc(&puStack_2c0);
        lVar11 = 0;
        do {
          if ((&cStack_289)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != -0x30);
      }
      _objc_release(pcVar7);
      pcVar5 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        if (cStack_2a1 < '\0') {
          __ZdlPv(auStack_2b8[0]);
        }
        _objc_release(pcVar7);
        _objc_release(pcVar1);
        __Unwind_Resume();
        puStack_308 = (undefined1 *)&uStack_320;
        pcStack_2e8 = FUN_107b1e794;
        if (pcVar5 != (char *)0x0) {
          uStack_320 = 0;
          uStack_318 = 0;
          uStack_310 = 0;
          pcStack_300 = pcVar7;
          pcStack_2f8 = pcVar1;
          pppuStack_2f0 = &pppuStack_250;
          (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                    (*(long **)(pcVar5 + 8),&UNK_1109fcd50,&uStack_320,pcVar2);
          func_0x00010007e5dc(&puStack_308);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107b1dfe4; end: 107b1e2a3;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e26c) */
/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1dfe4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x24;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar6 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar4 = acStack_180;
  pcStack_c8 = FUN_107b1e2a4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar7 = pcVar6;
  pcVar9 = pcVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcc20,acStack_180,pcVar3);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar10 = 0;
    pcVar7 = pcVar4;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    puStack_1b8 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_1b8);
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_188 = FUN_107b1e564;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar5;
    puStack_1c0 = unaff_x24;
    pcStack_1b0 = pcVar3;
    pcStack_1a8 = pcVar8;
    pcStack_1a0 = pcVar6;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar5);
    _objc_retain(pcVar7);
    if (pcVar4 != (char *)0x0) {
      plVar11 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_1f8,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1e0,pcVar1);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
      pcVar2 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fcd00,&uStack_218,pcVar9);
      puStack_200 = &uStack_218;
      func_0x00010007e5dc(&puStack_200);
      lVar10 = 0;
      do {
        if ((&cStack_1c9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_1e1 < '\0') {
        __ZdlPv(auStack_1f8[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar5);
      __Unwind_Resume();
      puStack_248 = (undefined1 *)&uStack_260;
      pcStack_228 = FUN_107b1e794;
      if (pcVar1 != (char *)0x0) {
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        pcStack_240 = pcVar7;
        pcStack_238 = pcVar5;
        pppuStack_230 = &ppuStack_190;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_1109fcd50,&uStack_260,pcVar2);
        func_0x00010007e5dc(&puStack_248);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107b1e2a4; end: 107b1e563;  */

/* WARNING: Removing unreachable block (ram,0x000107b1e52c) */

void FUN_107b1e2a4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  char *unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109fcc20,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    pcVar6 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_107b1e564;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_120,pcVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    pcVar5 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109fcd00,&uStack_158,pcVar4);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar7 = 0;
    do {
      if ((&cStack_109)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    puStack_188 = (undefined1 *)&uStack_1a0;
    pcStack_168 = FUN_107b1e794;
    if (pcVar4 != (char *)0x0) {
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      pcStack_180 = pcVar6;
      pcStack_178 = pcVar1;
      ppuStack_170 = &puStack_d0;
      (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                (*(long **)(pcVar4 + 8),&UNK_1109fcd50,&uStack_1a0,pcVar5);
      func_0x00010007e5dc(&puStack_188);
    }
    return;
  }
  return;
}



/* Entry: 107b1e564; end: 107b1e793;  */

void FUN_107b1e564(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fcd00,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_107b1e794;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1109fcd50,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 107b1e794; end: 107b1e80b;  */

void FUN_107b1e794(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fcd50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107b1e80c; end: 107b1e883;  */

void FUN_107b1e80c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fcda0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107b1e884; end: 107b1e8fb;  */

void FUN_107b1e884(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fcdf0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107b1e8fc; end: 107b1e973;  */

void FUN_107b1e8fc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fce40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107b1e974; end: 107b1eba3;  */

char * FUN_107b1e974(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109fceb0,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_107b1eba4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109fcf00,&uStack_120,pcVar4);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  ppcVar5 = &pcStack_150;
  pcStack_128 = FUN_107b1ed18;
  puStack_148 = PTR_PTR_1126f9e30;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 107b1eba4; end: 107b1ed17;  */

char * FUN_107b1eba4(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fcf00,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_107b1ed18;
  puStack_a8 = PTR_PTR_1126f9e30;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 107b1ed18; end: 107b1ed8b; -[SCGrapheneNseInactivityCheckMetric2 init] */

undefined1 * FUN_107b1ed18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b1ed8c; end: 107b1eeff;  */

void FUN_107b1ed8c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fcf80,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_107b1ef00;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109fcfd0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}


