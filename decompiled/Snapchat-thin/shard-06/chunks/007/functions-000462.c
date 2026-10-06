/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cd6464; end: 104cd64ef; -[SCLogInCredentialsEntryBusinessLogic _handlePromptRedirectToRegAction:] */

void FUN_104cd6464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cd64f0;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cd6678;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104cd6718;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf5a0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104cd64f0; end: 104cd6583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd64f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127108fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710970);
  FUN_104cd6584(uVar2);
  func_0x00010c0ad900(uVar1,param_2,2,uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_1127108d0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf5c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104cd6584; end: 104cd6677;  */

undefined8 FUN_104cd6584(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = 0xffffffffffffffff;
  if (param_1 != 0) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0xffffffffffffffff;
    func_0x00010c0c1360(param_1);
    uVar1 = puStack_38[3];
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104cd6678; end: 104cd678b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127108fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710970);
  FUN_104cd6584(uVar2);
  func_0x00010c0ad900(uVar1,param_2,5,uVar2);
  _objc_release(uVar1);
  func_0x00010bde0d20(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_1127108d0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf5c260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104cd678c; end: 104cd67db; -[SCLogInCredentialsEntryBusinessLogic _clearRedirectToRegPromptStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd678c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710964);
  *(undefined8 *)(param_1 + _DAT_112710964) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710968);
  *(undefined8 *)(param_1 + _DAT_112710968) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710970);
  *(undefined8 *)(param_1 + _DAT_112710970) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cd67dc; end: 104cd6813; -[SCLogInCredentialsEntryBusinessLogic _updateAccountNotFoundPromptState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd67dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 7) {
    uVar1 = 2;
  }
  else if (param_3 == 6) {
    uVar1 = 1;
  }
  else {
    if (param_3 != 0) {
      *(undefined8 *)(param_1 + _DAT_112710930) = 0;
      return;
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bede690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRedirectToRegDialog__112595348,uVar1);
  return;
}



/* Entry: 104cd6814; end: 104cd6af3; -[SCLogInCredentialsEntryBusinessLogic _updateRedirectToRegDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6814(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 < 3) {
    *(long *)(param_1 + _DAT_112710930) = *(long *)(param_1 + _DAT_112710930) + 1;
    lVar6 = param_1;
    func_0x00010beb5160();
    puVar3 = PTR_PTR_1126af238;
    if ((int)lVar6 != 0) {
      if (param_3 == 2) {
        puVar1 = PTR_PTR_1126af240;
        _objc_alloc(PTR_PTR_1126af240);
        uVar5 = *(undefined8 *)(param_1 + _DAT_112710960);
        puVar2 = PTR_PTR_1126aed98;
        func_0x00010c25db20(PTR_PTR_1126aed98,param_2,*(undefined8 *)(param_1 + _DAT_112710954));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0062e0(puVar1,param_2,uVar5,puVar2);
        func_0x00010c0fb0e0(puVar3,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_112710970;
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        *(undefined **)(param_1 + lVar7) = puVar3;
        _objc_release(uVar5);
        _objc_release(puVar1);
        _objc_release();
        func_0x000104ce4ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_112710964);
        *(undefined **)(param_1 + _DAT_112710964) = puVar2;
        _objc_release(uVar5);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000104ce4bb8();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010be1f5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + _DAT_112710968);
        *(undefined **)(param_1 + _DAT_112710968) = puVar3;
        _objc_release(uVar4);
      }
      else {
        if (param_3 == 1) {
          func_0x00010bf8db40(PTR_PTR_1126af238,param_2,*(undefined8 *)(param_1 + _DAT_1127108e8));
          _objc_retainAutoreleasedReturnValue();
          lVar7 = (long)_DAT_112710970;
          uVar4 = *(undefined8 *)(param_1 + lVar7);
          *(undefined **)(param_1 + lVar7) = puVar3;
          _objc_release();
          func_0x000104ce4bd0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + _DAT_112710964);
          *(undefined8 *)(param_1 + _DAT_112710964) = uVar4;
          _objc_release(uVar5);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000104ce4be8();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c294840(PTR_PTR_1126af238,param_2,*(undefined8 *)(param_1 + _DAT_1127108e8));
          _objc_retainAutoreleasedReturnValue();
          lVar7 = (long)_DAT_112710970;
          uVar4 = *(undefined8 *)(param_1 + lVar7);
          *(undefined **)(param_1 + lVar7) = puVar3;
          _objc_release();
          func_0x000104ce4b70();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + _DAT_112710964);
          *(undefined8 *)(param_1 + _DAT_112710964) = uVar4;
          _objc_release(uVar5);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000104ce4b88();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c14de00(puVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(param_1 + _DAT_112710968);
        *(undefined **)(param_1 + _DAT_112710968) = puVar3;
      }
      _objc_release(lVar6);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127108fc);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      FUN_104cd6584(uVar4);
      func_0x00010c0ad900(uVar5,param_2,3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 104cd6af4; end: 104cd6bcf; -[SCLogInCredentialsEntryBusinessLogic _shouldPromptRedirectToLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cd6af4(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112710934);
  _objc_retain(uVar4);
  lVar1 = lRam00000001136b8a00;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104cd80f0;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar4;
  _objc_retain(uVar4);
  uVar3 = uVar4;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136b8a00,&puStack_58);
    uVar3 = uStack_38;
  }
  lVar1 = lRam00000001136b8a08;
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar1 < 1) {
    bVar2 = false;
  }
  else {
    bVar2 = lVar1 <= *(long *)(param_1 + _DAT_112710930);
  }
  return bVar2;
}



/* Entry: 104cd6bd0; end: 104cd6be7; -[SCLogInCredentialsEntryBusinessLogic _canLogIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cd6bd0(long param_1)

{
  return *(long *)(param_1 + _DAT_11271096c) == 1;
}



/* Entry: 104cd6be8; end: 104cd6bff; -[SCLogInCredentialsEntryBusinessLogic _hasInProgressLogIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cd6be8(long param_1)

{
  return *(long *)(param_1 + _DAT_11271096c) == 2;
}



/* Entry: 104cd6c00; end: 104cd6cfb; -[SCLogInCredentialsEntryBusinessLogic countryCodePickerCompletedWithCountryCode:] */

void FUN_104cd6c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd6cfc;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_68);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cd6cfc; end: 104cd6d2f;  */

void FUN_104cd6cfc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdea0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd6d30; end: 104cd6ddb; -[SCLogInCredentialsEntryBusinessLogic _countryCodePickerCompletedWithCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710940);
  *(undefined8 *)(param_1 + _DAT_112710940) = 0;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_11271090c) = 0;
  func_0x00010bed4ce0(param_1);
  func_0x00010bed6320(param_1,param_2,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_1127108d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd6ddc; end: 104cd6e0f; -[SCLogInCredentialsEntryBusinessLogic countryCodePickerExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6ddc(long param_1)

{
  param_1 = param_1 + _DAT_1127108d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd6e10; end: 104cd6e9b; -[SCLogInCredentialsEntryBusinessLogic appealScopeDidCompleteWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6e10(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112710940);
    *(undefined8 *)(param_1 + _DAT_112710940) = 0;
    _objc_release(uVar1);
    func_0x00010bed4ce0(param_1);
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  param_1 = param_1 + _DAT_1127108d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf067c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd6e9c; end: 104cd6f67; -[SCLogInCredentialsEntryBusinessLogic passkeyLoginBecomesUserVisible] */

void FUN_104cd6e9c(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104cd6f68;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  (**(code **)(param_1 + 0x10))(param_1,&puStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cd6f68; end: 104cd6f93;  */

void FUN_104cd6f68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be708c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd6f94; end: 104cd6ff3; -[SCLogInCredentialsEntryBusinessLogic _passkeyLoginBecomesUserVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd6f94(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be33f80();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + (long)_DAT_11271096c) = 2;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd6ff4; end: 104cd70bf; -[SCLogInCredentialsEntryBusinessLogic passkeyLoginWillShowAlertView] */

void FUN_104cd6ff4(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104cd70c0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  (**(code **)(param_1 + 0x10))(param_1,&puStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cd70c0; end: 104cd70eb;  */

void FUN_104cd70c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd70ec; end: 104cd712b; -[SCLogInCredentialsEntryBusinessLogic _passkeyLoginWillShowAlertView] */

void FUN_104cd70ec(long param_1)

{
  func_0x00010bed4ce0();
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd712c; end: 104cd7227; -[SCLogInCredentialsEntryBusinessLogic passkeyLoginFinished:] */

void FUN_104cd712c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd7228;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_68);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cd7228; end: 104cd725b;  */

void FUN_104cd7228(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be708e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd725c; end: 104cd73db; -[SCLogInCredentialsEntryBusinessLogic _passkeyLoginFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd725c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0c0940(param_3);
  if (((*(byte *)(puStack_48 + 3) & 1) == 0) && ((*(byte *)(puStack_68 + 3) & 1) == 0)) {
    func_0x00010bed4ce0(param_1);
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  param_1 = param_1 + _DAT_1127108d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c1e0();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 104cd73dc; end: 104cd7403;  */

void FUN_104cd73dc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104cd7404; end: 104cd749f; -[SCLogInCredentialsEntryBusinessLogic _isPhoneNumberFieldVisibleInitialValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cd7404(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127108e0);
  func_0x00010c089440();
  if (iVar2 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_1127108e8);
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + _DAT_112710954);
      func_0x00010c08fa60(lVar3);
      bVar1 = lVar3 != 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112710954);
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + _DAT_1127108e8);
      func_0x00010c08fa60(lVar3);
      bVar1 = lVar3 == 0;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}



/* Entry: 104cd74a0; end: 104cd75db; -[SCLogInCredentialsEntryBusinessLogic _updateUserNameOrPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd74a0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127108f8;
  if (((*(byte *)(param_1 + lVar5) & 1) == 0) &&
     (uVar1 = param_1, func_0x00010be41380(param_1,param_2,param_3), (uVar1 & 1) != 0)) {
    uVar6 = 1;
    goto LAB_104cd75bc;
  }
  uVar1 = param_1;
  func_0x00010be42c60(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010be429c0(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
LAB_104cd7588:
      piVar7 = (int *)&DAT_112710954;
      lVar5 = (long)_DAT_1127108e8;
      _objc_retain(param_3);
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = param_3;
      _objc_release(uVar6);
      uVar6 = 0;
    }
    else {
      if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
        puVar2 = PTR_PTR_1126aed98;
        func_0x00010c25db20(PTR_PTR_1126aed98,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c08fa60();
        _objc_release(puVar2);
        if (puVar3 < (undefined *)0x3) goto LAB_104cd7588;
      }
      piVar7 = (int *)&DAT_1127108e8;
      lVar5 = (long)_DAT_112710954;
      _objc_retain(param_3);
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = param_3;
      _objc_release(uVar6);
      uVar6 = 1;
    }
  }
  else {
    func_0x00010bedcee0(param_1,param_2,param_3);
    uVar6 = 1;
    piVar7 = (int *)&DAT_1127108e8;
  }
  uVar4 = *(undefined8 *)(param_1 + (long)*piVar7);
  *(undefined8 *)(param_1 + (long)*piVar7) = 0;
  _objc_release(uVar4);
LAB_104cd75bc:
  func_0x00010bea6440(param_1,param_2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cd75dc; end: 104cd7717; -[SCLogInCredentialsEntryBusinessLogic _isInternationalDialingCodeOrCountryCodeOrPhoneNumberPrefix:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104cd75dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 1) {
    uVar7 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dae918,param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112710960);
    func_0x00010bf53380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + _DAT_1127108ec);
    func_0x00010c0db440(lVar5,param_2,*(undefined8 *)(param_1 + _DAT_112710954));
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uVar8 = 0;
    }
    else {
      lVar1 = lVar5;
      func_0x00010c260c80(lVar5,param_2,0,1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c0720c0();
      uVar8 = (uint)lVar6;
      _objc_release(lVar1);
    }
    uVar7 = uVar7 | uVar8 | (uint)uVar4;
    _objc_release(lVar5);
  }
  else {
    uVar7 = 0;
  }
  _objc_release(param_3);
  return uVar7 & 1;
}



/* Entry: 104cd7718; end: 104cd7797; -[SCLogInCredentialsEntryBusinessLogic _isPossibleFullPhoneNumber:] */

bool FUN_104cd7718(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918);
  if (((int)uVar2 == 0) || (uVar2 = param_3, func_0x00010c08fa60(), uVar2 < 6)) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR_PTR_1126aed98;
    func_0x00010bf9ed60(PTR_PTR_1126aed98,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 != (undefined *)0x0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104cd7798; end: 104cd77eb; -[SCLogInCredentialsEntryBusinessLogic _createPhoneNumberFieldNotAllowedCharSet] */

void FUN_104cd7798(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248);
  func_0x00010bef7620();
  puVar2 = puVar1;
  func_0x00010c06a520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd77ec; end: 104cd789b; -[SCLogInCredentialsEntryBusinessLogic _isPhoneNumberFieldSupportedInput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104cd77ec(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed98;
  func_0x00010c0db440(PTR_PTR_1126aed98,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112710914);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c11f340(param_3,param_2,uVar4);
    bVar1 = lVar5 == 0x7fffffffffffffff;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104cd789c; end: 104cd79e7; -[SCLogInCredentialsEntryBusinessLogic _updatePhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd789c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112710954);
    *(undefined8 *)(param_1 + _DAT_112710954) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127108ec);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112710960);
    func_0x00010bf536a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d60(uVar3,param_2,param_3,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104cd79e8;
    puStack_40 = &UNK_1108450c8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104cd7a34;
    puStack_68 = &UNK_110848958;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x104cd7ab0;
    puStack_98 = &UNK_110847310;
    lStack_90 = param_1;
    lStack_60 = param_1;
    lStack_38 = param_1;
    _objc_retain(param_3);
    lStack_88 = param_3;
    func_0x00010c0c13a0(uVar3,param_2,&puStack_58,&puStack_80,&puStack_b0);
    _objc_release(lStack_88);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cd79e8; end: 104cd7a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd79e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aed98;
  func_0x00010c25db20(PTR_PTR_1126aed98,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710954);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112710954) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cd7a34; end: 104cd7aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aed98;
  _objc_retain(param_3);
  func_0x00010c25db20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710954);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112710954) = puVar1;
  _objc_release(uVar2);
  func_0x00010bed6320(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cd7aec; end: 104cd7b3f; -[SCLogInCredentialsEntryBusinessLogic _getUsernameOrPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7aec(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_1127108f8) & 1) == 0) {
    param_1 = *(long *)(param_1 + _DAT_1127108e8);
    _objc_retain(param_1);
  }
  else {
    func_0x00010be1f5e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cd7b40; end: 104cd7bdb; -[SCLogInCredentialsEntryBusinessLogic _getFullPhoneNumberForLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7b40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126aed98;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710960);
  func_0x00010bf53380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127108ec);
  func_0x00010c25db20(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_112710954));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc7a20(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cd7bdc; end: 104cd7c8b; -[SCLogInCredentialsEntryBusinessLogic _getDefaultCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7bdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127108ec;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfc45a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfc42a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfc5f80(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af250;
  _objc_alloc(PTR_PTR_1126af250);
  func_0x00010c0063a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cd7c8c; end: 104cd7c9f; -[SCLogInCredentialsEntryBusinessLogic _currentLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cd7c8c(long param_1)

{
  return (ulong)*(byte *)(param_1 + _DAT_1127108f8) << 1;
}



/* Entry: 104cd7ca0; end: 104cd7cd3; -[SCLogInCredentialsEntryBusinessLogic _currentMagicCodeLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cd7ca0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112710948);
  func_0x00010bf6d1e0();
  lVar1 = 4;
  if (lVar2 != 2) {
    lVar1 = -1;
  }
  if (lVar2 != 3) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 104cd7cd4; end: 104cd7dcf; -[SCLogInCredentialsEntryBusinessLogic _updateCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7cd4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112710960;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar6));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126aed98;
    uVar1 = param_3;
    func_0x00010bf536a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bfc5420(puVar5,param_2,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf536a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d40(puVar5,param_2,puVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271095c);
    *(undefined **)(param_1 + _DAT_11271095c) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cd7dd0; end: 104cd7e17; -[SCLogInCredentialsEntryBusinessLogic _setPhoneNumberFieldVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7dd0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127108f8;
  if (*(byte *)(param_1 + lVar1) != param_3) {
    func_0x00010be5a0a0(param_1);
  }
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Entry: 104cd7e18; end: 104cd7e67; -[SCLogInCredentialsEntryBusinessLogic _logUnifiedAccountIdentifierToggle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7e18(long param_1)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + _DAT_112710918) = *(long *)(param_1 + _DAT_112710918) + 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127108fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cd7e68; end: 104cd7ed3; -[SCLogInCredentialsEntryBusinessLogic _logLoginAttemptUnifiedAccountIdentifierTogglesAndReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7e68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127108fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf6ca0(param_1);
  lVar3 = (long)_DAT_112710918;
  func_0x00010c0a9c20(uVar1,param_2,lVar2,*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + lVar3) = 0;
  return;
}



/* Entry: 104cd7ed4; end: 104cd7ed7; -[SCLogInCredentialsEntryBusinessLogic _appWillEnterForeground] */

void FUN_104cd7ed4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddeed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanErrorMessageAfterAppReturn_112555550);
  return;
}



/* Entry: 104cd7ed8; end: 104cd80b3; -[SCLogInCredentialsEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd7ed8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710908,0);
  _objc_storeStrong(param_1 + _DAT_112710904,0);
  _objc_storeStrong(param_1 + _DAT_112710938,0);
  _objc_storeStrong(param_1 + _DAT_112710934,0);
  _objc_storeStrong(param_1 + _DAT_112710970,0);
  _objc_storeStrong(param_1 + _DAT_112710968,0);
  _objc_storeStrong(param_1 + _DAT_112710964,0);
  _objc_storeStrong(param_1 + _DAT_112710914,0);
  _objc_storeStrong(param_1 + _DAT_11271095c,0);
  _objc_storeStrong(param_1 + _DAT_112710960,0);
  _objc_storeStrong(param_1 + _DAT_1127108ec,0);
  _objc_storeStrong(param_1 + _DAT_1127108fc,0);
  _objc_storeStrong(param_1 + _DAT_11271091c,0);
  _objc_storeStrong(param_1 + _DAT_112710924,0);
  _objc_storeStrong(param_1 + _DAT_112710940,0);
  _objc_storeStrong(param_1 + _DAT_1127108f0,0);
  _objc_storeStrong(param_1 + _DAT_112710954,0);
  _objc_storeStrong(param_1 + _DAT_1127108e8,0);
  _objc_storeStrong(param_1 + _DAT_11271093c,0);
  _objc_storeStrong(param_1 + _DAT_112710900,0);
  _objc_storeStrong(param_1 + _DAT_112710948,0);
  _objc_storeStrong(param_1 + _DAT_112710920,0);
  _objc_storeStrong(param_1 + _DAT_1127108e4,0);
  _objc_storeStrong(param_1 + _DAT_1127108e0,0);
  _objc_storeStrong(param_1 + _DAT_1127108dc,0);
  _objc_storeStrong(param_1 + _DAT_1127108d8,0);
  _objc_storeStrong(param_1 + _DAT_1127108d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127108d0);
  return;
}



/* Entry: 104cd80b4; end: 104cd80ef;  */

void FUN_104cd80b4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 104cd80f0; end: 104cd8123;  */

void FUN_104cd80f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dae938,0xffffffff,0);
  lRam00000001136b8a08 = (long)(int)uVar1;
  return;
}



/* Entry: 104cd8124; end: 104cd82bf; -[SCLogInCredentialsEntryViewController initWithScreen:phoneEntryScreen:circumstanceEngine:currentPageTracker:oAuthTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cd8124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e3bc0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112710978;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271097c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710980;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710984);
    *(undefined **)((long)puVar1 + (long)_DAT_112710984) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710988;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271098c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710990);
    *(undefined **)((long)puVar1 + (long)_DAT_112710990) = puVar3;
    _objc_release(uVar2);
    func_0x00010beaec20(puVar1);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cd82c0; end: 104cd82c7; -[SCLogInCredentialsEntryViewController pageViewName] */

undefined8 FUN_104cd82c0(void)

{
  return 0x90;
}



/* Entry: 104cd82c8; end: 104cd82cf; -[SCLogInCredentialsEntryViewController prefersStatusBarHidden] */

undefined8 FUN_104cd82c8(void)

{
  return 1;
}



/* Entry: 104cd82d0; end: 104cd83eb; -[SCLogInCredentialsEntryViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd82d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710978);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104cd83ec;
  puStack_58 = &UNK_1108489b8;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c250380(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271097c);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104cd83ec; end: 104cd847b;  */

void FUN_104cd83ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd847c; end: 104cd84fb; -[SCLogInCredentialsEntryViewController _updateUIWithPhoneEntryViewModel:] */

void FUN_104cd847c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf535c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104cd84fc;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 104cd84fc; end: 104cd8503;  */

void FUN_104cd84fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentCountryCodePicker_11257c4d8);
  return;
}



/* Entry: 104cd8504; end: 104cd8b83; -[SCLogInCredentialsEntryViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd8504(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112710994;
  lVar2 = *(long *)(param_1 + lVar10);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_11271098c);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010c079f20();
      if ((int)lVar2 != 0) {
        lVar2 = param_3;
        func_0x00010c0faf60();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar2;
        func_0x00010c08fa60();
        _objc_release(lVar2);
        if (lVar9 == 0) goto LAB_104cd856c;
      }
      lVar2 = param_3;
      func_0x00010c294660();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      if (lVar9 == 0) goto LAB_104cd8618;
      lVar2 = (long)_DAT_1127109a0;
      goto LAB_104cd861c;
    }
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94800();
    _objc_release(lVar2);
  }
  else {
    func_0x00010c079f20();
    lVar9 = param_3;
    func_0x00010c079f20();
    if ((int)lVar2 != (int)lVar9) {
      lVar2 = param_3;
      func_0x00010c079f20();
      if ((int)lVar2 == 0) {
LAB_104cd8618:
        lVar2 = (long)_DAT_11271099c;
      }
      else {
LAB_104cd856c:
        lVar2 = (long)_DAT_112710998;
      }
LAB_104cd861c:
      func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar2));
    }
  }
  lVar11 = (long)_DAT_11271099c;
  lVar3 = *(long *)(param_1 + lVar11);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c294660(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c0720c0(lVar3,param_2,lVar2);
  if ((int)lVar9 == 0) {
    uVar5 = *(ulong *)(param_1 + lVar11);
    func_0x00010c26bc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c071280();
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar3);
    if ((uVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c294660(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,lVar3);
      goto LAB_104cd86c4;
    }
  }
  else {
    _objc_release(lVar2);
LAB_104cd86c4:
    _objc_release(lVar3);
  }
  lVar12 = (long)_DAT_1127109a0;
  lVar3 = *(long *)(param_1 + lVar12);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0f5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c0720c0(lVar3,param_2,lVar2);
  if ((int)lVar9 == 0) {
    uVar5 = *(ulong *)(param_1 + lVar12);
    func_0x00010c26bc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c071280();
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar3);
    if ((uVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0f5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12),param_2,lVar3);
      goto LAB_104cd876c;
    }
  }
  else {
    _objc_release(lVar2);
LAB_104cd876c:
    _objc_release(lVar3);
  }
  func_0x00010bf2cde0(param_3);
  lVar3 = (long)_DAT_1127109a4;
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf4fa60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar6);
  func_0x00010bfd7e80(param_3);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf13860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar6);
  lVar2 = param_3;
  func_0x00010bfd7e80(param_3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar11),param_2,(uint)lVar2 ^ 1);
  lVar2 = param_3;
  func_0x00010bfd7e80(param_3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar12),param_2,(uint)lVar2 ^ 1);
  lVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127109a8;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,lVar2 == 0);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  lVar2 = param_3;
  func_0x00010bfd7e80(param_3);
  func_0x00010c162d00(uVar6,param_2,lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar6,param_2,lVar2);
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010c124ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar7,param_2,lVar2);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar7 & 1) == 0) {
    lVar9 = param_3;
    func_0x00010c124aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar8,param_2,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar2);
    if (((ulong)puVar8 & 1) != 0) goto LAB_104cd8934;
    lVar2 = param_3;
    func_0x00010c124ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c124aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba920(param_1,param_2,lVar2,lVar9);
    _objc_release(lVar9);
  }
  _objc_release(lVar2);
LAB_104cd8934:
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010c121080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar7,param_2,lVar2);
  _objc_release(lVar2);
  if (((ulong)puVar7 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c121080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba840(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010c121040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar7,param_2,lVar2);
  _objc_release(lVar2);
  if (((ulong)puVar7 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c121040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba880(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
  func_0x00010c07d600();
  lVar2 = param_3;
  func_0x00010c079b20();
  if (iVar1 != (int)lVar2) {
    lVar2 = param_3;
    func_0x00010c079b20(param_3);
    func_0x00010bedcc40(param_1,param_2,lVar2);
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar12));
  }
  lVar2 = param_3;
  func_0x00010c079f20(param_3);
  lVar9 = (long)_DAT_112710998;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,(uint)lVar2 ^ 1);
  lVar2 = param_3;
  func_0x00010c079f20(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11),param_2,lVar2);
  func_0x00010be82e20(param_1,param_2,param_3,*(undefined8 *)(param_1 + lVar10));
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lVar2 = param_3;
  func_0x00010bf53560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184b20(uVar6,param_2,lVar2,0);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lVar2 = param_3;
  func_0x00010bf9a740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197e40(uVar6,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c22dd00(param_3);
  lVar9 = (long)_DAT_1127109ac;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,(uint)lVar2 ^ 1);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lVar2 = param_3;
  func_0x00010c125e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar6,param_2,lVar2,0);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c076fe0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127109b0),param_2,(uint)lVar2 ^ 1);
  lVar2 = param_3;
  func_0x00010c079120(param_3);
  func_0x00010c1749e0(*(undefined8 *)(param_1 + _DAT_1127109b4),param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c079120(param_3);
  func_0x00010c1b2fc0(*(undefined8 *)(param_1 + _DAT_1127109b8),param_2,lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104cd8b84; end: 104cd8c17; -[SCLogInCredentialsEntryViewController viewDidLoad] */

void FUN_104cd8b84(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3bc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beb0d80(param_1);
  return;
}



/* Entry: 104cd8c18; end: 104cd8cbb; -[SCLogInCredentialsEntryViewController _setupUI] */

void FUN_104cd8c18(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010beb09a0(param_1);
  func_0x00010bead0c0(param_1);
  func_0x00010beb0fa0(param_1);
  func_0x00010beaec40(param_1);
  func_0x00010beaeb40(param_1);
  func_0x00010beaeb80(param_1);
  func_0x00010beaeb60(param_1);
  func_0x00010beac5c0(param_1);
  func_0x00010beac600(param_1);
  func_0x00010beade80(param_1);
  func_0x00010beaa4e0(param_1);
  func_0x00010beaf560(param_1);
  func_0x00010beaeb20(param_1);
  func_0x00010beaf580(param_1);
  func_0x00010beae680(param_1);
  func_0x00010be89520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104cd8cbc; end: 104cd8e2f; -[SCLogInCredentialsEntryViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd8cbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar5 = (long)_DAT_1127109a4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000104ce4a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4faa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3380(0x443b8000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar4);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf13860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104cd8e30; end: 104cd9197; -[SCLogInCredentialsEntryViewController _setupTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd8e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_1127109bc;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000104ce4a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  dVar18 = 21.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar15),param_2,1);
  lVar16 = (long)_DAT_1127109a4;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf4b2a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar17));
  lVar5 = lVar2;
  func_0x00010bf493c0(lVar2,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  lStack_80 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar17));
  uVar13 = uVar6;
  func_0x00010bf493c0(-dVar18,uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69b80(*(undefined8 *)(param_1 + lVar17));
  uVar11 = uVar9;
  func_0x00010bf493c0(uVar9,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar2;
  func_0x000104ce4a98();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + _DAT_1127109bc);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(lVar2 + _DAT_112710984));
  lVar4 = lVar2;
  func_0x00010bdeaa80(lVar2,param_2,lVar3,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar2 + _DAT_1127109c0);
  *(long *)(lVar2 + _DAT_1127109c0) = lVar4;
  _objc_release(uVar14);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104cd9198; end: 104cd922f; -[SCLogInCredentialsEntryViewController _setupIdentifierLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd9198(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x000104ce4a98();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127109bc);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(param_1 + _DAT_112710984));
  lVar3 = param_1;
  func_0x00010bdeaa80(param_1,param_2,lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127109c0);
  *(long *)(param_1 + _DAT_1127109c0) = lVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd9230; end: 104cd9623; -[SCLogInCredentialsEntryViewController _setupUsernameTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd9230(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4042000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a380(puVar1,param_2,puVar2);
  lVar21 = (long)_DAT_11271099c;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar19);
  _objc_release(puVar2);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar19,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c12ea40(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar21),param_2,param_1);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar21),param_2,7);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c26bc20(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar19);
  func_0x000108b9a7ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar21),param_2,uVar19);
  _objc_release(uVar19);
  func_0x00010c16d0c0(*(undefined8 *)(param_1 + lVar21),param_2,1);
  uVar19 = *(undefined8 *)(param_1 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21),param_2,0);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c26bc20(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar19);
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar21);
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  lStack_98 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 3.0;
  uStack_a0 = uVar19;
  func_0x00010bf493c0(0x4008000000000000,lVar3,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  lStack_a8 = lVar3;
  lStack_88 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_1127109c0);
  uStack_b0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar19;
  func_0x00010bf493a0(uVar4,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  uStack_80 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  uVar19 = uVar5;
  func_0x00010bf493c0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar21);
  uStack_78 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  dVar25 = -dVar25;
  uVar20 = uVar7;
  func_0x00010bf493c0(dVar25,uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar20);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(lStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lStack_98);
  lVar24 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104cd9624;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126af268;
  uStack_120 = uVar5;
  uStack_118 = uVar4;
  lStack_110 = lVar3;
  puStack_108 = puVar1;
  lStack_100 = lVar8;
  lStack_f8 = lVar21;
  uStack_f0 = uVar7;
  uStack_e8 = uVar19;
  lStack_e0 = lVar6;
  uStack_d8 = uVar20;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  lVar22 = (long)_DAT_112710984;
  func_0x00010c00aee0();
  lVar23 = (long)_DAT_112710998;
  uVar19 = *(undefined8 *)(lVar24 + lVar23);
  *(undefined **)(lVar24 + lVar23) = puVar2;
  _objc_release(uVar19);
  func_0x00010c1b6ec0(*(undefined8 *)(lVar24 + lVar23),param_2,2);
  func_0x00010c219b60(*(undefined8 *)(lVar24 + lVar23),param_2,0);
  uVar19 = *(undefined8 *)(lVar24 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar24 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar22));
  uVar19 = uVar5;
  func_0x00010bf493c0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar24 + lVar23);
  uStack_140 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar22));
  dVar25 = -dVar25;
  uVar20 = uVar7;
  func_0x00010bf493c0(dVar25,uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar24 + lVar23);
  uStack_138 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar24 + _DAT_1127109c0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 3;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar20);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  lVar3 = *(long *)(lVar24 + lVar23);
  uVar19 = 1;
  func_0x00010c1a7f60(lVar3,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar18);
  _objc_retain(uVar19);
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c212f20(puVar2,param_2,uVar19);
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(puVar2,param_2,4);
  dVar26 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,puVar2);
  func_0x00010c1cfce0(puVar2,param_2,0);
  func_0x00010c219b60(puVar2,param_2,0);
  uVar19 = *(undefined8 *)(lVar3 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar11 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar22));
  dVar26 = dVar26 + 2.8;
  puVar12 = puVar11;
  func_0x00010bf493c0(dVar26,puVar11,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_200 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar22));
  puVar14 = puVar13;
  func_0x00010bf493c0(-dVar26,puVar13,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  puStack_1f8 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493c0(dVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1f0 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_200,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar24);
  _objc_release(lVar8);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar11;
  func_0x000108b9a864();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar11 + _DAT_11271099c);
  func_0x00010bf1ff80(uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010bdeaa80(0x4028000000000000,puVar11,param_2,puVar1,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar11 + _DAT_1127109c4);
  *(undefined **)(puVar11 + _DAT_1127109c4) = puVar2;
  _objc_release(uVar20);
  _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cd9624; end: 104cd98c3; -[SCLogInCredentialsEntryViewController _setupPhoneEntryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd9624(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af268;
  _objc_alloc();
  lVar22 = (long)_DAT_112710984;
  func_0x00010c00aee0();
  lVar23 = (long)_DAT_112710998;
  uVar20 = *(undefined8 *)(param_2 + lVar23);
  *(undefined **)(param_2 + lVar23) = puVar1;
  _objc_release(uVar20);
  func_0x00010c1b6ec0(*(undefined8 *)(param_2 + lVar23),param_3,2);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar23),param_3,0);
  uVar20 = *(undefined8 *)(param_2 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar20);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_2 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar22));
  uVar20 = uVar2;
  func_0x00010bf493c0(uVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar23);
  uStack_80 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar22));
  param_1 = -param_1;
  uVar21 = uVar4;
  func_0x00010bf493c0(param_1,uVar4,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar23);
  uStack_78 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + _DAT_1127109c0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 3;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar21);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(uVar2);
  lVar11 = *(long *)(param_2 + lVar23);
  uVar20 = 1;
  func_0x00010c1a7f60(lVar11,param_3,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar19);
  _objc_retain(uVar20);
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar10,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c212f20(puVar10,param_3,uVar20);
  _objc_release(uVar20);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar10,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar10,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(puVar10,param_3,4);
  dVar24 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,puVar10);
  func_0x00010c1cfce0(puVar10,param_3,0);
  func_0x00010c219b60(puVar10,param_3,0);
  uVar20 = *(undefined8 *)(lVar11 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar20);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(lVar11 + lVar23));
  dVar24 = dVar24 + 2.8;
  puVar13 = puVar12;
  func_0x00010bf493c0(dVar24,puVar12,param_3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  puStack_140 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010c29bf00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar11 + lVar23));
  puVar15 = puVar14;
  func_0x00010bf493c0(-dVar24,puVar14,param_3,lVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar10;
  puStack_138 = puVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_130 = puVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_140,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar12;
  func_0x000108b9a864();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar12 + _DAT_11271099c);
  func_0x00010bf1ff80(uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010bdeaa80(0x4028000000000000,puVar12,param_3,puVar1,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar12 + _DAT_1127109c4);
  *(undefined **)(puVar12 + _DAT_1127109c4) = puVar10;
  _objc_release(uVar21);
  _objc_release(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cd98c4; end: 104cd9c07; -[SCLogInCredentialsEntryViewController _createAndAddLabelWithText:topAnchorConstraintEqualToAnchor:topAnchorConstant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd98c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar1,param_3,param_4);
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_3,4);
  dVar17 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,puVar1);
  func_0x00010c1cfce0(puVar1,param_3,0);
  func_0x00010c219b60(puVar1,param_3,0);
  uVar3 = *(undefined8 *)(param_2 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar16));
  dVar17 = dVar17 + 2.8;
  puVar7 = puVar4;
  func_0x00010bf493c0(dVar17,puVar4,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_90 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar16));
  puVar11 = puVar8;
  func_0x00010bf493c0(-dVar17,puVar8,param_3,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_88 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_90,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_3,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar4;
  func_0x000108b9a864();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar4 + _DAT_11271099c);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bdeaa80(0x4028000000000000,puVar4,param_3,puVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar4 + _DAT_1127109c4);
  *(undefined **)(puVar4 + _DAT_1127109c4) = puVar1;
  _objc_release(uVar15);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cd9c08; end: 104cd9c97; -[SCLogInCredentialsEntryViewController _setupPasswordLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd9c08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x000108b9a864();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271099c);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdeaa80(0x4028000000000000,param_1,param_2,lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127109c4);
  *(long *)(param_1 + _DAT_1127109c4) = lVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cd9c98; end: 104cda0a3; -[SCLogInCredentialsEntryViewController _setupPasswordTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd9c98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4042000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a380(puVar1,param_2,puVar2);
  lVar15 = (long)_DAT_1127109a0;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  _objc_release(puVar2);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar14,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c12ea40(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1f9a00(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15),param_2,param_1);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c160fc0(uVar14,param_2,&PTR____CFConstantStringClassReference_110dadaf8);
  func_0x000108b9a864();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar15),param_2,uVar14);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c26bc20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213240();
  _objc_release(uVar14);
  func_0x00010c16d0c0(*(undefined8 *)(param_1 + lVar15),param_2,1);
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c26bc20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar15);
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 3.0;
  lVar17 = lVar16;
  func_0x00010bf493c0(0x4008000000000000,lVar16,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  lStack_88 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127109c4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar18));
  uVar10 = uVar7;
  func_0x00010bf493c0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar18));
  uVar13 = uVar11;
  func_0x00010bf493c0(-dVar19,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar17);
  _objc_release(uVar4);
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar16 = (long)_DAT_1127109c8;
  uVar14 = *(undefined8 *)(lVar3 + lVar16);
  *(undefined **)(lVar3 + lVar16) = puVar2;
  _objc_release(uVar14);
  func_0x00010befbd60(*(undefined8 *)(lVar3 + lVar16),param_2,lVar3,
                      PTR_s__showHidePasswordButtonTapped_112525bb0,0x40);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(lVar3 + lVar16));
  lVar17 = (long)_DAT_1127109a0;
  uVar14 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010c26bc20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2a0();
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010c26bc20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2c0();
  _objc_release(uVar14);
  func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000,puVar1);
  func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000,*(undefined8 *)(lVar3 + lVar16));
  func_0x00010c1aa240(0x4010000000000000,0x4010000000000000,0x4010000000000000,0x4010000000000000,
                      *(undefined8 *)(lVar3 + lVar16));
  uVar14 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010c07d600(uVar14);
  func_0x00010bedcc40(lVar3,param_2,uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cda0a4; end: 104cda1d7; -[SCLogInCredentialsEntryViewController _setupPasswordShowHide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cda0a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar4 = (long)_DAT_1127109c8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                      PTR_s__showHidePasswordButtonTapped_112525bb0,0x40);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(param_1 + lVar4));
  lVar5 = (long)_DAT_1127109a0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2c0();
  _objc_release(uVar3);
  func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000,puVar1);
  func_0x00010c19f0e0(0,0,0x4038000000000000,0x4038000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1aa240(0x4010000000000000,0x4010000000000000,0x4010000000000000,0x4010000000000000,
                      *(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07d600(uVar3);
  func_0x00010bedcc40(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cda1d8; end: 104cda463; -[SCLogInCredentialsEntryViewController _setupErrorContainerView] */

/* WARNING: Possible PIC construction at 0x000104cda620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cda624) */
/* WARNING: Removing unreachable block (ram,0x000104cda65c) */
/* WARNING: Removing unreachable block (ram,0x000104cda644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cda1d8(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar16 = (long)_DAT_1127109cc;
  uVar13 = *(undefined8 *)(param_2 + lVar16);
  *(undefined **)(param_2 + lVar16) = puVar1;
  _objc_release(uVar13);
  func_0x00010c16e060(*(undefined8 *)(param_2 + lVar16));
  func_0x00010c166c00(*(undefined8 *)(param_2 + lVar16));
  uVar13 = *(undefined8 *)(param_2 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar16));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_2 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar14));
  lVar4 = lVar2;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar14));
  uVar13 = uVar5;
  func_0x00010bf493c0(-param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + _DAT_1127109a0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  lVar15 = (long)_DAT_1127109a8;
  uVar13 = *(undefined8 *)(lVar2 + lVar15);
  *(undefined **)(lVar2 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c195540(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c162900(*(undefined8 *)(lVar2 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + lVar15));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + lVar15));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + lVar15));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c1cfce0(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c1a7f60(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + lVar15));
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_1127109cc),PTR_s_addArrangedSubview__11259b500,
             *(undefined8 *)(lVar2 + lVar15));
  return;
}



/* Entry: 104cda464; end: 104cda65f; -[SCLogInCredentialsEntryViewController _setupErrorLabel] */

/* WARNING: Possible PIC construction at 0x000104cda620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cda624) */
/* WARNING: Removing unreachable block (ram,0x000104cda65c) */
/* WARNING: Removing unreachable block (ram,0x000104cda644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cda464(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  lVar3 = (long)_DAT_1127109a8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c195540(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c162900(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127109cc),PTR_s_addArrangedSubview__11259b500,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 104cda660; end: 104cda773; -[SCLogInCredentialsEntryViewController _setupLoginWithCodeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cda660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127109b0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000104ce4af8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c271420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c181e40(0x3810000000000000,0x3810000000000000,0x3810000000000000,0x3810000000000000,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127109cc),PTR_s_addArrangedSubview__11259b500,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 104cda774; end: 104cdaa3f; -[SCLogInCredentialsEntryViewController _setup1TLOptInCheckbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cda774(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af088;
  _objc_alloc();
  dVar24 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar24,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar22 = (long)_DAT_1127109b4;
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar15);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar22));
  func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_11271098c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22));
  uVar15 = *(undefined8 *)(param_1 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar17));
  lVar20 = lVar2;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar17));
  uVar15 = uVar3;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127109cc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(lVar23);
  _objc_release(lVar21);
  _objc_release(uVar3);
  _objc_release(lVar20);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127109d0;
  uVar15 = *(undefined8 *)(lVar2 + lVar20);
  *(undefined **)(lVar2 + lVar20) = puVar1;
  _objc_release(uVar15);
  uVar18 = *(undefined8 *)(lVar2 + lVar20);
  func_0x000104ce4ab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18);
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c271420(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar15);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c271420(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c160fc0(uVar15);
  func_0x000104ce4ab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar2 + lVar20));
  _objc_release(uVar15);
  dVar24 = 12.0;
  func_0x00010c181e40(0x4028000000000000,0,0x4028000000000000,0,*(undefined8 *)(lVar2 + lVar20));
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar20));
  uVar15 = *(undefined8 *)(lVar2 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar15);
  lVar7 = *(long *)(lVar2 + _DAT_1127109b4);
  if (lVar7 == 0) {
    lVar7 = *(long *)(lVar2 + _DAT_1127109a8);
  }
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar22));
  uVar15 = uVar4;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar22));
  uVar18 = uVar5;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(lVar23);
  _objc_release(lVar21);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)lVar16 != 0) {
    lVar16 = *(long *)(lVar7 + _DAT_112710988);
    func_0x000106b24514();
    if ((int)lVar16 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = (long)_DAT_1127109d4;
      lVar16 = *(long *)(lVar7 + lVar22);
      *(undefined **)(lVar7 + lVar22) = puVar1;
      _objc_release();
      func_0x000108b9a954();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(*(undefined8 *)(lVar7 + lVar22));
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(lVar7 + lVar22);
      func_0x00010c271420(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(uVar15);
      _objc_release(puVar1);
      uVar15 = *(undefined8 *)(lVar7 + lVar22);
      func_0x00010c271420(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(uVar15);
      func_0x00010c160fc0(*(undefined8 *)(lVar7 + lVar22));
      func_0x00010c161020(*(undefined8 *)(lVar7 + lVar22));
      dVar24 = 0.0;
      func_0x00010c181e40(0,0,0x4028000000000000,0,*(undefined8 *)(lVar7 + lVar22));
      func_0x00010befbd60(*(undefined8 *)(lVar7 + lVar22));
      uVar15 = *(undefined8 *)(lVar7 + _DAT_1127109a4);
      func_0x00010bf4b2a0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar15);
      func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar22));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(lVar7 + lVar22);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar7;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar21;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = (long)_DAT_112710984;
      func_0x00010bf69860(*(undefined8 *)(lVar7 + lVar17));
      uVar15 = uVar4;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar7 + lVar22);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf69860(*(undefined8 *)(lVar7 + lVar17));
      uVar18 = uVar5;
      func_0x00010bf493c0(-dVar24);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar7 + lVar22);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar7 + _DAT_1127109d0);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar18);
      _objc_release(lVar14);
      _objc_release(lVar2);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(lVar23);
      _objc_release(lVar21);
      _objc_release(uVar4);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_1127109ac;
  uVar15 = *(undefined8 *)(lVar16 + lVar21);
  *(undefined **)(lVar16 + lVar21) = puVar1;
  _objc_release(uVar15);
  uVar18 = *(undefined8 *)(lVar16 + lVar21);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18);
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010c271420(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar15);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010c271420(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010c160fc0(uVar15);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar16 + lVar21));
  _objc_release(uVar15);
  dVar24 = 12.0;
  func_0x00010c181e40(0x4028000000000000,0,0x4028000000000000,0,*(undefined8 *)(lVar16 + lVar21));
  func_0x00010befbd60(*(undefined8 *)(lVar16 + lVar21));
  lVar23 = (long)_DAT_1127109a4;
  uVar15 = *(undefined8 *)(lVar16 + lVar23);
  func_0x00010bf4b2a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar15);
  lVar7 = *(long *)(lVar16 + _DAT_1127109d4);
  if (lVar7 == 0) {
    lVar7 = *(long *)(lVar16 + _DAT_1127109d0);
  }
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(*(undefined8 *)(lVar16 + lVar21));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(lVar16 + lVar19));
  uVar15 = uVar8;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar16 + lVar19));
  uVar18 = uVar9;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar16 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar16 + lVar23);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar18);
  _objc_release(lVar22);
  _objc_release(lVar17);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(lVar7 + _DAT_11271098c);
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (lVar16 != 0) {
    puVar1 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar6 = PTR_PTR_1126af048;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar19 = (long)_DAT_1127109b8;
    uVar15 = *(undefined8 *)(lVar7 + lVar19);
    *(undefined **)(lVar7 + lVar19) = puVar6;
    _objc_release(uVar15);
    func_0x00010c20eaa0(*(undefined8 *)(lVar7 + lVar19));
    func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar19));
    lVar16 = lVar7;
    func_0x00010c29bf00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar16);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)(lVar7 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar7 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar23;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar7 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar14;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar7 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar7 + _DAT_1127109a4);
    func_0x00010bf4fa60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bf49480(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar13);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(lVar22);
    _objc_release(lVar17);
    _objc_release(lVar14);
    _objc_release(uVar10);
    _objc_release(uVar18);
    _objc_release(lVar2);
    _objc_release(lVar23);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(lVar21);
    _objc_release(lVar16);
    _objc_release(uVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(puVar1 + _DAT_112710978);
  puVar6 = PTR_PTR_1126af278;
  func_0x00010c0f0c20(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar15);
  _objc_release(puVar6);
  uVar15 = *(undefined8 *)(puVar1 + _DAT_112710980);
  func_0x00010c0f2220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar15,PTR_s_startPage__112671938,puVar1);
  return;
}



/* Entry: 104cdaa40; end: 104cdadcf; -[SCLogInCredentialsEntryViewController _setupRecoverPasswordButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdaa40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127109d0;
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar16);
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  func_0x000104ce4ab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar17);
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c271420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar16);
  _objc_release(puVar1);
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c271420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c160fc0(uVar16);
  func_0x000104ce4ab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar20));
  _objc_release(uVar16);
  dVar24 = 12.0;
  func_0x00010c181e40(0x4028000000000000,0,0x4028000000000000,0,*(undefined8 *)(param_1 + lVar20));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar20));
  uVar16 = *(undefined8 *)(param_1 + _DAT_1127109a4);
  func_0x00010bf4b2a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar16);
  lVar2 = *(long *)(param_1 + _DAT_1127109b4);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_1127109a8);
  }
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar18));
  uVar16 = uVar3;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar18));
  uVar17 = uVar4;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)lVar15 != 0) {
    lVar15 = *(long *)(lVar2 + _DAT_112710988);
    func_0x000106b24514();
    if ((int)lVar15 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = (long)_DAT_1127109d4;
      lVar15 = *(long *)(lVar2 + lVar23);
      *(undefined **)(lVar2 + lVar23) = puVar1;
      _objc_release();
      func_0x000108b9a954();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(*(undefined8 *)(lVar2 + lVar23));
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(lVar2 + lVar23);
      func_0x00010c271420(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(uVar16);
      _objc_release(puVar1);
      uVar16 = *(undefined8 *)(lVar2 + lVar23);
      func_0x00010c271420(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(uVar16);
      func_0x00010c160fc0(*(undefined8 *)(lVar2 + lVar23));
      func_0x00010c161020(*(undefined8 *)(lVar2 + lVar23));
      dVar24 = 0.0;
      func_0x00010c181e40(0,0,0x4028000000000000,0,*(undefined8 *)(lVar2 + lVar23));
      func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar23));
      uVar16 = *(undefined8 *)(lVar2 + _DAT_1127109a4);
      func_0x00010bf4b2a0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar16);
      func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar23));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(lVar2 + lVar23);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)_DAT_112710984;
      func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar18));
      uVar16 = uVar3;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar2 + lVar23);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar18));
      uVar17 = uVar4;
      func_0x00010bf493c0(-dVar24);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + lVar23);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar2 + _DAT_1127109d0);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar17);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar16);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(uVar3);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_1127109ac;
  uVar16 = *(undefined8 *)(lVar15 + lVar21);
  *(undefined **)(lVar15 + lVar21) = puVar1;
  _objc_release(uVar16);
  uVar17 = *(undefined8 *)(lVar15 + lVar21);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar17);
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010c271420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar16);
  _objc_release(puVar1);
  uVar16 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010c271420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010c160fc0(uVar16);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar15 + lVar21));
  _objc_release(uVar16);
  dVar24 = 12.0;
  func_0x00010c181e40(0x4028000000000000,0,0x4028000000000000,0,*(undefined8 *)(lVar15 + lVar21));
  func_0x00010befbd60(*(undefined8 *)(lVar15 + lVar21));
  lVar22 = (long)_DAT_1127109a4;
  uVar16 = *(undefined8 *)(lVar15 + lVar22);
  func_0x00010bf4b2a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar16);
  lVar2 = *(long *)(lVar15 + _DAT_1127109d4);
  if (lVar2 == 0) {
    lVar2 = *(long *)(lVar15 + _DAT_1127109d0);
  }
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(*(undefined8 *)(lVar15 + lVar21));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(lVar15 + lVar19));
  uVar16 = uVar7;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar15 + lVar19));
  uVar17 = uVar10;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar15 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar15 + lVar22);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(lVar23);
  _objc_release(lVar18);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(lVar2 + _DAT_11271098c);
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (lVar15 != 0) {
    puVar1 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar9 = PTR_PTR_1126af048;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar19 = (long)_DAT_1127109b8;
    uVar16 = *(undefined8 *)(lVar2 + lVar19);
    *(undefined **)(lVar2 + lVar19) = puVar9;
    _objc_release(uVar16);
    func_0x00010c20eaa0(*(undefined8 *)(lVar2 + lVar19));
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar19));
    lVar15 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar15);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar10;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar6;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar2 + _DAT_1127109a4);
    func_0x00010bf4fa60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010bf49480(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar14);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(lVar23);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(uVar11);
    _objc_release(uVar17);
    _objc_release(lVar5);
    _objc_release(lVar22);
    _objc_release(uVar10);
    _objc_release(uVar16);
    _objc_release(lVar21);
    _objc_release(lVar15);
    _objc_release(uVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = *(undefined8 *)(puVar1 + _DAT_112710978);
  puVar9 = PTR_PTR_1126af278;
  func_0x00010c0f0c20(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar16);
  _objc_release(puVar9);
  uVar16 = *(undefined8 *)(puVar1 + _DAT_112710980);
  func_0x00010c0f2220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_startPage__112671938,puVar1);
  return;
}



/* Entry: 104cdadd0; end: 104cdb15f; -[SCLogInCredentialsEntryViewController _setupPasskeySignInButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdadd0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112710988);
    func_0x000106b24514();
    if ((int)lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = (long)_DAT_1127109d4;
      lVar1 = *(long *)(param_1 + lVar23);
      *(undefined **)(param_1 + lVar23) = puVar2;
      _objc_release();
      func_0x000108b9a954();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(*(undefined8 *)(param_1 + lVar23));
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c271420(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c271420(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(uVar3);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar23));
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar23));
      dVar24 = 0.0;
      func_0x00010c181e40(0,0,0x4028000000000000,0,*(undefined8 *)(param_1 + lVar23));
      func_0x00010befbd60(*(undefined8 *)(param_1 + lVar23));
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127109a4);
      func_0x00010bf4b2a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar3);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar17;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)_DAT_112710984;
      func_0x00010bf69860(*(undefined8 *)(param_1 + lVar18));
      uVar3 = uVar4;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar22;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf69860(*(undefined8 *)(param_1 + lVar18));
      uVar19 = uVar5;
      func_0x00010bf493c0(-dVar24);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + _DAT_1127109d0);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar19);
      _objc_release(lVar6);
      _objc_release(lVar22);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(lVar21);
      _objc_release(lVar17);
      _objc_release(uVar4);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_1127109ac;
  uVar3 = *(undefined8 *)(lVar1 + lVar21);
  *(undefined **)(lVar1 + lVar21) = puVar2;
  _objc_release(uVar3);
  uVar19 = *(undefined8 *)(lVar1 + lVar21);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar19);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010c160fc0(uVar3);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar1 + lVar21));
  _objc_release(uVar3);
  dVar24 = 12.0;
  func_0x00010c181e40(0x4028000000000000,0,0x4028000000000000,0,*(undefined8 *)(lVar1 + lVar21));
  func_0x00010befbd60(*(undefined8 *)(lVar1 + lVar21));
  lVar22 = (long)_DAT_1127109a4;
  uVar3 = *(undefined8 *)(lVar1 + lVar22);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  lVar16 = *(long *)(lVar1 + _DAT_1127109d4);
  if (lVar16 == 0) {
    lVar16 = *(long *)(lVar1 + _DAT_1127109d0);
  }
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(*(undefined8 *)(lVar1 + lVar21));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(lVar1 + lVar20));
  uVar3 = uVar7;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar1 + lVar20));
  uVar19 = uVar8;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar1 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar1 + lVar22);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(lVar11);
  _objc_release(lVar23);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(lVar16 + _DAT_11271098c);
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar10 = PTR_PTR_1126af048;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar20 = (long)_DAT_1127109b8;
    uVar3 = *(undefined8 *)(lVar16 + lVar20);
    *(undefined **)(lVar16 + lVar20) = puVar10;
    _objc_release(uVar3);
    func_0x00010c20eaa0(*(undefined8 *)(lVar16 + lVar20));
    func_0x00010c219b60(*(undefined8 *)(lVar16 + lVar20));
    lVar1 = lVar16;
    func_0x00010c29bf00(lVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(lVar16 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar16;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar16 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar16;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar16 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar16;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar18;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar23;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar16 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(lVar16 + _DAT_1127109a4);
    func_0x00010bf4fa60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010bf49480(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar10);
    _objc_release(puVar15);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(lVar11);
    _objc_release(lVar23);
    _objc_release(lVar18);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(lVar6);
    _objc_release(lVar22);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(lVar21);
    _objc_release(lVar1);
    _objc_release(uVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112710978);
  puVar10 = PTR_PTR_1126af278;
  func_0x00010c0f0c20(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3);
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112710980);
  func_0x00010c0f2220(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_startPage__112671938,puVar2);
  return;
}



/* Entry: 104cdb160; end: 104cdb567; -[SCLogInCredentialsEntryViewController _setupRegisterAccountButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdb160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_1127109ac;
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar18);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar19);
  _objc_release(uVar18);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c271420(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar18);
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c271420(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c160fc0(uVar18);
  func_0x000104ce4ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar21));
  _objc_release(uVar18);
  dVar24 = 12.0;
  func_0x00010c181e40(0x4028000000000000,0,0x4028000000000000,0,*(undefined8 *)(param_1 + lVar21));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar21));
  lVar22 = (long)_DAT_1127109a4;
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf4b2a0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar18);
  lVar2 = *(long *)(param_1 + _DAT_1127109d4);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_1127109d0);
  }
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112710984;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar20));
  uVar18 = uVar3;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar20));
  uVar19 = uVar6;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(lVar2 + _DAT_11271098c);
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (lVar17 != 0) {
    puVar1 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar15 = PTR_PTR_1126af048;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar23 = (long)_DAT_1127109b8;
    uVar18 = *(undefined8 *)(lVar2 + lVar23);
    *(undefined **)(lVar2 + lVar23) = puVar15;
    _objc_release(uVar18);
    func_0x00010c20eaa0(*(undefined8 *)(lVar2 + lVar23));
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar23));
    lVar17 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar17);
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(lVar2 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar6;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar2 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + _DAT_1127109a4);
    func_0x00010bf4fa60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf49480(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar16);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar20);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar9);
    _objc_release(uVar19);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(uVar18);
    _objc_release(lVar22);
    _objc_release(lVar17);
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  uVar18 = *(undefined8 *)(puVar1 + _DAT_112710978);
  puVar15 = PTR_PTR_1126af278;
  func_0x00010c0f0c20(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar18);
  _objc_release(puVar15);
  uVar18 = *(undefined8 *)(puVar1 + _DAT_112710980);
  func_0x00010c0f2220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar18,PTR_s_startPage__112671938,puVar1);
  return;
}



/* Entry: 104cdb568; end: 104cdb8cf; -[SCLogInCredentialsEntryViewController _setupOAuthListViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdb568(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_11271098c);
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126af040;
    _objc_alloc();
    func_0x00010c046520();
    puVar3 = PTR_PTR_1126af048;
    _objc_alloc();
    func_0x00010c0306a0();
    lVar22 = (long)_DAT_1127109b8;
    uVar21 = *(undefined8 *)(param_1 + lVar22);
    *(undefined **)(param_1 + lVar22) = puVar3;
    _objc_release(uVar21);
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar22));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar4;
    func_0x00010bf493c0(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + _DAT_1127109a4);
    func_0x00010bf4fa60();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar15;
    func_0x00010bf49480(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar21);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  uVar21 = *(undefined8 *)(puVar2 + _DAT_112710978);
  puVar3 = PTR_PTR_1126af278;
  func_0x00010c0f0c20(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar21);
  _objc_release(puVar3);
  uVar21 = *(undefined8 *)(puVar2 + _DAT_112710980);
  func_0x00010c0f2220(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar21,PTR_s_startPage__112671938,puVar2);
  return;
}



/* Entry: 104cdb8d0; end: 104cdb947; -[SCLogInCredentialsEntryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdb8d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c0f0c20(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710980);
  func_0x00010c0f2220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startPage__112671938,param_1);
  return;
}



/* Entry: 104cdb948; end: 104cdb993; -[SCLogInCredentialsEntryViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdb948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c0a8240(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdb994; end: 104cdb9f7; -[SCLogInCredentialsEntryViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdb994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127109a0),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010bf9bba0(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdb9f8; end: 104cdba43; -[SCLogInCredentialsEntryViewController _reactivationDeclined] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdb9f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c121060(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdba44; end: 104cdba8f; -[SCLogInCredentialsEntryViewController _reactivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdba44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c120f80(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdba90; end: 104cdbadb; -[SCLogInCredentialsEntryViewController _showHidePasswordButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdba90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c272aa0(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdbadc; end: 104cdbb27; -[SCLogInCredentialsEntryViewController _presentCountryCodePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdbadc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c10bca0(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdbb28; end: 104cdbb2f; -[SCLogInCredentialsEntryViewController textViewShouldBeginEditing:] */

undefined8 FUN_104cdbb28(void)

{
  return 1;
}



/* Entry: 104cdbb30; end: 104cdbbbb; -[SCLogInCredentialsEntryViewController textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104cdbb30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_3 == *(long *)(param_1 + _DAT_1127109a0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112710990);
    func_0x00010c079aa0(uVar1,param_2,param_4,param_5,param_6);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112710978);
      puVar2 = PTR_PTR_1126af278;
      func_0x00010bf11fc0(PTR_PTR_1126af278);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8dd80(uVar1,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  return 1;
}



/* Entry: 104cdbbbc; end: 104cdbc5b; -[SCLogInCredentialsEntryViewController textViewShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cdbbbc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_11271099c)) {
    func_0x00010bf179a0();
  }
  else if (param_3 == *(long *)(param_1 + _DAT_1127109a0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
    puVar1 = PTR_PTR_1126af278;
    func_0x00010c0a8240(PTR_PTR_1126af278);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 104cdbc5c; end: 104cdbd77; -[SCLogInCredentialsEntryViewController textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdbc5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af278;
  if (param_3 == *(long *)(param_1 + _DAT_11271099c)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112710978);
    lVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d460(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126af278;
  if (param_3 == *(long *)(param_1 + _DAT_1127109a0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112710978);
    lVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d4e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cdbd78; end: 104cdbdc3; -[SCLogInCredentialsEntryViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdbd78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c272ea0(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdbdc4; end: 104cdbed7; -[SCLogInCredentialsEntryViewController phoneNumberString:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104cdbdc4(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c08fa60();
  if (((lVar1 == 0) && (uVar2 = param_3, func_0x00010c08fa60(), param_4 < uVar2 - 1)) ||
     ((lVar1 = param_6, func_0x00010c08fa60(), lVar1 == 1 &&
      (uVar2 = param_3, func_0x00010c08fa60(), param_4 < uVar2)))) {
    func_0x00010bf9d480(*(undefined8 *)(param_1 + _DAT_1127109d8));
  }
  uVar2 = param_3;
  func_0x00010c25cf80(param_3,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar3 = PTR_PTR_1126af278;
  func_0x00010c28d460(PTR_PTR_1126af278,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  return 1;
}



/* Entry: 104cdbed8; end: 104cdbfa7; -[SCLogInCredentialsEntryViewController _programmaticallySetPhoneFieldIfNecessaryWithViewModel:previousViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdbed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127109d8);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c079f20();
    uVar1 = param_3;
    func_0x00010c079f20();
    if ((int)uVar2 == (int)uVar1) goto LAB_104cdbf88;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710998);
  uVar2 = param_3;
  func_0x00010c0faf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db100(uVar1,param_2,uVar2);
  _objc_release(uVar2);
LAB_104cdbf88:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cdbfa8; end: 104cdbffb; -[SCLogInCredentialsEntryViewController _setupPhoneCursorFixManualExposure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdbfa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710988);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dae978,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127109d8);
  *(undefined8 *)(param_1 + _DAT_1127109d8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cdbffc; end: 104cdc01f; -[SCLogInCredentialsEntryViewController shouldSubmitPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cdbffc(long param_1)

{
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_1127109a0));
  return 1;
}



/* Entry: 104cdc020; end: 104cdc06b; -[SCLogInCredentialsEntryViewController selectCountryCodeButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271097c);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c284ae0(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdc06c; end: 104cdc0bb; -[SCLogInCredentialsEntryViewController attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc06c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c159b60(PTR_PTR_1126af278,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdc0bc; end: 104cdc107; -[SCLogInCredentialsEntryViewController recoverPasswordTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc0bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c124000(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdc108; end: 104cdc153; -[SCLogInCredentialsEntryViewController loginWithPasskeyTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c0f4fe0(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdc154; end: 104cdc19f; -[SCLogInCredentialsEntryViewController _registerAccount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c125b80(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdc1a0; end: 104cdc1eb; -[SCLogInCredentialsEntryViewController _loginWithCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc1a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c0b44c0(PTR_PTR_1126af278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdc1ec; end: 104cdc407; -[SCLogInCredentialsEntryViewController _showReactivationAlertWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc1ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112710974;
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    puVar2 = auStack_68;
    _objc_initWeak(puVar2,param_1);
    *(undefined1 *)(param_1 + lVar6) = 1;
    puVar3 = PTR_PTR_1126af180;
    func_0x000108b9a8dc();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104cdc408;
    puStack_78 = &UNK_110848a18;
    unaff_x23 = &puStack_90;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104cdc430;
    puStack_a0 = &UNK_1108485e8;
    unaff_x24 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c235c40(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + _DAT_112710974) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104cdc408; end: 104cdc42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc408(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112710974) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104cdc430; end: 104cdc46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc430(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be86280(param_1);
    *(undefined1 *)(param_1 + _DAT_112710974) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdc470; end: 104cdc75b; -[SCLogInCredentialsEntryViewController _showReactivationConfirmationAlertWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc470(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127109dc;
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    func_0x00010bf1f440();
    puVar2 = auStack_90;
    _objc_initWeak(puVar2,param_1);
    *(undefined1 *)(param_1 + lVar7) = 1;
    puVar3 = PTR_PTR_1126af180;
    func_0x000108b9a8ac();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104cdc75c;
    puStack_a0 = &UNK_110848a18;
    unaff_x24 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126af180;
    func_0x000108b9a87c();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_104cdc79c;
    puStack_c8 = &UNK_110848a18;
    unaff_x25 = &puStack_e0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar3;
    puStack_80 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_104cdc7c4;
    puStack_f0 = &UNK_110848a48;
    unaff_x26 = &puStack_108;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c235c40(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_e8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010be86200(param_3);
    *(undefined1 *)(param_3 + _DAT_1127109dc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


