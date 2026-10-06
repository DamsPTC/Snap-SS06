/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10652d3fc; end: 10652d403; -[SCChatChildViewControllerFactory enqueue:] */

void FUN_10652d3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10652d404; end: 10652d45f; -[SCChatChildViewControllerFactory warmup] */

void FUN_10652d404(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bf6df20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96220(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10652d460; end: 10652d477; -[SCChatChildViewControllerFactory parentDelegate] */

void FUN_10652d460(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x3c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10652d478; end: 10652d483; -[SCChatChildViewControllerFactory setParentDelegate:] */

void FUN_10652d478(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x3c0,param_3);
  return;
}



/* Entry: 10652d484; end: 10652da37; -[SCChatChildViewControllerFactory .cxx_destruct] */

void FUN_10652d484(long param_1)

{
  _objc_destroyWeak(param_1 + 0x3c0);
  _objc_storeStrong(param_1 + 0x3b8,0);
  _objc_storeStrong(param_1 + 0x3b0,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 10652da38; end: 10652da4b; -[SCChatMainViewController pageViewName] */

void FUN_10652da38(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pageViewName_11261a2a0);
  return;
}



/* Entry: 10652da4c; end: 10652da53; +[SCChatMainViewController pageViewName] */

undefined8 FUN_10652da4c(void)

{
  return 0x27;
}



/* Entry: 10652da54; end: 10652dcbf; -[SCChatMainViewController initWithChatViewControllerFactory:pageLoadMetricsEmitter:groupsDataFetcher:snapchattersDataFetcher:chatDisplayReadyLogger:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10652da54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f1ac0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a034);
    *(undefined **)((long)puVar1 + (long)_DAT_11274a034) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar4 = (long)_DAT_11274a038;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1f5ec0(0,*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11274a03c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_11274a040;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    func_0x00010c1d90e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_11274a044;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274a048;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274a04c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274a050;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274a054;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10652dcc0; end: 10652dd5f; -[SCChatMainViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652dcc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652dd60; end: 10652e03b; -[SCChatMainViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652dd60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f1ac0;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a058);
  *(undefined **)(param_1 + _DAT_11274a058) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_88,param_1);
  lVar4 = (long)_DAT_11274a054;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf72840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10652e03c;
  puStack_98 = &UNK_110846510;
  _objc_copyWeak(auStack_90,auStack_88);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2a6a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10652e068;
  puStack_c0 = &UNK_110846510;
  _objc_copyWeak(auStack_b8,auStack_88);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_88);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 10652e03c; end: 10652e0bf;  */

void FUN_10652e03c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652e0c0; end: 10652e1cf; -[SCChatMainViewController viewDidLayoutSubviews] */

void FUN_10652e0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f1ac0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = param_5;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0834c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_5;
    func_0x00010bef12e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bfb68e0(uVar2);
    uVar1 = param_1;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    func_0x00010bc850d8(param_1,param_2,param_3,param_4,uVar1);
    func_0x00010c19f0e0(uVar2);
    _objc_release(param_5);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10652e1d0; end: 10652e20b; -[SCChatMainViewController preferredScreenEdgesDeferringSystemGestures] */

undefined8 FUN_10652e1d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106e20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10652e20c; end: 10652e293; -[SCChatMainViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:] */

void FUN_10652e20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb610;
  _objc_retain(param_3);
  func_0x00010bf690c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183ac0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10652e294; end: 10652e69f; -[SCChatMainViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652e294(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 in_x6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(in_x6);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0c11e0(param_3);
  if (param_3 == 0) goto LAB_10652e640;
  uVar6 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bef05e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  if (uVar1 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar6);
LAB_10652e3cc:
    lVar8 = (long)_DAT_11274a05c;
    uVar6 = param_1;
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206ee0();
    _objc_release(uVar6);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
    _objc_release(uVar4);
    uVar6 = param_1;
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ba40();
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b240();
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aa60();
    _objc_release(uVar6);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar6);
    if ((uVar2 & 1) != 0) goto LAB_10652e3cc;
  }
  puVar3 = PTR_PTR_1126cb370;
  func_0x00010bf36a40(PTR_PTR_1126cb370);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a050);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0cce60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2786a0(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar4);
  lVar8 = (long)_DAT_11274a04c;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18400();
  _objc_release(uVar4);
  uVar6 = param_1;
  func_0x00010bebf380();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    lVar7 = (long)_DAT_11274a040;
    func_0x00010c06e740();
    uVar6 = *(ulong *)(param_1 + lVar7);
    func_0x00010bf6df20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 != 0) {
      uVar1 = param_1;
      func_0x00010bef12e0();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar1 != 0) && (lVar7 = puStack_78[3], _objc_release(), lVar7 == 0)) {
        uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a034);
        func_0x00010bf51e00(uVar4);
        func_0x00010c12efc0(param_1);
        _objc_release(uVar4);
      }
      func_0x00010c1625e0(uVar6);
      func_0x00010c23abc0(param_1);
      goto LAB_10652e5f4;
    }
  }
  else {
    func_0x00010bde0fe0(param_1);
LAB_10652e5f4:
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5a00();
    _objc_release(uVar4);
    func_0x00010c17ba40(uVar6);
    func_0x00010c17b240(uVar6);
  }
  _objc_release(uVar6);
  _objc_release(puVar3);
LAB_10652e640:
  __Block_object_dispose(&uStack_80,8);
  _objc_release(in_x6);
  _objc_release(param_3);
  return;
}



/* Entry: 10652e6a0; end: 10652e6d3;  */

void FUN_10652e6a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be22e60(uVar1,param_2,param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 10652e6d4; end: 10652e6d7;  */

void FUN_10652e6d4(void)

{
  return;
}



/* Entry: 10652e6d8; end: 10652e73b; -[SCChatMainViewController isChatOpenForNotification:] */

undefined8 FUN_10652e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bef12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06e600();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10652e73c; end: 10652e74b; -[SCChatMainViewController warmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652e73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a040),PTR_s_warmup_112686168);
  return;
}



/* Entry: 10652e74c; end: 10652e787; -[SCChatMainViewController canBeShown] */

undefined8 FUN_10652e74c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2c5a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10652e788; end: 10652e797; -[SCChatMainViewController isBackgrounded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10652e788(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a060);
}



/* Entry: 10652e798; end: 10652e80b; -[SCChatMainViewController isPlayingMedia] */

ulong FUN_10652e798(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073fe0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c07a4a0();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10652e80c; end: 10652e83b; -[SCChatMainViewController allowMessageReleasing] */

void FUN_10652e80c(undefined8 param_1)

{
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652e83c; end: 10652e86b; -[SCChatMainViewController blockMessageReleasing] */

void FUN_10652e83c(undefined8 param_1)

{
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652e86c; end: 10652e8a7; -[SCChatMainViewController shouldPopToRootViewController] */

undefined8 FUN_10652e86c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c231d80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10652e8a8; end: 10652e8ab; -[SCChatMainViewController preferredStatusBarStyle] */

undefined8 FUN_10652e8a8(long param_1)

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



/* Entry: 10652e8ac; end: 10652e92f; -[SCChatMainViewController prefersStatusBarHidden] */

void FUN_10652e8ac(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_28 = PTR_PTR_1126f1ac0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_prefersStatusBarHidden_11261f658);
  }
  else {
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1070e0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10652e930; end: 10652e9c3; -[SCChatMainViewController viewWillResignActive] */

void FUN_10652e930(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82fc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0799e0();
  _objc_release(uVar1);
  func_0x00010bef12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    func_0x00010c236300();
  }
  else {
    func_0x00010c29e980();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652e9c4; end: 10652ea5f; -[SCChatMainViewController viewDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652e9c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + (long)_DAT_11274a060) = 0;
  uVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1aa0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0799e0();
  _objc_release(uVar1);
  func_0x00010bef12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    func_0x00010c138fe0();
  }
  else {
    func_0x00010c29c7e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652ea60; end: 10652eaff; -[SCChatMainViewController viewWillEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652ea60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + (long)_DAT_11274a060) = 1;
  uVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83a20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0799e0();
  _objc_release(uVar1);
  func_0x00010bef12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    func_0x00010c128600();
  }
  else {
    func_0x00010c29e8c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652eb00; end: 10652eb4b; -[SCChatMainViewController userDidTakeScreenshot] */

void FUN_10652eb00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb2640();
  if ((int)uVar1 != 0) {
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c291d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10652eb4c; end: 10652eb97; -[SCChatMainViewController userDidScreenRecord] */

void FUN_10652eb4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb2640();
  if ((int)uVar1 != 0) {
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c291d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10652eb98; end: 10652ed63; -[SCChatMainViewController _shouldAllowScreenshotOrScreenRecord] */

ulong FUN_10652eb98(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_1;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0799e0();
  if ((uVar7 & 1) == 0) {
    uVar7 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c06d1e0();
    if ((int)uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06d1a0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar2);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar7 = param_1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar1 = PTR_DAT_1126a5450;
      _objc_retain(uVar2);
      uVar6 = uVar2;
      func_0x00010010fab4(uVar2,puVar1);
      uVar7 = uVar2;
      if ((int)uVar6 == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar2);
      if (uVar7 == 0) {
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        FUN_10655092c(param_1,uVar7);
        uVar6 = (ulong)((uint)uVar6 ^ 1);
        _objc_release(uVar7);
        _objc_release(param_1);
        uVar7 = 0;
      }
      else {
        uVar6 = uVar2;
        func_0x00010c15b880(uVar2);
        uVar7 = uVar2;
      }
    }
    else {
      _objc_release(uVar6);
      uVar6 = 1;
    }
    _objc_release(uVar7);
  }
  else {
    uVar6 = 1;
  }
  _objc_release(uVar2);
  return uVar6;
}



/* Entry: 10652ed64; end: 10652edab; -[SCChatMainViewController didReceiveMemoryWarning] */

void FUN_10652ed64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didReceiveMemoryWarning_1125bbe28);
  func_0x00010bde0940(param_1);
  return;
}



/* Entry: 10652edac; end: 10652eec3; -[SCChatMainViewController _clearMemoryForInActiveVCs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10652edac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar5 = *(ulong *)(param_1 + (long)_DAT_11274a034);
  _objc_retain(uVar5);
  uVar1 = uVar5;
  func_0x00010bf52a60(uVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      uVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(undefined8 *)(lStack_118 + uVar8 * 8);
        uVar2 = param_1;
        func_0x00010c079a00(param_1,param_2,uVar6);
        if ((uVar2 & 1) == 0) {
          func_0x00010c128600(uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      uVar1 = uVar5;
      func_0x00010bf52a60(uVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf07b60();
  _objc_release(puVar3);
  return (ulong)(puVar4 == (undefined *)0x0);
}



/* Entry: 10652eec4; end: 10652ef0b; -[SCChatMainViewController _isApplicationActive] */

bool FUN_10652eec4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x0;
}



/* Entry: 10652ef0c; end: 10652ef4b; -[SCChatMainViewController viewDidAppearAtOffset:] */

void FUN_10652ef0c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29c6e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10652ef4c; end: 10652efa7; -[SCChatMainViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652ef4c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a064) = 1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29c9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652efa8; end: 10652f003; -[SCChatMainViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652efa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ca40();
  _objc_release(lVar1);
  if ((*(byte *)(param_1 + _DAT_11274a064) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewDidSwipeOut_112684d30);
  return;
}



/* Entry: 10652f004; end: 10652f043; -[SCChatMainViewController viewDidSwipeIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f004(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a064) = 1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652f044; end: 10652f0cb; -[SCChatMainViewController viewDidSwipeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f044(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_11274a064) = 0;
  lVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a05c);
  *(undefined8 *)(param_1 + _DAT_11274a05c) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    func_0x00010c29cc20(lVar1);
    func_0x00010be8de80(param_1,param_2,lVar1,0);
    func_0x00010c12efc0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11274a034));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10652f0cc; end: 10652f0df; -[SCChatMainViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a068,param_3);
  return;
}



/* Entry: 10652f0e0; end: 10652f14b; -[SCChatMainViewController setBaseDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a06c;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010bef12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f2e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652f14c; end: 10652f183; -[SCChatMainViewController setSourceNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a05c);
  *(undefined8 *)(param_1 + _DAT_11274a05c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10652f184; end: 10652f187; -[SCChatMainViewController mainChatVC] */

void FUN_10652f184(void)

{
  return;
}



/* Entry: 10652f188; end: 10652f1cf; -[SCChatMainViewController dismissStackedChatMaybe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10652f188(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11274a034);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    func_0x00010be35d60(param_1);
  }
  return 1 < uVar1;
}



/* Entry: 10652f1d0; end: 10652f1df; -[SCChatMainViewController vcIsInStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a034),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10652f1e0; end: 10652f223; -[SCChatMainViewController otherParticipantUserId] */

void FUN_10652f1e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf37360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10652f224; end: 10652f267; -[SCChatMainViewController activeConversationId] */

void FUN_10652f224(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef0700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10652f268; end: 10652f2cb; -[SCChatMainViewController getViewFrame] */

undefined8 FUN_10652f268(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10652f2cc; end: 10652f35b; -[SCChatMainViewController isPartiallyVisible:] */

long FUN_10652f2cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c0f3c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0799e0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10652f35c; end: 10652f3ab; -[SCChatMainViewController isPartiallyVisibleInStack:] */

void FUN_10652f35c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c297960();
  if ((int)uVar1 != 0) {
    func_0x00010c0f3c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0799e0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10652f3ac; end: 10652f3b3; -[SCChatMainViewController isFullyVisible:] */

void FUN_10652f3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isFullyVisible_withReason__1125faa90,param_3,0);
  return;
}



/* Entry: 10652f3b4; end: 10652f4a3; -[SCChatMainViewController isFullyVisible:withReason:] */

long FUN_10652f3b4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == param_3) {
    func_0x00010c0f3c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c074200();
  }
  else {
    if (param_4 == (undefined8 *)0x0) {
      lVar2 = 0;
      goto LAB_10652f480;
    }
    func_0x00010bef12e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e53798);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar2 = 0;
    *param_4 = puVar1;
  }
  _objc_release(param_1);
LAB_10652f480:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10652f4a4; end: 10652f52f; -[SCChatMainViewController isFrameInVisibleBounds:] */

long FUN_10652f4a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_3) {
    func_0x00010c0f3c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0799e0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10652f530; end: 10652f57f; -[SCChatMainViewController lockScrollWithRequestId:] */

void FUN_10652f530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0f3c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fde0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652f580; end: 10652f5cf; -[SCChatMainViewController unlockScrollWithRequestId:] */

void FUN_10652f580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0f3c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10652f5d0; end: 10652fa17; -[SCChatMainViewController showVC:stackType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652f5d0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  
  _objc_retain(param_4);
  lVar9 = (long)_DAT_11274a05c;
  func_0x00010c206ee0(param_4,param_3,*(undefined8 *)(param_2 + lVar9));
  uVar3 = *(undefined8 *)(param_2 + lVar9);
  *(undefined8 *)(param_2 + lVar9) = 0;
  _objc_release(uVar3);
  uVar4 = param_2;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11274a038;
    func_0x00010befbb60();
    _objc_release(uVar5);
    uVar3 = *(undefined8 *)(param_2 + lVar9);
    puStack_a8 = puVar1;
    param_1 = 0xc2000000;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10652fa18;
    puStack_90 = &UNK_1108471b0;
    _objc_retain(uVar4);
    uStack_88 = uVar4;
    func_0x00010c0bbfc0(uVar3,param_3,&puStack_a8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uStack_88);
  }
  func_0x00010c1090e0(param_2,param_3,param_4);
  uVar5 = param_2;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf4b900();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    func_0x00010bef76c0(param_2,param_3,param_4);
  }
  uVar5 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(uVar5,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar3 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  func_0x00010c10a0c0(param_4);
  uVar3 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  uVar7 = param_4;
  uVar10 = param_1;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  uVar8 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = 0.0;
  uVar13 = 0;
  func_0x00010c19f0e0(0,0,param_1,uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  lVar9 = (long)_DAT_11274a070;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + lVar9);
  *(undefined8 *)(param_2 + lVar9) = param_4;
  _objc_release(uVar3);
  uVar5 = param_2;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0741e0();
  _objc_release(uVar5);
  if ((int)uVar6 == 0) {
    func_0x00010c1a5220(param_4,param_3,param_5 == 0 && uVar4 != 0);
    func_0x00010bebf260(param_2,param_3,param_4,0,param_5);
  }
  else {
    uVar5 = param_2;
    func_0x00010c29bf00();
    iVar2 = (int)uVar5;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release();
    func_0x000106531490();
    dVar12 = dVar11;
    _CGRectGetWidth(dVar11,uVar13,param_1,uVar10);
    dVar14 = -dVar12;
    if (iVar2 == 0) {
      dVar14 = dVar12;
    }
    func_0x00010bc851d4(dVar11,uVar13,param_1,uVar10,dVar14);
    uVar3 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar11,uVar13,param_1,uVar10);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bfdef60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174b40(0);
    _objc_release(uVar3);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10652fab4;
    puStack_c8 = &UNK_110848ba8;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    uStack_b8 = param_2;
    _objc_retain(uVar4);
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10652fba8;
    puStack_108 = &UNK_11084d788;
    uStack_100 = param_2;
    uStack_b0 = uVar4;
    _objc_retain(param_4);
    uStack_f8 = param_4;
    _objc_retain(uVar4);
    uStack_f0 = uVar4;
    lStack_e8 = param_5;
    func_0x00010bdca7c0(param_2,param_3,&puStack_e0,&puStack_120);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_b0);
    _objc_release(uStack_c0);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 10652fa18; end: 10652fab3;  */

void FUN_10652fa18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c267cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10652fab4; end: 10652fba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652fab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3fdcccccc0000000,
                      *(undefined8 *)(*(long *)(param_5 + 0x28) + (long)_DAT_11274a038));
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10652fba8; end: 10652fc53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652fba8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a070) != lVar1) {
    return;
  }
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b40(0x3ff0000000000000);
  _objc_release(lVar1);
  func_0x00010c172a80(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bebf260(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),1,
                      *(undefined8 *)(param_1 + 0x38));
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10652fc54; end: 10652fda3; -[SCChatMainViewController _stackVC:handleLifeCycle:stackType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652fc54(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274a034;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf51e00();
  func_0x00010c066b00(*(undefined8 *)(param_1 + lVar5),param_2,param_3,0);
  uVar3 = param_3;
  func_0x00010bfdef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0x3ff0000000000000);
  _objc_release(uVar3);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    if (param_5 == 1) {
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2a840(param_1,param_2,lVar2,1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c12efc0(param_1,param_2,lVar1);
    }
  }
  if (param_4 != 0) {
    func_0x00010c29c9a0(param_3,param_2,0,0);
    func_0x00010c29cbe0(param_3);
    func_0x00010c29c6e0(0,param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a070);
  *(undefined8 *)(param_1 + _DAT_11274a070) = 0;
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (1 < uVar4) {
    func_0x00010c09fde0(param_1,param_2,&PTR____CFConstantStringClassReference_110e53778);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10652fda4; end: 10652fec7; -[SCChatMainViewController removeVCsFromView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652fda4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if ((param_3 != (undefined1 *)0x0) &&
     (puVar1 = param_3, func_0x00010bf529e0(), puVar1 != (undefined1 *)0x0)) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010bf51e00();
    param_4 = (int)auStack_d8;
    puVar1 = puVar2;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(puVar2);
          }
          func_0x00010be8de80(param_1,param_2,*(undefined8 *)(lStack_118 + (long)puVar6 * 8),1);
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        param_4 = (int)auStack_d8;
        puVar1 = puVar2;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if (puVar2 == *(undefined1 **)(param_3 + _DAT_11274a070)) {
    *(undefined8 *)(param_3 + _DAT_11274a070) = 0;
    _objc_release();
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_3 + _DAT_11274a034),param_2,puVar2);
    if (param_4 != 0) {
      func_0x00010be2a840(param_3,param_2,puVar2,0);
    }
  }
  func_0x00010c29cbc0(puVar2);
  puVar1 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar1);
  func_0x00010bf96220(*(undefined8 *)(param_3 + _DAT_11274a040),param_2,puVar2);
  uVar3 = *(ulong *)(param_3 + _DAT_11274a034);
  func_0x00010bf529e0();
  if (uVar3 < 2) {
    func_0x00010c280da0(param_3,param_2,&PTR____CFConstantStringClassReference_110e53778);
  }
  func_0x00010c12c960(*(undefined8 *)(param_3 + _DAT_11274a038));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10652fec8; end: 10652ffbf; -[SCChatMainViewController _removeVC:handleLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652fec8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_11274a070)) {
    *(undefined8 *)(param_1 + _DAT_11274a070) = 0;
    _objc_release();
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_11274a034),param_2,param_3);
    if (param_4 != 0) {
      func_0x00010be2a840(param_1,param_2,param_3,0);
    }
  }
  func_0x00010c29cbc0(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  func_0x00010bf96220(*(undefined8 *)(param_1 + _DAT_11274a040),param_2,param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_11274a034);
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    func_0x00010c280da0(param_1,param_2,&PTR____CFConstantStringClassReference_110e53778);
  }
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11274a038));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10652ffc0; end: 106530037; -[SCChatMainViewController _handleHidingLifeCycle:isFromStack:] */

void FUN_10652ffc0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c29c6e0(-param_1,param_4);
  _objc_release(uVar1);
  func_0x00010c29ca40(param_4,param_3,param_5);
  func_0x00010c29cc20(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106530038; end: 106530197; -[SCChatMainViewController _stackedVCForChatIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106530038(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + _DAT_11274a034);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        puVar9 = *(undefined1 **)(lStack_128 + lVar11 * 8);
        puVar8 = puVar9;
        func_0x00010bef05e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        puVar3 = (undefined8 *)puVar8;
        func_0x00010c071ae0();
        _objc_release(puVar8);
        if ((uVar2 & 1) != 0) {
          _objc_retain(puVar9);
          goto LAB_106530148;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar9 = (undefined1 *)0x0;
LAB_106530148:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return (undefined8 *)puVar9;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar7 = *(long *)(param_3 + (long)_DAT_11274a034);
  func_0x00010bf51e00();
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_240;
    do {
      lVar11 = 0;
      do {
        if (*plStack_240 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        if ((undefined8 *)*(undefined1 **)(lStack_248 + lVar11 * 8) == puVar3) goto LAB_106530270;
        func_0x00010be35d60(param_3);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106530270:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar8 = (undefined1 *)((long)puVar3 + (long)_DAT_11274a074);
  _objc_loadWeakRetained();
  puVar9 = puVar8;
  func_0x00010c0741e0();
  _objc_release(puVar8);
  if ((int)puVar9 == 0) {
    puVar8 = (undefined1 *)0x0;
    goto LAB_1065303d4;
  }
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined8 *)0x0) {
LAB_1065303c8:
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar8 = (undefined1 *)puVar3;
    func_0x00010bf5ee80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x000108ef3b18();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = puVar8;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108ef3c74();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      if (puVar5 == (undefined1 *)0x0) goto LAB_1065303c8;
    }
    else {
      _objc_release();
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    puVar8 = (undefined1 *)0x1;
  }
  _objc_release(puVar3);
LAB_1065303d4:
  _objc_release(puVar6);
  return (undefined8 *)puVar8;
}



/* Entry: 106530198; end: 1065302b7; -[SCChatMainViewController _clearStackForVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106530198(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + _DAT_11274a034);
  func_0x00010bf51e00();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        if (*(long *)(lStack_118 + lVar5 * 8) == param_3) goto LAB_106530270;
        func_0x00010be35d60(param_1);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar1;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_106530270:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  lVar3 = param_3 + _DAT_11274a074;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c0741e0();
  _objc_release(lVar3);
  if ((int)lVar1 == 0) {
    lVar3 = 0;
    goto LAB_1065303d4;
  }
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
LAB_1065303c8:
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf5ee80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000108ef3b18();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar4 = lVar3;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000108ef3c74();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar3);
      if (lVar5 == 0) goto LAB_1065303c8;
    }
    else {
      _objc_release();
      _objc_release(lVar1);
      _objc_release(lVar3);
    }
    lVar3 = 1;
  }
  _objc_release(param_3);
LAB_1065303d4:
  _objc_release(puVar2);
  return lVar3;
}



/* Entry: 1065302b8; end: 1065303f3; -[SCChatMainViewController _getStackTypeForRecipient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065302b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11274a074;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0741e0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar5 = 0;
    goto LAB_1065303d4;
  }
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
LAB_1065303c8:
    uVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf5ee80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108ef3b18();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar3 = lVar1;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000108ef3c74();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 == 0) goto LAB_1065303c8;
    }
    else {
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    uVar5 = 1;
  }
  _objc_release(param_1);
LAB_1065303d4:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1065303f4; end: 10653046b; -[SCChatMainViewController activeVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065303f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a034;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_11274a070);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010c0dfd40(lVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10653046c; end: 106530867; -[SCChatMainViewController _panGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653046c(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  double *pdVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
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
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  lVar5 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_6,param_5,lVar5);
  dVar13 = param_1;
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_6,param_5,lVar5);
  dVar11 = dVar13;
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bef12e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(lVar6);
  _objc_release(lVar5);
  dVar10 = 1.0;
  if (ABS(param_1 / dVar11) <= 1.0) {
    dVar10 = ABS(param_1 / dVar11);
  }
  dVar12 = 0.44999998807907104;
  dVar11 = 0.44999998807907104 - dVar10 * 0.44999998807907104;
  func_0x00010c1677c0(*(undefined8 *)(param_4 + _DAT_11274a038));
  lVar5 = param_4;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + _DAT_11274a034);
  func_0x00010c0dfd40(uVar7,param_5,1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6;
  func_0x00010c252440();
  if (lVar6 == 1) {
    pdVar1 = (double *)(param_4 + _DAT_11274a078);
    func_0x00010bef12e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    *pdVar1 = dVar11;
    pdVar1[1] = dVar12;
    _objc_release(lVar6);
    _objc_release(param_4);
    lVar6 = lVar5;
    func_0x00010bfdef60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174b40(0);
    _objc_release(lVar6);
    func_0x00010c172a80(0,uVar7);
    goto LAB_106530830;
  }
  lVar6 = param_6;
  func_0x00010c252440();
  if (lVar6 == 2) {
    lVar9 = (long)_DAT_11274a078;
    dVar13 = param_1 + *(double *)(param_4 + lVar9);
    lVar6 = param_4;
    func_0x00010c29bf00();
    iVar4 = (int)lVar6;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release();
    func_0x000106531490();
    dVar11 = *(double *)(param_4 + lVar9);
    if (iVar4 == 0) {
      if (dVar13 < dVar11) goto LAB_1065306e4;
    }
    else if (dVar11 < dVar13) {
LAB_1065306e4:
      dVar13 = dVar11;
    }
    func_0x00010bedcb80(dVar13,param_4);
    uVar8 = uVar7;
    func_0x00010bfdef60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7760(-param_1 / param_3);
    _objc_release(uVar8);
    lVar6 = lVar5;
    func_0x00010bfdef60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7760(1.0 - -param_1 / param_3);
    _objc_release(lVar6);
    lVar6 = lVar5;
    func_0x00010bfdef60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bfdef60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdf520();
    func_0x00010bc851d4();
    func_0x00010c1a7820(lVar6);
    _objc_release(lVar9);
  }
  else {
    lVar6 = param_6;
    func_0x00010c252440();
    if ((lVar6 != 3) && (lVar6 = param_6, func_0x00010c252440(), lVar6 != 4)) goto LAB_106530830;
    iVar4 = (int)lVar6;
    func_0x000106531490();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    bVar2 = dVar13 != 0.0 && dVar13 >= 0.0;
    if (iVar4 == 0) {
      bVar2 = dVar13 < 0.0;
    }
    if ((ABS(param_2) <= ABS(dVar13)) && (!bVar2)) {
      func_0x00010be35d60(param_4);
      goto LAB_106530830;
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106530868;
    puStack_80 = &UNK_110848ba8;
    lStack_78 = param_4;
    _objc_retain(lVar5);
    lStack_70 = lVar5;
    _objc_retain(uVar7);
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106530970;
    puStack_b0 = &UNK_110841f80;
    lStack_a8 = param_4;
    uStack_68 = uVar7;
    _objc_retain(uVar7);
    uStack_a0 = uVar7;
    func_0x00010bdca7c0(param_4,param_5,&puStack_98,&puStack_c8);
    _objc_release(uStack_a0);
    _objc_release(uStack_68);
    lVar6 = lStack_70;
  }
  _objc_release(lVar6);
LAB_106530830:
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(param_6);
  return;
}



/* Entry: 106530868; end: 10653096f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bedcb80(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a078));
  func_0x00010c1677c0(0x3fdcccccc0000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a038));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdef60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf520();
  func_0x00010bc851d4();
  func_0x00010c1a7820(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b40(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106530970; end: 106530997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530970(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a078);
  puVar1[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010c172a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28),PTR_s_setBlueOverlayAlpha__11263a4c0
            );
  return;
}



/* Entry: 106530998; end: 106530a2f; -[SCChatMainViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106530998(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11274a034);
  func_0x00010bf529e0();
  if ((uVar1 < 2) || (param_3 != *(long *)(param_1 + _DAT_11274a03c))) {
    lVar2 = 0;
  }
  else {
    func_0x00010c0f3c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0799e0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 106530a30; end: 106530b3f; -[SCChatMainViewController _updatePanningVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530a30(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_2 + _DAT_11274a078 + 8);
  lVar1 = param_2;
  uVar6 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  lVar3 = param_2;
  uVar7 = uVar6;
  func_0x00010bef12e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  func_0x00010bef12e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,uVar8,uVar6,uVar7);
  _objc_release(lVar5);
  _objc_release(param_2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106530b40; end: 106530d5b; -[SCChatMainViewController _hideStackedActiveView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530b40(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  lVar6 = (long)_DAT_11274a034;
  uVar2 = *(ulong *)(param_2 + lVar6);
  func_0x00010bf529e0();
  if (1 < uVar2) {
    func_0x000106531490();
    lVar3 = param_2;
    if ((uVar2 & 1) == 0) {
      func_0x00010bef12e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
    }
    else {
      dVar7 = *(double *)(param_2 + _DAT_11274a078);
      func_0x00010bef12e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      param_1 = dVar7 - param_1;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c195460(*(undefined8 *)(param_2 + _DAT_11274a03c),param_3,0);
    lVar3 = param_2;
    func_0x00010bef12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c0dfd40(uVar5,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bfdef60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174b40(0);
    _objc_release(lVar6);
    lVar6 = lVar3;
    func_0x00010bfdef60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7760(0);
    _objc_release(lVar6);
    func_0x00010c172a80(0,uVar5);
    func_0x00010c13d3e0(uVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106530d5c;
    puStack_60 = &UNK_110844b80;
    lStack_58 = param_2;
    dStack_48 = param_1;
    _objc_retain(uVar5);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106530dbc;
    puStack_98 = &UNK_110848ba8;
    lStack_90 = lVar3;
    lStack_88 = param_2;
    uStack_80 = uVar5;
    uStack_50 = uVar5;
    _objc_retain(uVar5);
    _objc_retain(lVar3);
    func_0x00010bdca7c0(param_2,param_3,&puStack_78,&puStack_b0);
    _objc_release(uStack_80);
    _objc_release(lStack_90);
    _objc_release(uStack_50);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 106530d5c; end: 106530dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530d5c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bedcb80(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a038),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106530dbc; end: 106530eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530dbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != lVar3) {
    return;
  }
  func_0x00010c195460(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274a03c),param_2,1);
  func_0x00010be8de80(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010c29c9a0(*(undefined8 *)(param_1 + 0x30),param_2,1,0);
  func_0x00010c29cbe0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c29c6e0(0,*(undefined8 *)(param_1 + 0x30));
  uVar5 = *(undefined8 *)PTR__CGPointZero_110347540;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274a078);
  puVar2[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *puVar2 = uVar5;
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b40(0x3ff0000000000000);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7760(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106530eec; end: 106530ff3; -[SCChatMainViewController _animate:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106530eec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c12aaa0(param_1);
  lVar2 = *(long *)(param_1 + _DAT_11274a034);
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar2 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
    _objc_release(param_3);
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106530ff4;
    puStack_40 = &UNK_110842508;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010bf03460(0x3fd6666666666666,0,0x3fec28f5c28f5c29,0,puVar1,param_2,6,param_3,
                        &puStack_58);
    _objc_release(param_3);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106530ff4; end: 106531007;  */

void FUN_106530ff4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106531000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106531008; end: 1065310db; -[SCChatMainViewController removeAllAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531008(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a038);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274a070);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1065310dc; end: 10653116b; -[SCChatMainViewController prepareChatVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065310dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a068;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c18b5e0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11274a06c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c16f2e0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c209080(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10653116c; end: 10653116f; -[SCChatMainViewController willStartCensoringScreenshot] */

void FUN_10653116c(void)

{
  return;
}



/* Entry: 106531170; end: 106531173; -[SCChatMainViewController willEndCensoringScreenshot] */

void FUN_106531170(void)

{
  return;
}



/* Entry: 106531174; end: 1065311b7; -[SCChatMainViewController defaultProjectNameV2] */

void FUN_106531174(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf69fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065311b8; end: 10653123f; -[SCChatMainViewController defaultSubProjectName] */

void FUN_1065311b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf6a5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106531240; end: 1065312c7; -[SCChatMainViewController jiraMetaInfo] */

void FUN_106531240(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bef12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c085480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065312c8; end: 106531303; -[SCChatMainViewController hasUnreadMessages] */

undefined8 FUN_1065312c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfddd60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106531304; end: 106531307; -[SCChatMainViewController childViewControllerForCustomStatusBarStyleContext] */

void FUN_106531304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef12f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activeVC_112599e60);
  return;
}



/* Entry: 106531308; end: 106531327; -[SCChatMainViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531308(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106531328; end: 106531347; -[SCChatMainViewController baseDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531328(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a06c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106531348; end: 106531367; -[SCChatMainViewController parentDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531348(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106531368; end: 10653137b; -[SCChatMainViewController setParentDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531368(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a074,param_3);
  return;
}



/* Entry: 10653137c; end: 1065314d7; -[SCChatMainViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653137c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274a074);
  _objc_destroyWeak(param_1 + _DAT_11274a06c);
  _objc_destroyWeak(param_1 + _DAT_11274a068);
  _objc_storeStrong(param_1 + _DAT_11274a054,0);
  _objc_storeStrong(param_1 + _DAT_11274a058,0);
  _objc_storeStrong(param_1 + _DAT_11274a04c,0);
  _objc_storeStrong(param_1 + _DAT_11274a048,0);
  _objc_storeStrong(param_1 + _DAT_11274a044,0);
  _objc_storeStrong(param_1 + _DAT_11274a050,0);
  _objc_storeStrong(param_1 + _DAT_11274a038,0);
  _objc_storeStrong(param_1 + _DAT_11274a03c,0);
  _objc_storeStrong(param_1 + _DAT_11274a07c,0);
  _objc_storeStrong(param_1 + _DAT_11274a05c,0);
  _objc_storeStrong(param_1 + _DAT_11274a040,0);
  _objc_storeStrong(param_1 + _DAT_11274a070,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a034,0);
  return;
}



/* Entry: 1065314d8; end: 1065314eb; -[SCChatViewControllerV3 pageViewName] */

void FUN_1065314d8(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pageViewName_11261a2a0);
  return;
}



/* Entry: 1065314ec; end: 1065314f3; +[SCChatViewControllerV3 pageViewName] */

undefined8 FUN_1065314ec(void)

{
  return 0x27;
}



/* Entry: 1065314f4; end: 1065314ff; -[SCChatViewControllerV3 getPageName] */

undefined ** FUN_1065314f4(void)

{
  return &PTR____CFConstantStringClassReference_110e53838;
}



/* Entry: 106531500; end: 106531593; -[SCChatViewControllerV3 presentUnifiedProfileForSnapchatter:addSourceType:completion:sourcePage:] */

void FUN_106531500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7f1e0(param_1,param_2,param_3,uVar1,param_4,param_5,param_6,0);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106531594; end: 10653183f; -[SCChatViewControllerV3 _presentUnifiedProfileForSnapchatter:userId:addSourceType:completion:sourcePage:friendshipFlashbackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531594(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar4 = param_1;
  func_0x00010c10fce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c06d1a0();
  lVar1 = param_1;
  if ((int)lVar6 == 0) {
    func_0x00010c10fce0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
  }
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  if (param_8 == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_8);
    uVar3 = *(ulong *)(param_1 + _DAT_11274a098);
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f440();
    _objc_release(uVar3);
    uVar5 = uVar5 & 0xffffffff;
  }
  puVar7 = PTR_PTR_1126b3fa0;
  if (param_3 == 0) {
    _objc_alloc();
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0x2f;
    uStack_e0 = 0;
    uStack_108 = param_7;
    uStack_f8 = param_5;
    uStack_d8 = uVar5;
    _objc_retain(param_8);
    uStack_c8 = 0;
    uStack_c0 = 0;
    lStack_d0 = param_8;
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c015a00(puVar7,param_2,&uStack_108,puVar2,param_4,param_1);
      goto LAB_106531778;
    }
  }
  else {
    _objc_alloc();
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0x2f;
    uStack_90 = 0;
    uStack_b8 = param_7;
    uStack_a8 = param_5;
    uStack_88 = uVar5;
    _objc_retain(param_8);
    uStack_78 = 0;
    uStack_70 = 0;
    lStack_80 = param_8;
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c0159e0(puVar7,param_2,&uStack_b8,puVar2,param_3,param_1);
      goto LAB_106531778;
    }
  }
  _objc_release(param_8);
  puVar7 = (undefined *)0x0;
LAB_106531778:
  lVar6 = (long)_DAT_11274a09c;
  lVar4 = *(long *)(param_1 + lVar6);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6),param_2,puVar7);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(puVar7);
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106531840; end: 1065318b3; -[SCChatViewControllerV3 setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106531840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0a0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0a4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ba60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065318b4; end: 1065341a3; -[SCChatViewControllerV3 initWithUserSession:usernameProvider:parentDelegate:groupsDataTracker:groupsDataCreator:groupsDataMutator:groupsDataFetcher:groupSnapchatterRepository:groupsCustomColorsFetcher:snapchatterServices:conversationManager:internalConversationServices:conversationDataFetcher:conversationUpdatesPublisher:myStoriesDataCoordinator:currentPageTracker:legacyChatTooltipService:soundEffects:chatMediaFetchingServices:loadMessageLogger:chatDisplayReadyLogger:convoLiveActivityManager:grapheneRegistry:blizzardLogger:customStatusBarStyleContextController:typingNotificationSender:pluginManager:accessoryPluginManager:inputPlugins:conversationUpdater:polaroidTooltipManager:feedPropertyLogger:friendsFeedDataCoordinator:circumstanceEngine:uberAvatarScopeServices:uberAvatarScopeExposer:storiesReplayManager:valdiRuntimeProvider:composerAnimatedImageViewFactory:cancelMenuActionSheetScopeServices:cancelMenuActionSheetScopeExposer:deepLinkHandling:webBrowserDeepLinkHandler:arroyoChatLogger:reactionsDetailScopeExposer:chatReplyScopeExposer:chatReplyComposeScopeServices:talkServices:talkUIScopeServices:talkUIScopeExposer:spotlightChatHeaderButtonScopeServices:downloaderServices:notificationPool:chatThreatsScanner:friendmojiFilteredContainer:friendProfileScopeExposer:groupProfileScopeExposer:chatContentDelivery:blockedExceptionAlertScopeExposer:blockedExceptionAlertScopeServices:chatCameraScopeExposer:chatCameraScopeServices:messagingExperimentService:sponsoredSnapAdResponseParser:postSnapProvider:navigationDelegate:contentDelivery:bitmojiAvatarBuilderScopeExposer:featureSettingsService:snapTokenProvider:snapchatterUserInfoProvider:userTraceLogger:settingsScopeLauncher:eraseMessageScopeExposer:snapReplayScopeExposer:messagingPlaybackScopeExposer:chatLockedConversationAlertScopeExposer:chatLockedConversationAlertScopeBuilderServices:merlinOnboardingScopeExposer:merlinBioPageScopeFactoryServices:nativeSessionManager:chatTooltipsService:merlinOnboardingStatusManager:streakRestorePurchaseScopeFactoryServices:memoriesExperimentService:lifecycleLogger:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:chatAttachmentHandlerScopeExposer:notificationPermissionUpdateEvents:chatActionMenuScopeExposer:chatActionMenuScopeServices:quotedMessageSubject:audioNotePlayer:networkConnectivityMonitor:application:chatMessageDisplayStateLogger:chatPageStoryPlayer:startupInfoService:mapUpsellRequestService:shareLocationFlowFactoryServices:nativePostSnapInteractionEvents:keepSnapsInChatUpsellScopeExposer:keepSnapsInChatUpsellScopeServices:adResponseProvider:adConfigProviderV2:nglStudySettings:preferences:backgroundPerformer:sponsoredSnapConversationSeqNumProvider:streakMilestoneFriendProfileScopeExposer:bitmojiFriendProfileSharingScopeServices:mapExternalUrlServices:pageLauncher:saturnUpsellTrayScopeExposer:saturnExperimentProvider:saturnSocialContextProvider:applicationStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1065318b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined **param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002f8);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000310);
  _objc_retain(in_stack_00000318);
  _objc_retain(in_stack_00000320);
  _objc_retain(in_stack_00000328);
  _objc_retain(in_stack_00000330);
  _objc_retain(in_stack_00000338);
  _objc_retain(in_stack_00000340);
  _objc_retain(in_stack_00000348);
  _objc_retain(in_stack_00000350);
  _objc_retain(in_stack_00000358);
  _objc_retain(in_stack_00000360);
  _objc_retain(in_stack_00000368);
  _objc_retain(in_stack_00000370);
  _objc_retain(in_stack_00000378);
  _objc_retain(in_stack_00000380);
  puStack_a8 = PTR_PTR_1126f1ac8;
  puVar17 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar17,PTR_s_init_1125d9248);
  ppuVar15 = param_18;
  if (puVar17 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar17);
    func_0x00010c1931e0(puVar17);
    func_0x00010c21f2c0(puVar17);
    lVar14 = (long)_DAT_11274a0a8;
    _objc_retain(in_stack_000002d0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002d0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0ac;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_4;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0b0;
    _objc_retain(param_65);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_65;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0b4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_7;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0b8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_9;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0bc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_8;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0c0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_10;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0c4);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0c4) = uVar2;
    _objc_release(uVar12);
    uVar2 = param_12;
    func_0x00010c244b40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_11274a0c8;
    uVar12 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = uVar2;
    _objc_release(uVar12);
    uVar2 = param_12;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0cc);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0cc) = uVar2;
    _objc_release(uVar12);
    uVar2 = param_12;
    func_0x00010c2947e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0d0);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0d0) = uVar2;
    _objc_release(uVar12);
    uVar2 = param_12;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0d4);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0d4) = uVar2;
    _objc_release(uVar12);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf1d760();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0d8);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0d8) = uVar2;
    _objc_release(uVar12);
    uVar2 = param_12;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0dc);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a0dc) = uVar2;
    _objc_release(uVar12);
    lVar14 = (long)_DAT_11274a0e0;
    _objc_retain(in_stack_00000200);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000200;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0e4;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_13;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0e8;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_14;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0ec;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_15;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0f0;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_16;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0f4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_17;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0f8;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined ***)((long)puVar17 + lVar14) = param_18;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a0fc;
    _objc_retain(param_50);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_50;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a100;
    _objc_retain(param_51);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_51;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a104;
    _objc_retain(param_52);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_52;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a108;
    _objc_retain(param_53);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_53;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a10c;
    _objc_retain(param_54);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_54;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a110;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_19;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a114;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_20;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a118;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_21;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a11c;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_22;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a120;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_23;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a124;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = param_24;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_11274a128;
    _objc_retain(in_stack_00000208);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined8 *)((long)puVar17 + lVar16) = in_stack_00000208;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    func_0x00010bf28300();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a12c);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a12c) = uVar2;
    _objc_release(uVar12);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    func_0x00010c10adc0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a130);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a130) = uVar2;
    _objc_release(uVar12);
    lVar14 = (long)_DAT_11274a134;
    _objc_retain(in_stack_00000358);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000358;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a138);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a138) = puVar4;
    _objc_release(uVar2);
    func_0x00010c171b20(puVar17);
    func_0x00010c1a4380(puVar17);
    _objc_storeWeak((long)puVar17 + (long)_DAT_11274a13c,param_27);
    lVar14 = (long)_DAT_11274a140;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_31;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a144;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_32;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    func_0x00010c1ea360(puVar17);
    _objc_release(puVar4);
    puVar3 = puVar17;
    func_0x00010c12a600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6100;
    _objc_alloc();
    func_0x00010c030580();
    func_0x00010c0d9840(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    lVar14 = (long)_DAT_11274a148;
    _objc_retain(param_55);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_55;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar17 + (long)_DAT_11274a14c,param_68);
    lVar14 = (long)_DAT_11274a150;
    _objc_retain(param_67);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_67;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a154;
    _objc_retain(in_stack_00000228);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000228;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a158;
    _objc_retain(in_stack_00000230);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000230;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a15c;
    _objc_retain(in_stack_00000238);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000238;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a160;
    _objc_retain(in_stack_00000240);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000240;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a164;
    _objc_retain(in_stack_00000260);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000260;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a168;
    _objc_retain(in_stack_00000248);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000248;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a16c;
    _objc_retain(in_stack_00000348);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000348;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a170;
    _objc_retain(in_stack_00000350);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000350;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a09c;
    _objc_retain(param_58);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_58;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a174;
    _objc_retain(param_59);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_59;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a178;
    _objc_retain(param_57);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_57;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cb618;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a17c);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a17c) = puVar4;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a180;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_34;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a184;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_35;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a098;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_36;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a188);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a188) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a18c);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a18c) = puVar4;
    _objc_release(uVar2);
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if (iVar1 != 0) {
      puVar4 = PTR_PTR_1126ae820;
      _objc_alloc();
      func_0x00010c060400();
      uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a190);
      *(undefined **)((long)puVar17 + (long)_DAT_11274a190) = puVar4;
      _objc_release(uVar2);
    }
    lVar14 = (long)_DAT_11274a194;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_37;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a198;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_38;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a19c;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_39;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1a0;
    _objc_retain(in_stack_000002f0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002f0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1a4;
    _objc_retain(in_stack_000002f8);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002f8;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1a8;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_46;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1ac;
    _objc_retain(param_60);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_60;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1b0);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a1b0) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1b4);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a1b4) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1b8);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a1b8) = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar17 + (long)_DAT_11274a1bc) = 1;
    lVar14 = (long)_DAT_11274a1c0;
    _objc_retain(in_stack_000002b8);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002b8;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1c4);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a1c4) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cb620;
    _objc_alloc();
    puVar3 = puVar17;
    func_0x00010c12a600(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04aa60();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1c8);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a1c8) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010c181d80(puVar17);
    func_0x00010c205900(puVar17);
    lVar14 = (long)_DAT_11274a1cc;
    _objc_retain(in_stack_00000268);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000268;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b8,puVar17);
    lVar14 = (long)_DAT_11274a1d0;
    _objc_retain(in_stack_00000250);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000250;
    _objc_release(uVar2);
    uVar2 = in_stack_00000280;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1d4);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1d4) = uVar2;
    _objc_release(uVar12);
    uVar2 = in_stack_00000280;
    func_0x00010bfa2520();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1d8);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1d8) = uVar2;
    _objc_release(uVar12);
    lVar14 = (long)_DAT_11274a1dc;
    _objc_retain(in_stack_00000288);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000288;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1e0;
    _objc_retain(in_stack_00000290);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000290;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1e4;
    _objc_retain(in_stack_000002d8);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002d8;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1e8;
    _objc_retain(in_stack_00000298);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000298;
    _objc_release(uVar2);
    _objc_initWeak(auStack_c0,puVar17);
    puVar5 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1065341a4;
    puStack_d8 = &UNK_110929fc0;
    _objc_copyWeak(auStack_c8,auStack_c0);
    _objc_retain(param_14);
    uStack_d0 = param_14;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae720;
    puStack_148 = puVar4;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_106534278;
    puStack_130 = &UNK_110929ff0;
    _objc_copyWeak(auStack_f8,auStack_c0);
    _objc_retain(param_13);
    uStack_128 = param_13;
    _objc_retain(in_stack_00000228);
    uStack_120 = in_stack_00000228;
    _objc_retain(param_14);
    uStack_118 = param_14;
    _objc_retain(param_22);
    uStack_110 = param_22;
    _objc_retain(in_stack_00000288);
    uStack_108 = in_stack_00000288;
    _objc_retain(in_stack_00000290);
    uStack_100 = in_stack_00000290;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_11274a1f4;
    _objc_retain(param_61);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_61;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1f8;
    _objc_retain(param_62);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_62;
    _objc_release(uVar2);
    func_0x00010c1d90e0(puVar17);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a1fc);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a1fc) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_180 = puVar4;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_106534398;
    puStack_168 = &UNK_11092a020;
    _objc_copyWeak(auStack_150,auStack_c0);
    _objc_retain(param_12);
    uStack_160 = param_12;
    _objc_retain(param_58);
    uStack_158 = param_58;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ae720;
    puStack_1b0 = puVar4;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x1065344a0;
    puStack_198 = &UNK_11092a050;
    _objc_copyWeak(auStack_188,auStack_c0);
    _objc_retain(param_58);
    uStack_190 = param_58;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126cb648;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar5;
    puStack_98 = puVar6;
    puStack_90 = puVar7;
    puStack_88 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0760();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a200);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a200) = puVar9;
    _objc_release(uVar2);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126ae720;
    puStack_1e0 = puVar4;
    uStack_1d8 = 0xc2000000;
    pcStack_1d0 = FUN_106534584;
    puStack_1c8 = &UNK_11092a080;
    _objc_copyWeak(auStack_1b8,auStack_b8);
    _objc_retain(param_28);
    uStack_1c0 = param_28;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a204);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a204) = puVar10;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c23fa40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a208);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a208) = uVar2;
    _objc_release(uVar12);
    puVar10 = PTR_PTR_1126cb658;
    _objc_alloc();
    uVar12 = param_25;
    func_0x00010c269d40(param_25);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0183e0();
    uVar13 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a20c);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a20c) = puVar10;
    _objc_release(uVar13);
    _objc_release(uVar2);
    _objc_release(uVar12);
    lVar14 = (long)_DAT_11274a0a4;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_29;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a210;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_30;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a214;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_33;
    _objc_release(uVar2);
    puVar10 = PTR_PTR_1126aeaf8;
    _objc_alloc();
    puStack_208 = puVar4;
    uStack_200 = 0xc2000000;
    uStack_1f8 = 0x106534610;
    puStack_1f0 = &UNK_110849680;
    _objc_copyWeak(auStack_1e8,auStack_b8);
    puStack_230 = puVar4;
    uStack_228 = 0xc2000000;
    uStack_220 = 0x1065346a0;
    puStack_218 = &UNK_11084d688;
    _objc_copyWeak(auStack_210,auStack_b8);
    func_0x00010c0311a0();
    func_0x00010c175740(puVar17);
    _objc_release(puVar10);
    puVar3 = puVar17;
    func_0x00010be44040();
    if ((int)puVar3 != 0) {
      puVar10 = PTR_PTR_1126aeaf8;
      _objc_alloc(PTR_PTR_1126aeaf8);
      puStack_258 = puVar4;
      uStack_250 = 0xc2000000;
      uStack_248 = 0x10653471c;
      puStack_240 = &UNK_110849680;
      _objc_copyWeak(auStack_238,auStack_b8);
      puStack_280 = puVar4;
      uStack_278 = 0xc2000000;
      uStack_270 = 0x1065347ac;
      puStack_268 = &UNK_11084d688;
      _objc_copyWeak(auStack_260,auStack_b8);
      func_0x00010c0311a0(puVar10);
      func_0x00010c208780(puVar17);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_260);
      _objc_destroyWeak(auStack_238);
    }
    puVar10 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_2a8 = puVar4;
    uStack_2a0 = 0xc2000000;
    pcStack_298 = FUN_106534828;
    puStack_290 = &UNK_110849680;
    _objc_copyWeak(auStack_288,auStack_b8);
    puStack_2d0 = puVar4;
    uStack_2c8 = 0xc2000000;
    pcStack_2c0 = FUN_106534ae8;
    puStack_2b8 = &UNK_11084d688;
    _objc_copyWeak(auStack_2b0,auStack_b8);
    func_0x00010c0311a0(puVar10);
    func_0x00010c1e0c80(puVar17);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a21c);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a21c) = puVar10;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a220;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_40;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a224;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_41;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a228;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_44;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a22c;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_47;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a230;
    _objc_retain(param_48);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_48;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a234;
    _objc_retain(param_49);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_49;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a238;
    _objc_retain(param_70);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_70;
    _objc_release(uVar2);
    puVar10 = PTR_PTR_1126ae720;
    puStack_300 = puVar4;
    uStack_2f8 = 0xc2000000;
    pcStack_2f0 = FUN_106534b60;
    puStack_2e8 = &UNK_11092a0b0;
    _objc_copyWeak(auStack_2d8,auStack_b8);
    _objc_retain(param_56);
    uStack_2e0 = param_56;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a23c);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a23c) = puVar10;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a240;
    _objc_retain(param_63);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_63;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a244;
    _objc_retain(param_64);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_64;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a248;
    _objc_retain(in_stack_000001f0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000001f0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a24c;
    _objc_retain(in_stack_00000210);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000210;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a250;
    _objc_retain(in_stack_00000218);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000218;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a1f0;
    _objc_retain(in_stack_00000220);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000220;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a254;
    _objc_retain(in_stack_00000270);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000270;
    _objc_release(uVar2);
    puVar10 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    puVar9 = PTR_PTR_1126b3530;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = param_36;
    func_0x00010bf1f440();
    if ((int)uVar2 == 0) {
      lVar14 = (long)_DAT_11274a258;
      _objc_retain(puVar10);
      uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
      *(undefined **)((long)puVar17 + lVar14) = puVar10;
      _objc_release(uVar2);
      lVar14 = (long)_DAT_11274a25c;
      _objc_retain(puVar9);
      uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
      *(undefined **)((long)puVar17 + lVar14) = puVar9;
    }
    else {
      puVar3 = puVar17;
      func_0x00010be75520();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a258);
      *(undefined8 **)((long)puVar17 + (long)_DAT_11274a258) = puVar3;
      _objc_release(uVar2);
      puVar3 = puVar17;
      func_0x00010be75520();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a25c);
      *(undefined8 **)((long)puVar17 + (long)_DAT_11274a25c) = puVar3;
    }
    _objc_release(uVar2);
    puVar11 = PTR_PTR_1126cb660;
    _objc_alloc();
    func_0x00010c017980();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a260);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a260) = puVar11;
    _objc_release(uVar2);
    func_0x00010bea6680(puVar17);
    puVar11 = PTR_PTR_1126ae720;
    puStack_328 = puVar4;
    uStack_320 = 0xc2000000;
    uStack_318 = 0x106534ba8;
    puStack_310 = &UNK_11092a0e0;
    ppuVar15 = &puStack_328;
    _objc_copyWeak(auStack_308,auStack_b8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a264);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a264) = puVar11;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a268;
    _objc_retain(in_stack_00000258);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000258;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a26c;
    _objc_retain(in_stack_00000278);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000278;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_65);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a270);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a270) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_65);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a274);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a274) = puVar4;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a278;
    _objc_retain(param_66);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_66;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a27c;
    _objc_retain(in_stack_000002a0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002a0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a280;
    _objc_retain(in_stack_000002a8);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002a8;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a284;
    _objc_retain(in_stack_000002b0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002b0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a288;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_42;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a28c;
    _objc_retain(param_43);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = param_43;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a290;
    _objc_retain(in_stack_000002c0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002c0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a294;
    _objc_retain(in_stack_000002c8);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002c8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar17 + (long)_DAT_11274a298) = 0xffffffffffffffff;
    lVar14 = (long)_DAT_11274a29c;
    _objc_retain(in_stack_000002e0);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_000002e0;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2a0;
    _objc_retain(in_stack_00000300);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000300;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2a4;
    _objc_retain(in_stack_00000308);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000308;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2a8;
    _objc_retain(in_stack_00000310);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000310;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2ac;
    _objc_retain(in_stack_00000318);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000318;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(in_stack_00000320);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a2b0);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a2b0) = puVar4;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2b4;
    _objc_retain(in_stack_00000328);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000328;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2b8;
    _objc_retain(in_stack_00000330);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000330;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2bc;
    _objc_retain(in_stack_00000338);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000338;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_65);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar17 + (long)_DAT_11274a2c0);
    *(undefined **)((long)puVar17 + (long)_DAT_11274a2c0) = puVar4;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2c4;
    _objc_retain(in_stack_00000340);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000340;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2c8;
    _objc_retain(in_stack_00000360);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000360;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2cc;
    _objc_retain(in_stack_00000368);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000368;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2d0;
    _objc_retain(in_stack_00000370);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000370;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2d4;
    _objc_retain(in_stack_00000378);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000378;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_11274a2d8;
    _objc_retain(in_stack_00000380);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar14);
    *(undefined8 *)((long)puVar17 + lVar14) = in_stack_00000380;
    _objc_release(uVar2);
    _objc_release(param_65);
    _objc_release(in_stack_00000320);
    _objc_release(param_65);
    _objc_release(param_65);
    _objc_destroyWeak(auStack_308);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(uStack_2e0);
    _objc_destroyWeak(auStack_2d8);
    _objc_destroyWeak(auStack_2b0);
    _objc_destroyWeak(auStack_288);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_1e8);
    _objc_release(uStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    _objc_release(puVar8);
    _objc_release(uStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(puVar7);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_destroyWeak(auStack_150);
    _objc_release(puVar6);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(uStack_128);
    _objc_destroyWeak(auStack_f8);
    _objc_release(puVar5);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(in_stack_00000380);
  _objc_release(in_stack_00000378);
  _objc_release(in_stack_00000370);
  _objc_release(in_stack_00000368);
  _objc_release(in_stack_00000360);
  _objc_release(in_stack_00000358);
  _objc_release(in_stack_00000350);
  _objc_release(in_stack_00000348);
  _objc_release(in_stack_00000340);
  _objc_release(in_stack_00000338);
  _objc_release(in_stack_00000330);
  _objc_release(in_stack_00000328);
  _objc_release(in_stack_00000320);
  _objc_release(in_stack_00000318);
  _objc_release(in_stack_00000310);
  _objc_release(in_stack_00000308);
  _objc_release(in_stack_00000300);
  _objc_release(in_stack_000002f8);
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar17;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar15 + 4);
  _objc_destroyWeak(auStack_2d8);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_288);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_1e8);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  lVar14 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar14 == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    puVar17 = (undefined8 *)PTR_PTR_1126cb628;
    _objc_alloc(PTR_PTR_1126cb628);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c069180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf03ac0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar14 + _DAT_11274a1ec);
    func_0x00010bf50280(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0160(puVar17);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar2);
  }
  _objc_release(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return puVar17;
}


