/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c70d34; end: 106c70dbb; -[SCCPlusNativeCameraPresenterImpl presentImageCamera] */

void FUN_106c70d34(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106c70dbc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  puStack_28 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c70dbc; end: 106c70dcb;  */

void FUN_106c70dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentWithSourceType_promise__11257d758,1,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c70dcc; end: 106c70e53; -[SCCPlusNativeCameraPresenterImpl presentImagePicker] */

void FUN_106c70dcc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106c70e54;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  puStack_28 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c70e54; end: 106c70e63;  */

void FUN_106c70e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentWithSourceType_promise__11257d758,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c70e64; end: 106c70f27; -[SCCPlusNativeCameraPresenterImpl imagePickerControllerDidCancel:] */

void FUN_106c70e64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(uVar1);
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106c70ee4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 106c70f28; end: 106c71083; -[SCCPlusNativeCameraPresenterImpl imagePickerController:didFinishPickingMediaWithInfo:] */

void FUN_106c70f28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106c70fd8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  uStack_38 = uVar2;
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106c71084; end: 106c71137; -[SCCPlusNativeCameraPresenterImpl navigationController:willShowViewController:animated:] */

void FUN_106c71084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c189400(param_3,param_2,1);
  func_0x00010c189400(param_4,param_2,1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292b20();
  _objc_release(lVar1);
  _objc_release(param_1);
  func_0x00010c1d79e0(param_3,param_2,lVar2);
  _objc_release(param_3);
  func_0x00010c1d79e0(param_4,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c71138; end: 106c71193; -[SCCPlusNativeCameraPresenterImpl presentationControllerDidDismiss:] */

void FUN_106c71138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c71194; end: 106c711cb; -[SCCPlusNativeCameraPresenterImpl .cxx_destruct] */

void FUN_106c71194(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106c711cc; end: 106c71253; -[SCCPlusStorefrontProviderImpl getCountryCodeWithCompletion:] */

void FUN_106c711cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1da0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106c71254;
  puStack_30 = &UNK_110848438;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa6040(puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106c71254; end: 106c712e7;  */

void FUN_106c71254(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    func_0x00010c02b2e0();
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c712e8; end: 106c7141b; -[SCCPlusSubscribePagePresenterImpl initWithUIContainer:plusServices:subscribeScopeExposer:subscribeScopeServices:loggingContext:presentationType:] */

undefined1 *
FUN_106c712e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f6008;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c7141c; end: 106c71493; -[SCCPlusSubscribePagePresenterImpl presentSubscribePage] */

void FUN_106c7141c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf23e60(uVar2,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x28),
                      param_1,*(undefined8 *)(param_1 + 0x30),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c71494; end: 106c714db; -[SCCPlusSubscribePagePresenterImpl plusSubscribeDidDismiss] */

void FUN_106c71494(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c714dc; end: 106c7152f; -[SCCPlusSubscribePagePresenterImpl .cxx_destruct] */

void FUN_106c714dc(long param_1)

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



/* Entry: 106c71530; end: 106c715a3; -[SCCPlusSystemShareSheetPresenterImpl initWithUIContainer:] */

undefined1 * FUN_106c71530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6010;
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



/* Entry: 106c715a4; end: 106c716bb; -[SCCPlusSystemShareSheetPresenterImpl presentShareSheetWithValue:] */

void FUN_106c715a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126aeb08;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0f80();
  _objc_release(puVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c716bc;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 8),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106c716bc; end: 106c716c7;  */

void FUN_106c716bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c716c8; end: 106c7177f; -[SCCPlusSystemShareSheetPresenterImpl presentShareSheetForValuesWithValues:] */

void FUN_106c716c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126aeb08;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff0f80();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106c71780;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 106c71780; end: 106c7178b;  */

void FUN_106c71780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c7178c; end: 106c71797; -[SCCPlusSystemShareSheetPresenterImpl .cxx_destruct] */

void FUN_106c7178c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c71798; end: 106c71837; -[SCPlusComposerNavigator initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106c71798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRuntime__1125edce0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275b994;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_opt_class(PTR_PTR_1126b3400);
    func_0x00010c1cb7e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c71838; end: 106c718bb; -[SCPlusComposerNavigator presentComponentWithPage:animated:] */

void FUN_106c71838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010c227380(param_3);
  func_0x00010c1b3aa0(param_1);
  puStack_38 = PTR_PTR_1126f6018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_presentComponentWithPage_animate_112525e60,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c718bc; end: 106c7192f; -[SCPlusComposerNavigator pushComponentWithPage:animated:] */

void FUN_106c718bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1b3aa0(param_1);
  puStack_38 = PTR_PTR_1126f6018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_pushComponentWithPage_animated__112525e68,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c71930; end: 106c7198b; -[SCPlusComposerNavigator popWithAnimated:] */

void FUN_106c71930(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106c7198c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 106c7198c; end: 106c71a53;  */

void FUN_106c7198c(long param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_60 [2];
  undefined8 auStack_50 [2];
  
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  puVar1 = auStack_50;
  if (lVar7 != 1) {
    puVar1 = auStack_60;
  }
  *puVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = PTR_PTR_1126f6018;
  ppuVar2 = &PTR_s_dismissWithAnimated__1125becc8;
  if (lVar7 != 1) {
    ppuVar2 = &PTR_s_popWithAnimated__112526600;
  }
  _objc_msgSendSuper2(puVar1,*ppuVar2,uVar3);
  return;
}



/* Entry: 106c71a54; end: 106c71bf7; -[SCPlusComposerNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_106c71a54(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c07b8c0();
  ppuVar1 = &PTR_PTR_1126d1da8;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR_PTR_1126d1db0;
  }
  _objc_opt_class(*ppuVar1);
  func_0x00010c181960(param_1);
  puStack_38 = PTR_PTR_1126f6018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_makeContainerViewControllerWithP_11260b628,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c07b8c0();
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR_PTR_1126b3400;
    _objc_alloc(PTR_PTR_1126b3400);
    func_0x00010c0402e0();
    _objc_retain();
    _objc_release(puVar3);
    func_0x00010c0b8200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar6 = PTR_PTR_1126b3400;
    _objc_opt_class(PTR_PTR_1126b3400);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar2 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c252e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 != 0) {
      uVar5 = uVar2;
      func_0x00010c252e20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a360(puVar4);
      _objc_release(uVar5);
    }
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = (ulong *)puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c71bf8; end: 106c71c0b; -[SCPlusComposerNavigator isPushing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106c71bf8(long param_1)

{
  return *(byte *)(param_1 + _DAT_11275b998) & 1;
}



/* Entry: 106c71c0c; end: 106c71c1b; -[SCPlusComposerNavigator setIsPushing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c71c0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275b998) = param_3;
  return;
}



/* Entry: 106c71c1c; end: 106c71c2f; -[SCPlusComposerNavigator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c71c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b994,0);
  return;
}



/* Entry: 106c71c30; end: 106c71c67; -[SCPlusComposerNavigatorPresentableViewController initWithValdiView:] */

void FUN_106c71c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6020;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithValdiView_presentationTy_1125272a0,param_3,4);
  return;
}



/* Entry: 106c71c68; end: 106c71c6b; -[SCPlusComposerNavigatorPresentableViewController didDismiss] */

void FUN_106c71c68(void)

{
  return;
}



/* Entry: 106c71c6c; end: 106c71c9b; -[SCPlusDeferredUIContainer setUIContainer:] */

void FUN_106c71c6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c71c9c; end: 106c71ca3; -[SCPlusDeferredUIContainer attachUI:] */

void FUN_106c71c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 106c71ca4; end: 106c71cab; -[SCPlusDeferredUIContainer detachUI:] */

void FUN_106c71ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8);
  return;
}



/* Entry: 106c71cac; end: 106c71cb3; -[SCPlusDeferredUIContainer attachUI:completion:] */

void FUN_106c71cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_attachUI_completion__1125a0c10);
  return;
}



/* Entry: 106c71cb4; end: 106c71cbb; -[SCPlusDeferredUIContainer attachUIUsingKeyWindow:] */

void FUN_106c71cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_attachUIUsingKeyWindow__1125a0c18);
  return;
}



/* Entry: 106c71cbc; end: 106c71cc7; -[SCPlusDeferredUIContainer .cxx_destruct] */

void FUN_106c71cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c71cc8; end: 106c71cd3; -[SCPlusNavigationController initWithRootViewController:] */

void FUN_106c71cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRootViewController_curre_1125edac8,param_3,0,0);
  return;
}



/* Entry: 106c71cd4; end: 106c71ddb; -[SCPlusNavigationController initWithRootViewController:currentPageTracker:presentationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c71cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6028;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithRootViewController__1125edab8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1cb760(puVar1);
    uVar2 = param_3;
    func_0x00010c27acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20(puVar1);
    _objc_release(uVar2);
    func_0x00010c0cfbe0(param_3);
    func_0x00010c1c8b80(puVar1);
    lVar3 = (long)_DAT_11275b9a0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b9a4) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c71ddc; end: 106c71f07; -[SCPlusNavigationController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c71ddc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f6028;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11275b9a8) = puVar2;
  _objc_release(puVar1);
  func_0x00010c106ec0(param_1);
  func_0x00010bee0aa0(param_1);
  lVar3 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar6 = lVar4;
  func_0x00010010fab4(lVar4,PTR_DAT_1126a4e58);
  lVar3 = lVar4;
  if ((int)lVar6 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(lVar4);
  if (lVar3 != 0) {
    lVar6 = (long)_DAT_11275b9a0;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfcbb00();
    *(undefined8 *)(param_1 + _DAT_11275b9ac) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0f2220(lVar4);
    func_0x00010c24fc40(uVar5);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 106c71f08; end: 106c7200f; -[SCPlusNavigationController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c71f08(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c077fc0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        return;
      }
    }
    else {
      _objc_release(uVar1);
    }
  }
  func_0x00010bee0aa0(param_1);
  puVar3 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cfbe0();
  if ((uVar1 == 4) && (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
    func_0x00010c24fc40(*(undefined8 *)(param_1 + (long)_DAT_11275b9a0));
  }
  _objc_release(puVar3);
  return;
}



/* Entry: 106c72010; end: 106c72053; -[SCPlusNavigationController preferredStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c72010(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(ulong *)(param_1 + _DAT_11275b9a4) & 0xfffffffffffffffe) == 4) {
    return *(long *)(param_1 + _DAT_11275b9a8);
  }
  lVar2 = *(long *)(param_1 + _DAT_11275b9b0);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_integerValue_1125f7a00);
    return lVar2;
  }
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    lVar2 = 3;
    if (lVar1 == 2) {
      lVar2 = 1;
    }
    return lVar2;
  }
  return 3;
}



/* Entry: 106c72054; end: 106c720ab; -[SCPlusNavigationController traitCollectionDidChange:] */

void FUN_106c72054(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c106ec0(param_1);
  func_0x00010bee0aa0(param_1);
  return;
}



/* Entry: 106c720ac; end: 106c72183; -[SCPlusNavigationController setStatusBarStyleOverride:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c720ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11275b9b0;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_106c7216c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = param_1;
    func_0x00010c106ec0(param_1);
    func_0x00010bee0aa0(param_1,param_2,lVar4,param_4);
  }
LAB_106c7216c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c72184; end: 106c721b3; -[SCPlusNavigationController statusBarStyleOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c72184(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b9b0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c721b4; end: 106c7221f; -[SCPlusNavigationController _updateStatusBarStyle:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c721b4(long param_1)

{
  undefined *puVar1;
  
  if ((*(ulong *)(param_1 + _DAT_11275b9a4) & 0xfffffffffffffffe) == 4) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c72220; end: 106c7222b; -[SCPlusNavigationController defaultProjectNameV2] */

void FUN_106c72220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_plus_11261e1c0);
  return;
}



/* Entry: 106c7222c; end: 106c7226b; -[SCPlusNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c7222c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b9b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b9a0,0);
  return;
}



/* Entry: 106c7226c; end: 106c7230f; -[SCPlusPageViewControllerBase initWithValdiView:presentationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c7226c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f6030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275b9b4) = param_4;
    puVar2 = (undefined1 *)puVar1;
    FUN_106c74148(puVar1,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b9b8);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11275b9b8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1931e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c72310; end: 106c723e3; -[SCPlusPageViewControllerBase viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c72310(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lStack_90;
  undefined *puStack_88;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1126f6030;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275b9b8);
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_88 = PTR_PTR_1126f6030;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewDidAppear__112684bd0);
  puVar2 = PTR_PTR_1126d1db8;
  uVar5 = *(ulong *)(param_1 + _DAT_11275b9b8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0679e0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 106c723e4; end: 106c724a3; -[SCPlusPageViewControllerBase viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c723e4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6030;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  puVar2 = PTR_PTR_1126d1db8;
  uVar4 = *(ulong *)(param_1 + _DAT_11275b9b8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0679e0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 106c724a4; end: 106c7253f; -[SCPlusPageViewControllerBase viewDidDisappear:] */

void FUN_106c724a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c077fc0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        return;
      }
    }
    else {
      _objc_release(uVar1);
    }
  }
  func_0x00010bf74ac0(param_1);
  return;
}



/* Entry: 106c72540; end: 106c7259b; -[SCPlusPageViewControllerBase forceDisableDismissalGesture:] */

void FUN_106c72540(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106c7259c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 106c7259c; end: 106c725b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c7259c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275b9bc) =
       *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 106c725b4; end: 106c725b7; -[SCPlusPageViewControllerBase didDismiss] */

void FUN_106c725b4(void)

{
  return;
}



/* Entry: 106c725b8; end: 106c725bb; -[SCPlusPageViewControllerBase cardToExpandTransition] */

void FUN_106c725b8(void)

{
  return;
}



/* Entry: 106c725bc; end: 106c725c7; -[SCPlusPageViewControllerBase cardTransitionWillBeginWithView:] */

void FUN_106c725bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106c725c8; end: 106c72797; -[SCPlusPageViewControllerBase cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106c725c8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_5 == uVar1) {
    if ((*(byte *)(param_3 + (long)_DAT_11275b9bc) & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c2954c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf2d520(param_1,param_2);
      _objc_release(uVar1);
      if ((uVar5 & 1) == 0) goto LAB_106c72618;
    }
    uVar6 = 0;
  }
  else {
LAB_106c72618:
    uVar1 = param_3;
    func_0x00010c2954c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar5 != 0) {
      do {
        uVar1 = param_3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
        uVar4 = uVar5;
        if (uVar5 == uVar1) break;
        _objc_retain(uVar5);
        _objc_opt_class(puVar2);
        uVar3 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar2);
        uVar1 = uVar5;
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        uVar3 = uVar1;
        func_0x00010c07d3e0();
        if ((int)uVar3 != 0) {
          func_0x00010c1f7b20(uVar1);
          func_0x00010c1f7b20(uVar1);
        }
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar1);
        uVar5 = uVar4;
      } while (uVar4 != 0);
      _objc_release(uVar4);
    }
    uVar6 = 1;
  }
  _objc_release(param_5);
  return uVar6;
}



/* Entry: 106c72798; end: 106c727a3; -[SCPlusPageViewControllerBase exit:] */

void FUN_106c72798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,param_3);
  return;
}



/* Entry: 106c727a4; end: 106c727e7; -[SCPlusPageViewControllerBase backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c727a4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11275b9bc) & 1) == 0) {
    func_0x00010bf9b4a0(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d83c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c727e8; end: 106c727ff; -[SCPlusPageViewControllerBase canExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106c727e8(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11275b9bc) ^ 0xff) & 1;
}



/* Entry: 106c72800; end: 106c7280b; -[SCPlusPageViewControllerBase defaultProjectNameV2] */

void FUN_106c72800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_plus_11261e1c0);
  return;
}



/* Entry: 106c7280c; end: 106c7281f; -[SCPlusPageViewControllerBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c7280c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b9b8,0);
  return;
}



/* Entry: 106c72820; end: 106c728c3; -[SCPlusPushableViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106c72820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1931e0(puVar1);
    lVar3 = (long)_DAT_11275b9c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c728c4; end: 106c7295f; -[SCPlusPushableViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c728c4(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6038;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11275b9c0));
  _objc_release(lVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  return;
}



/* Entry: 106c72960; end: 106c729cf; -[SCPlusPushableViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c72960(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6038;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11275b9c0));
  _objc_release(lVar1);
  return;
}



/* Entry: 106c729d0; end: 106c72a2b; -[SCPlusPushableViewController forceDisableDismissalGesture:] */

void FUN_106c729d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106c72a2c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 106c72a2c; end: 106c72a9b;  */

void FUN_106c72a2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c068d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1ba2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLeftSwipeDisabled__11264c2d8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c72a9c; end: 106c72aa3; -[SCPlusPushableViewController shouldPopToRootViewController] */

undefined8 FUN_106c72a9c(void)

{
  return 0;
}



/* Entry: 106c72aa4; end: 106c72aab; -[SCPlusPushableViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_106c72aa4(void)

{
  return 1;
}



/* Entry: 106c72aac; end: 106c72abf; -[SCPlusPushableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c72aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b9c0,0);
  return;
}



/* Entry: 106c72ac0; end: 106c72b63; -[SCPlusSubscribeEmailAlertPresenter initWithEmailSettingsScopeExposer:userTrackedBlizzardLogger:] */

undefined1 *
FUN_106c72ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6040;
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



/* Entry: 106c72b64; end: 106c72c47; -[SCPlusSubscribeEmailAlertPresenter _logEmailAlertAction:itemId:] */

void FUN_106c72b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126d1dc8;
  puVar1 = PTR_PTR_1126d1dc0;
  if (*(long *)(param_1 + 0x18) == 0) {
    _objc_retain(param_4);
    _objc_opt_new(puVar2);
    func_0x00010c1b6340();
  }
  else {
    _objc_retain(param_4);
    _objc_opt_new(puVar1);
    func_0x00010c206ea0();
    func_0x00010c206fa0(puVar1,param_2,0xef);
    puVar2 = puVar1;
  }
  func_0x00010c1b63a0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e7d1f8);
  func_0x00010c161620(puVar2,param_2,param_3);
  func_0x00010c1b5f20(puVar2,param_2,param_4);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c72c48; end: 106c72d17; -[SCPlusSubscribeEmailAlertPresenter presentWithPresentingViewController:] */

void FUN_106c72c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c72d18;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = uVar1;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c72d18; end: 106c7307b;  */

void FUN_106c72d18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be528e0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 == 0) {
    puVar9 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    puVar2 = puVar9;
  }
  else {
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc();
    puStack_b8 = puVar4;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106c7307c;
    puStack_a0 = &UNK_110845c10;
    puVar9 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar9);
    puStack_98 = puVar9;
    func_0x00010c0311a0();
    puVar9 = puStack_98;
    _objc_release(puStack_98);
  }
  puVar3 = PTR_PTR_1126aed70;
  func_0x000106c742a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106c730e4;
  puStack_d8 = &UNK_110866148;
  _objc_copyWeak(auStack_c0,param_1 + 0x30);
  uStack_d0 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000106c742b8();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_copyWeak(auStack_f8,param_1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar9;
  func_0x000106c74270();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000106c74288();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010bf0c980();
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  uVar8 = *(undefined8 *)(puVar2 + 0x20);
  _objc_retain(param_1);
  func_0x00010c0d66a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106c7307c; end: 106c730cf;  */

void FUN_106c7307c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c730d0; end: 106c730e3;  */

void FUN_106c730d0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c730dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 106c730e4; end: 106c731cf;  */

void FUN_106c730e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be528e0();
  _objc_release(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf84b00(param_2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106c731d0; end: 106c73263;  */

void FUN_106c731d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126ae610;
    _objc_alloc(PTR_PTR_1126ae610);
    func_0x00010c0582c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c73264; end: 106c732c3;  */

void FUN_106c73264(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be528e0();
  _objc_release(param_1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c732c4; end: 106c7331b; -[SCPlusSubscribeEmailAlertPresenter emailSettingsDidComplete] */

void FUN_106c732c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010be528e0(param_1,param_2,1,&PTR____CFConstantStringClassReference_110e7d238);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c7331c; end: 106c73323; -[SCPlusSubscribeEmailAlertPresenter creatorId] */

undefined8 FUN_106c7331c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c73324; end: 106c7332b; -[SCPlusSubscribeEmailAlertPresenter setCreatorId:] */

void FUN_106c73324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106c7332c; end: 106c734c7; -[SCPlusSubscribeEmailAlertPresenter .cxx_destruct] */

void FUN_106c7332c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c734c8; end: 106c735af;  */

void FUN_106c734c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar2 != 0) {
    lVar3 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = lVar3;
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c735b0; end: 106c73627; -[SCPlusCustomUIContainer initWithProvider:] */

undefined1 * FUN_106c735b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6048;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c73628; end: 106c7362f; -[SCPlusCustomUIContainer attachUI:] */

void FUN_106c73628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 106c73630; end: 106c736c3; -[SCPlusCustomUIContainer attachUI:completion:] */

void FUN_106c73630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 8);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c736c4; end: 106c736ef; -[SCPlusCustomUIContainer detachUI:] */

void FUN_106c736c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c736f0; end: 106c7371f; -[SCPlusCustomUIContainer .cxx_destruct] */

void FUN_106c736f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c73720; end: 106c73793; -[SCPlusCustomDismissTransition initWithShadowView:] */

undefined1 * FUN_106c73720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6050;
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



/* Entry: 106c73794; end: 106c7379f; -[SCPlusCustomDismissTransition transitionDuration:] */

undefined8 FUN_106c73794(void)

{
  return 0x3fc3333333333333;
}



/* Entry: 106c737a0; end: 106c739cb; -[SCPlusCustomDismissTransition animateTransition:] */

void FUN_106c737a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_4 + 8);
  _objc_retain(uVar5);
  uVar3 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(uVar5);
  _objc_release(uVar3);
  func_0x00010c1677c0(0x3fe0000000000000,uVar5);
  uVar3 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c29c220(param_6,param_5,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c06c000();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf43bc0(param_6,param_5,1);
  }
  else {
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(uVar4,param_5,&uStack_80);
    func_0x00010bfb68e0(uVar4);
    func_0x00010bfb68e0(uVar4);
    uVar6 = 0;
    func_0x00010c19f0e0(0,0,param_3,uVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_4,param_5,0);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106c739cc;
    puStack_a0 = &UNK_110848ba8;
    _objc_retain(param_6);
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x106c73a80;
    puStack_d8 = &UNK_1108500c8;
    uStack_98 = param_6;
    uStack_90 = uVar5;
    uStack_88 = uVar4;
    _objc_retain(param_6);
    uStack_d0 = param_6;
    uStack_c8 = uVar4;
    uStack_c0 = uVar5;
    func_0x00010bf03420(uVar6,puVar2,param_5,&puStack_b8,&puStack_f0);
    _objc_release(uStack_d0);
    _objc_release(uStack_98);
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_6);
  return;
}



/* Entry: 106c739cc; end: 106c73af3;  */

void FUN_106c739cc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_d3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_50,0,in_d3,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_80);
  _objc_release(uVar2);
  return;
}



/* Entry: 106c73af4; end: 106c73aff; -[SCPlusCustomDismissTransition .cxx_destruct] */

void FUN_106c73af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c73b00; end: 106c73b73; -[SCPlusCustomPresentationTransition initWithShadowView:] */

undefined1 * FUN_106c73b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6058;
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



/* Entry: 106c73b74; end: 106c73b7f; -[SCPlusCustomPresentationTransition transitionDuration:] */

undefined8 FUN_106c73b74(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 106c73b80; end: 106c73e37; -[SCPlusCustomPresentationTransition animateTransition:] */

void FUN_106c73b80(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_d3;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar5);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(uVar5);
  _objc_release(uVar3);
  func_0x00010c16d4a0(uVar5,param_2,0x12);
  func_0x00010c1677c0(0,uVar5);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_90 = uVar6;
  uStack_88 = uVar8;
  uStack_80 = uVar10;
  uStack_78 = uVar11;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  func_0x00010c219960(uVar4,param_2,&uStack_90);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(uVar4);
  _objc_release(uVar3);
  func_0x00010c16d4a0(uVar4,param_2,0x12);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c06c000();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf43bc0(param_3,param_2,1);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uStack_90 = uVar6;
    uStack_88 = uVar8;
    uStack_80 = uVar10;
    uStack_78 = uVar11;
    uStack_70 = uVar7;
    uStack_68 = uVar9;
    _CGAffineTransformTranslate(&uStack_c0,0,in_d3,&uStack_90);
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    func_0x00010c219960(uVar4,param_2,&uStack_90);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar6 = uStack_a0;
    func_0x00010c27a940(param_1,param_2,0);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106c73e38;
    puStack_e0 = &UNK_110848ba8;
    _objc_retain(param_3);
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x106c73ea8;
    puStack_110 = &UNK_110848bd8;
    uStack_108 = uVar4;
    uStack_d8 = param_3;
    uStack_d0 = uVar5;
    uStack_c8 = uVar4;
    _objc_retain(param_3);
    uStack_100 = param_3;
    func_0x00010bf03420(uVar6,puVar2,param_2,&puStack_f8,&puStack_128);
    _objc_release(uStack_100);
    _objc_release(uStack_d8);
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 106c73e38; end: 106c73ee3;  */

void FUN_106c73e38(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0x28));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_50);
  return;
}


