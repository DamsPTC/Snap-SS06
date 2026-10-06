/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d49348; end: 104d49547; -[SCUserVerificationWorkflow _updateVerifyResultIfNeeded] */

void FUN_104d49348(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  puVar1 = param_1;
  func_0x00010be211a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010be3ff80(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0faf60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010be42a00(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126af978;
  puVar4 = PTR_PTR_1126af980;
  puVar5 = puVar1;
  if (((int)puVar7 == 0) || ((int)puVar3 == 0)) {
    if ((int)puVar7 == 0) {
      if ((int)puVar3 == 0) goto LAB_104d4952c;
      _objc_alloc(PTR_PTR_1126af980);
      func_0x00010c01f720();
      puVar2 = PTR_PTR_1126af978;
      func_0x00010c0faf60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fb320(puVar2,param_2,puVar5,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf8d6c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8db20(puVar2,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = *(undefined **)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
  }
  else {
    _objc_alloc(PTR_PTR_1126af980);
    func_0x00010c01f720();
    puVar2 = PTR_PTR_1126af978;
    func_0x00010c0faf60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf8d6c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fe80(puVar2,param_2,puVar5,puVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_104d4952c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d49548; end: 104d49573; -[SCUserVerificationWorkflow _isEmailSubmitted:] */

bool FUN_104d49548(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c252440(param_3);
    return param_3 == 1;
  }
  return false;
}



/* Entry: 104d49574; end: 104d4959f; -[SCUserVerificationWorkflow _isPhoneVerified:] */

bool FUN_104d49574(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c252440(param_3);
    return param_3 == 2;
  }
  return false;
}



/* Entry: 104d495a0; end: 104d49643; -[SCUserVerificationWorkflow .cxx_destruct] */

void FUN_104d495a0(long param_1)

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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d49644; end: 104d4965b;  */

void FUN_104d49644(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0978;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db0978,
                      &PTR____CFConstantStringClassReference_110db0998,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d4965c; end: 104d4970b; -[SCUnverifiedUser initWithCoder:] */

undefined1 * FUN_104d4965c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3ff8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d4970c; end: 104d497b7; -[SCUnverifiedUser initWithEmail:registrationPhoneNumber:] */

undefined1 *
FUN_104d4970c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3ff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d497b8; end: 104d497db; -[SCUnverifiedUser copyWithZone:] */

undefined8 FUN_104d497b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d497dc; end: 104d4983b; -[SCUnverifiedUser encodeWithCoder:] */

void FUN_104d497dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db09b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110db09d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4983c; end: 104d498af; -[SCUnverifiedUser hash] */

undefined8 * FUN_104d4983c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104d49930:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104d4993c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_104d4993c;
        }
        goto LAB_104d49930;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104d4993c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104d498b0; end: 104d49957; -[SCUnverifiedUser isEqual:] */

long FUN_104d498b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d49930:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d4993c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_104d4993c;
        }
        goto LAB_104d49930;
      }
    }
    lVar3 = 0;
  }
LAB_104d4993c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d49958; end: 104d4995f; -[SCUnverifiedUser email] */

undefined8 FUN_104d49958(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d49960; end: 104d49967; -[SCUnverifiedUser registrationPhoneNumber] */

undefined8 FUN_104d49960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d49968; end: 104d49997; -[SCUnverifiedUser .cxx_destruct] */

void FUN_104d49968(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d49998; end: 104d49a3b; -[SCPreRegistrationVerificationScope initWithUIContainer:delegate:verificationFlowMethod:] */

undefined1 *
FUN_104d49998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d49a3c; end: 104d49a53; -[SCPreRegistrationVerificationScope delegate] */

void FUN_104d49a3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d49a54; end: 104d49a5b; -[SCPreRegistrationVerificationScope uiContainer] */

undefined8 FUN_104d49a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d49a5c; end: 104d49a63; -[SCPreRegistrationVerificationScope verificationFlowMethod] */

undefined8 FUN_104d49a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d49a64; end: 104d49a8f; -[SCPreRegistrationVerificationScope .cxx_destruct] */

void FUN_104d49a64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d49a90; end: 104d49bcb; -[SCNGOUserVerificationEmailViewController initWithScreen:viewConfig:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d49a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010bf602a0(param_4);
  uVar1 = param_4;
  func_0x00010c276d00(param_4);
  uVar2 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126e4008;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112711c3c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112711c40;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_4;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112711c44);
    *(undefined **)((long)puVar3 + (long)_DAT_112711c44) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 104d49bcc; end: 104d49bd3; -[SCNGOUserVerificationEmailViewController pageViewName] */

undefined8 FUN_104d49bcc(void)

{
  return 0x5c;
}



/* Entry: 104d49bd4; end: 104d49c3f; -[SCNGOUserVerificationEmailViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49bd4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4008;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c0ec860(*(undefined8 *)(param_1 + _DAT_112711c40));
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 104d49c40; end: 104d49c8f; -[SCNGOUserVerificationEmailViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49c40(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4008;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112711c48));
  return;
}



/* Entry: 104d49c90; end: 104d49cdb; -[SCNGOUserVerificationEmailViewController accessoryButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49c90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c3c);
  puVar1 = PTR_PTR_1126afc50;
  func_0x00010c265840(PTR_PTR_1126afc50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d49cdc; end: 104d49d53; -[SCNGOUserVerificationEmailViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d49cdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c4c);
  func_0x00010bf2c700();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112711c3c);
    puVar2 = PTR_PTR_1126afc50;
    func_0x00010c25ed20(PTR_PTR_1126afc50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 104d49d54; end: 104d49dd3; -[SCNGOUserVerificationEmailViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afc50;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711c3c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c48);
  func_0x00010c26bea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8d7a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d49dd4; end: 104d49e4b; -[SCNGOUserVerificationEmailViewController textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d49dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c44);
  func_0x00010c06cc60(uVar1,param_2,param_4,param_5,param_6);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112711c3c);
    puVar2 = PTR_PTR_1126afc50;
    func_0x00010bf11f20(PTR_PTR_1126afc50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  return 1;
}



/* Entry: 104d49e4c; end: 104d49ec3; -[SCNGOUserVerificationEmailViewController emailDomainSuggestionScrollView:didSelectPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49e4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afc50;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c3c);
  func_0x00010bfbb800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c159580(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d49ec4; end: 104d49f0f; -[SCNGOUserVerificationEmailViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49ec4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c3c);
  puVar1 = PTR_PTR_1126afc50;
  func_0x00010c25ed20(PTR_PTR_1126afc50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d49f10; end: 104d49f5b; -[SCNGOUserVerificationEmailViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49f10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c3c);
  puVar1 = PTR_PTR_1126afc50;
  func_0x00010c135380(PTR_PTR_1126afc50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d49f5c; end: 104d49f67; -[SCNGOUserVerificationEmailViewController bottomConstant] */

undefined8 FUN_104d49f5c(void)

{
  return 0x404a000000000000;
}



/* Entry: 104d49f68; end: 104d4a017; -[SCNGOUserVerificationEmailViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d49f68(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c3c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d4a018; end: 104d4a05f;  */

void FUN_104d4a018(long param_1,undefined8 param_2)

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



/* Entry: 104d4a060; end: 104d4a217; -[SCNGOUserVerificationEmailViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4a060(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112711c4c;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112711c50);
    lVar4 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288720(uVar2,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf2c700(param_3);
    func_0x00010c177be0(param_1,param_2,lVar4);
    lVar4 = param_3;
    func_0x00010bf38860(param_3);
    func_0x00010c1b2440(param_1,param_2,lVar4);
    lVar5 = (long)_DAT_112711c48;
    uVar3 = *(ulong *)(param_1 + lVar5);
    func_0x00010c26bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010bf8d6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010bf98d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,0);
      uVar2 = 1;
    }
    else {
      lVar4 = param_3;
      func_0x00010bf98d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
      _objc_release(lVar4);
      uVar2 = 4;
    }
    func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar5),param_2,uVar2);
    lVar4 = param_3;
    func_0x00010c2319a0();
    if ((int)lVar4 != 0) {
      func_0x00010c0d13c0(*(undefined8 *)(param_1 + lVar5));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4a218; end: 104d4a74f; -[SCNGOUserVerificationEmailViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4a218(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  double in_d3;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af0a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104d4df54();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051880();
  lVar28 = (long)_DAT_112711c48;
  uVar27 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar27);
  _objc_release(puVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c213300(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  uVar27 = *(undefined8 *)(param_1 + _DAT_112711c40);
  func_0x00010c0ec860();
  if (((uint)uVar27 >> 2 & 1) != 0) {
    func_0x000104d4df6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161160(*(undefined8 *)(param_1 + lVar28));
    _objc_release(uVar27);
  }
  puVar1 = PTR_PTR_1126af050;
  _objc_alloc();
  func_0x00010c030dc0();
  lVar29 = (long)_DAT_112711c50;
  uVar27 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar27);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar28;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(in_d3 / 6.0);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar25);
  _objc_release(lVar29);
  _objc_release(param_1);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar28);
  _objc_release(uVar12);
  _objc_release(uVar27);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar4 + _DAT_112711c4c,0);
  _objc_storeStrong(lVar4 + _DAT_112711c50,0);
  _objc_storeStrong(lVar4 + _DAT_112711c48,0);
  _objc_storeStrong(lVar4 + _DAT_112711c44,0);
  _objc_storeStrong(lVar4 + _DAT_112711c40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + _DAT_112711c3c,0);
  return;
}



/* Entry: 104d4a750; end: 104d4a7cf; -[SCNGOUserVerificationEmailViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4a750(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711c4c,0);
  _objc_storeStrong(param_1 + _DAT_112711c50,0);
  _objc_storeStrong(param_1 + _DAT_112711c48,0);
  _objc_storeStrong(param_1 + _DAT_112711c44,0);
  _objc_storeStrong(param_1 + _DAT_112711c40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711c3c,0);
  return;
}



/* Entry: 104d4a7d0; end: 104d4aa0b; -[SCUserVerificationEmailBusinessLogic initWithEmail:delegate:emailService:logger:userInitialInputLogger:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d4a7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
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
  puStack_68 = PTR_PTR_1126e4010;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar2 + (long)_DAT_112711c54,param_4);
    lVar5 = (long)_DAT_112711c58;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112711c5c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112711c60;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_6;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112711c64;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112711c68;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    _objc_release(uVar3);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + (long)_DAT_112711c6c) = uVar1;
    _objc_initWeak(auStack_78,puVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112711c70);
    *(undefined **)((long)puVar2 + (long)_DAT_112711c70) = puVar4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104d4aa0c; end: 104d4aa4b;  */

void FUN_104d4aa0c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be22960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d4aa4c; end: 104d4aa9b; -[SCUserVerificationEmailBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4aa4c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4010;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0a55e0(*(undefined8 *)(param_1 + _DAT_112711c60));
  return;
}



/* Entry: 104d4aa9c; end: 104d4abc3; -[SCUserVerificationEmailBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4aa9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2967a0(PTR_PTR_1126af038,param_2,*(undefined8 *)(param_1 + _DAT_112711c5c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if (((int)uVar2 == 0) && ((*(byte *)(param_1 + _DAT_112711c78) & 1) == 0)) {
    func_0x00010c08fa60();
  }
  _objc_alloc(PTR_PTR_1126afc58);
  func_0x00010c00f300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d4abc4; end: 104d4ad03; -[SCUserVerificationEmailBusinessLogic handleAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4abc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112711c80) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d4ad04;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d4ad0c;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d4ad44;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104d4ad98;
  puStack_a8 = &UNK_1108450c8;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104d4ada4;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104d4ae10;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104d4ae48;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104d4aee0;
  puStack_148 = &UNK_1108450c8;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x104d4aeec;
  puStack_170 = &UNK_110842e18;
  lStack_168 = param_1;
  lStack_140 = param_1;
  lStack_118 = param_1;
  lStack_f0 = param_1;
  lStack_c8 = param_1;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0c0640(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188);
  return;
}



/* Entry: 104d4ad04; end: 104d4ad0b;  */

void FUN_104d4ad04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__submit_11258f0f8);
  return;
}



/* Entry: 104d4ad0c; end: 104d4ad43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4ad0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711c54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d4ad44; end: 104d4ad97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4ad44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711c54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8daa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d4ad98; end: 104d4ada3;  */

void FUN_104d4ad98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__update__112592298,param_2);
  return;
}



/* Entry: 104d4ada4; end: 104d4ae0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4ada4(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711c7c) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a5610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711c60),
             PTR_s_logEmailRerouteDialogWithAction__112606f90,2);
  return;
}



/* Entry: 104d4ae10; end: 104d4ae47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4ae10(long param_1)

{
  func_0x00010bee6520(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0a5610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711c60),
             PTR_s_logEmailRerouteDialogWithAction__112606f90,1);
  return;
}



/* Entry: 104d4ae48; end: 104d4aedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4ae48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711c7c) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010c0a5600(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711c60),param_2,0);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711c54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8da00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d4aee0; end: 104d4aeff;  */

void FUN_104d4aee0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__selectedEmailDomain__112585130,param_2);
  return;
}



/* Entry: 104d4af00; end: 104d4b14b; -[SCUserVerificationEmailBusinessLogic _submit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4af00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + _DAT_112711c5c) != 0) {
    puVar1 = PTR_PTR_1126af038;
    func_0x00010c2967a0();
    if (((ulong)puVar1 & 1) == 0) {
      FUN_104d4df3c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112711c74);
      *(undefined **)(param_1 + _DAT_112711c74) = puVar1;
      _objc_release(uVar3);
      lVar2 = param_1;
      func_0x00010bf8e1a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112711c60);
      func_0x00010be07500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0adc40(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    *(undefined1 *)(param_1 + _DAT_112711c78) = 1;
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    func_0x00010c0b13a0(*(undefined8 *)(param_1 + _DAT_112711c60));
    lVar2 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112711c58);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d4b14c;
    puStack_70 = &UNK_110848708;
    _objc_retain(lVar2);
    lStack_68 = lVar2;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar2);
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010c285680(uVar3);
    _objc_destroyWeak(auStack_90);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 104d4b14c; end: 104d4b1db;  */

void FUN_104d4b14c(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d4b1dc;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d4b1dc; end: 104d4b207;  */

void FUN_104d4b1dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4b208; end: 104d4b32f;  */

void FUN_104d4b208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d4b330;
  puStack_78 = &UNK_110844dd0;
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_70 = param_2;
  _objc_retain(param_7);
  uStack_68 = param_7;
  uStack_58 = param_6;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_90);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 104d4b330; end: 104d4b367;  */

void FUN_104d4b330(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be075e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4b368; end: 104d4b3eb; -[SCUserVerificationEmailBusinessLogic _emailSubmitted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000108dcd194(*(undefined8 *)(param_1 + _DAT_112711c5c));
  lVar1 = param_1 + _DAT_112711c54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8d740();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c60);
  func_0x00010be07500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5640(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4b3ec; end: 104d4b573; -[SCUserVerificationEmailBusinessLogic _emailSubmitDidFail:errorMessage:shouldShowReroute:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b3ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + _DAT_112711c78) = 0;
  if (param_3 == 0) {
    lVar2 = (long)_DAT_112711c74;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
    if (param_5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112711c68);
      func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110db0a38,0,0);
      *(char *)(param_1 + _DAT_112711c7c) = (char)uVar1;
    }
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112711c60);
    func_0x00010be07500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5620(uVar1,param_2,param_1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112711c60);
    lVar2 = param_1;
    func_0x00010be07500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5620(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    param_1 = param_1 + _DAT_112711c54;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf8d760();
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4b574; end: 104d4b60f; -[SCUserVerificationEmailBusinessLogic _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0b2ac0(*(undefined8 *)(param_1 + _DAT_112711c64),param_2,3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c5c);
  *(undefined8 *)(param_1 + _DAT_112711c5c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c74);
  *(undefined8 *)(param_1 + _DAT_112711c74) = 0;
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4b610; end: 104d4b627; -[SCUserVerificationEmailBusinessLogic _useAnotherEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b610(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112711c7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__update__112592298,&PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104d4b628; end: 104d4b7bb; -[SCUserVerificationEmailBusinessLogic _selectedEmailDomain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b628(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c0b2ac0(*(undefined8 *)(param_1 + _DAT_112711c64),param_2,3);
  func_0x00010c0b2ce0(*(undefined8 *)(param_1 + _DAT_112711c60),param_2,param_3);
  lVar4 = *(long *)(param_1 + _DAT_112711c5c);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d0a0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + _DAT_112711c80) = 1;
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    lVar2 = lVar4;
    func_0x00010c11f420(lVar4,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
    if (lVar2 == 0x7fffffffffffffff) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dae518);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = lVar4;
      func_0x00010c260c20(lVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        *(undefined1 *)(param_1 + _DAT_112711c80) = 1;
      }
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dae518);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
  }
  func_0x00010bed23c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4b7bc; end: 104d4b87f; -[SCUserVerificationEmailBusinessLogic _emailDomain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b7bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  ppuVar4 = *(undefined ***)(param_1 + _DAT_112711c5c);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d0a0(ppuVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  ppuVar2 = ppuVar4;
  func_0x00010c11f420(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x7fffffffffffffff) {
    ppuVar3 = ppuVar4;
    func_0x00010c260c00(ppuVar4,param_2,(long)ppuVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar5 = ppuVar3;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 104d4b880; end: 104d4b8bb; -[SCUserVerificationEmailBusinessLogic _getShouldOnlySubmitValidEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c68);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110db0a18,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}



/* Entry: 104d4b8bc; end: 104d4b957; -[SCUserVerificationEmailBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4b8bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711c64,0);
  _objc_storeStrong(param_1 + _DAT_112711c60,0);
  _objc_storeStrong(param_1 + _DAT_112711c74,0);
  _objc_storeStrong(param_1 + _DAT_112711c58,0);
  _objc_storeStrong(param_1 + _DAT_112711c70,0);
  _objc_storeStrong(param_1 + _DAT_112711c5c,0);
  _objc_destroyWeak(param_1 + _DAT_112711c54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711c68,0);
  return;
}



/* Entry: 104d4b958; end: 104d4bb1f; -[SCNGOUserVerificationPhoneEntryViewController initWithUserVerificationPhoneEntryScreen:phoneEntryScreen:viewConfig:logger:phonePageCopy:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d4b958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar4 = param_5;
  func_0x00010bf602a0(param_5);
  uVar1 = param_5;
  func_0x00010c276d00(param_5);
  uVar2 = param_5;
  func_0x00010bf4fb20(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126e4018;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_8);
  _objc_release(param_8);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112711c84;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112711c88;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_4;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112711c8c;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_5;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112711c90;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_6;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112711c94);
    *(undefined **)((long)puVar3 + (long)_DAT_112711c94) = puVar5;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112711c98;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_7;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 104d4bb20; end: 104d4bb27; -[SCNGOUserVerificationPhoneEntryViewController pageViewName] */

undefined8 FUN_104d4bb20(void)

{
  return 0xc5;
}



/* Entry: 104d4bb28; end: 104d4bba7; -[SCNGOUserVerificationPhoneEntryViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bb28(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4018;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  lVar1 = (long)_DAT_112711c8c;
  func_0x00010c0ec860(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c177c20(param_1);
  func_0x00010c0ec860(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c177da0(param_1);
  return;
}



/* Entry: 104d4bba8; end: 104d4bbf7; -[SCNGOUserVerificationPhoneEntryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bba8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4018;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112711c9c));
  return;
}



/* Entry: 104d4bbf8; end: 104d4bc43; -[SCNGOUserVerificationPhoneEntryViewController buttonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bbf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c88);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c284ae0(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4bc44; end: 104d4bc8f; -[SCNGOUserVerificationPhoneEntryViewController accessoryButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bc44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c84);
  puVar1 = PTR_PTR_1126afc60;
  func_0x00010c2657c0(PTR_PTR_1126afc60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4bc90; end: 104d4bcdb; -[SCNGOUserVerificationPhoneEntryViewController accessoryTextLinkPressedWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bc90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c84);
  puVar1 = PTR_PTR_1126afc60;
  func_0x00010c158da0(PTR_PTR_1126afc60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4bcdc; end: 104d4bd8f; -[SCNGOUserVerificationPhoneEntryViewController leftTextField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d4bcdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af280;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c88);
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53300(puVar1,param_2,param_3,param_6,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  return 0;
}



/* Entry: 104d4bd90; end: 104d4be93; -[SCNGOUserVerificationPhoneEntryViewController rightTextField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d4bd90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711c94);
  _objc_retain(param_6);
  func_0x00010c06cc60(uVar3,param_2,param_4,param_5,param_6);
  if ((int)uVar3 != 0) {
    func_0x00010c0ac300(*(undefined8 *)(param_1 + _DAT_112711c90));
  }
  puVar1 = PTR_PTR_1126af280;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c88);
  uVar3 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fab80(puVar1,param_2,uVar3,param_6,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return 0;
}



/* Entry: 104d4be94; end: 104d4bedf; -[SCNGOUserVerificationPhoneEntryViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4be94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c88);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c25ed20(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4bee0; end: 104d4bf2b; -[SCNGOUserVerificationPhoneEntryViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bee0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c84);
  puVar1 = PTR_PTR_1126afc60;
  func_0x00010c135380(PTR_PTR_1126afc60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4bf2c; end: 104d4bf77; -[SCNGOUserVerificationPhoneEntryViewController skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bf2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c84);
  puVar1 = PTR_PTR_1126afc60;
  func_0x00010c23df20(PTR_PTR_1126afc60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4bf78; end: 104d4c04b; -[SCNGOUserVerificationPhoneEntryViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4bf78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711c88);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c250380(uVar1);
  func_0x00010c250380(*(undefined8 *)(param_1 + _DAT_112711c84));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d4c04c; end: 104d4c093;  */

void FUN_104d4c04c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4c094; end: 104d4c097;  */

void FUN_104d4c094(void)

{
  return;
}



/* Entry: 104d4c098; end: 104d4c23b; -[SCNGOUserVerificationPhoneEntryViewController _updateUIWithPhoneEntryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4c098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bfb60e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112711c9c;
  func_0x00010c1ee220(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010bed6340(param_1,param_2,param_3);
  uVar3 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c177be0(param_1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010c1b2440(param_1,param_2,uVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)puVar1 == 0) {
    uVar3 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = 4;
  }
  else {
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar4),param_2,
                        *(undefined8 *)(param_1 + _DAT_112711c98));
    uVar3 = 0;
  }
  func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010bfb61c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bfb60e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfb61c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebb500(param_1,param_2,uVar3,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4c23c; end: 104d4c7fb; -[SCNGOUserVerificationPhoneEntryViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4c23c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  double in_d3;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af658;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104d4dfb4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a80(puVar1,param_2,puVar2);
  lVar34 = (long)_DAT_112711ca0;
  uVar32 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar1;
  _objc_release(uVar32);
  _objc_release(puVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar34),param_2,
                      &PTR____CFConstantStringClassReference_110daf9f8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar34),param_2,param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar34),param_2,0);
  lVar33 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar33);
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  uVar32 = *(undefined8 *)PTR__UITextContentTypeTelephoneNumber_110345e28;
  puVar2 = puVar1;
  func_0x000104d4dfcc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104d4dfe4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051860(puVar1,param_2,uVar32,puVar2,puVar3,0);
  lVar33 = (long)_DAT_112711c9c;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar1;
  _objc_release(uVar32);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar33),param_2,0xb);
  func_0x00010c1ee1e0(*(undefined8 *)(param_1 + lVar33),param_2,
                      &PTR____CFConstantStringClassReference_110dafa18);
  func_0x00010c1ba320(*(undefined8 *)(param_1 + lVar33),param_2,
                      &PTR____CFConstantStringClassReference_110dafa38);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar33),param_2,param_1);
  uVar32 = *(undefined8 *)(param_1 + _DAT_112711c8c);
  func_0x00010c0ec860();
  if (((uint)uVar32 >> 2 & 1) != 0) {
    func_0x000104d4e02c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161160(*(undefined8 *)(param_1 + lVar33),param_2,uVar32);
    _objc_release(uVar32);
  }
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar33),param_2,0);
  lVar4 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar34);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar34);
  lStack_b0 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar34);
  uStack_a8 = uVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar13;
  func_0x00010bf493c0(in_d3 / 15.0,uVar13,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar33);
  uStack_a0 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar33);
  uStack_98 = uVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar33);
  uStack_90 = uVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar28;
  func_0x00010bf493c0(0x4034000000000000,uVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_b0,6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar32);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar31 = puVar3;
  func_0x00010bfb6020(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar3;
  func_0x00010bfb6020(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar1 != 0) {
    puVar1 = puVar3;
    func_0x00010bfb6000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar2,param_2,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000106b724d4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106b724bc();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar31);
    _objc_release(puVar1);
    puVar31 = puVar2;
  }
  func_0x00010c174ac0(*(undefined8 *)(lVar5 + _DAT_112711ca0),param_2,puVar31);
  puVar1 = puVar3;
  func_0x00010bfb6000(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba340(*(undefined8 *)(lVar5 + _DAT_112711c9c),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar31);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d4c7fc; end: 104d4c92b; -[SCNGOUserVerificationPhoneEntryViewController _updateCountryCodeText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4c7fc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfb6020(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = param_3;
  func_0x00010bfb6020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar3 != 0) {
    puVar3 = param_3;
    func_0x00010bfb6000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar2,param_2,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000106b724d4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106b724bc();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar1 = puVar2;
  }
  func_0x00010c174ac0(*(undefined8 *)(param_1 + _DAT_112711ca0),param_2,puVar1);
  puVar3 = param_3;
  func_0x00010bfb6000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba340(*(undefined8 *)(param_1 + _DAT_112711c9c),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4c92c; end: 104d4cc17; -[SCNGOUserVerificationPhoneEntryViewController _showSuggestionDialogWithCurrentPhoneNumber:fullSuggestedPhoneNumber:] */

void FUN_104d4c92c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
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
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104d4e044();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000104d4df84();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104d4cc18;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000108b9a924();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000104d4df9c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
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
  _objc_retain(puVar8);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bedcf40();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4cc18; end: 104d4cca7;  */

void FUN_104d4cc18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedcf40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4cca8; end: 104d4cd07; -[SCNGOUserVerificationPhoneEntryViewController _updatePhoneNumberWithSuggestedPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4cca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_3,param_2,1,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c88);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c25f980(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4cd08; end: 104d4cd67; -[SCNGOUserVerificationPhoneEntryViewController _cancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4cd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_3,param_2,1,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711c88);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010bf2f420(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4cd68; end: 104d4ce07; -[SCNGOUserVerificationPhoneEntryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4cd68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711c94,0);
  _objc_storeStrong(param_1 + _DAT_112711c9c,0);
  _objc_storeStrong(param_1 + _DAT_112711ca0,0);
  _objc_storeStrong(param_1 + _DAT_112711c98,0);
  _objc_storeStrong(param_1 + _DAT_112711c90,0);
  _objc_storeStrong(param_1 + _DAT_112711c8c,0);
  _objc_storeStrong(param_1 + _DAT_112711c88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711c84,0);
  return;
}



/* Entry: 104d4ce08; end: 104d4cf53; -[SCUserVerificationPhoneEntryBusinessLogic initWithPhoneNumber:delegate:phoneEntry:phoneService:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d4ce08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e4020;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112711ca4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112711ca8),param_4);
    lVar3 = (long)_DAT_112711cac;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    lVar3 = (long)_DAT_112711cb0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112711cb4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d4cf54; end: 104d4cfa3; -[SCUserVerificationPhoneEntryBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4cf54(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4020;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0ac2e0(*(undefined8 *)(param_1 + _DAT_112711cb4));
  return;
}



/* Entry: 104d4cfa4; end: 104d4d04f; -[SCUserVerificationPhoneEntryBusinessLogic handleAction:] */

void FUN_104d4cfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
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
  pcStack_28 = FUN_104d4d050;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d4d088;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d4d090;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104d4d0e4;
  puStack_98 = &UNK_1108480f8;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfa00(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 104d4d050; end: 104d4d087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4d050(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711ca8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d4d088; end: 104d4d08f;  */

void FUN_104d4d088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__skip_11258cb18);
  return;
}



/* Entry: 104d4d090; end: 104d4d13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4d090(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711ca8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0faea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d4d13c; end: 104d4d1d3; -[SCUserVerificationPhoneEntryBusinessLogic _skip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4d13c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711cb4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711ca4);
  func_0x00010c0faf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afa60(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112711ca8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25fba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4d1d4; end: 104d4d2d7; -[SCUserVerificationPhoneEntryBusinessLogic _phoneSubmitSucceededWithNumber:phoneVerifyToken:authSessionPayload:needsPhoneVerification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4d1d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711cb4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac340(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af990;
  _objc_alloc(PTR_PTR_1126af990);
  func_0x00010c035aa0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = param_1 + _DAT_112711ca8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fac40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d4d2d8; end: 104d4d417; -[SCUserVerificationPhoneEntryBusinessLogic _phoneSubmitFailedWithNumber:errorMessage:errorAction:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4d2d8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be5b220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112711cb4);
    puVar2 = param_3;
    func_0x00010c0fafc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac320(uVar3);
  }
  else {
    puVar2 = PTR_PTR_1126af990;
    _objc_alloc(PTR_PTR_1126af990);
    func_0x00010c035aa0();
    param_1 = param_1 + _DAT_112711ca8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0fac40();
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,param_4,param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4d418; end: 104d4d503; -[SCUserVerificationPhoneEntryBusinessLogic _magicCodeAdaptorFromErrorAction:] */

void FUN_104d4d418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d4d504;
  uStack_30 = 0x104d4d514;
  uStack_28 = 0;
  func_0x00010c0bfd00(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d4d504; end: 104d4d51b;  */

void FUN_104d4d504(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d4d51c; end: 104d4d553;  */

void FUN_104d4d51c(long param_1,undefined8 param_2)

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



/* Entry: 104d4d554; end: 104d4d7db; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSubmitPhoneNumber:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4d554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0b13e0(*(undefined8 *)(param_1 + _DAT_112711cb4));
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112711cb0);
  uVar2 = param_3;
  func_0x00010c0cf3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112711ca4;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0fb300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf10980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104d4d7dc;
  puStack_a8 = &UNK_11084cbc0;
  _objc_retain(lVar1);
  lStack_98 = lVar1;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2886e0(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(lVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(lStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d4d7dc; end: 104d4d943;  */

void FUN_104d4d7dc(long param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104d4d944;
  puStack_98 = &UNK_11084cb90;
  uStack_68 = param_3;
  _objc_copyWeak(auStack_70,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_90 = uVar1;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = param_7;
  uStack_67 = param_2;
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d4d944; end: 104d4d9f3;  */

void FUN_104d4d944(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be739e0();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
      puVar1 = PTR_PTR_1126afc68;
      func_0x00010c2399e0(PTR_PTR_1126afc68);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000104d4d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    return;
  }
  return;
}


