/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10654ddb8; end: 10654ddc7; -[SCChatViewControllerV3 dismissSubmenuGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654ddb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a304);
}



/* Entry: 10654ddc8; end: 10654de07; -[SCChatViewControllerV3 setDismissSubmenuGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654ddc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a304;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654de08; end: 10654de17; -[SCChatViewControllerV3 tableDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654de08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a2e4);
}



/* Entry: 10654de18; end: 10654de57; -[SCChatViewControllerV3 setTableDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654de18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a2e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654de58; end: 10654de97; -[SCChatViewControllerV3 setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654de58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a2f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654de98; end: 10654eaab; -[SCChatViewControllerV3 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654de98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a2f4,0);
  _objc_storeStrong(param_1 + _DAT_11274a2e4,0);
  _objc_storeStrong(param_1 + _DAT_11274a304,0);
  _objc_storeStrong(param_1 + _DAT_11274a3ec,0);
  _objc_storeStrong(param_1 + _DAT_11274a2fc,0);
  _objc_storeStrong(param_1 + _DAT_11274a384,0);
  _objc_storeStrong(param_1 + _DAT_11274a374,0);
  _objc_storeStrong(param_1 + _DAT_11274a3b4,0);
  _objc_storeStrong(param_1 + _DAT_11274a308,0);
  _objc_storeStrong(param_1 + _DAT_11274a3e8,0);
  _objc_storeStrong(param_1 + _DAT_11274a3e4,0);
  _objc_storeStrong(param_1 + _DAT_11274a3e0,0);
  _objc_storeStrong(param_1 + _DAT_11274a37c,0);
  _objc_storeStrong(param_1 + _DAT_11274a3dc,0);
  _objc_storeStrong(param_1 + _DAT_11274a3d8,0);
  _objc_storeStrong(param_1 + _DAT_11274a3d4,0);
  _objc_storeStrong(param_1 + _DAT_11274a3d0,0);
  _objc_storeStrong(param_1 + _DAT_11274a3cc,0);
  _objc_destroyWeak(param_1 + _DAT_11274a3c8);
  _objc_storeStrong(param_1 + _DAT_11274a3bc,0);
  _objc_destroyWeak(param_1 + _DAT_11274a3c4);
  _objc_storeStrong(param_1 + _DAT_11274a398,0);
  _objc_storeStrong(param_1 + _DAT_11274a3b0,0);
  _objc_storeStrong(param_1 + _DAT_11274a310,0);
  _objc_destroyWeak(param_1 + _DAT_11274a3c0);
  _objc_storeStrong(param_1 + _DAT_11274a328,0);
  _objc_storeStrong(param_1 + _DAT_11274a098,0);
  _objc_storeStrong(param_1 + _DAT_11274a0e0,0);
  _objc_storeStrong(param_1 + _DAT_11274a130,0);
  _objc_storeStrong(param_1 + _DAT_11274a12c,0);
  _objc_storeStrong(param_1 + _DAT_11274a248,0);
  _objc_storeStrong(param_1 + _DAT_11274a0c0,0);
  _objc_storeStrong(param_1 + _DAT_11274a0b8,0);
  _objc_storeStrong(param_1 + _DAT_11274a0b4,0);
  _objc_storeStrong(param_1 + _DAT_11274a0c4,0);
  _objc_storeStrong(param_1 + _DAT_11274a0cc,0);
  _objc_storeStrong(param_1 + _DAT_11274a104,0);
  _objc_storeStrong(param_1 + _DAT_11274a0dc,0);
  _objc_storeStrong(param_1 + _DAT_11274a0e4,0);
  _objc_destroyWeak(param_1 + _DAT_11274a13c);
  _objc_storeStrong(param_1 + _DAT_11274a17c,0);
  _objc_destroyWeak(param_1 + _DAT_11274a0a0);
  _objc_storeStrong(param_1 + _DAT_11274a2d8,0);
  _objc_storeStrong(param_1 + _DAT_11274a2d4,0);
  _objc_storeStrong(param_1 + _DAT_11274a2d0,0);
  _objc_storeStrong(param_1 + _DAT_11274a2cc,0);
  _objc_storeStrong(param_1 + _DAT_11274a2c8,0);
  _objc_storeStrong(param_1 + _DAT_11274a134,0);
  _objc_storeStrong(param_1 + _DAT_11274a2c4,0);
  _objc_storeStrong(param_1 + _DAT_11274a2c0,0);
  _objc_storeStrong(param_1 + _DAT_11274a2bc,0);
  _objc_storeStrong(param_1 + _DAT_11274a2b8,0);
  _objc_storeStrong(param_1 + _DAT_11274a2b4,0);
  _objc_storeStrong(param_1 + _DAT_11274a2ac,0);
  _objc_storeStrong(param_1 + _DAT_11274a2a8,0);
  _objc_storeStrong(param_1 + _DAT_11274a2a4,0);
  _objc_storeStrong(param_1 + _DAT_11274a2a0,0);
  _objc_storeStrong(param_1 + _DAT_11274a380,0);
  _objc_storeStrong(param_1 + _DAT_11274a1a4,0);
  _objc_storeStrong(param_1 + _DAT_11274a1a0,0);
  _objc_storeStrong(param_1 + _DAT_11274a29c,0);
  _objc_storeStrong(param_1 + _DAT_11274a1e4,0);
  _objc_storeStrong(param_1 + _DAT_11274a350,0);
  _objc_storeStrong(param_1 + _DAT_11274a294,0);
  _objc_storeStrong(param_1 + _DAT_11274a1e8,0);
  _objc_storeStrong(param_1 + _DAT_11274a290,0);
  _objc_storeStrong(param_1 + _DAT_11274a1e0,0);
  _objc_storeStrong(param_1 + _DAT_11274a1dc,0);
  _objc_storeStrong(param_1 + _DAT_11274a1d8,0);
  _objc_storeStrong(param_1 + _DAT_11274a1d4,0);
  _objc_storeStrong(param_1 + _DAT_11274a28c,0);
  _objc_storeStrong(param_1 + _DAT_11274a288,0);
  _objc_storeStrong(param_1 + _DAT_11274a354,0);
  _objc_storeStrong(param_1 + _DAT_11274a284,0);
  _objc_storeStrong(param_1 + _DAT_11274a280,0);
  _objc_storeStrong(param_1 + _DAT_11274a35c,0);
  _objc_storeStrong(param_1 + _DAT_11274a260,0);
  _objc_storeStrong(param_1 + _DAT_11274a378,0);
  _objc_storeStrong(param_1 + _DAT_11274a27c,0);
  _objc_storeStrong(param_1 + _DAT_11274a278,0);
  _objc_storeStrong(param_1 + _DAT_11274a2b0,0);
  _objc_storeStrong(param_1 + _DAT_11274a274,0);
  _objc_storeStrong(param_1 + _DAT_11274a270,0);
  _objc_storeStrong(param_1 + _DAT_11274a190,0);
  _objc_storeStrong(param_1 + _DAT_11274a0d0,0);
  _objc_storeStrong(param_1 + _DAT_11274a26c,0);
  _objc_storeStrong(param_1 + _DAT_11274a1cc,0);
  _objc_storeStrong(param_1 + _DAT_11274a1c8,0);
  _objc_storeStrong(param_1 + _DAT_11274a1d0,0);
  _objc_storeStrong(param_1 + _DAT_11274a268,0);
  _objc_storeStrong(param_1 + _DAT_11274a2f0,0);
  _objc_storeStrong(param_1 + _DAT_11274a2ec,0);
  _objc_storeStrong(param_1 + _DAT_11274a264,0);
  _objc_storeStrong(param_1 + _DAT_11274a30c,0);
  _objc_storeStrong(param_1 + _DAT_11274a108,0);
  _objc_storeStrong(param_1 + _DAT_11274a100,0);
  _objc_storeStrong(param_1 + _DAT_11274a3a8,0);
  _objc_storeStrong(param_1 + _DAT_11274a3a4,0);
  _objc_storeStrong(param_1 + _DAT_11274a3ac,0);
  _objc_storeStrong(param_1 + _DAT_11274a31c,0);
  _objc_storeStrong(param_1 + _DAT_11274a3b8,0);
  _objc_storeStrong(param_1 + _DAT_11274a254,0);
  _objc_storeStrong(param_1 + _DAT_11274a1f0,0);
  _objc_storeStrong(param_1 + _DAT_11274a364,0);
  _objc_storeStrong(param_1 + _DAT_11274a164,0);
  _objc_destroyWeak(param_1 + _DAT_11274a370);
  _objc_storeStrong(param_1 + _DAT_11274a168,0);
  _objc_storeStrong(param_1 + _DAT_11274a170,0);
  _objc_storeStrong(param_1 + _DAT_11274a16c,0);
  _objc_storeStrong(param_1 + _DAT_11274a160,0);
  _objc_storeStrong(param_1 + _DAT_11274a15c,0);
  _objc_storeStrong(param_1 + _DAT_11274a158,0);
  _objc_storeStrong(param_1 + _DAT_11274a154,0);
  _objc_storeStrong(param_1 + _DAT_11274a250,0);
  _objc_storeStrong(param_1 + _DAT_11274a24c,0);
  _objc_storeStrong(param_1 + _DAT_11274a178,0);
  _objc_storeStrong(param_1 + _DAT_11274a128,0);
  _objc_destroyWeak(param_1 + _DAT_11274a14c);
  _objc_storeStrong(param_1 + _DAT_11274a150,0);
  _objc_storeStrong(param_1 + _DAT_11274a244,0);
  _objc_storeStrong(param_1 + _DAT_11274a240,0);
  _objc_storeStrong(param_1 + _DAT_11274a0b0,0);
  _objc_storeStrong(param_1 + _DAT_11274a1ac,0);
  _objc_storeStrong(param_1 + _DAT_11274a09c,0);
  _objc_storeStrong(param_1 + _DAT_11274a174,0);
  _objc_storeStrong(param_1 + _DAT_11274a23c,0);
  _objc_storeStrong(param_1 + _DAT_11274a10c,0);
  _objc_storeStrong(param_1 + _DAT_11274a0fc,0);
  _objc_storeStrong(param_1 + _DAT_11274a238,0);
  _objc_storeStrong(param_1 + _DAT_11274a22c,0);
  _objc_storeStrong(param_1 + _DAT_11274a234,0);
  _objc_storeStrong(param_1 + _DAT_11274a230,0);
  _objc_storeStrong(param_1 + _DAT_11274a18c,0);
  _objc_storeStrong(param_1 + _DAT_11274a188,0);
  _objc_storeStrong(param_1 + _DAT_11274a1a8,0);
  _objc_storeStrong(param_1 + _DAT_11274a1c4,0);
  _objc_storeStrong(param_1 + _DAT_11274a138,0);
  _objc_storeStrong(param_1 + _DAT_11274a2dc,0);
  _objc_storeStrong(param_1 + _DAT_11274a1c0,0);
  _objc_storeStrong(param_1 + _DAT_11274a228,0);
  _objc_storeStrong(param_1 + _DAT_11274a224,0);
  _objc_storeStrong(param_1 + _DAT_11274a220,0);
  _objc_storeStrong(param_1 + _DAT_11274a19c,0);
  _objc_storeStrong(param_1 + _DAT_11274a198,0);
  _objc_storeStrong(param_1 + _DAT_11274a194,0);
  _objc_storeStrong(param_1 + _DAT_11274a184,0);
  _objc_storeStrong(param_1 + _DAT_11274a180,0);
  _objc_storeStrong(param_1 + _DAT_11274a2e0,0);
  _objc_storeStrong(param_1 + _DAT_11274a218,0);
  _objc_storeStrong(param_1 + _DAT_11274a39c,0);
  _objc_storeStrong(param_1 + _DAT_11274a140,0);
  _objc_storeStrong(param_1 + _DAT_11274a214,0);
  _objc_storeStrong(param_1 + _DAT_11274a1b8,0);
  _objc_storeStrong(param_1 + _DAT_11274a1b4,0);
  _objc_storeStrong(param_1 + _DAT_11274a1b0,0);
  _objc_storeStrong(param_1 + _DAT_11274a38c,0);
  _objc_storeStrong(param_1 + _DAT_11274a144,0);
  _objc_storeStrong(param_1 + _DAT_11274a210,0);
  _objc_storeStrong(param_1 + _DAT_11274a25c,0);
  _objc_storeStrong(param_1 + _DAT_11274a258,0);
  _objc_storeStrong(param_1 + _DAT_11274a0a4,0);
  _objc_storeStrong(param_1 + _DAT_11274a20c,0);
  _objc_storeStrong(param_1 + _DAT_11274a204,0);
  _objc_storeStrong(param_1 + _DAT_11274a208,0);
  _objc_storeStrong(param_1 + _DAT_11274a148,0);
  _objc_storeStrong(param_1 + _DAT_11274a124,0);
  _objc_storeStrong(param_1 + _DAT_11274a120,0);
  _objc_storeStrong(param_1 + _DAT_11274a11c,0);
  _objc_storeStrong(param_1 + _DAT_11274a0ac,0);
  _objc_storeStrong(param_1 + _DAT_11274a118,0);
  _objc_storeStrong(param_1 + _DAT_11274a114,0);
  _objc_storeStrong(param_1 + _DAT_11274a110,0);
  _objc_storeStrong(param_1 + _DAT_11274a0f8,0);
  _objc_storeStrong(param_1 + _DAT_11274a0f4,0);
  _objc_storeStrong(param_1 + _DAT_11274a0f0,0);
  _objc_storeStrong(param_1 + _DAT_11274a0ec,0);
  _objc_storeStrong(param_1 + _DAT_11274a0e8,0);
  _objc_storeStrong(param_1 + _DAT_11274a3a0,0);
  _objc_storeStrong(param_1 + _DAT_11274a0bc,0);
  _objc_storeStrong(param_1 + _DAT_11274a0d4,0);
  _objc_storeStrong(param_1 + _DAT_11274a0d8,0);
  _objc_storeStrong(param_1 + _DAT_11274a0c8,0);
  _objc_storeStrong(param_1 + _DAT_11274a200,0);
  _objc_storeStrong(param_1 + _DAT_11274a1fc,0);
  _objc_storeStrong(param_1 + _DAT_11274a1f8,0);
  _objc_storeStrong(param_1 + _DAT_11274a1f4,0);
  _objc_storeStrong(param_1 + _DAT_11274a300,0);
  _objc_storeStrong(param_1 + _DAT_11274a360,0);
  _objc_storeStrong(param_1 + _DAT_11274a21c,0);
  _objc_storeStrong(param_1 + _DAT_11274a2e8,0);
  _objc_storeStrong(param_1 + _DAT_11274a2f8,0);
  _objc_storeStrong(param_1 + _DAT_11274a1ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a0a8,0);
  return;
}



/* Entry: 10654eaac; end: 10654ecff; -[SCModalChatRootViewController initWithUserSession:chatViewControllerFactory:pageLoadMetricsEmitter:groupsDataFetcher:snapchattersDataFetcher:applicationLifecycleEvents:circumstanceEngine:chatDisplayReadyLogger:contextualNotificationTriggerEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10654eaac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c189400(param_1);
    func_0x00010c1934e0(param_1);
    func_0x00010c199200(param_1);
    lVar3 = (long)_DAT_11274a3f0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + _DAT_11274a3f4,param_1);
    lVar3 = (long)_DAT_11274a3f8;
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_11;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a3fc);
    *(undefined **)(param_1 + _DAT_11274a3fc) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126cb758;
    _objc_alloc();
    func_0x00010bffdf40();
    lVar3 = (long)_DAT_11274a400;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    func_0x00010c16f2e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1d90e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010be5dee0(param_1);
    _objc_release(param_9);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10654ed00; end: 10654ed13;  */

void FUN_10654ed00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_featur_1125a56c0,
             &PTR____CFConstantStringClassReference_110e53b18,0);
  return;
}



/* Entry: 10654ed14; end: 10654eddb; -[SCModalChatRootViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654ed14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ad0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11274a404;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010be5dee0(param_1);
  return;
}



/* Entry: 10654eddc; end: 10654eed3; -[SCModalChatRootViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654eddc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f1ad0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewWillLayoutSubviews_112526958);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  lVar3 = (long)_DAT_11274a404;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  _objc_release(puVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + _DAT_11274a400);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0,-param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 10654eed4; end: 10654efd7; -[SCModalChatRootViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654eed4(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1ad0;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  uVar3 = *(undefined8 *)(param_4 + _DAT_11274a400);
  lVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c29c6e0(-param_3,uVar3);
  _objc_release(lVar1);
  if (param_6 != 0) {
    func_0x00010c106ee0(param_4);
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_4);
  func_0x00010c14dc80(puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar2);
  return;
}



/* Entry: 10654efd8; end: 10654f05b; -[SCModalChatRootViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654efd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ad0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar1 = (long)_DAT_11274a408;
  lVar2 = (long)_DAT_11274a400;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010c29c980(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c29cbe0(*(undefined8 *)(param_1 + lVar2));
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  func_0x00010c29c6e0(0,*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 10654f05c; end: 10654f0fb; -[SCModalChatRootViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f05c(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1ad0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c29c6e0(0xbff0000000000000,*(undefined8 *)(param_1 + _DAT_11274a400));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 10654f0fc; end: 10654f1e7; -[SCModalChatRootViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f0fc(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1ad0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidDisappear__112684c48);
  lVar3 = (long)_DAT_11274a400;
  func_0x00010c29ca00(*(undefined8 *)(param_1 + lVar3));
  lVar2 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == param_1) {
    lVar4 = (long)_DAT_11274a408;
    cVar1 = *(char *)(param_1 + lVar4);
    _objc_release();
    _objc_release(lVar2);
    if (cVar1 == '\x01') {
      func_0x00010c29cc20(*(undefined8 *)(param_1 + lVar3));
    }
  }
  else {
    _objc_release();
    _objc_release(lVar2);
    lVar4 = (long)_DAT_11274a408;
  }
  *(undefined1 *)(param_1 + lVar4) = 0;
  func_0x00010c09fda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10654f1e8; end: 10654f1f7; -[SCModalChatRootViewController preferredScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),
             PTR_s_preferredScreenEdgesDeferringSys_11261f5a8);
  return;
}



/* Entry: 10654f1f8; end: 10654f1fb; -[SCModalChatRootViewController preferredStatusBarStyle] */

undefined8 FUN_10654f1f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10654f1fc; end: 10654f377; -[SCModalChatRootViewController _maybeAddChatViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f1fc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_5;
  func_0x00010c0834c0();
  if (((int)lVar4 != 0) && (lVar4 = (long)_DAT_11274a404, *(long *)(param_5 + lVar4) != 0)) {
    lVar3 = (long)_DAT_11274a400;
    if (*(long *)(param_5 + lVar3) != 0) {
      func_0x00010c2a6740();
      uVar2 = *(undefined8 *)(param_5 + lVar4);
      uVar1 = *(undefined8 *)(param_5 + lVar3);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar2);
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(param_5 + lVar4);
      uVar1 = *(undefined8 *)(param_5 + lVar3);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cda0(uVar2);
      _objc_release(uVar1);
      func_0x00010bef7700(param_5);
      func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
      lVar4 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      uVar1 = *(undefined8 *)(param_5 + lVar3);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(0,-param_2,param_3,param_4);
      _objc_release(uVar1);
      _objc_release(lVar4);
      if (*(char *)(param_5 + _DAT_11274a408) == '\x01') {
        func_0x00010c29c980(*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c29cbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_5 + lVar3),PTR_s_viewDidSwipeIn_112684d20);
        return;
      }
    }
  }
  return;
}



/* Entry: 10654f378; end: 10654f38b; -[SCModalChatRootViewController prepareForInteractiveDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,*(undefined8 *)(param_1 + _DAT_11274a400),
             PTR_s_viewDidAppearAtOffset__112684be0);
  return;
}



/* Entry: 10654f38c; end: 10654f3e7; -[SCModalChatRootViewController setChatDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a3f4;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + _DAT_11274a400));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654f3e8; end: 10654f477; -[SCModalChatRootViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:configuration:] */

void FUN_10654f3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(param_3);
  func_0x00010bf379c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183ac0();
  _objc_release(in_x6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654f478; end: 10654f4db; -[SCModalChatRootViewController isChatOpenForNotification:] */

undefined8 FUN_10654f478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf379c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e600();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10654f4dc; end: 10654f4eb; -[SCModalChatRootViewController otherParticipantUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0edef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_otherParticipantUserId_1126191d0);
  return;
}



/* Entry: 10654f4ec; end: 10654f4fb; -[SCModalChatRootViewController activeConversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef0710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_activeConversationId_112599b68);
  return;
}



/* Entry: 10654f4fc; end: 10654f50b; -[SCModalChatRootViewController isPlayingMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_isPlayingMedia_1125fc330);
  return;
}



/* Entry: 10654f50c; end: 10654f54b; -[SCModalChatRootViewController isScrollingLocked] */

bool FUN_10654f50c(long param_1)

{
  long lVar1;
  
  func_0x00010c09fda0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 10654f54c; end: 10654f5eb; -[SCModalChatRootViewController setConversationByChatIdentifier:deepLinkURL:chatPageSource:navigationAction:] */

void FUN_10654f54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf379c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b41f8;
  func_0x00010c13a640(PTR_PTR_1126b41f8,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c183aa0(param_1,param_2,param_3,puVar1,param_5,param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654f5ec; end: 10654f5ef; -[SCModalChatRootViewController navigateToChatViewAnimated:] */

void FUN_10654f5ec(void)

{
  return;
}



/* Entry: 10654f5f0; end: 10654f5f3; -[SCModalChatRootViewController navigateToChatViewAnimated:deepLinkURL:additionalInfo:] */

void FUN_10654f5f0(void)

{
  return;
}



/* Entry: 10654f5f4; end: 10654f66b; -[SCModalChatRootViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:] */

void FUN_10654f5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf379c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183aa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654f66c; end: 10654f6f7; -[SCModalChatRootViewController dismissChatViewController:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654f66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a3f8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10654f6f8;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010be03560(param_1,param_2,param_4,&puStack_58);
  _objc_release(uVar1);
  return;
}



/* Entry: 10654f6f8; end: 10654f73b;  */

void FUN_10654f6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c2c48;
  func_0x00010bf364e0(PTR_PTR_1126c2c48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10654f73c; end: 10654f73f; -[SCModalChatRootViewController _dismissSelfAnimated:completion:] */

void FUN_10654f73c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68);
  return;
}



/* Entry: 10654f740; end: 10654f87f; -[SCModalChatRootViewController isPartiallyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10654f740(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == param_1) {
LAB_10654f800:
    uVar2 = param_1;
    func_0x00010c0741e0();
    if (((int)uVar2 != 0) && (uVar2 = param_1, func_0x00010c0834c0(), (int)uVar2 != 0)) {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 != 0;
      _objc_release();
      _objc_release(param_1);
      goto LAB_10654f858;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a3fc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
      _objc_opt_class(PTR__OBJC_CLASS___UIAlertController_1126aeb78);
      uVar2 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar6);
      if ((uVar2 & 1) == 0) {
        puVar6 = PTR_PTR_1126cb760;
        _objc_opt_class(PTR_PTR_1126cb760);
        uVar2 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar6);
        if ((uVar2 & 1) == 0) goto LAB_10654f854;
      }
      goto LAB_10654f800;
    }
  }
LAB_10654f854:
  bVar1 = false;
LAB_10654f858:
  _objc_release(uVar3);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10654f880; end: 10654f887; -[SCModalChatRootViewController isFullyVisible:] */

void FUN_10654f880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isFullyVisible_withReason__1125faa90,param_3,0);
  return;
}



/* Entry: 10654f888; end: 10654f9a7; -[SCModalChatRootViewController isFullyVisible:withReason:] */

undefined8 FUN_10654f888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  if (lVar3 == 0) {
    if (param_4 == (undefined8 *)0x0) {
LAB_10654f978:
      uVar6 = 0;
      goto LAB_10654f984;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110e53b38;
  }
  else {
    lVar1 = param_1;
    func_0x00010c06d1a0();
    if ((int)lVar1 == 0) {
      func_0x00010c06d1e0();
      if ((int)param_1 == 0) {
        uVar6 = 1;
        goto LAB_10654f984;
      }
      if (param_4 == (undefined8 *)0x0) goto LAB_10654f978;
      ppuVar5 = &PTR____CFConstantStringClassReference_110e53b78;
    }
    else {
      if (param_4 == (undefined8 *)0x0) goto LAB_10654f978;
      ppuVar5 = &PTR____CFConstantStringClassReference_110e53b58;
    }
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
  }
  uVar6 = 0;
  *param_4 = ppuVar4;
LAB_10654f984:
  _objc_release(lVar3);
  return uVar6;
}



/* Entry: 10654f9a8; end: 10654f9af; -[SCModalChatRootViewController isAnimatingScroll] */

undefined8 FUN_10654f9a8(void)

{
  return 0;
}



/* Entry: 10654f9b0; end: 10654fa7b; -[SCModalChatRootViewController lockScrollWithRequestId:] */

void FUN_10654f9b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c09fda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0120(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  uVar1 = param_1;
  func_0x00010c09fda0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c09fda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654fa7c; end: 10654faff; -[SCModalChatRootViewController unlockScrollWithRequestId:] */

void FUN_10654fa7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c09fda0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c09fda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654fb00; end: 10654fb07; -[SCModalChatRootViewController panGestureRecognizer] */

undefined8 FUN_10654fb00(void)

{
  return 0;
}



/* Entry: 10654fb08; end: 10654fb0f; -[SCModalChatRootViewController pinchGestureRecognizer] */

undefined8 FUN_10654fb08(void)

{
  return 0;
}



/* Entry: 10654fb10; end: 10654fb1f; -[SCModalChatRootViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_defaultProjectNameV2_1125b8198);
  return;
}



/* Entry: 10654fb20; end: 10654fb2f; -[SCModalChatRootViewController defaultSubProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6a5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_defaultSubProjectName_1125b8320);
  return;
}



/* Entry: 10654fb30; end: 10654fb3f; -[SCModalChatRootViewController jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fb30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_jiraMetaInfo_1125fef30);
  return;
}



/* Entry: 10654fb40; end: 10654fb4f; -[SCModalChatRootViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a400),PTR_s_pageViewName_11261a2a0);
  return;
}



/* Entry: 10654fb50; end: 10654fb53; -[SCModalChatRootViewController willStartCensoringScreenshot] */

void FUN_10654fb50(void)

{
  return;
}



/* Entry: 10654fb54; end: 10654fb57; -[SCModalChatRootViewController willEndCensoringScreenshot] */

void FUN_10654fb54(void)

{
  return;
}



/* Entry: 10654fb58; end: 10654fb67; -[SCModalChatRootViewController chatViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654fb58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a400);
}



/* Entry: 10654fb68; end: 10654fb87; -[SCModalChatRootViewController chatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fb68(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a3f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654fb88; end: 10654fb97; -[SCModalChatRootViewController dismissButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654fb88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a40c);
}



/* Entry: 10654fb98; end: 10654fbd7; -[SCModalChatRootViewController setDismissButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a40c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654fbd8; end: 10654fbf7; -[SCModalChatRootViewController pannableCellController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fbd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654fbf8; end: 10654fc0b; -[SCModalChatRootViewController setPannableCellController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a410,param_3);
  return;
}



/* Entry: 10654fc0c; end: 10654fc1b; -[SCModalChatRootViewController lockScrollRequestIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654fc0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a414);
}



/* Entry: 10654fc1c; end: 10654fc5b; -[SCModalChatRootViewController setLockScrollRequestIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fc1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a414;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654fc5c; end: 10654fd03; -[SCModalChatRootViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fc5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a414,0);
  _objc_destroyWeak(param_1 + _DAT_11274a410);
  _objc_storeStrong(param_1 + _DAT_11274a40c,0);
  _objc_destroyWeak(param_1 + _DAT_11274a3f4);
  _objc_storeStrong(param_1 + _DAT_11274a400,0);
  _objc_storeStrong(param_1 + _DAT_11274a404,0);
  _objc_storeStrong(param_1 + _DAT_11274a3f8,0);
  _objc_storeStrong(param_1 + _DAT_11274a3fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a3f0,0);
  return;
}



/* Entry: 10654fd04; end: 10654fd87; -[SCModalChatRootViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fd04(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274a400);
  func_0x00010bfddd60();
  if (iVar1 == 0) {
    func_0x00010c07a480();
    if ((int)param_1 == 0) {
      func_0x00010bf9b4a0(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf9b4c0(0x4092c00000000000);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c0d83c0(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654fd88; end: 10654fd8b; -[SCModalChatRootViewController canHandleNotification:] */

void FUN_10654fd88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isChatOpenForNotification__1125f9390);
  return;
}



/* Entry: 10654fd8c; end: 10654fddb; -[SCModalChatRootViewController exit] */

void FUN_10654fd8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f3720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3740(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissSelfAnimated_completion__11255e6f8,0,
             &PTR___NSConcreteGlobalBlock_11092a6b0);
  return;
}



/* Entry: 10654fddc; end: 10654fddf;  */

void FUN_10654fddc(void)

{
  return;
}



/* Entry: 10654fde0; end: 10654fde7; -[SCModalChatRootViewController destinationName] */

undefined8 FUN_10654fde0(void)

{
  return 1;
}



/* Entry: 10654fde8; end: 10654fe17; -[SCModalChatRootViewController childViewControllerForCustomStatusBarStyleContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654fde8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a400);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10654fe18; end: 10654ff8f; -[SCModalChatViewController initWithRootViewController:lifecycleLogger:contextualNotificationTriggerEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10654fe18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1ad8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithRootViewController__1125edab8,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    lVar5 = (long)_DAT_11274a418;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11274a41c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_4;
    _objc_release(uVar3);
    func_0x00010c1c8b80(puVar2);
    func_0x00010c1cb760(puVar2);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11274a420) = 0;
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    iVar1 = (int)puVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release();
    func_0x0001065508e4();
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    *(undefined8 *)((long)puVar2 + (long)_DAT_11274a424) = uVar3;
    func_0x00010c138920(puVar2);
    lVar5 = (long)_DAT_11274a428;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10654ff90; end: 10655005b; -[SCModalChatViewController viewDidAppear:] */

void FUN_10654ff90(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ad8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010c0cfb80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c0cfb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cf960();
    _objc_release(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar3);
  return;
}



/* Entry: 10655005c; end: 1065500c7; -[SCModalChatViewController viewWillDisappear:] */

void FUN_10655005c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1ad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
  return;
}



/* Entry: 1065500c8; end: 10655018b; -[SCModalChatViewController viewDidDisappear:] */

void FUN_1065500c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1ad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c0cfb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cf980();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0f3720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3740(0x3ff0000000000000);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar2);
  func_0x00010c138920(param_1);
  return;
}



/* Entry: 10655018c; end: 106550193; -[SCModalChatViewController supportedInterfaceOrientations] */

undefined8 FUN_10655018c(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = 2;
  puVar2 = param_1;
  _objc_retain();
  iVar1 = (int)puVar2;
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = param_1;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar3 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar3 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar3 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106550194; end: 1065501ef; -[SCModalChatViewController setChatDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550194(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a42c;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c17b180(*(undefined8 *)(param_1 + _DAT_11274a418));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065501f0; end: 10655024b; -[SCModalChatViewController setPannableCellController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065501f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a430;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c1d8ee0(*(undefined8 *)(param_1 + _DAT_11274a418));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655024c; end: 106550323; -[SCModalChatViewController setConversationByChatIdentifier:deeplinkType:sourceNotification:chatPageSource:navigationAction:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655024c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a418;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf379c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ee0();
  _objc_release(param_5);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11274a434) = param_6;
  func_0x00010c183ac0(*(undefined8 *)(param_1 + lVar2),param_2,param_3,param_4,param_6,param_7,
                      param_8);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106550324; end: 106550333; -[SCModalChatViewController isChatOpenForNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),PTR_s_isChatOpenForNotification__1125f9390);
  return;
}



/* Entry: 106550334; end: 106550463; -[SCModalChatViewController _updateContainerViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550334(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = (long)_DAT_11274a438;
  lVar2 = param_5 + lVar5;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  iVar1 = (int)lVar2;
  if (lVar3 != 0) {
    func_0x0001008522a8();
    if (iVar1 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252d80();
      _CGRectGetHeight();
      dVar6 = param_1;
      _objc_release(puVar4);
      func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
      param_2 = 0.0;
      if (0.0 <= param_1 - dVar6) {
        param_2 = param_1 - dVar6;
      }
      func_0x00010bf20c00(lVar3);
      func_0x00010bf20c00(lVar3);
      param_4 = param_4 - param_2;
      param_5 = param_5 + lVar5;
      _objc_loadWeakRetained(param_5);
      param_1 = 0.0;
    }
    else {
      func_0x00010bf20c00(lVar3);
      param_5 = param_5 + lVar5;
      _objc_loadWeakRetained(param_5);
    }
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106550464; end: 106550473; -[SCModalChatViewController setDismissButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),PTR_s_setDismissButtonImage__112641738);
  return;
}



/* Entry: 106550474; end: 106550483; -[SCModalChatViewController dismissButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf833b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),PTR_s_dismissButtonImage_1125be690);
  return;
}



/* Entry: 106550484; end: 106550563; -[SCModalChatViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106550484(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5,param_4,uVar1);
  _objc_release(param_5);
  _objc_release(uVar1);
  if (ABS(param_1) <= ABS(param_2)) {
    return 0;
  }
  if (*(long *)(param_3 + _DAT_11274a424) == 2) {
    uVar1 = 3;
    if (0.0 < param_1) {
      uVar1 = 1;
    }
  }
  else if (*(long *)(param_3 + _DAT_11274a424) == 1) {
    if (param_1 <= 0.0) {
      return 0;
    }
    uVar1 = 1;
  }
  else {
    if (0.0 <= param_1) {
      return 0;
    }
    uVar1 = 3;
  }
  *(undefined8 *)(param_3 + _DAT_11274a43c) = uVar1;
  return 1;
}



/* Entry: 106550564; end: 1065505c3; -[SCModalChatViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106550564(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11274a418;
  lVar5 = *(long *)(param_1 + lVar4);
  _objc_release();
  if (lVar2 == lVar5) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c07d480(uVar3);
    uVar1 = (uint)uVar3 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1065505c4; end: 1065505d3; -[SCModalChatViewController otherParticipantUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065505c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0edef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),PTR_s_otherParticipantUserId_1126191d0);
  return;
}



/* Entry: 1065505d4; end: 1065505e3; -[SCModalChatViewController activeConversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065505d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef0710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),PTR_s_activeConversationId_112599b68);
  return;
}



/* Entry: 1065505e4; end: 1065505f3; -[SCModalChatViewController isPlayingMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065505e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),PTR_s_isPlayingMedia_1125fc330);
  return;
}



/* Entry: 1065505f4; end: 1065505fb; -[SCModalChatViewController pageViewName] */

undefined8 FUN_1065505f4(void)

{
  return 0x9a;
}



/* Entry: 1065505fc; end: 106550613; -[SCModalChatViewController shouldBeSilentlyPresentedAndPauseOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1065505fc(long param_1)

{
  return *(long *)(param_1 + _DAT_11274a434) != 0x51;
}



/* Entry: 106550614; end: 106550623; -[SCModalChatViewController interactiveDismissalWillBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1095d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a418),
             PTR_s_prepareForInteractiveDismissal_11261ff90);
  return;
}



/* Entry: 106550624; end: 106550627; -[SCModalChatViewController interactionControllerPercentageDidChange:] */

void FUN_106550624(void)

{
  return;
}



/* Entry: 106550628; end: 1065506cb; -[SCModalChatViewController interactiveDismissalDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11274a43c) == 1) {
    uVar2 = 4;
  }
  else {
    if (*(long *)(param_1 + _DAT_11274a43c) != 3) goto LAB_106550680;
    uVar2 = 3;
  }
  func_0x00010c17b2e0(*(undefined8 *)(param_1 + _DAT_11274a41c),param_2,uVar2);
LAB_106550680:
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a428);
  puVar1 = PTR_PTR_1126c2c48;
  func_0x00010bf364e0(PTR_PTR_1126c2c48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065506cc; end: 1065506eb; -[SCModalChatViewController presentationMode] */

undefined8 FUN_1065506cc(int param_1)

{
  undefined8 uVar1;
  
  func_0x0001065508e4();
  uVar1 = 3;
  if (param_1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1065506ec; end: 1065506f3; -[SCModalChatViewController interactivePresentationMode] */

undefined8 FUN_1065506ec(void)

{
  return 1;
}



/* Entry: 1065506f4; end: 106550703; -[SCModalChatViewController exitMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065506f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a43c);
}



/* Entry: 106550704; end: 10655075f; -[SCModalChatViewController resetExitMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550704(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  func_0x0001065508e4();
  if (*(ulong *)(param_1 + _DAT_11274a424) < 3) {
    puVar1 = &UNK_10dddc990;
    if (iVar2 == 0) {
      puVar1 = &UNK_10dddc9a8;
    }
    *(undefined8 *)(param_1 + _DAT_11274a43c) =
         *(undefined8 *)(puVar1 + *(ulong *)(param_1 + _DAT_11274a424) * 8);
  }
  return;
}



/* Entry: 106550760; end: 10655077f; -[SCModalChatViewController chatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550760(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a42c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106550780; end: 10655079f; -[SCModalChatViewController modalPresentationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550780(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065507a0; end: 1065507b3; -[SCModalChatViewController setModalPresentationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065507a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a440,param_3);
  return;
}



/* Entry: 1065507b4; end: 1065507c3; -[SCModalChatViewController modalInteractionController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065507b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a444);
}



/* Entry: 1065507c4; end: 106550803; -[SCModalChatViewController setModalInteractionController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065507c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a444;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106550804; end: 106550813; -[SCModalChatViewController shouldPresentInteractively] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106550804(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a420);
}



/* Entry: 106550814; end: 106550823; -[SCModalChatViewController setShouldPresentInteractively:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550814(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a420) = param_3;
  return;
}



/* Entry: 106550824; end: 106550843; -[SCModalChatViewController pannableCellController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550824(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106550844; end: 106550853; -[SCModalChatViewController rootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106550844(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a418);
}



/* Entry: 106550854; end: 10655092b; -[SCModalChatViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550854(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a418,0);
  _objc_destroyWeak(param_1 + _DAT_11274a430);
  _objc_storeStrong(param_1 + _DAT_11274a444,0);
  _objc_destroyWeak(param_1 + _DAT_11274a440);
  _objc_destroyWeak(param_1 + _DAT_11274a42c);
  _objc_storeStrong(param_1 + _DAT_11274a428,0);
  _objc_storeStrong(param_1 + _DAT_11274a41c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274a438);
  return;
}



/* Entry: 10655092c; end: 106550c33;  */

undefined1 *
FUN_10655092c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             long param_6)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar10;
  undefined *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double unaff_d8;
  ulong unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  ulong uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  double dStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  ulong uVar5;
  long lVar9;
  double dVar18;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_6);
  if (param_6 == 0) {
    puVar13 = (undefined1 *)0x0;
    goto LAB_106550bdc;
  }
  func_0x00010bf20c00(param_5);
  func_0x00010bfb68e0(param_6);
  _CGRectIntersection();
  uVar5 = param_5;
  dVar18 = param_1;
  uVar10 = param_2;
  uVar20 = param_3;
  uVar14 = param_4;
  func_0x00010bf20c00();
  uVar3 = (uint)uVar5;
  uVar21 = param_4;
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar18,uVar10,uVar20,uVar14);
  lVar6 = param_6;
  func_0x00010bf13d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40(param_6);
  unaff_d8 = 5.26354424712089e-315;
  fVar19 = ABS(1.0 - (float)param_1);
  uVar5 = (ulong)(uint)fVar19;
  fVar17 = ABS((float)param_1 + 1.0) * 1.1920929e-07;
  dVar18 = (double)(ulong)(uint)fVar17;
  bVar2 = true;
  if ((1.1754944e-38 <= fVar19) && (bVar2 = false, !NAN(fVar19) && !NAN(fVar17))) {
    bVar2 = fVar19 < fVar17;
  }
  if (bVar2) {
    _objc_retainAutorelease(lVar6);
    func_0x00010bdc0fe0();
    _CGColorGetAlpha();
    fVar19 = ABS((float)dVar18 + -1.0);
    uVar5 = (ulong)(uint)fVar19;
    fVar17 = ABS((float)dVar18 + 1.0) * 1.1920929e-07;
    uVar20 = 0x800000;
    if (fVar17 <= 1.1754944e-38) {
      fVar17 = 1.1754944e-38;
    }
    param_1 = (double)(ulong)(uint)fVar17;
    uVar1 = 0;
    if (fVar19 < fVar17) {
      uVar1 = uVar3;
    }
    if ((uVar1 & 1) == 0) goto LAB_106550a9c;
    puVar13 = (undefined1 *)0x1;
    unaff_d9 = param_2;
    unaff_d10 = param_3;
    unaff_d11 = param_4;
  }
  else {
LAB_106550a9c:
    uVar20 = 0x800000;
    param_1 = 0.0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar7 = param_6;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf52a60();
    puVar13 = (undefined1 *)0x0;
    if (lVar8 != 0) {
      lVar15 = *plStack_140;
      do {
        lVar16 = 0;
        do {
          unaff_d8 = param_1;
          param_2 = uVar5;
          param_3 = uVar20;
          param_4 = uVar21;
          if (*plStack_140 != lVar15) {
            _objc_enumerationMutation(lVar7);
            unaff_d8 = param_1;
            param_2 = uVar5;
            param_3 = uVar20;
            param_4 = uVar21;
          }
          uVar14 = *(undefined8 *)(lStack_148 + lVar16 * 8);
          func_0x00010bf20c00(param_6);
          func_0x00010bfb68e0(uVar14);
          _CGRectIntersection();
          lVar9 = param_6;
          func_0x00010bf20c00();
          iVar4 = (int)lVar9;
          param_1 = unaff_d8;
          uVar5 = param_2;
          uVar20 = param_3;
          uVar21 = param_4;
          _CGRectEqualToRect();
          if ((iVar4 != 0) && (uVar10 = param_5, FUN_10655092c(param_5,uVar14), (uVar10 & 1) != 0))
          {
            puVar13 = (undefined1 *)0x1;
            goto LAB_106550bcc;
          }
          lVar16 = lVar16 + 1;
        } while (lVar8 != lVar16);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
      puVar13 = (undefined1 *)0x0;
    }
LAB_106550bcc:
    _objc_release(lVar7);
    unaff_d9 = param_2;
    unaff_d10 = param_3;
    unaff_d11 = param_4;
  }
  _objc_release(lVar6);
  param_2 = uVar5;
  param_3 = uVar20;
  param_4 = uVar21;
LAB_106550bdc:
  _objc_release(param_6);
  uVar5 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_1a0;
  pcStack_158 = FUN_106550c34;
  puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uStack_190 = unaff_d11;
  uStack_188 = unaff_d10;
  uStack_180 = unaff_d9;
  dStack_178 = unaff_d8;
  lStack_170 = param_6;
  uStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar11);
  puStack_198 = PTR_PTR_1126f1ae0;
  uStack_1a0 = uVar5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_1a0,
                      PTR_s_initWithFrame_showsTopCorners__1125e2d28,1);
  if (puVar12 != (ulong *)0x0) {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar12);
    _objc_release(puVar11);
  }
  return (undefined1 *)puVar12;
}



/* Entry: 106550c34; end: 106550d0f; -[SCChatBackgroundView init] */

undefined1 *
FUN_106550c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  puStack_48 = PTR_PTR_1126f1ae0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,
                      PTR_s_initWithFrame_showsTopCorners__1125e2d28,1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 106550d10; end: 106550d8f; -[SCChatDisabledInputFooterView initWithFrame:] */

undefined1 * FUN_106550d10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1ae8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bdeeea0(puVar1);
  }
  return (undefined1 *)puVar1;
}


