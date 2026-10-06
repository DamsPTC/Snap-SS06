/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b43878; end: 106b438f7; -[MobileSettingsViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_106b43878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b438f8; end: 106b4397f; -[MobileSettingsViewController textView:shouldInteractWithURL:inRange:interaction:] */

undefined8
FUN_106b438f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 106b43980; end: 106b43983; -[MobileSettingsViewController handleTextFieldErrorState:] */

void FUN_106b43980(void)

{
  return;
}



/* Entry: 106b43984; end: 106b43987; -[MobileSettingsViewController handleTextFieldNormalState:] */

void FUN_106b43984(void)

{
  return;
}



/* Entry: 106b43988; end: 106b439a3; -[MobileSettingsViewController isSpecialType] */

bool FUN_106b43988(long param_1)

{
  func_0x00010c27dd80();
  return param_1 == 1;
}



/* Entry: 106b439a4; end: 106b43a9f; -[MobileSettingsViewController setVerifyCodeBarTitleForStates:] */

void FUN_106b439a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b43aa0; end: 106b43c1f; -[MobileSettingsViewController resetTimerCountdownText] */

void FUN_106b43aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  func_0x00010c220d40(param_1,param_2,0x3c);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2986a0();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215c20(param_1);
  _objc_release(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daebd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daebd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c270640(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c25ce40(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c220d20(param_1);
  func_0x00010c200e20(param_1);
  uVar4 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fe9797979797979,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 106b43c20; end: 106b43e3f; -[MobileSettingsViewController hideConfirmationField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b43c20(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar3 = param_1;
  func_0x00010bf480c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c074c20();
  _objc_release(uVar3);
  if (param_3 == (uint)uVar1) {
    return;
  }
  uVar3 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  if ((param_3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010bf480c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010c280b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c14df20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2803c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(ulong *)(param_1 + (long)_DAT_112758948);
    _objc_retain(uVar3);
  }
  else {
    uVar3 = param_1;
    func_0x00010c280b60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c14df20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2803c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar1 = param_1;
    func_0x00010c07efe0();
    uVar3 = param_1;
    if ((uVar1 & 1) == 0) {
      func_0x00010c154ac0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c26bc20();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar1 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b43e40;
  puStack_48 = &UNK_11084fc58;
  uStack_40 = uVar3;
  uStack_38 = param_1;
  _objc_retain(uVar3);
  func_0x00010c0bbfc0(uVar1,param_2,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b43e40; end: 106b43f8f;  */

void FUN_106b43e40(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c280b60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(lVar7,uVar8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c84d0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b43f90; end: 106b4411b; -[MobileSettingsViewController hideUnlockAccountLabel:] */

void FUN_106b43f90(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar2 = param_1;
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074c20();
  _objc_release(uVar2);
  if (param_3 != (int)uVar3) {
    uVar2 = param_1;
    func_0x00010c280b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar3 = param_1;
    func_0x00010c280b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    uVar1 = 0;
    if (param_3 == 0) {
      uVar1 = uVar3;
    }
    uVar3 = uVar2;
    func_0x00010c14df20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2803c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c14df20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(uVar3);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106b4411c;
    puStack_60 = &UNK_11084fc88;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c84b8;
    uStack_58 = param_1;
    uStack_50 = uVar1;
    _objc_retain(uVar1);
    func_0x00010c0bbfc0(uVar1,param_2,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(ppuStack_48);
    _objc_release(uStack_50);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106b4411c; end: 106b44243;  */

void FUN_106b4411c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc030000000000000);
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
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b44244; end: 106b442ef; -[MobileSettingsViewController checkIfExistingUserMobile:] */

undefined * FUN_106b44244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aed98;
  func_0x00010c25db20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed98;
  func_0x00010be18c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25db20(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar1 == (undefined *)0x0 || puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010c0720c0(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106b442f0; end: 106b442f7; -[MobileSettingsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_106b442f0(void)

{
  return 0;
}



/* Entry: 106b442f8; end: 106b442fb; -[MobileSettingsViewController passwordCheckDidSucceed] */

void FUN_106b442f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2984b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_verifyActivationCode_112683b50);
  return;
}



/* Entry: 106b442fc; end: 106b4430b; -[MobileSettingsViewController getSettingsPasswordReauthTitle] */

void FUN_106b442fc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74978;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74978,0);
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



/* Entry: 106b4430c; end: 106b4431f; -[MobileSettingsViewController shouldHideForgotPasswordButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4430c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106b4431c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112758928) + 0x10))();
  return;
}



/* Entry: 106b44320; end: 106b443cb; -[MobileSettingsViewController _logUserPhoneVerificationSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    return;
  }
  puVar2 = PTR_PTR_1126afb18;
  _objc_opt_new(PTR_PTR_1126afb18);
  func_0x00010c206c40();
  func_0x00010c1a6920(puVar2,param_2,*(undefined1 *)(param_1 + _DAT_112758938));
  func_0x00010c16b460(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11275893c));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758910);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b443cc; end: 106b445cb; -[MobileSettingsViewController _formattedTentativeNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b443cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar11 = (long)_DAT_1127588fc;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c26b380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)puVar5 == 0) {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112758920);
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c26b380(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c26b380(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb58a0(uVar10,param_2,uVar4,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c26b380(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 106b445cc; end: 106b446fb; -[MobileSettingsViewController _getTentativeCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b445cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127588fc;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c26b380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = *(undefined **)(param_1 + lVar9);
    func_0x00010c26b380(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106b446fc; end: 106b448f7; -[MobileSettingsViewController _formattedMobile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b446fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar10 = (long)_DAT_1127588fc;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0fb000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126aed98;
  if ((int)puVar5 == 0) {
    puVar6 = *(undefined **)(param_1 + lVar10);
    func_0x00010c0fb000(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c0fb000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d40(puVar9,param_2,puVar8,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar8);
  }
  else {
    puVar6 = *(undefined **)(param_1 + lVar10);
    func_0x00010c0fb000(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106b448f8; end: 106b449a7; -[MobileSettingsViewController _hasTentativeNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106b448f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127588fc);
  func_0x00010c26b380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)puVar5 ^ 1;
}



/* Entry: 106b449a8; end: 106b44a57; -[MobileSettingsViewController _hasVerifiedNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106b449a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127588fc);
  func_0x00010c0fb000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)puVar5 ^ 1;
}



/* Entry: 106b44a58; end: 106b44a73; -[MobileSettingsViewController _isForceVerify] */

bool FUN_106b44a58(long param_1)

{
  func_0x00010c27dd80();
  return param_1 == 2;
}



/* Entry: 106b44a74; end: 106b44a93; -[MobileSettingsViewController mobileSettingsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44a74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275894c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b44a94; end: 106b44aa7; -[MobileSettingsViewController setMobileSettingsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44a94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275894c,param_3);
  return;
}



/* Entry: 106b44aa8; end: 106b44ab7; -[MobileSettingsViewController confirmationField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758948);
}



/* Entry: 106b44ab8; end: 106b44af7; -[MobileSettingsViewController setConfirmationField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758948;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44af8; end: 106b44b07; -[MobileSettingsViewController searchableSwitchRowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44af8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758950);
}



/* Entry: 106b44b08; end: 106b44b47; -[MobileSettingsViewController setSearchableSwitchRowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758950;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44b48; end: 106b44b57; -[MobileSettingsViewController countryCodeField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44b48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758954);
}



/* Entry: 106b44b58; end: 106b44b97; -[MobileSettingsViewController setCountryCodeField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758954;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44b98; end: 106b44ba7; -[MobileSettingsViewController countryCodePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44b98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758958);
}



/* Entry: 106b44ba8; end: 106b44be7; -[MobileSettingsViewController setCountryCodePicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758958;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44be8; end: 106b44bf7; -[MobileSettingsViewController countryCodePickerVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b44be8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127588e0);
}



/* Entry: 106b44bf8; end: 106b44c07; -[MobileSettingsViewController setCountryCodePickerVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44bf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127588e0) = param_3;
  return;
}



/* Entry: 106b44c08; end: 106b44c17; -[MobileSettingsViewController keyboardVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b44c08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127588e4);
}



/* Entry: 106b44c18; end: 106b44c27; -[MobileSettingsViewController setKeyboardVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44c18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127588e4) = param_3;
  return;
}



/* Entry: 106b44c28; end: 106b44c37; -[MobileSettingsViewController keyboardWillBeVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b44c28(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127588e8);
}



/* Entry: 106b44c38; end: 106b44c47; -[MobileSettingsViewController setKeyboardWillBeVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44c38(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127588e8) = param_3;
  return;
}



/* Entry: 106b44c48; end: 106b44c57; -[MobileSettingsViewController loadingScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44c48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275895c);
}



/* Entry: 106b44c58; end: 106b44c97; -[MobileSettingsViewController setLoadingScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275895c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44c98; end: 106b44ca7; -[MobileSettingsViewController infoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44c98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758960);
}



/* Entry: 106b44ca8; end: 106b44ce7; -[MobileSettingsViewController setInfoLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758960;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44ce8; end: 106b44cf7; -[MobileSettingsViewController unlockAccountLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44ce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758964);
}



/* Entry: 106b44cf8; end: 106b44d37; -[MobileSettingsViewController setUnlockAccountLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758964;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44d38; end: 106b44d47; -[MobileSettingsViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758968);
}



/* Entry: 106b44d48; end: 106b44d87; -[MobileSettingsViewController setScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758968;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44d88; end: 106b44d97; -[MobileSettingsViewController searchableSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275896c);
}



/* Entry: 106b44d98; end: 106b44dd7; -[MobileSettingsViewController setSearchableSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275896c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44dd8; end: 106b44de7; -[MobileSettingsViewController selectedCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44dd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758970);
}



/* Entry: 106b44de8; end: 106b44e27; -[MobileSettingsViewController setSelectedCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758970;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44e28; end: 106b44e37; -[MobileSettingsViewController shouldResendCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b44e28(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127588ec);
}



/* Entry: 106b44e38; end: 106b44e47; -[MobileSettingsViewController setShouldResendCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44e38(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127588ec) = param_3;
  return;
}



/* Entry: 106b44e48; end: 106b44e57; -[MobileSettingsViewController type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44e48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758940);
}



/* Entry: 106b44e58; end: 106b44e67; -[MobileSettingsViewController setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112758940) = param_3;
  return;
}



/* Entry: 106b44e68; end: 106b44e77; -[MobileSettingsViewController textField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44e68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758974);
}



/* Entry: 106b44e78; end: 106b44eb7; -[MobileSettingsViewController setTextField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758974;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44eb8; end: 106b44ec7; -[MobileSettingsViewController timerForCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44eb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758978);
}



/* Entry: 106b44ec8; end: 106b44f07; -[MobileSettingsViewController setTimerForCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758978;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44f08; end: 106b44f17; -[MobileSettingsViewController timerCountdownString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44f08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275897c);
}



/* Entry: 106b44f18; end: 106b44f57; -[MobileSettingsViewController setTimerCountdownString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275897c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44f58; end: 106b44f67; -[MobileSettingsViewController verifyPhoneNumberBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758980);
}



/* Entry: 106b44f68; end: 106b44fa7; -[MobileSettingsViewController setVerifyPhoneNumberBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758980;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44fa8; end: 106b44fb7; -[MobileSettingsViewController verifyCodeBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44fa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758984);
}



/* Entry: 106b44fb8; end: 106b44ff7; -[MobileSettingsViewController setVerifyCodeBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b44fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758984;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b44ff8; end: 106b45007; -[MobileSettingsViewController reverifyPhoneNumberBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b44ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758988);
}



/* Entry: 106b45008; end: 106b45047; -[MobileSettingsViewController setReverifyPhoneNumberBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b45008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758988;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b45048; end: 106b45057; -[MobileSettingsViewController confirmPhoneNumberBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b45048(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275898c);
}



/* Entry: 106b45058; end: 106b45097; -[MobileSettingsViewController setConfirmPhoneNumberBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b45058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275898c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b45098; end: 106b450a7; -[MobileSettingsViewController verifyCodeTimeLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b45098(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127588f0);
}



/* Entry: 106b450a8; end: 106b450b7; -[MobileSettingsViewController setVerifyCodeTimeLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b450a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127588f0) = param_3;
  return;
}



/* Entry: 106b450b8; end: 106b450c7; -[MobileSettingsViewController isReverifyingPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b450b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127588f4);
}



/* Entry: 106b450c8; end: 106b450d7; -[MobileSettingsViewController setIsReverifyingPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b450c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127588f4) = param_3;
  return;
}



/* Entry: 106b450d8; end: 106b450e7; -[MobileSettingsViewController initialFormattedMobile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b450d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758990);
}



/* Entry: 106b450e8; end: 106b450f3; -[MobileSettingsViewController setInitialFormattedMobile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b450e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b450f4; end: 106b4533b; -[MobileSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b450f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758990,0);
  _objc_storeStrong(param_1 + _DAT_11275898c,0);
  _objc_storeStrong(param_1 + _DAT_112758988,0);
  _objc_storeStrong(param_1 + _DAT_112758984,0);
  _objc_storeStrong(param_1 + _DAT_112758980,0);
  _objc_storeStrong(param_1 + _DAT_11275897c,0);
  _objc_storeStrong(param_1 + _DAT_112758978,0);
  _objc_storeStrong(param_1 + _DAT_112758974,0);
  _objc_storeStrong(param_1 + _DAT_112758970,0);
  _objc_storeStrong(param_1 + _DAT_11275896c,0);
  _objc_storeStrong(param_1 + _DAT_112758968,0);
  _objc_storeStrong(param_1 + _DAT_112758964,0);
  _objc_storeStrong(param_1 + _DAT_112758960,0);
  _objc_storeStrong(param_1 + _DAT_11275895c,0);
  _objc_storeStrong(param_1 + _DAT_112758958,0);
  _objc_storeStrong(param_1 + _DAT_112758954,0);
  _objc_storeStrong(param_1 + _DAT_112758950,0);
  _objc_storeStrong(param_1 + _DAT_112758948,0);
  _objc_destroyWeak(param_1 + _DAT_11275894c);
  _objc_storeStrong(param_1 + _DAT_112758930,0);
  _objc_storeStrong(param_1 + _DAT_11275892c,0);
  _objc_storeStrong(param_1 + _DAT_112758928,0);
  _objc_storeStrong(param_1 + _DAT_112758918,0);
  _objc_storeStrong(param_1 + _DAT_112758914,0);
  _objc_storeStrong(param_1 + _DAT_112758910,0);
  _objc_storeStrong(param_1 + _DAT_112758908,0);
  _objc_storeStrong(param_1 + _DAT_11275890c,0);
  _objc_storeStrong(param_1 + _DAT_112758904,0);
  _objc_storeStrong(param_1 + _DAT_112758900,0);
  _objc_storeStrong(param_1 + _DAT_112758920,0);
  _objc_destroyWeak(param_1 + _DAT_11275891c);
  _objc_storeStrong(param_1 + _DAT_1127588fc,0);
  _objc_storeStrong(param_1 + _DAT_1127588f8,0);
  _objc_storeStrong(param_1 + _DAT_112758934,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758944,0);
  return;
}



/* Entry: 106b4533c; end: 106b4577b; -[SCLegacyMobileSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4533c(long param_1)

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
  long lStack_a8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126c75e0;
  _objc_alloc(PTR_PTR_1126c75e0);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11275899c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar17;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_a8 = 0;
    lVar19 = 0;
  }
  else {
    lStack_a8 = param_1 + _DAT_1127589a0;
    _objc_loadWeakRetained();
    lVar19 = param_1 + _DAT_1127589a8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar19;
  func_0x00010c121fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127589a4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar16;
  func_0x00010c154a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_1127589b0;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar21;
  func_0x00010bf46520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127589ac;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar13;
  func_0x00010c0f54a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127589b4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar14;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127589bc;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar15;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + _DAT_1127589c0);
  }
  _objc_retain(uVar22);
  lVar9 = param_1;
  FUN_106b4577c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127589b8;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar18;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112758994;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05eb60(puVar1);
  _objc_release(lVar12);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar22);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lStack_a8);
  _objc_release(lVar2);
  _objc_release(lVar17);
  FUN_106b4577c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 106b4577c; end: 106b4579f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4577c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758998);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b457a0; end: 106b457d7;  */

long FUN_106b457a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb40a0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106b457d8; end: 106b45847; -[SCLegacyMobileSettingsEntryPoint _shouldHideForgotPasswordButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b457d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112758994;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 106b45848; end: 106b458fb; -[SCLegacyMobileSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b45848(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127589c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127589bc);
  _objc_destroyWeak(param_1 + _DAT_1127589b8);
  _objc_destroyWeak(param_1 + _DAT_112758994);
  _objc_destroyWeak(param_1 + _DAT_1127589b4);
  _objc_destroyWeak(param_1 + _DAT_1127589b0);
  _objc_destroyWeak(param_1 + _DAT_1127589ac);
  _objc_destroyWeak(param_1 + _DAT_1127589a8);
  _objc_destroyWeak(param_1 + _DAT_1127589a4);
  _objc_destroyWeak(param_1 + _DAT_1127589a0);
  _objc_destroyWeak(param_1 + _DAT_11275899c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758998);
  return;
}



/* Entry: 106b458fc; end: 106b45907; -[SCPhoneNumberPlaceholderTextField textRectForBounds:] */

void FUN_106b458fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectInset_1103475b0)();
  return;
}



/* Entry: 106b45908; end: 106b4590b; -[SCPhoneNumberPlaceholderTextField editingRectForBounds:] */

void FUN_106b45908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textRectForBounds__112678bb8);
  return;
}



/* Entry: 106b4590c; end: 106b45b1f; -[SCPhoneNumberPlaceholderTextField drawPlaceholderInRect:] */

void FUN_106b4590c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c620(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_5;
  func_0x00010c26b7a0(param_5);
  func_0x00010bf0dd60(puVar1,param_6,puVar3,4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c620(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_6,puVar5,
                      *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8);
  _objc_release(puVar5);
  _objc_release(puVar1);
  uVar4 = param_5;
  func_0x00010c0fd720(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = param_4;
  func_0x00010c23d680(param_3,param_4);
  _objc_release(uVar4);
  uVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c0fd720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89960(uVar4,(param_4 - dVar6) * 0.5,param_1,dVar6);
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b45b20; end: 106b4602b; -[SCVerificationCodeTextField initWithFrame:] */

undefined8 * FUN_106b45b20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f5078;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1b6ec0(puVar1);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c167580(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    func_0x00010c213040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
    func_0x00010c182ae0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar3);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e3b7d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e3b7d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(puVar1);
    _objc_release(ppuVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c1ae760(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e74a78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74a78,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    _objc_release(ppuVar4);
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c069ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227520(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010be36b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1ab820(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106b4602c; end: 106b46287;  */

void FUN_106b4602c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
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
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
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
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
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
  (**(code **)(lVar5 + 0x10))(0x4046800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b46288; end: 106b4641f;  */

void FUN_106b46288(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x404f000000000000,0x404f000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b46420; end: 106b46463; -[SCVerificationCodeTextField intrinsicContentSize] */

undefined1  [16] FUN_106b46420(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  func_0x00010bfeb480();
  uVar1 = 0x404f000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4046000000000000;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 106b46464; end: 106b4649b; -[SCVerificationCodeTextField clearInput] */

void FUN_106b46464(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c212f20(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c196ee0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b4649c; end: 106b464cb; -[SCVerificationCodeTextField setInput:] */

void FUN_106b4649c(undefined8 param_1)

{
  func_0x00010c212f20();
  func_0x00010c196ee0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b464cc; end: 106b46783; -[SCVerificationCodeTextField setError:] */

void FUN_106b464cc(ulong param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar1);
    uVar2 = param_1;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071c60();
    _objc_release(puVar1);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(param_1);
      _objc_release(puVar1);
    }
    uVar2 = param_1;
    func_0x00010c2be8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c069ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c2982e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_106b46760;
    func_0x00010c2982e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2e60();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar1);
    uVar2 = param_1;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071c60();
    _objc_release(puVar1);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(param_1);
      _objc_release(puVar1);
    }
    uVar2 = param_1;
    func_0x00010c2be8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c069ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c2982e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_106b46760;
    func_0x00010c2982e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2e40();
  }
  _objc_release(uVar4);
LAB_106b46760:
  func_0x00010c1ab820(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106b46784; end: 106b46787; -[SCVerificationCodeTextField isInErrorState] */

void FUN_106b46784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfeb490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_inErrorState_1125d86e8);
  return;
}



/* Entry: 106b46788; end: 106b46853; -[SCVerificationCodeTextField textRectForBounds:] */

void FUN_106b46788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c074c20();
  _objc_release(param_5);
  if ((uVar1 & 1) == 0) {
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
  }
  else {
    _CGRectInset(param_1,param_2,param_3,param_4,0x4030000000000000,0);
  }
  return;
}



/* Entry: 106b46854; end: 106b46857; -[SCVerificationCodeTextField editingRectForBounds:] */

void FUN_106b46854(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textRectForBounds__112678bb8);
  return;
}



/* Entry: 106b46858; end: 106b46a6b; -[SCVerificationCodeTextField drawPlaceholderInRect:] */

void FUN_106b46858(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c620(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_5;
  func_0x00010c26b7a0(param_5);
  func_0x00010bf0dd60(puVar1,param_6,puVar3,4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c620(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_6,puVar5,
                      *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8);
  _objc_release(puVar5);
  _objc_release(puVar1);
  uVar4 = param_5;
  func_0x00010c0fd720(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = param_4;
  func_0x00010c23d680(param_3,param_4);
  _objc_release(uVar4);
  uVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c0fd720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89960(uVar4,(param_4 - dVar6) * 0.5,param_1,dVar6);
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b46a6c; end: 106b46ae7; -[SCVerificationCodeTextField _iconXSignFillImage] */

void FUN_106b46a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x403f000000000000,0x403f000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b46ae8; end: 106b46b07; -[SCVerificationCodeTextField verificationCodeTextFieldDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b46ae8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127589c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b46b08; end: 106b46b1b; -[SCVerificationCodeTextField setVerificationCodeTextFieldDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b46b08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127589c8,param_3);
  return;
}



/* Entry: 106b46b1c; end: 106b46b2b; -[SCVerificationCodeTextField inErrorState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b46b1c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127589c4);
}



/* Entry: 106b46b2c; end: 106b46b3b; -[SCVerificationCodeTextField setInErrorState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b46b2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127589c4) = param_3;
  return;
}


