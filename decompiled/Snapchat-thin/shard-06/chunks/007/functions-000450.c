/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c9cbb8; end: 104c9cc23;  */

void FUN_104c9cbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae610;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0582c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9cc24; end: 104c9cdb3; -[SCIdentityVerificationTakeoverEntryPoint _phoneVerificationTakeoverUIRouteActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9cc24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126aebd0;
  _objc_alloc(PTR_PTR_1126aebd0);
  lVar2 = param_1;
  FUN_104c9cb94(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110dad018,
                      &PTR____CFConstantStringClassReference_110dad038);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_104c9f614();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000104c9f62c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000104c9f65c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000104c9f68c();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104c9cdb4;
  puStack_70 = &UNK_1108462f0;
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_11270ff70);
  }
  lStack_68 = param_1;
  func_0x00010c03f920(puVar1,param_2,lVar3,puVar4,puVar5,puVar6,puVar7,puVar8,&puStack_88,uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9cdb4; end: 104c9ce3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9cdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + _DAT_11270ff74;
    _objc_loadWeakRetained(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010bf24220(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104c9ce40; end: 104c9cee3; -[SCIdentityVerificationTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9ce40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270ff74);
  _objc_storeStrong(param_1 + _DAT_11270ff70,0);
  _objc_storeStrong(param_1 + _DAT_11270ff6c,0);
  _objc_destroyWeak(param_1 + _DAT_11270ff68);
  _objc_destroyWeak(param_1 + _DAT_11270ff64);
  _objc_destroyWeak(param_1 + _DAT_11270ff60);
  _objc_destroyWeak(param_1 + _DAT_11270ff5c);
  _objc_destroyWeak(param_1 + _DAT_11270ff54);
  _objc_destroyWeak(param_1 + _DAT_11270ff58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270ff50,0);
  return;
}



/* Entry: 104c9cee4; end: 104c9cf87; -[SCIdentityVerificationTakeoverLogger initUserTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_104c9cee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3910;
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



/* Entry: 104c9cf88; end: 104c9cfe7; -[SCIdentityVerificationTakeoverLogger logTakeoverShownForType:] */

void FUN_104c9cf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010be50ca0(param_1,param_2,0,param_3);
  puVar1 = PTR_PTR_1126aebe0;
  func_0x00010c235840(PTR_PTR_1126aebe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54080(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9cfe8; end: 104c9d047; -[SCIdentityVerificationTakeoverLogger logTakeoverCtaConfirmedForType:] */

void FUN_104c9cfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010be50ca0(param_1,param_2,2,param_3);
  puVar1 = PTR_PTR_1126aebe0;
  func_0x00010bf47de0(PTR_PTR_1126aebe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54080(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9d048; end: 104c9d0a7; -[SCIdentityVerificationTakeoverLogger logTakeoverDismissedForType:] */

void FUN_104c9d048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010be50ca0(param_1,param_2,4,param_3);
  puVar1 = PTR_PTR_1126aebe0;
  func_0x00010bf66b60(PTR_PTR_1126aebe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54080(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9d0a8; end: 104c9d11f; -[SCIdentityVerificationTakeoverLogger _logBlizzardWithEvent:type:] */

void FUN_104c9d0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c197620();
  func_0x00010c21acc0(puVar1,param_2,param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9d120; end: 104c9d1d7; -[SCIdentityVerificationTakeoverLogger _logGraphene:type:] */

void FUN_104c9d120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bb05298(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe61c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c9d1d8; end: 104c9d207; -[SCIdentityVerificationTakeoverLogger .cxx_destruct] */

void FUN_104c9d1d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9d208; end: 104c9d3a7; -[SCIdentityVerificationTakeoverBusinessLogic initWithResourceDownloader:icon:title:description:ctaButtonTitle:dismissButtonTitle:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104c9d208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126e3918;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11270ff80;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11270ff84;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11270ff88;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11270ff8c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11270ff90;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11270ff94;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11270ff98),param_9);
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



/* Entry: 104c9d3a8; end: 104c9d4e7; -[SCIdentityVerificationTakeoverBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d3a8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270ff80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104c9d4e8; end: 104c9d52f;  */

void FUN_104c9d4e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c9d530; end: 104c9d583; -[SCIdentityVerificationTakeoverBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d530(void)

{
  _objc_alloc(PTR_PTR_1126aebf8);
  func_0x00010c01af20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9d584; end: 104c9d5f3; -[SCIdentityVerificationTakeoverBusinessLogic handleAction:] */

void FUN_104c9d584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104c9d5f4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104c9d62c;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd0c0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 104c9d5f4; end: 104c9d663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d5f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11270ff98;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5d280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c9d664; end: 104c9d6bf; -[SCIdentityVerificationTakeoverBusinessLogic _updateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d664(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270ff9c);
  *(undefined8 *)(param_1 + _DAT_11270ff9c) = param_3;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c9d6c0; end: 104c9d75b; -[SCIdentityVerificationTakeoverBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d6c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270ff9c,0);
  _objc_destroyWeak(param_1 + _DAT_11270ff98);
  _objc_storeStrong(param_1 + _DAT_11270ff94,0);
  _objc_storeStrong(param_1 + _DAT_11270ff90,0);
  _objc_storeStrong(param_1 + _DAT_11270ff8c,0);
  _objc_storeStrong(param_1 + _DAT_11270ff88,0);
  _objc_storeStrong(param_1 + _DAT_11270ff84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270ff80,0);
  return;
}



/* Entry: 104c9d75c; end: 104c9d7df; -[SCIdentityVerificationTakeoverViewController initWithScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104c9d75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3920;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11270ffa0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c9d7e0; end: 104c9d87f; -[SCIdentityVerificationTakeoverViewController viewDidLoad] */

void FUN_104c9d7e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3920;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beb0340(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104c9d880; end: 104c9d92f; -[SCIdentityVerificationTakeoverViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d880(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270ffa0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104c9d930; end: 104c9d977;  */

void FUN_104c9d930(long param_1,undefined8 param_2)

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



/* Entry: 104c9d978; end: 104c9dbcf; -[SCIdentityVerificationTakeoverViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9d978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  double dVar72;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar68 = (long)_DAT_11270ffa4;
  uVar65 = *(undefined8 *)(param_1 + lVar68);
  _objc_retain(param_3);
  uVar64 = param_3;
  func_0x00010bfe5400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar66 = uVar64;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar65,param_2,uVar66);
  _objc_release(uVar66);
  _objc_release(uVar64);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar68),param_2,puVar1);
  _objc_release(puVar1);
  uVar66 = *(undefined8 *)(param_1 + _DAT_11270ffa8);
  uVar64 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar66,param_2,uVar64);
  _objc_release(uVar64);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  func_0x00010c1bdcc0(0x4000000000000000);
  func_0x00010c166c00(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  uVar64 = param_3;
  func_0x00010c0f0ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2,param_2,uVar64,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar64);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11270ffac),param_2,puVar2);
  uVar66 = *(undefined8 *)(param_1 + _DAT_11270ffb0);
  uVar64 = param_3;
  func_0x00010bf5d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar66,param_2,uVar64,0);
  _objc_release(uVar64);
  uVar66 = *(undefined8 *)(param_1 + _DAT_11270ffb4);
  uVar64 = param_3;
  func_0x00010bf83400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c216260(uVar66,param_2,uVar64,0);
  _objc_release(uVar64);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = 0;
  dVar72 = 128.0;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,0x4060000000000000,0x4060000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar3,param_2,puVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar3,param_2,puVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar3,param_2,puVar4);
  _objc_release(puVar2);
  func_0x00010c1bdd00(0x4030000000000000,puVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar2 = puVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar4,param_2,0);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar69 = (long)_DAT_11270ffa4;
  uVar64 = *(undefined8 *)(puVar1 + lVar69);
  *(undefined **)(puVar1 + lVar69) = puVar2;
  _objc_release(uVar64);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar69),param_2,0);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar68 = (long)_DAT_11270ffa8;
  uVar64 = *(undefined8 *)(puVar1 + lVar68);
  *(undefined **)(puVar1 + lVar68) = puVar2;
  _objc_release(uVar64);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar68),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar1 + lVar68),param_2,1);
  uVar64 = *(undefined8 *)(puVar1 + lVar68);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar64,param_2,puVar2);
  _objc_release(puVar2);
  uVar64 = *(undefined8 *)(puVar1 + lVar68);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar64,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar67 = (long)_DAT_11270ffac;
  uVar64 = *(undefined8 *)(puVar1 + lVar67);
  *(undefined **)(puVar1 + lVar67) = puVar2;
  _objc_release(uVar64);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar67),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar67),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar1 + lVar67),param_2,1);
  uVar64 = *(undefined8 *)(puVar1 + lVar67);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar64,param_2,puVar2);
  _objc_release(puVar2);
  uVar64 = *(undefined8 *)(puVar1 + lVar67);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar64,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar70 = (long)_DAT_11270ffb0;
  uVar64 = *(undefined8 *)(puVar1 + lVar70);
  *(undefined **)(puVar1 + lVar70) = puVar2;
  _objc_release(uVar64);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar70),param_2,0);
  func_0x00010c198080(*(undefined8 *)(puVar1 + lVar70),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(puVar1 + lVar70),param_2,puVar1,
                      PTR_s__ctaButtonPressed_112525870,0x40);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar71 = (long)_DAT_11270ffb4;
  uVar64 = *(undefined8 *)(puVar1 + lVar71);
  *(undefined **)(puVar1 + lVar71) = puVar2;
  _objc_release(uVar64);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar71),param_2,0);
  func_0x00010c198080(*(undefined8 *)(puVar1 + lVar71),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar64 = *(undefined8 *)(puVar1 + lVar71);
  func_0x00010c271420(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar64);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(puVar1 + lVar71),param_2,puVar1,
                      PTR_s__dismissButtonPressed_11255e348,0x40);
  uVar64 = *(undefined8 *)(puVar1 + lVar71);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar64,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  puStack_188 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  puStack_180 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  puStack_178 = puVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf493c0(dVar72 / 3.0,puVar13,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar1 + lVar69);
  puStack_170 = puVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar1 + lVar69);
  uStack_168 = uVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0x4014000000000000,uVar20,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar1 + lVar69);
  uStack_160 = uVar22;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(puVar1 + lVar69));
  uVar24 = uVar23;
  func_0x00010bf494e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(puVar1 + lVar68);
  uStack_158 = uVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,puVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(puVar1 + lVar68);
  uStack_150 = uVar28;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(puVar1 + lVar68));
  uVar30 = uVar29;
  func_0x00010bf494e0(uVar66);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(puVar1 + lVar68);
  uStack_148 = uVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar31;
  func_0x00010bf493c0(dVar72 * 0.5,uVar31,param_2,puVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(puVar1 + lVar67);
  uStack_140 = uVar34;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar36;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar35;
  func_0x00010bf493a0(uVar35,param_2,puVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(puVar1 + lVar67);
  uStack_138 = uVar38;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(puVar1 + lVar68);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0x4028000000000000,uVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(puVar1 + lVar67);
  uStack_130 = uVar41;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(puVar1 + lVar67));
  uVar43 = uVar42;
  func_0x00010bf494e0(uVar66);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(puVar1 + lVar67);
  uStack_128 = uVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar45;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar65 = uVar44;
  func_0x00010bf493c0(0x403d000000000000,uVar44,param_2,puVar46);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(puVar1 + lVar67);
  uStack_120 = uVar65;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar48;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar47;
  func_0x00010bf493c0(0xc03d000000000000,uVar47,param_2,puVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(puVar1 + lVar70);
  uStack_118 = uVar50;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = puVar52;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar51;
  func_0x00010bf493a0(uVar51,param_2,puVar53);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(puVar1 + lVar70);
  uStack_110 = uVar54;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = puVar56;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = uVar55;
  func_0x00010bf493c0((dVar72 * 5.0) / 7.0,uVar55,param_2,puVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(puVar1 + lVar71);
  uStack_108 = uVar58;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar61 = puVar60;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = uVar59;
  func_0x00010bf493a0(uVar59,param_2,puVar61);
  _objc_retainAutoreleasedReturnValue();
  uVar62 = *(undefined8 *)(puVar1 + lVar71);
  uStack_100 = uVar66;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(puVar1 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = uVar62;
  func_0x00010bf493c0(0x4034000000000000,uVar62,param_2,uVar63);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar64;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_188,0x13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar64);
  _objc_release(uVar63);
  _objc_release(uVar62);
  _objc_release(uVar66);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(uVar65);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return;
  }
  ___stack_chk_fail();
  uVar64 = *(undefined8 *)(puVar3 + _DAT_11270ffa0);
  puVar1 = PTR_PTR_1126aec50;
  func_0x00010bf47e60(PTR_PTR_1126aec50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar64,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9dbd0; end: 104c9e8fb; -[SCIdentityVerificationTakeoverViewController _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9dbd0(long param_1,undefined8 param_2)

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
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined *puVar61;
  undefined8 uVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined8 uVar68;
  double dVar69;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
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
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = 0;
  dVar69 = 128.0;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,0x4060000000000000,0x4060000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  func_0x00010c1bdd00(0x4030000000000000,puVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar2 = puVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar3,param_2,0);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar65 = (long)_DAT_11270ffa4;
  uVar62 = *(undefined8 *)(param_1 + lVar65);
  *(undefined **)(param_1 + lVar65) = puVar2;
  _objc_release(uVar62);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar65),param_2,0);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar63 = (long)_DAT_11270ffa8;
  uVar62 = *(undefined8 *)(param_1 + lVar63);
  *(undefined **)(param_1 + lVar63) = puVar2;
  _objc_release(uVar62);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar63),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar63),param_2,1);
  uVar62 = *(undefined8 *)(param_1 + lVar63);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar62,param_2,puVar2);
  _objc_release(puVar2);
  uVar62 = *(undefined8 *)(param_1 + lVar63);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar62,param_2,puVar2);
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar64 = (long)_DAT_11270ffac;
  uVar62 = *(undefined8 *)(param_1 + lVar64);
  *(undefined **)(param_1 + lVar64) = puVar2;
  _objc_release(uVar62);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar64),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar64),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar64),param_2,1);
  uVar62 = *(undefined8 *)(param_1 + lVar64);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar62,param_2,puVar2);
  _objc_release(puVar2);
  uVar62 = *(undefined8 *)(param_1 + lVar64);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar62,param_2,puVar2);
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_11270ffb0;
  uVar62 = *(undefined8 *)(param_1 + lVar66);
  *(undefined **)(param_1 + lVar66) = puVar2;
  _objc_release(uVar62);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar66),param_2,0);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar66),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar66),param_2,param_1,
                      PTR_s__ctaButtonPressed_112525870,0x40);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar67 = (long)_DAT_11270ffb4;
  uVar62 = *(undefined8 *)(param_1 + lVar67);
  *(undefined **)(param_1 + lVar67) = puVar2;
  _objc_release(uVar62);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar67),param_2,0);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar67),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar62 = *(undefined8 *)(param_1 + lVar67);
  func_0x00010c271420(uVar62);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar62);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar67),param_2,param_1,
                      PTR_s__dismissButtonPressed_11255e348,0x40);
  uVar62 = *(undefined8 *)(param_1 + lVar67);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar62,param_2,puVar2,0);
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_118 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_110 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  puStack_108 = puVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf493c0(dVar69 / 3.0,puVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar65);
  puStack_100 = puVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar65);
  uStack_f8 = uVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0x4014000000000000,uVar20,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar65);
  uStack_f0 = uVar22;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar65));
  uVar24 = uVar23;
  func_0x00010bf494e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar63);
  uStack_e8 = uVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar63);
  uStack_e0 = uVar28;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar63));
  uVar30 = uVar29;
  func_0x00010bf494e0(uVar68);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar63);
  uStack_d8 = uVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar31;
  func_0x00010bf493c0(dVar69 * 0.5,uVar31,param_2,lVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar64);
  uStack_d0 = uVar34;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar35;
  func_0x00010bf493a0(uVar35,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar64);
  uStack_c8 = uVar38;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar63);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0x4028000000000000,uVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar64);
  uStack_c0 = uVar41;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar64));
  uVar43 = uVar42;
  func_0x00010bf494e0(uVar68);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar64);
  uStack_b8 = uVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = uVar44;
  func_0x00010bf493c0(0x403d000000000000,uVar44,param_2,lVar46);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_1 + lVar64);
  uStack_b0 = uVar68;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = lVar64;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar47;
  func_0x00010bf493c0(0xc03d000000000000,uVar47,param_2,lVar65);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar66);
  uStack_a8 = uVar48;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar49;
  func_0x00010bf493a0(uVar49,param_2,lVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + lVar66);
  uStack_a0 = uVar52;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar53;
  func_0x00010bf493c0((dVar69 * 5.0) / 7.0,uVar53,param_2,lVar55);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + lVar67);
  uStack_98 = uVar56;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar63;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = uVar57;
  func_0x00010bf493a0(uVar57,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_1 + lVar67);
  uStack_90 = uVar58;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = uVar59;
  func_0x00010bf493c0(0x4034000000000000,uVar59,param_2,uVar60);
  _objc_retainAutoreleasedReturnValue();
  puVar61 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar62;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,0x13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar61);
  _objc_release(puVar61);
  _objc_release(uVar62);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(lVar4);
  _objc_release(lVar63);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(uVar47);
  _objc_release(uVar68);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar62 = *(undefined8 *)(puVar1 + _DAT_11270ffa0);
  puVar2 = PTR_PTR_1126aec50;
  func_0x00010bf47e60(PTR_PTR_1126aec50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar62,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c9e8fc; end: 104c9e947; -[SCIdentityVerificationTakeoverViewController _ctaButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9e8fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11270ffa0);
  puVar1 = PTR_PTR_1126aec50;
  func_0x00010bf47e60(PTR_PTR_1126aec50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9e948; end: 104c9e993; -[SCIdentityVerificationTakeoverViewController _dismissButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9e948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11270ffa0);
  puVar1 = PTR_PTR_1126aec50;
  func_0x00010bf82f40(PTR_PTR_1126aec50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9e994; end: 104c9ea13; -[SCIdentityVerificationTakeoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9e994(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270ffb4,0);
  _objc_storeStrong(param_1 + _DAT_11270ffb0,0);
  _objc_storeStrong(param_1 + _DAT_11270ffac,0);
  _objc_storeStrong(param_1 + _DAT_11270ffa8,0);
  _objc_storeStrong(param_1 + _DAT_11270ffa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270ffa0,0);
  return;
}



/* Entry: 104c9ea14; end: 104c9ebbf; -[SCIdentityVerificationTakeoverFeatureUIRouteActions initWithResourceDownloader:icon:title:description:ctaButtonTitle:dismissButtonTitle:verificationScope:verificationScopeExposer:] */

undefined1 *
FUN_104c9ea14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126e3928;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
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



/* Entry: 104c9ebc0; end: 104c9eccf; -[SCIdentityVerificationTakeoverFeatureUIRouteActions showIdentityVerificationTakeoverLandingPage:delegate:] */

void FUN_104c9ebc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126aec58;
  _objc_alloc(PTR_PTR_1126aec58);
  func_0x00010c03f900();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126aec68;
  _objc_alloc(PTR_PTR_1126aec68);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042340(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c9ecd0; end: 104c9eddb; -[SCIdentityVerificationTakeoverFeatureUIRouteActions showVerificationPage:] */

void FUN_104c9ecd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c071800();
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar5);
    puVar3 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_retain(uVar5);
    func_0x00010c0311a0(puVar3);
    lVar4 = *(long *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(uVar1);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104c9eddc; end: 104c9ee73;  */

void FUN_104c9eddc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104c9ee74; end: 104c9ee93;  */

void FUN_104c9ee74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104c9ee94; end: 104c9eecb; -[SCIdentityVerificationTakeoverFeatureUIRouteActions removeVerificationPage] */

void FUN_104c9ee94(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104c9eecc; end: 104c9ef5b; -[SCIdentityVerificationTakeoverFeatureUIRouteActions .cxx_destruct] */

void FUN_104c9eecc(long param_1)

{
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



/* Entry: 104c9ef5c; end: 104c9f0b7; -[SCIdentityVerificationTakeoverWorkflow initWithRouter:providerType:campaignId:featureSettingsService:fstCampaignDataProvider:additionalMetricsData:logger:] */

undefined1 *
FUN_104c9ef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e3930;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
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



/* Entry: 104c9f0b8; end: 104c9f0ff; -[SCIdentityVerificationTakeoverWorkflow canShowCampaign:] */

undefined8 FUN_104c9f0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104c9f100; end: 104c9f2d3; -[SCIdentityVerificationTakeoverWorkflow showCampaign:uiContainer:onComplete:] */

void FUN_104c9f100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  dVar6 = 1.60807493534087e-314;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104c9f2d4;
  puStack_58 = &UNK_1108463b0;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c1429e0(uVar5,param_2,&puStack_70);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar5);
  uVar5 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1b8f40(uVar5,param_2,(long)dVar6);
  _objc_release(puVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c298420();
  func_0x00010c220ca0(uVar5,param_2,lVar4 + 1);
  _objc_release(lVar3);
  _objc_release(uVar5);
  func_0x00010c0b17e0(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104c9f2d4; end: 104c9f2df;  */

void FUN_104c9f2d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showIdentityVerificationTakeover_11266b968,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104c9f2e0; end: 104c9f387; -[SCIdentityVerificationTakeoverWorkflow ctaConfirmed] */

void FUN_104c9f2e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1429e0();
  _objc_release(uVar1);
  func_0x00010c0b1780(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb240();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9f388; end: 104c9f393;  */

void FUN_104c9f388(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showVerificationPage__11266c520,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c9f394; end: 104c9f43b; -[SCIdentityVerificationTakeoverWorkflow landingPageDismissed] */

void FUN_104c9f394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1429e0();
  _objc_release(uVar1);
  func_0x00010c0b17a0(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb1c0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9f43c; end: 104c9f44b;  */

void FUN_104c9f43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c9f448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x10))();
  return;
}



/* Entry: 104c9f44c; end: 104c9f4f3; -[SCIdentityVerificationTakeoverWorkflow emailSettingsDidComplete] */

void FUN_104c9f44c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1429e0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9f4f4; end: 104c9f59b; -[SCIdentityVerificationTakeoverWorkflow mobileSettingsDidComplete] */

void FUN_104c9f4f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1429e0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9f59c; end: 104c9f613; -[SCIdentityVerificationTakeoverWorkflow .cxx_destruct] */

void FUN_104c9f59c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9f614; end: 104c9f6a3;  */

void FUN_104c9f614(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad0b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad0b8,
                      &PTR____CFConstantStringClassReference_110dad0d8,0);
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



/* Entry: 104c9f6a4; end: 104c9f6cf; +[SCGrapheneIdentityVerificationTakeoverMetric show] */

void FUN_104c9f6a4(void)

{
  _objc_alloc(PTR_PTR_1126aebe0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9f6d0; end: 104c9f6fb; +[SCGrapheneIdentityVerificationTakeoverMetric confirm] */

void FUN_104c9f6d0(void)

{
  _objc_alloc(PTR_PTR_1126aebe0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9f6fc; end: 104c9f727; +[SCGrapheneIdentityVerificationTakeoverMetric decline] */

void FUN_104c9f6fc(void)

{
  _objc_alloc(PTR_PTR_1126aebe0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9f728; end: 104c9f7c7; -[SCGrapheneIdentityVerificationTakeoverMetric description] */

void FUN_104c9f728(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad178;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dad178,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e3938;
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



/* Entry: 104c9f7c8; end: 104c9f91f; -[SCGrapheneRegistry identityVerificationTakeoverGraphene] */

void FUN_104c9f7c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104c9f850;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b8910 != -1) {
    func_0x00010002a2fc(0x1136b8910,&puStack_48);
  }
  uVar1 = uRam00000001136b8908;
  _objc_retain(uRam00000001136b8908);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c9f920; end: 104c9f967; +[SCIdentityVerificationTakeoverLandingPageAction confirmCta] */

void FUN_104c9f920(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec50;
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



/* Entry: 104c9f968; end: 104c9f9b3; +[SCIdentityVerificationTakeoverLandingPageAction dismiss] */

void FUN_104c9f968(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec50;
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



/* Entry: 104c9f9b4; end: 104c9f9d7; -[SCIdentityVerificationTakeoverLandingPageAction copyWithZone:] */

undefined8 FUN_104c9f9b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104c9f9d8; end: 104c9f9df; -[SCIdentityVerificationTakeoverLandingPageAction hash] */

undefined8 FUN_104c9f9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c9f9e0; end: 104c9fa23; -[SCIdentityVerificationTakeoverLandingPageAction internalInit] */

void FUN_104c9f9e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3940;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9fa24; end: 104c9faab; -[SCIdentityVerificationTakeoverLandingPageAction isEqual:] */

bool FUN_104c9fa24(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 104c9faac; end: 104c9fb23; -[SCIdentityVerificationTakeoverLandingPageAction matchConfirmCta:dismiss:] */

void FUN_104c9faac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_104c9faf4;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104c9faf4;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_104c9faf4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c9fb24; end: 104c9fc5b; -[SCIdentityVerificationTakeoverLandingPageViewModel initWithIcon:title:pageDescription:ctaButtonTitle:dismissButtonTitle:] */

undefined1 *
FUN_104c9fb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e3948;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
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



/* Entry: 104c9fc5c; end: 104c9fc7f; -[SCIdentityVerificationTakeoverLandingPageViewModel copyWithZone:] */

undefined8 FUN_104c9fc5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104c9fc80; end: 104c9fd17; -[SCIdentityVerificationTakeoverLandingPageViewModel hash] */

undefined8 * FUN_104c9fc80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104c9fde0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104c9fdec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_104c9fdec;
              }
              goto LAB_104c9fde0;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104c9fdec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104c9fd18; end: 104c9fe07; -[SCIdentityVerificationTakeoverLandingPageViewModel isEqual:] */

long FUN_104c9fd18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104c9fde0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104c9fdec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_104c9fdec;
              }
              goto LAB_104c9fde0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104c9fdec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104c9fe08; end: 104c9fe0f; -[SCIdentityVerificationTakeoverLandingPageViewModel icon] */

undefined8 FUN_104c9fe08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c9fe10; end: 104c9fe17; -[SCIdentityVerificationTakeoverLandingPageViewModel title] */

undefined8 FUN_104c9fe10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104c9fe18; end: 104c9fe1f; -[SCIdentityVerificationTakeoverLandingPageViewModel pageDescription] */

undefined8 FUN_104c9fe18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104c9fe20; end: 104c9fe27; -[SCIdentityVerificationTakeoverLandingPageViewModel ctaButtonTitle] */

undefined8 FUN_104c9fe20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104c9fe28; end: 104c9fe2f; -[SCIdentityVerificationTakeoverLandingPageViewModel dismissButtonTitle] */

undefined8 FUN_104c9fe28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104c9fe30; end: 104c9fe83; -[SCIdentityVerificationTakeoverLandingPageViewModel .cxx_destruct] */

void FUN_104c9fe30(long param_1)

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



/* Entry: 104c9fe84; end: 104ca00eb; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow initWithApplicationLifecycleEvents:fstCampaignDataProvider:navigationServices:userSessionContext:userInstallServices:notificationLifecycleEvents:inAppTakeoverScopeExposer:performer:appStartExperimentReader:circumstanceEngine:] */

undefined8 *
FUN_104c9fe84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126e3950;
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
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar1[9] = 0xffffffffffffffff;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
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



/* Entry: 104ca00ec; end: 104ca02fb; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow beginWorkflow] */

void FUN_104ca00ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104ca02fc;
  puStack_78 = &UNK_1108464e0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf72840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104ca0450;
  puStack_a0 = &UNK_110846510;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = auStack_68;
  _objc_loadWeakRetained(puVar3);
  func_0x00010be478c0();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104ca02fc; end: 104ca03b7;  */

void FUN_104ca02fc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ca03b8; end: 104ca03c3;  */

void FUN_104ca03b8(void)

{
  return;
}



/* Entry: 104ca03c4; end: 104ca04c3;  */

void FUN_104ca03c4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c11c420(param_2);
  _objc_release(param_2);
  func_0x00010bed32a0(lVar1);
  _objc_release(lVar1);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be478c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104ca04c4; end: 104ca04f3;  */

void FUN_104ca04c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed32a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca04f4; end: 104ca0677; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _launchFSTIfPossible] */

void FUN_104ca04f4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c073c40();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c073d80();
      if (iVar1 != 0) goto LAB_104ca0540;
    }
    else {
LAB_104ca0540:
      uVar2 = *(ulong *)(param_1 + 0x28);
      func_0x00010c072f80();
      if ((uVar2 & 1) != 0) {
        uVar7 = 0;
        goto LAB_104ca0550;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c073c40();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c073d80();
      uVar7 = 2;
      if (iVar1 == 0) {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 4;
LAB_104ca0550:
    lVar3 = param_1;
    func_0x00010be64480();
    if ((int)lVar3 == 0) {
      return;
    }
  }
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010c0d6a60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c29ffa0();
  _objc_release(lVar3);
  _objc_release(lVar4);
  if (lVar5 != 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c073c40();
    if (iVar1 == 0) {
      return;
    }
  }
  _objc_initWeak(auStack_48,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar7;
  func_0x00010c0f7fc0(uVar6);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104ca0678; end: 104ca06ab;  */

void FUN_104ca0678(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be110a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca06ac; end: 104ca07c7; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _fetchFSTCampaignWithTriggerType:] */

void FUN_104ca06ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_48;
  _objc_copyWeak(puVar3,auStack_38);
  uStack_40 = param_3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ca07c8; end: 104ca0857;  */

void FUN_104ca07c8(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    if (param_2 != 0) {
      func_0x00010be299a0(param_1);
      goto LAB_104ca082c;
    }
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
  }
  func_0x00010be93780();
LAB_104ca082c:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ca0858; end: 104ca0867; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _notificationTriggeredTakeover] */

bool FUN_104ca0858(long param_1)

{
  return *(long *)(param_1 + 0x48) == 0xad;
}



/* Entry: 104ca0868; end: 104ca0a4f; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _handleFetchedCampaign:triggerType:] */

void FUN_104ca0868(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0d6a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29ffa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((param_4 == 1) || (lVar3 == 2)) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf1f440(uVar4,param_2,&PTR____CFConstantStringClassReference_110dad218,1,0);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104ca0a50;
    puStack_78 = &UNK_1108465a0;
    _objc_retain(uVar5);
    uStack_68 = (undefined1)uVar4;
    puStack_b8 = puVar7;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104ca0ba0;
    puStack_a0 = &UNK_110841f50;
    uStack_98 = uVar5;
    uStack_70 = uVar5;
    _objc_retain(uVar5);
    func_0x00010c0311a0(puVar6,param_2,&puStack_90,&puStack_b8);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar7 = PTR_PTR_1126aec78;
    _objc_alloc(PTR_PTR_1126aec78);
    lVar2 = param_1;
    func_0x00010bdea880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058300(puVar7,param_2,puVar6,param_1,param_3,lVar2);
    func_0x00010bf9d620(uVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(lVar2);
    func_0x00010be93780(param_1);
    _objc_release(puVar6);
    _objc_release(uStack_98);
    _objc_release(uStack_70);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ca0a50; end: 104ca0b9f;  */

void FUN_104ca0a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c10eda0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104ca0ba0; end: 104ca0bf3;  */

void FUN_104ca0ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ca0bf4; end: 104ca0c9f; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _updateAppOpenFromPushType:] */

void FUN_104ca0bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ca0ca0;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ca0ca0; end: 104ca0ccf;  */

void FUN_104ca0ca0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104ca0cd0; end: 104ca0d47; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _createAdditionalMetricsData] */

void FUN_104ca0cd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (0 < *(long *)(param_1 + 0x48)) {
    func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2d118,
                        &PTR____CFConstantStringClassReference_110de6718);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca0d48; end: 104ca0d4f; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _resetProperties] */

void FUN_104ca0d48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateAppOpenFromPushType__112592650,0xffffffffffffffff);
  return;
}



/* Entry: 104ca0d50; end: 104ca0d6f; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow inAppTakeoverScopeDidComplete] */

void FUN_104ca0d50(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ca0d70; end: 104ca0e0b; -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow .cxx_destruct] */

void FUN_104ca0d70(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104ca0e0c; end: 104ca103b; -[SCInAppTakeoverCameraLaunchTriggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca0e0c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112710050);
  *(undefined **)(param_1 + _DAT_112710050) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR_PTR_1126aec80;
  _objc_alloc();
  lVar16 = (long)_DAT_112710054;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112710058;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271005c;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112710060;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112710064;
  _objc_loadWeakRetained();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar10 = lVar16;
  func_0x00010c0dc260();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271006c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112710070;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3ae0();
  lVar17 = (long)_DAT_112710074;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf192d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar17),PTR_s_beginWorkflow_1125a3e58);
  return;
}



/* Entry: 104ca103c; end: 104ca10eb; -[SCInAppTakeoverCameraLaunchTriggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca103c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710068,0);
  _objc_destroyWeak(param_1 + _DAT_112710064);
  _objc_destroyWeak(param_1 + _DAT_112710070);
  _objc_destroyWeak(param_1 + _DAT_11271005c);
  _objc_destroyWeak(param_1 + _DAT_112710058);
  _objc_destroyWeak(param_1 + _DAT_11271006c);
  _objc_destroyWeak(param_1 + _DAT_112710060);
  _objc_destroyWeak(param_1 + _DAT_112710054);
  _objc_destroyWeak(param_1 + _DAT_112710078);
  _objc_storeStrong(param_1 + _DAT_112710050,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710074,0);
  return;
}



/* Entry: 104ca10ec; end: 104ca125f; -[SCInAppTakeoverDefaultProvider initWithValdiRuntimeProvider:fstCampaignDataProvider:webBrowsingScopeExposer:navigationController:actionHandlers:additionalMetricsData:circumstanceEngine:] */

undefined1 *
FUN_104ca10ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e3958;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    func_0x00010beaa600(puVar1);
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



/* Entry: 104ca1260; end: 104ca136b; -[SCInAppTakeoverDefaultProvider _setupActionHandlersMap:] */

void FUN_104ca1260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104ca136c; end: 104ca14ef;  */

long FUN_104ca136c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010beee6c0(*(undefined8 *)(lVar8 * 8));
        func_0x00010c0df760(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar7);
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar6;
    _objc_release(uVar7);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 104ca14f0; end: 104ca14f7; -[SCInAppTakeoverDefaultProvider canShowCampaign:] */

undefined8 FUN_104ca14f0(void)

{
  return 1;
}



/* Entry: 104ca14f8; end: 104ca15d3; -[SCInAppTakeoverDefaultProvider showCampaign:uiContainer:onComplete:] */

void FUN_104ca14f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ca15d4;
  puStack_58 = &UNK_1108465d0;
  uStack_50 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104ca15d4; end: 104ca1753;  */

void FUN_104ca15d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf2bf80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    lVar3 = lVar6;
    func_0x00010c0e6f20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar1 = lVar6;
      func_0x00010c0e6f20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010beeed20();
      _objc_release(lVar1);
      _objc_release(lVar3);
      if ((int)lVar2 != 0) {
        lVar3 = lVar6;
        func_0x00010c294e20();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010bf3c7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c08fa60();
        _objc_release(lVar1);
        _objc_release(lVar3);
        _objc_release(lVar6);
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (lVar3,PTR_s__showCampaign_uiContainer_onComp_11258bab8,
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x38));
          return;
        }
        goto LAB_104ca16dc;
      }
    }
  }
  _objc_release(lVar6);
  lVar3 = *(long *)(param_1 + 0x28);
LAB_104ca16dc:
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2bf80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a56c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104ca173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104ca1754; end: 104ca1823; -[SCInAppTakeoverDefaultProvider _showCampaign:uiContainer:onComplete:] */

void FUN_104ca1754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126aec88;
  _objc_alloc();
  func_0x00010c05fd80();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ca1824; end: 104ca1883; -[SCInAppTakeoverDefaultProvider handleCampaignDisplayed:] */

void FUN_104ca1824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ca1884; end: 104ca1a2f; -[SCInAppTakeoverDefaultProvider handleCampaignClicked:] */

void FUN_104ca1884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010c0e6f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010beeed20();
  func_0x00010c0df760(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar1);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_104ca1a0c;
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    puVar4 = *(undefined **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    puVar4 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e4c0(puVar4,param_2,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae9c0;
    _objc_alloc(PTR_PTR_1126ae9c0);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010c0e6f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02eca0(puVar2,param_2,puVar4,uVar5,uVar1,2,*(undefined8 *)(param_1 + 0x40));
    _objc_release(uVar1);
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x38),param_2,0);
    func_0x00010bfd1a40(lVar3,param_2,puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb240();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
LAB_104ca1a0c:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


