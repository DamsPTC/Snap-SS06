/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053f997c; end: 1053f99cf; -[SCUserEmailMutatorImpl .cxx_destruct] */

void FUN_1053f997c(long param_1)

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



/* Entry: 1053f99d0; end: 1053f9b4b; -[SCUserPhoneMutatorImpl initWithPhoneNumberUpdatesPublisher:tentativePhoneNumberUpdatesPublisher:authenticatedPhoneService:twoFAServices:phoneNumberProvider:tentativePhoneNumberProvider:settingsEventLogger:] */

undefined1 *
FUN_1053f99d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e82b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053f9b4c; end: 1053f9d13; -[SCUserPhoneMutatorImpl beginUserPhoneMutationWithMobile:countryCode:verificationMethod:isReverifying:isForResend:verificationContext:onComplete:] */

void FUN_1053f9b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000000);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1053f9d14;
  puStack_a8 = &UNK_110885bb0;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(in_stack_00000000);
  uStack_98 = in_stack_00000000;
  ppuVar2 = &puStack_c0;
  uStack_88 = in_x7;
  _objc_retainBlock();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1053f9eec;
  puStack_d0 = &UNK_11084c5e0;
  _objc_retain(in_stack_00000000);
  uStack_c8 = in_stack_00000000;
  ppuVar3 = &puStack_e8;
  _objc_retainBlock();
  func_0x00010c2886e0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(ppuVar3);
  _objc_release(uStack_c8);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(in_stack_00000000);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f9d14; end: 1053f9eeb;  */

void FUN_1053f9d14(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af2d8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c02c420();
  _objc_release(param_4);
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      puVar2 = (undefined *)(param_1 + 0x30);
      _objc_loadWeakRetained();
      puVar3 = puVar2;
      func_0x00010bedcf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b8a10;
      lVar6 = *(long *)(param_1 + 0x28);
      if (puVar3 == (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b8a10;
        func_0x00010c261be0(PTR_PTR_1126b8a10);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
      }
      else {
        puVar5 = puVar3;
        func_0x00010c27db00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c27dae0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c261b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))(lVar6,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar4);
      }
      _objc_release(puVar5);
      goto LAB_1053f9de8;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126b8a10;
    func_0x00010c261be0(PTR_PTR_1126b8a10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be84580();
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126b8a10;
    func_0x00010c0d7520(PTR_PTR_1126b8a10);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar6 + 0x10))(lVar6,puVar3);
LAB_1053f9de8:
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053f9eec; end: 1053f9f33;  */

void FUN_1053f9eec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8a10;
  func_0x00010bf993e0(PTR_PTR_1126b8a10);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053f9f34; end: 1053fa0a7; -[SCUserPhoneMutatorImpl finishUserPhoneMutationWithCode:verificationType:onComplete:] */

void FUN_1053f9f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1053fa0a8;
  puStack_88 = &UNK_110885be0;
  uStack_70 = param_4;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  ppuVar2 = &puStack_a0;
  uStack_80 = param_5;
  _objc_retainBlock(ppuVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1053fa21c;
  puStack_b8 = &UNK_110885c10;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  uStack_a8 = param_4;
  _objc_retainBlock(&puStack_d0);
  func_0x00010c298a60(*(undefined8 *)(param_1 + 0x18));
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053fa0a8; end: 1053fa21b;  */

void FUN_1053fa0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010bee8760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b8a18;
    lVar5 = *(long *)(param_1 + 0x20);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b8a18;
      func_0x00010c261be0(PTR_PTR_1126b8a18);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
    }
    else {
      puVar4 = puVar2;
      func_0x00010c27db00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c27dae0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c261b60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b8a18;
    func_0x00010c261be0(PTR_PTR_1126b8a18);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053fa21c; end: 1053fa34f;  */

void FUN_1053fa21c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_5;
  _objc_retain(param_5);
  if (param_2 == 0) {
    func_0x0001053fe480();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  lVar4 = param_5;
  func_0x00010c121fa0();
  if ((int)lVar4 == 0) {
    uVar2 = param_3;
    func_0x00010bf1f3c0();
    puVar3 = PTR_PTR_1126b8a18;
    if ((int)uVar2 == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x28) == 1) {
        func_0x00010bf98a60();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfbed20(PTR_PTR_1126b8a18);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010bf989e0(PTR_PTR_1126b8a18);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b8a18;
    func_0x00010bf98e00(PTR_PTR_1126b8a18);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053fa350; end: 1053fa47b; -[SCUserPhoneMutatorImpl _updatePhoneNumberSuccess:verifyResponse:] */

void FUN_1053fa350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  uVar5 = param_3;
  func_0x00010c0cf3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  func_0x00010c0b2bc0(uVar7,param_2,0xc,uVar4,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  func_0x00010bedc860(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053fa47c; end: 1053fa5c7; -[SCUserPhoneMutatorImpl _verifyPhoneNumberSuccess:verifyResponse:] */

void FUN_1053fa47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf1f3c0();
  uVar4 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  func_0x00010c0b2bc0(uVar6,param_2,0xc,uVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bedc860(param_1,param_2,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053fa5c8; end: 1053fa71b; -[SCUserPhoneMutatorImpl _updateOrVerifySuccess:verifyResponse:] */

void FUN_1053fa5c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  func_0x00010be84540(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126af2d8;
  _objc_alloc(PTR_PTR_1126af2d8);
  func_0x00010c02c420();
  func_0x00010be84580(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af980;
  _objc_alloc(PTR_PTR_1126af980);
  uVar2 = param_4;
  func_0x00010c081b60(param_4);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27db80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf60280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c079620();
  func_0x00010c01f720(puVar1,param_2,uVar2,uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27db60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c28b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1053fa71c; end: 1053fa723; -[SCUserPhoneMutatorImpl _publishUpdatedPhoneNumber:] */

void FUN_1053fa71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 1053fa724; end: 1053fa72b; -[SCUserPhoneMutatorImpl _publishUpdatedTentativePhoneNumber:] */

void FUN_1053fa724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028);
  return;
}



/* Entry: 1053fa72c; end: 1053fa797; -[SCUserPhoneMutatorImpl .cxx_destruct] */

void FUN_1053fa72c(long param_1)

{
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



/* Entry: 1053fa798; end: 1053fa9b7; -[SCUserQuickAddPrivacyMutatorImpl initWithUserId:performerProvider:updatesPublisher:quickAddPrivacyProvider:deltaSyncUploadService:settingsEventLogger:] */

undefined1 *
FUN_1053fa798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e82b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0440;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b0438;
    func_0x00010c0d5160(PTR_PTR_1126b0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b0448;
    _objc_alloc();
    func_0x00010c02d480();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053fa9b8; end: 1053fad1b; -[SCUserQuickAddPrivacyMutatorImpl updateQuickAddPrivacy:onComplete:] */

void FUN_1053fa9b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b8130;
  _objc_alloc();
  func_0x00010c019140();
  puVar4 = PTR_PTR_1126b8138;
  FUN_1053f6eb4(param_3);
  func_0x00010c0b50a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfa58;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = ppuVar5;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR_PTR_1126b8148;
  _objc_alloc(PTR_PTR_1126b8148);
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0202a0(puVar7);
  _objc_release(puVar8);
  _objc_initWeak(auStack_80,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010c11c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar9);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b15b0;
  func_0x00010bf9a640(PTR_PTR_1126b15b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar2);
  puVar10 = PTR_PTR_1126b15b0;
  func_0x00010bf9a640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(param_3);
  uVar9 = 4;
  func_0x00010c0b2bc0(uVar1);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(uVar9);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be6af60();
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053fad1c; end: 1053fad6f;  */

void FUN_1053fad1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6af60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053fad70; end: 1053fae1b; -[SCUserQuickAddPrivacyMutatorImpl _onPutItemCompletionWithQuickAddPrivacy:error:onComplete:] */

void FUN_1053fad70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b8a20;
  if (param_4 == 0) {
    _objc_retain(param_5);
    func_0x00010bede400(param_1);
  }
  else {
    lVar1 = param_5;
    _objc_retain(param_5);
    func_0x0001053fe498();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
    _objc_release(param_5);
    _objc_release(puVar2);
    param_5 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053fae1c; end: 1053fae8f; -[SCUserQuickAddPrivacyMutatorImpl _updateQuickAddPrivacySucceedTo:onComplete:] */

void FUN_1053fae1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c0d9840(uVar2);
  puVar1 = PTR_PTR_1126b8a20;
  func_0x00010c261740(PTR_PTR_1126b8a20);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fae90; end: 1053faf07; -[SCUserQuickAddPrivacyMutatorImpl .cxx_destruct] */

void FUN_1053fae90(long param_1)

{
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



/* Entry: 1053faf08; end: 1053fb103; -[SCUserSaturnPrivacyMutatorImpl initWithUserId:performerProvider:updatesPublisher:saturnPrivacyProvider:deltaSyncUploadService:] */

undefined1 *
FUN_1053faf08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e82c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0440;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b0438;
    func_0x00010c0d5160(PTR_PTR_1126b0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b0448;
    _objc_alloc();
    func_0x00010c02d480();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053fb104; end: 1053fb447; -[SCUserSaturnPrivacyMutatorImpl updateSaturnPrivacy:callback:] */

void FUN_1053fb104(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8130;
  _objc_alloc(PTR_PTR_1126b8130);
  func_0x00010c019140();
  puStack_130 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1053fb448;
  puStack_c0 = &UNK_110847658;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1053fb458;
  puStack_e8 = &UNK_110847658;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1053fb46c;
  puStack_110 = &UNK_110847658;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x1053fb480;
  puStack_138 = &UNK_110847658;
  puStack_108 = puStack_130;
  puStack_e0 = puStack_130;
  puStack_b8 = puStack_130;
  puStack_a8 = puStack_130;
  func_0x00010c0c0f20(param_3);
  puVar2 = PTR_PTR_1126b8138;
  func_0x00010c0b50a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfa70;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_90 = ppuVar3;
  puStack_88 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126b8148;
  _objc_alloc(PTR_PTR_1126b8148);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0202a0(puVar5);
  _objc_release(puVar6);
  _objc_initWeak(auStack_158,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c11c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_160,auStack_158);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  __Block_object_dispose(&uStack_b0,8);
  __Unwind_Resume();
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1053fb448; end: 1053fb493;  */

void FUN_1053fb448(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1053fb494; end: 1053fb4e7;  */

void FUN_1053fb494(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6af80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053fb4e8; end: 1053fb58f; -[SCUserSaturnPrivacyMutatorImpl _onPutItemCompletionWithSaturnPrivacy:error:onComplete:] */

void FUN_1053fb4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8a28;
  if (param_4 == 0) {
    _objc_retain(param_5);
    func_0x00010bededc0(param_1);
  }
  else {
    _objc_retain(param_5);
    func_0x00010bf9ffa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar1,param_4);
    _objc_release(param_5);
    param_5 = puVar1;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053fb590; end: 1053fb607; -[SCUserSaturnPrivacyMutatorImpl _updateSaturnPrivacySucceedTo:onComplete:] */

void FUN_1053fb590(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c0d9840(uVar2);
  puVar1 = PTR_PTR_1126b8a28;
  func_0x00010c261740(PTR_PTR_1126b8a28);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fb608; end: 1053fb673; -[SCUserSaturnPrivacyMutatorImpl .cxx_destruct] */

void FUN_1053fb608(long param_1)

{
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



/* Entry: 1053fb674; end: 1053fb893; -[SCUserSnapContactsPrivacyMutatorImpl initWithUserId:deltaSyncUploadService:performerProvider:updatesPublisher:snapContactsPrivacyProvider:settingsEventLogger:] */

undefined1 *
FUN_1053fb674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e82c8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0440;
    _objc_alloc();
    puVar5 = PTR_PTR_1126b0438;
    func_0x00010c0d5160(PTR_PTR_1126b0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126b0448;
    _objc_alloc();
    func_0x00010c02d480();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053fb894; end: 1053fbcdf; -[SCUserSnapContactsPrivacyMutatorImpl updateSnapContactsPrivacy:onComplete:] */

void FUN_1053fb894(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfa88;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8138;
  lVar2 = param_3;
  ppuStack_98 = ppuVar1;
  func_0x00010c2939e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053f70e0();
  func_0x00010c0b50a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfaa0;
  puStack_80 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8138;
  ppuStack_90 = ppuVar4;
  func_0x00010bf01180(param_3);
  func_0x00010bf1f4c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfab8;
  puStack_78 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b8138;
  ppuStack_88 = ppuVar6;
  func_0x00010bf01160(param_3);
  func_0x00010bf1f4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_initWeak(auStack_a0,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8148;
  _objc_alloc(PTR_PTR_1126b8148);
  puVar5 = PTR_PTR_1126b8130;
  _objc_alloc(PTR_PTR_1126b8130);
  func_0x00010c019140();
  puVar7 = puVar8;
  func_0x00010bf51e00(puVar8);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0202a0(puVar3);
  uVar11 = uVar9;
  func_0x00010c11c640(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar11);
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c2939e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  FUN_1053f6fac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2939e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  FUN_1053f6fac();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 2;
  func_0x00010c0b2be0(uVar12);
  _objc_release(lVar15);
  _objc_release(lVar2);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(uVar16);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be6afa0();
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053fbce0; end: 1053fbd33;  */

void FUN_1053fbce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6afa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053fbd34; end: 1053fbe03; -[SCUserSnapContactsPrivacyMutatorImpl _onPutItemCompletionWithSnapContactsPrivacy:error:callback:] */

void FUN_1053fbd34(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8a30;
  if (param_4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_5);
    func_0x00010c0d9840(uVar3);
    puVar2 = PTR_PTR_1126b8a30;
    func_0x00010c261740(PTR_PTR_1126b8a30);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
  }
  else {
    puVar2 = param_5;
    _objc_retain(param_5);
    func_0x0001053fe4b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar1);
    _objc_release(param_5);
    param_5 = puVar1;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053fbe04; end: 1053fbe7b; -[SCUserSnapContactsPrivacyMutatorImpl .cxx_destruct] */

void FUN_1053fbe04(long param_1)

{
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



/* Entry: 1053fbe7c; end: 1053fbf1f; -[SCUserSnapshotSnapsMutatorImpl initWithUpdatesPublisher:snapshotSnapsProvider:] */

undefined1 *
FUN_1053fbe7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e82d0;
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



/* Entry: 1053fbf20; end: 1053fbfef; -[SCUserSnapshotSnapsMutatorImpl updateLocalSnapshotSnaps:] */

void FUN_1053fbf20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  if (uVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else {
    if (param_3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) goto LAB_1053fbfd4;
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
LAB_1053fbfd4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053fbff0; end: 1053fc01f; -[SCUserSnapshotSnapsMutatorImpl .cxx_destruct] */

void FUN_1053fbff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053fc020; end: 1053fc13f; -[SCUserUsernameMutatorImpl initWithUpdatesPublisher:changeUsernameService:supportedLanguagesFetchBlock:allowRecycledUsernameFetchBlock:] */

undefined1 *
FUN_1053fc020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e82d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053fc140; end: 1053fc163; -[SCUserUsernameMutatorImpl usernameMutationInfo] */

void FUN_1053fc140(long param_1)

{
  func_0x00010be120e0();
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1053fc164; end: 1053fc3af; -[SCUserUsernameMutatorImpl updateUsername:onComplete:] */

void FUN_1053fc164(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  FUN_1053f5548();
  uVar2 = param_3;
  if (lVar1 == 0) {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126b8a38;
    _objc_opt_new(PTR_PTR_1126b8a38);
    func_0x00010c1ccc40();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010af82634();
    func_0x00010c0df7c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dacc0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    lVar6 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar6 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar7 + 0x10))();
    lVar1 = lVar6;
    FUN_1053fc3b0(lVar6,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_initWeak(auStack_48,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar2);
    _objc_retain(param_4);
    func_0x00010bf35400(uVar8);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee54c0(param_1);
    _objc_release(puVar4);
    (**(code **)(param_4 + 0x10))(param_4,1,0);
  }
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1053fc3b0; end: 1053fc4bf;  */

void FUN_1053fc3b0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_2 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1053fc4c0; end: 1053fc56b;  */

void FUN_1053fc4c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c252ee0();
  if ((int)uVar1 == 1) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bee31a0();
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = param_2;
    func_0x00010bfe4e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053fc56c; end: 1053fc68f; -[SCUserUsernameMutatorImpl _fetchLatestUsernameMutationInfo] */

void FUN_1053fc56c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))();
  lVar3 = lVar1;
  FUN_1053fc3b0(lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR_PTR_1126b8a40;
  _objc_opt_new(PTR_PTR_1126b8a40);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc6de0(uVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar3);
  return;
}



/* Entry: 1053fc690; end: 1053fc6f7;  */

void FUN_1053fc690(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbe20();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053fc6f8; end: 1053fc737; -[SCUserUsernameMutatorImpl _updateUsernameSuccess:] */

void FUN_1053fc6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be120e0(param_1);
  func_0x00010bee54c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053fc738; end: 1053fc73f; -[SCUserUsernameMutatorImpl _updatedUsername:] */

void FUN_1053fc738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 1053fc740; end: 1053fc88f; -[SCUserUsernameMutatorImpl _updateMutationInfo:error:] */

void FUN_1053fc740(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126b8a48;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (param_4 == 0) {
    param_4 = param_3;
    func_0x00010c08afc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c1552c0();
    func_0x00010bf655e0((double)lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    lVar1 = param_3;
    func_0x00010bf8be00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1552c0();
    func_0x00010bf655e0((double)lVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2618c0(puVar5,param_2,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c09e4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993e0(puVar5,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar5);
    puVar2 = puVar5;
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053fc890; end: 1053fc8e3; -[SCUserUsernameMutatorImpl .cxx_destruct] */

void FUN_1053fc890(long param_1)

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



/* Entry: 1053fc8e4; end: 1053fc957; -[UNISCChangeUsernamePbChangeUsernameService initWithUnifiedGrpcService:] */

undefined1 * FUN_1053fc8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e82e0;
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



/* Entry: 1053fc958; end: 1053fca3b; -[UNISCChangeUsernamePbChangeUsernameService getLatestUsernameChangeDateWithRequest:callOptionsBuilder:handler:] */

void FUN_1053fc958(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8a50;
  _objc_opt_class(PTR_PTR_1126b8a50);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9918,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053fca3c; end: 1053fcb1f; -[UNISCChangeUsernamePbChangeUsernameService changeUsernameWithRequest:callOptionsBuilder:handler:] */

void FUN_1053fca3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8a58;
  _objc_opt_class(PTR_PTR_1126b8a58);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9938,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053fcb20; end: 1053fcb2b; -[UNISCChangeUsernamePbChangeUsernameService .cxx_destruct] */

void FUN_1053fcb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053fcb2c; end: 1053fccdf; -[SCUserInfoPreferencesBasedProvider initWithPreferencesKey:userPreferences:updates:currentValueProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1053fcb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e82e8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_6;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112723018);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112723018) = uVar6;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    puVar3 = puVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272301c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272301c) = puVar3;
    _objc_release(uVar6);
    puVar4 = puVar1;
    func_0x00010c0ec6c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uVar6 = param_5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112723020);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112723020) = uVar6;
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1053fcce0; end: 1053fcd5b;  */

void FUN_1053fcce0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1d0560(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fcd5c; end: 1053fcd6f; -[SCUserInfoPreferencesBasedProvider currentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053fcd5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053fcd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112723018) + 0x10))();
  return;
}



/* Entry: 1053fcd70; end: 1053fcdc3; -[SCUserInfoPreferencesBasedProvider optionalCurrentValue] */

void FUN_1053fcd70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053fcdc4; end: 1053fcdf3; -[SCUserInfoPreferencesBasedProvider updates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053fcdc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272301c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053fcdf4; end: 1053fce43; -[SCUserInfoPreferencesBasedProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053fcdf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112723020,0);
  _objc_storeStrong(param_1 + _DAT_11272301c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112723018,0);
  return;
}



/* Entry: 1053fce44; end: 1053fcf83; -[SCUserInfoPreferencesBasedProviderFactory providerWithInfoType:preferencesKey:updatesObservable:] */

void FUN_1053fce44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b8a60;
  _objc_alloc(PTR_PTR_1126b8a60);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  func_0x00010c038340(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053fcf84; end: 1053fcfeb;  */

void FUN_1053fcf84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = uVar4;
  FUN_1053f6e64(uVar4);
  lVar3 = lVar1;
  func_0x00010bdf7500(lVar1,param_2,uVar4,uVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1053fcfec; end: 1053fd08b; -[SCUserInfoPreferencesBasedProviderFactory _currentValueWithInfoType:infoTypeClass:preferencesKey:] */

void FUN_1053fcfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,param_4);
    uVar3 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1053fd08c; end: 1053fd097; -[SCUserInfoPreferencesBasedProviderFactory .cxx_destruct] */

void FUN_1053fd08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053fd098; end: 1053fd0d7; -[SCUserInfoExperimentConfiguredProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053fd098(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112723030,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112723028,0);
  return;
}



/* Entry: 1053fd0d8; end: 1053fd103; -[SCUserInfoDeltaSyncProcessor type] */

void FUN_1053fd0d8(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053fd104; end: 1053fd7eb; -[SCUserInfoDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_1053fd104(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  code *param_5,code *param_6,long param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  code *pcVar16;
  undefined **unaff_x21;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_600;
  undefined **ppuStack_5f8;
  code *pcStack_5f0;
  undefined *puStack_5e8;
  undefined **ppuStack_5e0;
  undefined *puStack_5d8;
  undefined **ppuStack_5d0;
  code *pcStack_5c8;
  code *pcStack_5c0;
  undefined **ppuStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_530;
  long lStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined **appuStack_4f0 [17];
  long lStack_468;
  undefined *puStack_460;
  long lStack_458;
  code *pcStack_450;
  code *pcStack_448;
  long lStack_440;
  undefined **ppuStack_438;
  code *pcStack_430;
  code *pcStack_428;
  undefined1 *puStack_420;
  code *pcStack_418;
  undefined8 *puStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [31];
  undefined1 uStack_2b1;
  undefined **appuStack_2b0 [9];
  undefined1 auStack_268 [24];
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_408 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  pcStack_400 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  pcStack_3f8 = param_5;
  if (param_4 != 0) {
    _objc_opt_class(PTR_PTR_1126b8990);
    if (param_7 == 0) {
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_240,param_7);
    }
    puVar2 = &uStack_2b1;
    func_0x0001004c2b1c(puVar2);
    puVar3 = puStack_408;
    func_0x00010c087060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_1053f6a4c();
    _objc_retainAutoreleasedReturnValue();
    FUN_1053fd7ec(auStack_2d0,puVar4);
    func_0x0001004c2e3c(appuStack_2b0,0xc,puVar2,auStack_2d0);
    puStack_2e8 = (undefined1 *)0x0;
    puStack_2e0 = (undefined1 *)0x0;
    uStack_2d8 = 0;
    uStack_2ec = 0;
    pcVar16 = (code *)&uStack_240;
    func_0x0001000e77a0(pcVar16,appuStack_2b0,&puStack_2e8,&uStack_2ec);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_2e8 != (undefined1 *)0x0) {
      puStack_2e0 = puStack_2e8;
      __ZdlPv();
    }
    plVar1 = plStack_248;
    appuStack_2b0[0] = &PTR_FUN_110862700;
    plStack_248 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_250;
    plStack_250 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_2e8 = auStack_268;
    func_0x000100105004(&puStack_2e8);
    puStack_2e8 = auStack_2d0;
    func_0x000100105004(&puStack_2e8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x0001000e76e0(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    _objc_retain(pcVar16);
    pcVar5 = pcVar16;
    func_0x00010bf52a60();
    if (pcVar5 != (code *)0x0) {
      lVar15 = *plStack_320;
      unaff_x21 = &PTR_PTR_1126b8000;
      do {
        param_6 = (code *)0x0;
        do {
          if (*plStack_320 != lVar15) {
            _objc_enumerationMutation(pcVar16);
          }
          puVar17 = PTR_PTR_1126b88a8;
          FUN_1053ffbd8(PTR_PTR_1126b88a8,*(undefined8 *)(lStack_328 + (long)param_6 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar17);
          param_6 = param_6 + 1;
        } while (pcVar5 != param_6);
        pcVar5 = pcVar16;
        func_0x00010bf52a60();
      } while (pcVar5 != (code *)0x0);
    }
    _objc_release(pcVar16);
    _objc_release(pcVar16);
  }
  pcVar16 = pcStack_3f8;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  _objc_retain(pcStack_3f8);
  pcVar5 = pcVar16;
  func_0x00010bf52a60();
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  if (pcVar5 != (code *)0x0) {
    unaff_x27 = *plStack_360;
    pcVar16 = FUN_1053fd950;
    unaff_x21 = (undefined **)&UNK_110885d68;
    do {
      param_6 = (code *)0x0;
      do {
        if (*plStack_360 != unaff_x27) {
          _objc_enumerationMutation(pcStack_3f8);
        }
        uVar20 = *(undefined8 *)(lStack_368 + (long)param_6 * 8);
        uVar6 = uVar20;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puStack_3a8 = puVar17;
        uStack_3a0 = 0xc2000000;
        pcStack_398 = FUN_1053fd950;
        puStack_390 = &UNK_110885d68;
        uStack_388 = uVar20;
        _objc_retain(param_7);
        lStack_380 = param_7;
        uStack_378 = param_1;
        func_0x00010bf97ce0(uVar6);
        _objc_release(uVar6);
        _objc_release(lStack_380);
        param_6 = param_6 + 1;
      } while (pcVar5 != param_6);
      pcVar5 = pcStack_3f8;
      func_0x00010bf52a60();
      unaff_x28 = puVar17;
    } while (pcVar5 != (code *)0x0);
  }
  _objc_release(pcStack_3f8);
  pcVar5 = pcStack_400;
  func_0x000100504554(pcStack_400,&PTR___NSConcreteGlobalBlock_110885db8);
  _objc_opt_class(PTR_PTR_1126b8990);
  if (param_7 == 0) {
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_240,param_7);
  }
  puVar2 = &uStack_2b1;
  FUN_1053ff594(puVar2);
  FUN_1053fd7ec(auStack_2d0,pcVar5);
  func_0x0001004c2e3c(appuStack_2b0,0xc,puVar2,auStack_2d0);
  puStack_2e8 = (undefined1 *)0x0;
  puStack_2e0 = (undefined1 *)0x0;
  uStack_2d8 = 0;
  uStack_2ec = 0;
  pcVar7 = (code *)&uStack_240;
  pppuVar14 = appuStack_2b0;
  func_0x0001000e77a0(pcVar7,pppuVar14,&puStack_2e8,&uStack_2ec);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2e8 != (undefined1 *)0x0) {
    puStack_2e0 = puStack_2e8;
    __ZdlPv();
  }
  plVar1 = plStack_248;
  appuStack_2b0[0] = &PTR_FUN_110862700;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2e8 = auStack_268;
  func_0x000100105004(&puStack_2e8);
  puStack_2e8 = auStack_2d0;
  func_0x000100105004(&puStack_2e8);
  func_0x0001000e76e0(&uStack_218);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  puStack_3e0 = (undefined8 *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  _objc_retain(pcVar7);
  pcVar8 = pcVar7;
  func_0x00010bf52a60();
  if (pcVar8 != (code *)0x0) {
    pcVar16 = (code *)*puStack_3e0;
    unaff_x21 = &PTR_PTR_1126b8000;
    do {
      param_6 = (code *)0x0;
      do {
        if ((code *)*puStack_3e0 != pcVar16) {
          _objc_enumerationMutation(pcVar7);
        }
        pppuVar14 = *(undefined ****)(lStack_3e8 + (long)param_6 * 8);
        puVar17 = PTR_PTR_1126b88a8;
        FUN_1053ffbd8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar17);
        param_6 = param_6 + 1;
      } while (pcVar8 != param_6);
      pcVar8 = pcVar7;
      func_0x00010bf52a60();
    } while (pcVar8 != (code *)0x0);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  _objc_release(param_7);
  _objc_release(pcStack_400);
  _objc_release(pcStack_3f8);
  puVar3 = puStack_408;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  _objc_release(param_7);
  _objc_release(pcStack_400);
  _objc_release(pcStack_3f8);
  _objc_release(puStack_408);
  __Unwind_Resume();
  puVar4 = &uStack_530;
  pcStack_418 = FUN_1053fd7ec;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_460 = unaff_x28;
  lStack_458 = unaff_x27;
  pcStack_450 = pcVar7;
  pcStack_448 = pcVar5;
  lStack_440 = param_7;
  ppuStack_438 = unaff_x21;
  pcStack_430 = param_6;
  pcStack_428 = pcVar16;
  puStack_420 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar14);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pppuVar9 = pppuVar14;
  func_0x00010bf529e0();
  func_0x0001004c2bb4(puVar3);
  lStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  plStack_520 = (long *)0x0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  _objc_retain(pppuVar14);
  pppuVar10 = pppuVar14;
  func_0x00010bf52a60();
  if (pppuVar10 != (undefined ***)0x0) {
    lVar15 = *plStack_520;
    do {
      pppuVar19 = (undefined ***)0x0;
      do {
        if (*plStack_520 != lVar15) {
          _objc_enumerationMutation(pppuVar14);
        }
        ppuVar18 = *(undefined ***)(lStack_528 + (long)pppuVar19 * 8);
        _objc_retain(ppuVar18);
        pppuVar9 = appuStack_4f0;
        appuStack_4f0[0] = ppuVar18;
        func_0x0001004c2d3c(puVar3);
        _objc_release(appuStack_4f0[0]);
        pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
      } while (pppuVar10 != pppuVar19);
      pppuVar10 = pppuVar14;
      puVar4 = &uStack_530;
      func_0x00010bf52a60();
    } while (pppuVar10 != (undefined ***)0x0);
  }
  _objc_release(pppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_468) {
    ___stack_chk_fail();
    if ((int)pppuVar9 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    _objc_retain(pppuVar9);
    _objc_retain(puVar4);
    puVar11 = PTR_PTR_1126b8990;
    _objc_alloc(PTR_PTR_1126b8990);
    ppuVar12 = pppuVar14[4];
    func_0x00010c084700(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar12;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar18;
    FUN_1053fdd2c();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_5e0 = &puStack_5d8;
    puStack_5d8 = (undefined *)0x0;
    pcStack_5c8 = (code *)0x3032000000;
    pcStack_5c0 = FUN_1053fe06c;
    ppuStack_5b8 = (undefined **)0x1053fe07c;
    uStack_5b0 = 0;
    puStack_600 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_5f8 = (undefined **)0xc2000000;
    pcStack_5f0 = FUN_1053fe0bc;
    puStack_5e8 = &UNK_110864a68;
    ppuStack_5d0 = ppuStack_5e0;
    func_0x00010c0c0580(puVar4);
    puVar21 = ppuStack_5d0[5];
    _objc_retain(puVar21);
    __Block_object_dispose(&puStack_5d8,8);
    _objc_release(uStack_5b0);
    func_0x00010c01b2e0(puVar11);
    _objc_release(puVar21);
    _objc_release(ppuVar13);
    _objc_release(ppuVar18);
    _objc_release(ppuVar12);
    ppuVar18 = pppuVar14[5];
    puVar21 = puVar11;
    FUN_1053ffc4c(puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(ppuVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar21);
    ppuVar18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfad0;
    func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfad0);
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar9;
    func_0x00010c0720c0();
    _objc_release(ppuVar18);
    if ((int)pppuVar10 != 0) {
      puVar21 = pppuVar14[6][2];
      func_0x00010c269d40(puVar21);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_5f8 = &puStack_600;
      puStack_600 = (undefined *)0x0;
      pcStack_5f0 = (code *)0x2020000000;
      puStack_5e8 = (undefined *)0x0;
      puStack_5d8 = puVar17;
      ppuStack_5d0 = (undefined **)0xc2000000;
      pcStack_5c8 = FUN_1053fe44c;
      pcStack_5c0 = (code *)&UNK_110885e08;
      ppuStack_5b8 = ppuStack_5f8;
      func_0x00010c0c0580(puVar4);
      puVar17 = ppuStack_5f8[3];
      __Block_object_dispose(&puStack_600,8);
      func_0x00010540ef28(puVar21,puVar17 == (undefined *)0x0);
      _objc_release(puVar21);
    }
    _objc_release(puVar11);
    _objc_release(puVar4);
    _objc_release(pppuVar9);
    return;
  }
  return;
}



/* Entry: 1053fd7ec; end: 1053fd94f;  */

void FUN_1053fd7ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00010bf529e0();
  func_0x0001004c2bb4(param_1);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar9 = *plStack_110;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(undefined8 *)(lStack_118 + (long)puVar10 * 8);
        _objc_retain(uVar8);
        puVar1 = auStack_e0;
        auStack_e0[0] = uVar8;
        func_0x0001004c2d3c(param_1);
        _objc_release(auStack_e0[0]);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar2 != puVar10);
      puVar2 = param_2;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((int)puVar1 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    _objc_retain(puVar1);
    _objc_retain(puVar10);
    puVar3 = PTR_PTR_1126b8990;
    _objc_alloc(PTR_PTR_1126b8990);
    uVar4 = param_2[4];
    func_0x00010c084700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    FUN_1053fdd2c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_1d0 = &puStack_1c8;
    puStack_1c8 = (undefined *)0x0;
    pcStack_1b8 = (code *)0x3032000000;
    pcStack_1b0 = FUN_1053fe06c;
    ppuStack_1a8 = (undefined **)0x1053fe07c;
    uStack_1a0 = 0;
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_1e8 = (undefined **)0xc2000000;
    pcStack_1e0 = FUN_1053fe0bc;
    puStack_1d8 = &UNK_110864a68;
    ppuStack_1c0 = ppuStack_1d0;
    func_0x00010c0c0580(puVar10);
    puVar11 = ppuStack_1c0[5];
    _objc_retain(puVar11);
    __Block_object_dispose(&puStack_1c8,8);
    _objc_release(uStack_1a0);
    func_0x00010c01b2e0(puVar3);
    _objc_release(puVar11);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar4);
    uVar8 = param_2[5];
    puVar11 = puVar3;
    FUN_1053ffc4c(puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfad0;
    func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(ppuVar6);
    if ((int)puVar2 != 0) {
      uVar8 = *(undefined8 *)(param_2[6] + 0x10);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1e8 = &puStack_1f0;
      puStack_1f0 = (undefined *)0x0;
      pcStack_1e0 = (code *)0x2020000000;
      puStack_1d8 = (undefined *)0x0;
      puStack_1c8 = puVar7;
      ppuStack_1c0 = (undefined **)0xc2000000;
      pcStack_1b8 = FUN_1053fe44c;
      pcStack_1b0 = (code *)&UNK_110885e08;
      ppuStack_1a8 = ppuStack_1e8;
      func_0x00010c0c0580(puVar10);
      puVar7 = ppuStack_1e8[3];
      __Block_object_dispose(&puStack_1f0,8);
      func_0x00010540ef28(uVar8,puVar7 == (undefined *)0x0);
      _objc_release(uVar8);
    }
    _objc_release(puVar3);
    _objc_release(puVar10);
    _objc_release(puVar1);
    return;
  }
  return;
}



/* Entry: 1053fd950; end: 1053fdd2b;  */

void FUN_1053fd950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8990;
  _objc_alloc(PTR_PTR_1126b8990);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c084700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  FUN_1053fdd2c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_b0 = &puStack_a8;
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_1053fe06c;
  ppuStack_88 = (undefined **)0x1053fe07c;
  uStack_80 = 0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_c8 = (undefined **)0xc2000000;
  pcStack_c0 = FUN_1053fe0bc;
  puStack_b8 = &UNK_110864a68;
  ppuStack_a0 = ppuStack_b0;
  func_0x00010c0c0580(param_3);
  puVar7 = ppuStack_a0[5];
  _objc_retain(puVar7);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  func_0x00010c01b2e0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar7 = puVar1;
  FUN_1053ffc4c(puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfad0;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfad0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0720c0();
  _objc_release(ppuVar4);
  if ((int)uVar6 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &puStack_d0;
    puStack_d0 = (undefined *)0x0;
    pcStack_c0 = (code *)0x2020000000;
    puStack_b8 = (undefined *)0x0;
    puStack_a8 = puVar5;
    ppuStack_a0 = (undefined **)0xc2000000;
    pcStack_98 = FUN_1053fe44c;
    pcStack_90 = (code *)&UNK_110885e08;
    ppuStack_88 = ppuStack_c8;
    func_0x00010c0c0580(param_3);
    puVar5 = ppuStack_c8[3];
    __Block_object_dispose(&puStack_d0,8);
    func_0x00010540ef28(uVar6,puVar5 == (undefined *)0x0);
    _objc_release(uVar6);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053fdd2c; end: 1053fde5b;  */

void FUN_1053fdd2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1053fe06c;
  uStack_40 = 0x1053fe07c;
  uStack_38 = 0;
  func_0x00010c0dfd40(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee60();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053fde5c; end: 1053fdeb7;  */

void FUN_1053fde5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f5860(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_1053fdd2c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053fdeb8; end: 1053fe03b; -[SCUserInfoDeltaSyncProcessor logInDeltaSyncGroupKeys] */

void FUN_1053fdeb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0440;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume(puVar4);
  _objc_storeStrong(puVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 8,0);
  return;
}



/* Entry: 1053fe03c; end: 1053fe06b; -[SCUserInfoDeltaSyncProcessor .cxx_destruct] */

void FUN_1053fe03c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053fe06c; end: 1053fe083;  */

void FUN_1053fe06c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053fe084; end: 1053fe0bb;  */

void FUN_1053fe084(long param_1,undefined8 param_2)

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



/* Entry: 1053fe0bc; end: 1053fe167;  */

void FUN_1053fe0bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b8998;
  puVar1 = PTR_PTR_1126b89a0;
  _objc_alloc(PTR_PTR_1126b89a0);
  func_0x00010c060400();
  func_0x00010c25d680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053fe168; end: 1053fe1f3;  */

void FUN_1053fe168(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8998;
  puVar1 = PTR_PTR_1126b89b0;
  _objc_alloc(PTR_PTR_1126b89b0);
  func_0x00010c060400();
  func_0x00010bf1f3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fe1f4; end: 1053fe27f;  */

void FUN_1053fe1f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8998;
  puVar1 = PTR_PTR_1126b89a8;
  _objc_alloc(PTR_PTR_1126b89a8);
  func_0x00010c060400();
  func_0x00010c0b4fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fe280; end: 1053fe313;  */

void FUN_1053fe280(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8998;
  puVar1 = PTR_PTR_1126b8a68;
  _objc_alloc(PTR_PTR_1126b8a68);
  func_0x00010c060400(param_1);
  func_0x00010bf883a0(puVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fe314; end: 1053fe39f;  */

void FUN_1053fe314(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8998;
  puVar1 = PTR_PTR_1126b89b8;
  _objc_alloc(PTR_PTR_1126b89b8);
  func_0x00010c060400();
  func_0x00010bf985a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053fe3a0; end: 1053fe44b;  */

void FUN_1053fe3a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b8998;
  puVar1 = PTR_PTR_1126b89c0;
  _objc_alloc(PTR_PTR_1126b89c0);
  func_0x00010c060400();
  func_0x00010bf64060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053fe44c; end: 1053fe45b;  */

void FUN_1053fe44c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1053fe45c; end: 1053fe4c7; -[SCUserInfoDeltaSyncProviderFactory .cxx_destruct] */

void FUN_1053fe45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053fe4c8; end: 1053fe4eb; -[SCUserInfoCoreUserData copyWithZone:] */

undefined8 FUN_1053fe4c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053fe4ec; end: 1053fe57f; -[SCUserInfoCoreUserData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1053fe4ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112723074);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112723078);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272307c);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1053fe630:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1053fe63c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112723074);
      if ((lVar5 == *(long *)(param_3 + _DAT_112723074)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112723078);
        if ((lVar5 == *(long *)(param_3 + _DAT_112723078)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11272307c);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_11272307c)) {
            func_0x00010c071ae0();
            goto LAB_1053fe63c;
          }
          goto LAB_1053fe630;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1053fe63c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053fe580; end: 1053fe657; -[SCUserInfoCoreUserData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1053fe580(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053fe630:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053fe63c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112723074);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112723074)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112723078);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112723078)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11272307c);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11272307c)) {
            func_0x00010c071ae0();
            goto LAB_1053fe63c;
          }
          goto LAB_1053fe630;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053fe63c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053fe658; end: 1053fe667; -[SCUserInfoCoreUserData name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1053fe658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112723078);
}



/* Entry: 1053fe668; end: 1053fe6d3; +[SCUserInfoProperty doublePropertyWithDoubleProperty:] */

void FUN_1053fe668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053fe6d4; end: 1053fe77b; -[SCUserInfoProperty hash] */

undefined8 * FUN_1053fe6d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1053fe86c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1053fe878;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1053fe878;
                }
                goto LAB_1053fe86c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1053fe878:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053fe77c; end: 1053fe893; -[SCUserInfoProperty isEqual:] */

long FUN_1053fe77c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053fe86c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053fe878;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1053fe878;
                }
                goto LAB_1053fe86c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053fe878:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053fe894; end: 1053fe8b3; -[SCUserInfoProperty isSameSubtype:] */

bool FUN_1053fe894(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 1053fe8b4; end: 1053fe8bb; -[SCUserInfoProperty subtype] */

undefined8 FUN_1053fe8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053fe8bc; end: 1053fe9a7; -[SCUserInfoProperty asLongProperty] */

void FUN_1053fe8bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1053fe9a8;
  uStack_30 = 0x1053fe9b8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053fe9c0;
  puStack_60 = &UNK_1108858c8;
  puStack_48 = puStack_58;
  func_0x00010c0beb80(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110885f18,
                      &PTR___NSConcreteGlobalBlock_110885f58,&PTR___NSConcreteGlobalBlock_110885f98,
                      &PTR___NSConcreteGlobalBlock_110885fd8,&PTR___NSConcreteGlobalBlock_110886018)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053fe9a8; end: 1053fe9bf;  */

void FUN_1053fe9a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053fe9c0; end: 1053fe9f7;  */

void FUN_1053fe9c0(long param_1,undefined8 param_2)

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



/* Entry: 1053fe9f8; end: 1053fea0b;  */

void FUN_1053fe9f8(void)

{
  return;
}



/* Entry: 1053fea0c; end: 1053feaf7; -[SCUserInfoProperty asStringProperty] */

void FUN_1053fea0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1053fe9a8;
  uStack_30 = 0x1053fe9b8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053feafc;
  puStack_60 = &UNK_110885898;
  puStack_48 = puStack_58;
  func_0x00010c0beb80(param_1,param_2,&PTR___NSConcreteGlobalBlock_110886058,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110886078,&PTR___NSConcreteGlobalBlock_110886098,
                      &PTR___NSConcreteGlobalBlock_1108860b8,&PTR___NSConcreteGlobalBlock_1108860d8)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053feaf8; end: 1053feafb;  */

void FUN_1053feaf8(void)

{
  return;
}



/* Entry: 1053feafc; end: 1053feb33;  */

void FUN_1053feafc(long param_1,undefined8 param_2)

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



/* Entry: 1053feb34; end: 1053feb43;  */

void FUN_1053feb34(void)

{
  return;
}



/* Entry: 1053feb44; end: 1053fec2f; -[SCUserInfoProperty asBoolProperty] */

void FUN_1053feb44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1053fe9a8;
  uStack_30 = 0x1053fe9b8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053fec38;
  puStack_60 = &UNK_1108858f8;
  puStack_48 = puStack_58;
  func_0x00010c0beb80(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108860f8,
                      &PTR___NSConcreteGlobalBlock_110886118,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110886138,&PTR___NSConcreteGlobalBlock_110886158,
                      &PTR___NSConcreteGlobalBlock_110886178);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053fec30; end: 1053fec37;  */

void FUN_1053fec30(void)

{
  return;
}



/* Entry: 1053fec38; end: 1053fec6f;  */

void FUN_1053fec38(long param_1,undefined8 param_2)

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



/* Entry: 1053fec70; end: 1053fec7b;  */

void FUN_1053fec70(void)

{
  return;
}


