/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b5b234; end: 106b5b517; -[SCPhoneVerifyResponseParser parseRequestCodeResponse:] */

void FUN_106b5b234(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daf5b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = param_3;
  if ((int)puVar2 == 0) {
    puVar1 = PTR_PTR_1126bc0e8;
    func_0x00010c072220(PTR_PTR_1126bc0e8,param_2,param_3);
    puVar2 = PTR_PTR_1126d0b48;
    if ((int)puVar1 == 0) {
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e75398);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c261a00(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR_PTR_1126bc0e8;
      func_0x00010bf98d80(PTR_PTR_1126bc0e8,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa0200(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e75338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d0b48;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e75338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc2e0(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e75358);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) != 0) {
        puVar2 = PTR_PTR_1126d0b48;
        func_0x00010bfa0200(PTR_PTR_1126d0b48,param_2,
                            &PTR____CFConstantStringClassReference_110e75378);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106b5b3f8;
      }
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e75358);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bff6b20();
      puStack_58 = (undefined *)0x0;
      puVar5 = PTR_PTR_1126d0b50;
      func_0x00010c0f40e0(PTR_PTR_1126d0b50,param_2,puVar3,&puStack_58);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puStack_58;
      _objc_retain(puStack_58);
      puVar2 = PTR_PTR_1126d0b48;
      if ((puVar3 == (undefined *)0x0) || (puVar1 != (undefined *)0x0)) {
        puVar6 = puVar1;
        func_0x00010c09e4e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa0200(puVar2,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = puVar5;
        func_0x00010bf34d80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c291640(puVar2,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar3);
    }
  }
  _objc_release(puVar4);
LAB_106b5b3f8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b5b518; end: 106b5b5e3; -[SCPhoneVerifyResponseParser parseVerifyCodeResponse:] */

void FUN_106b5b518(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc0e8;
  _objc_retain(param_3);
  func_0x00010c072220(puVar1,param_2,param_3);
  puVar2 = PTR_PTR_1126d0b58;
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daccd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c261ba0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126bc0e8;
    func_0x00010bf98d80(PTR_PTR_1126bc0e8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bfa0200(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b5b5e4; end: 106b5b707; -[SCProxyNewPasswordChooser initWithPasswordResetToken:usernameOrEmail:passwordService:loginStateTransitionLogger:recoverPasswordLogger:] */

undefined1 *
FUN_106b5b5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5150;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
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



/* Entry: 106b5b708; end: 106b5b897; -[SCProxyNewPasswordChooser checkNewPasswordStrength:completion:] */

void FUN_106b5b708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be51a00(param_1);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b5b898;
  puStack_80 = &UNK_110962648;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  ppuVar2 = &puStack_98;
  uStack_78 = param_4;
  _objc_retainBlock(ppuVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106b5b944;
  puStack_b0 = &UNK_110848708;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_4);
  ppuVar3 = &puStack_c8;
  uStack_a8 = param_4;
  _objc_retainBlock(ppuVar3);
  func_0x00010bfc88e0(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar3);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5b898; end: 106b5b943;  */

void FUN_106b5b898(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51a40();
  _objc_release(lVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be70a80();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3 ^ 1,lVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b5b944; end: 106b5b98b;  */

void FUN_106b5b944(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51a20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106b5b988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2,0,0);
  return;
}



/* Entry: 106b5b98c; end: 106b5ba2b; -[SCProxyNewPasswordChooser _passwordStrengthFromString:] */

undefined8 FUN_106b5b98c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e747b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e69c78);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e74818);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e74858);
        uVar2 = 4;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106b5ba2c; end: 106b5bbb7; -[SCProxyNewPasswordChooser chooseNewPassword:completion:] */

void FUN_106b5ba2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be51ac0(param_1);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b5bbb8;
  puStack_80 = &UNK_110848708;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  ppuVar2 = &puStack_98;
  uStack_78 = param_4;
  _objc_retainBlock(ppuVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106b5bbfc;
  puStack_b0 = &UNK_110962678;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_4);
  ppuVar3 = &puStack_c8;
  uStack_a8 = param_4;
  _objc_retainBlock(ppuVar3);
  func_0x00010bf34fa0(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar3);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5bbb8; end: 106b5bbfb;  */

void FUN_106b5bbb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51b00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106b5bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 106b5bbfc; end: 106b5bc83;  */

void FUN_106b5bbfc(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51ae0();
  _objc_release(lVar1);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    if (param_3 != 0) {
      uVar2 = 1;
      lVar3 = param_3;
      goto LAB_106b5bc6c;
    }
    uVar2 = 2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 3;
  }
  lVar3 = 0;
LAB_106b5bc6c:
  (*pcVar4)(lVar1,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5bc84; end: 106b5bcbf; -[SCProxyNewPasswordChooser _logCheckNewPasswordBegin] */

void FUN_106b5bc84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5bcc0; end: 106b5bcf7; -[SCProxyNewPasswordChooser _logCheckNewPasswordSuccess] */

void FUN_106b5bcc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5bcf8; end: 106b5bcfb; -[SCProxyNewPasswordChooser _logCheckNewPasswordFailure] */

void FUN_106b5bcf8(void)

{
  return;
}



/* Entry: 106b5bcfc; end: 106b5bd37; -[SCProxyNewPasswordChooser _logChooseNewPasswordBegin] */

void FUN_106b5bcfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5bd38; end: 106b5bd7f; -[SCProxyNewPasswordChooser _logChooseNewPasswordSuccess] */

void FUN_106b5bd38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0ae550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logResetPasswordSuccess__112609360,0);
  return;
}



/* Entry: 106b5bd80; end: 106b5bd8b; -[SCProxyNewPasswordChooser _logChooseNewPasswordFailure] */

void FUN_106b5bd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ae490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logResetPasswordFailure__112609330,0);
  return;
}



/* Entry: 106b5bd8c; end: 106b5bddf; -[SCProxyNewPasswordChooser .cxx_destruct] */

void FUN_106b5bd8c(long param_1)

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



/* Entry: 106b5bde0; end: 106b5be63; -[SCProxyPasswordResetInitiator initWithPhoneService:isResolvingChallenge:] */

undefined1 *
FUN_106b5bde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5158;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b5be64; end: 106b5bfa7; -[SCProxyPasswordResetInitiator initiatePasswordResetForUser:sendingVerificationCodeTo:withDeliveryMechanism:completion:] */

void FUN_106b5be64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b5bfa8;
  puStack_70 = &UNK_1109626a8;
  uStack_68 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_4;
  func_0x00010c0cf3c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0fafc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c134f40(uVar4,param_2,uVar2,uVar3,param_3,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110daafd8,param_5 == 1,ppuVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_6);
  return;
}



/* Entry: 106b5bfa8; end: 106b5bfbb;  */

void FUN_106b5bfa8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106b5bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106b5bfbc; end: 106b5bfc7; -[SCProxyPasswordResetInitiator .cxx_destruct] */

void FUN_106b5bfbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b5bfc8; end: 106b5c123; -[SCRecoverPasswordCodeVerificationService initWithPhoneReceivingCode:codeSentViaSMS:passwordResetToken:usernameOrEmail:recoverPasswordPhoneService:loginStateTransitionLogger:recoverPasswordLogger:] */

undefined1 *
FUN_106b5bfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f5160;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b5c124; end: 106b5c2f3; -[SCRecoverPasswordCodeVerificationService verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

void FUN_106b5c124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be57000(param_1);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0fafc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0cf3c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b5c2f4;
  puStack_90 = &UNK_1108492c0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_6);
  func_0x00010c298a40(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5c2f4; end: 106b5c3a3;  */

void FUN_106b5c2f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b5c3a4; end: 106b5c523; -[SCRecoverPasswordCodeVerificationService requestCodeResendWithSuccessBlock:failureBlock:] */

void FUN_106b5c3a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be56fc0(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0cf3c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0fafc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c134f40(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5c524; end: 106b5c577;  */

void FUN_106b5c524(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b5c578; end: 106b5c733; -[SCRecoverPasswordCodeVerificationService _requestPhoneCodeCompletedWithResult:successBlock:failureBlock:] */

void FUN_106b5c578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b5c734;
  puStack_78 = &UNK_11085d1a0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106b5c740;
  puStack_a8 = &UNK_11085d1a0;
  uStack_a0 = param_1;
  uStack_70 = param_1;
  uStack_68 = param_4;
  _objc_retain(param_5);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106b5c788;
  puStack_d8 = &UNK_110858190;
  uStack_d0 = param_1;
  uStack_98 = param_5;
  _objc_retain(param_5);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x106b5c7d0;
  puStack_108 = &UNK_110962738;
  uStack_100 = param_1;
  uStack_c8 = param_5;
  _objc_retain(param_5);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x106b5c818;
  puStack_138 = &UNK_11084aaa8;
  uStack_130 = param_1;
  uStack_f8 = param_5;
  _objc_retain(param_5);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106b5c860;
  puStack_168 = &UNK_11085d1a0;
  uStack_160 = param_1;
  uStack_158 = param_5;
  uStack_128 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0c08e0(param_3,param_2,&puStack_90,&puStack_c0,&puStack_f0,&puStack_120,&puStack_150,
                      &puStack_180);
  _objc_release(uStack_158);
  _objc_release(uStack_128);
  _objc_release(uStack_f8);
  _objc_release(uStack_c8);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b5c734; end: 106b5c73f;  */

void FUN_106b5c734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestPhoneCodeSucceededWithBl_112581f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106b5c740; end: 106b5c85f;  */

void FUN_106b5c740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000106b66b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91620(uVar1,param_2,uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b5c860; end: 106b5c86f;  */

void FUN_106b5c860(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestPhoneCodeFailedWithBlock_112581f28,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 106b5c870; end: 106b5c8f7; -[SCRecoverPasswordCodeVerificationService _verifyPhoneCodeSucceededWithBlock:username:] */

void FUN_106b5c870(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be57020(param_1);
  puVar1 = PTR_PTR_1126af130;
  _objc_alloc(PTR_PTR_1126af130);
  func_0x00010c03fb60();
  _objc_release(param_4);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5c8f8; end: 106b5c983; -[SCRecoverPasswordCodeVerificationService _verifyPhoneCodeFailedWithBlock:errorMessage:connectionFailed:] */

void FUN_106b5c8f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  func_0x00010c0ae580(uVar2);
  puVar1 = PTR_PTR_1126af138;
  func_0x00010c13fb20(PTR_PTR_1126af138);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5c984; end: 106b5c9c7; -[SCRecoverPasswordCodeVerificationService _requestPhoneCodeSucceededWithBlock:] */

void FUN_106b5c984(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be56fe0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5c9c8; end: 106b5ca57; -[SCRecoverPasswordCodeVerificationService _requestPhoneCodeFailedWithBlock:errorMessage:] */

void FUN_106b5c9c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  func_0x00010c0ae4e0(uVar2);
  puVar1 = PTR_PTR_1126af128;
  func_0x00010c13fb20(PTR_PTR_1126af128);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5ca58; end: 106b5ca9f; -[SCRecoverPasswordCodeVerificationService _logPhoneCodeVerificationBegan] */

void FUN_106b5ca58(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ae560(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5caa0; end: 106b5cae3; -[SCRecoverPasswordCodeVerificationService _logPhoneCodeVerificationSucceeded] */

void FUN_106b5caa0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ae5a0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5cae4; end: 106b5cb2f; -[SCRecoverPasswordCodeVerificationService _logPhoneCodeRequestBegan] */

void FUN_106b5cae4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ae520(*(undefined8 *)(param_1 + 0x38),param_2,5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5cb30; end: 106b5cb77; -[SCRecoverPasswordCodeVerificationService _logPhoneCodeRequestSucceeded] */

void FUN_106b5cb30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ae500(*(undefined8 *)(param_1 + 0x38),param_2,5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b5cb78; end: 106b5cbd7; -[SCRecoverPasswordCodeVerificationService .cxx_destruct] */

void FUN_106b5cb78(long param_1)

{
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



/* Entry: 106b5cbd8; end: 106b5ce17; -[SCRecoverPasswordLogger initWithApplicationPreferences:userNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:deviceInfoProvider:deepLinkInfoService:authenticationSessionInfoProvider:loginFlowUUID:countryCode:] */

undefined8 *
FUN_106b5cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f5168;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 106b5ce18; end: 106b5cebf; -[SCRecoverPasswordLogger logForgotPasswordDialogue] */

void FUN_106b5ce18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010be77d20();
  lVar1 = param_1;
  func_0x00010be222a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126d0b60;
  _objc_opt_new(PTR_PTR_1126d0b60);
  func_0x00010c1ec800();
  func_0x00010c1a63a0(puVar2,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c08c0(puVar2,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c17ca80(puVar2,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1b02c0(puVar2,param_2,1);
  func_0x00010be50980(param_1,param_2,puVar2);
  func_0x00010be4fba0(param_1,param_2,2,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b5cec0; end: 106b5cf63; -[SCRecoverPasswordLogger logForgotPasswordStrategy:] */

void FUN_106b5cec0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0b68;
  _objc_opt_new(PTR_PTR_1126d0b68);
  func_0x00010c182d40();
  func_0x00010c1ec800(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c17ca80(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1b02c0(puVar1,param_2,1);
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be4fbc0(param_1,param_2,1,0x11,param_3 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5cf64; end: 106b5d01b; -[SCRecoverPasswordLogger logResetPasswordPageView:] */

void FUN_106b5cf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af0e0;
  _objc_opt_new(PTR_PTR_1126af0e0);
  lVar2 = param_1;
  func_0x00010bdefbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0960(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1d7e80(puVar1,param_2,param_3);
  func_0x00010c1b02c0(puVar1,param_2,1);
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be54800(param_1,param_2,0x2f);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5d01c; end: 106b5d09b; -[SCRecoverPasswordLogger logResetPasswordPageViewWithContext:] */

void FUN_106b5d01c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0b70;
  _objc_opt_new(PTR_PTR_1126d0b70);
  func_0x00010c182d40();
  func_0x00010c1ec800(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c17ca80(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5d09c; end: 106b5d12b; -[SCRecoverPasswordLogger logResetPasswordSuccess:] */

void FUN_106b5d09c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0b78;
  _objc_opt_new(PTR_PTR_1126d0b78);
  func_0x00010c182d40();
  func_0x00010c1ec800(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c17ca80(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010be4fba0(param_1,param_2,2,0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5d12c; end: 106b5d1ab; -[SCRecoverPasswordLogger logResetPasswordFailure:] */

void FUN_106b5d12c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0b80;
  _objc_opt_new(PTR_PTR_1126d0b80);
  func_0x00010c182d40();
  func_0x00010c1ec800(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c17ca80(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010be50980(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5d1ac; end: 106b5d1b7; -[SCRecoverPasswordLogger logResetPasswordAbandoned] */

void FUN_106b5d1ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571888,2,7);
  return;
}



/* Entry: 106b5d1b8; end: 106b5d1c3; -[SCRecoverPasswordLogger logResetPasswordSendPhoneCodeWithContext:] */

void FUN_106b5d1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571888,10,param_3);
  return;
}



/* Entry: 106b5d1c4; end: 106b5d1cf; -[SCRecoverPasswordLogger logResetPasswordSendPhoneCodeSucceedWithContext:] */

void FUN_106b5d1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571888,0xb,param_3);
  return;
}



/* Entry: 106b5d1d0; end: 106b5d1db; -[SCRecoverPasswordLogger logResetPasswordSendPhoneCodeFailWithContext:] */

void FUN_106b5d1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571888,0xc,param_3);
  return;
}



/* Entry: 106b5d1dc; end: 106b5d1e3; -[SCRecoverPasswordLogger logResetPasswordVerifyPhoneCode] */

void FUN_106b5d1dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0xd);
  return;
}



/* Entry: 106b5d1e4; end: 106b5d1eb; -[SCRecoverPasswordLogger logResetPasswordVerifyPhoneCodeSucceed] */

void FUN_106b5d1e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0xe);
  return;
}



/* Entry: 106b5d1ec; end: 106b5d1f3; -[SCRecoverPasswordLogger logResetPasswordVerifyPhoneCodeFail] */

void FUN_106b5d1ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0xf);
  return;
}



/* Entry: 106b5d1f4; end: 106b5d1fb; -[SCRecoverPasswordLogger logResetPasswordChangePassword] */

void FUN_106b5d1f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0x13);
  return;
}



/* Entry: 106b5d1fc; end: 106b5d203; -[SCRecoverPasswordLogger logResetPasswordChangePasswordSucceed] */

void FUN_106b5d1fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0x14);
  return;
}



/* Entry: 106b5d204; end: 106b5d20b; -[SCRecoverPasswordLogger logResetPasswordChangePasswordFail] */

void FUN_106b5d204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0x15);
  return;
}



/* Entry: 106b5d20c; end: 106b5d213; -[SCRecoverPasswordLogger logResetPasswordCheckPasswordStrength] */

void FUN_106b5d20c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0x10);
  return;
}



/* Entry: 106b5d214; end: 106b5d21b; -[SCRecoverPasswordLogger logResetPasswordCheckPasswordStrengthSucceed] */

void FUN_106b5d214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0x11);
  return;
}



/* Entry: 106b5d21c; end: 106b5d223; -[SCRecoverPasswordLogger logResetPasswordCheckPasswordStrengthFail] */

void FUN_106b5d21c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571880,0x12);
  return;
}



/* Entry: 106b5d224; end: 106b5d2fb; -[SCRecoverPasswordLogger _prepare] */

void FUN_106b5d224(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8b00();
  *(char *)(param_1 + 0x48) = (char)uVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b5d2fc; end: 106b5d3b7; -[SCRecoverPasswordLogger _getResetPasswordUUID] */

void FUN_106b5d2fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b5d3b8; end: 106b5d437; -[SCRecoverPasswordLogger _logBlizzardEvent:] */

void FUN_106b5d3b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLongClientId__11264dd30);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f8f20(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5d438; end: 106b5d557; -[SCRecoverPasswordLogger _logGrapheneWithPage:] */

void FUN_106b5d438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d0b88;
  func_0x00010c0b4320(PTR_PTR_1126d0b88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      (*(byte *)(param_1 + 0x48) ^ 0xff) & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daedb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daedd8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beed600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5d558; end: 106b5d55f; -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:] */

void FUN_106b5d558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571888,param_3,0x11);
  return;
}



/* Entry: 106b5d560; end: 106b5d567; -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:context:] */

void FUN_106b5d560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAccountRecoveryFlowWithActio_112571890,param_3,param_4,4);
  return;
}



/* Entry: 106b5d568; end: 106b5d56f; -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:context:credential:] */

void FUN_106b5d568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logAccountRecoveryFlowWithActio_112571898);
  return;
}



/* Entry: 106b5d570; end: 106b5dacb; -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:context:credential:strategy:] */

void FUN_106b5d570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126d0b90;
  _objc_opt_new(PTR_PTR_1126d0b90);
  lVar2 = param_1;
  func_0x00010bdefbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0960(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c161620(puVar1,param_2,param_3);
  func_0x00010c182d40(puVar1,param_2,param_4);
  func_0x00010c186060(puVar1,param_2,param_5);
  func_0x00010c20e200(puVar1,param_2,param_6);
  func_0x00010be50980(param_1,param_2,puVar1);
  func_0x00010b9efa88(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc10();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc50();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      (*(byte *)(param_1 + 0x48) ^ 0xff) & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d0b88;
  func_0x00010beed580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae878,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e753f8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e753d8,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beed600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126d0b88;
  func_0x00010beed5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110daf5b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae878,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110daedb8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beed600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126d0b88;
  func_0x00010beed5c0(PTR_PTR_1126d0b88);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110daf5b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110e753f8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110daedb8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beed600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126d0b88;
  func_0x00010beed5e0(PTR_PTR_1126d0b88);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daf5b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110dae878,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daedb8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beed600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5dacc; end: 106b5db27; -[SCRecoverPasswordLogger _createLoginMetadata] */

void FUN_106b5dacc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af0e8;
  _objc_opt_new(PTR_PTR_1126af0e8);
  func_0x00010c1a63a0();
  func_0x00010c1c0c20(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c17ca80(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b5db28; end: 106b5dbdb; -[SCRecoverPasswordLogger .cxx_destruct] */

void FUN_106b5db28(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 106b5dbdc; end: 106b5dd03; -[SCRecoverPasswordLoginCodeService initWithLoginService:passwordResetInitiator:loginLogger:loginStateTransitionLogger:networkRequestIdProvider:] */

undefined1 *
FUN_106b5dbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f5170;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b5dd04; end: 106b5dec3; -[SCRecoverPasswordLoginCodeService submitEmail:successBlock:failureBlock:] */

void FUN_106b5dd04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d0b98;
  _objc_retain(param_3);
  func_0x00010bf8db40(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae280();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aefd8;
  func_0x00010bf09840(PTR_PTR_1126aefd8,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b5dec4;
  puStack_60 = &UNK_110962858;
  lStack_58 = lVar2;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf059c0(uVar3,param_2,puVar1,lVar2,&puStack_78);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(lVar2);
  return;
}



/* Entry: 106b5dec4; end: 106b5e0c3;  */

void FUN_106b5dec4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010bf6f520(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0920(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b5e0c4; end: 106b5e30b;  */

void FUN_106b5e0c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d0ba0;
  func_0x00010c13fb20(PTR_PTR_1126d0ba0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5e30c; end: 106b5e42b; -[SCRecoverPasswordLoginCodeService _loginWithEmailPasswordSuccess:networkRequestId:submitRequestTime:failureBlock:] */

void FUN_106b5e30c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  _objc_release(param_3);
  func_0x00010c0ae2a0(uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0ba0;
  func_0x00010c2823a0(PTR_PTR_1126d0ba0);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b5e42c; end: 106b5e617; -[SCRecoverPasswordLoginCodeService _loginWithEmailPasswordFailure:networkRequestId:submitRequestTime:successBlock:failureBlock:] */

void FUN_106b5e42c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  dVar7 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010be91480(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdfff40(param_2,param_3,lVar2);
  _CACurrentMediaTime();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bfcfaa0(param_4);
  uVar6 = param_4;
  func_0x00010c119500(param_4);
  _objc_release(param_4);
  func_0x00010c0ae2a0(uVar4,param_3,0,0,param_5,uVar5,uVar6,(long)((dVar7 - param_1) * 1000.0),
                      (char)lVar3);
  _objc_release(param_5);
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b5e618;
  puStack_90 = &UNK_110962888;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106b5e6c0;
  puStack_b8 = &UNK_110848438;
  lStack_88 = param_2;
  uStack_80 = param_6;
  _objc_retain(param_7);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x106b5e710;
  puStack_e0 = &UNK_110849530;
  uStack_d8 = param_7;
  uStack_b0 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0c0980(lVar2,param_3,&puStack_a8,&puStack_d0,&puStack_f8);
  _objc_release(uStack_d8);
  _objc_release(uStack_b0);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b5e618; end: 106b5e6bf;  */

void FUN_106b5e618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0ba8;
  func_0x00010c0db140(PTR_PTR_1126d0ba8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b5e6c0; end: 106b5e763;  */

void FUN_106b5e6c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d0ba0;
  func_0x00010c13fb20(PTR_PTR_1126d0ba0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5e764; end: 106b5e987; -[SCRecoverPasswordLoginCodeService initiatePasswordResetForUser:sendingVerificationCodeTo:withDeliveryMechanism:completion:] */

void FUN_106b5e764(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d0b98;
  _objc_retain(param_4);
  func_0x00010c0fb340(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar5);
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae280();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126aed98;
  uVar5 = param_4;
  func_0x00010c0cf3c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0fafc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5dc0(puVar1,param_2,uVar5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aefd8;
  uVar5 = param_4;
  func_0x00010c0fafc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf09840(puVar4,param_2,0,puVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b5e988;
  puStack_68 = &UNK_1109628b8;
  lStack_60 = lVar2;
  uStack_58 = param_6;
  _objc_retain(param_6);
  func_0x00010bf059c0(uVar3,param_2,puVar4,lVar2,&puStack_80);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 106b5e988; end: 106b5eb87;  */

void FUN_106b5e988(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010bf6f520(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0920(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b5eb88; end: 106b5edcf;  */

void FUN_106b5eb88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d0b48;
  func_0x00010bfa0200(PTR_PTR_1126d0b48,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5edd0; end: 106b5ef07; -[SCRecoverPasswordLoginCodeService _loginWithPhonePasswordSuccess:usernameOrEmail:phoneNumber:deliveryMechanism:networkRequestId:submitRequestTime:completion:] */

void FUN_106b5edd0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfcfaa0(param_4);
  uVar3 = param_4;
  func_0x00010c119500(param_4);
  _objc_release(param_4);
  func_0x00010c0ae2a0(uVar1,param_3,0,1,param_8,uVar2,uVar3,(long)((dVar4 - param_1) * 1000.0),0);
  _objc_release(param_8);
  _objc_release(uVar1);
  func_0x00010c064d60(*(undefined8 *)(param_2 + 0x20),param_3,param_5,param_6,param_7,param_9);
  _objc_release(param_9);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b5ef08; end: 106b5f13f; -[SCRecoverPasswordLoginCodeService _loginWithPhonePasswordFailure:usernameOrEmail:phoneNumber:deliveryMechanism:networkRequestId:submitRequestTime:completion:] */

void FUN_106b5ef08(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  dVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010be91480(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdfff40(param_2,param_3,lVar2);
  _CACurrentMediaTime();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bfcfaa0(param_4);
  uVar6 = param_4;
  func_0x00010c119500(param_4);
  _objc_release(param_4);
  func_0x00010c0ae2a0(uVar4,param_3,0,1,param_8,uVar5,uVar6,(long)((dVar7 - param_1) * 1000.0),
                      (char)lVar3);
  _objc_release(param_8);
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b5f140;
  puStack_90 = &UNK_110962888;
  lStack_88 = param_2;
  _objc_retain(param_9);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106b5f1e8;
  puStack_b8 = &UNK_110848438;
  uStack_80 = param_9;
  _objc_retain(param_9);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106b5f238;
  puStack_100 = &UNK_110875f70;
  lStack_f8 = param_2;
  uStack_f0 = param_5;
  uStack_e8 = param_6;
  uStack_e0 = param_9;
  uStack_d8 = param_7;
  uStack_b0 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c0980(lVar2,param_3,&puStack_a8,&puStack_d0,&puStack_118);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_b0);
  _objc_release(uStack_80);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b5f140; end: 106b5f1e7;  */

void FUN_106b5f140(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0b48;
  func_0x00010c0b63e0(PTR_PTR_1126d0b48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b5f1e8; end: 106b5f237;  */

void FUN_106b5f1e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d0b48;
  func_0x00010bfa0200(PTR_PTR_1126d0b48,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5f238; end: 106b5f24f;  */

void FUN_106b5f238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_initiatePasswordResetForUser_sen_1125f6d68,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106b5f250; end: 106b5f3fb; -[SCRecoverPasswordLoginCodeService requestCodeResendWithSuccessBlock:failureBlock:] */

void FUN_106b5f250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1605e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d1e0(*(undefined8 *)(param_1 + 0x30));
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b5f3fc;
  puStack_78 = &UNK_11084c4f0;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_retain(param_4);
  func_0x00010c137e80(uVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5f3fc; end: 106b5f40f;  */

void FUN_106b5f3fc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106b5f408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106b5f410; end: 106b5f463;  */

void FUN_106b5f410(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be920e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b5f464; end: 106b5f4c7; -[SCRecoverPasswordLoginCodeService _resendMagicCodeFailure:errorMessage:] */

void FUN_106b5f464(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af128;
  func_0x00010c13fb20(PTR_PTR_1126af128);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b5f4c8; end: 106b5f75f; -[SCRecoverPasswordLoginCodeService verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

void FUN_106b5f4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  lVar3 = param_1;
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c40(uVar2);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1605e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d1e0(*(undefined8 *)(param_1 + 0x30));
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106b5f760;
  puStack_a0 = &UNK_1108483d8;
  _objc_copyWeak(auStack_88,auStack_80);
  lStack_98 = lVar1;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_6);
  func_0x00010c0a8780(uVar2);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5f760; end: 106b5f807;  */

void FUN_106b5f760(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b5f808; end: 106b5f94b; -[SCRecoverPasswordLoginCodeService _verifyCodeSuccess:networkRequestId:successBlock:] */

void FUN_106b5f808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar2);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af130;
  _objc_alloc(PTR_PTR_1126af130);
  func_0x00010c03fb60();
  _objc_release(param_3);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b5f94c; end: 106b5fd17; -[SCRecoverPasswordLoginCodeService _verifyCodeFailure:networkRequestId:failureBlock:] */

void FUN_106b5f94c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106b5fd18;
  uStack_70 = 0x106b5fd28;
  uStack_68 = 0;
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  lVar2 = param_1;
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0();
  func_0x00010be5ac40();
  _objc_retainAutoreleasedReturnValue();
  FUN_106b78380();
  func_0x00010bfcfaa0();
  func_0x00010c119500();
  func_0x00010c0a9c80(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126af138;
  func_0x00010c13fb20(PTR_PTR_1126af138);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
  }
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b5fd18; end: 106b5fd2f;  */

void FUN_106b5fd18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b5fd30; end: 106b6003f;  */

void FUN_106b5fd30(long param_1,undefined8 param_2)

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



/* Entry: 106b60040; end: 106b60127; -[SCRecoverPasswordLoginCodeService _loginIdentifier] */

void FUN_106b60040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106b5fd18;
  uStack_30 = 0x106b5fd28;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b60128;
  puStack_60 = &UNK_110842b58;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b60160;
  puStack_88 = &UNK_1109628e8;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0bd9c0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b60128; end: 106b6015f;  */

void FUN_106b60128(long param_1,undefined8 param_2)

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



/* Entry: 106b60160; end: 106b6020b;  */

void FUN_106b60160(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126aed98;
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c0cf3c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0fafc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfb5dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b6020c; end: 106b602d3; -[SCRecoverPasswordLoginCodeService _loginSource] */

undefined8 FUN_106b6020c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_70 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b602d4;
  puStack_50 = &UNK_110842b58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106b602e8;
  puStack_78 = &UNK_1109628e8;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0bd9c0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_68,&puStack_90);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106b602d4; end: 106b602fb;  */

void FUN_106b602d4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  return;
}


