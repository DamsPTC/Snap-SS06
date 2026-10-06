/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053e03ac; end: 1053e03b3; -[SCTwoFAManager isTwoFAOtpEnabled] */

undefined1 FUN_1053e03ac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1053e03b4; end: 1053e03bb; -[SCTwoFAManager setIsTwoFAOtpEnabled:] */

void FUN_1053e03b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1053e03bc; end: 1053e03eb; -[SCTwoFAManager .cxx_destruct] */

void FUN_1053e03bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053e03ec; end: 1053e048f; -[SCUserTwoFALogger initWithUserNotTrackedLogger:userId:] */

undefined1 *
FUN_1053e03ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8118;
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



/* Entry: 1053e0490; end: 1053e04fb; -[SCUserTwoFALogger logEnableSMSTwoFAAttempt:] */

void FUN_1053e0490(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8680;
  _objc_opt_new(PTR_PTR_1126b8680);
  func_0x00010c220c00();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e04fc; end: 1053e05bb; -[SCUserTwoFALogger logEnableSMSTwoFAResponse:statusCode:latencyMS:metadata:] */

void FUN_1053e04fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8688;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010c220c00();
  func_0x00010c20a3c0(puVar1,param_3,param_5);
  func_0x00010c1b92a0(puVar1,param_3,(long)param_1);
  func_0x00010c1c73c0(puVar1,param_3,param_6);
  _objc_release(param_6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e05bc; end: 1053e05eb; -[SCUserTwoFALogger .cxx_destruct] */

void FUN_1053e05bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e05ec; end: 1053e06e7; -[SCUserTwoFAMutatorLegacyImpl initWithTwoFAManager:userNetworkServices:deviceIdManagerLazy:updatesPublisher:] */

undefined1 *
FUN_1053e05ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e8120;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053e06e8; end: 1053e0723; -[SCUserTwoFAMutatorLegacyImpl updateTwoFAStatus:] */

void FUN_1053e06e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28bc80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b0c0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053e0724; end: 1053e0863; -[SCUserTwoFAMutatorLegacyImpl forgetAllDevices:] */

void FUN_1053e0724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e0864;
  puStack_70 = &UNK_110848708;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfb5520(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e0864; end: 1053e08c7;  */

void FUN_1053e0864(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010c261740(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e08c8; end: 1053e094b;  */

void FUN_1053e08c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010bfa0200(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e094c; end: 1053e0a2f; -[SCUserTwoFAMutatorLegacyImpl forgetOneDevice:onComplete:] */

void FUN_1053e094c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053e0a30;
  puStack_68 = &UNK_11084aaa8;
  lStack_60 = param_1;
  _objc_retain(param_4);
  puStack_b0 = puVar3;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1053e0a84;
  puStack_98 = &UNK_11085d1a0;
  lStack_90 = param_1;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bfb5600(uVar1,param_2,param_3,uVar2,&puStack_80,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 1053e0a30; end: 1053e0a83;  */

void FUN_1053e0a30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010be73500(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010c261740(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e0a84; end: 1053e0afb;  */

void FUN_1053e0a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be73500(uVar3);
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010bfa0200(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e0afc; end: 1053e0bcb; -[SCUserTwoFAMutatorLegacyImpl sendSmsTwoFACode:] */

void FUN_1053e0afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053e0bcc;
  puStack_50 = &UNK_110849530;
  _objc_retain(param_3);
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1053e0c14;
  puStack_78 = &UNK_110848438;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c15c7e0(uVar1,param_2,uVar2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e0bcc; end: 1053e0c5f;  */

void FUN_1053e0bcc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010c261740(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e0c60; end: 1053e0e07; -[SCUserTwoFAMutatorLegacyImpl enableSmsTwoFAWithVerificationCode:onComplete:] */

void FUN_1053e0c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053e0e08;
  puStack_90 = &UNK_1108492c0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  ppuVar3 = &puStack_a8;
  uStack_88 = param_4;
  _objc_retainBlock(ppuVar3);
  puStack_d8 = puVar2;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1053e0e8c;
  puStack_c0 = &UNK_1108492c0;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_4);
  ppuVar4 = &puStack_d8;
  uStack_b8 = param_4;
  _objc_retainBlock(ppuVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91800(uVar1);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar3);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e0e08; end: 1053e0f0f;  */

void FUN_1053e0e08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8698;
  func_0x00010c261a20(PTR_PTR_1126b8698);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e0f10; end: 1053e10cf; -[SCUserTwoFAMutatorLegacyImpl enableOtpTwoFAWithVerificationCode:otpSecret:onComplete:] */

void FUN_1053e0f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053e10d0;
  puStack_90 = &UNK_1108492c0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_5);
  ppuVar3 = &puStack_a8;
  uStack_88 = param_5;
  _objc_retainBlock(ppuVar3);
  puStack_d8 = puVar2;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1053e1154;
  puStack_c0 = &UNK_1108492c0;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_5);
  ppuVar4 = &puStack_d8;
  uStack_b8 = param_5;
  _objc_retainBlock(ppuVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91060(uVar1);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar3);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e10d0; end: 1053e11d7;  */

void FUN_1053e10d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8698;
  func_0x00010c261a20(PTR_PTR_1126b8698);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e11d8; end: 1053e1337; -[SCUserTwoFAMutatorLegacyImpl disableSmsTwoFA:] */

void FUN_1053e11d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e1338;
  puStack_70 = &UNK_110848708;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  ppuVar2 = &puStack_88;
  uStack_68 = param_3;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1053e139c;
  puStack_a0 = &UNK_1108492c0;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  ppuVar3 = &puStack_b8;
  uStack_98 = param_3;
  _objc_retainBlock(ppuVar3);
  func_0x00010bf80760(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e1338; end: 1053e139b;  */

void FUN_1053e1338(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010c261740(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e139c; end: 1053e141f;  */

void FUN_1053e139c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010bfa0200(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e1420; end: 1053e157f; -[SCUserTwoFAMutatorLegacyImpl disableOtpTwoFA:] */

void FUN_1053e1420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e1580;
  puStack_70 = &UNK_110848708;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  ppuVar2 = &puStack_88;
  uStack_68 = param_3;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1053e15e4;
  puStack_a0 = &UNK_1108492c0;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  ppuVar3 = &puStack_b8;
  uStack_98 = param_3;
  _objc_retainBlock(ppuVar3);
  func_0x00010bf80440(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e1580; end: 1053e15e3;  */

void FUN_1053e1580(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010c261740(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e15e4; end: 1053e1667;  */

void FUN_1053e15e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be73500();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b8690;
  func_0x00010bfa0200(PTR_PTR_1126b8690);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e1668; end: 1053e1737; -[SCUserTwoFAMutatorLegacyImpl generateRecoveryCodeWithCompletion:] */

void FUN_1053e1668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053e1738;
  puStack_60 = &UNK_110848438;
  _objc_retain(param_3);
  puStack_a0 = puVar3;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1053e1784;
  puStack_88 = &UNK_110848438;
  uStack_80 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010bfbfee0(uVar1,param_2,uVar2,&puStack_78,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e1738; end: 1053e17cf;  */

void FUN_1053e1738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b86a0;
  func_0x00010c261a20(PTR_PTR_1126b86a0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e17d0; end: 1053e1837; -[SCUserTwoFAMutatorLegacyImpl _persistState] */

void FUN_1053e17d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c14b0c0(*(undefined8 *)(param_1 + 8));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c081b00(uVar1);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053e1838; end: 1053e187f; -[SCUserTwoFAMutatorLegacyImpl .cxx_destruct] */

void FUN_1053e1838(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e1880; end: 1053e1993; -[SCUserTwoFAProviderLegacyImpl initWithTwoFAManager:userNetworkServices:updatesPublisher:] */

undefined1 *
FUN_1053e1880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8128;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c081b00(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053e1994; end: 1053e19eb; -[SCUserTwoFAProviderLegacyImpl currentStatus] */

void FUN_1053e1994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af980;
  _objc_alloc(PTR_PTR_1126af980);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c081b40(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c081b20(uVar3);
  func_0x00010c01f720(puVar1,param_2,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e19ec; end: 1053e1b03; -[SCUserTwoFAProviderLegacyImpl fetchVerifiedDevicesWithCompletion:] */

void FUN_1053e19ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1053e1b04;
  puStack_58 = &UNK_110859310;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bfab480(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e1b04; end: 1053e1b13;  */

void FUN_1053e1b04(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001053e1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 1053e1b14; end: 1053e1b8f;  */

void FUN_1053e1b14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0b300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,0,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e1b90; end: 1053e1b97; -[SCUserTwoFAProviderLegacyImpl twoFAStatusUpdates] */

void FUN_1053e1b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1053e1b98; end: 1053e1c6f; -[SCUserTwoFAProviderLegacyImpl _errorWithErrorText:] */

void FUN_1053e1b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00e2e0();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1053e1c70; end: 1053e1cab; -[SCUserTwoFAProviderLegacyImpl .cxx_destruct] */

void FUN_1053e1c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e1cac; end: 1053e1cf3;  */

void FUN_1053e1cac(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd89d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd89d8,
                      &PTR____CFConstantStringClassReference_110dd89f8,0);
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



/* Entry: 1053e1cf4; end: 1053e1d83; -[SCAuthMetricsLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1053e1cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8130;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf107a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4320(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053e1d84; end: 1053e1ecf; -[SCAuthMetricsLogger logHTTPResponseForEndpoint:statusCode:metadata:] */

void FUN_1053e1d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b86a8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfe4d60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd8a78,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd8a98,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar4);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e1ed0; end: 1053e1fb3; -[SCAuthMetricsLogger logAuthError:forFeature:] */

void FUN_1053e1ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b86a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc0f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db1138,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e1fb4; end: 1053e1fbb; -[SCAuthMetricsLogger graphene] */

undefined8 FUN_1053e1fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053e1fbc; end: 1053e1feb; -[SCAuthMetricsLogger setGraphene:] */

void FUN_1053e1fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e1fec; end: 1053e1ff7; -[SCAuthMetricsLogger .cxx_destruct] */

void FUN_1053e1fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e1ff8; end: 1053e2023; +[SCGrapheneAuthMetric httpResponse] */

void FUN_1053e1ff8(void)

{
  _objc_alloc(PTR_PTR_1126b86a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e2024; end: 1053e204f; +[SCGrapheneAuthMetric genericError] */

void FUN_1053e2024(void)

{
  _objc_alloc(PTR_PTR_1126b86a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e2050; end: 1053e20ef; -[SCGrapheneAuthMetric description] */

void FUN_1053e2050(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8ab8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd8ab8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8138;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053e20f0; end: 1053e223b; -[SCGrapheneRegistry authGraphene] */

void FUN_1053e20f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053e2178;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb980 != -1) {
    func_0x00010002a2fc(0x1136bb980,&puStack_48);
  }
  uVar1 = uRam00000001136bb978;
  _objc_retain(uRam00000001136bb978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053e223c; end: 1053e2247; +[SCSnapEditorFBTweaks snapEditorSendPreuploadEnabledTweak] */

void FUN_1053e223c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e2248; end: 1053e2253; +[SCSnapEditorFBTweaks snapEditorMainCameraVideoTweak] */

void FUN_1053e2248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e2254; end: 1053e225f; +[SCSnapEditorFBTweaks snapEditorMainCameraImageTweak] */

void FUN_1053e2254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e2260; end: 1053e226b; +[SCSnapEditorFBTweaks snapEditorTemplatesTweak] */

void FUN_1053e2260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e226c; end: 1053e2277; +[SCSnapEditorFBTweaks snapEditorImportMemoriesAsSnapDoc] */

void FUN_1053e226c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e2278; end: 1053e2283; +[SCSnapEditorFBTweaks snapEditorFromMusicCameraSpotlight] */

void FUN_1053e2278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e2284; end: 1053e228f; +[SCSnapEditorFBTweaks snapEditorMainCameraImageWithTimeline] */

void FUN_1053e2284(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e2290; end: 1053e2297; +[SCSnapEditorFBTweaks batchCaptureDrawingToolEnabled] */

undefined8 FUN_1053e2290(void)

{
  return 0;
}



/* Entry: 1053e2298; end: 1053e229f; +[SCSnapEditorFBTweaks batchCaptureScissorToolEnabled] */

undefined8 FUN_1053e2298(void)

{
  return 0;
}



/* Entry: 1053e22a0; end: 1053e22a7; +[SCSnapEditorFBTweaks snapEditorToggleLensToolEnabled] */

undefined8 FUN_1053e22a0(void)

{
  return 0;
}



/* Entry: 1053e22a8; end: 1053e22af; +[SCSnapEditorFBTweaks snapEditorMagicEraserEnabled] */

undefined8 FUN_1053e22a8(void)

{
  return 0;
}



/* Entry: 1053e22b0; end: 1053e22b7; +[SCSnapEditorFBTweaks snapEditorGenericImageStickerEnabled] */

undefined8 FUN_1053e22b0(void)

{
  return 0;
}



/* Entry: 1053e22b8; end: 1053e22c3; +[SCSnapEditorFBTweaks snapEditorMemoriesCameraRollEnabled] */

void FUN_1053e22b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf500,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053e22c4; end: 1053e2387; -[SCVoiceMLLensFeatureSettingsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e22c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_112722bf8;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1053e2388;
  puStack_40 = &UNK_110884158;
  lStack_38 = param_1;
  _objc_retain();
  func_0x00010bf11fe0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b86b8;
  _objc_alloc(PTR_PTR_1126b86b8);
  func_0x00010c062600();
  _objc_release(puVar1);
  _objc_release(lStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053e2388; end: 1053e23e3;  */

void FUN_1053e2388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b86b0;
  _objc_alloc(PTR_PTR_1126b86b0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012300(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053e23e4; end: 1053e241b; -[SCVoiceMLLensFeatureSettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e23e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112722bfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722bf8);
  return;
}



/* Entry: 1053e241c; end: 1053e2427; -[SCFeatureSettingsService isHasAcceptedVoiceMLLensVoiceControlOnboarding] */

void FUN_1053e241c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dd8b18);
  return;
}



/* Entry: 1053e2428; end: 1053e2433; -[SCFeatureSettingsService hasAcceptedVoiceMLLensVoiceControlOnboardingServerParam] */

undefined ** FUN_1053e2428(void)

{
  return &PTR____CFConstantStringClassReference_110dd8b18;
}



/* Entry: 1053e2434; end: 1053e2443; -[SCFeatureSettingsService setHasAcceptedVoiceMLLensVoiceControlOnboarding:] */

void FUN_1053e2434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dd8b18,param_3);
  return;
}



/* Entry: 1053e2444; end: 1053e244b; -[SCFeatureSettingsService VOICE_ML_LENSES_ACCEPTED_FTUE_PROMPT_client_value:] */

undefined * FUN_1053e2444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1053e244c; end: 1053e2453; -[SCFeatureSettingsService VOICE_ML_LENSES_ACCEPTED_FTUE_PROMPT_server_value:] */

void FUN_1053e244c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1053e2454; end: 1053e2463; -[SCFeatureSettingsService hasAcceptedVoiceMLLensVoiceControlOnboarding] */

void FUN_1053e2454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dd8b18,0);
  return;
}



/* Entry: 1053e2464; end: 1053e246f; -[SCFeatureSettingsService getVoicemlLensVoiceControlOnboardingBannerSeenCount] */

void FUN_1053e2464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dd8b38);
  return;
}



/* Entry: 1053e2470; end: 1053e247b; -[SCFeatureSettingsService voicemlLensVoiceControlOnboardingBannerSeenCountServerParam] */

undefined ** FUN_1053e2470(void)

{
  return &PTR____CFConstantStringClassReference_110dd8b38;
}



/* Entry: 1053e247c; end: 1053e248b; -[SCFeatureSettingsService setVoicemlLensVoiceControlOnboardingBannerSeenCount:] */

void FUN_1053e247c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dd8b38,param_3);
  return;
}



/* Entry: 1053e248c; end: 1053e2493; -[SCFeatureSettingsService VOICE_ML_LENS_VOICE_CONTROL_ONBOARDING_BANNER_SEEN_COUNT_client_value:] */

void FUN_1053e248c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1053e2494; end: 1053e249b; -[SCFeatureSettingsService VOICE_ML_LENS_VOICE_CONTROL_ONBOARDING_BANNER_SEEN_COUNT_server_value:] */

void FUN_1053e2494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1053e249c; end: 1053e24ab; -[SCFeatureSettingsService voicemlLensVoiceControlOnboardingBannerSeenCount] */

void FUN_1053e249c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dd8b38,0);
  return;
}



/* Entry: 1053e24ac; end: 1053e251f; -[SCVoiceMLLensFeatureSettingsImpl initWithFeaturesSettingsService:] */

undefined1 * FUN_1053e24ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8140;
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



/* Entry: 1053e2520; end: 1053e255f; -[SCVoiceMLLensFeatureSettingsImpl hasAcceptedVoiceMLLensVoiceControlOnboarding] */

undefined8 FUN_1053e2520(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd39c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1053e2560; end: 1053e259b; -[SCVoiceMLLensFeatureSettingsImpl setHasAcceptedVoiceMLLensVoiceControlOnboarding:] */

void FUN_1053e2560(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e259c; end: 1053e25db; -[SCVoiceMLLensFeatureSettingsImpl voicemlLensVoiceControlOnboardingBannerSeenCount] */

undefined8 FUN_1053e259c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0920();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1053e25dc; end: 1053e2617; -[SCVoiceMLLensFeatureSettingsImpl setVoicemlLensVoiceControlOnboardingBannerSeenCount:] */

void FUN_1053e25dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2240a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e2618; end: 1053e2623; -[SCVoiceMLLensFeatureSettingsImpl .cxx_destruct] */

void FUN_1053e2618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e2624; end: 1053e2697; -[SCVoiceMLLensFeatureSettingsServices initWithVoiceMLLensFeatureSettings:] */

undefined1 * FUN_1053e2624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8148;
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



/* Entry: 1053e2698; end: 1053e269f; -[SCVoiceMLLensFeatureSettingsServices voicemlLensFeatureSettings] */

undefined8 FUN_1053e2698(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053e26a0; end: 1053e26ab; -[SCVoiceMLLensFeatureSettingsServices .cxx_destruct] */

void FUN_1053e26a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e26ac; end: 1053e2743; -[SCConfigDeauthProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e26ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0650c0(PTR_PTR_1126b86c0,param_2,0);
  param_1 = param_1 + _DAT_112722c08;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc3f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291c40();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e2744; end: 1053e277b; -[SCConfigDeauthProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e2744(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112722c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722c0c);
  return;
}



/* Entry: 1053e277c; end: 1053e2953; -[SCConfigRegistrationAuthProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e277c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112722c20;
    _objc_loadWeakRetained(lVar9);
  }
  lVar1 = lVar9;
  func_0x00010bf10b80(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  func_0x00010c0650c0(PTR_PTR_1126b86c0,param_2,lVar1);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112722c1c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c273160(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112722c18;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010bf4e080(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_1 + _DAT_112722c10;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bf46220();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfc3f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b86c8;
  _objc_alloc(PTR_PTR_1126b86c8);
  func_0x00010c048a40();
  func_0x00010c291cc0(lVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112722c14);
  puVar7 = PTR_PTR_1126b86d0;
  _objc_alloc_init(PTR_PTR_1126b86d0);
  func_0x00010bf9d660(uVar8,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053e2954; end: 1053e29b3; -[SCConfigRegistrationAuthProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e2954(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722c14,0);
  _objc_destroyWeak(param_1 + _DAT_112722c10);
  _objc_destroyWeak(param_1 + _DAT_112722c20);
  _objc_destroyWeak(param_1 + _DAT_112722c1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722c18);
  return;
}



/* Entry: 1053e29b4; end: 1053e2c47;  */

void FUN_1053e29b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010bdc2c60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
  func_0x00010b88c2b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(param_1);
  func_0x00010c1d0640(puVar4);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010c08fa60(uVar5);
  func_0x00010bf64a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06a40();
  func_0x00010c08fa60();
  func_0x00010bf06a40(puVar1);
  puVar6 = puVar1;
  func_0x00010bf06ae0(puVar1);
  puVar2 = PTR_PTR_1126b4960;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053e2c48; end: 1053e2ecf; -[SCConfigRepositoryNetworkDefaultImpl refreshConfig:authentication:completion:] */

void FUN_1053e2c48(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar6 = param_5;
  func_0x00010c06ca40();
  if ((uint)uVar6 == 0) {
    func_0x00010c1b5400(param_4);
    func_0x00010c250dc0(*(undefined8 *)(param_2 + 0x10));
  }
  else {
    func_0x00010c250da0(*(undefined8 *)(param_2 + 0x10));
  }
  lVar2 = param_4;
  func_0x00010bf462a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = param_4;
    func_0x00010bf462a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  func_0x00010bf061e0(param_4);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266420();
  _objc_release(uVar5);
  if ((((uint)uVar6 ^ 1) & 1) == 0) {
    _objc_initWeak(auStack_68,param_2);
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1053e2ed0;
    puStack_98 = &UNK_110884188;
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_78 = param_1;
    _objc_retain(param_4);
    lStack_90 = param_4;
    uStack_70 = bVar1;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_copyWeak(auStack_c0,auStack_68);
    uStack_b8 = param_1;
    func_0x00010bfc2a00(param_5);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010be5c5e0(param_2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053e2ed0; end: 1053e2f77;  */

void FUN_1053e2ed0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f2e0(param_1 - *(double *)(param_2 + 0x38));
    _objc_release(uVar2);
    func_0x00010be5b540(param_1,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053e2f78; end: 1053e3033;  */

void FUN_1053e2f78(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_3);
    func_0x00010bf3f300(param_1 - *(double *)(param_2 + 0x28),uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053e3034; end: 1053e32b7; -[SCConfigRepositoryNetworkDefaultImpl _makeAuthedRequest:targetingRequest:requestStartTime:requestManager:isFullSync:completion:] */

void FUN_1053e3034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_1053e29b4(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c25f660(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 1053e32b8; end: 1053e334b;  */

void FUN_1053e32b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined1 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010bf462a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf061e0(uVar4);
  func_0x00010be293a0(uVar5,uVar1,param_2,param_4,0,uVar2,uVar3,uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1053e334c; end: 1053e34cf; -[SCConfigRepositoryNetworkDefaultImpl _makeUnAuthedRequest:isFullSync:completion:] */

void FUN_1053e334c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = 0;
  FUN_1053e29b4(0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c25f660(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1053e34d0; end: 1053e35e3;  */

void FUN_1053e34d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_initWeak(auStack_68,uVar2);
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf462a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf061e0();
  func_0x00010be31700(uVar3,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053e35e4; end: 1053e36e7;  */

void FUN_1053e35e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_initWeak(auStack_68,uVar2);
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf462a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf061e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be293a0(uVar3,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


