/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f59864; end: 104f59a53; -[SCGroupChatSettingsAction _didTapHeaderActionLabel] */

void FUN_104f59864(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x00010bddf320();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc2d8;
  if (*(long *)(param_1 + 0x40) != 0x11) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbc2b8;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2b9b80(puVar4,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar5 = puVar4;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f59a54;
  puStack_60 = &UNK_110842308;
  puVar6 = puVar2;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar5,param_2,&puStack_78,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0cfc40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf22ba0(puVar5,param_2,puVar3,puVar4,uVar7,param_1,0,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 104f59a54; end: 104f59a6b;  */

void FUN_104f59a54(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 104f59a6c; end: 104f59ab3; -[SCGroupChatSettingsAction _cleanUpWebScope] */

void FUN_104f59a6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f59ab4; end: 104f59ab7; -[SCGroupChatSettingsAction webBrowserDidDismiss:] */

void FUN_104f59ab4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpWebScope_112555668);
  return;
}



/* Entry: 104f59ab8; end: 104f59abf; -[SCGroupChatSettingsAction position] */

undefined8 FUN_104f59ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f59ac0; end: 104f59ac7; -[SCGroupChatSettingsAction actionSheetCell] */

undefined8 FUN_104f59ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f59ac8; end: 104f59acf; -[SCGroupChatSettingsAction prominentActionButton] */

undefined8 FUN_104f59ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f59ad0; end: 104f59b47; -[SCGroupChatSettingsAction .cxx_destruct] */

void FUN_104f59ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f59b48; end: 104f59d13; -[SCGroupMessageNotificationsAction initWithGroupId:context:groupServices:notificationServices:accessibilityIdentifier:muteAllAction:] */

undefined1 *
FUN_104f59b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5360;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release();
    *(undefined8 *)((long)puVar1 + 0x58) = 0xc;
    func_0x000104f623c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bddc140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined1 **)((long)puVar1 + 0x60) = puVar4;
    _objc_retain();
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + 0x60));
    _objc_release(puVar4);
    func_0x00010bea97e0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f59d14; end: 104f59d87; -[SCGroupMessageNotificationsAction valueForGroup:] */

void FUN_104f59d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dca60(param_3);
  uVar2 = param_3;
  func_0x00010c0ca4e0(param_3);
  uVar3 = param_3;
  func_0x00010bf37100(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee7e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valueForNotificationOn_mentionN_112597940,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104f59d88; end: 104f59de7; -[SCGroupMessageNotificationsAction _valueForNotificationOn:mentionNotificationOn:chatNotificationOn:] */

void FUN_104f59d88(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    if (param_4 == 0) {
      if (param_5 == 0) {
        func_0x000104f5ff04();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000104f5ff4c();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000104f5feec();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000104f5ff1c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f59de8; end: 104f59e3f; -[SCGroupMessageNotificationsAction _detailTextForNotificationOn:mentionNotificationOn:chatNotificationOn:] */

void FUN_104f59de8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    if (param_4 == 0) {
      if (param_5 != 0) {
        func_0x000104f5ff64();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000104f5ff7c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000104f5ff34();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f59e40; end: 104f5a023; -[SCGroupMessageNotificationsAction _cell] */

void FUN_104f59e40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126b10a0;
  puVar7 = *(undefined **)(param_1 + 0x60);
  _objc_retain(puVar7);
  _objc_opt_class(puVar1);
  puVar2 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar1);
  puVar1 = puVar7;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar7);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    _objc_release(uVar5);
    lVar6 = param_1;
    func_0x00010c296ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar6;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126b10a0;
    func_0x00010c296e20(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar7 = puVar1;
    func_0x00010bf1d200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(puVar7);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar6);
    _objc_release(uVar4);
  }
  else {
    _objc_retain(puVar7);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104f5a024; end: 104f5a06b;  */

void FUN_104f5a024(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bd20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5a06c; end: 104f5a1f7; -[SCGroupMessageNotificationsAction _setUpObservers] */

void FUN_104f5a06c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcf900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcefc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104f5a1f8; end: 104f5a23f;  */

void FUN_104f5a1f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5a240; end: 104f5a3a3; -[SCGroupMessageNotificationsAction _updateCellWithGroup:] */

void FUN_104f5a240(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_2 + 0x48) = param_4;
    _objc_release(uVar1);
    lVar2 = param_2;
    func_0x00010bddc140(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c296ec0(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(long *)(param_2 + 0x30) = lVar3;
    _objc_release(uVar1);
    lVar4 = param_4;
    func_0x00010bf37000(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(lVar4,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    if ((0.0 < param_1) || (lVar4 = param_4, func_0x00010c0dca60(), (int)lVar4 == 0)) {
      func_0x000104f62450();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220340(lVar2,param_3,lVar4);
      _objc_release(lVar4);
    }
    else {
      func_0x00010c220340(lVar2,param_3,lVar3);
    }
    func_0x00010c195460(lVar2,param_3,1);
    lVar4 = param_2 + 0x50;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 != 0) {
      func_0x00010be86b40(param_2);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f5a3a4; end: 104f5a3f3; -[SCGroupMessageNotificationsAction _onTap:] */

void FUN_104f5a3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0a0440(uVar1,param_2,0x2e);
  func_0x00010be6be20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f5a3f4; end: 104f5a4ff; -[SCGroupMessageNotificationsAction _onTapMuteAware:] */

void FUN_104f5a3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bdd65c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b10a0;
    lVar2 = lVar1;
    func_0x000104f62318();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    func_0x00010c019f40();
    _objc_storeWeak(param_1 + 0x50,puVar3);
    func_0x00010c10af80(param_3);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104f5a500; end: 104f5a50f;  */

void FUN_104f5a500(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f5a510; end: 104f5a60b; -[SCGroupMessageNotificationsAction _rebuildSubSheetContent] */

void FUN_104f5a510(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    lVar1 = param_1;
    func_0x00010bdd65c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b10a0;
    lVar2 = lVar1;
    func_0x000104f62318();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1312e0();
    _objc_release(param_1);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104f5a60c; end: 104f5a61b;  */

void FUN_104f5a60c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f5a61c; end: 104f5a73f; -[SCGroupMessageNotificationsAction _buildMuteAwareCells] */

void FUN_104f5a61c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_1;
  func_0x00010be61a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be61a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be61a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(lVar3);
  uVar4 = *(ulong *)(param_1 + 0x40);
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010befa120(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f5a740; end: 104f5a933; -[SCGroupMessageNotificationsAction _muteAwareSelectCellForMentionOn:chatOn:] */

void FUN_104f5a740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010bee7e60(param_1,param_2,(uint)param_3 & (uint)param_4,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010c1588e0(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 1.60807493534087e-314;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = (undefined1)param_3;
  uStack_6f = (undefined1)param_4;
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010bdfb880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0(puVar3);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf37000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar5);
  if (dVar6 <= 0.0) {
    func_0x00010c0dca60(*(undefined8 *)(param_1 + 0x48));
  }
  func_0x00010c195460(puVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f5a934; end: 104f5a9df;  */

void FUN_104f5a934(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  puVar1 = auStack_38;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf84b00(param_2);
    puVar1 = auStack_38;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bedc3c0();
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f5a9e0; end: 104f5aaef; -[SCGroupMessageNotificationsAction _updateNotificationStatusWithMentionNotificationOn:chatNotificationOn:] */

void FUN_104f5a9e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcf8e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c286300(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f5aaf0; end: 104f5ab5f;  */

void FUN_104f5aaf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01680();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5ab60; end: 104f5ab77; -[SCGroupMessageNotificationsAction _didUpdateGroupNotificationSucceed:errorMessage:groupIdInResponse:] */

void FUN_104f5ab60(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_isEqualToString__1125fa240,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentErrorStatusMessage__11257c690,param_4);
  return;
}



/* Entry: 104f5ab78; end: 104f5ac13; -[SCGroupMessageNotificationsAction _presentErrorStatusMessage:] */

void FUN_104f5ab78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f5ac14; end: 104f5ac1b; -[SCGroupMessageNotificationsAction position] */

undefined8 FUN_104f5ac14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104f5ac1c; end: 104f5ac23; -[SCGroupMessageNotificationsAction actionSheetCell] */

undefined8 FUN_104f5ac1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104f5ac24; end: 104f5ac2b; -[SCGroupMessageNotificationsAction prominentActionButton] */

undefined8 FUN_104f5ac24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104f5ac2c; end: 104f5accf; -[SCGroupMessageNotificationsAction .cxx_destruct] */

void FUN_104f5ac2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104f5acd0; end: 104f5aebb; -[SCGroupMuteChatsOrCallsAction initWithGroupId:muteType:context:groupsDataTracker:groupsDataMutator:notificationServices:accessibilityIdentifier:] */

undefined1 *
FUN_104f5acd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5368;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(long *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release();
    if (param_4 == 0) {
      uVar6 = 0xd;
      func_0x000104f62438();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      uVar6 = 0x12;
      func_0x000104f62420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = 0x12;
    }
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar6;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bddc140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined1 **)((long)puVar1 + 0x68) = puVar4;
    _objc_release(uVar2);
    func_0x00010be662a0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f5aebc; end: 104f5b01f; -[SCGroupMuteChatsOrCallsAction _cell] */

void FUN_104f5aebc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b10a0;
  puVar3 = *(undefined **)(param_1 + 0x68);
  _objc_retain(puVar3);
  _objc_opt_class(puVar1);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126b10a0;
    func_0x00010c2655e0(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    puVar3 = puVar1;
    func_0x00010bf1d200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c160fc0(puVar3);
    func_0x00010c195460(puVar3);
    _objc_retain(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _objc_retain(puVar3);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f5b020; end: 104f5b067;  */

void FUN_104f5b020(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5b068; end: 104f5b1d3; -[SCGroupMuteChatsOrCallsAction _observeGroup] */

void FUN_104f5b068(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcefc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104f5b1d4; end: 104f5b21b;  */

void FUN_104f5b1d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5b21c; end: 104f5b437; -[SCGroupMuteChatsOrCallsAction _updateCellWithGroup:] */

void FUN_104f5b21c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_4;
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010bddc140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_104f5b438(uVar1,*(undefined8 *)(param_2 + 0x18));
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 <= 0.0) {
    uVar1 = param_4;
    if (*(long *)(param_2 + 0x18) == 1) {
      func_0x00010bf098e0();
      if ((int)uVar1 != 0) goto LAB_104f5b350;
      func_0x000104f62558();
      _objc_retainAutoreleasedReturnValue();
LAB_104f5b3e8:
      func_0x00010c18c5c0(lVar2);
      goto LAB_104f5b3f8;
    }
    if (*(long *)(param_2 + 0x18) != 0) goto LAB_104f5b410;
    func_0x00010c0dca60();
    if ((int)uVar1 == 0) {
      func_0x000104f62510();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f5b3e8;
    }
LAB_104f5b350:
    func_0x00010c18c5c0(lVar2);
  }
  else {
    dVar5 = (double)(long)(param_1 / 60.0);
    if (*(long *)(param_2 + 0x18) == 1) {
      if (dVar5 < 60.0) {
        func_0x000104f62570();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000104f62588();
        _objc_retainAutoreleasedReturnValue();
        dVar5 = (double)(long)(param_1 / 3600.0);
      }
    }
    else {
      if (*(long *)(param_2 + 0x18) != 0) goto LAB_104f5b404;
      if (60.0 <= dVar5) {
        func_0x000104f62540();
        _objc_retainAutoreleasedReturnValue();
        dVar5 = (double)(long)(param_1 / 3600.0);
      }
      else {
        func_0x000104f62528();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0(lVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
LAB_104f5b3f8:
    _objc_release(uVar1);
  }
LAB_104f5b404:
  func_0x00010c1fade0(lVar2);
LAB_104f5b410:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f5b438; end: 104f5b4eb;  */

undefined8 FUN_104f5b438(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_2;
  if (param_3 == 1) {
    func_0x00010bf28180(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010bf37000(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104f5b4ec; end: 104f5b8e7; -[SCGroupMuteChatsOrCallsAction _handleMessageNotificationsTappedWithActionSheet:] */

void FUN_104f5b4ec(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bddc140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  if ((uVar2 & 1) == 0) {
    lVar9 = *(long *)(param_2 + 8);
    func_0x00010c08fa60();
    if (lVar9 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_104f5b8e8;
      puStack_70 = &UNK_11085dda8;
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117e508;
      uStack_68 = param_2;
      func_0x000100504554(&PTR__OBJC_CLASS___NSConstantArray_11117e508,&puStack_88);
      ppuVar5 = ppuVar4;
      func_0x000100504554();
      puVar7 = PTR_PTR_1126b10a0;
      ppuVar6 = ppuVar5;
      func_0x000104f62330();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb42c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf1d200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      puVar7 = PTR_PTR_1126b10a8;
      _objc_alloc(PTR_PTR_1126b10a8);
      func_0x00010c019f40();
      func_0x00010c10af80(param_4);
      uVar3 = *(undefined8 *)(param_2 + 0x50);
      *(undefined ***)(param_2 + 0x50) = ppuVar4;
      _objc_release(uVar3);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(ppuVar5);
    }
    goto LAB_104f5b888;
  }
  func_0x00010c195460(uVar1);
  func_0x00010c0a0440(*(undefined8 *)(param_2 + 0x20));
  _objc_initWeak(auStack_90,param_2);
  FUN_104f5b438(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  lVar9 = *(long *)(param_2 + 0x18);
  if (param_1 <= 0.0) {
    if (lVar9 == 1) {
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = auStack_110;
      _objc_copyWeak(puVar10,auStack_90);
      func_0x00010c2862e0(uVar3);
    }
    else {
      if (lVar9 != 0) goto LAB_104f5b880;
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x104f5bb1c;
      puStack_f0 = &UNK_11085dd78;
      puVar10 = auStack_e8;
      _objc_copyWeak(puVar10,auStack_90);
      func_0x00010c286300(uVar3);
    }
LAB_104f5b870:
    _objc_release(uVar3);
    _objc_destroyWeak(puVar10);
  }
  else {
    if (lVar9 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_104f5ba3c;
      puStack_a0 = &UNK_11085dd78;
      puVar10 = auStack_98;
      _objc_copyWeak(puVar10,auStack_90);
      func_0x00010c28ad20(uVar3);
      goto LAB_104f5b870;
    }
    if (lVar9 == 1) {
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x104f5baac;
      puStack_c8 = &UNK_11085dd78;
      puVar10 = auStack_c0;
      _objc_copyWeak(puVar10,auStack_90);
      func_0x00010c28ad00(uVar3);
      goto LAB_104f5b870;
    }
  }
LAB_104f5b880:
  _objc_destroyWeak(auStack_90);
LAB_104f5b888:
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104f5b8e8; end: 104f5b9cb;  */

void FUN_104f5b8e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010c067ec0(param_2);
  puVar1 = PTR_PTR_1126b2ab0;
  _objc_alloc(PTR_PTR_1126b2ab0);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c018ea0(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f5b9cc; end: 104f5ba2b;  */

void FUN_104f5b9cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f5ba2c; end: 104f5ba3b;  */

void FUN_104f5ba2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f5ba3c; end: 104f5bbfb;  */

void FUN_104f5ba3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01500();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5bbfc; end: 104f5bc93; -[SCGroupMuteChatsOrCallsAction _didUnmuteWithSuccess:errorMessage:groupId:] */

void FUN_104f5bbfc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bddc140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  if ((param_3 & 1) == 0) {
    func_0x00010be7b3c0(param_1,param_2,param_4);
  }
  else {
    func_0x00010c0720c0(*(undefined8 *)(param_1 + 8),param_2,param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f5bc94; end: 104f5bd2f; -[SCGroupMuteChatsOrCallsAction _presentErrorStatusMessage:] */

void FUN_104f5bc94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f5bd30; end: 104f5bd37; -[SCGroupMuteChatsOrCallsAction position] */

undefined8 FUN_104f5bd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104f5bd38; end: 104f5bd3f; -[SCGroupMuteChatsOrCallsAction actionSheetCell] */

undefined8 FUN_104f5bd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104f5bd40; end: 104f5bd47; -[SCGroupMuteChatsOrCallsAction prominentActionButton] */

undefined8 FUN_104f5bd40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104f5bd48; end: 104f5bdef; -[SCGroupMuteChatsOrCallsAction .cxx_destruct] */

void FUN_104f5bd48(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5bdf0; end: 104f5bf2f; -[SCGroupMuteConversationAction initWithGroupId:muteType:expirationDuration:context:groupsDataMutator:notificationServices:accessibilityIdentifier:] */

undefined1 *
FUN_104f5bdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5370;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    func_0x00010bea66c0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f5bf30; end: 104f5c0a7; -[SCGroupMuteConversationAction actionSheetCell] */

void FUN_104f5bf30(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  lVar4 = *(long *)(param_1 + 0x18);
  puVar5 = (undefined1 *)0x0;
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      func_0x000104f62468();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
    }
    else if (lVar4 == 1) {
      func_0x000104f62480();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
    }
  }
  else if (lVar4 == 2) {
    func_0x000104f62498();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
  }
  else if (lVar4 == 3) {
    func_0x000104f624b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
  }
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010c0ec240(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c160fc0(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f5c0a8; end: 104f5c0ef;  */

void FUN_104f5c0a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5c0f0; end: 104f5c113; -[SCGroupMuteConversationAction _setPosition] */

void FUN_104f5c0f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0xd;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 1) {
      return;
    }
    uVar1 = 0x12;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 104f5c114; end: 104f5c423; -[SCGroupMuteConversationAction _handleMessageNotificationsTappedWithActionSheet:] */

void FUN_104f5c114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_48,param_1);
  if (*(ulong *)(param_1 + 0x18) < 3) {
    if (*(long *)(param_1 + 0x10) == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x104f5c46c;
      puStack_90 = &UNK_11085de18;
      puVar2 = auStack_80;
      _objc_copyWeak(puVar2,auStack_48);
      _objc_retain(param_3);
      uStack_88 = param_3;
      func_0x00010c28ad00(uVar1);
      _objc_release(uVar1);
      uVar1 = uStack_88;
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_104f5c3cc;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104f5c424;
      puStack_60 = &UNK_11085de18;
      puVar2 = auStack_50;
      _objc_copyWeak(puVar2,auStack_48);
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x00010c28ad20(uVar1);
      _objc_release(uVar1);
      uVar1 = uStack_58;
    }
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_e0;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_3);
    func_0x00010c2862e0(uVar1);
    _objc_release(uVar1);
    uVar1 = param_3;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_104f5c3cc;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x104f5c4b4;
    puStack_c0 = &UNK_11085de18;
    puVar2 = auStack_b0;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_3);
    uStack_b8 = param_3;
    func_0x00010c286300(uVar1);
    _objc_release(uVar1);
    uVar1 = uStack_b8;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(puVar2);
LAB_104f5c3cc:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104f5c424; end: 104f5c543;  */

void FUN_104f5c424(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5c544; end: 104f5c5e3; -[SCGroupMuteConversationAction _onUpdatedNotificationStatus:notificationOn:actionSheet:] */

void FUN_104f5c544(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f5c5e4;
  puStack_50 = &UNK_11085db88;
  uStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_3;
  uStack_37 = param_4;
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_5);
  return;
}



/* Entry: 104f5c5e4; end: 104f5c5f7;  */

void FUN_104f5c5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didUpdateNotificationSucceed_no_11255df78,
             *(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104f5c5f8; end: 104f5c693; -[SCGroupMuteConversationAction _didUpdateNotificationSucceed:notificationOn:actionSheet:] */

void FUN_104f5c5f8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == 1) {
      func_0x000104f625b8();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (*(long *)(param_1 + 0x10) == 0) {
      func_0x000104f625a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = 0;
    }
    func_0x00010be7b3c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010bf84b00(param_5,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104f5c694; end: 104f5c72f; -[SCGroupMuteConversationAction _presentErrorStatusMessage:] */

void FUN_104f5c694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f5c730; end: 104f5c737; -[SCGroupMuteConversationAction position] */

undefined8 FUN_104f5c730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f5c738; end: 104f5c73f; -[SCGroupMuteConversationAction prominentActionButton] */

undefined8 FUN_104f5c738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f5c740; end: 104f5c79f; -[SCGroupMuteConversationAction .cxx_destruct] */

void FUN_104f5c740(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5c7a0; end: 104f5c883; -[SCGroupNotificationSettingsAction initWithActions:context:withAccessibilityIdentifier:] */

undefined1 *
FUN_104f5c7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5378;
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
    *(undefined8 *)((long)puVar1 + 0x18) = 0x14;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bddc520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f5c884; end: 104f5c9b3; -[SCGroupNotificationSettingsAction _cellWithAccessibilityIdentifier:] */

void FUN_104f5c884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000104f62390();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c160fc0(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f5c9b4; end: 104f5ca43;  */

void FUN_104f5c9b4(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_28 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  puVar1 = auStack_28;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 != (undefined1 *)0x0) {
    puVar1 = auStack_28;
    _objc_loadWeakRetained(puVar1);
    func_0x00010be31de0();
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 104f5ca44; end: 104f5cb3b; -[SCGroupNotificationSettingsAction _handleTapWithActionSheet:] */

void FUN_104f5ca44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0a0440(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_11085de48);
  puVar2 = PTR_PTR_1126b10a0;
  uVar4 = uVar1;
  func_0x000104f62318();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  func_0x000104f62390();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f5cb3c; end: 104f5cbe7;  */

void FUN_104f5cb3c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f5cbe8; end: 104f5cbef; -[SCGroupNotificationSettingsAction position] */

undefined8 FUN_104f5cbe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f5cbf0; end: 104f5cbf7; -[SCGroupNotificationSettingsAction actionSheetCell] */

undefined8 FUN_104f5cbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f5cbf8; end: 104f5cbff; -[SCGroupNotificationSettingsAction prominentActionButton] */

undefined8 FUN_104f5cbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f5cc00; end: 104f5cc47; -[SCGroupNotificationSettingsAction .cxx_destruct] */

void FUN_104f5cc00(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5cc48; end: 104f5cd5b; -[SCGroupSnapPostOpenViewingAction initWithGroupId:context:withAccessibilityIdentifier:snapPostOpenActionCellProvider:] */

undefined1 *
FUN_104f5cc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5380;
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
    *(undefined8 *)((long)puVar1 + 0x20) = 0xb;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be1caa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f5cd5c; end: 104f5ce83; -[SCGroupSnapPostOpenViewingAction _getActionSheetCellForGroup:] */

void FUN_104f5cd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar1;
  func_0x00010bfc1ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f5ce84; end: 104f5ceaf;  */

void FUN_104f5ce84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5ceb0; end: 104f5cebb; -[SCGroupSnapPostOpenViewingAction _logRetentionPolicyAction] */

void FUN_104f5ceb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logActionWithName__112605b20,0x68);
  return;
}



/* Entry: 104f5cebc; end: 104f5cec3; -[SCGroupSnapPostOpenViewingAction position] */

undefined8 FUN_104f5cebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f5cec4; end: 104f5cecb; -[SCGroupSnapPostOpenViewingAction prominentActionButton] */

undefined8 FUN_104f5cec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f5cecc; end: 104f5ced3; -[SCGroupSnapPostOpenViewingAction actionSheetCell] */

undefined8 FUN_104f5cecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f5ced4; end: 104f5cf27; -[SCGroupSnapPostOpenViewingAction .cxx_destruct] */

void FUN_104f5ced4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5cf28; end: 104f5d167; -[SCLeaveGroupAction initWithGroupId:context:groupsDataFetcher:groupsDataMutator:leaveGroupAlertScopeExposer:withAccessibilityIdentifier:] */

undefined8 *
FUN_104f5cf28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5388;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    puVar1[6] = 5;
    puVar3 = auStack_78;
    _objc_initWeak(puVar3,puVar1);
    puVar4 = PTR_PTR_1126b10a0;
    FUN_104f5fea4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_4);
    puVar5 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    func_0x00010c160fc0(puVar1[7]);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f5d168; end: 104f5d1bb;  */

void FUN_104f5d168(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b240();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5d1bc; end: 104f5d29f; -[SCLeaveGroupAction _handleLeaveGroupWithActionSheet:context:] */

void FUN_104f5d1bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  func_0x00010c0a0440(param_4);
  _objc_release(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b2ab8;
  _objc_alloc(PTR_PTR_1126b2ab8);
  func_0x00010c018ce0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f5d2a0; end: 104f5d337; -[SCLeaveGroupAction didLeaveGroup] */

void FUN_104f5d2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeef20(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f5d338; end: 104f5d37f; -[SCLeaveGroupAction leaveGroupAlertScopeDidDimiss:] */

void FUN_104f5d338(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f5d380; end: 104f5d387; -[SCLeaveGroupAction position] */

undefined8 FUN_104f5d380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f5d388; end: 104f5d38f; -[SCLeaveGroupAction actionSheetCell] */

undefined8 FUN_104f5d388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f5d390; end: 104f5d397; -[SCLeaveGroupAction prominentActionButton] */

undefined8 FUN_104f5d390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f5d398; end: 104f5d3ff; -[SCLeaveGroupAction .cxx_destruct] */

void FUN_104f5d398(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5d400; end: 104f5d64f; -[SCMessageRetentionAction initWithGroupId:context:chatMessageActionHandler:] */

undefined8 *
FUN_104f5d400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_78 = PTR_PTR_1126e5390;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar1[7] = 10;
    puVar3 = PTR_PTR_1126b10a0;
    func_0x000104f625d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c165ea0(puVar3);
    _objc_initWeak(auStack_88,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104f5d650;
    puStack_98 = &UNK_110852cd0;
    _objc_copyWeak(auStack_90,auStack_88);
    puVar4 = puVar3;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    func_0x00010c195460(puVar3);
    uVar2 = puVar1[3];
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010bfa5f20(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f5d650; end: 104f5d697;  */

void FUN_104f5d650(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5d698; end: 104f5d723;  */

void FUN_104f5d698(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cb880(param_2);
  uVar1 = param_2;
  func_0x00010bf12980(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be6a080(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5d724; end: 104f5d7ff; -[SCMessageRetentionAction _handleMessageRetentionTapped:] */

void FUN_104f5d724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107d3fcb4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126b2a40;
    _objc_alloc();
    func_0x00010bfee6a0();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar4,param_2,param_3,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f5d800; end: 104f5d907; -[SCMessageRetentionAction _onMessageRetentionModeFetched:availableRetentionModes:cell:] */

void FUN_104f5d800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f5d908;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f5d908; end: 104f5d93f;  */

void FUN_104f5d908(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5d940; end: 104f5d9c7; -[SCMessageRetentionAction _setMessageRetentionMode:cell:] */

void FUN_104f5d940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_4);
  func_0x000107d40874(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340(param_4,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5d9c8; end: 104f5d9fb; -[SCMessageRetentionAction didStartChangeRetentionPolicy] */

void FUN_104f5d9c8(undefined8 param_1)

{
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5d9fc; end: 104f5dab7; -[SCMessageRetentionAction didChangeRetentionPolicyWithSuccess:retentionMode:] */

void FUN_104f5d9fc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f5dab8;
  puStack_58 = &UNK_11085da78;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f5dab8; end: 104f5daef;  */

void FUN_104f5dab8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


