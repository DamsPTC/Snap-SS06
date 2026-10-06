/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104db6284; end: 104db640b;  */

void FUN_104db6284(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c21c560(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc03e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db640c; end: 104db6503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db640c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  func_0x00010c21c560(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712ec0);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db6504; end: 104db6557; -[SCPaymentsCardTableViewCell setItem:] */

void FUN_104db6504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b06a0;
  _objc_opt_class(PTR_PTR_1126b06a0);
  uVar2 = param_3;
  func_0x00010c077980(param_3,param_2,puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1d9ce0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db6558; end: 104db6717; -[SCPaymentsCardTableViewCell _setExpirationDateLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6558(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010bf9c900();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 != (undefined **)0x0) {
      func_0x00010bf9c7c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar1);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712eb8);
  func_0x00010c26b920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112712ebc;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar7),param_2,uVar2);
  _objc_release(uVar2);
  ppuVar1 = param_3;
  func_0x00010bf9c900();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = param_3;
    func_0x00010bf9c900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    if ((undefined **)0x1 < ppuVar4) {
      ppuVar3 = param_3;
      func_0x00010bf9c900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_3;
      func_0x00010bf9c900(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c08fa60();
      ppuVar1 = ppuVar3;
      func_0x00010c260c00(ppuVar3,param_2,(long)ppuVar5 + -2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      goto LAB_104db669c;
    }
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_104db669c:
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar3 = param_3;
  func_0x00010bf9c7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db6718; end: 104db676f; -[SCPaymentsCardTableViewCell setMode:] */

void FUN_104db6718(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setMode__11264fd40);
  lVar1 = param_1;
  func_0x00010c0cfd40();
  if (lVar1 == 0) {
    func_0x00010c161260(param_1);
  }
  return;
}



/* Entry: 104db6770; end: 104db6777; -[SCPaymentsCardTableViewCell setSelectedLayout] */

void FUN_104db6770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCellSelected__11263c330,1);
  return;
}



/* Entry: 104db6778; end: 104db677f; -[SCPaymentsCardTableViewCell setDeselectedLayout] */

void FUN_104db6778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCellSelected__11263c330,0);
  return;
}



/* Entry: 104db6780; end: 104db678f; -[SCPaymentsCardTableViewCell isCellSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104db6780(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712eb0);
}



/* Entry: 104db6790; end: 104db67cf; -[SCPaymentsCardTableViewCell isCardInvalid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104db6790(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112712ec4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf76460();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104db67d0; end: 104db67ef; -[SCPaymentsCardTableViewCell paymentMethodWrapper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db67d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712ec4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104db67f0; end: 104db680f; -[SCPaymentsCardTableViewCell paymentSettingsImageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db67f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104db6810; end: 104db6823; -[SCPaymentsCardTableViewCell setPaymentSettingsImageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712ec8,param_3);
  return;
}



/* Entry: 104db6824; end: 104db68ab; -[SCPaymentsCardTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6824(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712ec8);
  _objc_destroyWeak(param_1 + _DAT_112712ec4);
  _objc_storeStrong(param_1 + _DAT_112712eac,0);
  _objc_storeStrong(param_1 + _DAT_112712ebc,0);
  _objc_storeStrong(param_1 + _DAT_112712eb8,0);
  _objc_storeStrong(param_1 + _DAT_112712ec0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712eb4,0);
  return;
}



/* Entry: 104db68ac; end: 104db6a8f; -[SCPaymentsContactViewController initWithUserSession:commerceLogger:currentPageTracker:accountInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104db68ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e42f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112712ecc),param_3);
    lVar5 = (long)_DAT_112712ed0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712ed4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712ed8);
    *(undefined **)((long)puVar1 + (long)_DAT_112712ed8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712edc);
    *(undefined **)((long)puVar1 + (long)_DAT_112712edc) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712ee0);
    *(undefined **)((long)puVar1 + (long)_DAT_112712ee0) = puVar3;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2758,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712ee4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112712ee4) = ppuVar4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712ee8);
    *(undefined **)((long)puVar1 + (long)_DAT_112712ee8) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112712eec),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104db6a90; end: 104db6b0f; -[SCPaymentsContactViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6a90(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_loadView_112604be0);
  func_0x00010be3a7e0(param_1);
  func_0x00010be39b00(param_1);
  func_0x00010be3a3a0(param_1);
  func_0x00010be3a220(param_1);
  func_0x00010beac7e0(param_1);
  if (*(long *)(param_1 + _DAT_112712ef0) == 0) {
    func_0x00010be4ce20(param_1);
  }
  return;
}



/* Entry: 104db6b10; end: 104db6b9b; -[SCPaymentsContactViewController viewDidLoad] */

void FUN_104db6b10(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 104db6b9c; end: 104db6c03; -[SCPaymentsContactViewController leftSwipeSucceed] */

void FUN_104db6b9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftSwipeSucceed_112601480);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5660();
  _objc_release(param_1);
  return;
}



/* Entry: 104db6c04; end: 104db6c6b; -[SCPaymentsContactViewController leftButtonPressed] */

void FUN_104db6c04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftButtonPressed_112601348);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5660();
  _objc_release(param_1);
  return;
}



/* Entry: 104db6c6c; end: 104db6ccf; -[SCPaymentsContactViewController viewWillAppear:] */

void FUN_104db6c6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 104db6cd0; end: 104db6d83; -[SCPaymentsContactViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6cd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be778a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712ed0);
  func_0x00010be6fa80(param_1);
  func_0x00010c24fc40();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712ef4);
  *(undefined8 *)(param_1 + _DAT_112712ef4) = uVar2;
  _objc_release(uVar1);
  func_0x00010c0abc20(*(undefined8 *)(param_1 + _DAT_112712ed4));
  return;
}



/* Entry: 104db6d84; end: 104db6f97; -[SCPaymentsContactViewController _prefillContactInfoIfPossibleAndNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6d84(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  if (*(long *)(param_1 + _DAT_112712ef0) == 0) {
    return;
  }
  lVar3 = param_1 + _DAT_112712eec;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c108400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be18c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112712ef8);
  func_0x00010c26b700(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d500(puVar6,param_2,uVar5);
  if ((int)puVar6 == 0) {
    uVar1 = 0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar4);
    uVar1 = (uint)puVar6;
  }
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112712efc);
  func_0x00010c26b700(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d500(puVar6,param_2,uVar5);
  if (((int)puVar6 == 0) || (lVar7 = param_1, func_0x00010be344e0(), (int)lVar7 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar3);
    uVar2 = (uint)puVar6;
  }
  _objc_release(uVar5);
  if (((uVar1 | uVar2) & 1) == 0) goto LAB_104db6f74;
  puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,
                      &PTR____CFConstantStringClassReference_110db30b8);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    if ((uVar2 & 1) != 0) goto LAB_104db6f28;
  }
  else {
    func_0x00010bf070e0(puVar6,param_2,lVar4);
    lVar7 = param_1;
    func_0x00010bf8d980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar7);
    func_0x00010bed79c0(param_1,param_2,0);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf070e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
LAB_104db6f28:
      func_0x00010bf070e0(puVar6,param_2,lVar3);
      lVar7 = param_1;
      func_0x00010c0faf40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar7);
      func_0x00010bed79c0(param_1,param_2,0);
    }
  }
  func_0x00010bee2a80(param_1);
  _objc_release(puVar6);
LAB_104db6f74:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104db6f98; end: 104db6ff3; -[SCPaymentsContactViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6f98(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0abb20(*(undefined8 *)(param_1 + _DAT_112712ed4));
  return;
}



/* Entry: 104db6ff4; end: 104db6ffb; -[SCPaymentsContactViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104db6ff4(void)

{
  return 0;
}



/* Entry: 104db6ffc; end: 104db702b; -[SCPaymentsContactViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6ffc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712ee4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104db702c; end: 104db702f; -[SCPaymentsContactViewController rightButtonPressed] */

void FUN_104db702c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapSaveButton_11255de28);
  return;
}



/* Entry: 104db7030; end: 104db7037; -[SCPaymentsContactViewController _pagenameForPageView] */

undefined8 FUN_104db7030(void)

{
  return 0xc0;
}



/* Entry: 104db7038; end: 104db71b7; -[SCPaymentsContactViewController _initTextField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db7038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar1,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19dea0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19de60(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c19dec0(0x4010000000000000,param_3);
  func_0x00010c193400(0,0x4028000000000000,0,0,param_3);
  func_0x00010c1b6ec0(param_3,param_2,0);
  func_0x00010c16d0c0(param_3,param_2,0);
  func_0x00010c16e440(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112712edc));
  func_0x00010c213180(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112712ed8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar2);
  func_0x00010c18b5e0(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db71b8; end: 104db751b; -[SCPaymentsContactViewController _initTextFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db71b8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0660;
  _objc_alloc();
  uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  lVar10 = (long)_DAT_112712ef8;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126b0660;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  lVar12 = (long)_DAT_112712efc;
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar7);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3118;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3118,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3138;
  lVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar12));
  _objc_release(ppuVar2);
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c211780(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112712f00;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  lVar9 = *(long *)(param_1 + lVar8);
  _objc_retain(lVar9);
  lVar8 = lVar9;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar9);
      }
      uVar7 = *(undefined8 *)(lVar11 * 8);
      func_0x00010be3a7c0(param_1);
      func_0x00010befbd60(uVar7);
      lVar3 = param_1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar3);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + lVar12);
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104db751c; end: 104db78af;  */

void FUN_104db751c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db78b0; end: 104db79af; -[SCPaymentsContactViewController _initSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db78b0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b0620;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar2);
  puVar3 = puVar2;
  func_0x00010c271420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fd999999999999a);
  _objc_release(puVar3);
  func_0x00010befbd60(puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712f04);
  *(undefined **)(param_1 + _DAT_112712f04) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar4);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db79b0; end: 104db7afb; -[SCPaymentsContactViewController _initErrorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db79b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112712f08;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,
                      *(undefined8 *)(param_1 + _DAT_112712ee0));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110db3178);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104db7afc;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
  return;
}



/* Entry: 104db7afc; end: 104db7d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db7afc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712efc);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x401c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db7d30; end: 104db8013; -[SCPaymentsContactViewController textField:shouldChangeCharactersInRange:replacementString:] */

uint FUN_104db7d30(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  undefined *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if ((uVar2 == 0) && (puVar3 = param_6, func_0x00010c08fa60(), (undefined *)0x1 < puVar3)) {
    puVar3 = param_6;
    func_0x00010c08fa60(param_6);
    puVar4 = param_6;
    func_0x00010c260c00(param_6,param_2,puVar3 + -1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar1);
    if ((int)puVar3 == 0) goto LAB_104db7e58;
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_6;
    func_0x00010c25d0a0(param_6,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar5 = param_1;
    func_0x00010c26bc40(param_1,param_2,param_3,param_4,param_5,puVar3);
    if ((int)uVar5 != 0) {
      func_0x00010c212f20(param_3,param_2,puVar3);
      func_0x00010c26be80(param_1,param_2,param_3);
    }
    uVar7 = 0;
LAB_104db7fe0:
    _objc_release(puVar3);
  }
  else {
    _objc_release(uVar1);
LAB_104db7e58:
    uVar1 = param_3;
    func_0x00010c268120();
    if (uVar1 != 1) {
      uVar7 = 1;
      goto LAB_104db7fe8;
    }
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_6;
    func_0x00010c11f340(param_6,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar6 == (undefined *)0x7fffffffffffffff) {
      uVar1 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c08fa60();
      _objc_release(uVar1);
      if ((ulong)(param_5 + param_4) <= uVar2) {
        uVar1 = param_3;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c08fa60();
        puVar4 = param_6;
        func_0x00010c08fa60();
        _objc_release(uVar1);
        puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        if (puVar4 + (uVar2 - param_5) < (undefined *)0xe) {
          uVar1 = param_3;
          func_0x00010c26b700(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25da60(puVar3,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010c130d20(puVar3,param_2,param_4,param_5,param_6);
          puVar4 = PTR_PTR_1126aed98;
          func_0x00010c082c20(PTR_PTR_1126aed98,param_2,puVar3);
          if ((uint)puVar4 != 0) {
            puVar6 = PTR_PTR_1126aed98;
            func_0x00010bfb5d40(PTR_PTR_1126aed98,param_2,puVar3,
                                &PTR____CFConstantStringClassReference_110daf278);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c212f20(param_3,param_2,puVar6);
            _objc_release(puVar6);
          }
          uVar7 = (uint)puVar4 ^ 1;
          func_0x00010bee2a80(param_1);
          goto LAB_104db7fe0;
        }
      }
    }
    uVar7 = 0;
  }
LAB_104db7fe8:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 104db8014; end: 104db80b7; -[SCPaymentsContactViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db8014(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c073040();
  if ((int)lVar1 != 0) {
    func_0x00010c13a0e0(param_3);
  }
  lVar1 = param_3;
  func_0x00010c268120();
  lVar4 = (long)_DAT_112712f00;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 + 1U < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    lVar1 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0dfd40(uVar3,param_2,lVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 104db80b8; end: 104db81cf; -[SCPaymentsContactViewController textFieldDidEndEditing:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db80b8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be406c0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = param_1;
    func_0x00010be1ede0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712ee8);
    func_0x00010c268120(param_3);
    func_0x00010c0df7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3);
    _objc_release(puVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712ee8);
    func_0x00010c268120(param_3);
    func_0x00010c0df7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3);
  }
  _objc_release(puVar2);
  func_0x00010bee1d60(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bea3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setErrorLabelAndTextFieldColors_112586888);
  return;
}



/* Entry: 104db81d0; end: 104db8253; -[SCPaymentsContactViewController _isEmailValid:] */

undefined * FUN_104db81d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf99aa0();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104db8254; end: 104db82d7; -[SCPaymentsContactViewController _isPhoneNumValid:] */

bool FUN_104db8254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR_PTR_1126aed98;
    func_0x00010c25db20(PTR_PTR_1126aed98,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    bVar1 = puVar3 == (undefined *)0xa;
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104db82d8; end: 104db83b3; -[SCPaymentsContactViewController _isFieldValid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104db82d8(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c268120();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_1 + _DAT_112712efc);
    func_0x00010c26b700(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be429a0(param_1,param_2,lVar1);
  }
  else if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112712ef8);
    func_0x00010c26b700(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3ffa0(param_1,param_2,lVar1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar2,param_2,lVar1);
    param_1 = puVar2;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104db83b4; end: 104db84e7; -[SCPaymentsContactViewController _isFieldCompleteAndInvalid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104db83b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  
  func_0x00010c268120();
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3198);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar7 = (long)_DAT_112712ef8;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)puVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c26b700(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c25d0a0(uVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf99aa0(puVar1,param_2,uVar2);
      uVar6 = (uint)puVar5 ^ 1;
      _objc_release(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar4);
    }
    _objc_release(puVar1);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 104db84e8; end: 104db85fb; -[SCPaymentsContactViewController _areAllFieldsValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104db84e8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_112712f00);
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    unaff_x22 = *plStack_100;
    unaff_x21 = lVar5;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = param_1;
        func_0x00010be406c0();
        if ((int)lVar1 == 0) {
          puVar4 = (undefined1 *)0x0;
          goto LAB_104db85bc;
        }
        lVar5 = lVar5 + 1;
      } while (unaff_x21 != lVar5);
      unaff_x21 = lVar3;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar4 = (undefined1 *)0x1;
LAB_104db85bc:
  lVar5 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104db85fc;
  lStack_140 = unaff_x22;
  lStack_138 = unaff_x21;
  puStack_130 = puVar4;
  lStack_128 = lVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010beb8160();
  lVar3 = (long)_DAT_112712eec;
  puVar2 = (undefined1 *)(lVar5 + lVar3);
  _objc_loadWeakRetained();
  puVar4 = puVar2;
  _objc_release();
  if (puVar2 != (undefined1 *)0x0) {
    _objc_initWeak(auStack_148,lVar5);
    lVar5 = lVar5 + lVar3;
    _objc_loadWeakRetained(lVar5);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x00010bfa49a0(lVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_150);
    puVar4 = auStack_148;
    _objc_destroyWeak(puVar4);
  }
  return puVar4;
}



/* Entry: 104db85fc; end: 104db86ff; -[SCPaymentsContactViewController _loadContactInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db85fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010beb8160();
  lVar2 = (long)_DAT_112712eec;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa49a0(param_1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104db8700; end: 104db8797;  */

void FUN_104db8700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bde9140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be107e0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db8798; end: 104db897f; -[SCPaymentsContactViewController _fetchContactCompletionHanlder:error:] */

void FUN_104db8798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104db8850;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104db8980; end: 104db8987;  */

void FUN_104db8980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadContactInfo_112570d28);
  return;
}



/* Entry: 104db8988; end: 104db8a6b; -[SCPaymentsContactViewController _convertFromContactDataModel:] */

void FUN_104db8988(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0faaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  uVar3 = param_3;
  func_0x00010c0faaa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  if (0xd < uVar2) {
    func_0x00010c260c00(uVar3,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b06d8;
  _objc_alloc(PTR_PTR_1126b06d8);
  uVar1 = param_3;
  func_0x00010bf8d6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f3a0(puVar5,param_2,uVar1,uVar4);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104db8a6c; end: 104db8b03; -[SCPaymentsContactViewController _convertToContactDataModel:] */

void FUN_104db8a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b05a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf8d6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0faaa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00f3a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104db8b04; end: 104db8d0f; -[SCPaymentsContactViewController _updateErrorLabelsWithPreemptiveChecking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db8b04(undefined *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + _DAT_112712f00);
  _objc_retain(lVar6);
  puVar4 = &uStack_130;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        if (param_3 == 0) {
          puVar2 = param_1;
          func_0x00010be406c0();
          if (((ulong)puVar2 & 1) != 0) goto LAB_104db8bcc;
LAB_104db8c20:
          puVar2 = param_1;
          func_0x00010be1ede0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar8 = *(undefined8 *)(param_1 + _DAT_112712ee8);
          func_0x00010c268120(uVar7);
          func_0x00010c0df7a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar8);
          _objc_release(puVar3);
LAB_104db8c84:
          _objc_release(puVar2);
          func_0x00010bee1d60(param_1);
        }
        else {
          uVar8 = uVar7;
          func_0x00010c073040();
          if ((int)uVar8 != 0) {
            puVar2 = param_1;
            func_0x00010be406a0();
            if (((ulong)puVar2 & 1) != 0) goto LAB_104db8c20;
LAB_104db8bcc:
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar8 = *(undefined8 *)(param_1 + _DAT_112712ee8);
            func_0x00010c268120(uVar7);
            func_0x00010c0df7a0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(uVar8);
            goto LAB_104db8c84;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar4 = &uStack_130;
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  func_0x00010bea3b80(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c268120();
  if (puVar4 == (undefined8 *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db31d8;
  }
  else {
    if (puVar4 != (undefined8 *)0x1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_104db8d68;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110db31f8;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
LAB_104db8d68:
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104db8d10; end: 104db8da7; -[SCPaymentsContactViewController _getErrorMessageForField:] */

void FUN_104db8d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c268120();
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db31d8;
  }
  else {
    if (param_3 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_104db8d68;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110db31f8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
LAB_104db8d68:
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104db8da8; end: 104db8f4f; -[SCPaymentsContactViewController _setErrorLabelAndTextFieldColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db8da8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc();
  func_0x00010c04e820();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = (long)_DAT_112712ee8;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = auStack_e8;
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,puVar5,0x10);
  iVar4 = (int)puVar5;
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar6,param_2,uVar2);
        _objc_release(uVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar5 = auStack_e8;
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,puVar5,0x10);
      iVar4 = (int)puVar5;
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  puVar3 = puVar6;
  func_0x00010c08fa60(puVar6);
  lVar7 = (long)_DAT_112712f08;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,puVar3 == (undefined *)0x0);
  puVar3 = puVar6;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7),param_2,puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    uVar2 = *(undefined8 *)(puVar6 + _DAT_112712ed8);
    _objc_retain(puVar3);
    func_0x00010c213180(puVar3,param_2,uVar2);
  }
  else {
    puVar6 = *(undefined **)(puVar6 + _DAT_112712f08);
    _objc_retain(puVar3);
    func_0x00010c26b920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3,param_2,puVar6);
    _objc_release(puVar3);
    puVar3 = puVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104db8f50; end: 104db8fd7; -[SCPaymentsContactViewController _updateTextFieldTextColor:hasError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db8f50(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712ed8);
    _objc_retain(param_3);
    func_0x00010c213180(param_3,param_2,uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712f08);
    _objc_retain(param_3);
    func_0x00010c26b920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(param_3,param_2,uVar1);
    _objc_release(param_3);
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db8fd8; end: 104db9207; -[SCPaymentsContactViewController _didTapSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db8fd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c0a1d40(*(undefined8 *)(param_1 + _DAT_112712ed4),param_2,0x11,0xffffffffffffffff,9,0)
  ;
  func_0x00010bee2a80(param_1);
  func_0x00010bed79c0(param_1);
  lVar1 = param_1;
  func_0x00010bdcf220();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b06d8;
    _objc_alloc(PTR_PTR_1126b06d8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712ef8);
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aed98;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112712efc);
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25db20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f3a0(puVar2);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010bde71c0();
    if ((int)lVar1 != 0) {
      func_0x00010be945e0(param_1);
      func_0x00010beb8160(param_1);
      puVar6 = auStack_48;
      _objc_initWeak(puVar6,param_1);
      lVar1 = param_1 + _DAT_112712eec;
      _objc_loadWeakRetained(lVar1);
      _objc_retain(puVar6);
      lVar7 = param_1;
      func_0x00010bde95e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c2848a0(lVar1);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(lVar7);
      _objc_release(param_1);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 104db9208; end: 104db929f;  */

void FUN_104db9208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bde9140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed5e00(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db92a0; end: 104db955f; -[SCPaymentsContactViewController _updateContactDetailsCompletionHandler:error:] */

void FUN_104db92a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104db9568;
    puStack_78 = &UNK_110841f80;
    uStack_70 = param_1;
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_90);
    lVar2 = lStack_68;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf42540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3a20();
    _objc_release(uVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x104db93cc;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_60);
    lVar2 = lStack_38;
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104db9560; end: 104db9567;  */

void FUN_104db9560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didTapSaveButton_11255de28);
  return;
}



/* Entry: 104db9568; end: 104db964f;  */

void FUN_104db9568(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf42540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3a20();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(lVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6a60();
      _objc_release(uVar1);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104db9650; end: 104db968b; -[SCPaymentsContactViewController _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9650(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bed79c0(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010beb37e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712f04),PTR_s_setEnabled__112642f38,lVar1);
  return;
}



/* Entry: 104db968c; end: 104db977b; -[SCPaymentsContactViewController _shouldEnableSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db968c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010bdcf220();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b06d8;
    _objc_alloc(PTR_PTR_1126b06d8);
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112712ef8);
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aed98;
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112712efc);
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25db20(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f3a0(puVar2,param_2,uVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bde71c0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    if ((param_1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104db977c; end: 104db9817; -[SCPaymentsContactViewController _setupExistingContactDetails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db977c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112712ef0;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712ef8),param_2,lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c0faaa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712efc),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104db9818; end: 104db987f; -[SCPaymentsContactViewController _textFieldRelatedToErrorCode:] */

void FUN_104db9818(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x337669a9) {
    piVar1 = (int *)&DAT_112712ef8;
  }
  else {
    if (param_3 != -0x2ba2420e) {
      uVar2 = 0;
      goto LAB_104db9870;
    }
    piVar1 = (int *)&DAT_112712efc;
  }
  uVar2 = *(undefined8 *)(param_1 + *piVar1);
  _objc_retain(uVar2);
LAB_104db9870:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104db9880; end: 104db998b; -[SCPaymentsContactViewController _resignAnyFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + _DAT_112712f00);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_108 + lVar7 * 8);
        uVar3 = uVar5;
        func_0x00010c073040();
        if ((int)uVar3 != 0) {
          func_0x00010c13a0e0(uVar5);
          goto LAB_104db9950;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
LAB_104db9950:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    lVar1 = lVar4;
    func_0x00010c29bf00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar6 = (long)_DAT_112712f0c;
    uVar3 = *(undefined8 *)(lVar4 + lVar6);
    *(undefined **)(lVar4 + lVar6) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(lVar4 + lVar6),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar4 + lVar6));
    lVar1 = lVar4;
    func_0x00010bf4b2a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar6 = (long)_DAT_112712f10;
    uVar3 = *(undefined8 *)(lVar4 + lVar6);
    *(undefined **)(lVar4 + lVar6) = puVar2;
    _objc_release(uVar3);
    lVar1 = lVar4;
    func_0x00010bf4b2a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_104db9b40;
    puStack_160 = &UNK_1108471b0;
    lStack_158 = lVar4;
    func_0x00010c0bbfc0(*(undefined8 *)(lVar4 + lVar6),param_2,&puStack_178);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a8560(*(undefined8 *)(lVar4 + lVar6),param_2,1);
    func_0x00010c24dbc0(*(undefined8 *)(lVar4 + lVar6));
    func_0x00010bfdf5e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194e0();
    _objc_release(lVar4);
    return;
  }
  return;
}



/* Entry: 104db998c; end: 104db9b3f; -[SCPaymentsContactViewController _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db998c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112712f0c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  lVar4 = (long)_DAT_112712f10;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104db9b40;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194e0();
  _objc_release(param_1);
  return;
}



/* Entry: 104db9b40; end: 104db9bc7;  */

void FUN_104db9b40(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104db9bc8; end: 104db9c4b; -[SCPaymentsContactViewController _hideBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9bc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112712f10;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
  lVar2 = (long)_DAT_112712f0c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db9c4c; end: 104db9ccf; -[SCPaymentsContactViewController _initPrivacyLink] */

void FUN_104db9c4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126b0698;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3218,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113e80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104db9cd0; end: 104db9dbf; -[SCPaymentsContactViewController _contactDetailsFieldsUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104db9cd0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = 0;
  if ((param_3 != 0) && (lVar7 = (long)_DAT_112712ef0, *(long *)(param_1 + lVar7) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712ef8);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf8d6c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,uVar2);
    if ((int)uVar3 == 0) {
      uVar6 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112712efc);
      func_0x00010c26b700(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0faaa0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0720c0(uVar4,param_2,uVar5);
      uVar6 = (uint)uVar3 ^ 1;
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return uVar6;
}



/* Entry: 104db9dc0; end: 104db9def; -[SCPaymentsContactViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9dc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712ef4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104db9df0; end: 104db9e5f; -[SCPaymentsContactViewController _hasRegisteredMobileNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104db9df0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  param_1 = param_1 + _DAT_112712eec;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c108420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  return (uint)puVar2 ^ 1;
}



/* Entry: 104db9e60; end: 104db9f37; -[SCPaymentsContactViewController _formattedMobile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9e60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712eec;
  puVar1 = (undefined *)(param_1 + lVar4);
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010c108420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
  puVar1 = PTR_PTR_1126aed98;
  if ((int)puVar3 == 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c108440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d40(puVar1,param_2,puVar2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  else {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104db9f38; end: 104db9f47; -[SCPaymentsContactViewController editingContactDetails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db9f38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712ef0);
}



/* Entry: 104db9f48; end: 104db9f57; -[SCPaymentsContactViewController sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db9f48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f14);
}



/* Entry: 104db9f58; end: 104db9f97; -[SCPaymentsContactViewController setSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712f14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104db9f98; end: 104db9fa7; -[SCPaymentsContactViewController logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db9f98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f18);
}



/* Entry: 104db9fa8; end: 104db9fe7; -[SCPaymentsContactViewController setLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712f18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104db9fe8; end: 104dba007; -[SCPaymentsContactViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db9fe8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712f1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dba008; end: 104dba01b; -[SCPaymentsContactViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba008(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712f1c,param_3);
  return;
}



/* Entry: 104dba01c; end: 104dba03b; -[SCPaymentsContactViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba01c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712ecc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dba03c; end: 104dba04b; -[SCPaymentsContactViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dba03c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712ed4);
}



/* Entry: 104dba04c; end: 104dba05b; -[SCPaymentsContactViewController errorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dba04c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f08);
}



/* Entry: 104dba05c; end: 104dba09b; -[SCPaymentsContactViewController setErrorLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712f08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dba09c; end: 104dba0ab; -[SCPaymentsContactViewController errorMsgForFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba09c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112712ee8,1);
  return;
}



/* Entry: 104dba0ac; end: 104dba0b7; -[SCPaymentsContactViewController setErrorMsgForFields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba0ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104dba0b8; end: 104dba0c7; -[SCPaymentsContactViewController emailField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba0b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112712ef8,1);
  return;
}



/* Entry: 104dba0c8; end: 104dba0d3; -[SCPaymentsContactViewController setEmailField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba0c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104dba0d4; end: 104dba0e3; -[SCPaymentsContactViewController phoneNumField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba0d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112712efc,1);
  return;
}



/* Entry: 104dba0e4; end: 104dba0ef; -[SCPaymentsContactViewController setPhoneNumField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba0e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104dba0f0; end: 104dba263; -[SCPaymentsContactViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba0f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712efc,0);
  _objc_storeStrong(param_1 + _DAT_112712ef8,0);
  _objc_storeStrong(param_1 + _DAT_112712ee8,0);
  _objc_storeStrong(param_1 + _DAT_112712f08,0);
  _objc_storeStrong(param_1 + _DAT_112712ed4,0);
  _objc_destroyWeak(param_1 + _DAT_112712ecc);
  _objc_destroyWeak(param_1 + _DAT_112712f1c);
  _objc_storeStrong(param_1 + _DAT_112712f18,0);
  _objc_storeStrong(param_1 + _DAT_112712f14,0);
  _objc_storeStrong(param_1 + _DAT_112712ef0,0);
  _objc_storeStrong(param_1 + _DAT_112712ed0,0);
  _objc_destroyWeak(param_1 + _DAT_112712eec);
  _objc_storeStrong(param_1 + _DAT_112712ef4,0);
  _objc_storeStrong(param_1 + _DAT_112712f10,0);
  _objc_storeStrong(param_1 + _DAT_112712f0c,0);
  _objc_storeStrong(param_1 + _DAT_112712f20,0);
  _objc_storeStrong(param_1 + _DAT_112712ee0,0);
  _objc_storeStrong(param_1 + _DAT_112712f04,0);
  _objc_storeStrong(param_1 + _DAT_112712edc,0);
  _objc_storeStrong(param_1 + _DAT_112712ed8,0);
  _objc_storeStrong(param_1 + _DAT_112712ee4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712f00,0);
  return;
}



/* Entry: 104dba264; end: 104dba2ab; -[SCPaymentsSelectEditListViewController loadView] */

void FUN_104dba264(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010c229760(param_1);
  return;
}



/* Entry: 104dba2ac; end: 104dba337; -[SCPaymentsSelectEditListViewController viewDidLoad] */

void FUN_104dba2ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 104dba338; end: 104dba3fb; -[SCPaymentsSelectEditListViewController viewWillAppear:] */

void FUN_104dba338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar2);
  func_0x00010be4dba0(param_1);
  return;
}



/* Entry: 104dba3fc; end: 104dba48f; -[SCPaymentsSelectEditListViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba3fc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126e42f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712f28);
  *(long **)(param_1 + _DAT_112712f28) = plVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712f2c);
  func_0x00010be21580(param_1);
  func_0x00010c0abc20(uVar2);
  return;
}



/* Entry: 104dba490; end: 104dba4f7; -[SCPaymentsSelectEditListViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba490(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e42f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712f2c);
  func_0x00010be21580(param_1);
  func_0x00010c0abb20(uVar1);
  return;
}



/* Entry: 104dba4f8; end: 104dba4ff; -[SCPaymentsSelectEditListViewController shouldPopToRootViewController] */

undefined8 FUN_104dba4f8(void)

{
  return 0;
}



/* Entry: 104dba500; end: 104dba507; -[SCPaymentsSelectEditListViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104dba500(void)

{
  return 0;
}



/* Entry: 104dba508; end: 104dba71b; -[SCPaymentsSelectEditListViewController initWithItemType:mode:userSession:commerceLogger:paymentSettingsImageProvider:currentPageTracker:userBlizzardLogger:paymentInfoProvider:accountInfoProvider:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104dba508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e42f8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserBlizzardLogger__1125f4460,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712f30,param_5);
    lVar5 = (long)_DAT_112712f2c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712f34;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712f38;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112712f3c;
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712f40) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712f44) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112712f48) = 0;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712f4c,param_10);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712f50,param_11);
    lVar5 = (long)_DAT_112712f54;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = *(long *)((long)puVar1 + lVar6);
    if (lVar5 == 1) {
      ppuVar4 = &PTR_PTR_1126b06e0;
    }
    else {
      if (lVar5 != 0) goto LAB_104dba6c0;
      ppuVar4 = &PTR_PTR_1126b06e8;
    }
    puVar3 = *ppuVar4;
    _objc_opt_class();
    *(undefined **)((long)puVar1 + (long)_DAT_112712f58) = puVar3;
  }
LAB_104dba6c0:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 104dba71c; end: 104dba8a3; -[SCPaymentsSelectEditListViewController setupTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = param_4;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + _DAT_112712f58);
  uVar2 = uVar6;
  _NSStringFromClass(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(lVar1,param_5,uVar6,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b06f0;
  _objc_opt_class(PTR_PTR_1126b06f0);
  puVar4 = PTR_PTR_1126b06f0;
  _objc_opt_class(PTR_PTR_1126b06f0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(lVar1,param_5,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_5,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar1 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(0,0,param_3,0x3f847ae140000000,puVar3);
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211680();
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dba8a4; end: 104dba8c7; -[SCPaymentsSelectEditListViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104dba8a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112712f5c);
  func_0x00010bf529e0(lVar1);
  return lVar1 + 1;
}



/* Entry: 104dba8c8; end: 104dbab3b; -[SCPaymentsSelectEditListViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dba8c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  lVar7 = (long)_DAT_112712f5c;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  if (uVar1 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112712f58);
    _NSStringFromClass(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e080(lVar3,param_2,uVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar3);
    func_0x00010c1c8c60(lVar6,param_2,*(undefined8 *)(param_1 + _DAT_112712f40));
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    uVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(uVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5d40(lVar6,param_2,uVar4);
    _objc_release(uVar4);
    uVar1 = param_4;
    func_0x00010c142240();
    if (uVar1 == *(ulong *)(param_1 + _DAT_112712f44)) {
      func_0x00010c1972a0(lVar6,param_2,*(undefined1 *)(param_1 + _DAT_112712f48));
      func_0x00010c1fb2c0(lVar6);
    }
    else {
      func_0x00010c1972a0(lVar6,param_2,0);
      func_0x00010c18c180(lVar6);
    }
    func_0x00010c213a60(lVar6,param_2,*(undefined8 *)(param_1 + _DAT_112712f60));
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c142240();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db3238);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(lVar6,param_2,puVar5);
    _objc_release(puVar5);
  }
  else {
    puVar5 = PTR_PTR_1126b06f0;
    _objc_opt_class(PTR_PTR_1126b06f0);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e080(lVar3,param_2,puVar5,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar3);
    func_0x00010c1aa7e0(lVar6,param_2,*(undefined8 *)(param_1 + _DAT_112712f34));
    func_0x00010c1a97a0(lVar6,param_2,*(undefined8 *)(param_1 + _DAT_112712f54));
    func_0x00010c17a540(lVar6,param_2,*(long *)(param_1 + _DAT_112712f3c) == 1);
    func_0x00010c213a60(lVar6,param_2,*(undefined8 *)(param_1 + _DAT_112712f60));
    func_0x00010c160fc0(lVar6,param_2,&PTR____CFConstantStringClassReference_110db3258);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 104dbab3c; end: 104dbabeb; -[SCPaymentsSelectEditListViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbab3c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  lVar4 = (long)_DAT_112712f5c;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    if (*(long *)(param_1 + _DAT_112712f40) == 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      uVar1 = param_4;
      func_0x00010c142240(param_4);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beca9e0(param_1,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
  else {
    func_0x00010becaa00(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104dbabec; end: 104dbac87; -[SCPaymentsSelectEditListViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbabec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112712f3c) == 0) {
    uVar1 = param_4;
    func_0x00010c142240();
    uVar2 = *(ulong *)(param_1 + _DAT_112712f5c);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = 0x4054000000000000;
      goto LAB_104dbac5c;
    }
  }
  uVar3 = 0x4046000000000000;
LAB_104dbac5c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 104dbac88; end: 104dbacef; -[SCPaymentsSelectEditListViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbac88(long param_1)

{
  undefined **ppuVar1;
  
  if (*(long *)(param_1 + _DAT_112712f40) == 0) {
    if (*(long *)(param_1 + _DAT_112712f3c) == 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db3278;
    }
    else {
      if (*(long *)(param_1 + _DAT_112712f3c) != 0) goto _objc_autoreleaseReturnValue;
      ppuVar1 = &PTR____CFConstantStringClassReference_110db2778;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


