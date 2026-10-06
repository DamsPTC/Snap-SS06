/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b360dc; end: 106b36163; -[GenericSettingsPasswordViewController _didTapShowHidePasswordButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b360dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275885c;
  *(byte *)(param_1 + lVar3) = *(byte *)(param_1 + lVar3) ^ 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275884c);
  lVar1 = param_1;
  func_0x00010beb95a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758844),PTR_s_setSecureTextEntry__11265c0a8,
             (*(byte *)(param_1 + lVar3) ^ 0xff) & 1);
  return;
}



/* Entry: 106b36164; end: 106b361a7; -[GenericSettingsPasswordViewController _showHidePasswordButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36164(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e66ad8;
  if (*(char *)(param_1 + _DAT_11275885c) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e74658;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b361a8; end: 106b3630b; -[GenericSettingsPasswordViewController _popToChangePasswordReauthViewController] */

void FUN_106b361a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_106b362cc:
      _objc_release(lVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      puVar4 = PTR_PTR_1126d0a40;
      _objc_opt_class(PTR_PTR_1126d0a40);
      _objc_opt_isKindOfClass(uVar6,puVar4);
      if ((uVar6 & 1) != 0) {
        func_0x00010c0d66a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1039c0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(param_1);
        goto LAB_106b362cc;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106b3630c; end: 106b3630f; -[GenericSettingsPasswordViewController didChangePasswordSuccessfully] */

void FUN_106b3630c(void)

{
  return;
}



/* Entry: 106b36310; end: 106b36313; -[GenericSettingsPasswordViewController didExitPasswordSettingsView] */

void FUN_106b36310(void)

{
  return;
}



/* Entry: 106b36314; end: 106b36323; -[GenericSettingsPasswordViewController descriptionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b36314(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758840);
}



/* Entry: 106b36324; end: 106b36363; -[GenericSettingsPasswordViewController setDescriptionLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758840;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b36364; end: 106b36373; -[GenericSettingsPasswordViewController passwordTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b36364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758844);
}



/* Entry: 106b36374; end: 106b363b3; -[GenericSettingsPasswordViewController setPasswordTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758844;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b363b4; end: 106b363c3; -[GenericSettingsPasswordViewController showHidePasswordButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b363b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275884c);
}



/* Entry: 106b363c4; end: 106b36403; -[GenericSettingsPasswordViewController setShowHidePasswordButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b363c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275884c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b36404; end: 106b36413; -[GenericSettingsPasswordViewController passwordFieldContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b36404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758848);
}



/* Entry: 106b36414; end: 106b36453; -[GenericSettingsPasswordViewController setPasswordFieldContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758848;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b36454; end: 106b36463; -[GenericSettingsPasswordViewController continueBarActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b36454(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758858);
}



/* Entry: 106b36464; end: 106b364a3; -[GenericSettingsPasswordViewController setContinueBarActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758858;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b364a4; end: 106b364b3; -[GenericSettingsPasswordViewController continueBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b364a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758854);
}



/* Entry: 106b364b4; end: 106b364f3; -[GenericSettingsPasswordViewController setContinueBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b364b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758854;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b364f4; end: 106b36503; -[GenericSettingsPasswordViewController forgotPasswordButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b364f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758850);
}



/* Entry: 106b36504; end: 106b36543; -[GenericSettingsPasswordViewController setForgotPasswordButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758850;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b36544; end: 106b36653; -[GenericSettingsPasswordViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b36544(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758850,0);
  _objc_storeStrong(param_1 + _DAT_112758854,0);
  _objc_storeStrong(param_1 + _DAT_112758858,0);
  _objc_storeStrong(param_1 + _DAT_112758848,0);
  _objc_storeStrong(param_1 + _DAT_11275884c,0);
  _objc_storeStrong(param_1 + _DAT_112758844,0);
  _objc_storeStrong(param_1 + _DAT_112758840,0);
  _objc_storeStrong(param_1 + _DAT_11275883c,0);
  _objc_storeStrong(param_1 + _DAT_112758838,0);
  _objc_storeStrong(param_1 + _DAT_112758834,0);
  _objc_storeStrong(param_1 + _DAT_112758830,0);
  _objc_storeStrong(param_1 + _DAT_11275882c,0);
  _objc_storeStrong(param_1 + _DAT_112758828,0);
  _objc_storeStrong(param_1 + _DAT_112758824,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758820,0);
  return;
}



/* Entry: 106b36654; end: 106b37297; -[PasswordSettingsView initWithFrame:delegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b36654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = PTR_PTR_1126f5050;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar10 = (long)_DAT_112758860;
    _objc_storeWeak((long)puVar1 + lVar10,param_7);
    uVar7 = param_8;
    func_0x00010bf1f440();
    lVar9 = (long)_DAT_112758864;
    *(char *)((long)puVar1 + lVar9) = (char)uVar7;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112758868;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar8));
    ppuVar3 = &PTR____CFConstantStringClassReference_110e74698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74698,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(ppuVar3);
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af260;
    _objc_alloc(PTR_PTR_1126af260);
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar11,uVar12,uVar13);
    func_0x00010c1e60e0(puVar1);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9a00();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0c0();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234280();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e746b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e746b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(puVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar4);
    lVar8 = (long)puVar1 + lVar10;
    _objc_loadWeakRetained(lVar8);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar4);
    _objc_release(lVar8);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e746d8;
    func_0x00010c160fc0();
    _objc_release(puVar4);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e746d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    puVar2 = PTR_PTR_1126af260;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar11,uVar12,uVar13);
    func_0x00010c180b40(puVar1);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf47fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9a00();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf47fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0c0();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf47fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1102e0();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf47fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234280();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar5 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = puVar1;
    func_0x00010bf47fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e746f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e746f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(puVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar4);
    lVar10 = (long)puVar1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar4);
    _objc_release(lVar10);
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e74718;
    func_0x00010c160fc0();
    _objc_release(puVar4);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74718,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    if (*(char *)((long)puVar1 + lVar9) == '\x01') {
      puVar4 = puVar1;
      func_0x00010bf47fc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c26bc20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213240();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar8 = (long)_DAT_11275886c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292ae0();
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010c0bbfc0(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010befbb60();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d0a48;
    _objc_alloc();
    func_0x00010c050b20();
    lVar8 = (long)_DAT_112758870;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar6;
    _objc_release(uVar7);
    func_0x00010befbb60(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c26bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee2a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c11cb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c26bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee2c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (*(char *)((long)puVar1 + lVar9) == '\x01') {
      puVar4 = puVar1;
      func_0x00010c11cb20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c26bc20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213240();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    func_0x00010be393a0(puVar1);
    func_0x00010bf589e0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 106b37298; end: 106b375b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b37298(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112758868);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b375b4; end: 106b37737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b375b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758868);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b37738; end: 106b3786f;  */

void FUN_106b37738(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11cb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b37870; end: 106b378cf;  */

void FUN_106b37870(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b378d0; end: 106b379eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b378d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b379ec; end: 106b37aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b379ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275886c;
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b37aec; end: 106b37d53; -[PasswordSettingsView _init1TLOptInCheckbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b37aec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af088;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar11 = (long)_DAT_112758874;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  lVar2 = param_1 + _DAT_112758860;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar11));
  _objc_release(lVar2);
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112758878);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar2);
  uVar6 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106b37d54;
  puStack_d8 = PTR_PTR_1126f5050;
  uStack_e0 = uVar6;
  puStack_d0 = puVar1;
  uStack_c8 = uVar4;
  uStack_c0 = uVar10;
  lStack_b8 = lVar2;
  uStack_b0 = uVar3;
  uStack_a8 = uVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_e0,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar10 = uVar6;
  func_0x00010c11cb20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010bf47fc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b37d54; end: 106b37e77; -[PasswordSettingsView traitCollectionDidChange:] */

void FUN_106b37d54(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5050;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_1;
  func_0x00010c11cb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010bf47fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b37e78; end: 106b380bf; -[PasswordSettingsView createSaveBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b37e78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275887c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e72db8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e72db8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar3);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d0a48;
  _objc_alloc();
  func_0x00010c050b20();
  lVar4 = (long)_DAT_112758880;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  func_0x00010c0bbe40(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 106b380c0; end: 106b382af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b380c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b382b0; end: 106b382e3; -[PasswordSettingsView saveBarPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b382b0(long param_1)

{
  param_1 = param_1 + _DAT_112758860;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4fae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b382e4; end: 106b38347; -[PasswordSettingsView setIndicatorWithMessage:color:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b382e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275886c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_4);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b38348; end: 106b38357; -[PasswordSettingsView setHeaderInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758868),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b38358; end: 106b383a7; -[PasswordSettingsView setPasswordError:] */

void FUN_106b38358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c11cb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b383a8; end: 106b383f7; -[PasswordSettingsView setPasswordConfirmError:] */

void FUN_106b383a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf47fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b383f8; end: 106b3840b; -[PasswordSettingsView setContinueEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b383f8(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275887c),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 106b3840c; end: 106b38423; -[PasswordSettingsView setStrengthIndicatorAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3840c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112758870),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758870),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106b38424; end: 106b3843b; -[PasswordSettingsView setContinueIndicatorAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38424(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112758880),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758880),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106b3843c; end: 106b38523; -[PasswordSettingsView inputKeyboardWillChangeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3843c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar1);
  _objc_release(param_7);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11275887c);
  func_0x00010c14df20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010c1d0bc0(-param_1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b38524; end: 106b38533; -[PasswordSettingsView pwTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b38524(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758884);
}



/* Entry: 106b38534; end: 106b38573; -[PasswordSettingsView setPwTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758884;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b38574; end: 106b38583; -[PasswordSettingsView confirmPwTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b38574(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758878);
}



/* Entry: 106b38584; end: 106b385c3; -[PasswordSettingsView setConfirmPwTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758878;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b385c4; end: 106b3866f; -[PasswordSettingsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b385c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758878,0);
  _objc_storeStrong(param_1 + _DAT_112758884,0);
  _objc_storeStrong(param_1 + _DAT_112758874,0);
  _objc_storeStrong(param_1 + _DAT_112758880,0);
  _objc_storeStrong(param_1 + _DAT_11275887c,0);
  _objc_storeStrong(param_1 + _DAT_112758870,0);
  _objc_storeStrong(param_1 + _DAT_11275886c,0);
  _objc_storeStrong(param_1 + _DAT_112758868,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758860);
  return;
}



/* Entry: 106b38670; end: 106b38677; -[PasswordSettingsViewController pageViewName] */

undefined8 FUN_106b38670(void)

{
  return 0xbd;
}



/* Entry: 106b38678; end: 106b38687; -[PasswordSettingsViewController getTitle] */

void FUN_106b38678(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74738;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74738,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b38688; end: 106b387b7; -[PasswordSettingsViewController initWithPasswordNetworkRequester:settingsEventLogger:usernameProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b38688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f5058;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11275888c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758890;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758894;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758898;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    func_0x00010be3a080(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b387b8; end: 106b38927; -[PasswordSettingsViewController initWithPasswordNetworkRequester:settingsEventLogger:oneTapLoginRegistry:usernameProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b387b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f5058;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11275888c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275889c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127588a0) = 1;
    lVar3 = (long)_DAT_112758890;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758894;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758898;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010be3a080(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b38928; end: 106b3897f; -[PasswordSettingsViewController _initObserver] */

void FUN_106b38928(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b38980; end: 106b38acf; -[PasswordSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38980(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5058;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR_PTR_1126d0a50;
  _objc_alloc();
  func_0x00010c0142e0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_1127588a4;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1e6100(param_1);
  lVar3 = param_1;
  func_0x00010be3f0c0();
  if ((int)lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e74758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a78a0(uVar2);
    _objc_release(ppuVar4);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106b38ad0; end: 106b38c27;  */

void FUN_106b38ad0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b38c28; end: 106b38c47; -[PasswordSettingsViewController _isComplexityV2Enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758898),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e74778,0,0);
  return;
}



/* Entry: 106b38c48; end: 106b38c7b; -[PasswordSettingsViewController viewWillAppear:] */

void FUN_106b38c48(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5058;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 106b38c7c; end: 106b39033; -[PasswordSettingsViewController textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b38c7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = (long)_DAT_1127588a4;
  lVar12 = *(long *)(param_1 + lVar13);
  _objc_retain(param_3);
  func_0x00010c11cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar12);
  if (param_3 == lVar12) {
    func_0x00010c1e6100(param_1);
    func_0x00010c1ac100(param_1);
    func_0x00010c1d9740(*(undefined8 *)(param_1 + lVar13));
    func_0x00010c1d9720(*(undefined8 *)(param_1 + lVar13));
    uVar1 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf47fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar1);
  }
  uVar2 = *(ulong *)(param_1 + lVar13);
  func_0x00010bf47fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c11cb20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + lVar13);
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c08fa60();
    uVar8 = *(ulong *)(param_1 + lVar13);
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c08fa60();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar7 <= uVar11) {
      uVar1 = *(undefined8 *)(param_1 + lVar13);
      ppuVar10 = &PTR____CFConstantStringClassReference_110e74798;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74798,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9720(uVar1);
      _objc_release(ppuVar10);
      uVar1 = 0;
      goto LAB_106b39010;
    }
  }
  else {
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar12 = param_1;
  func_0x00010c11cb40();
  if ((int)lVar12 == 0) {
LAB_106b38f78:
    uVar9 = *(ulong *)(param_1 + lVar13);
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08fa60();
    uVar11 = *(ulong *)(param_1 + lVar13);
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar9);
    uVar1 = 0;
    uVar4 = 0;
    if (uVar5 <= uVar7) goto LAB_106b39010;
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar13);
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08fa60();
    if (uVar5 < 8) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_106b38f78;
    }
    uVar9 = *(ulong *)(param_1 + lVar13);
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c11cb20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar7 & 1) == 0) goto LAB_106b38f78;
    uVar4 = 1;
  }
  uVar1 = uVar4;
  func_0x00010c1d9720(*(undefined8 *)(param_1 + lVar13));
LAB_106b39010:
                    /* WARNING: Could not recover jumptable at 0x00010c1837f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar13),PTR_s_setContinueEnabled__11263e818,uVar1);
  return;
}



/* Entry: 106b39034; end: 106b39153; -[PasswordSettingsViewController setIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  ppuVar2 = (undefined **)PTR_PTR_1126d0a30;
  _objc_retain(param_3);
  func_0x00010c25cb60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126d0a30;
  func_0x00010c25cb40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1ac180(*(undefined8 *)(param_1 + _DAT_1127588a4),param_2,ppuVar1,puVar6);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106b39154; end: 106b3924f; -[PasswordSettingsViewController textViewShouldBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b39154(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127588a4;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c11cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
LAB_106b39220:
    uVar5 = 1;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010bf47fc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == lVar1) {
      lVar2 = *(long *)(param_1 + lVar6);
      func_0x00010c11cb20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        uVar4 = param_1;
        func_0x00010c11cb40();
        if ((uVar4 & 1) != 0) goto LAB_106b39220;
        func_0x00010bf38340(param_1);
      }
    }
    else {
      _objc_release(lVar1);
    }
    uVar5 = 0;
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106b39250; end: 106b392df; -[PasswordSettingsViewController textViewShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b39250(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127588a4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c11cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf47fc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar2);
  }
  else {
    func_0x00010c13a0e0(param_3);
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 106b392e0; end: 106b392e3; -[PasswordSettingsViewController continueButtonClicked] */

void FUN_106b392e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_changePassword_1125aad88);
  return;
}



/* Entry: 106b392e4; end: 106b392f3; -[PasswordSettingsViewController inputKeyboardWillChangeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b392e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127588a4),PTR_s_inputKeyboardWillChangeFrame__1125f7110
            );
  return;
}



/* Entry: 106b392f4; end: 106b39323; -[PasswordSettingsViewController leftButtonPressed] */

void FUN_106b392f4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b39324; end: 106b39333; -[PasswordSettingsViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39324(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127588a0) = param_3;
  return;
}



/* Entry: 106b39334; end: 106b39363; -[PasswordSettingsViewController backButtonPressed:] */

void FUN_106b39334(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf734a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b39364; end: 106b39373; -[PasswordSettingsViewController _changePassword:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275888c),
             PTR_s_changePassword_successBlock_fail_1125aad98);
  return;
}



/* Entry: 106b39374; end: 106b39383; -[PasswordSettingsViewController _getPasswordStrength:quickCheck:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275888c),
             PTR_s_getPasswordStrength_quickCheck_s_1125cfbe8);
  return;
}



/* Entry: 106b39384; end: 106b393d7; +[PasswordSettingsViewController strengthMessages] */

void FUN_106b39384(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c69d0 != -1) {
    func_0x00010002a2fc(0x1136c69d0,&PTR___NSConcreteGlobalBlock_110962060);
  }
  uVar1 = uRam00000001136c69c8;
  _objc_retain(uRam00000001136c69c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b393d8; end: 106b3952f;  */

void FUN_106b393d8(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e747d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e747d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e747f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e747f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e74838;
  ppuVar4 = ppuVar5;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74838,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74838,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c69c8;
  puRam00000001136c69c8 = puVar6;
  _objc_release(uVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c69e0 != -1) {
    func_0x00010002a2fc(0x1136c69e0,&PTR___NSConcreteGlobalBlock_110962080);
  }
  uVar1 = uRam00000001136c69d8;
  _objc_retain(uRam00000001136c69d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b39530; end: 106b39583; +[PasswordSettingsViewController strengthColors] */

void FUN_106b39530(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c69e0 != -1) {
    func_0x00010002a2fc(0x1136c69e0,&PTR___NSConcreteGlobalBlock_110962080);
  }
  uVar1 = uRam00000001136c69d8;
  _objc_retain(uRam00000001136c69d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b39584; end: 106b396cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39584(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  char cVar19;
  byte bVar20;
  char cVar21;
  byte bVar22;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = puRam00000001136c69d8;
  puRam00000001136c69d8 = puVar10;
  _objc_release(uVar17);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar6;
  func_0x00010be3f0c0();
  lVar16 = (long)_DAT_1127588a4;
  if ((int)puVar7 != 0) {
    uVar11 = *(ulong *)(puVar6 + lVar16);
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar12;
    func_0x00010c08fa60();
    if (uVar18 == 0) {
      _objc_release(uVar12);
      _objc_release(uVar11);
    }
    else {
      uVar18 = 0;
      cVar19 = '\0';
      bVar20 = 0;
      bVar22 = 0;
      cVar21 = '\0';
      do {
        uVar13 = uVar12;
        func_0x00010bf35920();
        iVar5 = (int)uVar13;
        bVar2 = bVar22;
        cVar3 = '\x01';
        bVar1 = bVar20;
        if (0x19 < iVar5 - 0x41U) {
          bVar2 = iVar5 - 0x30U < 10 | bVar22;
          cVar3 = cVar21;
          bVar1 = 9 < iVar5 - 0x30U | bVar20;
        }
        cVar4 = '\x01';
        if (0x19 < iVar5 - 0x61U) {
          cVar4 = cVar19;
          bVar20 = bVar1;
          bVar22 = bVar2;
          cVar21 = cVar3;
        }
        cVar19 = cVar4;
        uVar18 = uVar18 + 1;
        uVar13 = uVar12;
        func_0x00010c08fa60();
      } while (uVar18 < uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      if (2 < (byte)(bVar22 + cVar21 + bVar20 + cVar19)) goto LAB_106b397e8;
    }
    func_0x00010c1e6100(puVar6);
    func_0x00010c1ac100(puVar6);
    uVar17 = *(undefined8 *)(puVar6 + lVar16);
    ppuVar15 = &PTR____CFConstantStringClassReference_110e74878;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74878,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9740(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar15);
    return;
  }
LAB_106b397e8:
  func_0x00010c20e700(*(undefined8 *)(puVar6 + lVar16));
  _objc_initWeak(auStack_f8,puVar6);
  uVar14 = *(undefined8 *)(puVar6 + lVar16);
  func_0x00010c11cb20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106b39998;
  puStack_108 = &UNK_1108d91c0;
  _objc_copyWeak(auStack_100,auStack_f8);
  _objc_copyWeak(auStack_128,auStack_f8);
  func_0x00010be21600(puVar6);
  _objc_release(uVar17);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  return;
}



/* Entry: 106b396d0; end: 106b39997; -[PasswordSettingsViewController checkPasswordStrength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b396d0(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar6 = param_1;
  func_0x00010be3f0c0();
  lVar14 = (long)_DAT_1127588a4;
  if ((int)lVar6 != 0) {
    uVar7 = *(ulong *)(param_1 + lVar14);
    func_0x00010c11cb20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010c08fa60();
    if (uVar13 == 0) {
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      uVar13 = 0;
      cVar15 = '\0';
      bVar16 = 0;
      bVar18 = 0;
      cVar17 = '\0';
      do {
        uVar9 = uVar8;
        func_0x00010bf35920();
        iVar5 = (int)uVar9;
        bVar2 = bVar18;
        cVar3 = '\x01';
        bVar1 = bVar16;
        if (0x19 < iVar5 - 0x41U) {
          bVar2 = iVar5 - 0x30U < 10 | bVar18;
          cVar3 = cVar17;
          bVar1 = 9 < iVar5 - 0x30U | bVar16;
        }
        cVar4 = '\x01';
        if (0x19 < iVar5 - 0x61U) {
          cVar4 = cVar15;
          bVar16 = bVar1;
          bVar18 = bVar2;
          cVar17 = cVar3;
        }
        cVar15 = cVar4;
        uVar13 = uVar13 + 1;
        uVar9 = uVar8;
        func_0x00010c08fa60();
      } while (uVar13 < uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      if (2 < (byte)(bVar18 + cVar17 + bVar16 + cVar15)) goto LAB_106b397e8;
    }
    func_0x00010c1e6100(param_1);
    func_0x00010c1ac100(param_1);
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    ppuVar11 = &PTR____CFConstantStringClassReference_110e74878;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74878,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9740(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
    return;
  }
LAB_106b397e8:
  func_0x00010c20e700(*(undefined8 *)(param_1 + lVar14));
  _objc_initWeak(auStack_78,param_1);
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c11cb20(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b39998;
  puStack_88 = &UNK_1108d91c0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010be21600(param_1);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106b39998; end: 106b39a07;  */

void FUN_106b39998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21640();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b39a08; end: 106b39a33;  */

void FUN_106b39a08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b39a34; end: 106b39b43; -[PasswordSettingsViewController _getPasswordStrengthDidSucceed:savable:message:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39a34(long param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar4 = (long)_DAT_1127588a4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c20e700(uVar3);
  func_0x00010c1ac100(param_1);
  _objc_release(param_3);
  ppuVar2 = param_5;
  if (param_4 == 0) {
    ppuVar1 = param_5;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e74898;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74898,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
    }
    func_0x00010c1ac100(param_1);
    func_0x00010c1d9740(*(undefined8 *)(param_1 + lVar4));
  }
  else {
    func_0x00010c1e6100(param_1);
    func_0x00010c1d9740(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1d9720(*(undefined8 *)(param_1 + lVar4));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf47fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106b39b44; end: 106b39b7b; -[PasswordSettingsViewController _getPasswordStrengthDidFail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39b44(long param_1,undefined8 param_2)

{
  func_0x00010c20e700(*(undefined8 *)(param_1 + _DAT_1127588a4),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1e6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPwVerifiedStrong__112657268,1);
  return;
}



/* Entry: 106b39b7c; end: 106b39cf3; -[PasswordSettingsViewController changePassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39b7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
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
  
  lVar6 = (long)_DAT_1127588a4;
  func_0x00010c183800(*(undefined8 *)(param_1 + lVar6),param_2,1);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b39cf4;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar2 = &puStack_90;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106b39d20;
  puStack_a0 = &UNK_110863c68;
  _objc_copyWeak(auStack_98,auStack_68);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c11cb20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc9c0(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106b39cf4; end: 106b39d1f;  */

void FUN_106b39cf4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b39d20; end: 106b39d77;  */

void FUN_106b39d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddc9e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b39d78; end: 106b39ec7; -[PasswordSettingsViewController _changePasswordSuccessCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39d78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    puVar3 = PTR_PTR_1126d0a58;
    _objc_alloc(PTR_PTR_1126d0a58);
    func_0x00010c00a2c0();
    func_0x00010c222380(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010bed23a0(param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112758890);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2bc0();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b7c88;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112758894);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127588a4);
  func_0x00010c11cb20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb440(puVar3,param_2,uVar4,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106b39ec8; end: 106b39f63; -[PasswordSettingsViewController _update1TLOptInStatusIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39ec8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11275889c);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06fd40();
    if ((uint)*(byte *)(param_1 + _DAT_1127588a0) != (uint)lVar2) {
      if (*(byte *)(param_1 + _DAT_1127588a0) == 0) {
        func_0x00010c0ebf40(lVar1,param_2,7);
      }
      else {
        func_0x00010c0ebd80(lVar1,param_2,1,7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010bfa4d60(lVar1,param_2,&PTR___NSConcreteGlobalBlock_1109620a0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106b39f64; end: 106b39f67;  */

void FUN_106b39f64(void)

{
  return;
}



/* Entry: 106b39f68; end: 106b3a13b; -[PasswordSettingsViewController _changePasswordFailureCallback:inputError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b39f68(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127588a4;
  func_0x00010c183800(*(undefined8 *)(param_1 + lVar3),param_2,0);
  if ((param_3 & 1) == 0) {
    func_0x00010c1ac100(param_1,param_2,0);
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c11cb20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0();
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          puVar4 = *(undefined **)(lStack_128 + lVar6 * 8);
          _objc_opt_class();
          puVar2 = PTR_PTR_1126d0a40;
          _objc_opt_class();
          if (puVar4 == puVar2) {
            func_0x00010c0d66a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1039c0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(param_1);
            goto LAB_106b3a0f4;
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar1 != 0);
    }
  }
LAB_106b3a0f4:
  _objc_release(lVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_4 + _DAT_1127588a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106b3a13c; end: 106b3a15b; -[PasswordSettingsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a13c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127588a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b3a15c; end: 106b3a16f; -[PasswordSettingsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a15c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127588a8,param_3);
  return;
}



/* Entry: 106b3a170; end: 106b3a17f; -[PasswordSettingsViewController pwVerifiedStrong] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b3a170(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112758888);
}



/* Entry: 106b3a180; end: 106b3a18f; -[PasswordSettingsViewController setPwVerifiedStrong:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a180(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112758888) = param_3;
  return;
}



/* Entry: 106b3a190; end: 106b3a21b; -[PasswordSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a190(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127588a8);
  _objc_storeStrong(param_1 + _DAT_112758898,0);
  _objc_storeStrong(param_1 + _DAT_112758894,0);
  _objc_storeStrong(param_1 + _DAT_112758890,0);
  _objc_storeStrong(param_1 + _DAT_11275889c,0);
  _objc_storeStrong(param_1 + _DAT_11275888c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127588a4,0);
  return;
}



/* Entry: 106b3a21c; end: 106b3a6cb; -[SCLegacyPasswordSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a21c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar19 = param_1 + _DAT_1127588ac;
  _objc_loadWeakRetained();
  lVar1 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106bfd96c();
  _objc_release(lVar1);
  _objc_release(lVar19);
  if ((int)lVar2 == 0) {
    puVar3 = PTR_PTR_1126d0a40;
    _objc_alloc(PTR_PTR_1126d0a40);
    if (param_1 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = param_1 + _DAT_1127588b4;
      _objc_loadWeakRetained();
    }
    lVar1 = lVar19;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x000106b3a738();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf8d9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x000106b3a738();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x000106b3a714();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08d7c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = param_1 + _DAT_1127588c0;
      _objc_loadWeakRetained();
    }
    lVar9 = lVar20;
    func_0x00010c122000();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = param_1 + _DAT_1127588c8;
      _objc_loadWeakRetained();
    }
    lVar10 = lVar21;
    func_0x00010c154a40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x000106b3a6f0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c2280e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    FUN_106b3a6cc();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c0f54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x000106b3a780();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined8 *)(param_1 + _DAT_1127588d0);
    }
    _objc_retain(uVar22);
    lVar17 = param_1;
    func_0x000106b3a75c();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d880(puVar3,param_2,lVar1,lVar4,lVar6,lVar8,lVar9,lVar10,lVar12,lVar14,lVar16,
                        uVar22,lVar18);
    _objc_release(uVar22);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar21);
    _objc_release(lVar9);
    _objc_release(lVar20);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar19);
  }
  else {
    puVar3 = PTR_PTR_1126d0a30;
    _objc_alloc(PTR_PTR_1126d0a30);
    lVar19 = param_1;
    FUN_106b3a6cc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar19;
    func_0x00010c0f54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x000106b3a6f0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c2280e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x000106b3a714(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x000106b3a738(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x000106b3a75c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar20;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c034540(puVar3,param_2,lVar1,lVar4,lVar6,lVar8,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar20);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar19);
    func_0x00010c18b5e0(puVar3,param_2,param_1);
  }
  func_0x000106b3a780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar19);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b3a6cc; end: 106b3a7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a6cc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127588c4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b3a7a4; end: 106b3a82b; -[SCLegacyPasswordSettingsEntryPoint end] */

void FUN_106b3a7a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x000106b3a780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f5060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b3a82c; end: 106b3a873; -[SCLegacyPasswordSettingsEntryPoint didChangePasswordSuccessfully] */

void FUN_106b3a82c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000106b3a780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5540();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b3a874; end: 106b3a8bb; -[SCLegacyPasswordSettingsEntryPoint didExitPasswordSettingsView] */

void FUN_106b3a874(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000106b3a780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5560();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b3a8bc; end: 106b3a957; -[SCLegacyPasswordSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3a8bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127588d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127588cc);
  _objc_destroyWeak(param_1 + _DAT_1127588ac);
  _objc_destroyWeak(param_1 + _DAT_1127588c8);
  _objc_destroyWeak(param_1 + _DAT_1127588c4);
  _objc_destroyWeak(param_1 + _DAT_1127588c0);
  _objc_destroyWeak(param_1 + _DAT_1127588bc);
  _objc_destroyWeak(param_1 + _DAT_1127588b8);
  _objc_destroyWeak(param_1 + _DAT_1127588b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127588b0);
  return;
}



/* Entry: 106b3a958; end: 106b3aa77; -[SCSettingsPasswordReauthViewController initWithUserSession:emailInfoProvider:delegate:reauthenticationService:searchabilityService:settingsEventLogger:passwordNetworkRequester:userPhoneVerificationScopeExposer:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b3a958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f5068;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserSession_emailInfoPro_11252e928,param_3,param_4,0,
                      param_7,param_8,param_9,param_10,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127588d4,param_5);
    lVar3 = (long)_DAT_1127588d8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127588dc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106b3aa78; end: 106b3aaef; -[SCSettingsPasswordReauthViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3aa78(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5068;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  lVar1 = param_1 + _DAT_1127588d4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c230c80();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010bfe1f40(param_1);
  }
  return;
}



/* Entry: 106b3aaf0; end: 106b3aaf7; -[SCSettingsPasswordReauthViewController pageViewName] */

undefined8 FUN_106b3aaf0(void)

{
  return 0x11c;
}



/* Entry: 106b3aaf8; end: 106b3ab3f; -[SCSettingsPasswordReauthViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3aaf8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127588d4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfca320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106b3ab40; end: 106b3ab4f; -[SCSettingsPasswordReauthViewController getInfo] */

void FUN_106b3ab40(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3b1b8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e3b1b8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b3ab50; end: 106b3acc7; -[SCSettingsPasswordReauthViewController continueButtonBarPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3ab50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
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
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f5068;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_startContinueBarAnimation_1126713c8);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b3acc8;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar2 = &puStack_90;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106b3ad94;
  puStack_a0 = &UNK_110870850;
  _objc_copyWeak(auStack_98,auStack_68);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127588d8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121fc0();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106b3acc8; end: 106b3ad93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3acc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_1 + _DAT_1127588d4;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0f5240();
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a00();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b3ad94; end: 106b3adf7;  */

void FUN_106b3ad94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010c1ad320(param_1,param_2,param_3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


