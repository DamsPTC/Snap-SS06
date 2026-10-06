/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d00ddc; end: 104d00f17; -[SCOneTapLoginLandingPageBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d00ddc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711070,0);
  _objc_storeStrong(param_1 + _DAT_11271106c,0);
  _objc_storeStrong(param_1 + _DAT_112711068,0);
  _objc_storeStrong(param_1 + _DAT_112711064,0);
  _objc_storeStrong(param_1 + _DAT_112711074,0);
  _objc_storeStrong(param_1 + _DAT_11271105c,0);
  _objc_storeStrong(param_1 + _DAT_112711060,0);
  _objc_storeStrong(param_1 + _DAT_11271107c,0);
  _objc_storeStrong(param_1 + _DAT_112711078,0);
  _objc_storeStrong(param_1 + _DAT_112711038,0);
  _objc_storeStrong(param_1 + _DAT_112711030,0);
  _objc_destroyWeak(param_1 + _DAT_112711054);
  _objc_storeStrong(param_1 + _DAT_112711050,0);
  _objc_storeStrong(param_1 + _DAT_11271104c,0);
  _objc_storeStrong(param_1 + _DAT_112711048,0);
  _objc_storeStrong(param_1 + _DAT_112711044,0);
  _objc_storeStrong(param_1 + _DAT_112711040,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271103c,0);
  return;
}



/* Entry: 104d00f18; end: 104d0131b; -[SCOneTapLoginFeatureUIRouteActions initWithUIContainer:applicationPreferences:deviceCheckManager:channelVerificationScopeExposer:odlvScopeExposer:twoFAScopeExposer:webBrowsingScopeExposer:inAppAppealScopeExposer:currentPageTracker:circumstanceEngine:oAuthLoginABRetriever:loginCos:autoOneTapLoginEventService:ghostImageService:] */

undefined8 *
FUN_104d00f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_70 = PTR_PTR_1126e3d00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af108;
    _objc_opt_new();
    func_0x00010bf0c980(param_3);
    _objc_retain(puVar3);
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc20();
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
  }
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
  return puVar1;
}



/* Entry: 104d0131c; end: 104d0135b;  */

void FUN_104d0131c(long param_1)

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



/* Entry: 104d0135c; end: 104d0159b; -[SCOneTapLoginFeatureUIRouteActions showOneTapLoginMultiAccountLandingPageWithInitialUserId:initialIndex:displayData:reactivationStatus:oneTapLoginAuthenticator:loginLogger:loginStateTransitionLogger:oneTapLoginLogger:delegate:] */

void FUN_104d0135c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af600;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01de40(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,uVar5,param_8,param_9,
                      param_10,uVar3,uVar4,puVar2,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar3);
  func_0x00010c251740(*(undefined8 *)(param_1 + 0x70));
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puVar2 = PTR_PTR_1126af008;
  func_0x00010c0e83e0(PTR_PTR_1126af008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c263200(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126af608;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423e0(puVar2,param_2,uVar4,*(undefined8 *)(param_1 + 0x58),uVar3,
                      *(undefined8 *)(param_1 + 0x88));
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf881e0(*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0159c; end: 104d01627; -[SCOneTapLoginFeatureUIRouteActions showChannelVerification:verification:] */

void FUN_104d0159c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af2f8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
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



/* Entry: 104d01628; end: 104d0165f; -[SCOneTapLoginFeatureUIRouteActions removeChannelVerification] */

void FUN_104d01628(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d01660; end: 104d016eb; -[SCOneTapLoginFeatureUIRouteActions showOdlv:challenge:] */

void FUN_104d01660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af300;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 104d016ec; end: 104d01723; -[SCOneTapLoginFeatureUIRouteActions removeOdlv] */

void FUN_104d016ec(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d01724; end: 104d017af; -[SCOneTapLoginFeatureUIRouteActions showTwoFAVerification:delegate:] */

void FUN_104d01724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af308;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
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



/* Entry: 104d017b0; end: 104d017e7; -[SCOneTapLoginFeatureUIRouteActions removeTwoFAVerification] */

void FUN_104d017b0(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d017e8; end: 104d01893; -[SCOneTapLoginFeatureUIRouteActions showAppealWithDelegate:appealableLockData:] */

void FUN_104d017e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af330;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0582e0(puVar1,param_2,uVar2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d01894; end: 104d018e3; -[SCOneTapLoginFeatureUIRouteActions removeInAppAppeal] */

void FUN_104d01894(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d018e4; end: 104d01903; -[SCOneTapLoginFeatureUIRouteActions dismissWebBrowser] */

void FUN_104d018e4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d01904; end: 104d01b07; -[SCOneTapLoginFeatureUIRouteActions showWebBrowserWithUrl:browsingDelegate:] */

void FUN_104d01904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010beff420(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar3,param_2,uVar4,1);
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      puVar7 = puVar5;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104d01b08;
      puStack_60 = &UNK_110842308;
      uVar4 = param_3;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar7,param_2,&puStack_78,uVar4);
      _objc_release(uVar4);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126ae638;
      _objc_opt_new(PTR_PTR_1126ae638);
      puVar8 = puVar7;
      func_0x00010bf22ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(uStack_58);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d01b08; end: 104d01b1f;  */

void FUN_104d01b08(long param_1,long param_2,long param_3)

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



/* Entry: 104d01b20; end: 104d01beb; -[SCOneTapLoginFeatureUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:delegate:] */

void FUN_104d01b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf048a0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d01bec; end: 104d01c1f; -[SCOneTapLoginFeatureUIRouteActions _createModalUIContainer] */

void FUN_104d01bec(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d01c20; end: 104d01d03; -[SCOneTapLoginFeatureUIRouteActions .cxx_destruct] */

void FUN_104d01c20(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d01d04; end: 104d02817; -[SCOneTapLoginPaginationCellView initWithDisplayData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104d01d04(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
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
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puStack_118 = PTR_PTR_1126e3d08;
  puVar1 = &uStack_120;
  puVar11 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_120 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127110d0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127110d0) = puVar2;
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar14 = (long)_DAT_1127110d4;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    lStack_1a0 = lVar14;
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
    lVar15 = (long)_DAT_1127110d8;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4050400000000000);
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puStack_198 = puVar2;
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
    lVar16 = (long)_DAT_1127110dc;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
    lVar13 = (long)_DAT_1127110e0;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c219b60(uVar12);
    uVar17 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x000104d05644();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar17);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar12);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c271420(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar12);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127110e4) = 0;
    func_0x00010bed4fe0(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = param_3;
    func_0x00010bf12bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_104d02818;
    puStack_138 = &UNK_11084a048;
    _objc_retain(puVar1);
    puStack_130 = puVar1;
    _objc_retain(puVar3);
    puStack_180 = puVar2;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_104d02a54;
    puStack_168 = &UNK_11084a078;
    puStack_128 = puVar3;
    _objc_retain(puVar1);
    puStack_188 = puVar3;
    puStack_160 = puVar1;
    puStack_158 = puVar3;
    _objc_retain(puVar3);
    func_0x00010c0bcbc0(puVar4);
    _objc_release(puVar4);
    uVar17 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1a8 = uVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar17;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1b8 = uVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = uVar12;
    func_0x00010bf49420(0x4060400000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar12;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1c8 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar17;
    func_0x00010bf49420(0x4060400000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar17;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1d8 = uVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_1e0 = uVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar12;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_1f0 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_1f8 = uVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar17;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_208 = uVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_210 = uVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar12;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_220 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_228 = uVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_230 = uVar12;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar17;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_238 = uVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_240 = uVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar12;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_260 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_268 = uVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = uVar12;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar17;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_278 = uVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_280 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_290 = uVar12;
    uStack_b8 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    puStack_298 = puVar8;
    lStack_248 = lVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = uVar12;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puStack_2a8 = puVar8;
    puStack_b0 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    puStack_2b0 = puVar5;
    lStack_258 = lVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    puStack_a8 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + lVar15);
    puStack_190 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    puStack_a0 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_188);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(uVar19);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar17);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar12);
    _objc_release(puStack_2b0);
    _objc_release(puStack_2a8);
    _objc_release(uStack_2a0);
    _objc_release(puStack_298);
    _objc_release(uStack_290);
    _objc_release(puStack_288);
    _objc_release(uStack_280);
    _objc_release(uStack_278);
    _objc_release(uStack_270);
    _objc_release(uStack_268);
    _objc_release(uStack_260);
    _objc_release(puStack_250);
    _objc_release(uStack_240);
    _objc_release(uStack_238);
    _objc_release(uStack_230);
    _objc_release(uStack_228);
    _objc_release(uStack_220);
    _objc_release(puStack_218);
    _objc_release(uStack_210);
    _objc_release(uStack_208);
    _objc_release(puStack_200);
    _objc_release(uStack_1f8);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1e8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1a8);
    param_1 = *(undefined8 *)((long)puVar1 + lStack_1a0);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = *(undefined8 *)((long)puVar1 + lStack_248);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lStack_258;
    uStack_110 = unaff_x22;
    unaff_x23 = *(undefined8 *)((long)puVar1 + lStack_258);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)((long)puVar1 + lVar13));
    unaff_x24 = unaff_x23;
    func_0x00010bf49420(uVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = unaff_x24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_188;
    func_0x00010befa160(puStack_188);
    param_3 = puStack_190;
    _objc_release(puVar2);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(param_1);
    puVar2 = puVar3;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(puStack_158);
    _objc_release(puStack_160);
    _objc_release(puStack_128);
    _objc_release(puStack_130);
    _objc_release(puVar3);
    _objc_release(puStack_198);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_104d02818;
  uStack_2f0 = unaff_x24;
  uStack_2e8 = unaff_x23;
  uStack_2e0 = unaff_x22;
  uStack_2d8 = unaff_x21;
  puStack_2d0 = puVar1;
  uStack_2c8 = param_1;
  puStack_2c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  _objc_retain(puVar2);
  func_0x00010bdc82e0(*(undefined8 *)(param_3 + 0x20));
  puVar10 = auStack_2f8;
  _objc_initWeak(puVar10,*(undefined8 *)(param_3 + 0x20));
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_300,auStack_2f8);
  puVar4 = puVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_1127110e8);
  *(undefined **)(*(long *)(param_3 + 0x20) + (long)_DAT_1127110e8) = puVar4;
  _objc_release(uVar12);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_300);
  _objc_destroyWeak(auStack_2f8);
  _objc_release(puVar2);
  _objc_release(puVar11);
  return puVar11;
}



/* Entry: 104d02818; end: 104d02963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bdc82e0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,*(undefined8 *)(param_1 + 0x20));
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127110e8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127110e8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d02964; end: 104d02a0b;  */

void FUN_104d02964(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d02a0c; end: 104d02a53;  */

void FUN_104d02a0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc6100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d02a54; end: 104d02a63;  */

void FUN_104d02a54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addSilhouetteToImageView_constr_11254fa58,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d02a64; end: 104d02a83; -[SCOneTapLoginPaginationCellView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02a64(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_1127110e4)) {
    return;
  }
  *(long *)(param_1 + _DAT_1127110e4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed50b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCellWithNewState_112592dd0);
  return;
}



/* Entry: 104d02a84; end: 104d02acb; -[SCOneTapLoginPaginationCellView setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_1127110d8));
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127110e0),PTR_s_setEnabled__112642f38,param_3);
  return;
}



/* Entry: 104d02acc; end: 104d02ca3; -[SCOneTapLoginPaginationCellView _addSilhouetteToImageView:constraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02acc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_178 [5];
  undefined8 auStack_150 [5];
  undefined8 auStack_128 [5];
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_1127110d4;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  _objc_retain(param_4);
  func_0x00010c1a9f00(uVar10,param_2,param_3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar13),param_2,2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = (long)_DAT_1127110ec;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  uStack_80 = *(undefined8 *)(param_1 + lVar11);
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127110d8;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xbff0000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uStack_80,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa160(param_4,param_2,*(undefined8 *)(param_1 + lVar11));
  lVar13 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_104d02ca4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_1127110d4;
  uStack_d0 = uVar5;
  uStack_c8 = uVar4;
  uStack_c0 = uVar10;
  lStack_b8 = lVar11;
  uStack_b0 = uVar3;
  uStack_a8 = uVar2;
  lStack_a0 = param_1;
  lStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c1a9f00(*(undefined8 *)(lVar13 + lVar12));
  func_0x00010c182220(*(undefined8 *)(lVar13 + lVar12),param_2,1);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(lVar13 + _DAT_1127110ec));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)(lVar13 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_1127110d8;
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  func_0x00010c274200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar15;
  func_0x00010bf493c0(0x402e000000000000,lVar15,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar13 + lVar12);
  lStack_e8 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_e8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar11);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    pcStack_f8 = FUN_104d02e38;
    lVar13 = *(long *)(lVar15 + _DAT_1127110e4);
    if (lVar13 == 0) {
      pcVar9 = FUN_104d02ed4;
      puVar8 = auStack_128;
    }
    else if (lVar13 == 2) {
      pcVar9 = (code *)0x104d02f44;
      puVar8 = auStack_178;
    }
    else {
      if (lVar13 != 1) {
        return;
      }
      pcVar9 = FUN_104d02edc;
      puVar8 = auStack_150;
    }
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puVar8[1] = 0xc2000000;
    puVar8[2] = pcVar9;
    puVar8[3] = &UNK_110842e18;
    puVar8[4] = lVar15;
    ppuStack_100 = &puStack_90;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
  return;
}



/* Entry: 104d02ca4; end: 104d02e37; -[SCOneTapLoginPaginationCellView _addBitmojiToImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02ca4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_f8 [5];
  undefined8 auStack_d0 [5];
  undefined8 auStack_a8 [5];
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_1127110d4;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar11),param_2,1);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127110ec));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_1127110d8;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf493c0(0x402e000000000000,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  lStack_68 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_104d02e38;
  lVar9 = *(long *)(lVar2 + _DAT_1127110e4);
  if (lVar9 == 0) {
    pcVar10 = FUN_104d02ed4;
    puVar8 = auStack_a8;
  }
  else if (lVar9 == 2) {
    pcVar10 = (code *)0x104d02f44;
    puVar8 = auStack_f8;
  }
  else {
    if (lVar9 != 1) {
      return;
    }
    pcVar10 = FUN_104d02edc;
    puVar8 = auStack_d0;
  }
  *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puVar8[1] = 0xc2000000;
  puVar8[2] = pcVar10;
  puVar8[3] = &UNK_110842e18;
  puVar8[4] = lVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 104d02e38; end: 104d02ed3; -[SCOneTapLoginPaginationCellView _updateCellWithNewState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02e38(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 auStack_88 [5];
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [5];
  
  lVar2 = *(long *)(param_1 + _DAT_1127110e4);
  if (lVar2 == 0) {
    pcVar3 = FUN_104d02ed4;
    puVar1 = auStack_38;
  }
  else if (lVar2 == 2) {
    pcVar3 = (code *)0x104d02f44;
    puVar1 = auStack_88;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    pcVar3 = FUN_104d02edc;
    puVar1 = auStack_60;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar3;
  puVar1[3] = &UNK_110842e18;
  puVar1[4] = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 104d02ed4; end: 104d02edb;  */

void FUN_104d02ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCellToBackgroundState_112592da0);
  return;
}



/* Entry: 104d02edc; end: 104d02fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02edc(long param_1)

{
  long lVar1;
  
  func_0x00010c1677c0(0x3fd3333333333333,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127110dc));
  lVar1 = (long)_DAT_1127110e0;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 104d02fa8; end: 104d02fff; -[SCOneTapLoginPaginationCellView _updateCellToBackgroundState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d02fa8(long param_1)

{
  long lVar1;
  
  func_0x00010c1677c0(0x3fd3333333333333);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_1127110dc));
  lVar1 = (long)_DAT_1127110e0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setEnabled__112642f38,0);
  return;
}



/* Entry: 104d03000; end: 104d0304f; -[SCOneTapLoginPaginationCellView _avatarPressed] */

void FUN_104d03000(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 2) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d03050; end: 104d0309f; -[SCOneTapLoginPaginationCellView _removeAccountPressed] */

void FUN_104d03050(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 2) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7d280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d030a0; end: 104d030af; -[SCOneTapLoginPaginationCellView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d030a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127110e4);
}



/* Entry: 104d030b0; end: 104d030cf; -[SCOneTapLoginPaginationCellView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d030b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127110f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d030d0; end: 104d030e3; -[SCOneTapLoginPaginationCellView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d030d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127110f0,param_3);
  return;
}



/* Entry: 104d030e4; end: 104d030f3; -[SCOneTapLoginPaginationCellView enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d030e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127110cc);
}



/* Entry: 104d030f4; end: 104d0318f; -[SCOneTapLoginPaginationCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d030f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127110f0);
  _objc_storeStrong(param_1 + _DAT_1127110e8,0);
  _objc_storeStrong(param_1 + _DAT_1127110ec,0);
  _objc_storeStrong(param_1 + _DAT_1127110e0,0);
  _objc_storeStrong(param_1 + _DAT_1127110dc,0);
  _objc_storeStrong(param_1 + _DAT_1127110d8,0);
  _objc_storeStrong(param_1 + _DAT_1127110d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127110d0,0);
  return;
}



/* Entry: 104d03190; end: 104d036df; -[SCOneTapLoginPaginationView initWithPages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104d03190(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puStack_98 = PTR_PTR_1126e3d10;
  puVar1 = &uStack_a0;
  puVar22 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar23 = (long)_DAT_1127110f8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_new();
    lVar23 = (long)_DAT_1127110fc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c1d8be0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010befbb60(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c0f36c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(puVar1);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar1);
    _objc_retain(param_3);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    _objc_retain(puVar8);
    func_0x00010bf97e80(param_3);
    func_0x00010bf529e0(param_3);
    puVar3 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar3);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar7;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar18;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar7);
    _objc_release(puVar12);
    _objc_release(uVar11);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar3 = puVar9;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(puVar9);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(uVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar23 = (long)_DAT_1127110fc;
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar23);
  _objc_retain(puVar22);
  func_0x00010befbb60(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = puVar22;
  func_0x00010c274200(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar12);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = puVar22;
  func_0x00010bf1ff80(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar12);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = puVar22;
  func_0x00010c2a5060(puVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar23);
  func_0x00010bfb6da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf493a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5);
  _objc_release(puVar12);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = puVar22;
  func_0x00010c08de00(puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  if (puVar3 == (undefined *)0x0) {
    puVar22 = puVar1;
    func_0x00010bf493a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
  }
  else {
    puVar22 = *(undefined8 **)(param_3 + 0x48);
    func_0x00010c0dfd40(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf493a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar14);
    _objc_release(puVar12);
  }
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 104d036e0; end: 104d03907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d036e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127110fc;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  _objc_retain(param_2);
  func_0x00010befbb60(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_2;
  func_0x00010c274200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_2;
  func_0x00010bf1ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_2;
  func_0x00010c2a5060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010bfb6da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_2;
  func_0x00010c08de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (param_3 == 0) {
    uVar3 = uVar2;
    func_0x00010bf493a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d03908; end: 104d03a1b; -[SCOneTapLoginPaginationView setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03908(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_1127110fc));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar4 = *(long *)(param_1 + _DAT_1127110f8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c195460(*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined1 **)(lVar4 + _DAT_1127110f8);
  func_0x00010bf529e0();
  if (puVar3 < puVar2) {
    func_0x00010c1cbe20(lVar4);
    func_0x00010c08cdc0(lVar4);
    func_0x00010bdcdea0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bedcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar4,PTR_s__updatePaginationAfterNewPositio_112594c78,puVar3);
    return;
  }
  return;
}



/* Entry: 104d03a1c; end: 104d03a83; -[SCOneTapLoginPaginationView setPaginationToIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03a1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127110f8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
    func_0x00010bdcdea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updatePaginationAfterNewPositio_112594c78,param_3);
    return;
  }
  return;
}



/* Entry: 104d03a84; end: 104d03b33; -[SCOneTapLoginPaginationView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03a84(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3d10;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  lVar2 = (long)_DAT_112711100;
  if (param_3 != *(double *)(param_4 + lVar2)) {
    lVar3 = (long)_DAT_1127110fc;
    uVar1 = *(ulong *)(param_4 + lVar3);
    func_0x00010c070ea0();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_4 + lVar3);
      func_0x00010c081660();
      if ((uVar1 & 1) == 0) {
        uVar1 = *(ulong *)(param_4 + lVar3);
        func_0x00010c070400();
        if ((uVar1 & 1) == 0) {
          func_0x00010bf20c00(param_4);
          *(double *)(param_4 + lVar2) = param_3;
          func_0x00010bdcdea0(param_4);
        }
      }
    }
  }
  return;
}



/* Entry: 104d03b34; end: 104d03c6b; -[SCOneTapLoginPaginationView scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03b34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f29a0();
    _objc_release(lVar2);
  }
  lVar4 = *(long *)(param_1 + _DAT_1127110f8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c209fc0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb68e0();
  lVar2 = lVar4;
  func_0x00010bde91a0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bedcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar4,PTR_s__updatePaginationAfterNewPositio_112594c78,lVar2);
  return;
}



/* Entry: 104d03c6c; end: 104d03cbf; -[SCOneTapLoginPaginationView scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_104d03c6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb68e0();
  uVar1 = param_1;
  func_0x00010bde91a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updatePaginationAfterNewPositio_112594c78,uVar1);
  return;
}



/* Entry: 104d03cc0; end: 104d03ccb; -[SCOneTapLoginPaginationView scrollViewDidEndDragging:willDecelerate:] */

void FUN_104d03cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104d03ccc; end: 104d03ccf; -[SCOneTapLoginPaginationView scrollViewDidEndDecelerating:] */

void FUN_104d03ccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104d03cd0; end: 104d03d2f; -[SCOneTapLoginPaginationView _applyContentOffsetForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03cd0(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  func_0x00010bde91a0();
  uVar2 = *(undefined8 *)(param_4 + (long)_DAT_1127110fc);
  func_0x00010bfb68e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_3 + -1.0) * 0.5 * (double)uVar1,0,uVar2,PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 104d03d30; end: 104d03df3; -[SCOneTapLoginPaginationView _updatePaginationAfterNewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + _DAT_112711104) = param_3;
  lVar2 = (long)_DAT_1127110f8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_104d03df4;
  puStack_40 = &UNK_11084a0d8;
  uStack_38 = param_3;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + lVar2),param_2,&puStack_58);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f27a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d03df4; end: 104d03e0f;  */

void FUN_104d03df4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + 0x20)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setState__112660218,0);
  return;
}



/* Entry: 104d03e10; end: 104d03e57; -[SCOneTapLoginPaginationView _convertIndexBetweenLogicalAndDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104d03e10(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf8d060();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_1 + _DAT_1127110f8);
    func_0x00010bf529e0(lVar1);
    param_3 = lVar1 + ~param_3;
  }
  return param_3;
}



/* Entry: 104d03e58; end: 104d03e77; -[SCOneTapLoginPaginationView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03e58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d03e78; end: 104d03e8b; -[SCOneTapLoginPaginationView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03e78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711108,param_3);
  return;
}



/* Entry: 104d03e8c; end: 104d03e9b; -[SCOneTapLoginPaginationView enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d03e8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127110f4);
}



/* Entry: 104d03e9c; end: 104d03ee7; -[SCOneTapLoginPaginationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d03e9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711108);
  _objc_storeStrong(param_1 + _DAT_1127110fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127110f8,0);
  return;
}



/* Entry: 104d03ee8; end: 104d0408b; -[SCOneTapLoginWorkflow initWithRouter:authenticator:provider:delegate:loginStateTransitionLogger:loginLogger:oneTapLoginLogger:loginCos:] */

undefined1 *
FUN_104d03ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e3d18;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0408c; end: 104d04153; -[SCOneTapLoginWorkflow beginWorkflow] */

void FUN_104d0408c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d04154;
  puStack_40 = &UNK_11084a0f8;
  lStack_38 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf85560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  func_0x00010c0ab780(uVar1,param_2,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104d04154; end: 104d04163;  */

void FUN_104d04154(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showOneTapLoginLandingPageWithR_11258c240,
             param_2,0);
  return;
}



/* Entry: 104d04164; end: 104d041b7; -[SCOneTapLoginWorkflow logInSelected] */

void FUN_104d04164(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab740();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a8720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d041b8; end: 104d0420b; -[SCOneTapLoginWorkflow signUpSelected] */

void FUN_104d041b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab740();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23be40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d0420c; end: 104d04337; -[SCOneTapLoginWorkflow signInWithOAuthSelectedWithOAuthType:] */

void FUN_104d0420c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bc8a0(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  func_0x00010c0ab740(uVar1);
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23bd60();
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d04338; end: 104d0437f; -[SCOneTapLoginWorkflow oneTapLoginLandingPageExitedWithUsername:] */

void FUN_104d04338(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e85a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d04380; end: 104d043c7; -[SCOneTapLoginWorkflow oneTapLoginExitedWithPasswordLogInInstead:] */

void FUN_104d04380(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e8580();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d043c8; end: 104d04443; -[SCOneTapLoginWorkflow oneTapLoginAuthenticationFinishedWithUserId:loginSuccess:] */

void FUN_104d043c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0e9e0(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d04444; end: 104d044d3; -[SCOneTapLoginWorkflow oneTapLoginLandingPageSelectedLink:] */

void FUN_104d04444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d044d4;
  puStack_48 = &UNK_11084a128;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 104d044d4; end: 104d044df;  */

void FUN_104d044d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d044e0; end: 104d04553; -[SCOneTapLoginWorkflow channelVerificationFinishedWithLoginSuccess:] */

void FUN_104d044e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be0e9e0(param_1,param_2,0,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d04554; end: 104d0455b;  */

void FUN_104d04554(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeChannelVerification_1126287d0);
  return;
}



/* Entry: 104d0455c; end: 104d045b3; -[SCOneTapLoginWorkflow channelVerificationExited] */

void FUN_104d0455c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d045b4;
  puStack_20 = &UNK_11084a0f8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d045b4; end: 104d045f7;  */

void FUN_104d045b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12b6c0(param_2);
  func_0x00010beba260(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d045f8; end: 104d0466b; -[SCOneTapLoginWorkflow odlvFinishedWithLoginSuccess:] */

void FUN_104d045f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be0e9e0(param_1,param_2,0,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d0466c; end: 104d04673;  */

void FUN_104d0466c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeOdlv_112628fa0);
  return;
}



/* Entry: 104d04674; end: 104d046cb; -[SCOneTapLoginWorkflow odlvExited] */

void FUN_104d04674(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d046cc;
  puStack_20 = &UNK_11084a0f8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d046cc; end: 104d0470f;  */

void FUN_104d046cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12d600(param_2);
  func_0x00010beba260(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d04710; end: 104d04783; -[SCOneTapLoginWorkflow twoFAFinishedWithLoginSuccess:] */

void FUN_104d04710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be0e9e0(param_1,param_2,0,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d04784; end: 104d0478b;  */

void FUN_104d04784(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeTwoFAVerification_112629580);
  return;
}



/* Entry: 104d0478c; end: 104d047e3; -[SCOneTapLoginWorkflow twoFAExited] */

void FUN_104d0478c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d047e4;
  puStack_20 = &UNK_11084a0f8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d047e4; end: 104d04827;  */

void FUN_104d047e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12ed80(param_2);
  func_0x00010beba260(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d04828; end: 104d048b7; -[SCOneTapLoginWorkflow oneTapLoginNeedsAppeal:] */

void FUN_104d04828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d048b8;
  puStack_48 = &UNK_11084a128;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d048b8; end: 104d048c3;  */

void FUN_104d048b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showAppealWithDelegate_appealabl_11266b1a8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d048c4; end: 104d048db; -[SCOneTapLoginWorkflow appealScopeDidCompleteWithSuccess:] */

void FUN_104d048c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11084a1d8);
  return;
}



/* Entry: 104d048dc; end: 104d048f3; -[SCOneTapLoginWorkflow webBrowserDidDismiss:] */

void FUN_104d048dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11084a1f8);
  return;
}



/* Entry: 104d048f4; end: 104d04b4f; -[SCOneTapLoginWorkflow _featureScreenFinishedWithUserId:loginSuccess:route:] */

void FUN_104d048f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c13ca20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d04b50;
  puStack_80 = &UNK_110848ba8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104d04c74;
  puStack_b0 = &UNK_110848f78;
  lStack_a8 = param_1;
  lStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  _objc_retain(param_5);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_104d04d4c;
  puStack_e0 = &UNK_110848fa8;
  lStack_d8 = param_1;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_104d04e24;
  puStack_110 = &UNK_110848fd8;
  lStack_108 = param_1;
  uStack_d0 = param_5;
  _objc_retain(param_5);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_104d04f18;
  puStack_140 = &UNK_110849008;
  lStack_138 = param_1;
  uStack_100 = param_5;
  _objc_retain(param_5);
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_104d05004;
  puStack_170 = &UNK_110849038;
  lStack_168 = param_1;
  uStack_130 = param_5;
  _objc_retain(param_5);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_104d050b8;
  puStack_1a0 = &UNK_110849098;
  lStack_198 = param_1;
  uStack_190 = param_5;
  uStack_160 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c07c0(uVar2,param_2,&puStack_98,&puStack_c8,&puStack_f8,&puStack_128,&puStack_158,
                      &puStack_188,&puStack_1b8);
  _objc_release(uStack_190);
  _objc_release(uStack_160);
  _objc_release(uStack_130);
  _objc_release(uStack_100);
  _objc_release(uStack_d0);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d04b50; end: 104d04c73;  */

void FUN_104d04b50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x50) & 1) == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e80();
    _objc_release(uVar1);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1faa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d60(uVar2,param_2,1,uVar4,*(undefined8 *)(param_1 + 0x28),1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1faa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e85c0(lVar5,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104d04c74; end: 104d04d3f;  */

void FUN_104d04c74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104d04d40; end: 104d04d4b;  */

void FUN_104d04d40(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showChannelVerification_verifica_11266b430,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d04d4c; end: 104d04e17;  */

void FUN_104d04d4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104d04e18; end: 104d04e23;  */

void FUN_104d04e18(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showOdlv_challenge__11266bd28,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d04e24; end: 104d04f0b;  */

void FUN_104d04e24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af358;
  func_0x00010c0ee1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef6960(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  return;
}



/* Entry: 104d04f0c; end: 104d04f17;  */

void FUN_104d04f0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showTwoFAVerification_delegate__11266c4b8,*(undefined8 *)(param_1 + 0x20)
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d04f18; end: 104d04ff7;  */

void FUN_104d04f18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af358;
  func_0x00010c23f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef6960(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  return;
}



/* Entry: 104d04ff8; end: 104d05003;  */

void FUN_104d04ff8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showTwoFAVerification_delegate__11266c4b8,*(undefined8 *)(param_1 + 0x20)
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d05004; end: 104d050a7;  */

void FUN_104d05004(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104d050a8; end: 104d050b7;  */

void FUN_104d050a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showOneTapLoginLandingPageWithR_11258c240,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d050b8; end: 104d051af;  */

void FUN_104d050b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d051b0; end: 104d051bf;  */

void FUN_104d051b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCOSChallenge_authSessionPayl_11266b338,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104d051c0; end: 104d05293; -[SCOneTapLoginWorkflow _showOneTapLoginLandingPageWithRouteActions:reactivationStatus:] */

void FUN_104d051c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be04440(param_1,param_2,uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf85560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238d40(param_3,param_2,uVar4,lVar1,uVar3,param_4,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d05294; end: 104d053ab; -[SCOneTapLoginWorkflow _displayDataIndexFromUserId:] */

undefined8 FUN_104d05294(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf85560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf97e80(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = puStack_48[3];
    _objc_release(param_3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104d053ac; end: 104d0541f;  */

void FUN_104d053ac(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 104d05420; end: 104d05477; -[SCOneTapLoginWorkflow COSChallengeAbandoned] */

void FUN_104d05420(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d05478;
  puStack_20 = &UNK_11084a0f8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}


