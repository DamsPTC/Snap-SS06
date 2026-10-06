/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106985964; end: 106985a2f; -[SCAdWebViewAttachmentPresenter webBrowserPresenterDidTrigger] */

void FUN_106985964(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90fa0();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0696c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb5320();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  else {
    _objc_release(uVar1);
  }
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  puVar5 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1ee0(lVar4,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106985a30; end: 106985a47; -[SCAdWebViewAttachmentPresenter delegate] */

void FUN_106985a30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106985a48; end: 106985a53; -[SCAdWebViewAttachmentPresenter setDelegate:] */

void FUN_106985a48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106985a54; end: 106985aaf; -[SCAdWebViewAttachmentPresenter .cxx_destruct] */

void FUN_106985a54(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106985ab0; end: 106985b0f; -[AppInstallStoreKitLoadInfo initWithPageLoadedOnExit:visibleLoadTimeSec:pageLoadedOnEntry:] */

void FUN_106985ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f3f18;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 106985b10; end: 106985b33; -[AppInstallStoreKitLoadInfo copyWithZone:] */

undefined8 FUN_106985b10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106985b34; end: 106985bb7; -[AppInstallStoreKitLoadInfo hash] */

ulong * FUN_106985b34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106985bb8; end: 106985c83; -[AppInstallStoreKitLoadInfo isEqual:] */

bool FUN_106985bb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106985c84; end: 106985c8b; -[AppInstallStoreKitLoadInfo pageLoadedOnExit] */

undefined1 FUN_106985c84(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106985c8c; end: 106985c93; -[AppInstallStoreKitLoadInfo visibleLoadTimeSec] */

undefined8 FUN_106985c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106985c94; end: 106985c9b; -[AppInstallStoreKitLoadInfo pageLoadedOnEntry] */

undefined1 FUN_106985c94(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106985c9c; end: 106985cbf; +[SCCAdInstantPageLogger valdiMarshallableObjectDescriptor] */

void FUN_106985c9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11094eb80;
  param_1[1] = &PTR_DAT_11094ebf8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106985cc0; end: 106985ccb; +[SCCAdProductInstantPageView componentPath] */

undefined ** FUN_106985cc0(void)

{
  return &PTR____CFConstantStringClassReference_110e665d8;
}



/* Entry: 106985ccc; end: 106985cff; -[SCCAdProductInstantPageView initWithViewModel:componentContext:runtime:] */

void FUN_106985ccc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3f20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106985d00; end: 106985d4f; -[SCCAdProductInstantPageView setViewModel:] */

void FUN_106985d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106985d50; end: 106985d93; -[SCCAdProductInstantPageView viewModel] */

void FUN_106985d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106985d94; end: 106985f3b; -[SCStoreProductPageController initWithTimeProvider:adConfigProvider:adConfigProviderV2:skAdNetworkMetricsManager:adMetadataCache:appImpressionTracker:adCrashLogger:notificationPool:] */

undefined1 *
FUN_106985d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f3f28;
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
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_10;
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



/* Entry: 106985f3c; end: 106985f8b; -[SCStoreProductPageController isPresented] */

byte FUN_106985f3c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c23da20();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x70);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x00010c10fd00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  return bVar1 & 1;
}



/* Entry: 106985f8c; end: 106986217; -[SCStoreProductPageController loadStoreProductWithParameters:appInstallParams:completion:] */

ulong FUN_106985f8c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010beb4520();
  if ((uVar1 & 1) == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1,0);
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar2;
    _objc_release(uVar5);
    *(undefined8 *)(param_2 + 0x48) = 1;
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = 0;
    _objc_release(uVar2);
    if (*(long *)(param_2 + 0x50) == 0) {
      puVar3 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      *(undefined **)(param_2 + 0x50) = puVar3;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x50));
      puVar3 = PTR_PTR_1126c5368;
      func_0x00010bf063c0(PTR_PTR_1126c5368);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
    func_0x00010beec800(*(undefined8 *)(param_2 + 8));
    _objc_initWeak(auStack_78,param_2);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106986218;
    puStack_a0 = &UNK_1108aebb0;
    _objc_retain(param_6);
    lStack_90 = param_6;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_4);
    ppuVar4 = &puStack_b8;
    uStack_98 = param_4;
    uStack_80 = param_1;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c24ca20();
    _objc_release(uVar5);
    if ((int)uVar2 == 0) {
      func_0x00010c09bf80(*(undefined8 *)(param_2 + 0x50));
    }
    else {
      func_0x00010c09c340(*(undefined8 *)(param_2 + 0x30));
    }
    _objc_release(ppuVar4);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 106986218; end: 10698628f;  */

void FUN_106986218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be6ae80(*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106986290; end: 1069862a7;  */

void FUN_106986290(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001069862a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0,param_2);
  return;
}



/* Entry: 1069862a8; end: 106986303; -[SCStoreProductPageController _shouldLoadPageWithParams:] */

uint FUN_1069862a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if ((*(ulong *)(param_1 + 0x48) | 2) == 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c071d00(uVar1,param_2,param_3);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106986304; end: 1069863fb; -[SCStoreProductPageController _onProductLoaded:result:error:startTimestamp:] */

void FUN_106986304(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c071d00(uVar1,param_3,param_4);
  if ((int)uVar1 != 0) {
    uVar1 = 2;
    if (param_5 != 0) {
      uVar1 = 3;
    }
    *(undefined8 *)(param_2 + 0x48) = uVar1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_5 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010beec800(*(undefined8 *)(param_2 + 8));
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    *(undefined **)(param_2 + 0x80) = puVar2;
    _objc_release(uVar1);
    lVar3 = param_2;
    func_0x00010c07aae0();
    if ((int)lVar3 != 0) {
      func_0x00010beec800(*(undefined8 *)(param_2 + 8));
      dVar4 = param_1;
      func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x60));
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77b40(param_1 - dVar4);
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1069863fc; end: 1069869bb; -[SCStoreProductPageController presentStoreProductWithParameters:appInstallParams:uiContainer:backgroundExitBehavior:completion:] */

void FUN_1069863fc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar3);
  uVar1 = uVar9;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c25d700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c257b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar5);
  lVar5 = lVar6;
  if (lVar6 == 0) {
    lVar5 = *(long *)(param_1 + 0x50);
  }
  _objc_retain(lVar5);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c23dd80();
  if (iVar2 != 0) {
    lVar7 = lVar5;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b3e90;
      func_0x00010befde40(PTR_PTR_1126b3e90);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar7 = param_1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar8);
      _objc_release(puVar3);
      _objc_release(lVar7);
      _objc_release(puVar10);
      _objc_release(uVar8);
      if (lVar5 != *(long *)(param_1 + 0x50)) {
        uVar9 = *(ulong *)(param_1 + 0x18);
        func_0x00010c0ec0c0();
        if ((uVar9 & 1) != 0) {
          param_1 = param_1 + 0x78;
          _objc_loadWeakRetained(param_1);
          func_0x00010bf763c0();
          _objc_release(param_1);
          goto LAB_106986940;
        }
      }
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      goto LAB_106986940;
    }
  }
  _objc_retain(param_5);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_5;
  _objc_release(uVar8);
  func_0x00010c1e1340(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_1 + 8));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar3;
  _objc_release(uVar8);
  if (lVar6 == 0) {
    lVar7 = param_1;
    func_0x00010beb4520();
    if ((int)lVar7 == 0) {
      if (*(long *)(param_1 + 0x48) == 3) goto LAB_106986708;
    }
    else {
      func_0x00010c09c360(param_1);
    }
  }
  else {
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = param_3;
    _objc_release(uVar8);
    _objc_retain(lVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar6;
    _objc_release(uVar8);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
    puVar3 = PTR_PTR_1126c5368;
    func_0x00010bf063c0(PTR_PTR_1126c5368);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c29bf00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(uVar8);
    _objc_release(puVar3);
LAB_106986708:
    lVar7 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77b40(0);
    _objc_release(lVar7);
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar7 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar8);
    _objc_release(puVar3);
    _objc_release(lVar7);
    _objc_release(puVar10);
    _objc_release(uVar8);
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf763c0();
    _objc_release(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126cf5f0;
    _objc_alloc(PTR_PTR_1126cf5f0);
    func_0x00010c04cd80();
    func_0x00010c2092c0(*(undefined8 *)(param_1 + 0x50));
    _objc_release(puVar3);
    func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x50));
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_7);
    func_0x00010bf0c9a0(param_5);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
LAB_106986940:
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069869bc; end: 106986a07;  */

void FUN_1069869bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfedc0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069869f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106986a08; end: 106986a4f; -[SCStoreProductPageController _didPresentProductViewController] */

void FUN_106986a08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_1 + 8));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106986a50; end: 106986a5b; -[SCStoreProductPageController productViewControllerDidFinish:] */

void FUN_106986a50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf845b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissStoreProductAnimated_comp_1125beb10,1,0);
  return;
}



/* Entry: 106986a5c; end: 106986d03; -[SCStoreProductPageController dismissStoreProductAnimated:completion:] */

undefined8 FUN_106986a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar8 = param_1;
  func_0x00010c07aae0();
  if ((int)lVar8 == 0) {
    uVar5 = 0;
    goto LAB_106986cac;
  }
  lVar6 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar5);
  func_0x00010c1e1340(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c25d700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e5e0(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  lVar8 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5f40();
  _objc_release(lVar8);
  _objc_initWeak(auStack_58,param_1);
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 == 0) {
    if (lVar6 != 0) {
      puVar7 = auStack_90;
      _objc_copyWeak(puVar7,auStack_58);
      _objc_retain(param_4);
      func_0x00010bf84b00(lVar6);
      uVar5 = param_4;
      goto LAB_106986c8c;
    }
    uVar5 = 0;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106986d04;
    puStack_70 = &UNK_110848708;
    puVar7 = auStack_60;
    _objc_copyWeak(puVar7,auStack_58);
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010bf6f440(lVar8);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar5);
    uVar5 = uStack_68;
LAB_106986c8c:
    _objc_release(uVar5);
    _objc_destroyWeak(puVar7);
    uVar5 = 1;
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar6);
LAB_106986cac:
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 106986d04; end: 106986de3;  */

void FUN_106986d04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75220();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106986d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106986de4; end: 106986e43; -[SCStoreProductPageController _showNotificationWithTitle:] */

void FUN_106986de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106986e44; end: 106986e5b; -[SCStoreProductPageController delegate] */

void FUN_106986e44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106986e5c; end: 106986e67; -[SCStoreProductPageController setDelegate:] */

void FUN_106986e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106986e68; end: 106986e6f; -[SCStoreProductPageController loadedTimestamp] */

undefined8 FUN_106986e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106986e70; end: 106986e77; -[SCStoreProductPageController presentedTimestamp] */

undefined8 FUN_106986e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106986e78; end: 106986e7f; -[SCStoreProductPageController setPresented:] */

void FUN_106986e78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106986e80; end: 106986f47; -[SCStoreProductPageController .cxx_destruct] */

void FUN_106986e80(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 106986f48; end: 10698700b; -[SCStoreProductPageControllerNavigationDestination initWithStoreProductPageController:backgroundExitBehavior:] */

undefined1 * FUN_106986f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3f30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    if (param_4 == 0) {
      puVar3 = PTR_PTR_1126aecb0;
      func_0x00010bf9b4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar3;
    }
    else {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_4;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10698700c; end: 106987057; -[SCStoreProductPageControllerNavigationDestination exit:] */

void FUN_10698700c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf845a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106987058; end: 10698707f; -[SCStoreProductPageControllerNavigationDestination backgroundExitBehavior] */

void FUN_106987058(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106987080; end: 106987097; -[SCStoreProductPageControllerNavigationDestination storeProductPageController] */

void FUN_106987080(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106987098; end: 1069870c7; -[SCStoreProductPageControllerNavigationDestination setBackgroundExitBehavior:] */

void FUN_106987098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069870c8; end: 1069870f3; -[SCStoreProductPageControllerNavigationDestination .cxx_destruct] */

void FUN_1069870c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069870f4; end: 10698717f; +[SCStoreProductStandInNavigationSupport attachStandInNavigationDestinationToViewController:pageController:backgroundExitBehavior:] */

void FUN_1069870f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf5f0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04cd80();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c2092c0(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106987180; end: 1069877b3;  */

void FUN_106987180(float param_1,undefined *param_2)

{
  int iVar1;
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
  long lVar15;
  float fVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf05300(param_2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bf61ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar3);
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bef3880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010bef3880();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar2 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = puVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar14;
      if (puVar14 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = puVar2;
      func_0x00010bf2bfa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = puVar2;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = puVar2;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      if (puVar9 == (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar11 = puVar2;
      func_0x00010bf0eb00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      if (puVar11 == (undefined *)0x0) {
        puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 == (undefined *)0x0) {
        _objc_release(puVar12);
      }
      _objc_release(puVar11);
      if (puVar9 == (undefined *)0x0) {
        _objc_release(puVar10);
      }
      _objc_release(puVar9);
      if (puVar7 == (undefined *)0x0) {
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      if (puVar5 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      if (puVar14 == (undefined *)0x0) {
        _objc_release(puVar4);
      }
      _objc_release(puVar14);
      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c298be0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(puVar4);
      fVar16 = 2.0;
      if (2.0 <= param_1) {
        puVar4 = puVar2;
        func_0x00010c298be0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar6 = puVar2;
        func_0x00010c2475c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar14);
        _objc_release(puVar8);
        if (puVar6 == (undefined *)0x0) {
          _objc_release(puVar7);
        }
        _objc_release(puVar6);
        if (puVar4 == (undefined *)0x0) {
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
      }
      iVar1 = 2;
      func_0x000100029b9c(2,0x10,1,0);
      if (iVar1 != 0) {
        puVar4 = puVar2;
        func_0x00010c298be0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(puVar4);
        if (4.0 <= fVar16) {
          puVar4 = puVar2;
          func_0x00010c247820();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar14);
          _objc_release(puVar6);
          if (puVar4 == (undefined *)0x0) {
            _objc_release(puVar5);
          }
          _objc_release(puVar4);
        }
      }
      _objc_release(puVar13);
    }
    _objc_release(puVar2);
    func_0x00010bef7f60(puVar3);
    _objc_release(puVar14);
    _objc_release(puVar2);
  }
  puVar14 = (undefined *)0x0;
  puVar2 = puVar3;
  func_0x00010bd869d0(puVar3,0,&PTR___NSConcreteGlobalBlock_11094ec20);
  _objc_release(puVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_retain(puVar14);
    func_0x00010c0ddbe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c071ae0();
    puVar2 = (undefined *)0x0;
    if ((int)puVar4 == 0) {
      puVar2 = puVar14;
    }
    _objc_retain(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069877b4; end: 10698782b;  */

void FUN_1069877b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_2);
  func_0x00010c0ddbe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c071ae0();
  uVar1 = 0;
  if ((int)uVar3 == 0) {
    uVar1 = param_2;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10698782c; end: 106987957;  */

void FUN_10698782c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106987958;
      puStack_60 = &UNK_1108ecac0;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_50 = uVar2;
      _objc_retain(param_2);
      uStack_48 = (undefined4)uVar1;
      uStack_58 = param_2;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(uStack_58);
      _objc_release(uStack_50);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,uVar1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106987958; end: 10698796b;  */

void FUN_106987958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106987968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 10698796c; end: 106987a0f;  */

void FUN_10698796c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106987a10;
    puStack_38 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    _objc_retain(param_2);
    uStack_30 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_release(lStack_28);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106987a10; end: 106987a1f;  */

void FUN_106987a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106987a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106987a20; end: 106987c1f; -[SCAddFriendsCameraRollCellView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106987a20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f38;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112754708) = 0;
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11275470c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106987c20; end: 106987cc3; -[SCAddFriendsCameraRollCellView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106987c20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3f38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275470c));
  lVar1 = (long)_DAT_112754714;
  if ((*(byte *)(param_1 + _DAT_112754710) & 1) != 0) {
    *(undefined1 *)(param_1 + _DAT_112754710) = 0;
    func_0x00010bf2e480(*(undefined8 *)(param_1 + lVar1));
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275471c);
  *(undefined8 *)(param_1 + _DAT_11275471c) = 0;
  _objc_release(uVar2);
  func_0x00010c139720(param_1);
  return;
}



/* Entry: 106987cc4; end: 106987fb3; -[SCAddFriendsCameraRollCellView setCellViewImageManager:photoAsset:scanState:itemSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106987cc4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c139720(param_3);
  if (param_7 == 4) {
    func_0x00010c09fc00(param_3);
  }
  pdVar1 = (double *)(param_3 + _DAT_112754720);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_11275470c));
  lVar2 = (long)_DAT_112754710;
  lVar3 = (long)_DAT_112754714;
  if ((*(byte *)(param_3 + lVar2) & 1) != 0) {
    *(undefined1 *)(param_3 + lVar2) = 0;
    func_0x00010bf2e480(*(undefined8 *)(param_3 + lVar3));
  }
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_3 + lVar3);
  *(undefined8 *)(param_3 + lVar3) = param_5;
  _objc_release(uVar5);
  lVar10 = (long)_DAT_11275471c;
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_3 + lVar10);
  *(undefined8 *)(param_3 + lVar10) = param_6;
  _objc_release(uVar5);
  if ((*(long *)(param_3 + lVar3) != 0) && (*(long *)(param_3 + lVar10) != 0)) {
    *(undefined1 *)(param_3 + lVar2) = 1;
    _objc_initWeak(auStack_d8,param_3);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar8 = *(undefined8 *)(param_3 + lVar3);
    uVar9 = *(undefined8 *)(param_3 + lVar10);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106987fb4;
    puStack_e8 = &UNK_1108dd238;
    _objc_copyWeak(auStack_e0,auStack_d8);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    _objc_retain(uVar8);
    _objc_retain(uVar9);
    _objc_retain(&puStack_100);
    puVar6 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c18ba80();
    func_0x00010c1ec960(puVar6);
    func_0x00010c1cc000(puVar6);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    dVar11 = 6.81691147847594e-313;
    uStack_90 = 0x2020000000;
    uStack_88 = 1;
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puStack_d0 = puVar4;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10698782c;
    puStack_b8 = &UNK_11094ec40;
    _objc_retain(&puStack_100);
    puStack_a8 = &uStack_a0;
    uVar5 = uVar8;
    puStack_b0 = (undefined1 *)&puStack_100;
    func_0x00010c1357a0(dVar12 * dVar11,dVar13 * dVar11);
    _objc_release(puVar7);
    *(undefined1 *)(puStack_98 + 3) = 0;
    _objc_release(puStack_b0);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puVar6);
    _objc_release(&puStack_100);
    _objc_release(uVar9);
    _objc_release(uVar8);
    *(int *)(param_3 + _DAT_112754718) = (int)uVar5;
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106987fb4; end: 10698802f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106987fb4(long param_1,undefined8 param_2,int param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(int *)(param_1 + _DAT_112754718) == param_3)) {
    *(undefined4 *)(param_1 + _DAT_112754718) = 0;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275470c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106988030; end: 106988077; -[SCAddFriendsCameraRollCellView startScanningAnimation] */

bool FUN_106988030(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010c209fc0(param_1,param_2,2);
    func_0x00010c24dc40(param_1);
  }
  return lVar1 == 1;
}



/* Entry: 106988078; end: 1069880cb; -[SCAddFriendsCameraRollCellView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106988078(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112754708) = param_3;
  func_0x00010bf34100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069880cc; end: 106988107; -[SCAddFriendsCameraRollCellView stopScanningAnimationWithState:] */

void FUN_1069880cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c209fc0();
  if (param_3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010c09fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lockInSuccessView_112605910);
    return;
  }
  return;
}



/* Entry: 106988108; end: 1069882a3; -[SCAddFriendsCameraRollCellView loadFullScreenImageWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106988108(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uStack_90 = (undefined4)*(undefined8 *)(param_1 + _DAT_112754724);
    func_0x00010bfec280();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_1 + _DAT_112754714);
    uVar6 = *(ulong *)(param_1 + _DAT_11275471c);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1069882a4;
    puStack_a8 = &UNK_11094ec70;
    lStack_a0 = param_1;
    _objc_retain(param_3);
    lStack_98 = param_3;
    _objc_retain(&puStack_c0);
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    uVar2 = uVar6;
    func_0x00010c0fce40(uVar6);
    uVar3 = uVar6;
    func_0x00010c0fcaa0(uVar6);
    puVar4 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c1ec960();
    func_0x00010c18ba80(puVar4,param_2,1);
    func_0x00010c1cc000(puVar4,param_2,1);
    puStack_88 = puVar1;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10698796c;
    puStack_70 = &UNK_1108e5788;
    puStack_68 = (undefined1 *)&puStack_c0;
    _objc_retain(&puStack_c0);
    func_0x00010c1357a0((double)uVar2,(double)uVar3,uVar5,param_2,uVar6,0,puVar4,&puStack_88);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puStack_68);
    _objc_release(&puStack_c0);
    _objc_release(puVar4);
    _objc_release(lStack_98);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069882a4; end: 1069882ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069882a4(long param_1,undefined8 param_2)

{
  int iVar1;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754724);
  func_0x00010c296d80();
  if (iVar1 == *(int *)(param_1 + 0x30)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106988300; end: 106988397; -[SCAddFriendsCameraRollCellView resetState] */

void FUN_106988300(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf04020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf04020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    func_0x00010c1683c0(param_1);
    func_0x00010c168040(param_1);
    func_0x00010c168280(param_1);
    func_0x00010c1682e0(param_1);
  }
  func_0x00010c1680c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,1);
  return;
}



/* Entry: 106988398; end: 10698852f; -[SCAddFriendsCameraRollCellView lockInSuccessView] */

void FUN_106988398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010c209fc0(param_5,param_6,4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_5);
  func_0x00010c013de0(puVar1);
  func_0x00010c1683c0(param_5,param_6,puVar1);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_5,param_6,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                      &PTR____CFConstantStringClassReference_110e666d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_6,puVar3);
  func_0x00010c168040(param_5,param_6,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar4 = param_5;
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106988530; end: 106988bd7; -[SCAddFriendsCameraRollCellView startAnimation] */

void FUN_106988530(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  func_0x00010bf20c00();
  uVar9 = (ulong)(uint)(float)(param_4 * 0.5);
  func_0x00010c17a820(uVar9,param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_5);
  func_0x00010c013de0(puVar1);
  func_0x00010c1683c0(param_5,param_6,puVar1);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_5,param_6,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                      &PTR____CFConstantStringClassReference_110e66698);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_6,puVar3);
  func_0x00010c168040(param_5,param_6,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar4 = param_5;
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar9,param_2,param_3,param_4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  uVar2 = param_5;
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar5 = 0;
  _CGPathCreateWithRect(0);
  _objc_release(uVar2);
  func_0x00010c1d9820(puVar1,param_6,uVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar1,param_6,puVar6);
  _objc_release(puVar3);
  func_0x00010c104260(puVar1);
  uVar10 = uVar9;
  func_0x00010bf347a0(param_5);
  dVar11 = (double)(float)uVar10;
  func_0x00010c1dee80(uVar9,dVar11,puVar1);
  uVar2 = param_5;
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _CGPathRelease(uVar5);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf039e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                      &PTR____CFConstantStringClassReference_110e666b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar3,param_6,puVar6);
  func_0x00010c168280(param_5,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar6);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar4 = param_5;
  func_0x00010bf03ea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar9,dVar11,param_3,param_4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(puVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar5 = 0;
  _CGPathCreateWithRect(0);
  _objc_release(uVar2);
  func_0x00010c1d9820(puVar3,param_6,uVar5);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar3,param_6,puVar7);
  _objc_release(puVar6);
  func_0x00010c104260(puVar3);
  uVar10 = uVar9;
  func_0x00010bf347a0(param_5);
  func_0x00010c1dee80(uVar9,(double)-(float)uVar10,puVar3);
  uVar2 = param_5;
  func_0x00010bf03ea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _CGPathRelease(uVar5);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf03ea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar6);
  func_0x00010c1682e0(param_5,param_6,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xa1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf03ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init();
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(0,0,puVar7);
  _objc_release(uVar2);
  func_0x00010bf20c00(puVar7);
  uVar5 = 0;
  _CGPathCreateWithRect();
  func_0x00010c1d9820(puVar7,param_6,uVar5);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar7,param_6,puVar6);
  _objc_release(puVar8);
  func_0x00010c104260(puVar7);
  func_0x00010c1dee80(puVar7);
  uVar2 = param_5;
  func_0x00010bf03ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _CGPathRelease(uVar5);
  uVar2 = param_5;
  func_0x00010bf04020(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf03ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c23e8a0(param_5);
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106988bd8; end: 106988ed3; -[SCAddFriendsCameraRollCellView slideDown] */

void FUN_106988bd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  func_0x00010bf03a80();
  func_0x00010c1680c0(param_1,param_2,(int)uVar1 + 1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,
                      &PTR__OBJC_CLASS___NSConstantFloatNumber_1111863e0,
                      *(undefined8 *)PTR__kCATransactionAnimationDuration_110346d90);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = 0xc2000000;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106988ed4;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,&puStack_88);
  uVar1 = param_1;
  func_0x00010bf03ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  uVar8 = uVar7;
  func_0x00010bf347a0(param_1);
  uVar4 = param_1;
  func_0x00010bf03ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(uVar7,(double)(float)uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf039e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  uVar8 = uVar7;
  func_0x00010bf347a0(param_1);
  uVar4 = param_1;
  func_0x00010bf039e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(uVar7,(double)((float)uVar8 * 3.0));
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf03ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  uVar6 = uVar7;
  func_0x00010bf347a0(param_1);
  func_0x00010bf03ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(uVar7,(double)((float)uVar6 + (float)uVar6) + 2.5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 106988ed4; end: 106988fff;  */

void FUN_106988ed4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar1 == 5) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf039e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fe999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf039e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c252440();
    if (lVar1 != 4) goto LAB_106988fec;
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf039e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  _objc_release(uVar2);
  _objc_release(puVar3);
LAB_106988fec:
                    /* WARNING: Could not recover jumptable at 0x00010c23e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_slideUp_11266d468);
  return;
}



/* Entry: 106989000; end: 1069892cf; -[SCAddFriendsCameraRollCellView slideUp] */

void FUN_106989000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,
                      &PTR__OBJC_CLASS___NSConstantFloatNumber_1111863e0,
                      *(undefined8 *)PTR__kCATransactionAnimationDuration_110346d90);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = 0xc2000000;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1069892d0;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,&puStack_88);
  uVar1 = param_1;
  func_0x00010bf03ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  uVar8 = uVar7;
  func_0x00010bf347a0(param_1);
  uVar4 = param_1;
  func_0x00010bf03ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(uVar7,(double)-(float)uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf039e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  uVar8 = uVar7;
  func_0x00010bf347a0(param_1);
  uVar4 = param_1;
  func_0x00010bf039e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(uVar7,(double)(float)uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf03ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  func_0x00010bf03ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(uVar7,0xc004000000000000);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 1069892d0; end: 106989383;  */

void FUN_1069892d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c252440();
    if (lVar1 != 3) {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c252440();
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_fadeAway_1125c56f8);
        return;
      }
      func_0x00010c252440();
      if (lVar2 == 4) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf0b900(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_slideDown_11266d450);
  return;
}



/* Entry: 106989384; end: 1069894a3; -[SCAddFriendsCameraRollCellView fadeAway] */

void FUN_106989384(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,
                      &PTR__OBJC_CLASS___NSConstantFloatNumber_1111863f0,
                      *(undefined8 *)PTR__kCATransactionAnimationDuration_110346d90);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069894a4;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_1;
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,&puStack_68);
  func_0x00010bf039e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(uVar2,param_2,puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 1069894a4; end: 1069894ab;  */

void FUN_1069894a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_resetState_11262bfe8)
  ;
  return;
}



/* Entry: 1069894ac; end: 1069894cb; -[SCAddFriendsCameraRollCellView cellStateDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069894ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112754728);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069894cc; end: 1069894df; -[SCAddFriendsCameraRollCellView setCellStateDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069894cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112754728,param_3);
  return;
}



/* Entry: 1069894e0; end: 1069894ef; -[SCAddFriendsCameraRollCellView assetUrlDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069894e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275472c);
}



/* Entry: 1069894f0; end: 10698952f; -[SCAddFriendsCameraRollCellView setAssetUrlDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069894f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275472c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106989530; end: 10698953f; -[SCAddFriendsCameraRollCellView animationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106989530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754730);
}



/* Entry: 106989540; end: 10698957f; -[SCAddFriendsCameraRollCellView setAnimationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754730;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106989580; end: 10698958f; -[SCAddFriendsCameraRollCellView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106989580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275470c);
}



/* Entry: 106989590; end: 1069895cf; -[SCAddFriendsCameraRollCellView setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275470c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069895d0; end: 1069895df; -[SCAddFriendsCameraRollCellView animationBaseImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069895d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754734);
}



/* Entry: 1069895e0; end: 10698961f; -[SCAddFriendsCameraRollCellView setAnimationBaseImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069895e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754734;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106989620; end: 10698962f; -[SCAddFriendsCameraRollCellView animationOverImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106989620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754738);
}



/* Entry: 106989630; end: 10698966f; -[SCAddFriendsCameraRollCellView setAnimationOverImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754738;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106989670; end: 10698967f; -[SCAddFriendsCameraRollCellView animationScanBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106989670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275473c);
}



/* Entry: 106989680; end: 1069896bf; -[SCAddFriendsCameraRollCellView setAnimationScanBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275473c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069896c0; end: 1069896cf; -[SCAddFriendsCameraRollCellView animationCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1069896c0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112754700);
}



/* Entry: 1069896d0; end: 1069896df; -[SCAddFriendsCameraRollCellView setAnimationCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069896d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_112754700) = param_3;
  return;
}



/* Entry: 1069896e0; end: 1069896ef; -[SCAddFriendsCameraRollCellView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069896e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754708);
}



/* Entry: 1069896f0; end: 1069896ff; -[SCAddFriendsCameraRollCellView centerPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1069896f0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112754704);
}



/* Entry: 106989700; end: 10698970f; -[SCAddFriendsCameraRollCellView setCenterPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989700(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + _DAT_112754704) = param_1;
  return;
}



/* Entry: 106989710; end: 1069897cb; -[SCAddFriendsCameraRollCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989710(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275473c,0);
  _objc_storeStrong(param_1 + _DAT_112754738,0);
  _objc_storeStrong(param_1 + _DAT_112754734,0);
  _objc_storeStrong(param_1 + _DAT_11275470c,0);
  _objc_storeStrong(param_1 + _DAT_112754730,0);
  _objc_storeStrong(param_1 + _DAT_11275472c,0);
  _objc_destroyWeak(param_1 + _DAT_112754728);
  _objc_storeStrong(param_1 + _DAT_11275471c,0);
  _objc_storeStrong(param_1 + _DAT_112754714,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754724,0);
  return;
}



/* Entry: 1069897cc; end: 10698998b; -[SCAddFriendsCameraRollHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069897cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f40;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112754740;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e66738;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(ppuVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10698998c; end: 106989a5b;  */

void FUN_10698998c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0,0x4044000000000000,0,0x4044000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106989a5c; end: 106989acb; -[SCAddFriendsCameraRollHeaderView updateCameraRollStatusWithPhotoStatus:sourceFromSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989a5c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e66778;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e66738;
  }
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e66758;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112754740));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106989acc; end: 106989adf; -[SCAddFriendsCameraRollHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106989acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754740,0);
  return;
}



/* Entry: 106989ae0; end: 106989be3; -[SCAddFriendsCameraRollPickerDriver initWithIsPageSourceFromSettings:snapcodeIdentifierProvider:modelProvider:deepScanConfiguration:delegate:] */

undefined1 *
FUN_106989ae0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3f48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x20) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x21) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106989be4; end: 106989d2f; -[SCAddFriendsCameraRollPickerDriver collectionWithFrame:] */

void FUN_106989be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0x3ff0000000000000);
  func_0x00010c1c82c0(0x3ff0000000000000,puVar1);
  func_0x00010c1a7960(param_3,0x4054000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  func_0x00010c189840(puVar2);
  func_0x00010c18b5e0(puVar2);
  _objc_opt_class(PTR_PTR_1126cf5f8);
  func_0x00010c126000(puVar2);
  _objc_opt_class(PTR_PTR_1126cf600);
  func_0x00010c126060(puVar2);
  func_0x00010c160fc0(puVar2);
  _objc_storeWeak(param_4 + 0x50,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106989d30; end: 106989d37; -[SCAddFriendsCameraRollPickerDriver collectionView:numberOfItemsInSection:] */

void FUN_106989d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106989d38; end: 106989e8b; -[SCAddFriendsCameraRollPickerDriver collectionView:cellForItemAtIndexPath:] */

void FUN_106989d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e66798,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a4c0();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c067ec0();
  func_0x00010c084a80(param_1);
  func_0x00010c17a560(param_3,param_2,uVar4,uVar3,(long)(int)uVar1);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c1554e0();
  func_0x00010c142240();
  _objc_release(param_4);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e667f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106989e8c; end: 106989eeb; -[SCAddFriendsCameraRollPickerDriver collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_106989e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bf6e120(param_3,param_2,param_4,&PTR____CFConstantStringClassReference_110e667b8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar1);
  func_0x00010c284160(param_3,param_2,lVar1 != 0,*(undefined1 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106989eec; end: 10698a01b; -[SCAddFriendsCameraRollPickerDriver updateWithFetchResult:] */

void FUN_106989eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar1);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x18),param_2,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7ab0,uVar5);
        uVar5 = uVar5 + 1;
        uVar4 = *(ulong *)(param_1 + 0x10);
        func_0x00010bf529e0();
      } while (uVar5 < uVar4);
    }
    if (*(long *)(param_1 + 8) == 0) {
      puVar2 = PTR__OBJC_CLASS___PHCachingImageManager_1126c3270;
      _objc_alloc_init();
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar2;
      _objc_release(uVar1);
      func_0x00010c1674c0(*(undefined8 *)(param_1 + 8),param_2,0);
    }
  }
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10698a01c; end: 10698a01f; -[SCAddFriendsCameraRollPickerDriver collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_10698a01c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_itemSize_1125fecb0);
  return;
}



/* Entry: 10698a020; end: 10698a0cb; -[SCAddFriendsCameraRollPickerDriver collectionView:didSelectItemAtIndexPath:] */

void FUN_10698a020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf33b60(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((*(char *)(param_1 + 0x21) == '\x01') &&
     (uVar1 = param_3, func_0x00010c2506a0(), (int)uVar1 != 0)) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10698a0cc;
    puStack_38 = &UNK_11084a078;
    lStack_30 = param_1;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010c09b5c0(param_3,param_2,&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10698a0cc; end: 10698a0f3;  */

void FUN_10698a0cc(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_scanForImage_originalImage_cellI_112631510,
               param_2,param_2,*(undefined8 *)(param_1 + 0x28),0,0,1);
    return;
  }
  return;
}


