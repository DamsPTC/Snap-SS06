/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071be140; end: 1071be153; -[SCPermissionRequestManager registerUserNotificationSettings] */

void FUN_1071be140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1274b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af6d8,PTR_s_registerUserNotificationSettings_112627748,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1071be154; end: 1071be1bf; -[SCPermissionRequestManager hasAskedOSNotificationPermission] */

undefined * FUN_1071be154(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1071be1c0; end: 1071be2ff; -[SCPermissionRequestManager registerNotification:] */

void FUN_1071be1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1071be0a0;
  uStack_40 = 0x1071be0b0;
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puStack_58[5];
  puStack_58[5] = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c1274a0(PTR_PTR_1126af6d8);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1071be300; end: 1071be38b;  */

void FUN_1071be300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c0dfc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
    _objc_release(param_2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071be38c; end: 1071be4d3; -[SCPermissionRequestManager requestUserLocationWithCompletionHandler:userSession:] */

void FUN_1071be38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1071be4d4;
  puStack_70 = &UNK_110991848;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_88;
  lStack_68 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf10fa0();
  _objc_release(lVar2);
  if (lVar3 == 3) {
    (*(code *)ppuVar1[2])(ppuVar1,&PTR___NSConcreteGlobalBlock_110991898);
  }
  else {
    func_0x00010bdc8060(param_1);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071be4d4; end: 1071be59f;  */

void FUN_1071be4d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c135c40(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071be5a0; end: 1071be5b3;  */

void FUN_1071be5a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001071be5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,3);
  return;
}



/* Entry: 1071be5b4; end: 1071be75b; -[SCPermissionRequestManager requestPhotosWithCompletionHandler:] */

void FUN_1071be5b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1071be680;
    puStack_40 = &UNK_1109918b8;
    ppuVar2 = &puStack_58;
    uStack_38 = param_1;
    _objc_retainBlock(ppuVar2);
    func_0x00010bdc8060(param_1);
    _objc_release(ppuVar2);
  }
  else if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    (**(code **)(param_3 + 0x10))(param_3,puVar1 == (undefined *)0x3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071be75c; end: 1071be76b;  */

void FUN_1071be75c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001071be768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,2);
  return;
}



/* Entry: 1071be76c; end: 1071be773; -[SCPermissionRequestManager checkMicrophonePermission] */

void FUN_1071be76c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_checkMicrophonePermissionWithCom_1125aba40,0)
  ;
  return;
}



/* Entry: 1071be774; end: 1071be883; -[SCPermissionRequestManager checkMicrophonePermissionWithCompletion:] */

void FUN_1071be774(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1238e0();
  _objc_release(lVar1);
  if (lVar2 != 0x67726e74) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1238e0();
    _objc_release(lVar1);
    if (lVar2 == 0x756e6474) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1071be884;
      puStack_40 = &UNK_110842508;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010c135e20(param_1,param_2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_1071be868;
    }
    func_0x00010c0e99a0(param_1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_1071be868:
  _objc_release(param_3);
  return;
}



/* Entry: 1071be884; end: 1071be897;  */

void FUN_1071be884(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071be890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1071be898; end: 1071be9eb; -[SCPermissionRequestManager requestMicrophoneWithCompletionHandler:] */

void FUN_1071be898(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar3 = &puStack_60;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1238e0();
  _objc_release(lVar1);
  if (lVar2 == 0x756e6474) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1071be9ec;
    puStack_48 = &UNK_110991818;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retainBlock(&puStack_60);
    func_0x00010bdc8060(param_1);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1238e0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2 == 0x67726e74);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071be9ec; end: 1071beaeb;  */

void FUN_1071be9ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1238e0();
    if (lVar2 == 0x756e6474) {
      _objc_retain(param_2);
      func_0x00010c136400(lVar1);
      _objc_release(param_2);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c1238e0(lVar1);
      (**(code **)(param_2 + 0x10))(param_2,lVar2 == 0x67726e74,4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071beaec; end: 1071beafb;  */

void FUN_1071beaec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001071beaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,4);
  return;
}



/* Entry: 1071beafc; end: 1071beb33; -[SCPermissionRequestManager openSystemPermissionSettings] */

void FUN_1071beafc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071beb34; end: 1071beb6b; -[SCPermissionRequestManager openSystemNotificationPermissionSettings] */

void FUN_1071beb34(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071beb6c; end: 1071bebc3; -[SCPermissionRequestManager clearOutstandingPermissionState] */

void FUN_1071beb6c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1071bebc4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1071bebc4; end: 1071bebfb;  */

/* WARNING: Possible PIC construction at 0x0001071bebe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001071bebe8) */

void FUN_1071bebc4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1071bebfc; end: 1071bedbf; -[SCPermissionRequestManager _addRequestToQueue:forPermission:withCallback:] */

void FUN_1071bebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1071becb8;
  puStack_58 = &UNK_11084dfe0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1071bedc0; end: 1071bee73; -[SCPermissionRequestManager _maybeDisplayPrompt] */

void FUN_1071bedc0(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (((*(byte *)(param_1 + 9) & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 8) = 1;
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1071bee74;
      puStack_30 = &UNK_1108bb718;
      lStack_28 = param_1;
      (**(code **)(lVar1 + 0x10))(lVar1,&puStack_48);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 1071bee74; end: 1071beed3;  */

void FUN_1071bee74(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1071beed4;
  puStack_30 = &UNK_110861e68;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_48);
  return;
}



/* Entry: 1071beed4; end: 1071bf05b;  */

long FUN_1071beed4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      (**(code **)(*(long *)(lVar8 * 8) + 0x10))
                (*(long *)(lVar8 * 8),*(undefined1 *)(param_1 + 0x30));
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c12d3e0(uVar7);
  _objc_release(puVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  func_0x00010be5dfe0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar3 = 9;
  if (puVar4 != (undefined *)0x0) {
    lVar3 = -1;
  }
  return lVar3;
}



/* Entry: 1071bf05c; end: 1071bf06b; -[SCPermissionRequestManager _permissionToPermissionPromptType:] */

undefined8 FUN_1071bf05c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 9;
  if (param_3 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 1071bf06c; end: 1071bf163; -[SCPermissionRequestManager _deepestViewController:] */

void FUN_1071bf06c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITabBarController_1126d5098;
    _objc_opt_class(PTR__OBJC_CLASS___UITabBarController_1126d5098);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        _objc_retain(param_3);
        param_1 = param_3;
        goto LAB_1071bf13c;
      }
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c15a480(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c2a0180(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdf9000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
LAB_1071bf13c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071bf164; end: 1071bf16f; -[SCPermissionRequestManager _applicationDidEnterBackground] */

void FUN_1071bf164(long param_1)

{
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



/* Entry: 1071bf170; end: 1071bf1c7; -[SCPermissionRequestManager _applicationWillEnterForeground] */

void FUN_1071bf170(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1071bf1c8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1071bf1c8; end: 1071bf1d7;  */

void FUN_1071bf1c8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be5dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__maybeDisplayPrompt_112575198);
  return;
}



/* Entry: 1071bf1d8; end: 1071bf1df; -[SCPermissionRequestManager _photoPermissionCoordinator] */

void FUN_1071bf1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_target_112678178);
  return;
}



/* Entry: 1071bf1e0; end: 1071bf277; -[SCPermissionRequestManager permissionsManagerWantsToPresentPermissionsPrompt:] */

void FUN_1071bf1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001008cd514(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bdf9000(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071bf278; end: 1071bf383; -[SCPermissionRequestManager .cxx_destruct] */

void FUN_1071bf278(long param_1)

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
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1071bf384; end: 1071bf3b7; +[SCAdTrackingAuthorization notDeterminedForAdsTrackingWithAdPromptUXType:adConfigProvider:] */

void FUN_1071bf384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001071bf320(param_3,param_4);
  if ((int)param_3 != 0) {
    func_0x00010c278ce0(PTR__OBJC_CLASS___ATTrackingManager_1126b8f80);
  }
  return;
}



/* Entry: 1071bf3b8; end: 1071bf3cb; +[SCAdTrackingAuthorization requestTrackingAuthorizationWithAdPromptUXType:adConfigProvider:adTrackingAuthorizationMetricsManager:] */

void FUN_1071bf3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestTrackingAuthorizationWith_11262b558,param_3,10,param_4,param_5,0);
  return;
}



/* Entry: 1071bf3cc; end: 1071bf3d3; +[SCAdTrackingAuthorization requestTrackingAuthorizationWithAdPromptUXType:adProductType:adConfigProvider:adTrackingAuthorizationMetricsManager:] */

void FUN_1071bf3cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestTrackingAuthorizationWith_11262b558);
  return;
}



/* Entry: 1071bf3d4; end: 1071bf4f7; +[SCAdTrackingAuthorization requestTrackingAuthorizationWithAdPromptUXType:adProductType:adConfigProvider:adTrackingAuthorizationMetricsManager:completion:] */

void FUN_1071bf3d4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x0001071bf320(param_3,param_5);
  if (((int)param_3 != 0) && (func_0x00010c0db820(), param_1 != 0)) {
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    puVar1 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c136d00(puVar1);
    _objc_release(param_7);
    _objc_release(param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1071bf4f8; end: 1071bf5af;  */

void FUN_1071bf4f8(double param_1,long param_2,ulong param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010c0a1020(param_1 - *(double *)(param_2 + 0x40),uVar2);
  if (param_3 < 3) {
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
  }
  else {
    if (param_3 != 3) {
      return;
    }
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001071bf598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,uVar2);
  return;
}



/* Entry: 1071bf5b0; end: 1071bf64b; -[SCCameraUserStatusImpl initWithStorageServices:delegate:] */

undefined1 *
FUN_1071bf5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8b78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071bf64c; end: 1071bf687; -[SCCameraUserStatusImpl isUserLoggedIn] */

undefined8 FUN_1071bf64c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c076f40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071bf688; end: 1071bf707; -[SCCameraUserStatusImpl isFirstUseLens] */

uint FUN_1071bf688(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar4 ^ 1;
}



/* Entry: 1071bf708; end: 1071bf787; -[SCCameraUserStatusImpl isFirstUseScan] */

uint FUN_1071bf708(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar4 ^ 1;
}



/* Entry: 1071bf788; end: 1071bf7e3; -[SCCameraUserStatusImpl logHasSeenLens] */

void FUN_1071bf788(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071bf7e4; end: 1071bf83f; -[SCCameraUserStatusImpl logHasSeenScan] */

void FUN_1071bf7e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071bf840; end: 1071bf857; -[SCCameraUserStatusImpl delegate] */

void FUN_1071bf840(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071bf858; end: 1071bf883; -[SCCameraUserStatusImpl .cxx_destruct] */

void FUN_1071bf858(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071bf884; end: 1071bf94b; -[SCCameraUserStatusServices .cxx_destruct] */

void FUN_1071bf884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071bf94c; end: 1071bfb0b; -[SCDiscoverFeedOperaOnboardingGestureTooltipView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1071bf94c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f8b88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_1127651dc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar5 = (long)_DAT_1127651e0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_1127651e4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1071bfb0c; end: 1071bfb93; -[SCDiscoverFeedOperaOnboardingGestureTooltipView setImage:text:shouldShowSeparatorLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bfb0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127651dc);
  _objc_retain(param_4);
  func_0x00010c1a9f00(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127651e0));
  _objc_release(param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127651e4));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1071bfb94; end: 1071bfc27; -[SCDiscoverFeedOperaOnboardingGestureTooltipView imageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1071bfb94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = (long)_DAT_1127651dc;
  lVar1 = *(long *)(param_3 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1071bfc28; end: 1071bfdab; -[SCDiscoverFeedOperaOnboardingGestureTooltipView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x0001071bfc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001071bfd10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001071bfca0) */
/* WARNING: Removing unreachable block (ram,0x0001071bfd14) */
/* WARNING: Removing unreachable block (ram,0x0001071bfd40) */
/* WARNING: Removing unreachable block (ram,0x0001071bfd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bfc28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bfe8ba0();
  lVar1 = (long)_DAT_1127651dc;
  dVar2 = 0.0;
  func_0x00010c1739e0(0,0,param_1,param_2,*(undefined8 *)(param_3 + lVar1));
  func_0x00010bf20c00(param_3);
  _CGRectGetMidX();
  dVar3 = dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,dVar3 * 0.5,*(undefined8 *)(param_3 + lVar1),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 1071bfdac; end: 1071bff6b; -[SCDiscoverFeedOperaOnboardingGestureTooltipView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1071bfdac(double param_1,double param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  dVar7 = param_1;
  dVar10 = param_2;
  func_0x00010c23d5a0(*(undefined8 *)(param_3 + _DAT_1127651e0));
  lVar6 = (long)_DAT_1127651dc;
  uVar3 = *(undefined8 *)(param_3 + lVar6);
  dVar8 = dVar7;
  dVar11 = dVar10;
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar11 = dVar10 + dVar11 + 10.0;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_1127651e4;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar5);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    dVar11 = dVar11 + 21.0;
  }
  if (param_2 < dVar11) {
    dVar9 = -10.0;
    dVar10 = (param_2 - dVar10) + -10.0;
    iVar2 = (int)*(undefined8 *)(param_3 + lVar5);
    func_0x00010c074c20();
    dVar11 = dVar10 + -21.0;
    if (iVar2 == 0) {
      dVar10 = dVar11;
    }
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c14e680((dVar10 / dVar9) * dVar11,dVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar6),param_4,uVar3);
    _objc_release(uVar3);
    dVar11 = param_2;
  }
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  dVar7 = param_1 + -70.0;
  if (param_1 + -70.0 <= dVar8) {
    dVar7 = dVar8;
  }
  if (iVar1 == 0) {
    dVar8 = dVar7;
  }
  auVar12._8_8_ = dVar11;
  auVar12._0_8_ = dVar8;
  return auVar12;
}



/* Entry: 1071bff6c; end: 1071bffbb; -[SCDiscoverFeedOperaOnboardingGestureTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bff6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127651e4,0);
  _objc_storeStrong(param_1 + _DAT_1127651e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127651dc,0);
  return;
}



/* Entry: 1071bffbc; end: 1071bffc7; +[SCDiscoverOperaOnboardingPlugin announcerIdentifier] */

undefined ** FUN_1071bffbc(void)

{
  return &PTR____CFConstantStringClassReference_110ea1958;
}



/* Entry: 1071bffc8; end: 1071bffcf; -[SCDiscoverOperaOnboardingPlugin addListener:] */

void FUN_1071bffc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1071bffd0; end: 1071bffd7; -[SCDiscoverOperaOnboardingPlugin removeListener:] */

void FUN_1071bffd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1071bffd8; end: 1071c013b; -[SCDiscoverOperaOnboardingPlugin initWithNavigationStyle:discoverFeedOnboardingTracker:circumstanceEngine:legacyStoriesTooltipsService:onDemandResourceDownloader:viewLocation:] */

undefined1 *
FUN_1071bffd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f8b90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_6;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined **)((long)puVar2 + 0x38) = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined8 *)((long)puVar2 + 0x58) = param_7;
    _objc_release(uVar3);
    *(undefined2 *)((long)puVar2 + 0x30) = 0;
    *(long *)((long)puVar2 + 0x70) = param_8;
    bVar1 = false;
    if (*(long *)((long)puVar2 + 0x10) != 0) {
      bVar1 = param_8 == 0x2c && *(long *)((long)puVar2 + 8) == 1;
    }
    *(bool *)((long)puVar2 + 0x50) = bVar1;
    puVar5 = (undefined1 *)puVar2;
    func_0x00010beb65c0();
    if ((int)puVar5 != 0) {
      func_0x00010bec17a0(puVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 1071c013c; end: 1071c01a7; -[SCDiscoverOperaOnboardingPlugin dealloc] */

void FUN_1071c013c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be02fa0(param_1,param_2,*(long *)(param_1 + 0x28),0,0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f8b90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1071c01a8; end: 1071c01b3; -[SCDiscoverOperaOnboardingPlugin setPlaylistItemController:] */

void FUN_1071c01a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1071c01b4; end: 1071c01bf; -[SCDiscoverOperaOnboardingPlugin setOperaControlling:] */

void FUN_1071c01b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1071c01c0; end: 1071c01c3; -[SCDiscoverOperaOnboardingPlugin extraPropertiesProvider] */

void FUN_1071c01c0(void)

{
  return;
}



/* Entry: 1071c01c4; end: 1071c03ab; -[SCDiscoverOperaOnboardingPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

ulong FUN_1071c01c4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 8) == 1) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010be407a0();
    if ((int)lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010bfdba80();
      _objc_release(uVar3);
      if ((uVar9 & 1) == 0) {
        puVar4 = PTR_PTR_1126c9ae8;
        func_0x00010bfc1ca0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1071c0320;
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1071c0320:
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  (**(code **)(param_6 + 0x10))(param_6,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  puVar4 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar11 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar3 = uVar9;
  if ((uVar11 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  if (uVar3 == 0) {
    uVar11 = 0;
  }
  else {
    param_3 = param_3 + 0x18;
    _objc_loadWeakRetained();
    _objc_retain();
    uVar11 = param_3;
    func_0x00010c064160(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar11);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126c9870;
    if (uVar6 == 0) {
      uVar11 = 0;
    }
    else {
      _objc_retain(uVar6);
      _objc_opt_class(puVar4);
      uVar11 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar4);
      uVar1 = uVar6;
      if ((uVar11 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar6);
      if ((uVar11 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar7 = uVar6;
        func_0x00010bfe5ec0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010bfe5ec0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar7;
        func_0x00010c0720c0(uVar7);
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      _objc_release(uVar1);
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
  _objc_release(uVar9);
  return uVar11;
}



/* Entry: 1071c03ac; end: 1071c0533; -[SCDiscoverOperaOnboardingPlugin _isFirstDiscoverChunkWithDataModel:] */

ulong FUN_1071c03ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_retain();
    uVar3 = uVar7;
    func_0x00010c064160(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c9870;
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      _objc_retain(uVar4);
      _objc_opt_class(puVar2);
      uVar7 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar3 = uVar4;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar5 = uVar4;
        func_0x00010bfe5ec0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0720c0(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1071c0534; end: 1071c068b; -[SCDiscoverOperaOnboardingPlugin registeredEventsForOperaSession] */

void FUN_1071c0534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9c10;
  func_0x00010bf3dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_88 = puVar1;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_80 = puVar2;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_78 = puVar3;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9460;
  puStack_70 = puVar4;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9460;
  puStack_68 = puVar5;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_88;
  uVar12 = 6;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(uVar12);
  puVar2 = PTR_PTR_1126c9460;
  func_0x00010c0f2560(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar11;
  func_0x00010c0720c0(ppuVar11,param_2,puVar2);
  if ((int)ppuVar8 == 0) {
    puVar3 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0(ppuVar11,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)ppuVar8 & 1) != 0) goto LAB_1071c0728;
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0(ppuVar11,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar8 != 0) {
      *(undefined2 *)(puVar1 + 0x68) = 0x100;
    }
LAB_1071c079c:
    uVar10 = uVar12;
    func_0x00010c06b7e0();
    if ((uVar10 & 1) != 0) goto LAB_1071c0864;
    puVar2 = PTR_PTR_1126c9c10;
    func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0(ppuVar11,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar8 != 0) {
      func_0x00010be684c0(puVar1,param_2,uVar12);
      goto LAB_1071c0864;
    }
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0(ppuVar11,param_2,puVar2);
    if ((int)ppuVar8 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar11;
      func_0x00010c0720c0(ppuVar11,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)ppuVar8 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf96940(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010c0720c0(ppuVar11,param_2,puVar2);
        if ((int)ppuVar8 == 0) {
          _objc_release(puVar2);
          goto LAB_1071c0864;
        }
        puVar3 = puVar1;
        func_0x00010be426a0();
        _objc_release(puVar2);
        if ((int)puVar3 == 0) goto LAB_1071c0864;
        goto LAB_1071c074c;
      }
    }
    else {
      _objc_release(puVar2);
    }
    func_0x00010be6a020(puVar1,param_2,uVar12);
  }
  else {
    _objc_release(puVar2);
LAB_1071c0728:
    *(undefined2 *)(puVar1 + 0x68) = 0x100;
    puVar2 = puVar1;
    func_0x00010be426a0();
    if ((int)puVar2 == 0) goto LAB_1071c079c;
    lVar9 = *(long *)(puVar1 + 0x28);
    func_0x00010c0e81e0();
    if (lVar9 != 4) goto LAB_1071c079c;
LAB_1071c074c:
    func_0x00010bde2f20(puVar1,param_2,*(undefined8 *)(puVar1 + 0x28),0);
  }
LAB_1071c0864:
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1071c068c; end: 1071c08d3; -[SCDiscoverOperaOnboardingPlugin operaViewDidSendEvent:page:params:] */

void FUN_1071c068c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2560(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) != 0) goto LAB_1071c0728;
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      *(undefined2 *)(param_1 + 0x68) = 0x100;
    }
LAB_1071c079c:
    uVar2 = param_4;
    func_0x00010c06b7e0();
    if ((uVar2 & 1) != 0) goto LAB_1071c0864;
    puVar1 = PTR_PTR_1126c9c10;
    func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be684c0(param_1,param_2,param_4);
      goto LAB_1071c0864;
    }
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010bf96940(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        if ((int)uVar2 == 0) {
          _objc_release(puVar1);
          goto LAB_1071c0864;
        }
        lVar4 = param_1;
        func_0x00010be426a0();
        _objc_release(puVar1);
        if ((int)lVar4 == 0) goto LAB_1071c0864;
        goto LAB_1071c074c;
      }
    }
    else {
      _objc_release(puVar1);
    }
    func_0x00010be6a020(param_1,param_2,param_4);
  }
  else {
    _objc_release(puVar1);
LAB_1071c0728:
    *(undefined2 *)(param_1 + 0x68) = 0x100;
    lVar4 = param_1;
    func_0x00010be426a0();
    if ((int)lVar4 == 0) goto LAB_1071c079c;
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0e81e0();
    if (lVar4 != 4) goto LAB_1071c079c;
LAB_1071c074c:
    func_0x00010bde2f20(param_1,param_2,*(undefined8 *)(param_1 + 0x28),0);
  }
LAB_1071c0864:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071c08d4; end: 1071c0937; -[SCDiscoverOperaOnboardingPlugin _isOnboardingShowing] */

bool FUN_1071c08d4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c10fd00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1071c0938; end: 1071c09e3; -[SCDiscoverOperaOnboardingPlugin _onCloseGestureTooltipsOverlayWithPage:] */

void FUN_1071c0938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 1) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa200();
  _objc_release(uVar2);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c101400(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c09e4; end: 1071c0a4f; -[SCDiscoverOperaOnboardingPlugin _onMediaStartWithPage:] */

void FUN_1071c09e4(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 8) == 1) && (lVar1 = param_1, func_0x00010beb6380(), (int)lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010beb65c0();
    if ((int)lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x60);
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        *(undefined1 *)(param_1 + 0x68) = 1;
        return;
      }
    }
    lVar1 = param_1;
    func_0x00010be20f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7d010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentOperaOnboardingViewContr_11257cda0,lVar1);
    return;
  }
  return;
}



/* Entry: 1071c0a50; end: 1071c0a67; -[SCDiscoverOperaOnboardingPlugin _presentOperaOnboardingViewControllerWithOnboardingType:] */

void FUN_1071c0a50(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be7e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentScrollEducationOnboardin_11257d2e0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentModalOnboardingWithType__11257cbd0);
  return;
}



/* Entry: 1071c0a68; end: 1071c0c4b; -[SCDiscoverOperaOnboardingPlugin _presentScrollEducationOnboarding] */

void FUN_1071c0a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_5 + 0x60);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_5 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126d50a0;
    _objc_alloc();
    func_0x00010c00cfe0();
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    *(undefined **)(param_5 + 0x28) = puVar4;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x28),param_6,param_5);
    func_0x00010bef7700(lVar3,param_6,*(undefined8 *)(param_5 + 0x28));
    lVar1 = lVar3;
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar5);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d4a0();
    _objc_release(uVar5);
    lVar1 = lVar3;
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1,param_6,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar1);
    func_0x00010bf77e80(*(undefined8 *)(param_5 + 0x28),param_6,lVar3);
    uVar5 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fd80();
    _objc_release(uVar5);
    func_0x00010be54aa0(param_5,param_6,&PTR____CFConstantStringClassReference_110ea1918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1071c0c4c; end: 1071c0d93; -[SCDiscoverOperaOnboardingPlugin _presentModalOnboardingWithType:] */

void FUN_1071c0c4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126d50a0;
  _objc_alloc();
  func_0x00010c00cfe0();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c10eda0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1071c0d94; end: 1071c0dbf;  */

void FUN_1071c0d94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c0dc0; end: 1071c0e1b; -[SCDiscoverOperaOnboardingPlugin _getOperaOnboardingType] */

undefined8 FUN_1071c0dc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010beb65c0();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x60);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      return 4;
    }
  }
  lVar1 = param_1;
  func_0x00010beb6820();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (*(char *)(param_1 + 0x31) != '\0') {
      uVar2 = 3;
    }
  }
  return uVar2;
}



/* Entry: 1071c0e1c; end: 1071c0e97; -[SCDiscoverOperaOnboardingPlugin _pauseOpera] */

void FUN_1071c0e1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071c0e98; end: 1071c0e9f; -[SCDiscoverOperaOnboardingPlugin didTapToDismissOnboardingViewController:] */

void FUN_1071c0e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeOnboarding_shouldResume_112556568,param_3,1);
  return;
}



/* Entry: 1071c0ea0; end: 1071c0f47; -[SCDiscoverOperaOnboardingPlugin _completeOnboarding:shouldResume:] */

void FUN_1071c0ea0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_3;
    func_0x00010c0e81e0();
    if ((lVar1 != 4) && (*(char *)(param_1 + 0x30) == '\x01')) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21fda0();
      _objc_release(uVar2);
      func_0x00010be54aa0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea18f8);
    }
    func_0x00010be02fa0(param_1,param_2,param_3,1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071c0f48; end: 1071c1073; -[SCDiscoverOperaOnboardingPlugin _dismissOnboardingViewController:animated:shouldResume:] */

void FUN_1071c0f48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    uStack_50 = param_5;
    _objc_copyWeak(auStack_58,auStack_48);
    func_0x00010bf84b00(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010c2a6740(param_3);
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    func_0x00010c12c8e0(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071c1074; end: 1071c10c7;  */

void FUN_1071c1074(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071c10c8; end: 1071c11eb; -[SCDiscoverOperaOnboardingPlugin _logImpressionEventForItemId:] */

undefined * FUN_1071c10c8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar1 = param_3;
  func_0x00010beb6820();
  if (((ulong)puVar1 & 1) != 0) {
    return (undefined *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__shouldShowScrollEducation_11258b318);
  return param_3;
}



/* Entry: 1071c11ec; end: 1071c1223; -[SCDiscoverOperaOnboardingPlugin _shouldShowOnboardingOnMediaStart] */

ulong FUN_1071c11ec(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010beb6820();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldShowScrollEducation_11258b318);
  return param_1;
}



/* Entry: 1071c1224; end: 1071c1277; -[SCDiscoverOperaOnboardingPlugin _shouldShowVOperaV2Onboarding] */

uint FUN_1071c1224(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c294f60();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1071c1278; end: 1071c12d3; -[SCDiscoverOperaOnboardingPlugin _shouldShowScrollEducation] */

uint FUN_1071c1278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x50) == '\x01') && ((*(byte *)(param_1 + 0x69) & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c294f40();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1071c12d4; end: 1071c13cf; -[SCDiscoverOperaOnboardingPlugin _startScrollEducationFetch] */

void FUN_1071c12d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110ea1938);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf88760(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 1071c13d0; end: 1071c1497;  */

void FUN_1071c13d0(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1071c1498;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1071c1498; end: 1071c1503;  */

void FUN_1071c1498(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = uVar4;
    _objc_release(uVar2);
    if (*(char *)(lVar1 + 0x68) == '\x01') {
      *(undefined1 *)(lVar1 + 0x68) = 0;
      lVar3 = lVar1;
      func_0x00010beb65c0();
      if ((int)lVar3 != 0) {
        func_0x00010be7e500(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071c1504; end: 1071c157f; -[SCDiscoverOperaOnboardingPlugin .cxx_destruct] */

void FUN_1071c1504(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1071c1580; end: 1071c158f; -[SCDiscoverOperaOnboardingViewController initWithNibName:bundle:] */

void FUN_1071c1580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDiscoverOperaOnboardingT_1125e0dc8,0,0,0);
  return;
}



/* Entry: 1071c1590; end: 1071c159f; -[SCDiscoverOperaOnboardingViewController initWithCoder:] */

void FUN_1071c1590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDiscoverOperaOnboardingT_1125e0dc8,0,0,0);
  return;
}



/* Entry: 1071c15a0; end: 1071c166b; -[SCDiscoverOperaOnboardingViewController initWithDiscoverOperaOnboardingType:viewLocation:scrollEducationGifData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1071c15a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8b98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
    func_0x00010c1c8c00(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112765228) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276522c) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112765230);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112765230) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1071c166c; end: 1071c17af; -[SCDiscoverOperaOnboardingViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c166c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112765228;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 - 2U < 2) {
    puVar1 = PTR_PTR_1126cdce0;
    _objc_alloc(PTR_PTR_1126cdce0);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c014740(puVar1,param_2,*(long *)(param_1 + lVar4) == 3,0);
  }
  else if (lVar3 == 4) {
    puVar1 = PTR_PTR_1126d50a8;
    _objc_alloc(PTR_PTR_1126d50a8);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c014500(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112765230));
  }
  else {
    if (lVar3 != 1) {
      return;
    }
    puVar1 = PTR_PTR_1126cdce8;
    _objc_alloc(PTR_PTR_1126cdce8);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0(puVar1);
  }
  _objc_release(puVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071c17b0; end: 1071c17eb; -[SCDiscoverOperaOnboardingViewController didCompleteSpotlightOnboardingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c17b0(long param_1)

{
  param_1 = param_1 + _DAT_112765234;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c17ec; end: 1071c1827; -[SCDiscoverOperaOnboardingViewController didCompleteDiscoverVOperaV2Onboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c17ec(long param_1)

{
  param_1 = param_1 + _DAT_112765234;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c1828; end: 1071c183f; -[SCDiscoverOperaOnboardingViewController shouldBeSilentlyPresentedAndPauseOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1071c1828(long param_1)

{
  return *(long *)(param_1 + _DAT_112765228) != 4;
}



/* Entry: 1071c1840; end: 1071c1847; -[SCDiscoverOperaOnboardingViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_1071c1840(void)

{
  return 1;
}



/* Entry: 1071c1848; end: 1071c1857; -[SCDiscoverOperaOnboardingViewController onboardingType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071c1848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765228);
}



/* Entry: 1071c1858; end: 1071c1877; -[SCDiscoverOperaOnboardingViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c1858(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112765234);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071c1878; end: 1071c188b; -[SCDiscoverOperaOnboardingViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c1878(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112765234,param_3);
  return;
}



/* Entry: 1071c188c; end: 1071c18c7; -[SCDiscoverOperaOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c188c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112765234);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112765230,0);
  return;
}



/* Entry: 1071c18c8; end: 1071c1947; -[SCDiscoverVOperaScrollEducationView initWithFrame:] */

undefined8
FUN_1071c18c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014500(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 1071c1948; end: 1071c19a7; -[SCDiscoverVOperaScrollEducationView initWithCoder:] */

undefined8 FUN_1071c1948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014500(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1071c19a8; end: 1071c1b63; -[SCDiscoverVOperaScrollEducationView initWithFrame:gifData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1071c19a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f8ba0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c1af000(puVar1);
    func_0x000107dd6350();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar3);
    func_0x00010c160f80(puVar1);
    func_0x00010c161080(puVar1);
    func_0x00010beb1560(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112765238);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11276523c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1071c1b64; end: 1071c23fb; -[SCDiscoverVOperaScrollEducationView _setupViewsWithGifData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c1b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar16 = (long)_DAT_112765240;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar16));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar18 = (long)_DAT_112765238;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_opt_new();
  lVar15 = (long)_DAT_112765244;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR_PTR_1126b2720;
  func_0x00010c14d040(PTR_PTR_1126b2720);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar17 = (long)_DAT_112765248;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c219b60(uVar14);
  func_0x000107dd6350();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar17));
  _objc_release(uVar14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c106a80(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = *(undefined1 **)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  puStack_100 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  puStack_110 = puVar3;
  puStack_f8 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_118 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_128 = uVar14;
  uStack_f0 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_130 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uStack_140 = uVar5;
  uStack_e8 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_148 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_158 = uVar14;
  uStack_e0 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_160 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_170 = uVar5;
  uStack_d8 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_178 = uVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_188 = uVar14;
  uStack_d0 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_198 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a0 = uVar14;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_1a8 = uVar5;
  uStack_c8 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_1b0 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  uStack_1c0 = uVar6;
  uStack_c0 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = uVar14;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_1d0 = uVar14;
  uStack_b8 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d8 = uVar5;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  uStack_1e0 = uVar5;
  uStack_b0 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  uStack_1e8 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f0 = uVar14;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  uStack_1f8 = uVar6;
  uStack_a8 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_200 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  uStack_210 = uVar5;
  uStack_a0 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  uStack_98 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  uStack_90 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_190);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_188);
  _objc_release(lStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(lStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(lStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(lStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_128);
  _objc_release(lStack_120);
  _objc_release(uStack_118);
  _objc_release(puStack_110);
  _objc_release(lStack_108);
  puVar3 = puStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_240;
  pcStack_218 = FUN_1071c23fc;
  puStack_238 = PTR_PTR_1126f8ba0;
  puStack_240 = puVar3;
  uStack_230 = uVar6;
  uStack_228 = uVar12;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_240,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar13 == (undefined1 **)puVar3) ||
     (ppuVar13 == (undefined1 **)*(undefined1 **)(puVar3 + _DAT_112765240))) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar13);
    puVar3 = (undefined1 *)ppuVar13;
  }
  _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


