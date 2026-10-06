/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b9c880; end: 106b9c883;  */

void FUN_106b9c880(void)

{
  return;
}



/* Entry: 106b9c884; end: 106b9c9bf; -[SCPlayGamesLensInfoCardEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c884(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  FUN_106b9c7a4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0949a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2f20();
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11275960c);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11275960c);
    }
    func_0x00010c12e1c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112759608);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112759608);
    }
    func_0x00010c12e1c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127595e8);
  *(undefined8 *)(param_1 + _DAT_1127595e8) = 0;
  _objc_release(uVar3);
  puStack_38 = PTR_PTR_1126f5570;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9c9c0; end: 106b9ca6f; -[SCPlayGamesLensInfoCardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c9c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759610);
  _objc_storeStrong(param_1 + _DAT_11275960c,0);
  _objc_storeStrong(param_1 + _DAT_112759608,0);
  _objc_destroyWeak(param_1 + _DAT_112759604);
  _objc_destroyWeak(param_1 + _DAT_112759600);
  _objc_destroyWeak(param_1 + _DAT_1127595fc);
  _objc_destroyWeak(param_1 + _DAT_1127595f8);
  _objc_destroyWeak(param_1 + _DAT_1127595f4);
  _objc_destroyWeak(param_1 + _DAT_1127595f0);
  _objc_destroyWeak(param_1 + _DAT_1127595ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127595e8,0);
  return;
}



/* Entry: 106b9ca70; end: 106b9ca73; -[SCLensInfoCardCallToActionNullLauncher launchCallToActionViewForLens:presentingViewController:] */

void FUN_106b9ca70(void)

{
  return;
}



/* Entry: 106b9ca74; end: 106b9cba7; -[SCLensInfoCardOnCameraScopePresenter initWithScopeExposer:scopeServices:actionHandler:lensCarouselManagementServices:] */

undefined1 *
FUN_106b9ca74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5578;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9cba8; end: 106b9cc93; -[SCLensInfoCardOnCameraScopePresenter presentInfoCardFromViewController:lensMetadata:source:dismissBlock:] */

void FUN_106b9cba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bf247e0(uVar2,param_2,param_3,param_4,param_1,param_5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d0d60;
  _objc_alloc(PTR_PTR_1126d0d60);
  func_0x00010c041d60();
  _objc_release(param_6);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  func_0x00010bf47d40(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
  func_0x00010be90220(param_1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b9cc94; end: 106b9cca3; -[SCLensInfoCardOnCameraScopePresenter isPresented] */

void FUN_106b9cc94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110964768);
  return;
}



/* Entry: 106b9cca4; end: 106b9ccbf;  */

uint FUN_106b9cca4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0805a0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106b9ccc0; end: 106b9cdcf; -[SCLensInfoCardOnCameraScopePresenter lensInfoCard:didDismissWithActionType:] */

void FUN_106b9ccc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be38ce0(param_1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c0dfd40(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x30),param_2,lVar1);
    func_0x00010be90240(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = lVar2;
    func_0x00010c150520(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1e0(uVar3,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf83300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = lVar2;
      func_0x00010bf83300();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
    func_0x00010bfd1460(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b9cdd0; end: 106b9cebf; -[SCLensInfoCardOnCameraScopePresenter lensInfoCardDidSuspend:] */

void FUN_106b9cdd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be38ce0();
  if (lVar1 == 0x7fffffffffffffff) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0d60;
  _objc_alloc(PTR_PTR_1126d0d60);
  uVar4 = uVar2;
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf83300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041d60(puVar3,param_2,uVar4,uVar5,1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar3,lVar1);
  func_0x00010be90240(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b9cec0; end: 106b9cfaf; -[SCLensInfoCardOnCameraScopePresenter lensInfoCardDidResume:] */

void FUN_106b9cec0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be38ce0();
  if (lVar1 == 0x7fffffffffffffff) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0d60;
  _objc_alloc(PTR_PTR_1126d0d60);
  uVar4 = uVar2;
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf83300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041d60(puVar3,param_2,uVar4,uVar5,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar3,lVar1);
  func_0x00010be90220(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b9cfb0; end: 106b9cfb3; -[SCLensInfoCardOnCameraScopePresenter isInfoCardPresented] */

void FUN_106b9cfb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07aaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPresented_1125fc4c8);
  return;
}



/* Entry: 106b9cfb4; end: 106b9cfd3; -[SCLensInfoCardOnCameraScopePresenter isInfoCardActive] */

bool FUN_106b9cfb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106b9cfd4; end: 106b9cfdb; -[SCLensInfoCardOnCameraScopePresenter infoCardsLifecycleObservable] */

void FUN_106b9cfd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 106b9cfdc; end: 106b9cfe3; -[SCLensInfoCardOnCameraScopePresenter _reportScopeLifecycleEvent:] */

void FUN_106b9cfdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028);
  return;
}



/* Entry: 106b9cfe4; end: 106b9d027; -[SCLensInfoCardOnCameraScopePresenter _reportScopeBegan] */

void FUN_106b9cfe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0d68;
  func_0x00010bfedbc0(PTR_PTR_1126d0d68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90260(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b9d028; end: 106b9d07f; -[SCLensInfoCardOnCameraScopePresenter _reportScopeEndedIfNeeded] */

void FUN_106b9d028(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010c07aae0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126d0d68;
  func_0x00010bfedbe0(PTR_PTR_1126d0d68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90260(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b9d080; end: 106b9d15b; -[SCLensInfoCardOnCameraScopePresenter _indexOfScope:] */

undefined8 FUN_106b9d080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106b9d114;
  puStack_30 = &UNK_110964788;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece60(uVar1,param_2,2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106b9d15c; end: 106b9d1bb; -[SCLensInfoCardOnCameraScopePresenter .cxx_destruct] */

void FUN_106b9d15c(long param_1)

{
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



/* Entry: 106b9d1bc; end: 106b9d337; -[SCLensInfoCardScopePresenter initWithScopeServices:scopeExposer:actionHandler:infoCardReportServices:lensCreatorSubscriptionProviderServices:lensTopicsServices:spectaclesLensServices:] */

undefined1 *
FUN_106b9d1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f5580;
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9d338; end: 106b9d3bb; -[SCLensInfoCardScopePresenter dealloc] */

void FUN_106b9d338(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x48);
    _objc_release();
    if (lVar1 == lVar2) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  puStack_38 = PTR_PTR_1126f5580;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b9d3bc; end: 106b9d4a3; -[SCLensInfoCardScopePresenter presentInfoCardFromViewController:lensMetadata:source:dismissBlock:] */

void FUN_106b9d3bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  FUN_106b9d5d0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010bf51e00();
  _objc_release(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf247c0(uVar2,param_2,param_3,param_4,param_1,param_5,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47d40(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b9d4a4; end: 106b9d4db; -[SCLensInfoCardScopePresenter isPresented] */

bool FUN_106b9d4a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106b9d4dc; end: 106b9d54b; -[SCLensInfoCardScopePresenter lensInfoCard:didDismissWithActionType:] */

void FUN_106b9d4dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
  func_0x00010bfd1460(*(undefined8 *)(param_1 + 0x18),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b9d54c; end: 106b9d5cf; -[SCLensInfoCardScopePresenter .cxx_destruct] */

void FUN_106b9d54c(long param_1)

{
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



/* Entry: 106b9d5d0; end: 106b9d6cb;  */

void FUN_106b9d5d0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  _objc_retain();
  if (lRam00000001136c6c90 != -1) {
    puVar1 = (undefined *)0x1136c6c90;
    func_0x00010002a2fc(0x1136c6c90,&PTR___NSConcreteGlobalBlock_1109647b8);
  }
  puVar4 = param_1;
  if ((bRam00000001136c6c88 & 1) == 0) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010b0ec84c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      _objc_retain(param_1);
    }
    else {
      puVar2 = PTR_PTR_1126b0820;
      func_0x00010c08fb40(PTR_PTR_1126b0820);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2b2880();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b9d6cc; end: 106b9d72b;  */

void FUN_106b9d6cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  uRam00000001136c6c88 = SUB81(puVar3,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b9d72c; end: 106b9d7db; -[SCLensInfoCardOnCameraScopeState initWithScope:dismissBlock:isSuspended:] */

undefined1 *
FUN_106b9d72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5588;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9d7dc; end: 106b9d7e3; -[SCLensInfoCardOnCameraScopeState scope] */

undefined8 FUN_106b9d7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9d7e4; end: 106b9d7eb; -[SCLensInfoCardOnCameraScopeState dismissBlock] */

undefined8 FUN_106b9d7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9d7ec; end: 106b9d7f3; -[SCLensInfoCardOnCameraScopeState isSuspended] */

undefined1 FUN_106b9d7ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b9d7f4; end: 106b9d823; -[SCLensInfoCardOnCameraScopeState .cxx_destruct] */

void FUN_106b9d7f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b9d824; end: 106b9d82b; -[SCLensInfoCardActionHandlingServices lensInfoCardActionHandlerProvider] */

undefined8 FUN_106b9d824(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9d82c; end: 106b9d837; -[SCLensInfoCardActionHandlingServices .cxx_destruct] */

void FUN_106b9d82c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9d838; end: 106b9d8ab; -[SCGrapheneGamesLensProcessingMetric2 init] */

undefined1 * FUN_106b9d838(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5598;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b9d8ac; end: 106b9da1f;  */

/* WARNING: Removing unreachable block (ram,0x000106b9dca8) */

char * FUN_106b9d8ac(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  char *unaff_x24;
  char *pcStack_290;
  undefined *puStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  char acStack_260 [24];
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  char acStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar10 = acStack_140;
  pcStack_88 = FUN_106b9da20;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar4;
  pcVar12 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(param_4);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_120,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_108,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,pcVar2);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,acStack_120,&lStack_d8,3);
    pcVar7 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110964828,acStack_140,param_5);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar14 = 0;
    pcVar9 = pcVar10;
    pcVar12 = param_5;
    do {
      if ((&cStack_d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_140;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar10 = acStack_120;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar10);
  _objc_release(param_4);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_106b9dce0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar11 = pcVar9;
  pcStack_180 = unaff_x24;
  pcStack_178 = pcVar10;
  pcStack_170 = pcVar2;
  pcStack_168 = param_4;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_90;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  puVar15 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = (char *)auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar8 = "";
    pcVar10 = acStack_1d8;
    pcVar11 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110964878,pcVar11,pcVar12);
    pcStack_1c0 = pcVar10;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar14 = 0;
    puVar15 = auStack_1b8;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcVar12 = acStack_260;
    pcStack_1e8 = FUN_106b9df10;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar11;
    pcStack_220 = unaff_x24;
    pcStack_218 = pcVar10;
    puStack_210 = puVar15;
    pcStack_208 = pcVar1;
    pcStack_200 = pcVar9;
    pcStack_1f8 = pcVar7;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      plVar13 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_240,pcVar1);
      acStack_260[0] = '\0';
      acStack_260[1] = '\0';
      acStack_260[2] = '\0';
      acStack_260[3] = '\0';
      acStack_260[4] = '\0';
      acStack_260[5] = '\0';
      acStack_260[6] = '\0';
      acStack_260[7] = '\0';
      acStack_260[8] = '\0';
      acStack_260[9] = '\0';
      acStack_260[10] = '\0';
      acStack_260[0xb] = '\0';
      acStack_260[0xc] = '\0';
      acStack_260[0xd] = '\0';
      acStack_260[0xe] = '\0';
      acStack_260[0xf] = '\0';
      acStack_260[0x10] = '\0';
      acStack_260[0x11] = '\0';
      acStack_260[0x12] = '\0';
      acStack_260[0x13] = '\0';
      acStack_260[0x14] = '\0';
      acStack_260[0x15] = '\0';
      acStack_260[0x16] = '\0';
      acStack_260[0x17] = '\0';
      func_0x00010007e1e8(acStack_260,auStack_240,&lStack_228,1);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109648c8,acStack_260,pcVar11);
      puStack_248 = acStack_260;
      func_0x00010007e5dc(&puStack_248);
      pcVar2 = pcVar12;
      if (cStack_229 < '\0') {
        __ZdlPv(auStack_240[0]);
        pcVar2 = pcVar12;
      }
    }
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      ppcVar5 = &pcStack_290;
      pcStack_268 = FUN_106b9e084;
      pcStack_280 = pcVar1;
      pcStack_278 = pcVar8;
      ppppuStack_270 = &pppuStack_1f0;
      _objc_retain(pcVar2);
      puStack_288 = PTR_PTR_1126f55a0;
      pcStack_290 = pcVar4;
      _objc_msgSendSuper2(&pcStack_290,PTR_s_init_1125d9248);
      if (ppcVar5 != (char **)0x0) {
        _objc_retain(pcVar2);
        uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
        *(char **)((long)ppcVar5 + 8) = pcVar2;
        _objc_release(uVar6);
      }
      _objc_release(pcVar2);
      return (char *)ppcVar5;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 106b9da20; end: 106b9dcdf;  */

/* WARNING: Removing unreachable block (ram,0x000106b9dca8) */

char * FUN_106b9da20(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  char *unaff_x24;
  char *pcStack_210;
  undefined *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110964828,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar5 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar14 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar14);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_106b9dce0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar5;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar14;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar8 = "";
    pcVar14 = acStack_158;
    pcVar9 = acStack_158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110964878,pcVar9,pcVar4);
    pcStack_140 = pcVar14;
    func_0x00010007e5dc(&pcStack_140);
    lVar11 = 0;
    puVar12 = auStack_138;
    do {
      if ((&cStack_109)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar2 = pcVar4;
    __Unwind_Resume();
    pcVar10 = acStack_1e0;
    pcStack_168 = FUN_106b9df10;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar9;
    pcStack_1a0 = unaff_x24;
    pcStack_198 = pcVar14;
    puStack_190 = puVar12;
    pcStack_188 = pcVar4;
    pcStack_180 = pcVar5;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar8);
    if (pcVar2 != (char *)0x0) {
      plVar13 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1c0,pcVar1);
      acStack_1e0[0] = '\0';
      acStack_1e0[1] = '\0';
      acStack_1e0[2] = '\0';
      acStack_1e0[3] = '\0';
      acStack_1e0[4] = '\0';
      acStack_1e0[5] = '\0';
      acStack_1e0[6] = '\0';
      acStack_1e0[7] = '\0';
      acStack_1e0[8] = '\0';
      acStack_1e0[9] = '\0';
      acStack_1e0[10] = '\0';
      acStack_1e0[0xb] = '\0';
      acStack_1e0[0xc] = '\0';
      acStack_1e0[0xd] = '\0';
      acStack_1e0[0xe] = '\0';
      acStack_1e0[0xf] = '\0';
      acStack_1e0[0x10] = '\0';
      acStack_1e0[0x11] = '\0';
      acStack_1e0[0x12] = '\0';
      acStack_1e0[0x13] = '\0';
      acStack_1e0[0x14] = '\0';
      acStack_1e0[0x15] = '\0';
      acStack_1e0[0x16] = '\0';
      acStack_1e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1e0,auStack_1c0,&lStack_1a8,1);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109648c8,acStack_1e0,pcVar9);
      puStack_1c8 = acStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      pcVar3 = pcVar10;
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
        pcVar3 = pcVar10;
      }
    }
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar5 = pcVar1;
      __Unwind_Resume();
      ppcVar6 = &pcStack_210;
      pcStack_1e8 = FUN_106b9e084;
      pcStack_200 = pcVar1;
      pcStack_1f8 = pcVar8;
      pppuStack_1f0 = &ppuStack_170;
      _objc_retain(pcVar3);
      puStack_208 = PTR_PTR_1126f55a0;
      pcStack_210 = pcVar5;
      _objc_msgSendSuper2(&pcStack_210,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        _objc_retain(pcVar3);
        uVar7 = *(undefined8 *)((long)ppcVar6 + 8);
        *(char **)((long)ppcVar6 + 8) = pcVar3;
        _objc_release(uVar7);
      }
      _objc_release(pcVar3);
      return (char *)ppcVar6;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 106b9dce0; end: 106b9df0f;  */

char * FUN_106b9dce0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110964878,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar8 = acStack_120;
  pcStack_a8 = FUN_106b9df10;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109648c8,acStack_120,pcVar4);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar7 = pcVar8;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar7 = pcVar8;
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  ppcVar5 = &pcStack_150;
  pcStack_128 = FUN_106b9e084;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar7);
  puStack_148 = PTR_PTR_1126f55a0;
  pcStack_150 = pcVar2;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    _objc_retain(pcVar7);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
    *(char **)((long)ppcVar5 + 8) = pcVar7;
    _objc_release(uVar6);
  }
  _objc_release(pcVar7);
  return (char *)ppcVar5;
}



/* Entry: 106b9df10; end: 106b9e083;  */

char * FUN_106b9df10(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109648c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_106b9e084;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_a8 = PTR_PTR_1126f55a0;
  pcStack_b0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  return (char *)ppcVar3;
}



/* Entry: 106b9e084; end: 106b9e0f7; -[SCComposerLensActionHandlingServices initWithLensActionHandlerFactory:] */

undefined1 * FUN_106b9e084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f55a0;
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



/* Entry: 106b9e0f8; end: 106b9e0ff; -[SCComposerLensActionHandlingServices lensActionHandlerFactory] */

undefined8 FUN_106b9e0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9e100; end: 106b9e10b; -[SCComposerLensActionHandlingServices .cxx_destruct] */

void FUN_106b9e100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9e10c; end: 106b9e17f; -[SCLensActivityCenterNavigationServices initWithLensActivityCenterPresenter:] */

undefined1 * FUN_106b9e10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f55a8;
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



/* Entry: 106b9e180; end: 106b9e187; -[SCLensActivityCenterNavigationServices lensActivityCenterPresenter] */

undefined8 FUN_106b9e180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9e188; end: 106b9e193; -[SCLensActivityCenterNavigationServices .cxx_destruct] */

void FUN_106b9e188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9e194; end: 106b9e28f; -[SCLensExplorerBannerModel initWithSectionId:layout:viewModel:isVisible:] */

undefined1 *
FUN_106b9e194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f55b0;
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



/* Entry: 106b9e290; end: 106b9e297; -[SCLensExplorerBannerModel sectionId] */

undefined8 FUN_106b9e290(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9e298; end: 106b9e29f; -[SCLensExplorerBannerModel layout] */

undefined8 FUN_106b9e298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9e2a0; end: 106b9e2a7; -[SCLensExplorerBannerModel viewModel] */

undefined8 FUN_106b9e2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9e2a8; end: 106b9e2af; -[SCLensExplorerBannerModel isVisible] */

undefined8 FUN_106b9e2a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b9e2b0; end: 106b9e2f7; -[SCLensExplorerBannerModel .cxx_destruct] */

void FUN_106b9e2b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9e2f8; end: 106b9e36b; -[SCLensExplorerBannerProviderPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_106b9e2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f55b8;
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



/* Entry: 106b9e36c; end: 106b9e373; -[SCLensExplorerBannerProviderPluginScope plugInRegistry] */

undefined8 FUN_106b9e36c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9e374; end: 106b9e37f; -[SCLensExplorerBannerProviderPluginScope .cxx_destruct] */

void FUN_106b9e374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9e380; end: 106b9e387; -[SCLensExplorerDynamicLayoutServices layoutBuilder] */

undefined8 FUN_106b9e380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9e388; end: 106b9e38f; -[SCLensExplorerDynamicLayoutServices customLayoutBuilder] */

undefined8 FUN_106b9e388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9e390; end: 106b9e3cb; -[SCLensExplorerDynamicLayoutServices .cxx_destruct] */

void FUN_106b9e390(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9e3cc; end: 106b9e45b; -[SCLensExplorerDynamicLayoutContainerAttributes initWithLayoutId:useCardBackgroud:useFullWidth:] */

undefined1 *
FUN_106b9e3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f55c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9e45c; end: 106b9e47f; -[SCLensExplorerDynamicLayoutContainerAttributes copyWithZone:] */

undefined8 FUN_106b9e45c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9e480; end: 106b9e4f3; -[SCLensExplorerDynamicLayoutContainerAttributes hash] */

undefined8 * FUN_106b9e480(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b9e588;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106b9e588;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b9e588;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106b9e588:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106b9e4f4; end: 106b9e5a3; -[SCLensExplorerDynamicLayoutContainerAttributes isEqual:] */

long FUN_106b9e4f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b9e588;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_106b9e588;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b9e588;
    }
  }
  lVar3 = 1;
LAB_106b9e588:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b9e5a4; end: 106b9e5ab; -[SCLensExplorerDynamicLayoutContainerAttributes layoutId] */

undefined8 FUN_106b9e5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9e5ac; end: 106b9e5b3; -[SCLensExplorerDynamicLayoutContainerAttributes useCardBackgroud] */

undefined1 FUN_106b9e5ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b9e5b4; end: 106b9e5bb; -[SCLensExplorerDynamicLayoutContainerAttributes useFullWidth] */

undefined1 FUN_106b9e5b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b9e5bc; end: 106b9e5c7; -[SCLensExplorerDynamicLayoutContainerAttributes .cxx_destruct] */

void FUN_106b9e5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b9e5c8; end: 106b9e69f; -[SCLensExplorerStackLayout initWithContainerAttributes:root:layouts:] */

undefined1 *
FUN_106b9e5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f55d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9e6a0; end: 106b9e6c3; -[SCLensExplorerStackLayout copyWithZone:] */

undefined8 FUN_106b9e6a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9e6c4; end: 106b9e743; -[SCLensExplorerStackLayout hash] */

undefined8 * FUN_106b9e6c4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
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
LAB_106b9e7dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b9e7e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106b9e7e8;
          }
          goto LAB_106b9e7dc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106b9e7e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106b9e744; end: 106b9e803; -[SCLensExplorerStackLayout isEqual:] */

long FUN_106b9e744(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b9e7dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b9e7e8;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106b9e7e8;
          }
          goto LAB_106b9e7dc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b9e7e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b9e804; end: 106b9e80b; -[SCLensExplorerStackLayout containerAttributes] */

undefined8 FUN_106b9e804(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9e80c; end: 106b9e813; -[SCLensExplorerStackLayout root] */

undefined8 FUN_106b9e80c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9e814; end: 106b9e81b; -[SCLensExplorerStackLayout layouts] */

undefined8 FUN_106b9e814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9e81c; end: 106b9e857; -[SCLensExplorerStackLayout .cxx_destruct] */

void FUN_106b9e81c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b9e858; end: 106b9e927; -[SCLensExplorerGroupLayout initWithOrientation:alignment:paddingMultipliers:spacingMultiplier:layoutElements:] */

undefined1 *
FUN_106b9e858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f55d8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9e928; end: 106b9e94b; -[SCLensExplorerGroupLayout copyWithZone:] */

undefined8 FUN_106b9e928(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9e94c; end: 106b9e9eb; -[SCLensExplorerGroupLayout hash] */

undefined8 * FUN_106b9e94c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106b9eac0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b9eacc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
        if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106b9eacc;
        }
        goto LAB_106b9eac0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_106b9eacc:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 106b9e9ec; end: 106b9eae7; -[SCLensExplorerGroupLayout isEqual:] */

long FUN_106b9e9ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b9eac0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b9eacc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106b9eacc;
        }
        goto LAB_106b9eac0;
      }
    }
    lVar4 = 0;
  }
LAB_106b9eacc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106b9eae8; end: 106b9eaef; -[SCLensExplorerGroupLayout orientation] */

undefined8 FUN_106b9eae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9eaf0; end: 106b9eaf7; -[SCLensExplorerGroupLayout alignment] */

undefined8 FUN_106b9eaf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9eaf8; end: 106b9eaff; -[SCLensExplorerGroupLayout paddingMultipliers] */

undefined8 FUN_106b9eaf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9eb00; end: 106b9eb07; -[SCLensExplorerGroupLayout spacingMultiplier] */

undefined8 FUN_106b9eb00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b9eb08; end: 106b9eb0f; -[SCLensExplorerGroupLayout layoutElements] */

undefined8 FUN_106b9eb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b9eb10; end: 106b9eb3f; -[SCLensExplorerGroupLayout .cxx_destruct] */

void FUN_106b9eb10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106b9eb40; end: 106b9ec0f; -[SCLensExplorerLayout initWithElementId:weight:aspectRatio:shapedBackground:layout:] */

undefined1 *
FUN_106b9eb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f55e0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
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
  return (undefined1 *)puVar1;
}



/* Entry: 106b9ec10; end: 106b9ec33; -[SCLensExplorerLayout copyWithZone:] */

undefined8 FUN_106b9ec10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9ec34; end: 106b9ecd7; -[SCLensExplorerLayout hash] */

undefined8 * FUN_106b9ec34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106b9edac:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b9edb8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
        if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106b9edb8;
        }
        goto LAB_106b9edac;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_106b9edb8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 106b9ecd8; end: 106b9edd3; -[SCLensExplorerLayout isEqual:] */

long FUN_106b9ecd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b9edac:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b9edb8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106b9edb8;
        }
        goto LAB_106b9edac;
      }
    }
    lVar4 = 0;
  }
LAB_106b9edb8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106b9edd4; end: 106b9eddb; -[SCLensExplorerLayout elementId] */

undefined8 FUN_106b9edd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9eddc; end: 106b9ede3; -[SCLensExplorerLayout weight] */

undefined8 FUN_106b9eddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9ede4; end: 106b9edeb; -[SCLensExplorerLayout aspectRatio] */

undefined8 FUN_106b9ede4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9edec; end: 106b9edf3; -[SCLensExplorerLayout shapedBackground] */

undefined8 FUN_106b9edec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b9edf4; end: 106b9edfb; -[SCLensExplorerLayout layout] */

undefined8 FUN_106b9edf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b9edfc; end: 106b9ee2b; -[SCLensExplorerLayout .cxx_destruct] */

void FUN_106b9edfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106b9ee2c; end: 106b9ee8f; +[SCLensExplorerLayoutType groupWithLayout:] */

void FUN_106b9ee2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b9ee90; end: 106b9eefb; +[SCLensExplorerLayoutType imageWithLayout:] */

void FUN_106b9ee90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b9eefc; end: 106b9ef67; +[SCLensExplorerLayoutType textWithLayout:] */

void FUN_106b9eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b9ef68; end: 106b9ef8b; -[SCLensExplorerLayoutType copyWithZone:] */

undefined8 FUN_106b9ef68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9ef8c; end: 106b9f00f; -[SCLensExplorerLayoutType hash] */

void FUN_106b9ef8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f55e8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9f010; end: 106b9f053; -[SCLensExplorerLayoutType internalInit] */

void FUN_106b9f010(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f55e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9f054; end: 106b9f123; -[SCLensExplorerLayoutType isEqual:] */

long FUN_106b9f054(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b9f0fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b9f108;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106b9f108;
          }
          goto LAB_106b9f0fc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b9f108:
  _objc_release(param_3);
  return lVar3;
}


