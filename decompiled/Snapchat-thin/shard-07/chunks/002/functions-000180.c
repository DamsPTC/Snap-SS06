/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10534a6f8; end: 10534a74f; -[SCNGOCodeVerificationEntryPoint codeVerificationExited] */

void FUN_10534a6f8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10534a750;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10534a750; end: 10534a7e3;  */

void FUN_10534a750(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10534a5b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10534a5b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ee80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10534a7e4; end: 10534a83b; -[SCNGOCodeVerificationEntryPoint codeVerificationExitedWithUnretryableError] */

void FUN_10534a7e4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10534a83c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10534a83c; end: 10534a8cf;  */

void FUN_10534a83c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10534a5b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10534a5b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3eec0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10534a8d0; end: 10534a97b; -[SCNGOCodeVerificationEntryPoint codeVerificationResendCodeAttempted] */

void FUN_10534a8d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  FUN_10534a5b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    FUN_10534a5b4(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ef00();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10534a97c; end: 10534aa27; -[SCNGOCodeVerificationEntryPoint codeVerificationVerifyCodeAttempted] */

void FUN_10534a97c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  FUN_10534a5b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    FUN_10534a5b4(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ef60();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10534aa28; end: 10534ab6b; -[SCNGOCodeVerificationEntryPoint codeVerificationExitedToUsernamePasswordPage] */

void FUN_10534aa28(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uVar1 = param_1;
  FUN_10534a5b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10534aad8;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 10534ab6c; end: 10534ab8b; -[SCNGOCodeVerificationEntryPoint attributionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534ab6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112721a50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10534ab8c; end: 10534ab9f; -[SCNGOCodeVerificationEntryPoint setAttributionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534ab8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112721a50,param_3);
  return;
}



/* Entry: 10534aba0; end: 10534abe7; -[SCNGOCodeVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534aba0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721a50);
  _objc_destroyWeak(param_1 + _DAT_112721a54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721a4c,0);
  return;
}



/* Entry: 10534abe8; end: 10534ade3; -[SCNGOCodeVerificationBusinessLogic initWithCountdownTimer:channel:service:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10534abe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e79b8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112721a5c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112721a60;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112721a64,param_6);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bd9e0(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c063d00();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112721a74) = uVar2;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112721a78);
    *(undefined ***)((long)puVar1 + (long)_DAT_112721a78) =
         &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bed01c0();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)((long)puVar1 + (long)_DAT_112721a7c) = puVar3 == (undefined8 *)0x0;
    _objc_release();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10534ade4; end: 10534b103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534ade4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2;
  _objc_retain();
  FUN_105350a88();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a68);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a68) = uVar5;
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105350ab8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a6c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a6c) = uVar5;
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a70);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a70) = puVar3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10534b104; end: 10534b14b; -[SCNGOCodeVerificationBusinessLogic begin] */

void FUN_10534b104(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e79b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_begin_1125a3840);
  func_0x00010bebfc20(param_1);
  return;
}



/* Entry: 10534b14c; end: 10534b263; -[SCNGOCodeVerificationBusinessLogic handleAction:] */

void FUN_10534b14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10534b264;
  puStack_30 = &UNK_110848678;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10534b320;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10534b32c;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10534b334;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10534b36c;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10534b374;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_10534b37c;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10534b3b4;
  puStack_148 = &UNK_110842e18;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c1080(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160);
  return;
}



/* Entry: 10534b264; end: 10534b31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = (long)_DAT_112721a78;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + lVar3);
  *(undefined8 *)(lVar2 + lVar3) = param_2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a80);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721a80) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c08fa60();
  if (lVar2 == 6) {
    func_0x00010bec5ee0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10534b320; end: 10534b333;  */

void FUN_10534b320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__submitCode__11258f160,0);
  return;
}



/* Entry: 10534b334; end: 10534b36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b334(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112721a64;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf3eec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10534b36c; end: 10534b37b;  */

void FUN_10534b36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be039f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dismissVerifySuccessPrompt_11255e818);
  return;
}



/* Entry: 10534b37c; end: 10534b3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b37c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112721a64;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf3ee80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10534b3ec; end: 10534b50b; -[SCNGOCodeVerificationBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b3ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b7920;
  _objc_alloc(PTR_PTR_1126b7920);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721a68);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721a6c);
  lVar2 = param_1;
  func_0x00010be920a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be92000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112721a78);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112721a80);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112721a84);
  func_0x00010bdda080();
  func_0x00010c052d80(puVar1,param_2,uVar4,uVar5,lVar2,lVar3,uVar6,uVar7,uVar8,(char)param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10534b50c; end: 10534b5eb; -[SCNGOCodeVerificationBusinessLogic _startCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b50c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a5c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c24e720(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10534b5ec; end: 10534b68b;  */

void FUN_10534b5ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10534b68c;
  puStack_48 = &UNK_110846540;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10534b68c; end: 10534b6bf;  */

void FUN_10534b68c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534b6c0; end: 10534b6ff; -[SCNGOCodeVerificationBusinessLogic _updateWithRemainingTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b6c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112721a74) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534b700; end: 10534b8af; -[SCNGOCodeVerificationBusinessLogic _resendCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534b700(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_112721a88) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721a60);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10534b8b0;
  puStack_80 = &UNK_110848708;
  lStack_78 = lVar1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010c134f20(uVar4);
  lVar5 = (long)_DAT_112721a64;
  uVar2 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf3ef00();
    _objc_release(param_1);
  }
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  return;
}



/* Entry: 10534b8b0; end: 10534b93f;  */

void FUN_10534b8b0(long param_1)

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
  pcStack_38 = FUN_10534b940;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10534b940; end: 10534b96b;  */

void FUN_10534b940(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534b96c; end: 10534ba2b;  */

void FUN_10534b96c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10534ba2c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10534ba2c; end: 10534ba5f;  */

void FUN_10534ba2c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534ba60; end: 10534bac7; -[SCNGOCodeVerificationBusinessLogic _codeResendSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534ba60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112721a88) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a5c);
  func_0x00010c063d00();
  *(undefined8 *)(param_1 + _DAT_112721a74) = uVar1;
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bebfc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startCountdown_11258d8b0);
  return;
}



/* Entry: 10534bac8; end: 10534bb4f; -[SCNGOCodeVerificationBusinessLogic _resendCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534bac8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + _DAT_112721a74) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000105350ae8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10534bb50; end: 10534bb83; -[SCNGOCodeVerificationBusinessLogic _resendButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534bb50(long param_1)

{
  if (*(long *)(param_1 + _DAT_112721a74) == 0) {
    func_0x000105350b00();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10534bb84; end: 10534bca7; -[SCNGOCodeVerificationBusinessLogic _codeResendFalure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534bb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10534bc30;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10534bc6c;
  puStack_58 = &UNK_1108450c8;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bfae0(param_3,param_2,&puStack_48,&puStack_70);
  *(undefined1 *)(param_1 + _DAT_112721a88) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 10534bca8; end: 10534bce7; -[SCNGOCodeVerificationBusinessLogic _canSubmit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10534bca8(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + _DAT_112721a88) & 1) != 0) {
    return false;
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112721a78);
  func_0x00010c08fa60(uVar1);
  return 5 < uVar1;
}



/* Entry: 10534bce8; end: 10534beab; -[SCNGOCodeVerificationBusinessLogic _submitCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534bce8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_112721a88) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721a60);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10534beac;
  puStack_80 = &UNK_11087d248;
  lStack_78 = lVar1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010c2986c0(uVar4);
  lVar5 = (long)_DAT_112721a64;
  uVar2 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf3ef60();
    _objc_release(param_1);
  }
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  return;
}



/* Entry: 10534beac; end: 10534bf6b;  */

void FUN_10534beac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10534bf6c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10534bf6c; end: 10534bf9f;  */

void FUN_10534bf6c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534bfa0; end: 10534c05f;  */

void FUN_10534bfa0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10534c060;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10534c060; end: 10534c093;  */

void FUN_10534c060(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534c094; end: 10534c1c3; -[SCNGOCodeVerificationBusinessLogic _codeVerificationSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c094(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c118460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1 + _DAT_112721a64;
    _objc_loadWeakRetained(lVar3);
    lVar1 = param_3;
    func_0x00010c13b720(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf3eee0(lVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c118460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721a8c);
    *(long *)(param_1 + _DAT_112721a8c) = lVar3;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c13b720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = *(long *)(param_1 + _DAT_112721a94);
    *(long *)(param_1 + _DAT_112721a94) = lVar1;
  }
  _objc_release(lVar3);
  *(undefined1 *)(param_1 + _DAT_112721a88) = 0;
  lVar3 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a8c);
  *(undefined8 *)(param_1 + _DAT_112721a8c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10534c1c4; end: 10534c2e7; -[SCNGOCodeVerificationBusinessLogic _codeVerificationFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c1c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10534c270;
    puStack_30 = &UNK_1108450c8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x10534c2ac;
    puStack_58 = &UNK_1108450c8;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010c0bfae0(param_3,param_2,&puStack_48,&puStack_70);
  }
  *(undefined1 *)(param_1 + _DAT_112721a88) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534c2e8; end: 10534c333; -[SCNGOCodeVerificationBusinessLogic _dismissVerifySuccessPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c2e8(long param_1)

{
  param_1 = param_1 + _DAT_112721a64;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3eee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534c334; end: 10534c457; -[SCNGOCodeVerificationBusinessLogic _getCaption:formatString:] */

void FUN_10534c334(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    func_0x00010c11f420(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6f20(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10534c458; end: 10534c4db; -[SCNGOCodeVerificationBusinessLogic _troubleVerifyingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c458(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112721a64;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf3ef40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10534c4dc; end: 10534c54f; -[SCNGOCodeVerificationBusinessLogic _handleTroubleVerifyingButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c4dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bed01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112721a90;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10534c550; end: 10534c62b; -[SCNGOCodeVerificationBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c550(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721a90,0);
  _objc_storeStrong(param_1 + _DAT_112721a8c,0);
  _objc_storeStrong(param_1 + _DAT_112721a70,0);
  _objc_storeStrong(param_1 + _DAT_112721a84,0);
  _objc_storeStrong(param_1 + _DAT_112721a80,0);
  _objc_storeStrong(param_1 + _DAT_112721a78,0);
  _objc_storeStrong(param_1 + _DAT_112721a6c,0);
  _objc_storeStrong(param_1 + _DAT_112721a68,0);
  _objc_storeStrong(param_1 + _DAT_112721a94,0);
  _objc_destroyWeak(param_1 + _DAT_112721a64);
  _objc_storeStrong(param_1 + _DAT_112721a60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721a5c,0);
  return;
}



/* Entry: 10534c62c; end: 10534c6f3; -[SCNGOCodeVerificationLoginViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10534c62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e79c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112721a98;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721a9c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10534c6f4; end: 10534c6fb; -[SCNGOCodeVerificationLoginViewController pageViewName] */

undefined8 FUN_10534c6f4(void)

{
  return 0x2e;
}



/* Entry: 10534c6fc; end: 10534c76f; -[SCNGOCodeVerificationLoginViewController viewDidLoad] */

void FUN_10534c6fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e79c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c10f380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10534c770; end: 10534c7df; -[SCNGOCodeVerificationLoginViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c770(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e79c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112721aa0));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a9c);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 10534c7e0; end: 10534c85f; -[SCNGOCodeVerificationLoginViewController pinCodeInputFieldTextDidChange:wasAutofilled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c7e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a98);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bde0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10534c860; end: 10534c8ab; -[SCNGOCodeVerificationLoginViewController presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a98);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010bf9b400(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10534c8ac; end: 10534c8bb; -[SCNGOCodeVerificationLoginViewController presentationControllerWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112721aa0),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 10534c8bc; end: 10534c96b; -[SCNGOCodeVerificationLoginViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c8bc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a98);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10534c96c; end: 10534c9b3;  */

void FUN_10534c96c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534c9b4; end: 10534cc73; -[SCNGOCodeVerificationLoginViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534c9b4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112721aa4;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721aa8),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf2fba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721aac),param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112721ab0;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
    _objc_release(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    if ((int)puVar3 == 0) {
      func_0x00010c173280(*(undefined8 *)(param_1 + _DAT_112721aa0),param_2,0xc2);
    }
    else {
      func_0x00010c1382e0();
    }
    lVar4 = param_3;
    func_0x00010bf926c0(param_3);
    lVar5 = (long)_DAT_112721ab4;
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    lVar4 = param_3;
    func_0x00010bfeb7c0(param_3);
    func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    lVar4 = param_3;
    func_0x00010c137e00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    _objc_release();
    if (lVar4 == 0) {
      func_0x000105350b90();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721ac0),param_2,lVar5);
      _objc_release(lVar5);
      lVar4 = (long)_DAT_112721ab8;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721abc),param_2,0);
    }
    else {
      lVar4 = (long)_DAT_112721ab8;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721abc),param_2,1);
      lVar5 = param_3;
      func_0x00010c137e00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721ac0),param_2,lVar5);
      _objc_release(lVar5);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar4 = param_3;
    func_0x00010c137e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar2,param_2,lVar4,0);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10534cc74; end: 10534e2db; -[SCNGOCodeVerificationLoginViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534cc74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
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
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined8 uVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined *puVar120;
  undefined8 uVar121;
  long lVar122;
  undefined8 uVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  double dVar133;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  dVar133 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar133);
  lVar130 = (long)_DAT_112721ac4;
  uVar121 = *(undefined8 *)(param_1 + lVar130);
  *(undefined **)(param_1 + lVar130) = puVar1;
  _objc_release(uVar121);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar130),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar130),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar130),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar127 = (long)_DAT_112721ac8;
  uVar121 = *(undefined8 *)(param_1 + lVar127);
  *(undefined **)(param_1 + lVar127) = puVar1;
  _objc_release(uVar121);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar127),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar127),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar130),param_2,*(undefined8 *)(param_1 + lVar127))
  ;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c1677c0(0x3fb999999999999a);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4004000000000000);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,puVar3);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar132 = (long)_DAT_112721aa8;
  uVar121 = *(undefined8 *)(param_1 + lVar132);
  *(undefined **)(param_1 + lVar132) = puVar1;
  _objc_release(uVar121);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar132),param_2,3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar132),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar132),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar132),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar132),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar132))
  ;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar131 = (long)_DAT_112721aac;
  uVar121 = *(undefined8 *)(param_1 + lVar131);
  *(undefined **)(param_1 + lVar131) = puVar1;
  _objc_release(uVar121);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar131),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar131),param_2,0x14);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar131),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar131),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar131),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar131))
  ;
  puVar1 = PTR_PTR_1126af298;
  _objc_alloc();
  func_0x00010c00c740();
  lVar128 = (long)_DAT_112721aa0;
  uVar121 = *(undefined8 *)(param_1 + lVar128);
  *(undefined **)(param_1 + lVar128) = puVar1;
  _objc_release(uVar121);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar128),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar128))
  ;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar129 = (long)_DAT_112721ab0;
  uVar121 = *(undefined8 *)(param_1 + lVar129);
  *(undefined **)(param_1 + lVar129) = puVar1;
  _objc_release(uVar121);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar129),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar129),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar129),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar129),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar129),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar129))
  ;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar122 = (long)_DAT_112721ac0;
  uVar121 = *(undefined8 *)(param_1 + lVar122);
  *(undefined **)(param_1 + lVar122) = puVar1;
  _objc_release(uVar121);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar122),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar122),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar122),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar122))
  ;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar124 = (long)_DAT_112721ab8;
  uVar121 = *(undefined8 *)(param_1 + lVar124);
  *(undefined **)(param_1 + lVar124) = puVar1;
  _objc_release(uVar121);
  uVar121 = *(undefined8 *)(param_1 + lVar124);
  func_0x00010c20eaa0(uVar121,param_2,4);
  uVar123 = *(undefined8 *)(param_1 + lVar124);
  func_0x000105350b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar123,param_2,uVar121,0);
  _objc_release(uVar121);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar124),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar124),param_2,param_1,
                      PTR_s__resendButtonTapped_112528f90,0x40);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar124))
  ;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar125 = (long)_DAT_112721abc;
  uVar121 = *(undefined8 *)(param_1 + lVar125);
  *(undefined **)(param_1 + lVar125) = puVar1;
  _objc_release(uVar121);
  uVar121 = *(undefined8 *)(param_1 + lVar125);
  func_0x00010c20eaa0(uVar121,param_2,4);
  uVar123 = *(undefined8 *)(param_1 + lVar125);
  func_0x000105350b78();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar123,param_2,uVar121,0);
  _objc_release(uVar121);
  puVar4 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar4,param_2,0x1aa,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar125),param_2,puVar4,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar125),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar125),param_2,param_1,
                      PTR_s__usePasswordButtonTapped_112528f98,0x40);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar127),param_2,*(undefined8 *)(param_1 + lVar125))
  ;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar126 = (long)_DAT_112721ab4;
  uVar121 = *(undefined8 *)(param_1 + lVar126);
  *(undefined **)(param_1 + lVar126) = puVar1;
  _objc_release(uVar121);
  uVar121 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010c20eaa0(uVar121,param_2,2);
  uVar123 = *(undefined8 *)(param_1 + lVar126);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar123,param_2,uVar121,0);
  _objc_release(uVar121);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar126),param_2,param_1,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar126),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar126);
  uStack_1b0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar126);
  uStack_1a8 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(0x4038000000000000,uVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar126);
  uStack_1a0 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493c0(0xc038000000000000,uVar16,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar130);
  uStack_198 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar130);
  uStack_190 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar130);
  uStack_188 = uVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar28;
  func_0x00010bf493a0(uVar28,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar130);
  uStack_180 = uVar31;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar126);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493c0(0xc030000000000000,uVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar127);
  uStack_178 = uVar34;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493a0(uVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar127);
  uStack_170 = uVar37;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar38;
  func_0x00010bf493a0(uVar38,param_2,uVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar127);
  uStack_168 = uVar40;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar41;
  func_0x00010bf493a0(uVar41,param_2,uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar127);
  uStack_160 = uVar43;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar44;
  func_0x00010bf493a0(uVar44,param_2,uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_1 + lVar127);
  uStack_158 = uVar46;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar130);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar47;
  func_0x00010bf493a0(uVar47,param_2,uVar48);
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar3;
  uStack_150 = uVar49;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar50;
  func_0x00010bf493a0(puVar50,param_2,uVar51);
  _objc_retainAutoreleasedReturnValue();
  puVar53 = puVar3;
  puStack_148 = puVar52;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar55 = puVar53;
  func_0x00010bf493c0(0x4020000000000000,puVar53,param_2,uVar54);
  _objc_retainAutoreleasedReturnValue();
  puVar56 = puVar3;
  puStack_140 = puVar55;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = puVar56;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar58 = puVar3;
  puStack_138 = puVar57;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar59 = puVar58;
  func_0x00010bf49420(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_1 + lVar132);
  puStack_130 = puVar59;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = uVar60;
  func_0x00010bf493a0(uVar60,param_2,uVar61);
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(param_1 + lVar132);
  uStack_128 = uVar62;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar65 = uVar63;
  func_0x00010bf493c0(dVar133 / 6.0,uVar63,param_2,uVar64);
  _objc_retainAutoreleasedReturnValue();
  uVar66 = *(undefined8 *)(param_1 + lVar132);
  uStack_120 = uVar65;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = uVar66;
  func_0x00010bf493c0(0x403e000000000000,uVar66,param_2,uVar67);
  _objc_retainAutoreleasedReturnValue();
  uVar69 = *(undefined8 *)(param_1 + lVar131);
  uStack_118 = uVar68;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar70 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar71 = uVar69;
  func_0x00010bf493a0(uVar69,param_2,uVar70);
  _objc_retainAutoreleasedReturnValue();
  uVar72 = *(undefined8 *)(param_1 + lVar131);
  uStack_110 = uVar71;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar73 = *(undefined8 *)(param_1 + lVar132);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar74 = uVar72;
  func_0x00010bf493c0(0x4020000000000000,uVar72,param_2,uVar73);
  _objc_retainAutoreleasedReturnValue();
  uVar75 = *(undefined8 *)(param_1 + lVar131);
  uStack_108 = uVar74;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar76 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar77 = uVar75;
  func_0x00010bf493c0(0x403e000000000000,uVar75,param_2,uVar76);
  _objc_retainAutoreleasedReturnValue();
  uVar78 = *(undefined8 *)(param_1 + lVar128);
  uStack_100 = uVar77;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar79 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar80 = uVar78;
  func_0x00010bf493a0(uVar78,param_2,uVar79);
  _objc_retainAutoreleasedReturnValue();
  uVar81 = *(undefined8 *)(param_1 + lVar128);
  uStack_f8 = uVar80;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar82 = *(undefined8 *)(param_1 + lVar131);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar83 = uVar81;
  func_0x00010bf493c0(0x4040000000000000,uVar81,param_2,uVar82);
  _objc_retainAutoreleasedReturnValue();
  uVar84 = *(undefined8 *)(param_1 + lVar128);
  uStack_f0 = uVar83;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar85 = uVar84;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar86 = *(undefined8 *)(param_1 + lVar128);
  uStack_e8 = uVar85;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar87 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar88 = uVar86;
  func_0x00010bf493c0(0x403e000000000000,uVar86,param_2,uVar87);
  _objc_retainAutoreleasedReturnValue();
  uVar89 = *(undefined8 *)(param_1 + lVar128);
  uStack_e0 = uVar88;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar90 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar91 = uVar89;
  func_0x00010bf493c0(0xc03e000000000000,uVar89,param_2,uVar90);
  _objc_retainAutoreleasedReturnValue();
  uVar92 = *(undefined8 *)(param_1 + lVar129);
  uStack_d8 = uVar91;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar93 = *(undefined8 *)(param_1 + lVar128);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar94 = uVar92;
  func_0x00010bf493a0(uVar92,param_2,uVar93);
  _objc_retainAutoreleasedReturnValue();
  uVar95 = *(undefined8 *)(param_1 + lVar129);
  uStack_d0 = uVar94;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar96 = *(undefined8 *)(param_1 + lVar128);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar97 = uVar95;
  func_0x00010bf493a0(uVar95,param_2,uVar96);
  _objc_retainAutoreleasedReturnValue();
  uVar98 = *(undefined8 *)(param_1 + lVar129);
  uStack_c8 = uVar97;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar99 = *(undefined8 *)(param_1 + lVar128);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar100 = uVar98;
  func_0x00010bf493c0(0x4030000000000000,uVar98,param_2,uVar99);
  _objc_retainAutoreleasedReturnValue();
  uVar101 = *(undefined8 *)(param_1 + lVar122);
  uStack_c0 = uVar100;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar102 = *(undefined8 *)(param_1 + lVar127);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar103 = uVar101;
  func_0x00010bf493a0(uVar101,param_2,uVar102);
  _objc_retainAutoreleasedReturnValue();
  uVar104 = *(undefined8 *)(param_1 + lVar122);
  uStack_b8 = uVar103;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar105 = *(undefined8 *)(param_1 + lVar129);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar106 = uVar104;
  func_0x00010bf493c0(0x4030000000000000,uVar104,param_2,uVar105);
  _objc_retainAutoreleasedReturnValue();
  uVar107 = *(undefined8 *)(param_1 + lVar124);
  uStack_b0 = uVar106;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar108 = *(undefined8 *)(param_1 + lVar122);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar109 = uVar107;
  func_0x00010bf493c0(0xc051800000000000,uVar107,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar110 = *(undefined8 *)(param_1 + lVar124);
  uStack_a8 = uVar109;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar111 = *(undefined8 *)(param_1 + lVar122);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar121 = uVar110;
  func_0x00010bf493c0(0x4030000000000000,uVar110,param_2,uVar111);
  _objc_retainAutoreleasedReturnValue();
  uVar112 = *(undefined8 *)(param_1 + lVar127);
  uStack_a0 = uVar121;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar113 = *(undefined8 *)(param_1 + lVar124);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar123 = uVar112;
  func_0x00010bf493a0(uVar112,param_2,uVar113);
  _objc_retainAutoreleasedReturnValue();
  uVar114 = *(undefined8 *)(param_1 + lVar125);
  uStack_98 = uVar123;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar115 = *(undefined8 *)(param_1 + lVar122);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar116 = uVar114;
  func_0x00010bf493c0(0x4051800000000000,uVar114,param_2,uVar115);
  _objc_retainAutoreleasedReturnValue();
  uVar117 = *(undefined8 *)(param_1 + lVar125);
  uStack_90 = uVar116;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar118 = *(undefined8 *)(param_1 + lVar122);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar119 = uVar117;
  func_0x00010bf493c0(0x4030000000000000,uVar117,param_2,uVar118);
  _objc_retainAutoreleasedReturnValue();
  puVar120 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar119;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1b0,0x26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar120);
  _objc_release(puVar120);
  _objc_release(uVar119);
  _objc_release(uVar118);
  _objc_release(uVar117);
  _objc_release(uVar116);
  _objc_release(uVar115);
  _objc_release(uVar114);
  _objc_release(uVar123);
  _objc_release(uVar113);
  _objc_release(uVar112);
  _objc_release(uVar121);
  _objc_release(uVar111);
  _objc_release(uVar110);
  _objc_release(uVar109);
  _objc_release(uVar108);
  _objc_release(uVar107);
  _objc_release(uVar106);
  _objc_release(uVar105);
  _objc_release(uVar104);
  _objc_release(uVar103);
  _objc_release(uVar102);
  _objc_release(uVar101);
  _objc_release(uVar100);
  _objc_release(uVar99);
  _objc_release(uVar98);
  _objc_release(uVar97);
  _objc_release(uVar96);
  _objc_release(uVar95);
  _objc_release(uVar94);
  _objc_release(uVar93);
  _objc_release(uVar92);
  _objc_release(uVar91);
  _objc_release(uVar90);
  _objc_release(uVar89);
  _objc_release(uVar88);
  _objc_release(uVar87);
  _objc_release(uVar86);
  _objc_release(uVar85);
  _objc_release(uVar84);
  _objc_release(uVar83);
  _objc_release(uVar82);
  _objc_release(uVar81);
  _objc_release(uVar80);
  _objc_release(uVar79);
  _objc_release(uVar78);
  _objc_release(uVar77);
  _objc_release(uVar76);
  _objc_release(uVar75);
  _objc_release(uVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(uVar71);
  _objc_release(uVar70);
  _objc_release(uVar69);
  _objc_release(uVar68);
  _objc_release(uVar67);
  _objc_release(uVar66);
  _objc_release(uVar65);
  _objc_release(uVar64);
  _objc_release(uVar63);
  _objc_release(uVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(puVar55);
  _objc_release(uVar54);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(uVar51);
  _objc_release(puVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
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
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar121 = *(undefined8 *)(puVar3 + _DAT_112721a98);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c25f020(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar121,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10534e2dc; end: 10534e327; -[SCNGOCodeVerificationLoginViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e2dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a98);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c25f020(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10534e328; end: 10534e373; -[SCNGOCodeVerificationLoginViewController _resendButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e328(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a98);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c137da0(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10534e374; end: 10534e3bf; -[SCNGOCodeVerificationLoginViewController _usePasswordButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a98);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c290740(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10534e3c0; end: 10534e4af; -[SCNGOCodeVerificationLoginViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e3c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721a9c,0);
  _objc_storeStrong(param_1 + _DAT_112721ac8,0);
  _objc_storeStrong(param_1 + _DAT_112721ac4,0);
  _objc_storeStrong(param_1 + _DAT_112721ab4,0);
  _objc_storeStrong(param_1 + _DAT_112721abc,0);
  _objc_storeStrong(param_1 + _DAT_112721ab8,0);
  _objc_storeStrong(param_1 + _DAT_112721ac0,0);
  _objc_storeStrong(param_1 + _DAT_112721ab0,0);
  _objc_storeStrong(param_1 + _DAT_112721aa0,0);
  _objc_storeStrong(param_1 + _DAT_112721aac,0);
  _objc_storeStrong(param_1 + _DAT_112721aa8,0);
  _objc_storeStrong(param_1 + _DAT_112721aa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721a98,0);
  return;
}



/* Entry: 10534e4b0; end: 10534e577; -[SCNGOCodeVerificationViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10534e4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e79c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112721acc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721ad0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10534e578; end: 10534e57f; -[SCNGOCodeVerificationViewController pageViewName] */

undefined8 FUN_10534e578(void)

{
  return 0x2e;
}



/* Entry: 10534e580; end: 10534e5f3; -[SCNGOCodeVerificationViewController viewDidLoad] */

void FUN_10534e580(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e79c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c10f380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10534e5f4; end: 10534e663; -[SCNGOCodeVerificationViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e5f4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e79c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112721ad4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721ad0);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 10534e664; end: 10534e6e3; -[SCNGOCodeVerificationViewController pinCodeInputFieldTextDidChange:wasAutofilled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bde0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10534e6e4; end: 10534e72f; -[SCNGOCodeVerificationViewController presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e6e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010bf9b400(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10534e730; end: 10534e73f; -[SCNGOCodeVerificationViewController presentationControllerWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112721ad4),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 10534e740; end: 10534e7ef; -[SCNGOCodeVerificationViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e740(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721acc);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10534e7f0; end: 10534e837;  */

void FUN_10534e7f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10534e838; end: 10534eb8b; -[SCNGOCodeVerificationViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534e838(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112721ad8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar3 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721adc),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf2fba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112721ae0),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c137e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112721ae4;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar9),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf96d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112721ad4;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf926c0(param_3);
    lVar6 = (long)_DAT_112721ae8;
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar6),param_2,lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    lVar3 = param_3;
    func_0x00010bfeb7c0(param_3);
    func_0x00010c1beb60(uVar2,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c137d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = (long)_DAT_112721aec;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    if (lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010c137d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar2,param_2,lVar4,0);
      _objc_release(lVar4);
      uVar2 = *(undefined8 *)(param_1 + lVar6);
    }
    func_0x00010c1a7f60(uVar2,param_2,lVar3 == 0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,lVar3 != 0);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf98d60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721af0),param_2,uVar2);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf98d60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)puVar5 == 0) {
      func_0x00010c173280(*(undefined8 *)(param_1 + lVar8),param_2,0xc2);
    }
    else {
      func_0x00010c1382e0();
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf98840(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    if (((ulong)puVar5 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf98840(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb8e80(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    lVar7 = param_3;
    func_0x00010c298b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      lVar7 = param_3;
      func_0x00010c298b60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebbbe0(param_1,param_2,lVar7);
      _objc_release(lVar7);
    }
    lVar7 = param_3;
    func_0x00010c081940(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721af4),param_2,lVar7);
    lVar7 = param_3;
    func_0x00010c27ca80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      lVar7 = param_3;
      func_0x00010c27ca80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebb940(param_1,param_2,lVar7);
      _objc_release(lVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10534eb8c; end: 1053501b7; -[SCNGOCodeVerificationViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534eb8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  undefined1 auStack_5a0 [8];
  undefined1 auStack_598 [8];
  undefined *puStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 *puStack_550;
  code *pcStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  dVar24 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar24);
  lVar19 = (long)_DAT_112721af8;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar1);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar21 = (long)_DAT_112721afc;
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar21));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar17);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c1677c0(0x3fb999999999999a);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  puStack_1b8 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4004000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar22 = (long)_DAT_112721adc;
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar15);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar22));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar23 = (long)_DAT_112721ae0;
  uVar15 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126af298;
  _objc_alloc();
  func_0x00010c00c740();
  lVar20 = (long)_DAT_112721ad4;
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar15);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar17 = (long)_DAT_112721af0;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  lStack_480 = lVar17;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar17 = (long)_DAT_112721ae4;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  lStack_2f8 = lVar17;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112721aec;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar17));
  lStack_308 = lVar17;
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar17));
  lStack_4c0 = lVar21;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112721af4;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c216380();
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  func_0x000105350b18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar16);
  _objc_release(uVar15);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112721ae8;
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar15);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar21));
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c20eaa0();
  uVar16 = *(undefined8 *)(param_1 + lVar21);
  func_0x000105350b30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar16);
  _objc_release(uVar15);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar17);
  puStack_340 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_1c8 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c0 = lVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar21);
  uStack_1d8 = uVar15;
  uStack_1b0 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_1e8 = uVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = lVar17;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar17;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  uStack_1f8 = uVar16;
  uStack_1a8 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_208 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = lVar17;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar21);
  uStack_218 = uVar15;
  uStack_1a0 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_228 = uVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_220 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_230 = lVar17;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_238 = uVar16;
  uStack_198 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_248 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_240 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_250 = lVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  uStack_258 = uVar15;
  uStack_190 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_268 = uVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_260 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_270 = lVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_278 = uVar16;
  uStack_188 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_288 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_280 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_290 = lVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  uStack_298 = uVar15;
  uStack_180 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  uStack_2a0 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = uVar15;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lStack_4c0;
  uVar4 = *(undefined8 *)(param_1 + lStack_4c0);
  uStack_2b0 = uVar16;
  uStack_178 = uVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_2b8 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c0 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  uStack_2c8 = uVar4;
  uStack_170 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_2d0 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_2d8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_2e0 = uVar16;
  uStack_168 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_2e8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2f0 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  uStack_300 = uVar4;
  uStack_160 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_310 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_318 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_320 = uVar16;
  uStack_158 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_328 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_330 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_1b8;
  puVar2 = puStack_1b8;
  uStack_338 = uVar4;
  uStack_150 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  puStack_348 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_350 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_358 = puVar2;
  puStack_148 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  puStack_360 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_368 = uVar15;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_370 = puVar3;
  puStack_140 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_378 = puVar2;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_380 = puVar2;
  puStack_138 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_388 = puVar1;
  func_0x00010bf49420(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar22);
  puStack_390 = puVar1;
  puStack_130 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_398 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_3a0 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  uStack_3a8 = uVar16;
  uStack_128 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_3b0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_3b8 = uVar15;
  func_0x00010bf493c0(dVar24 / 6.0);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar22);
  uStack_3c0 = uVar4;
  uStack_120 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_3c8 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_3d0 = uVar15;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  uStack_3d8 = uVar16;
  uStack_118 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_3e0 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_3e8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  uStack_3f0 = uVar4;
  uStack_110 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  uStack_3f8 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_400 = uVar15;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  uStack_408 = uVar16;
  uStack_108 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_410 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_418 = uVar15;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  uStack_420 = uVar4;
  uStack_100 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_428 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_430 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_438 = uVar16;
  uStack_f8 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar23);
  uStack_440 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_448 = uVar15;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_450 = uVar4;
  uStack_f0 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_458 = uVar15;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  uStack_460 = uVar15;
  uStack_e8 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_468 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_470 = uVar15;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_478 = uVar16;
  uStack_e0 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_488 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_490 = uVar15;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lStack_480;
  uVar16 = *(undefined8 *)(param_1 + lStack_480);
  uStack_498 = uVar4;
  uStack_d8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_4a0 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_4a8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  uStack_4b0 = uVar16;
  uStack_d0 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_4b8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_4c8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  uStack_4d0 = uVar4;
  uStack_c8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_4d8 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_4e0 = uVar15;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lStack_2f8;
  uVar4 = *(undefined8 *)(param_1 + lStack_2f8);
  uStack_4e8 = uVar16;
  uStack_c0 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  uStack_4f0 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_4f8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  uStack_500 = uVar4;
  uStack_b8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_508 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_480 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lStack_308;
  uVar4 = *(undefined8 *)(param_1 + lStack_308);
  uStack_510 = uVar16;
  uStack_b0 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_518 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_520 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  uStack_528 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_530 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_2f8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_538 = uVar16;
  uStack_a0 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_98 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_90 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar16;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010beef8c0(puStack_340);
  _objc_release(puVar2);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_538);
  _objc_release(lStack_2f8);
  _objc_release(uStack_530);
  _objc_release(uStack_528);
  _objc_release(uStack_520);
  _objc_release(uStack_518);
  _objc_release(uStack_510);
  _objc_release(lStack_480);
  _objc_release(uStack_508);
  _objc_release(uStack_500);
  _objc_release(uStack_4f8);
  _objc_release(uStack_4f0);
  _objc_release(uStack_4e8);
  _objc_release(uStack_4e0);
  _objc_release(uStack_4d8);
  _objc_release(uStack_4d0);
  _objc_release(uStack_4c8);
  _objc_release(uStack_4b8);
  _objc_release(uStack_4b0);
  _objc_release(uStack_4a8);
  _objc_release(uStack_4a0);
  _objc_release(uStack_498);
  _objc_release(uStack_490);
  _objc_release(uStack_488);
  _objc_release(uStack_478);
  _objc_release(uStack_470);
  _objc_release(uStack_468);
  _objc_release(uStack_460);
  _objc_release(uStack_458);
  _objc_release(uStack_450);
  _objc_release(uStack_448);
  _objc_release(uStack_440);
  _objc_release(uStack_438);
  _objc_release(uStack_430);
  _objc_release(uStack_428);
  _objc_release(uStack_420);
  _objc_release(uStack_418);
  _objc_release(uStack_410);
  _objc_release(uStack_408);
  _objc_release(uStack_400);
  _objc_release(uStack_3f8);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3e8);
  _objc_release(uStack_3e0);
  _objc_release(uStack_3d8);
  _objc_release(uStack_3d0);
  _objc_release(uStack_3c8);
  _objc_release(uStack_3c0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_398);
  _objc_release(puStack_390);
  _objc_release(puStack_388);
  _objc_release(puStack_380);
  _objc_release(puStack_378);
  _objc_release(puStack_370);
  _objc_release(uStack_368);
  _objc_release(puStack_360);
  _objc_release(puStack_358);
  _objc_release(uStack_350);
  _objc_release(puStack_348);
  _objc_release(uStack_338);
  _objc_release(uStack_330);
  _objc_release(uStack_328);
  _objc_release(uStack_320);
  _objc_release(uStack_318);
  _objc_release(uStack_310);
  _objc_release(uStack_300);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(lStack_290);
  _objc_release(lStack_280);
  _objc_release(uStack_288);
  _objc_release(uStack_278);
  _objc_release(lStack_270);
  _objc_release(lStack_260);
  _objc_release(uStack_268);
  _objc_release(uStack_258);
  _objc_release(lStack_250);
  _objc_release(lStack_240);
  _objc_release(uStack_248);
  _objc_release(uStack_238);
  _objc_release(lStack_230);
  _objc_release(lStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_218);
  _objc_release(lStack_210);
  _objc_release(lStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1d8);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1c0);
  _objc_release(uStack_1c8);
  puVar3 = puStack_1b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_548 = FUN_1053501b8;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_580 = uVar15;
  uStack_578 = uVar6;
  puStack_570 = puVar2;
  uStack_568 = uVar16;
  uStack_560 = uVar10;
  uStack_558 = uVar5;
  puStack_550 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar11 = auStack_598;
  _objc_initWeak(puVar11,puVar3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105350b48();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_598;
  _objc_copyWeak(auStack_5a0,puVar14);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar12 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_590 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar12);
  _objc_release(puVar13);
  func_0x00010c211b40(puVar12);
  func_0x00010c10eda0(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_5a0);
  _objc_destroyWeak(auStack_598);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_5a0);
  _objc_destroyWeak(auStack_598);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar14);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bdc9a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053501b8; end: 10535037f; -[SCNGOCodeVerificationViewController _showErrorAlertWithMessage:] */

void FUN_1053501b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105350b48();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60,puVar5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdc9a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105350380; end: 1053503bf;  */

void FUN_105350380(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc9a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053503c0; end: 10535040b; -[SCNGOCodeVerificationViewController _alertAcknowledged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053503c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010beedb20(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535040c; end: 105350457; -[SCNGOCodeVerificationViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535040c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c25f020(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105350458; end: 1053504a3; -[SCNGOCodeVerificationViewController _resendButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105350458(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c137da0(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053504a4; end: 1053506ab; -[SCNGOCodeVerificationViewController _showVerifySuccessPrompt:] */

void FUN_1053504a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
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
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105350b48();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053506ac;
  puStack_78 = &UNK_1108482a8;
  puVar7 = auStack_68;
  _objc_copyWeak(auStack_70,puVar7);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  lVar4 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  lVar5 = param_3;
  __Unwind_Resume(param_3);
  pcStack_98 = FUN_1053506ac;
  lStack_c0 = lVar4;
  puStack_b8 = puVar2;
  uStack_b0 = param_1;
  lStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_copyWeak(auStack_c8,lVar5 + 0x20);
  func_0x00010bf84b00(puVar7);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1053506ac; end: 105350753;  */

void FUN_1053506ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105350754; end: 10535077f;  */

void FUN_105350754(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be039e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105350780; end: 1053507cb; -[SCNGOCodeVerificationViewController _dismissVerifySuccessPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105350780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010bf84a40(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053507cc; end: 105350817; -[SCNGOCodeVerificationViewController _troubleVerifyingButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053507cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721acc);
  puVar1 = PTR_PTR_1126b7928;
  func_0x00010c27ca60(PTR_PTR_1126b7928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105350818; end: 105350987; -[SCNGOCodeVerificationViewController _showTroubleVerifyingAlertWithInfo:] */

void FUN_105350818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000105350b48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105350988; end: 105350997;  */

void FUN_105350988(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105350998; end: 105350a87; -[SCNGOCodeVerificationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105350998(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721ad0,0);
  _objc_storeStrong(param_1 + _DAT_112721afc,0);
  _objc_storeStrong(param_1 + _DAT_112721af8,0);
  _objc_storeStrong(param_1 + _DAT_112721ae8,0);
  _objc_storeStrong(param_1 + _DAT_112721af4,0);
  _objc_storeStrong(param_1 + _DAT_112721aec,0);
  _objc_storeStrong(param_1 + _DAT_112721ae4,0);
  _objc_storeStrong(param_1 + _DAT_112721af0,0);
  _objc_storeStrong(param_1 + _DAT_112721ad4,0);
  _objc_storeStrong(param_1 + _DAT_112721ae0,0);
  _objc_storeStrong(param_1 + _DAT_112721adc,0);
  _objc_storeStrong(param_1 + _DAT_112721ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721acc,0);
  return;
}



/* Entry: 105350a88; end: 105350ba7;  */

void FUN_105350a88(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3118;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd3118,
                      &PTR____CFConstantStringClassReference_110dd3138,0);
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



/* Entry: 105350ba8; end: 105350bf3; +[SCNGOCodeVerificationAction acknowledgeAlert] */

void FUN_105350ba8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350bf4; end: 105350c3f; +[SCNGOCodeVerificationAction dismissVerifySuccessPrompt] */

void FUN_105350bf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350c40; end: 105350c8b; +[SCNGOCodeVerificationAction exit] */

void FUN_105350c40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350c8c; end: 105350cd7; +[SCNGOCodeVerificationAction resendCode] */

void FUN_105350c8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350cd8; end: 105350d23; +[SCNGOCodeVerificationAction submitCode] */

void FUN_105350cd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350d24; end: 105350d6f; +[SCNGOCodeVerificationAction troubleVerifyingButtonTapped] */

void FUN_105350d24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350d70; end: 105350ddb; +[SCNGOCodeVerificationAction updateVerificationCodeWithCode:wasAutofilled:] */

void FUN_105350d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350ddc; end: 105350e27; +[SCNGOCodeVerificationAction usePassword] */

void FUN_105350ddc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7928;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105350e28; end: 105350e4b; -[SCNGOCodeVerificationAction copyWithZone:] */

undefined8 FUN_105350e28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105350e4c; end: 105350ebb; -[SCNGOCodeVerificationAction hash] */

void FUN_105350e4c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e79d0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105350ebc; end: 105350eff; -[SCNGOCodeVerificationAction internalInit] */

void FUN_105350ebc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e79d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105350f00; end: 105350faf; -[SCNGOCodeVerificationAction isEqual:] */

long FUN_105350f00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105350f94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_105350f94;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105350f94;
    }
  }
  lVar3 = 1;
LAB_105350f94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105350fb0; end: 105351167; -[SCNGOCodeVerificationAction matchUpdateVerificationCode:submitCode:resendCode:acknowledgeAlert:dismissVerifySuccessPrompt:troubleVerifyingButtonTapped:exit:usePassword:] */

void FUN_105350fb0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 != 0) {
          (**(code **)(param_3 + 0x10))
                    (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
        }
        goto LAB_105351110;
      }
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_105351110;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_105351110;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
    else {
      if ((lVar1 != 3) || (param_6 == 0)) goto LAB_105351110;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
      if (param_7 == 0) goto LAB_105351110;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
    else {
      if ((lVar1 != 5) || (param_8 == 0)) goto LAB_105351110;
      pcVar2 = *(code **)(param_8 + 0x10);
      lVar1 = param_8;
    }
  }
  else if (lVar1 == 6) {
    if (param_9 == 0) goto LAB_105351110;
    pcVar2 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
  }
  else {
    if ((lVar1 != 7) || (param_10 == 0)) goto LAB_105351110;
    pcVar2 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
  }
  (*pcVar2)(lVar1);
LAB_105351110:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105351168; end: 105351173; -[SCNGOCodeVerificationAction .cxx_destruct] */

void FUN_105351168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


