/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b65380; end: 106b653cb;  */

void FUN_106b65380(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12ef20(param_2);
  func_0x00010c238fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b653cc; end: 106b65423; -[SCRecoverPasswordWorkflow userChallengeExited] */

void FUN_106b653cc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b65424;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b65424; end: 106b6546b;  */

void FUN_106b65424(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12ef20(param_2);
  func_0x00010c2398c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b6546c; end: 106b6552b; -[SCRecoverPasswordWorkflow usernameChallengeCompletedWithUsername:passwordResetToken:] */

void FUN_106b6546c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b6552c;
  puStack_40 = &UNK_110962bb8;
  lStack_38 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106b6552c; end: 106b65577;  */

void FUN_106b6552c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12efa0(param_2);
  func_0x00010c238fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b65578; end: 106b655cf; -[SCRecoverPasswordWorkflow usernameChallengeExit] */

void FUN_106b65578(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b655d0;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b655d0; end: 106b65617;  */

void FUN_106b655d0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12efa0(param_2);
  func_0x00010c2398c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b65618; end: 106b656ab; -[SCRecoverPasswordWorkflow userTapsOnURLFromUsernameChallengeResponse:] */

void FUN_106b65618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x42) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b656ac;
  puStack_48 = &UNK_110962be8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106b656ac; end: 106b656eb;  */

void FUN_106b656ac(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12efa0(param_2);
  func_0x00010c0e9c00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b656ec; end: 106b6578b; -[SCRecoverPasswordWorkflow chooseNewPasswordSucceededWithPassword:] */

void FUN_106b656ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0ae4a0(uVar1,param_2,0x49);
  func_0x00010befb440(PTR_PTR_1126b7c88,param_2,*(undefined8 *)(param_1 + 0x18),param_3);
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b6578c;
  puStack_40 = &UNK_110962bb8;
  lStack_38 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  return;
}



/* Entry: 106b6578c; end: 106b657cb;  */

void FUN_106b6578c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12b780(param_2);
  func_0x00010c238ee0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b657cc; end: 106b65823; -[SCRecoverPasswordWorkflow chooseNewPasswordFailedWithExpiredPasswordResetToken] */

void FUN_106b657cc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b65824;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b65824; end: 106b6586b;  */

void FUN_106b65824(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12b780(param_2);
  func_0x00010c2398c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b6586c; end: 106b65897; -[SCRecoverPasswordWorkflow chooseNewPasswordExited] */

void FUN_106b6586c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b65898; end: 106b658cb; -[SCRecoverPasswordWorkflow passwordResetSuccessAcknowledged] */

void FUN_106b65898(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f54c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b658cc; end: 106b65923; -[SCRecoverPasswordWorkflow showInAppSupport] */

void FUN_106b658cc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b65924;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b65924; end: 106b6592f;  */

void FUN_106b65924(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showInAppSupport__11266b988,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106b65930; end: 106b65947; -[SCRecoverPasswordWorkflow supportScopeDidComplete] */

void FUN_106b65930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110962c98);
  return;
}



/* Entry: 106b65948; end: 106b659bf; -[SCRecoverPasswordWorkflow webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000106b659b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b659b4) */

void FUN_106b65948(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    ppuVar2 = &PTR___NSConcreteGlobalBlock_110962cb8;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106b659c8;
    puStack_20 = &UNK_110962bb8;
    ppuVar2 = &puStack_38;
    lStack_18 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_runRouteWithAction__11262e498,ppuVar2);
  return;
}



/* Entry: 106b659c0; end: 106b659c7;  */

void FUN_106b659c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissModalWebBrowser_1125be928);
  return;
}



/* Entry: 106b659c8; end: 106b65a13;  */

void FUN_106b659c8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf84c00(param_2);
  func_0x00010c23ab80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b65a14; end: 106b65a2b; -[SCRecoverPasswordWorkflow codeVerificationExited] */

void FUN_106b65a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110962cd8);
  return;
}



/* Entry: 106b65a2c; end: 106b65a43; -[SCRecoverPasswordWorkflow codeVerificationExitedWithUnretryableError] */

void FUN_106b65a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110962cf8);
  return;
}



/* Entry: 106b65a44; end: 106b65b9b; -[SCRecoverPasswordWorkflow codeVerificationFinished:] */

void FUN_106b65a44(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af360;
  _objc_opt_class(PTR_PTR_1126af360);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar4);
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8));
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar5);
    func_0x00010be204a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c124080(lVar5);
    _objc_release(param_3);
    _objc_release(param_1);
  }
  _objc_release(lVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b65b9c; end: 106b65be3;  */

void FUN_106b65b9c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12da00(param_2);
  func_0x00010c2368c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b65be4; end: 106b65c0f; -[SCRecoverPasswordWorkflow emailEntryExited] */

void FUN_106b65be4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b65c10; end: 106b65ca7; -[SCRecoverPasswordWorkflow emailEntryLinkSelectedWithURL:] */

void FUN_106b65c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x42) = 1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b65ca8;
  puStack_48 = &UNK_110962be8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106b65ca8; end: 106b65cb3;  */

void FUN_106b65ca8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e9bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_openUrlInModalWebBrowser_browsin_112618110,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106b65cb4; end: 106b65d0b; -[SCRecoverPasswordWorkflow emailEntryExitedWithUnretryableError:] */

void FUN_106b65cb4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b65d0c;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b65d0c; end: 106b65d53;  */

void FUN_106b65d0c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12c120(param_2);
  func_0x00010c23ad60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b65d54; end: 106b65eb7; -[SCRecoverPasswordWorkflow emailEntryFinished:] */

void FUN_106b65d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ebfa0();
  *(char *)(param_1 + 0x43) = (char)uVar1;
  *(undefined8 *)(param_1 + 0x48) = 5;
  uVar1 = param_3;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar3);
  func_0x00010c0ae4a0(*(undefined8 *)(param_1 + 0x38),param_2,0xb6);
  puVar2 = PTR_PTR_1126d0b98;
  uVar1 = param_3;
  func_0x00010bf8d6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8db40(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c13b720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b65eb8;
  puStack_48 = &UNK_110849098;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b66044;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bd160(uVar1,param_2,&puStack_60,&PTR___NSConcreteGlobalBlock_110962d18,
                      &PTR___NSConcreteGlobalBlock_110962d38,&PTR___NSConcreteGlobalBlock_110962d58,
                      &puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b65eb8; end: 106b66037;  */

void FUN_106b65eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c1429e0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106b66038; end: 106b66043;  */

void FUN_106b66038(void)

{
  return;
}



/* Entry: 106b66044; end: 106b6609b;  */

void FUN_106b66044(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b6609c;
  puStack_20 = &UNK_110962bb8;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b6609c; end: 106b660ab;  */

void FUN_106b6609c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2369b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCodeVerificationScreenWithCh_11266b490,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
  return;
}



/* Entry: 106b660ac; end: 106b660af; -[SCRecoverPasswordWorkflow COSChallengeAbandoned] */

void FUN_106b660ac(void)

{
  return;
}



/* Entry: 106b660b0; end: 106b66197; -[SCRecoverPasswordWorkflow COSChallengeCompletedWithBootStrapData:] */

void FUN_106b660b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126af360;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126af368;
  func_0x00010c261740(PTR_PTR_1126af368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fca0(puVar2,param_2,puVar3,param_3,0,0,0);
  _objc_release(param_3);
  _objc_release(puVar3);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined1 *)(param_1 + 0x43);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010be204a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124080(lVar4,param_2,puVar2,uVar1,uVar5,param_1);
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b66198; end: 106b661c3; -[SCRecoverPasswordWorkflow COSChallengeErrorWithError:] */

void FUN_106b66198(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b661c4; end: 106b661c7; -[SCRecoverPasswordWorkflow logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_106b661c4(void)

{
  return;
}



/* Entry: 106b661c8; end: 106b66223; -[SCRecoverPasswordWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_106b661c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 != 5) && (param_3 != 2)) {
    return;
  }
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be51bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logCodeAttemptedWithRequestedId_112572098,
             *(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 106b66224; end: 106b66307; -[SCRecoverPasswordWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_106b66224(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  if ((param_3 != 5) && (param_3 != 2)) goto LAB_106b662d8;
  if (param_6 < 3) {
    if (param_6 == 0) {
      func_0x00010be51c20(param_1,param_2,*(undefined8 *)(param_1 + 0x70),param_4,param_5);
      goto LAB_106b662d8;
    }
    if (param_6 != 2) goto LAB_106b662d8;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = 2;
  }
  else if (param_6 - 3U < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = 3;
  }
  else {
    if (param_6 != 5) goto LAB_106b662d8;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = 5;
  }
  func_0x00010be51c00(param_1,param_2,uVar1,param_4,param_5,uVar2);
LAB_106b662d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106b66308; end: 106b6634f; -[SCRecoverPasswordWorkflow _getEmailFromUsername] */

void FUN_106b66308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af038;
  func_0x00010c2967a0(PTR_PTR_1126af038,param_2,*(undefined8 *)(param_1 + 0x18));
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b66350; end: 106b663ff; -[SCRecoverPasswordWorkflow _getLoginIdentifier] */

void FUN_106b66350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126aed98;
  if (*(long *)(param_1 + 0x48) == 6) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0cf3c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0fafc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5dc0(puVar3,param_2,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else if (*(long *)(param_1 + 0x48) == 5) {
    puVar3 = *(undefined **)(param_1 + 0x18);
    _objc_retain(puVar3);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b66400; end: 106b664c7; -[SCRecoverPasswordWorkflow _loginSource] */

undefined8 FUN_106b66400(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_106b664c8;
  puStack_50 = &UNK_110842b58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106b664dc;
  puStack_78 = &UNK_1109628e8;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0bd9c0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_68,&puStack_90);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106b664c8; end: 106b664ef;  */

void FUN_106b664c8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  return;
}



/* Entry: 106b664f0; end: 106b665d7; -[SCRecoverPasswordWorkflow _loginIdentifier] */

void FUN_106b664f0(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_106b665d8;
  uStack_30 = 0x106b665e8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b665f0;
  puStack_60 = &UNK_110842b58;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b66628;
  puStack_88 = &UNK_1109628e8;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0bd9c0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b665d8; end: 106b665ef;  */

void FUN_106b665d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b665f0; end: 106b66627;  */

void FUN_106b665f0(long param_1,undefined8 param_2)

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



/* Entry: 106b66628; end: 106b666d3;  */

void FUN_106b66628(long param_1,undefined8 param_2)

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



/* Entry: 106b666d4; end: 106b6678f; -[SCRecoverPasswordWorkflow _logCodeAttemptedWithRequestedId:] */

void FUN_106b666d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be5acc0(param_1);
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c40(uVar2,param_2,lVar1,param_1,0,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b66790; end: 106b6685f; -[SCRecoverPasswordWorkflow _logCodeSuccessWithRequestedId:grpcStatusCode:protoStatusCode:] */

void FUN_106b66790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be5acc0(param_1);
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c00(uVar2,param_2,lVar1,param_1,param_4,param_5,1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b66860; end: 106b6697b; -[SCRecoverPasswordWorkflow _logCodeFailureWithNetworkRequestId:grpcStatusCode:protoStatusCode:errorType:] */

void FUN_106b66860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be5acc0(param_1);
  lVar2 = param_1;
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c00(uVar3,param_2,lVar1,lVar2,param_4,param_5,0,param_3);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be5acc0(param_1);
  func_0x00010be5ac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c80(uVar3,param_2,lVar1,param_1,param_6,param_4,param_5,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b6697c; end: 106b66a1f; -[SCRecoverPasswordWorkflow .cxx_destruct] */

void FUN_106b6697c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b66a20; end: 106b66bcf;  */

void FUN_106b66a20(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e754d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e754d8,
                      &PTR____CFConstantStringClassReference_110e754f8,0);
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



/* Entry: 106b66bd0; end: 106b66c17; +[SCRecoverPasswordAlertAction cancel] */

void FUN_106b66bd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0af0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b66c18; end: 106b66c63; +[SCRecoverPasswordAlertAction recoverPasswordViaEmail] */

void FUN_106b66c18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0af0;
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



/* Entry: 106b66c64; end: 106b66caf; +[SCRecoverPasswordAlertAction recoverPasswordViaPhone] */

void FUN_106b66c64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0af0;
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



/* Entry: 106b66cb0; end: 106b66cd3; -[SCRecoverPasswordAlertAction copyWithZone:] */

undefined8 FUN_106b66cb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b66cd4; end: 106b66cdb; -[SCRecoverPasswordAlertAction hash] */

undefined8 FUN_106b66cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b66cdc; end: 106b66d1f; -[SCRecoverPasswordAlertAction internalInit] */

void FUN_106b66cdc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f51a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b66d20; end: 106b66da7; -[SCRecoverPasswordAlertAction isEqual:] */

bool FUN_106b66d20(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b66da8; end: 106b66e43; -[SCRecoverPasswordAlertAction matchCancel:recoverPasswordViaPhone:recoverPasswordViaEmail:] */

void FUN_106b66da8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b66e44; end: 106b66e8f; +[SCRecoverPasswordViaEmailAction back] */

void FUN_106b66e44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b20;
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



/* Entry: 106b66e90; end: 106b66ed7; +[SCRecoverPasswordViaEmailAction exited] */

void FUN_106b66e90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b66ed8; end: 106b66f23; +[SCRecoverPasswordViaEmailAction forward] */

void FUN_106b66ed8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b20;
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



/* Entry: 106b66f24; end: 106b66f6f; +[SCRecoverPasswordViaEmailAction refresh] */

void FUN_106b66f24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b20;
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



/* Entry: 106b66f70; end: 106b66f93; -[SCRecoverPasswordViaEmailAction copyWithZone:] */

undefined8 FUN_106b66f70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b66f94; end: 106b66f9b; -[SCRecoverPasswordViaEmailAction hash] */

undefined8 FUN_106b66f94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b66f9c; end: 106b66fdf; -[SCRecoverPasswordViaEmailAction internalInit] */

void FUN_106b66f9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f51a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b66fe0; end: 106b67067; -[SCRecoverPasswordViaEmailAction isEqual:] */

bool FUN_106b66fe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b67068; end: 106b6713b; -[SCRecoverPasswordViaEmailAction matchExited:refresh:back:forward:] */

void FUN_106b67068(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_106b670f4;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_106b670f4;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_106b670f4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6713c; end: 106b671e3; -[SCRecoverPasswordViaEmailViewModel initWithShowActivityIndicator:enableBackButton:enableForwardButton:isLoading:errorMessage:] */

undefined1 *
FUN_106b6713c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f51b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106b671e4; end: 106b67207; -[SCRecoverPasswordViaEmailViewModel copyWithZone:] */

undefined8 FUN_106b671e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b67208; end: 106b6728b; -[SCRecoverPasswordViaEmailViewModel hash] */

ulong * FUN_106b67208(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  ulong uVar9;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar8 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar6;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (ulong *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b67340;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((*(char *)((long)puVar3 + 8) != param_3[8] || (*(char *)((long)puVar3 + 9) != param_3[9]))
         || (*(char *)((long)puVar3 + 10) != param_3[10])))) ||
       (*(char *)((long)puVar3 + 0xb) != param_3[0xb])) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106b67340;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b67340;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106b67340:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 106b6728c; end: 106b6735b; -[SCRecoverPasswordViaEmailViewModel isEqual:] */

long FUN_106b6728c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b67340;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) {
      lVar3 = 0;
      goto LAB_106b67340;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b67340;
    }
  }
  lVar3 = 1;
LAB_106b67340:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6735c; end: 106b67363; -[SCRecoverPasswordViaEmailViewModel showActivityIndicator] */

undefined1 FUN_106b6735c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b67364; end: 106b6736b; -[SCRecoverPasswordViaEmailViewModel enableBackButton] */

undefined1 FUN_106b67364(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b6736c; end: 106b67373; -[SCRecoverPasswordViaEmailViewModel enableForwardButton] */

undefined1 FUN_106b6736c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106b67374; end: 106b6737b; -[SCRecoverPasswordViaEmailViewModel isLoading] */

undefined1 FUN_106b67374(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106b6737c; end: 106b67383; -[SCRecoverPasswordViaEmailViewModel errorMessage] */

undefined8 FUN_106b6737c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b67384; end: 106b6738f; -[SCRecoverPasswordViaEmailViewModel .cxx_destruct] */

void FUN_106b67384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b67390; end: 106b673df; -[SCRecoverPasswordViaEmailNavigationStatus initWithCanGoForward:canGoBack:] */

void FUN_106b67390(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f51b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 106b673e0; end: 106b67403; -[SCRecoverPasswordViaEmailNavigationStatus copyWithZone:] */

undefined8 FUN_106b673e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b67404; end: 106b6745f; -[SCRecoverPasswordViaEmailNavigationStatus hash] */

ulong * FUN_106b67404(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106b67460; end: 106b674f7; -[SCRecoverPasswordViaEmailNavigationStatus isEqual:] */

bool FUN_106b67460(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b674f8; end: 106b674ff; -[SCRecoverPasswordViaEmailNavigationStatus canGoForward] */

undefined1 FUN_106b674f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b67500; end: 106b67507; -[SCRecoverPasswordViaEmailNavigationStatus canGoBack] */

undefined1 FUN_106b67500(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b67508; end: 106b67553; +[SCRecoverPasswordPhoneEntryAction goBack] */

void FUN_106b67508(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b08;
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



/* Entry: 106b67554; end: 106b6759f; +[SCRecoverPasswordPhoneEntryAction needHelpButtonTapped] */

void FUN_106b67554(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b08;
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



/* Entry: 106b675a0; end: 106b67607; +[SCRecoverPasswordPhoneEntryAction recoverPasswordViaEmailWithUrl:] */

void FUN_106b675a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0b08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b67608; end: 106b6764f; +[SCRecoverPasswordPhoneEntryAction sendCodeViaSms] */

void FUN_106b67608(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b67650; end: 106b6769b; +[SCRecoverPasswordPhoneEntryAction sendViaCall] */

void FUN_106b67650(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b08;
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



/* Entry: 106b6769c; end: 106b676f7; +[SCRecoverPasswordPhoneEntryAction toggle1TLCheckboxWithSelected:] */

void FUN_106b6769c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0b08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  puVar2[0x18] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b676f8; end: 106b6771b; -[SCRecoverPasswordPhoneEntryAction copyWithZone:] */

undefined8 FUN_106b676f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6771c; end: 106b6778b; -[SCRecoverPasswordPhoneEntryAction hash] */

void FUN_106b6771c(long param_1)

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
  puStack_68 = PTR_PTR_1126f51c0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6778c; end: 106b677cf; -[SCRecoverPasswordPhoneEntryAction internalInit] */

void FUN_106b6778c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f51c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b677d0; end: 106b6787f; -[SCRecoverPasswordPhoneEntryAction isEqual:] */

long FUN_106b677d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b67864;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_106b67864;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b67864;
    }
  }
  lVar3 = 1;
LAB_106b67864:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b67880; end: 106b679cf; -[SCRecoverPasswordPhoneEntryAction matchSendCodeViaSms:sendViaCall:recoverPasswordViaEmail:goBack:needHelpButtonTapped:toggle1TLCheckbox:] */

void FUN_106b67880(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_106b6798c;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if (lVar1 != 1) {
        if ((lVar1 == 2) && (param_5 != 0)) {
          (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
        }
        goto LAB_106b6798c;
      }
      if (param_4 == 0) goto LAB_106b6798c;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_106b6798c;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  else {
    if (lVar1 != 4) {
      if ((lVar1 == 5) && (param_8 != 0)) {
        (**(code **)(param_8 + 0x10))(param_8,*(undefined1 *)(param_1 + 0x18));
      }
      goto LAB_106b6798c;
    }
    if (param_7 == 0) goto LAB_106b6798c;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  (*pcVar2)(lVar1);
LAB_106b6798c:
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



/* Entry: 106b679d0; end: 106b679db; -[SCRecoverPasswordPhoneEntryAction .cxx_destruct] */

void FUN_106b679d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b679dc; end: 106b67a23; -[SCRecoverPasswordPhoneEntryViewModel initWithIs1TLCheckboxSelected:] */

void FUN_106b679dc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f51c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}


