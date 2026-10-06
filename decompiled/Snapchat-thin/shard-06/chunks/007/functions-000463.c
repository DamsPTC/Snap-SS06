/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cdc75c; end: 104cdc79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc75c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be86200(param_1);
    *(undefined1 *)(param_1 + _DAT_1127109dc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdc79c; end: 104cdc7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc79c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127109dc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104cdc7c4; end: 104cdc803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc7c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be86280(param_1);
    *(undefined1 *)(param_1 + _DAT_1127109dc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdc804; end: 104cdc88f; -[SCLogInCredentialsEntryViewController _updatePasswordSecurity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdc804(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127109a0);
  func_0x00010c1f9a00(uVar1);
  lVar3 = (long)_DAT_1127109c8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if ((param_3 & 1) == 0) {
    func_0x000104ce0ea8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_104ce0e94();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9fc0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110daea38);
  return;
}



/* Entry: 104cdc890; end: 104cdcb0f; -[SCLogInCredentialsEntryViewController _showRedirectToRegDiaLogWithTitle:description:] */

void FUN_104cdc890(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
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
  _objc_retain(param_4);
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000104ce4c00();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104cdcb10;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000104ce4c18();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar6);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(puVar6);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdf06a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cdcb10; end: 104cdcb8f;  */

void FUN_104cdcb10(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf06a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdcb90; end: 104cdcc0b; -[SCLogInCredentialsEntryViewController _createNewAccount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdcb90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af278;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af288;
  func_0x00010c112c00(PTR_PTR_1126af288);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118880(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdcc0c; end: 104cdcc87; -[SCLogInCredentialsEntryViewController _recoverAccount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdcc0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af278;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af288;
  func_0x00010c154d40(PTR_PTR_1126af288);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118880(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdcc88; end: 104cdcd03; -[SCLogInCredentialsEntryViewController dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdcc88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af278;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af288;
  func_0x00010bf82f40(PTR_PTR_1126af288);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118880(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdcd04; end: 104cdcd9f; -[SCLogInCredentialsEntryViewController _registerForKeyboardNotifications] */

void FUN_104cdcd04(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdcda0; end: 104cdcdeb; -[SCLogInCredentialsEntryViewController _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdcda0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271098c);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127109b4),PTR_s_setHidden__1126479f8,0);
    return;
  }
  return;
}



/* Entry: 104cdcdec; end: 104cdce37; -[SCLogInCredentialsEntryViewController _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdcdec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271098c);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127109b4),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 104cdce38; end: 104cdce87; -[SCLogInCredentialsEntryViewController oAuthListView:didSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdce38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c159c00(PTR_PTR_1126af278,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdce88; end: 104cdced7; -[SCLogInCredentialsEntryViewController oAuthListViewDidTapOneTapLoginCheckbox:selected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdce88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710978);
  puVar1 = PTR_PTR_1126af278;
  func_0x00010c272ea0(PTR_PTR_1126af278,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdced8; end: 104cdd087; -[SCLogInCredentialsEntryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdced8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710990,0);
  _objc_storeStrong(param_1 + _DAT_11271098c,0);
  _objc_storeStrong(param_1 + _DAT_112710980,0);
  _objc_storeStrong(param_1 + _DAT_1127109d8,0);
  _objc_storeStrong(param_1 + _DAT_112710988,0);
  _objc_storeStrong(param_1 + _DAT_1127109b8,0);
  _objc_storeStrong(param_1 + _DAT_112710998,0);
  _objc_storeStrong(param_1 + _DAT_1127109d4,0);
  _objc_storeStrong(param_1 + _DAT_1127109ac,0);
  _objc_storeStrong(param_1 + _DAT_1127109d0,0);
  _objc_storeStrong(param_1 + _DAT_1127109b4,0);
  _objc_storeStrong(param_1 + _DAT_1127109c8,0);
  _objc_storeStrong(param_1 + _DAT_1127109a0,0);
  _objc_storeStrong(param_1 + _DAT_11271099c,0);
  _objc_storeStrong(param_1 + _DAT_1127109b0,0);
  _objc_storeStrong(param_1 + _DAT_1127109a8,0);
  _objc_storeStrong(param_1 + _DAT_1127109cc,0);
  _objc_storeStrong(param_1 + _DAT_1127109c4,0);
  _objc_storeStrong(param_1 + _DAT_1127109c0,0);
  _objc_storeStrong(param_1 + _DAT_1127109bc,0);
  _objc_storeStrong(param_1 + _DAT_1127109a4,0);
  _objc_storeStrong(param_1 + _DAT_112710984,0);
  _objc_storeStrong(param_1 + _DAT_112710994,0);
  _objc_storeStrong(param_1 + _DAT_11271097c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710978,0);
  return;
}



/* Entry: 104cdd088; end: 104cdd357; -[SCMagicCodeEntryBusinessLogic initWithDelegate:loginService:magicCodeAdaptor:usernameOrEmail:optedIn1TL:timer:loginLogger:magicCodeLogger:loginStateTransitionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cdd088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e3bc8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127109e0,param_3);
    lVar5 = (long)_DAT_1127109e4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127109e8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127109ec;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127109f0) = param_7;
    lVar5 = (long)_DAT_1127109f4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127109f8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127109fc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112710a00;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010bf53060();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710a04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112710a04) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104cdd358; end: 104cdd39f;  */

void FUN_104cdd358(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdd3a0; end: 104cdd53f; -[SCMagicCodeEntryBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdd3a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e3bc8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_begin_1125a3840);
  func_0x00010c13bf20(*(undefined8 *)(param_1 + _DAT_1127109f4));
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127109fc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6ca0(param_1);
  func_0x00010c0a9f20(uVar2);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127109e8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c137460();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127109e4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1605e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d1e0(*(undefined8 *)(param_1 + lVar4));
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c137e80(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 104cdd540; end: 104cdd543;  */

void FUN_104cdd540(void)

{
  return;
}



/* Entry: 104cdd544; end: 104cdd59b;  */

void FUN_104cdd544(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5b280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdd59c; end: 104cdd647; -[SCMagicCodeEntryBusinessLogic handleAction:] */

void FUN_104cdd59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cdd648;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104cdd650;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104cdd658;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104cdd660;
  puStack_98 = &UNK_1108450c8;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdb60(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 104cdd648; end: 104cdd66b;  */

void FUN_104cdd648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be290d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleExitAction_112567dd0);
  return;
}



/* Entry: 104cdd66c; end: 104cdd71b; -[SCMagicCodeEntryBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdd66c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126af290;
  _objc_alloc(PTR_PTR_1126af290);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112710a08);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710a0c);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112710a10);
  uVar3 = *(undefined1 *)(param_1 + _DAT_112710a14);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127109e8);
  func_0x00010c118940(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010900(puVar4,param_2,uVar6,uVar1,uVar2,uVar3,uVar5,
                      *(undefined8 *)(param_1 + _DAT_112710a18));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cdd71c; end: 104cdd963; -[SCMagicCodeEntryBusinessLogic _handleLoginAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdd71c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_112710a0c) = 1;
  *(undefined1 *)(param_1 + _DAT_112710a14) = 0;
  lVar4 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710a00);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127109f8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6ca0(param_1);
  func_0x00010c0a9c40(uVar2);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127109e4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127109e8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c1605e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d1e0(*(undefined8 *)(param_1 + lVar4));
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104cdd964;
  puStack_80 = &UNK_110848ae8;
  _objc_copyWeak(auStack_70,auStack_68);
  uStack_78 = uVar1;
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010c0a8780(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  return;
}



/* Entry: 104cdd964; end: 104cdda0b;  */

void FUN_104cdd964(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5b260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdda0c; end: 104cdda8b; -[SCMagicCodeEntryBusinessLogic _handleExitAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdda0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_1127109e0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b63a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127109fc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdf6ca0(param_1);
  func_0x00010c0a9ec0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + _DAT_1127109ec));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cdda8c; end: 104cddb5b; -[SCMagicCodeEntryBusinessLogic _handleMagicCodeUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdda8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710a08);
  *(undefined8 *)(param_1 + _DAT_112710a08) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710a1c);
  *(long *)(param_1 + _DAT_112710a1c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  lVar3 = *(long *)(param_1 + _DAT_1127109e8);
  func_0x00010c0ddda0();
  _objc_release(param_3);
  if (lVar2 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010be2bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleLoginAction_112568890);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112710a14) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cddb5c; end: 104cddc87; -[SCMagicCodeEntryBusinessLogic _magicCodeLoginSuccess:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cddb5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112710a00);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127109f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf6ca0(param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127109ec);
  uVar5 = param_3;
  func_0x00010bfcfaa0(param_3);
  uVar3 = param_3;
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar1,param_2,lVar2,uVar6,uVar5,uVar3,1,param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  lVar2 = param_1 + _DAT_1127109e0;
  _objc_loadWeakRetained(lVar2);
  lVar4 = param_1;
  func_0x00010bdf6ca0(param_1);
  func_0x00010c0b63c0(lVar2,param_2,param_3,lVar4,*(undefined1 *)(param_1 + _DAT_1127109f0));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cddc88; end: 104cddfc3; -[SCMagicCodeEntryBusinessLogic _magicCodeLoginFailure:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cddc88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  *(undefined1 *)(param_1 + _DAT_112710a0c) = 0;
  *(undefined1 *)(param_1 + _DAT_112710a14) = 1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  lVar7 = (long)_DAT_1127109f8;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdf6ca0();
  lVar8 = (long)_DAT_1127109ec;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  uVar3 = param_3;
  func_0x000106b78380();
  uVar5 = param_3;
  func_0x00010bfcfaa0();
  uVar1 = param_3;
  func_0x00010c119500();
  func_0x00010c0a9c80(uVar2,param_2,lVar4,uVar6,uVar3,uVar5,uVar1,0);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdf6ca0();
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  uVar5 = param_3;
  func_0x00010bfcfaa0();
  uVar1 = param_3;
  func_0x00010c119500();
  _objc_release(param_3);
  func_0x00010c0a9c00(uVar3,param_2,lVar4,uVar2,uVar5,uVar1,0,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 104cddfc4; end: 104cde297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cddfc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710a08);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710a08) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cde298; end: 104cde2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde298(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_1127109e0;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b6380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cde2f0; end: 104cde32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde2f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710a08);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710a08) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cde32c; end: 104cde527; -[SCMagicCodeEntryBusinessLogic _handleResendAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde32c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_112710a10) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710a08);
  *(undefined8 *)(param_1 + _DAT_112710a08) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127109e4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_1127109e8;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c1605e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d1e0(*(undefined8 *)(param_1 + lVar2));
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104cde528;
  puStack_78 = &UNK_110848b48;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c137e80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127109fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6ca0(param_1);
  func_0x00010c0a9f00(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104cde528; end: 104cde56f;  */

void FUN_104cde528(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5b2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cde570; end: 104cde5c7;  */

void FUN_104cde570(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5b280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cde5c8; end: 104cde637; -[SCMagicCodeEntryBusinessLogic _magicCodeSendSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde5c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_1127109e8;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + _DAT_112710a10) = 0;
  func_0x00010c13bf20(*(undefined8 *)(param_1 + _DAT_1127109f4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cde638; end: 104cde6df; -[SCMagicCodeEntryBusinessLogic _magicCodeSendFailure:isRetryableError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde638(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = param_1 + _DAT_1127109e0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0b6380();
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112710a10) = 0;
    lVar2 = (long)_DAT_112710a08;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cde6e0; end: 104cde733; -[SCMagicCodeEntryBusinessLogic _resendTimerUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde6e0(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c067ec0();
  *(long *)(param_1 + _DAT_112710a18) = (long)param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cde734; end: 104cde767; -[SCMagicCodeEntryBusinessLogic _currentLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cde734(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127109e8);
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



/* Entry: 104cde768; end: 104cde833; -[SCMagicCodeEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde768(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710a08,0);
  _objc_storeStrong(param_1 + _DAT_1127109ec,0);
  _objc_storeStrong(param_1 + _DAT_112710a1c,0);
  _objc_storeStrong(param_1 + _DAT_112710a00,0);
  _objc_storeStrong(param_1 + _DAT_1127109fc,0);
  _objc_storeStrong(param_1 + _DAT_1127109f8,0);
  _objc_storeStrong(param_1 + _DAT_112710a04,0);
  _objc_storeStrong(param_1 + _DAT_1127109f4,0);
  _objc_storeStrong(param_1 + _DAT_1127109e8,0);
  _objc_storeStrong(param_1 + _DAT_1127109e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127109e0);
  return;
}



/* Entry: 104cde834; end: 104cde90f; -[SCMagicCodeEntryViewController initWithDigits:screen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cde834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3bd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112710a20) = param_3;
    lVar3 = (long)_DAT_112710a24;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710a28;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010beb0c40(puVar1);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104cde910; end: 104cde917; -[SCMagicCodeEntryViewController pageViewName] */

undefined8 FUN_104cde910(void)

{
  return 0x91;
}



/* Entry: 104cde918; end: 104cde967; -[SCMagicCodeEntryViewController viewDidLoad] */

void FUN_104cde918(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3bd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0d80(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104cde968; end: 104cde9bb; -[SCMagicCodeEntryViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde968(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3bd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710a2c));
  return;
}



/* Entry: 104cde9bc; end: 104cdea2f; -[SCMagicCodeEntryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cde9bc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3bd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710a2c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710a28);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104cdea30; end: 104cdea83; -[SCMagicCodeEntryViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdea30(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3bd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710a2c));
  return;
}



/* Entry: 104cdea84; end: 104cdead7; -[SCMagicCodeEntryViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdea84(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3bd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710a2c));
  return;
}



/* Entry: 104cdead8; end: 104cdeb87; -[SCMagicCodeEntryViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdead8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710a24);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cdeb88; end: 104cdebcf;  */

void FUN_104cdeb88(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cdebd0; end: 104cdedcf; -[SCMagicCodeEntryViewController _updateUIWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdebd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112710a30;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,lVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c118940(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112710a34),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c076f80(param_3);
  lVar5 = (long)_DAT_112710a38;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  lVar1 = param_3;
  func_0x00010c083020(param_3);
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  lVar1 = param_3;
  func_0x00010c083020();
  lVar5 = (long)_DAT_112710a3c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  if ((int)lVar1 == 0) {
    func_0x00010c195460(uVar3,param_2,1);
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar5));
  }
  else {
    func_0x00010c195460(uVar3,param_2,0);
  }
  lVar1 = param_3;
  func_0x00010c07c720();
  if ((int)lVar1 == 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112710a40));
  }
  else {
    func_0x00010c24dbc0();
  }
  lVar1 = param_3;
  func_0x00010c1291a0();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c07c720(param_3);
    uVar4 = (uint)lVar1 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112710a44),param_2,uVar4);
  lVar1 = param_3;
  func_0x00010c1291a0(param_3);
  lVar5 = (long)_DAT_112710a48;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,lVar1 == 0);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c1291a0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110daea58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cdedd0; end: 104cdfd6b; -[SCMagicCodeEntryViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdedd0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
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
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  
  lVar34 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar38 = (long)_DAT_112710a2c;
  uVar35 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar1;
  _objc_release(uVar35);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar38));
  _objc_release(puVar1);
  lVar37 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar37);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar37;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar38;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar38);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar36);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar35);
  _objc_release(lVar3);
  _objc_release(lVar37);
  _objc_release(uVar2);
  puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar14);
  _objc_release(puVar1);
  lVar37 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar37);
  puVar1 = puVar14;
  func_0x00010c08c0e0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(puVar1);
  puVar1 = puVar14;
  func_0x00010c08c0e0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  func_0x00010c219b60(puVar14);
  puVar15 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_alloc_init();
  lVar37 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar37);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar16 = puVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar37;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar38;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar15;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010bf49420(0x4072c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(lVar12);
  _objc_release(lVar38);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(lVar3);
  _objc_release(lVar37);
  _objc_release(puVar16);
  puVar28 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar28;
  func_0x00010c20eaa0();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010c26e6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar28);
  _objc_release(puVar16);
  _objc_release(puVar1);
  func_0x00010c1aab40(puVar28);
  func_0x00010befbd60(puVar28);
  func_0x00010befbb60(puVar14);
  func_0x00010c219b60(puVar28);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar31 = puVar28;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar31;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar19;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(puVar30);
  _objc_release(puVar31);
  puVar20 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c190b80(puVar20);
  func_0x00010c207380(0x4039000000000000,puVar20);
  func_0x00010befbb60(puVar14);
  func_0x00010c219b60(puVar20);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar30 = puVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar30;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010bf1ff80(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar27);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar24);
  _objc_release(puVar31);
  _objc_release(puVar30);
  puVar16 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c166c00(puVar16);
  func_0x00010c190b80(puVar16);
  func_0x00010bef6d60(puVar20);
  puVar17 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c1cfce0();
  func_0x00010c21ad00(puVar17);
  puVar1 = puVar17;
  func_0x00010c213040();
  func_0x000104ce4b28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar17);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar16);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar37 = (long)_DAT_112710a30;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar37));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar37));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(puVar16);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar37 = (long)_DAT_112710a34;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar37));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar37));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(puVar16);
  puVar1 = PTR_PTR_1126af298;
  _objc_alloc();
  func_0x00010c00c740();
  uVar35 = *(undefined8 *)(param_1 + _DAT_112710a3c);
  *(undefined **)(param_1 + _DAT_112710a3c) = puVar1;
  _objc_release(uVar35);
  func_0x00010bef6d60(puVar20);
  puVar18 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c166c00(puVar18);
  func_0x00010c190b80(puVar18);
  func_0x00010c207380(0x4024000000000000,puVar18);
  func_0x00010bef6d60(puVar20);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_112710a38;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar37));
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c216380(uVar35);
  uVar36 = *(undefined8 *)(param_1 + lVar37);
  func_0x000104ce4b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar36);
  _objc_release(uVar35);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(puVar18);
  puVar19 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c166c00(puVar19);
  func_0x00010c190b80(puVar19);
  func_0x00010bef6d60(puVar18);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_112710a44;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release();
  uVar36 = *(undefined8 *)(param_1 + lVar37);
  func_0x000104ce4b58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar36);
  _objc_release(uVar35);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar37));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(puVar19);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar37 = (long)_DAT_112710a48;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar37));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar37));
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(puVar19);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar37 = (long)_DAT_112710a40;
  uVar35 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar35);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(puVar19);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar20);
  _objc_release(puVar28);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar34) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1c8b80();
  puVar1 = PTR_PTR_1126af2a0;
  _objc_opt_new();
  lVar37 = (long)_DAT_112710a4c;
  uVar35 = *(undefined8 *)(puVar14 + lVar37);
  *(undefined **)(puVar14 + lVar37) = puVar1;
  _objc_release(uVar35);
                    /* WARNING: Could not recover jumptable at 0x00010c219b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar14,PTR_s_setTransitioningDelegate__1126640f0,*(undefined8 *)(puVar14 + lVar37));
  return;
}



/* Entry: 104cdfd6c; end: 104cdfdbb; -[SCMagicCodeEntryViewController _setupTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdfd6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c1c8b80(param_1,param_2,4);
  puVar1 = PTR_PTR_1126af2a0;
  _objc_opt_new();
  lVar3 = (long)_DAT_112710a4c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTransitioningDelegate__1126640f0,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 104cdfdbc; end: 104cdfe07; -[SCMagicCodeEntryViewController _loginButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdfdbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710a24);
  puVar1 = PTR_PTR_1126af2a8;
  func_0x00010c0b3e00(PTR_PTR_1126af2a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdfe08; end: 104cdfe53; -[SCMagicCodeEntryViewController _resendButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdfe08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710a24);
  puVar1 = PTR_PTR_1126af2a8;
  func_0x00010c137d60(PTR_PTR_1126af2a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdfe54; end: 104cdfe9f; -[SCMagicCodeEntryViewController _closeButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdfe54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710a24);
  puVar1 = PTR_PTR_1126af2a8;
  func_0x00010bf9b400(PTR_PTR_1126af2a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cdfea0; end: 104cdff17; -[SCMagicCodeEntryViewController pinCodeInputFieldTextDidChange:wasAutofilled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdfea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af2a8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710a24);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6400(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cdff18; end: 104cdffe7; -[SCMagicCodeEntryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cdff18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710a28,0);
  _objc_storeStrong(param_1 + _DAT_112710a4c,0);
  _objc_storeStrong(param_1 + _DAT_112710a2c,0);
  _objc_storeStrong(param_1 + _DAT_112710a3c,0);
  _objc_storeStrong(param_1 + _DAT_112710a40,0);
  _objc_storeStrong(param_1 + _DAT_112710a48,0);
  _objc_storeStrong(param_1 + _DAT_112710a44,0);
  _objc_storeStrong(param_1 + _DAT_112710a38,0);
  _objc_storeStrong(param_1 + _DAT_112710a34,0);
  _objc_storeStrong(param_1 + _DAT_112710a30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710a24,0);
  return;
}



/* Entry: 104cdffe8; end: 104cdfff3; -[SCMagicCodeEntryViewControllerPresentingTransition transitionDuration:] */

undefined8 FUN_104cdffe8(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 104cdfff4; end: 104ce02df; -[SCMagicCodeEntryViewControllerPresentingTransition animateTransition:] */

void FUN_104cdfff4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ce02e0;
  puStack_98 = &UNK_110841f80;
  _objc_retain(puVar1);
  puStack_90 = puVar1;
  _objc_retain(param_3);
  ppuVar5 = &puStack_b0;
  uStack_88 = param_3;
  _objc_retainBlock();
  uVar3 = param_3;
  func_0x00010c06c000();
  if ((uVar3 & 1) == 0) {
    (*(code *)ppuVar5[2])(ppuVar5);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGAffineTransformMakeTranslation(&uStack_e0,0,in_d3);
    uStack_108 = uStack_d8;
    uStack_110 = uStack_e0;
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    func_0x00010c219960(uVar4,param_2,&uStack_110);
    _objc_release(uVar3);
    puVar6 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    func_0x00010c1d4bc0(0);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1,param_2,param_3);
    puStack_140 = puVar2;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x104ce030c;
    puStack_128 = &UNK_110841f80;
    _objc_retain(uVar4);
    uStack_120 = uVar4;
    _objc_retain(puVar1);
    puStack_168 = puVar2;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_104ce037c;
    puStack_150 = &UNK_110842508;
    puStack_118 = puVar1;
    _objc_retain(ppuVar5);
    ppuStack_148 = ppuVar5;
    func_0x00010bf03420(uVar7,puVar6,param_2,&puStack_140,&puStack_168);
    _objc_release(ppuStack_148);
    _objc_release(puStack_118);
    _objc_release(uStack_120);
  }
  _objc_release(ppuVar5);
  _objc_release(uStack_88);
  _objc_release(puStack_90);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce02e0; end: 104ce037b;  */

void FUN_104ce02e0(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 104ce037c; end: 104ce0387;  */

void FUN_104ce037c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ce0384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104ce0388; end: 104ce0393; -[SCMagicCodeEntryViewControllerDismissingTransition transitionDuration:] */

undefined8 FUN_104ce0388(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 104ce0394; end: 104ce062f; -[SCMagicCodeEntryViewControllerDismissingTransition animateTransition:] */

void FUN_104ce0394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c06c000();
  if ((int)uVar4 == 0) {
    func_0x00010c12c960(puVar2);
    uVar4 = param_3;
    func_0x00010c27ac00(param_3);
    func_0x00010bf43bc0(param_3,param_2,(uint)uVar4 ^ 1);
  }
  else {
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(uVar5,param_2,&uStack_80);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3ecccccd;
    func_0x00010c1d4bc0(0x3ecccccd);
    _objc_release(puVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1,param_2,param_3);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104ce0630;
    puStack_a0 = &UNK_110848ba8;
    _objc_retain(uVar5);
    uStack_98 = uVar5;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(puVar2);
    puStack_e8 = puVar3;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104ce06c4;
    puStack_d0 = &UNK_110848bd8;
    puStack_88 = puVar2;
    _objc_retain(puVar2);
    puStack_c8 = puVar2;
    _objc_retain(param_3);
    uStack_c0 = param_3;
    func_0x00010bf03420(uVar4,puVar1,param_2,&puStack_b8,&puStack_e8);
    _objc_release(uStack_c0);
    _objc_release(puStack_c8);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce0630; end: 104ce06fb;  */

void FUN_104ce0630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_d3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGAffineTransformMakeTranslation(&uStack_50,0,in_d3);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  return;
}



/* Entry: 104ce06fc; end: 104ce0717; -[SCMagicCodeEntryViewControllerTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_104ce06fc(void)

{
  _objc_opt_new(PTR_PTR_1126af2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ce0718; end: 104ce0733; -[SCMagicCodeEntryViewControllerTransition animationControllerForDismissedController:] */

void FUN_104ce0718(void)

{
  _objc_opt_new(PTR_PTR_1126af2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ce0734; end: 104ce07a7; -[SCResendMagicCodeTimer init] */

undefined1 * FUN_104ce0734(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3bd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ce07a8; end: 104ce07c3;  */

void FUN_104ce07a8(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ce07c4; end: 104ce07cb; -[SCResendMagicCodeTimer countdownObservable] */

void FUN_104ce07c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 104ce07cc; end: 104ce0817; -[SCResendMagicCodeTimer restart] */

/* WARNING: Possible PIC construction at 0x000104ce0800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ce0804) */

void FUN_104ce07cc(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0x1e;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_restartWithInterval__11262ca60,uVar1);
  return;
}



/* Entry: 104ce0818; end: 104ce08ef; -[SCResendMagicCodeTimer restartWithInterval:] */

void FUN_104ce0818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bec2c60();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104ce0884;
  puStack_38 = &UNK_110848c48;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  return;
}



/* Entry: 104ce08f0; end: 104ce0987; -[SCResendMagicCodeTimer _timerUpdated] */

void FUN_104ce08f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + -1;
  if (0 < lVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stop_11258e4c0);
  return;
}



/* Entry: 104ce0988; end: 104ce09df; -[SCResendMagicCodeTimer _stop] */

void FUN_104ce0988(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ce09e0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104ce09e0; end: 104ce0a13;  */

void FUN_104ce09e0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce0a14; end: 104ce0a43; -[SCResendMagicCodeTimer .cxx_destruct] */

void FUN_104ce0a14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ce0a44; end: 104ce0bbb; -[SCUnretryableErrorAlertPresenter presentUnretryableErrorAlertWithUIContainer:errorMessage:] */

void FUN_104ce0a44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_104ce4a50();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_4);
  _objc_release(puVar4);
  func_0x00010bf0c980(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104ce0bbc; end: 104ce0bc7;  */

void FUN_104ce0bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104ce0bc8; end: 104ce0c3b; -[SCLogInDefaultRepository initWithPreferences:] */

undefined1 * FUN_104ce0bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3be0;
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



/* Entry: 104ce0c3c; end: 104ce0c43; -[SCLogInDefaultRepository lastLoginByPhoneNumber] */

void FUN_104ce0c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c089450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lastLoginByPhoneNumber_1125fff20);
  return;
}



/* Entry: 104ce0c44; end: 104ce0c4b; -[SCLogInDefaultRepository setLastLoginByPhoneNumber:] */

void FUN_104ce0c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLastLoginByPhoneNumber__11264ba80);
  return;
}



/* Entry: 104ce0c4c; end: 104ce0c53; -[SCLogInDefaultRepository isAutoRetryLoginExposedWithExperimentId:] */

void FUN_104ce0c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isAutoRetryLoginExposedWithExper_1125f8d40);
  return;
}



/* Entry: 104ce0c54; end: 104ce0c5b; -[SCLogInDefaultRepository setAutoRetryLoginExposedWithExperimentId:] */

void FUN_104ce0c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAutoRetryLoginExposedWithExpe_112638de0);
  return;
}



/* Entry: 104ce0c5c; end: 104ce0c67; -[SCLogInDefaultRepository .cxx_destruct] */

void FUN_104ce0c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ce0c68; end: 104ce0cb3; -[SCPreferences setLastLoginByPhoneNumber:] */

void FUN_104ce0c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110daea78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce0cb4; end: 104ce0d2b; -[SCPreferences lastLoginByPhoneNumber] */

ulong FUN_104ce0cb4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110daea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 104ce0d2c; end: 104ce0dfb; -[SCPreferences isAutoRetryLoginExposedWithExperimentId:] */

ulong FUN_104ce0d2c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar5 = 1;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daea98;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daea98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    uVar1 = param_1;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    uVar5 = uVar1;
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 104ce0dfc; end: 104ce0e93; -[SCPreferences setAutoRetryLoginExposedWithExperimentId:] */

void FUN_104ce0dfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daea98;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daea98,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1,param_2,puVar3,ppuVar2);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ce0e94; end: 104ce0ebb;  */

void FUN_104ce0e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110daeab8);
  return;
}



/* Entry: 104ce0ebc; end: 104ce154f; -[SCLogInUIRouteActions initWithUIContainer:logInServices:networkConnectivityMonitor:recoverPasswordScopeExposer:privacyPolicyViewFactory:channelVerificationScopeExposer:odlvScopeExposer:twoFAScopeExposer:countryCodePickerScopeExposer:countryCodePickerScopeServices:webBrowsingScopeExposer:inAppAppealScopeExposer:passkeyLoginScopeExposer:transitionMomentLogger:loginLogger:magicCodeLogger:multiSourceCountryProvider:logInInterceptorsCheck:logInRepository:applicationLifecycleEvents:circumstanceEngine:unretryableErrorAlertPresenter:isFromPhoneEmailFirstPage:passkeyLoginEnabled:currentPageTracker:oAuthLoginABRetriever:cos:] */

undefined8 *
FUN_104ce0ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain();
  _objc_retain(param_27);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126e3be8;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[5];
    puVar2[5] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[6];
    puVar2[6] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[7];
    puVar2[7] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[8];
    puVar2[8] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[9];
    puVar2[9] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[10];
    puVar2[10] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[4];
    puVar2[4] = param_22;
    _objc_release(uVar3);
    uVar3 = param_27;
    _objc_retainBlock();
    uVar6 = puVar2[0x1f];
    puVar2[0x1f] = uVar3;
    _objc_release(uVar6);
    _objc_retain(param_30);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_30;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_23;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126af2c0;
    func_0x00010c290700(PTR_PTR_1126af2c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_23;
    func_0x00010bf1f440();
    _objc_release(puVar4);
    ppuVar1 = &PTR_PTR_1126af2c8;
    if ((int)uVar3 == 0) {
      ppuVar1 = &PTR_PTR_1126af108;
    }
    puVar5 = *ppuVar1;
    _objc_opt_new();
    func_0x00010bf0c980(puVar2[1]);
    _objc_retain(puVar5);
    uVar3 = puVar2[2];
    puVar2[2] = puVar5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_7;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0x1e) = param_25;
    _objc_retain(param_29);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_29;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar5);
  }
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104ce1550; end: 104ce158f;  */

void FUN_104ce1550(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf02c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ce1590; end: 104ce19b7; -[SCLogInUIRouteActions showCredentialsEntryScreenV10:usernameOrEmail:phoneNumber:password:reactivationStatus:reactivationAccountIdentifier:enteredPageBefore:] */

void FUN_104ce1590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126af2d0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126af2d8;
  _objc_alloc(PTR_PTR_1126af2d8);
  uVar5 = param_5;
  func_0x00010c0cf4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010bf53280(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf536a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c420(puVar2);
  lVar3 = param_1;
  func_0x00010be21780(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af2e0;
  func_0x00010bf5bf80(PTR_PTR_1126af2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035a00();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126af2e8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08d700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be21780();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c05f7a0(puVar2);
  _objc_release(lVar3);
  _objc_release(uVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x108);
  puVar4 = PTR_PTR_1126af008;
  func_0x00010c0f5460(PTR_PTR_1126af008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c263200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar4;
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bef76a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c150e00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af2f0;
  _objc_alloc(PTR_PTR_1126af2f0);
  uVar5 = uVar6;
  func_0x00010c150e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042420(puVar4);
  _objc_release(uVar5);
  _objc_storeWeak(param_1 + 200,puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce19b8; end: 104ce1a03;  */

long FUN_104ce19b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0xf8);
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104ce1a04; end: 104ce1a8f; -[SCLogInUIRouteActions showChannelVerification:verification:] */

void FUN_104ce1a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af2f8;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b1e0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce1a90; end: 104ce1ac7; -[SCLogInUIRouteActions removeChannelVerification] */

void FUN_104ce1a90(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce1ac8; end: 104ce1b53; -[SCLogInUIRouteActions showOdlv:challenge:] */

void FUN_104ce1ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af300;
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b020();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce1b54; end: 104ce1b8b; -[SCLogInUIRouteActions removeOdlv] */

void FUN_104ce1b54(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce1b8c; end: 104ce1c17; -[SCLogInUIRouteActions showTwoFAVerification:delegate:] */

void FUN_104ce1b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af308;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b060();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce1c18; end: 104ce1c4f; -[SCLogInUIRouteActions removeTwoFAVerification] */

void FUN_104ce1c18(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce1c50; end: 104ce1e07; -[SCLogInUIRouteActions showWebBrowserWithUrl:browsingDelegate:] */

void FUN_104ce1c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_4);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104ce1e08;
  puStack_60 = &UNK_110842308;
  uVar4 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&puStack_78,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf22ba0(puVar3,param_2,puVar2,puVar1,uVar4,param_4,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x98),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 104ce1e08; end: 104ce1e1f;  */

void FUN_104ce1e08(long param_1,long param_2,long param_3)

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


