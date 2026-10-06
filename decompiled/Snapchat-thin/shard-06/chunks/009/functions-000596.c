/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f69024; end: 104f69107; -[SCNFMOnboardingPromptViewController loadView] */

void FUN_104f69024(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e53f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f69108; end: 104f6911b; -[SCNFMOnboardingPromptViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f69108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112717e48),PTR_s_presentIn__112620b70,param_1);
  return;
}



/* Entry: 104f6911c; end: 104f6912b; -[SCNFMOnboardingPromptViewController tray:positionDidChange:] */

void FUN_104f6911c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfd3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDismiss_11255ce98);
    return;
  }
  return;
}



/* Entry: 104f6912c; end: 104f6913f; -[SCNFMOnboardingPromptViewController tray:heightForPosition:] */

undefined8
FUN_104f6912c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd8990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__calculateTrayHeight_112553c00);
    return param_1;
  }
  return 0xbff0000000000000;
}



/* Entry: 104f69140; end: 104f6932b; -[SCNFMOnboardingPromptViewController _createTrayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f69140(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126b2c30;
  _objc_alloc(PTR_PTR_1126b2c30);
  func_0x00010c015520();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7200(puVar1);
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b2c38;
  _objc_alloc(PTR_PTR_1126b2c38);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f6932c;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0315c0(puVar2);
  puVar3 = PTR_PTR_1126b2c40;
  _objc_alloc(PTR_PTR_1126b2c40);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112717e30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f6932c; end: 104f693bb;  */

void FUN_104f6932c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f693bc;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f693bc; end: 104f693e7;  */

void FUN_104f693bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f693e8; end: 104f69477;  */

void FUN_104f693e8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f69478;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f69478; end: 104f694a3;  */

void FUN_104f69478(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f694a4; end: 104f69503; -[SCNFMOnboardingPromptViewController _dismissTray] */

void FUN_104f694a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f69504; end: 104f695a7; -[SCNFMOnboardingPromptViewController _calculateTrayHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104f69504(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_112717e40;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar1);
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(param_2);
  return dVar3 + param_1;
}



/* Entry: 104f695a8; end: 104f695e3; -[SCNFMOnboardingPromptViewController _didConfirmEnterChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f695a8(long param_1)

{
  func_0x00010be038c0();
  param_1 = param_1 + _DAT_112717e34;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f695e4; end: 104f6961f; -[SCNFMOnboardingPromptViewController _didSelectSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f695e4(long param_1)

{
  func_0x00010be038c0();
  param_1 = param_1 + _DAT_112717e34;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7af80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f69620; end: 104f6965b; -[SCNFMOnboardingPromptViewController _didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f69620(long param_1)

{
  func_0x00010be038c0();
  param_1 = param_1 + _DAT_112717e34;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6965c; end: 104f696d7; -[SCNFMOnboardingPromptViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f6965c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717e44,0);
  _objc_storeStrong(param_1 + _DAT_112717e48,0);
  _objc_storeStrong(param_1 + _DAT_112717e40,0);
  _objc_storeStrong(param_1 + _DAT_112717e38,0);
  _objc_destroyWeak(param_1 + _DAT_112717e34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717e30,0);
  return;
}



/* Entry: 104f696d8; end: 104f6974b; -[SCEelBootstrapHelper initWithNativeMessagingSessionManager:] */

undefined1 * FUN_104f696d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e53f8;
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



/* Entry: 104f6974c; end: 104f69897; -[SCEelBootstrapHelper bootstrapWithKey:keyVersion:completion:] */

void FUN_104f6974c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2730;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f69898;
  puStack_60 = &UNK_110849530;
  _objc_retain(param_5);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104f698a8;
  puStack_88 = &UNK_110852668;
  uStack_80 = param_5;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar2,param_2,&puStack_78,&puStack_a0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fae0();
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 104f69898; end: 104f698b7;  */

void FUN_104f69898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f698a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 104f698b8; end: 104f698c3; -[SCEelBootstrapHelper .cxx_destruct] */

void FUN_104f698b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f698c4; end: 104f69927; -[SCEelNotificationGrapheneLogger init] */

undefined1 * FUN_104f698c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5400;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b2c48;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f69928; end: 104f69937; -[SCEelNotificationGrapheneLogger logBootstrapResult:] */

void FUN_104f69928(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 8) + 8);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11085e3c8,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume(ppuVar2);
  _objc_retain(&PTR____CFConstantStringClassReference_110e125b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e125b8);
  return;
}



/* Entry: 104f69938; end: 104f69947; -[SCEelNotificationGrapheneLogger logPayloadDecryptionResult:] */

void FUN_104f69938(long param_1,undefined8 param_2,undefined *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_1 + 8) + 8);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = &UNK_11085e328;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_11085e328,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_104f69aec;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_11085e378,&uStack_b0,param_3);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 104f69948; end: 104f69953; -[SCEelNotificationGrapheneLogger logPublicKeyMissing] */

void FUN_104f69948(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11085e378,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104f69954; end: 104f6995f; -[SCEelNotificationGrapheneLogger .cxx_destruct] */

void FUN_104f69954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f69960; end: 104f699d3; -[SCGrapheneEelNotificationMetric2 init] */

undefined1 * FUN_104f69960(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f699d4; end: 104f69aeb;  */

void FUN_104f699d4(long param_1,undefined *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_11085e328;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_11085e328,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_104f69aec;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_11085e378,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 104f69aec; end: 104f69b63;  */

void FUN_104f69aec(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11085e378,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104f69b64; end: 104f69c7b;  */

void FUN_104f69b64(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11085e3c8,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume(ppuVar2);
  _objc_retain(&PTR____CFConstantStringClassReference_110e125b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e125b8);
  return;
}



/* Entry: 104f69c7c; end: 104f69cab; -[SCMessagingNotificationProcessingPlugin identifier] */

void FUN_104f69c7c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e125b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e125b8);
  return;
}



/* Entry: 104f69cac; end: 104f69d8f; -[SCMessagingNotificationProcessingPlugin didReceivePushNotificationRequest:backgroundFetchResultCallback:processingCallback:] */

void FUN_104f69cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2c50;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dca20(param_3);
  _objc_release(param_3);
  func_0x00010bfeb120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  (**(code **)(param_4 + 0x10))(param_4,1);
  _objc_release(param_4);
  func_0x00010c0e3ce0(param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f69d90; end: 104f69e03; -[SCMessagingNotificationProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f69d90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b2c58;
  _objc_alloc_init(PTR_PTR_1126b2c58);
  param_1 = param_1 + _DAT_112717e58;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f69e04; end: 104f69e13; -[SCMessagingNotificationProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f69e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717e58);
  return;
}



/* Entry: 104f69e14; end: 104f69fe3;  */

undefined8 ****
FUN_104f69e14(undefined8 param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4,
             undefined8 ***param_5,undefined8 ***param_6,undefined8 ***param_7,undefined8 ***param_8
             )

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined1 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppppuVar9 = (undefined8 ****)PTR_PTR_1126b2c60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar14 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  ppppuVar10 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppppuVar11 = ppppuVar9;
  ppppuVar15 = ppppuVar10;
  ppppuVar17 = param_2;
  func_0x00010c02b940();
  _objc_release(param_2);
  ppppuVar12 = ppppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppppuVar16 = &pppuStack_80;
    uStack_48 = 0x104f69ee8;
    ppuStack_78 = *(undefined8 ***)PTR____stack_chk_guard_11034bdc0;
    pppuStack_70 = ppppuVar10;
    pppuStack_68 = ppppuVar9;
    pppuStack_60 = param_2;
    pppuStack_58 = ppppuVar11;
    ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
    _objc_retain();
    ppppuVar11 = ppppuVar14;
    if (ppppuVar14 < (undefined8 ****)0x5) {
      if (ppppuVar14 == (undefined8 ****)0x2) {
        ppppuVar9 = ppppuVar12;
        func_0x00010c131d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppppuVar11 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
        if (ppppuVar9 != (undefined8 ****)0x0) {
          ppppuVar9 = ppppuVar12;
          func_0x00010c131d80();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar17 = (undefined8 ****)0x1;
          ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_80 = ppppuVar9;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppuVar9);
          ppppuVar15 = ppppuVar16;
        }
      }
      else {
        ppppuVar11 = ppppuVar12;
        func_0x00010c0c72c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release();
    if (*(undefined8 ****)PTR____stack_chk_guard_11034bdc0 != (undefined8 ***)ppuStack_78) {
      ___stack_chk_fail();
      ppuVar7 = ppuStack_50;
      pppuVar6 = pppuStack_58;
      pppuVar5 = pppuStack_60;
      pppuVar4 = pppuStack_68;
      pppuVar3 = pppuStack_70;
      ppuVar2 = ppuStack_78;
      pppuVar1 = pppuStack_80;
      _objc_retain(ppppuVar15);
      _objc_retain(ppppuVar17);
      _objc_retain(param_6);
      _objc_retain(param_8);
      _objc_retain(pppuVar1);
      _objc_retain(ppuVar2);
      _objc_retain(pppuVar3);
      _objc_retain(pppuVar4);
      _objc_retain(pppuVar5);
      _objc_retain(pppuVar6);
      _objc_retain(ppuVar7);
      puStack_e8 = PTR_PTR_1126e5410;
      ppppuVar9 = &pppuStack_f0;
      pppuStack_f0 = ppppuVar12;
      _objc_msgSendSuper2(ppppuVar9,PTR_s_init_1125d9248);
      if (ppppuVar9 != (undefined8 ****)0x0) {
        uVar8 = (undefined1)uStack_48;
        *(undefined4 *)(ppppuVar9 + 0xc) = 0;
        _objc_retain(ppppuVar15);
        pppuVar13 = ppppuVar9[1];
        ppppuVar9[1] = ppppuVar15;
        _objc_release(pppuVar13);
        _objc_retain(ppppuVar17);
        pppuVar13 = ppppuVar9[2];
        ppppuVar9[2] = ppppuVar17;
        _objc_release(pppuVar13);
        ppppuVar9[3] = param_5;
        _objc_retain(param_6);
        pppuVar13 = ppppuVar9[4];
        ppppuVar9[4] = param_6;
        _objc_release(pppuVar13);
        ppppuVar9[5] = param_7;
        _objc_retain(param_8);
        pppuVar13 = ppppuVar9[6];
        ppppuVar9[6] = param_8;
        _objc_release(pppuVar13);
        _objc_storeWeak(ppppuVar9 + 7,pppuVar1);
        _objc_retain(ppuVar2);
        pppuVar13 = ppppuVar9[8];
        ppppuVar9[8] = (undefined8 ***)ppuVar2;
        _objc_release(pppuVar13);
        _objc_retain(pppuVar3);
        pppuVar13 = ppppuVar9[9];
        ppppuVar9[9] = pppuVar3;
        _objc_release(pppuVar13);
        _objc_retain(pppuVar4);
        pppuVar13 = ppppuVar9[0xe];
        ppppuVar9[0xe] = pppuVar4;
        _objc_release(pppuVar13);
        _objc_retain(pppuVar5);
        pppuVar13 = ppppuVar9[10];
        ppppuVar9[10] = pppuVar5;
        _objc_release(pppuVar13);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e300();
        *(char *)(ppppuVar9 + 0x17) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e320();
        *(char *)((long)ppppuVar9 + 0xb9) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e2e0();
        *(char *)((long)ppppuVar9 + 0xba) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e2c0();
        *(char *)((long)ppppuVar9 + 0xbb) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        _objc_retain(ppuVar7);
        pppuVar13 = ppppuVar9[0xb];
        ppppuVar9[0xb] = (undefined8 ***)ppuVar7;
        _objc_release(pppuVar13);
        pppuVar13 = (undefined8 ***)PTR_PTR_1126ae810;
        _objc_opt_new();
        pppuVar18 = ppppuVar9[0x16];
        ppppuVar9[0x16] = pppuVar13;
        _objc_release(pppuVar18);
        *(undefined1 *)((long)ppppuVar9 + 0xbc) = uVar8;
        func_0x00010bec87a0(ppppuVar9);
      }
      _objc_release(ppuVar7);
      _objc_release(pppuVar6);
      _objc_release(pppuVar5);
      _objc_release(pppuVar4);
      _objc_release(pppuVar3);
      _objc_release(ppuVar2);
      _objc_release(pppuVar1);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(ppppuVar17);
      _objc_release(ppppuVar15);
      return ppppuVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar11);
  return ppppuVar11;
}



/* Entry: 104f69fe4; end: 104f6a2ef; -[SCChatOperaPlaylistDataSource initWithConversationId:messageId:messageType:userId:startIndex:participants:delegate:conversationDataFetcher:conversationUpdateEventPublisher:messagePreparer:playbackGrapheneLogger:messagingExperimentService:performer:isQuoted:] */

undefined8 *
FUN_104f69fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e5410;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0xc) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07e300();
    *(char *)(puVar1 + 0x17) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07e320();
    *(char *)((long)puVar1 + 0xb9) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07e2e0();
    *(char *)((long)puVar1 + 0xba) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07e2c0();
    *(char *)((long)puVar1 + 0xbb) = (char)uVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xbc) = param_16;
    func_0x00010bec87a0(puVar1);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f6a2f0; end: 104f6a493; -[SCChatOperaPlaylistDataSource launchCandidates] */

void FUN_104f6a2f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104f6a494;
    puStack_58 = &UNK_11085e438;
    puVar3 = auStack_50;
    _objc_copyWeak(puVar3,auStack_48);
    func_0x00010bfa99e0(uVar2);
  }
  else {
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0(*(undefined8 *)(param_1 + 0x10));
    puVar3 = auStack_78;
    _objc_copyWeak(puVar3,auStack_48);
    func_0x00010bfa8a00(uVar2);
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfbc3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f6a494; end: 104f6a523;  */

void FUN_104f6a494(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdf40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6a524; end: 104f6a52f; -[SCChatOperaPlaylistDataSource itemType] */

undefined ** FUN_104f6a524(void)

{
  return &PTR____CFConstantStringClassReference_110dbd758;
}



/* Entry: 104f6a530; end: 104f6a53b; -[SCChatOperaPlaylistDataSource setPlaylistItemController:] */

void FUN_104f6a530(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 104f6a53c; end: 104f6a67b; -[SCChatOperaPlaylistDataSource dataModelForGroup:] */

void FUN_104f6a53c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x90);
  puVar5 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c0e00e0(lVar3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b2c60;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c02b940(puVar5,param_2,puVar1,*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    _objc_retain(puVar2);
    _os_unfair_lock_lock(param_3 + 0x60);
    uVar4 = *(undefined8 *)(param_3 + 0x90);
    puVar5 = puVar2;
    func_0x00010be36bc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b2c68;
    _objc_alloc(PTR_PTR_1126b2c68);
    func_0x00010c02b400();
    _objc_release(uVar4);
    _os_unfair_lock_unlock(param_3 + 0x60);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f6a67c; end: 104f6a737; -[SCChatOperaPlaylistDataSource dataModelFor:] */

void FUN_104f6a67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_alloc(PTR_PTR_1126b2c68);
  func_0x00010c02b400();
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f6a738; end: 104f6a89f; -[SCChatOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_104f6a738(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _os_unfair_lock_lock(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x60);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b23d8;
    _objc_alloc();
    func_0x00010c0558c0();
    param_4 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  func_0x00010c13a9c0(param_3);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(puVar4 + 0x60);
    __Unwind_Resume();
    lVar2 = *(long *)(param_3 + 0x88);
    _objc_retain(param_4);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      lVar1 = lVar2;
      func_0x00010c0cb340(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      FUN_104f76c8c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b2368;
      _objc_opt_new(PTR_PTR_1126b2368);
      lVar1 = lVar8;
      func_0x00010c0c5180(lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c2b53a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c1531a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar8);
    }
    uVar5 = *(ulong *)(param_3 + 0x88);
    func_0x00010bf529e0();
    if ((1 < uVar5) && (*(long *)(param_3 + 0x18) == 0)) {
      uVar6 = *(undefined8 *)(param_3 + 0x88);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_104f6aac4;
      puStack_b0 = &UNK_11085e468;
      lStack_a8 = param_3;
      func_0x000100504554(uVar6,&puStack_c8);
      func_0x00010c1d0640(puVar4);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar6);
    }
    puVar3 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    puVar7 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c033240(puVar3);
    (**(code **)(param_4 + 0x10))(param_4,puVar3);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 104f6a8a0; end: 104f6aac3; -[SCChatOperaPlaylistDataSource pageDataForDataModel:completion:] */

void FUN_104f6a8a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar8 = *(long *)(param_1 + 0x88);
  _objc_retain(param_4);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    lVar1 = lVar8;
    func_0x00010c0cb340(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    lVar1 = lVar2;
    func_0x00010c0c5180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2b53a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c1531a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  uVar5 = *(ulong *)(param_1 + 0x88);
  func_0x00010bf529e0();
  if ((1 < uVar5) && (*(long *)(param_1 + 0x18) == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104f6aac4;
    puStack_60 = &UNK_11085e468;
    lStack_58 = param_1;
    func_0x000100504554(uVar6,&puStack_78);
    func_0x00010c1d0640(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  puVar3 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  puVar7 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c033240(puVar3);
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104f6aac4; end: 104f6abb7;  */

void FUN_104f6aac4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0cb340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = param_2;
  func_0x00010c0cb5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108543a00(uVar5,uVar1,uVar3,3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f6abb8; end: 104f6acd3; -[SCChatOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_104f6abb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f6acd4; end: 104f6ad07;  */

void FUN_104f6acd4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6ad08; end: 104f6afa3; -[SCChatOperaPlaylistDataSource _prepareMediaForItem:completion:] */

void FUN_104f6ad08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_2 + 0x60);
  if (param_5 != 0) {
    lVar3 = *(long *)(param_2 + 0x90);
    uVar4 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar3 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,1,0,0);
    }
    lVar2 = lVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_2 + 0x70);
    func_0x00010bf4d700();
    if (lVar2 == 0) {
      _CACurrentMediaTime();
      uVar4 = *(undefined8 *)(param_2 + 0xa0);
      lVar2 = lVar3;
      func_0x00010c0cb5a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_initWeak(auStack_78,param_2);
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      lVar2 = lVar3;
      func_0x00010c0cb5a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_78);
      _objc_retain(lVar1);
      _objc_retain(uVar4);
      uStack_80 = param_1;
      _objc_retain(param_5);
      func_0x00010c09b1a0(uVar5);
      _objc_release(lVar2);
      _objc_release(param_5);
      _objc_release(uVar4);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar4);
    }
    else {
      (**(code **)(param_5 + 0x10))(param_5,0,0,0);
    }
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _os_unfair_lock_unlock(param_2 + 0x60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f6afa4; end: 104f6b00f;  */

void FUN_104f6afa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe6e0(*(undefined8 *)(param_1 + 0x40),lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6b010; end: 104f6b013; -[SCChatOperaPlaylistDataSource removeMediaForItem:] */

void FUN_104f6b010(void)

{
  return;
}



/* Entry: 104f6b014; end: 104f6b0a7; -[SCChatOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_104f6b014(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2c60;
  _objc_opt_class(PTR_PTR_1126b2c60);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0cbb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar3 != 0;
}



/* Entry: 104f6b0a8; end: 104f6b1e3; -[SCChatOperaPlaylistDataSource playlistItemGroupModelForDataModel:] */

void FUN_104f6b0a8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2c60;
  _objc_opt_class(PTR_PTR_1126b2c60);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0cbb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar4;
  FUN_104f76c8c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0xa8));
  puVar1 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  func_0x00010c01ade0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f6b1e4; end: 104f6b1eb; -[SCChatOperaPlaylistDataSource needToPrepareMediaBeforeDisplay] */

undefined1 FUN_104f6b1e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xbe);
}



/* Entry: 104f6b1ec; end: 104f6b467; -[SCChatOperaPlaylistDataSource _didFetchInitialMessage:] */

void FUN_104f6b1ec(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_104f6b428;
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f6b468;
  puStack_70 = &UNK_11085c6a8;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar2 = &puStack_88;
  _objc_retainBlock(ppuVar2);
  uVar3 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf24ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (uVar5 == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_3);
    _objc_retain(uVar6);
    if ((lVar1 == 0) || (uVar3 = param_3, func_0x00010c0791c0(), (int)uVar3 != 0)) {
      _objc_release(uVar6);
      _objc_release(param_3);
LAB_104f6b384:
      uVar3 = param_3;
      func_0x00010c07fd80();
      _objc_release(param_3);
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xbd) = 1;
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa9420();
        goto LAB_104f6b3c4;
      }
    }
    else {
      uVar3 = param_3;
      func_0x00010c07d180();
      _objc_release(uVar6);
      _objc_release(param_3);
      if ((uVar3 & 1) != 0) goto LAB_104f6b384;
      _objc_release(param_3);
    }
    func_0x00010bdfe040(param_1);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf24ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8a80(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
LAB_104f6b3c4:
    _objc_release(uVar6);
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
LAB_104f6b428:
  _objc_release(param_3);
  return;
}



/* Entry: 104f6b468; end: 104f6b5c7;  */

void FUN_104f6b468(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f6b5c8;
  puStack_68 = &UNK_11085e4c8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = &uStack_50;
  _objc_retain(uVar3);
  uVar1 = param_2;
  uStack_60 = uVar3;
  puStack_58 = &uStack_50;
  func_0x000100504554(param_2,&puStack_80);
  uVar2 = param_2;
  func_0x00010bf529e0();
  if ((uVar2 < 2) || (*(char *)(puStack_48 + 3) != '\x01')) {
    uVar2 = param_2;
    func_0x00010bf529e0();
    if ((uVar2 == 0) || ((*(byte *)(puStack_48 + 3) & 1) == 0)) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010bdfe040();
    }
    else {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010bdfe040();
    }
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfdd60();
  }
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return;
}



/* Entry: 104f6b5c8; end: 104f6b643;  */

void FUN_104f6b5c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104f6b644; end: 104f6b71b; -[SCChatOperaPlaylistDataSource _didFetchSingleMessage:] */

void FUN_104f6b644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f6b71c; end: 104f6b74f;  */

void FUN_104f6b71c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6b750; end: 104f6b84f; -[SCChatOperaPlaylistDataSource _didFetchBundledMessages:initialMessage:] */

void FUN_104f6b750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f6b850; end: 104f6b883;  */

void FUN_104f6b850(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde50c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6b884; end: 104f6bcd3; -[SCChatOperaPlaylistDataSource _configureForBundledMessages:initialMessage:] */

void FUN_104f6b884(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lStack_138;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0xbd) == '\x01') {
    *(undefined1 *)(param_1 + 0xbe) = 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar16 = param_3;
  func_0x00010bf529e0();
  if (uVar16 == 0) {
    lStack_138 = 0;
  }
  else {
    lStack_138 = 0;
    uVar16 = 0;
    do {
      uVar7 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf490e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar8 == 0) {
        _objc_release(uVar7);
      }
      else {
        uVar8 = uVar7;
        func_0x00010bf490e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010bf490e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x000104f69ee8(uVar7,*(undefined8 *)(param_1 + 0x18));
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010bf490e0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_4;
        func_0x00010bf490e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0720c0();
        _objc_release(uVar14);
        _objc_release(uVar9);
        lVar11 = param_1;
        func_0x00010bde5360(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = &uStack_a8;
        uStack_a8 = 0;
        uStack_98 = 0x3032000000;
        pcStack_90 = FUN_104f6bcd4;
        uStack_88 = 0x104f6bce4;
        uStack_80 = 0;
        uStack_d8 = 0;
        uStack_c8 = 0x3032000000;
        pcStack_c0 = FUN_104f6bcd4;
        uStack_b8 = 0x104f6bce4;
        uStack_b0 = 0;
        puStack_d0 = &uStack_d8;
        func_0x00010c0c0800();
        lVar13 = puStack_d0[5];
        bVar1 = ((uint)(lVar13 == 0) & (uint)uVar10) == 0;
        if (!bVar1) {
          lVar15 = puStack_a0[5];
          _objc_retain(lVar15);
          _objc_release(lStack_138);
          lStack_138 = lVar15;
        }
        __Block_object_dispose(&uStack_d8,8);
        _objc_release(uStack_b0);
        __Block_object_dispose(&uStack_a8,8);
        _objc_release(uStack_80);
        _objc_release(lVar11);
        _objc_release(uVar8);
        _objc_release(uVar7);
        if (bVar1 && lVar13 != 0) goto LAB_104f6bc3c;
      }
      uVar16 = uVar16 + 1;
      uVar7 = param_3;
      func_0x00010bf529e0();
    } while (uVar16 < uVar7);
  }
  puVar12 = puVar5;
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar12;
  _objc_release(uVar14);
  puVar12 = puVar4;
  func_0x00010c0d3c80();
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar12;
  _objc_release(uVar14);
  _os_unfair_lock_lock(param_1 + 0x60);
  puVar12 = puVar2;
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar12;
  _objc_release(uVar14);
  puVar12 = puVar3;
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar12;
  _objc_release(uVar14);
  puVar12 = puVar6;
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar12;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar14);
  _os_unfair_lock_unlock(param_1 + 0x60);
  lVar11 = lStack_138;
  func_0x00010bf4d6e0();
  if (lVar11 == 4) {
    func_0x00010bde3120(param_1);
  }
  _objc_release(uVar14);
LAB_104f6bc3c:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_138);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f6bcd4; end: 104f6bceb;  */

void FUN_104f6bcd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f6bcec; end: 104f6bd5b;  */

void FUN_104f6bcec(long param_1,undefined8 param_2)

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



/* Entry: 104f6bd5c; end: 104f6c017; -[SCChatOperaPlaylistDataSource _configureForSingleMessage:] */

void FUN_104f6bd5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar4;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    lVar1 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x000104f69ee8(param_3,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bde5360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_104f6bcd4;
    uStack_60 = 0x104f6bce4;
    uStack_58 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_104f6bcd4;
    uStack_90 = 0x104f6bce4;
    uStack_88 = 0;
    func_0x00010c0c0800();
    if (puStack_a8[5] == 0) {
      _os_unfair_lock_lock(param_1 + 0x60);
      puVar4 = puVar2;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      *(undefined **)(param_1 + 0x88) = puVar4;
      _objc_release(uVar7);
      puVar4 = puVar3;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar4;
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar7);
      _os_unfair_lock_unlock(param_1 + 0x60);
      lVar6 = puStack_78[5];
      func_0x00010bf4d6e0();
      if (lVar6 == 4) {
        func_0x00010bde3120(param_1);
      }
      _objc_release(uVar7);
    }
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f6c018; end: 104f6c087;  */

void FUN_104f6c018(long param_1,undefined8 param_2)

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



/* Entry: 104f6c088; end: 104f6c3c3; -[SCChatOperaPlaylistDataSource _configureMediasAndGetInitialPlaybackMessage:message:playbackMessages:mediaIdToMessages:mediaIdToIndex:isInitialMessage:] */

void FUN_104f6c088(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar9 = param_3;
  func_0x00010bf529e0();
  if (uVar9 == 0) {
    lStack_70 = 0;
  }
  else {
    lStack_70 = 0;
    uVar9 = 0;
    uVar8 = param_8;
    do {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        uVar7 = param_4;
        func_0x00010bf490e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be2c1e0(param_1,param_2,uVar1,uVar7);
        _objc_release(uVar7);
        if (((int)uVar8 != 0) && (uVar9 == *(ulong *)(param_1 + 0x28))) {
          uVar7 = param_4;
          func_0x00010bf490e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be32640(param_1,param_2,uVar7);
          _objc_release(uVar7);
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                              &PTR____CFConstantStringClassReference_110dbd778,
                              &PTR____CFConstantStringClassReference_110dbd798,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126af5d0;
          func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(uVar1);
          goto LAB_104f6c2e8;
        }
      }
      else {
        lVar3 = param_1;
        func_0x00010be74e00(param_1,param_2,uVar1,param_4,uVar8);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(param_5,param_2,lVar3);
          uVar8 = uVar1;
          func_0x00010c0c5180(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_6,param_2,lVar3,uVar8);
          _objc_release(uVar8);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (param_7 != 0) {
            lVar4 = param_5;
            func_0x00010bf529e0(param_5);
            func_0x00010c0df840(puVar5,param_2,lVar4 + -1);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar1;
            func_0x00010c0c5180(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7,param_2,puVar5,uVar8);
            _objc_release(uVar8);
            _objc_release(puVar5);
          }
          uVar8 = param_8 & 0xffffffff;
          if (((int)param_8 != 0) && (uVar9 == *(ulong *)(param_1 + 0x28))) {
            uVar2 = uVar1;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_1 + 0x80);
            *(ulong *)(param_1 + 0x80) = uVar2;
            _objc_release(uVar7);
            _objc_retain(lVar3);
            _objc_release(lStack_70);
            lStack_70 = lVar3;
          }
        }
        _objc_release(lVar3);
      }
      _objc_release(uVar1);
      uVar9 = uVar9 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar9 < uVar1);
  }
  puVar6 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,lStack_70);
  _objc_retainAutoreleasedReturnValue();
LAB_104f6c2e8:
  _objc_release(lStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104f6c3c4; end: 104f6c65b; -[SCChatOperaPlaylistDataSource _playbackMessageForMedia:messsage:isInitialMessage:] */

void FUN_104f6c3c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x70);
  func_0x00010bf4d700();
  if (lVar1 == 4) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c0ffb40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_104f6c600;
  }
  if (lVar1 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c0ffb40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    uVar3 = param_5;
    func_0x00010bf490e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_104f6c6cc;
    puStack_c0 = &UNK_11085e558;
    ppuVar5 = &puStack_d8;
    _objc_copyWeak(auStack_a8,auStack_58);
    _objc_retain(param_4);
    uStack_b8 = param_4;
    _objc_retain(param_5);
    uStack_b0 = param_5;
    uStack_a0 = param_1;
    func_0x00010c104bc0(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_b0);
    uVar3 = uStack_b8;
  }
  else {
    if (lVar1 != 0) {
      uVar2 = 0;
      goto LAB_104f6c600;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c0ffb40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) goto LAB_104f6c600;
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    uVar3 = uVar2;
    func_0x00010c0cb5a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104f6c65c;
    puStack_80 = &UNK_11085e528;
    ppuVar5 = &puStack_98;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_5);
    uStack_70 = param_5;
    uStack_60 = param_1;
    func_0x00010c09b1a0(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_70);
    uVar3 = uStack_78;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(ppuVar5 + 6);
  _objc_destroyWeak(auStack_58);
LAB_104f6c600:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f6c65c; end: 104f6c6cb;  */

void FUN_104f6c65c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe6e0(*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6c6cc; end: 104f6c74f;  */

void FUN_104f6c6cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfec80(*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6c750; end: 104f6c897; -[SCChatOperaPlaylistDataSource _didLoadContentForMediaId:message:startTime:success:completion:] */

void FUN_104f6c750(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_68 = param_1;
  uStack_60 = param_6;
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f6c898; end: 104f6c8d7;  */

void FUN_104f6c898(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2b780(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6c8d8; end: 104f6ca87; -[SCChatOperaPlaylistDataSource _handleLoadCompleteForMediaId:message:startTime:success:completion:] */

void FUN_104f6c8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010be55b60(param_1,param_2);
  if ((param_6 & 1) == 0) {
    _objc_initWeak(auStack_58,param_2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104f6ca88;
    puStack_78 = &UNK_110848218;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    uVar1 = param_5;
    func_0x00010bf490e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010be20020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddd880(param_2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0,0,0);
    }
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f6ca88; end: 104f6cae7;  */

void FUN_104f6ca88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf490e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c240(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f6cae8; end: 104f6cc23; -[SCChatOperaPlaylistDataSource _didPostProcessMediaId:message:prepareType:success:failureReason:startTime:] */

void FUN_104f6cae8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be55b60(param_1,param_2);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_7;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f6cc24; end: 104f6cc5b;  */

void FUN_104f6cc24(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6cc5c; end: 104f6d117; -[SCChatOperaPlaylistDataSource _postProcessMediaId:message:success:] */

void FUN_104f6cc5c(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [136];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _os_unfair_lock_lock(param_1 + 0xc);
  puVar2 = param_1[0x11];
  func_0x00010bf51e00();
  puVar3 = param_1[0x12];
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0xc);
  if ((param_5 & 1) == 0) {
    _objc_initWeak(auStack_f8,param_1);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_104f6d118;
    puStack_118 = &UNK_110848218;
    param_1 = &puStack_130;
    _objc_copyWeak(auStack_100,auStack_f8);
    _objc_retain(param_3);
    lStack_110 = param_3;
    _objc_retain(param_4);
    uStack_108 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_130);
    _objc_release(uStack_108);
    _objc_release(lStack_110);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(puVar2);
    puVar7 = puVar2;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar9 = *plStack_160;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_160 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar11 = *(undefined **)(lStack_168 + (long)puVar10 * 8);
          func_0x00010c0cb340();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar11;
          FUN_104f76c8c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puVar11 = puVar5;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar11;
          func_0x00010c0720c0();
          _objc_release(puVar11);
          if ((int)puVar6 == 0) {
            func_0x00010befa120(puVar1);
            puVar11 = puVar5;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
          }
          else {
            puVar11 = param_1[0xe];
            func_0x00010c121b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            puVar6 = puVar5;
            func_0x00010c0c5180(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar6);
          }
          _objc_release(puVar11);
          _objc_release(puVar5);
          puVar10 = puVar10 + 1;
        } while (puVar7 != puVar10);
        puVar7 = puVar2;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _os_unfair_lock_lock(param_1 + 0xc);
    puVar7 = puVar1;
    func_0x00010bf51e00();
    puVar10 = param_1[0x11];
    param_1[0x11] = puVar7;
    _objc_release(puVar10);
    puVar7 = puVar4;
    func_0x00010bf51e00();
    puVar10 = param_1[0x12];
    param_1[0x12] = puVar7;
    _objc_release(puVar10);
    puVar10 = param_1[6];
    _objc_retain(puVar10);
    _os_unfair_lock_unlock(param_1 + 0xc);
    puVar7 = param_1[0x10];
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
      _objc_initWeak(auStack_f8,param_1);
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      pcStack_190 = FUN_104f6d178;
      puStack_188 = &UNK_110841fb0;
      _objc_retain(param_3);
      param_1 = &puStack_1a0;
      lStack_180 = param_3;
      _objc_copyWeak(auStack_178,auStack_f8);
      func_0x0001000d76cc("APPSTORE",&puStack_1a0);
      _objc_destroyWeak(auStack_178);
      _objc_release(lStack_180);
      _objc_destroyWeak(auStack_f8);
    }
    else {
      puVar7 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde3120(param_1);
      _objc_release(puVar7);
    }
    _objc_release(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 5);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  lVar9 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar9);
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf490e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c240(lVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 104f6d118; end: 104f6d177;  */

void FUN_104f6d118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf490e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c240(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f6d178; end: 104f6d1cf;  */

void FUN_104f6d178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd600();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f6d1d0; end: 104f6d313; -[SCChatOperaPlaylistDataSource _completePromiseIfPossibleWithInitialPlaybackMessage:viewablePlaybackMessages:participants:] */

void FUN_104f6d1d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf4d6e0();
  if (lVar1 == 4) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104f6d314;
    puStack_60 = &UNK_11085e5b8;
    _objc_retain(param_5);
    uVar2 = param_4;
    uStack_58 = param_5;
    func_0x000100504554(param_4,&puStack_78);
    puVar3 = PTR_PTR_1126b2c70;
    _objc_alloc(PTR_PTR_1126b2c70);
    lVar1 = param_3;
    FUN_104f69e14(param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dce0(puVar3);
    _objc_release(lVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x78));
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f6d314; end: 104f6d323;  */

undefined8 ****
FUN_104f6d314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 ***param_5,undefined8 ***param_6,undefined8 ***param_7,undefined8 ***param_8
             )

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined1 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppppuVar9 = (undefined8 ****)PTR_PTR_1126b2c60;
  ppppuVar15 = *(undefined8 *****)(param_1 + 0x20);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar14 = ppppuVar15;
  _objc_retain(ppppuVar15);
  _objc_retain(param_2);
  _objc_alloc();
  ppppuVar10 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppppuVar11 = ppppuVar9;
  ppppuVar16 = ppppuVar10;
  ppppuVar18 = ppppuVar15;
  func_0x00010c02b940();
  _objc_release(ppppuVar15);
  ppppuVar12 = ppppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppppuVar17 = &pppuStack_80;
    uStack_48 = 0x104f69ee8;
    ppuStack_78 = *(undefined8 ***)PTR____stack_chk_guard_11034bdc0;
    pppuStack_70 = ppppuVar10;
    pppuStack_68 = ppppuVar9;
    pppuStack_60 = ppppuVar15;
    pppuStack_58 = ppppuVar11;
    ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
    _objc_retain();
    ppppuVar11 = ppppuVar14;
    if (ppppuVar14 < (undefined8 ****)0x5) {
      if (ppppuVar14 == (undefined8 ****)0x2) {
        ppppuVar9 = ppppuVar12;
        func_0x00010c131d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppppuVar11 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
        if (ppppuVar9 != (undefined8 ****)0x0) {
          ppppuVar9 = ppppuVar12;
          func_0x00010c131d80();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar18 = (undefined8 ****)0x1;
          ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_80 = ppppuVar9;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppuVar9);
          ppppuVar16 = ppppuVar17;
        }
      }
      else {
        ppppuVar11 = ppppuVar12;
        func_0x00010c0c72c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release();
    if (*(undefined8 ****)PTR____stack_chk_guard_11034bdc0 != (undefined8 ***)ppuStack_78) {
      ___stack_chk_fail();
      ppuVar7 = ppuStack_50;
      pppuVar6 = pppuStack_58;
      pppuVar5 = pppuStack_60;
      pppuVar4 = pppuStack_68;
      pppuVar3 = pppuStack_70;
      ppuVar2 = ppuStack_78;
      pppuVar1 = pppuStack_80;
      _objc_retain(ppppuVar16);
      _objc_retain(ppppuVar18);
      _objc_retain(param_6);
      _objc_retain(param_8);
      _objc_retain(pppuVar1);
      _objc_retain(ppuVar2);
      _objc_retain(pppuVar3);
      _objc_retain(pppuVar4);
      _objc_retain(pppuVar5);
      _objc_retain(pppuVar6);
      _objc_retain(ppuVar7);
      puStack_e8 = PTR_PTR_1126e5410;
      ppppuVar9 = &pppuStack_f0;
      pppuStack_f0 = ppppuVar12;
      _objc_msgSendSuper2(ppppuVar9,PTR_s_init_1125d9248);
      if (ppppuVar9 != (undefined8 ****)0x0) {
        uVar8 = (undefined1)uStack_48;
        *(undefined4 *)(ppppuVar9 + 0xc) = 0;
        _objc_retain(ppppuVar16);
        pppuVar13 = ppppuVar9[1];
        ppppuVar9[1] = ppppuVar16;
        _objc_release(pppuVar13);
        _objc_retain(ppppuVar18);
        pppuVar13 = ppppuVar9[2];
        ppppuVar9[2] = ppppuVar18;
        _objc_release(pppuVar13);
        ppppuVar9[3] = param_5;
        _objc_retain(param_6);
        pppuVar13 = ppppuVar9[4];
        ppppuVar9[4] = param_6;
        _objc_release(pppuVar13);
        ppppuVar9[5] = param_7;
        _objc_retain(param_8);
        pppuVar13 = ppppuVar9[6];
        ppppuVar9[6] = param_8;
        _objc_release(pppuVar13);
        _objc_storeWeak(ppppuVar9 + 7,pppuVar1);
        _objc_retain(ppuVar2);
        pppuVar13 = ppppuVar9[8];
        ppppuVar9[8] = (undefined8 ***)ppuVar2;
        _objc_release(pppuVar13);
        _objc_retain(pppuVar3);
        pppuVar13 = ppppuVar9[9];
        ppppuVar9[9] = pppuVar3;
        _objc_release(pppuVar13);
        _objc_retain(pppuVar4);
        pppuVar13 = ppppuVar9[0xe];
        ppppuVar9[0xe] = pppuVar4;
        _objc_release(pppuVar13);
        _objc_retain(pppuVar5);
        pppuVar13 = ppppuVar9[10];
        ppppuVar9[10] = pppuVar5;
        _objc_release(pppuVar13);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e300();
        *(char *)(ppppuVar9 + 0x17) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e320();
        *(char *)((long)ppppuVar9 + 0xb9) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e2e0();
        *(char *)((long)ppppuVar9 + 0xba) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        ppppuVar10 = (undefined8 ****)pppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar10;
        func_0x00010c07e2c0();
        *(char *)((long)ppppuVar9 + 0xbb) = (char)ppppuVar11;
        _objc_release(ppppuVar10);
        _objc_retain(ppuVar7);
        pppuVar13 = ppppuVar9[0xb];
        ppppuVar9[0xb] = (undefined8 ***)ppuVar7;
        _objc_release(pppuVar13);
        pppuVar13 = (undefined8 ***)PTR_PTR_1126ae810;
        _objc_opt_new();
        pppuVar19 = ppppuVar9[0x16];
        ppppuVar9[0x16] = pppuVar13;
        _objc_release(pppuVar19);
        *(undefined1 *)((long)ppppuVar9 + 0xbc) = uVar8;
        func_0x00010bec87a0(ppppuVar9);
      }
      _objc_release(ppuVar7);
      _objc_release(pppuVar6);
      _objc_release(pppuVar5);
      _objc_release(pppuVar4);
      _objc_release(pppuVar3);
      _objc_release(ppuVar2);
      _objc_release(pppuVar1);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(ppppuVar18);
      _objc_release(ppppuVar16);
      return ppppuVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar11);
  return ppppuVar11;
}



/* Entry: 104f6d324; end: 104f6d4c3; -[SCChatOperaPlaylistDataSource _subscribeToUpdates] */

void FUN_104f6d324(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf509e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f6d4c4;
  puStack_78 = &UNK_11085e5e8;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104f6d4c4; end: 104f6d5ab;  */

long FUN_104f6d4c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb2600();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104f6d5ac; end: 104f6d72b; -[SCChatOperaPlaylistDataSource _shouldAllowMessageUpdateForUpdateEvent:] */

undefined8 FUN_104f6d5ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar5,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)uVar5 != 0) {
    lVar1 = param_3;
    func_0x00010c28d4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      _os_unfair_lock_lock(param_1 + 0x60);
      uVar6 = *(undefined8 *)(param_1 + 0xa8);
      _objc_retain(uVar6);
      _os_unfair_lock_unlock(param_1 + 0x60);
      lVar1 = param_3;
      func_0x00010c28d4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar4 = *(ulong *)(param_1 + 0x10);
      lVar1 = lVar2;
      func_0x00010bf490e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar4,param_2,lVar1);
      if ((uVar4 & 1) == 0) {
        lVar3 = lVar2;
        func_0x00010bf490e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010bf4b900(uVar6,param_2,lVar3);
        _objc_release(lVar3);
      }
      else {
        uVar5 = 1;
      }
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(uVar6);
      goto LAB_104f6d70c;
    }
  }
  uVar5 = 0;
LAB_104f6d70c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 104f6d72c; end: 104f6d7b7; -[SCChatOperaPlaylistDataSource _updateWithMessage:] */

void FUN_104f6d72c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    lVar1 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,param_3,lVar1);
    _objc_release(lVar1);
    func_0x00010bddd880(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f6d7b8; end: 104f6e09b; -[SCChatOperaPlaylistDataSource _checkForPlaybackUpdatesForMessage:] */

void FUN_104f6d7b8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x0001070b6028(param_3,*(undefined8 *)(param_1 + 0x20),1);
  puVar9 = param_1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_3;
    func_0x00010c0721c0();
    if ((int)puVar1 == 0) {
      _os_unfair_lock_lock(param_1 + 0x60);
      puVar2 = *(undefined **)(param_1 + 0x90);
      func_0x00010c0d3c80();
      puVar3 = *(undefined **)(param_1 + 0x88);
      func_0x00010c0d3c80();
      lVar4 = *(long *)(param_1 + 0xa8);
      func_0x00010bf529e0();
      _os_unfair_lock_unlock(param_1 + 0x60);
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar7 = param_3;
      func_0x000104f69ee8(param_3,*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      uVar16 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      _objc_retain();
      puVar20 = puVar7;
      func_0x00010bf52a60();
      if (puVar20 != (undefined *)0x0) {
        lVar18 = *plStack_1e0;
        do {
          puVar19 = (undefined *)0x0;
          do {
            if (*plStack_1e0 != lVar18) {
              _objc_enumerationMutation(puVar7);
            }
            puVar17 = *(undefined **)(lStack_1e8 + (long)puVar19 * 8);
            puVar8 = puVar17;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar8 == (undefined *)0x0) {
              puVar8 = param_3;
              func_0x00010bf490e0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be2c1e0(param_1);
            }
            else {
              puVar9 = puVar17;
              func_0x00010c0c5180(puVar17);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              puVar9 = puVar8;
              func_0x00010bf4d6e0();
              if (puVar9 == (undefined *)0x1) {
                lVar10 = *(long *)(param_1 + 0x70);
                func_0x00010bf4d700();
                if (lVar10 == 4) {
                  puVar11 = *(undefined **)(param_1 + 0x70);
                  func_0x00010c0ffb40();
                  _objc_retainAutoreleasedReturnValue();
                }
                else if (lVar10 == 2) {
                  puVar11 = *(undefined **)(param_1 + 0x70);
                  func_0x00010c0ffb40();
                  _objc_retainAutoreleasedReturnValue();
                  _CACurrentMediaTime();
                  uVar13 = uVar16;
                  _objc_initWeak(auStack_1f8,param_1);
                  uVar21 = *(undefined8 *)(param_1 + 0x70);
                  puVar9 = param_3;
                  func_0x00010bf490e0(param_3);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_230 = 0xc2000000;
                  pcStack_228 = FUN_104f6e0cc;
                  puStack_220 = &UNK_11085e558;
                  _objc_copyWeak(auStack_208,auStack_1f8);
                  puStack_218 = puVar17;
                  _objc_retain(param_3);
                  puStack_210 = param_3;
                  uStack_200 = uVar16;
                  func_0x00010c104bc0(uVar21);
                  _objc_release(puVar9);
                  _objc_release(puStack_210);
                  _objc_destroyWeak(auStack_208);
                  _objc_destroyWeak(auStack_1f8);
                  uVar16 = uVar13;
                }
                else if (lVar10 == 0) {
                  puVar11 = *(undefined **)(param_1 + 0x70);
                  func_0x00010c0ffb40();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  puVar11 = (undefined *)0x0;
                }
              }
              else {
                puVar9 = puVar8;
                func_0x00010c0cb340(puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar9;
                FUN_104f76c8c();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010bf8b160();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                _objc_release(puVar9);
                puVar9 = puVar17;
                func_0x00010bf8b160(puVar17);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = *(undefined **)(param_1 + 0x70);
                func_0x00010c0ffb60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar9);
                _objc_release(puVar12);
              }
              func_0x00010befa120(puVar5);
              puVar9 = puVar17;
              func_0x00010c0c5180(puVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar6);
              _objc_release(puVar9);
              _objc_retain(puVar11);
              _objc_retain(puVar8);
              puVar9 = puVar11;
              if (puVar11 == puVar8) {
                _objc_release(puVar8);
LAB_104f6dc50:
                _objc_release(puVar9);
              }
              else {
                if (puVar8 == (undefined *)0x0) {
                  _objc_release(puVar11);
LAB_104f6dc30:
                  func_0x00010c0c5180();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1);
                  puVar9 = puVar17;
                  goto LAB_104f6dc50;
                }
                func_0x00010c071ae0();
                _objc_release(puVar8);
                _objc_release(puVar11);
                if (((ulong)puVar9 & 1) == 0) goto LAB_104f6dc30;
              }
              _objc_release(puVar11);
            }
            _objc_release(puVar8);
            puVar19 = puVar19 + 1;
          } while (puVar20 != puVar19);
          puVar20 = puVar7;
          func_0x00010bf52a60();
        } while (puVar20 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      puVar20 = puVar1;
      func_0x00010bf529e0();
      if (puVar20 != (undefined *)0x0) {
        if (lVar4 == 0) {
          _objc_retain(puVar5);
          puVar20 = puVar5;
          puVar19 = puVar6;
        }
        else {
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          lStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          plStack_270 = (long *)0x0;
          _objc_retain(puVar5);
          puVar9 = puVar5;
          func_0x00010bf52a60();
          if (puVar9 != (undefined *)0x0) {
            lVar4 = *plStack_270;
            do {
              puVar20 = (undefined *)0x0;
              do {
                if (*plStack_270 != lVar4) {
                  _objc_enumerationMutation(puVar5);
                }
                uVar21 = *(undefined8 *)(lStack_278 + (long)puVar20 * 8);
                uVar16 = uVar21;
                func_0x00010c0cb340(uVar21);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar16;
                func_0x000104f76e7c();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar16);
                uVar14 = *(ulong *)(param_1 + 0x98);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (uVar14 != 0) {
                  uVar15 = uVar14;
                  func_0x00010c282760();
                  puVar19 = puVar3;
                  func_0x00010bf529e0();
                  if ((undefined *)(uVar15 & 0xffffffff) < puVar19) {
                    func_0x00010c067ec0(uVar14);
                    puVar19 = puVar3;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar19 == (undefined *)0x0) {
LAB_104f6de10:
                      func_0x00010c067ec0(uVar14);
                      func_0x00010c1d04c0(puVar3);
                    }
                    else {
                      puVar8 = puVar19;
                      func_0x00010c0cb5a0();
                      _objc_retainAutoreleasedReturnValue();
                      if (puVar8 == (undefined *)0x0) goto LAB_104f6de10;
                      puVar17 = puVar19;
                      func_0x00010c0cb5a0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0cb5a0(uVar21);
                      _objc_retainAutoreleasedReturnValue();
                      puVar11 = puVar17;
                      func_0x00010c0720c0();
                      _objc_release(uVar21);
                      _objc_release(puVar17);
                      _objc_release(puVar8);
                      if ((int)puVar11 != 0) goto LAB_104f6de10;
                    }
                    _objc_release(puVar19);
                  }
                }
                _objc_release(uVar14);
                _objc_release(uVar13);
                puVar20 = puVar20 + 1;
              } while (puVar9 != puVar20);
              puVar9 = puVar5;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined *)0x0);
          }
          _objc_release(puVar5);
          _objc_retain(puVar3);
          func_0x00010bef7f60(puVar2);
          puVar20 = puVar3;
          puVar19 = puVar2;
        }
        _objc_retain(puVar19);
        _os_unfair_lock_lock(param_1 + 0x60);
        puVar9 = puVar20;
        func_0x00010bf51e00();
        uVar16 = *(undefined8 *)(param_1 + 0x88);
        *(undefined **)(param_1 + 0x88) = puVar9;
        _objc_release(uVar16);
        puVar9 = puVar19;
        func_0x00010bf51e00();
        uVar16 = *(undefined8 *)(param_1 + 0x90);
        *(undefined **)(param_1 + 0x90) = puVar9;
        _objc_release(uVar16);
        uVar16 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar16);
        _os_unfair_lock_unlock(param_1 + 0x60);
        lVar4 = *(long *)(param_1 + 0x80);
        func_0x00010c08fa60();
        if (lVar4 == 0) {
          _objc_initWeak(auStack_1f8,param_1);
          puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2a8 = 0xc2000000;
          pcStack_2a0 = FUN_104f6e150;
          puStack_298 = &UNK_110841fb0;
          _objc_copyWeak(auStack_288,auStack_1f8);
          _objc_retain(puVar1);
          puStack_290 = puVar1;
          func_0x000100162d98("APPSTORE",&puStack_2b0);
          _objc_release(puStack_290);
          _objc_destroyWeak(auStack_288);
          _objc_destroyWeak(auStack_1f8);
          puVar9 = puVar1;
        }
        else {
          puVar9 = puVar19;
          func_0x00010c0e00e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bde3120(param_1);
          _objc_release(puVar9);
          puVar9 = param_1;
        }
        _objc_release(uVar16);
        _objc_release(puVar19);
        _objc_release(puVar20);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_104f6e09c;
      puStack_190 = &UNK_110842e18;
      puStack_188 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_1a8);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(puVar9 + 0x60);
    __Unwind_Resume();
    lVar4 = *(long *)(param_3 + 0x20) + 0x38;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c100080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 104f6e09c; end: 104f6e0cb;  */

void FUN_104f6e09c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c100080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6e0cc; end: 104f6e14f;  */

void FUN_104f6e0cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfec80(*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6e150; end: 104f6e19b;  */

void FUN_104f6e150(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010bedd600(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6e19c; end: 104f6e317; -[SCChatOperaPlaylistDataSource _handleMediaPrepareFailure:messageId:] */

void FUN_104f6e19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((lVar4 == 0) || (lVar1 = lVar4, func_0x00010c0720c0(), (int)lVar1 != 0)) {
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be8c820(param_1);
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f6e318; end: 104f6e34b;  */

void FUN_104f6e318(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6e34c; end: 104f6e45f; -[SCChatOperaPlaylistDataSource _updatePlaylistForMediaIds:] */

void FUN_104f6e34c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_1 + 0x68;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c101400();
        _objc_release(lVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  param_3 = param_3 + 0x68;
  _objc_loadWeakRetained(param_3);
  func_0x00010c12dbc0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f6e460; end: 104f6e4a7; -[SCChatOperaPlaylistDataSource _removeMediaFromPlaylist:] */

void FUN_104f6e460(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12dbc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6e4a8; end: 104f6e533; -[SCChatOperaPlaylistDataSource _handleUnableToPresentForMessageId:] */

void FUN_104f6e4a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be20020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac700();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x80);
  func_0x00010c08fa60();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (lVar3 == 0) {
    func_0x00010c100080();
  }
  else {
    func_0x00010c1000a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6e534; end: 104f6e5db; -[SCChatOperaPlaylistDataSource _handleMediaIdMissingForMediaContent:messageId:] */

void FUN_104f6e534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be20020(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0cb2a0(param_3);
  uVar4 = param_3;
  func_0x00010c0c6c20(param_3);
  _objc_release(param_3);
  func_0x00010c0aa120(uVar2,param_2,uVar3,uVar4,*(undefined1 *)(param_1 + 0xbc));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6e5dc; end: 104f6e68b; -[SCChatOperaPlaylistDataSource _logMediaPrepareWithType:startTime:success:failureReason:] */

void FUN_104f6e5dc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  if ((param_5 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100();
    _objc_release(uVar1);
  }
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa180((dVar2 - param_1) * 1000.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f6e68c; end: 104f6e693; -[SCChatOperaPlaylistDataSource _getLatestMessageWithId:] */

void FUN_104f6e68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 104f6e694; end: 104f6e697; -[SCChatOperaPlaylistDataSource operaMediaBundleProvider] */

void FUN_104f6e694(void)

{
  return;
}



/* Entry: 104f6e698; end: 104f6e77f; -[SCChatOperaPlaylistDataSource canProvideMediaBundleForPlaylistItem:] */

ulong FUN_104f6e698(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1 + 0x68;
  _objc_loadWeakRetained();
  uVar1 = uVar4;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    FUN_104f6ec4c(uVar1,0x57,*(undefined1 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0xb9),1,1,
                  *(undefined1 *)(param_1 + 0xba));
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 104f6e780; end: 104f6e86b; -[SCChatOperaPlaylistDataSource mediaBundleFromPlaylistItem:] */

void FUN_104f6e780(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1 + 0x68;
  _objc_loadWeakRetained();
  uVar1 = uVar4;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x000104f6eea0(uVar1,param_3,*(undefined1 *)(param_1 + 0xbb),1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f6e86c; end: 104f6e95f; -[SCChatOperaPlaylistDataSource .cxx_destruct] */

void FUN_104f6e86c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f6e960; end: 104f6ea03; -[SCChatPlaybackFeaturePlugin initWithDataSource:actionEvents:] */

undefined1 *
FUN_104f6e960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5418;
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



/* Entry: 104f6ea04; end: 104f6ea0b; -[SCChatPlaybackFeaturePlugin launchCandidates] */

void FUN_104f6ea04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchCandidates_112600778);
  return;
}


