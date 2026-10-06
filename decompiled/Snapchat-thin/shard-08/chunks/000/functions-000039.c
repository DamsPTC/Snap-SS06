/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c58764; end: 105c587e7; -[SCLogoutInterceptionResult matchIntercepted:notIntercepted:] */

void FUN_105c58764(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_105c587cc;
    lVar2 = 0x11;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_105c587cc;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(param_1 + lVar2));
LAB_105c587cc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c587e8; end: 105c58813; +[SCGrapheneLogoutInterceptorMetric unbalancedCall] */

void FUN_105c587e8(void)

{
  _objc_alloc(PTR_PTR_1126c36b8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c58814; end: 105c588b3; -[SCGrapheneLogoutInterceptorMetric description] */

void FUN_105c58814(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23f98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e23f98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ec8a8;
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



/* Entry: 105c588b4; end: 105c589f7; -[SCGrapheneRegistry logoutInterceptorGraphene] */

void FUN_105c588b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c5893c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1dc0 != -1) {
    func_0x00010002a2fc(0x1136c1dc0,&puStack_48);
  }
  uVar1 = uRam00000001136c1db8;
  _objc_retain(uRam00000001136c1db8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c589f8; end: 105c58a6b; -[SCLogoutInterceptorServices initWithLogoutInterceptorsCheck:] */

undefined1 * FUN_105c589f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec8b0;
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



/* Entry: 105c58a6c; end: 105c58a73; -[SCLogoutInterceptorServices logoutInterceptorsCheck] */

undefined8 FUN_105c58a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c58a74; end: 105c58a7f; -[SCLogoutInterceptorServices .cxx_destruct] */

void FUN_105c58a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c58a80; end: 105c58ba7; -[SCLogoutVerificationLogger initWithLogger:longClientId:upsellType:] */

undefined1 *
FUN_105c58a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec8b8;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined ***)((long)puVar1 + 0x18) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c58ba8; end: 105c58bfb; -[SCLogoutVerificationLogger setImpressionCount:] */

void FUN_105c58ba8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c58bfc; end: 105c58ca3; -[SCLogoutVerificationLogger logVerificationAtLogoutPageView] */

void FUN_105c58bfc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c58ca4; end: 105c58ccf;  */

void FUN_105c58ca4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c58cd0; end: 105c58d77; -[SCLogoutVerificationLogger logVerificationAtLogoutPageVerify] */

void FUN_105c58cd0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c58d78; end: 105c58da3;  */

void FUN_105c58d78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c58da4; end: 105c58e4b; -[SCLogoutVerificationLogger logVerificationAtLogoutPageSkip] */

void FUN_105c58da4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c58e4c; end: 105c58e77;  */

void FUN_105c58e4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c58e78; end: 105c58eb7; -[SCLogoutVerificationLogger _logVerificationAtLogoutPageView] */

void FUN_105c58e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bded7c0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50980(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c58eb8; end: 105c58ef7; -[SCLogoutVerificationLogger _logVerificationAtLogoutPageVerify] */

void FUN_105c58eb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bded7c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50980(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c58ef8; end: 105c58f37; -[SCLogoutVerificationLogger _logVerificationAtLogoutPageSkip] */

void FUN_105c58ef8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bded7c0(param_1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50980(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c58f38; end: 105c58f3f; -[SCLogoutVerificationLogger _logBlizzardEvent:] */

void FUN_105c58f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logUserTrackedEvent__11260a5a8);
  return;
}



/* Entry: 105c58f40; end: 105c58fa7; -[SCLogoutVerificationLogger _createEventWithAction:] */

void FUN_105c58f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c36c0;
  _objc_opt_new(PTR_PTR_1126c36c0);
  func_0x00010c1c0c20();
  func_0x00010c161620(puVar1,param_2,param_3);
  func_0x00010c21acc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1ab220(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c58fa8; end: 105c58fef; -[SCLogoutVerificationLogger .cxx_destruct] */

void FUN_105c58fa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c58ff0; end: 105c5920b;  */

void FUN_105c58ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126aed70;
  uVar8 = param_3;
  _objc_retain(param_3);
  FUN_105c59598();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105c595c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000105c595e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c440(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c18b5e0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  func_0x00010bf84b00(uVar6);
  _objc_release(uVar8);
  return;
}



/* Entry: 105c5920c; end: 105c59283;  */

void FUN_105c5920c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c59284; end: 105c5928f;  */

void FUN_105c59284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c5928c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c59290; end: 105c592c3;  */

void FUN_105c59290(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105c592c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c592c4; end: 105c594df;  */

void FUN_105c592c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126aed70;
  uVar8 = param_3;
  _objc_retain(param_3);
  func_0x000105c595b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105c595c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000105c595f8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c440(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c18b5e0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  func_0x00010bf84b00(uVar6);
  _objc_release(uVar8);
  return;
}



/* Entry: 105c594e0; end: 105c59557;  */

void FUN_105c594e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c59558; end: 105c59563;  */

void FUN_105c59558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c59560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c59564; end: 105c59597;  */

void FUN_105c59564(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105c59594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c59598; end: 105c5960f;  */

void FUN_105c59598(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23fd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e23fd8,
                      &PTR____CFConstantStringClassReference_110e23ff8,0);
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



/* Entry: 105c59610; end: 105c59873;  */

void FUN_105c59610(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108b9a8ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108b9a924();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  FUN_105c5a410();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (param_4 == 0) {
    func_0x000105c5a428();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105c5a440();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c598a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c59874; end: 105c598fb;  */

void FUN_105c59874(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c598a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c598fc; end: 105c59b4b;  */

void FUN_105c598fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a984();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000108b9a87c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c09e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000105c5a488();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000105c5a4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (param_3 != 0) {
    func_0x00010c18b5e0(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar9);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c59b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c59b4c; end: 105c59bd3;  */

void FUN_105c59b4c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c59b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c59bd4; end: 105c59e4b;  */

void FUN_105c59bd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_4);
  uVar1 = param_1;
  _objc_retain(param_1);
  func_0x000108b9a8ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108b9a924();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000105c5a458();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar5;
  func_0x000105c5a470();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(lVar9);
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c59e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c59e4c; end: 105c59ed3;  */

void FUN_105c59e4c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c59e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c59ed4; end: 105c5a40f;  */

/* WARNING: Removing unreachable block (ram,0x000105c5a034) */

void FUN_105c59ed4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
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
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar3 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  func_0x00010bf637c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010c08fa60(param_1);
  puVar4 = puVar3;
  func_0x00010c0c1b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    func_0x00010c08fa60(param_1);
    puVar7 = puVar6;
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar10 = puVar7;
    func_0x00010bf529e0();
    puVar19 = puVar4;
    func_0x00010bf529e0();
    uVar1 = param_1;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    while (PTR__OBJC_CLASS___NSDictionary_1126ae670 = puVar5, puVar19 != (undefined *)0x0) {
      puVar19 = puVar19 + -1;
      puVar11 = puVar4;
      func_0x00010c0dfd20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x0;
      lVar17 = lVar16;
      if (puVar10 == (undefined *)0x0) {
LAB_105c5a16c:
        func_0x00010c11f2a0(puVar11);
        func_0x00010c11f2a0(puVar11);
      }
      else {
        puVar5 = puVar7;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        if (puVar5 == (undefined *)0x0) goto LAB_105c5a16c;
        puVar12 = puVar11;
        func_0x00010c11f2a0(puVar11);
        puVar13 = puVar5;
        lVar17 = lVar16;
        func_0x00010c11f2a0(puVar5);
        _NSIntersectionRange(puVar12,lVar16,puVar13,lVar17);
        lVar17 = lVar16;
        func_0x00010c11f2a0(puVar11);
        if (lVar16 != lVar17) goto LAB_105c5a16c;
        func_0x00010c11f2a0(puVar5);
        func_0x00010c11f2c0(puVar5);
        puVar10 = puVar10 + -1;
      }
      uVar14 = param_1;
      func_0x00010c260c80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar8);
      _objc_release(uVar14);
      func_0x00010c11f2a0(puVar11);
      uVar14 = param_1;
      func_0x00010c260c80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar9);
      _objc_release(uVar14);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar1;
      func_0x00010c25cf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(puVar12);
      _objc_release(puVar5);
      _objc_release(puVar11);
      lVar16 = lVar17;
      uVar1 = uVar14;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    }
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(param_1);
  ppuVar15 = (undefined **)PTR_PTR_1126aed78;
  _objc_alloc();
  puVar3 = puVar5;
  func_0x00010c0dff20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c0dff20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e240f8;
    func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e240f8,
                        &PTR____CFConstantStringClassReference_110e24118,0);
    func_0x000107c61180();
    if (lRam00000001137fe070 != -1) {
      func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
    }
    ppuVar15 = ppuVar2;
    if ((bRam00000001137fe068 & 1) != 0) {
      func_0x000107c312ec(ppuVar2);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 105c5a410; end: 105c5a4b7;  */

void FUN_105c5a410(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e240f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e240f8,
                      &PTR____CFConstantStringClassReference_110e24118,0);
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



/* Entry: 105c5a4b8; end: 105c5a4c3; -[SCFeatureSettingsService hasFriendmojiPolicy] */

void FUN_105c5a4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e241f8);
  return;
}



/* Entry: 105c5a4c4; end: 105c5a4cf; -[SCFeatureSettingsService friendmojiPolicyServerParam] */

undefined ** FUN_105c5a4c4(void)

{
  return &PTR____CFConstantStringClassReference_110e241f8;
}



/* Entry: 105c5a4d0; end: 105c5a4df; -[SCFeatureSettingsService setFriendmojiPolicy:] */

void FUN_105c5a4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e241f8,param_3);
  return;
}



/* Entry: 105c5a4e0; end: 105c5a4e7; -[SCFeatureSettingsService BITMOJI_FRIENDMOJI_USER_POLICY_client_value:] */

void FUN_105c5a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105c5a4e8; end: 105c5a4ef; -[SCFeatureSettingsService BITMOJI_FRIENDMOJI_USER_POLICY_server_value:] */

void FUN_105c5a4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105c5a4f0; end: 105c5a4ff; -[SCFeatureSettingsService friendmojiPolicy] */

void FUN_105c5a4f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e241f8,0);
  return;
}



/* Entry: 105c5a500; end: 105c5a65f; -[SCFriendmojiUserPolicyEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5a500(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112732dc8;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c36d0;
  _objc_alloc(PTR_PTR_1126c36d0);
  func_0x00010c0161e0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112732dc0));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 105c5a660; end: 105c5a6a7;  */

void FUN_105c5a660(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be83b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c5a6a8; end: 105c5a713; -[SCFriendmojiUserPolicyEntryPoint _providerWithFeatureSettingsService:] */

void FUN_105c5a6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c36d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c011c80();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c36e0;
  _objc_alloc(PTR_PTR_1126c36e0);
  func_0x00010c016200();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c5a714; end: 105c5a75b; -[SCFriendmojiUserPolicyEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5a714(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732dc0,0);
  _objc_destroyWeak(param_1 + _DAT_112732dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732dc4);
  return;
}



/* Entry: 105c5a75c; end: 105c5a7df;  */

void FUN_105c5a75c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca0;
  func_0x00010bfb9b80(PTR_PTR_1126afca0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 1) {
    puVar2 = PTR_PTR_1126afca0;
    func_0x00010c0e8b40(PTR_PTR_1126afca0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    if (param_1 != 2) goto LAB_105c5a7cc;
    puVar2 = PTR_PTR_1126afca0;
    func_0x00010bfb9b80(PTR_PTR_1126afca0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
LAB_105c5a7cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c5a7e0; end: 105c5a8ab; -[SCFriendmojiUserPolicyProvider initWithFriendmojiUserPolicySettings:] */

undefined1 * FUN_105c5a7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ec8c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c5a8ac; end: 105c5a953; -[SCFriendmojiUserPolicyProvider friendmojiUserPolicy] */

void FUN_105c5a8ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c5a954;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c5a954; end: 105c5a99b;  */

void FUN_105c5a954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c102fa0(uVar1);
  FUN_105c5a75c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c5a99c; end: 105c5ab2b; -[SCFriendmojiUserPolicyProvider setFriendmojiUserPolicy:] */

void FUN_105c5a99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0bf280(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c5ab2c; end: 105c5ab57;  */

void FUN_105c5ab2c(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105c5ab58; end: 105c5ac53;  */

void FUN_105c5ab58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1de9c0(uVar1,param_2,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)
                     );
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c5abf8;
  puStack_30 = &UNK_110860818;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010c297260(uVar1,param_2,&puStack_48,0);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105c5ac54; end: 105c5ac83; -[SCFriendmojiUserPolicyProvider .cxx_destruct] */

void FUN_105c5ac54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c5ac84; end: 105c5acf7; -[SCFriendmojiUserPolicySettings initWithFeatureSettingsService:] */

undefined1 * FUN_105c5ac84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec8c8;
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



/* Entry: 105c5acf8; end: 105c5ad37; -[SCFriendmojiUserPolicySettings policy] */

undefined8 FUN_105c5acf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb9840();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c5ad38; end: 105c5aebf; -[SCFriendmojiUserPolicySettings setPolicy:] */

void FUN_105c5ad38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar3 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010c0f8560(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c5aec0; end: 105c5aecb;  */

void FUN_105c5aec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setFriendmojiPolicy__112645bb0,
             (long)*(int *)(param_1 + 0x28));
  return;
}



/* Entry: 105c5aecc; end: 105c5b013;  */

/* WARNING: Possible PIC construction at 0x000105c5afd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c5afd4) */
/* WARNING: Removing unreachable block (ram,0x000105c5affc) */

void FUN_105c5aecc(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb9840();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar1 == *(int *)(param_1 + 0x30)) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
    ___stack_chk_fail();
    lVar4 = *(long *)(lVar4 + 0x20);
    puVar2 = param_2;
  }
  else {
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_completeWithError__1125ae8d0,puVar2);
  return;
}



/* Entry: 105c5b014; end: 105c5b01f;  */

void FUN_105c5b014(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 105c5b020; end: 105c5b02b; -[SCFriendmojiUserPolicySettings .cxx_destruct] */

void FUN_105c5b020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c5b02c; end: 105c5b09f; -[SCFriendmojiUserPolicyServices initWithFriendmojiUserPolicyProvider:] */

undefined1 * FUN_105c5b02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec8d0;
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



/* Entry: 105c5b0a0; end: 105c5b0a7; -[SCFriendmojiUserPolicyServices friendmojiUserPolicyProvider] */

undefined8 FUN_105c5b0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c5b0a8; end: 105c5b0b3; -[SCFriendmojiUserPolicyServices .cxx_destruct] */

void FUN_105c5b0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c5b0b4; end: 105c5b0ff; +[SCFriendmojiUserPolicy everyone] */

void FUN_105c5b0b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca0;
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



/* Entry: 105c5b100; end: 105c5b14b; +[SCFriendmojiUserPolicy friends] */

void FUN_105c5b100(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca0;
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



/* Entry: 105c5b14c; end: 105c5b193; +[SCFriendmojiUserPolicy onlyMe] */

void FUN_105c5b14c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca0;
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



/* Entry: 105c5b194; end: 105c5b1b7; -[SCFriendmojiUserPolicy copyWithZone:] */

undefined8 FUN_105c5b194(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c5b1b8; end: 105c5b1bf; -[SCFriendmojiUserPolicy hash] */

undefined8 FUN_105c5b1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c5b1c0; end: 105c5b203; -[SCFriendmojiUserPolicy internalInit] */

void FUN_105c5b1c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ec8d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c5b204; end: 105c5b28b; -[SCFriendmojiUserPolicy isEqual:] */

bool FUN_105c5b204(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 105c5b28c; end: 105c5b327; -[SCFriendmojiUserPolicy matchOnlyMe:friends:everyone:] */

void FUN_105c5b28c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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



/* Entry: 105c5b328; end: 105c5b49b; -[SCLensStudioPairingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5b328(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_112732de0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112732de4;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112732de8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ae720;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105c5b49c;
  puStack_60 = &UNK_1108e0468;
  lStack_58 = lVar2;
  lStack_50 = lVar3;
  lStack_48 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(lVar3);
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c36f0;
  _objc_alloc(PTR_PTR_1126c36f0);
  func_0x00010c0336e0();
  _objc_release(puVar4);
  _objc_release(lStack_48);
  _objc_release(lStack_50);
  _objc_release(lStack_58);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c5b49c; end: 105c5b4cf;  */

void FUN_105c5b49c(void)

{
  _objc_alloc(PTR_PTR_1126c36e8);
  func_0x00010c048a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c5b4d0; end: 105c5b51f; -[SCLensStudioPairingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5b4d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732de8);
  _objc_destroyWeak(param_1 + _DAT_112732de0);
  _objc_destroyWeak(param_1 + _DAT_112732de4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732dec);
  return;
}



/* Entry: 105c5b520; end: 105c5b65b; -[SCLensStudioSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5b520(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c36f8;
  _objc_alloc();
  lVar9 = (long)_DAT_112732df0;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112732df4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c097080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112732df8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e960(puVar1,param_2,lVar2,lVar5,lVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112732dfc);
  *(undefined **)(param_1 + _DAT_112732dfc) = puVar1;
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c5b65c; end: 105c5b75f; -[SCLensStudioSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5b65c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112732e00;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar4);
  param_1 = param_1 + _DAT_112732df0;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c5b760;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar4;
  _objc_retain(uVar4);
  func_0x00010bf6f440(lVar3,param_2,&puStack_58);
  _objc_release(lVar3);
  _objc_release(param_1);
  uVar2 = uVar4;
  func_0x00010c117720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c5b760; end: 105c5b767;  */

void FUN_105c5b760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105c5b768; end: 105c5b7cb; -[SCLensStudioSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5b768(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732df4);
  _objc_destroyWeak(param_1 + _DAT_112732df8);
  _objc_destroyWeak(param_1 + _DAT_112732df0);
  _objc_storeStrong(param_1 + _DAT_112732e00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732dfc,0);
  return;
}



/* Entry: 105c5b7cc; end: 105c5b99f; -[SCSpectaclesLensStudioPairManager initWithSnapTokenProvider:unifiedGRPCClientFactory:lensUserProvider:] */

undefined1 *
FUN_105c5b7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126ec8e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126c3700;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar6;
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105c5b9a0; end: 105c5bacf; -[SCSpectaclesLensStudioPairManager registerStudioPairingWithTokenUUID:completion:] */

void FUN_105c5b9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c3708;
  _objc_alloc_init(PTR_PTR_1126c3708);
  func_0x00010c216b20();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105c5bad0;
  puStack_60 = &UNK_1108e0498;
  uStack_58 = uVar3;
  uStack_50 = uVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  func_0x00010c0f2b00(uVar4,param_2,puVar2,0,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105c5bad0; end: 105c5bbaf;  */

void FUN_105c5bad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126c36e8;
  func_0x00010be6fc20(PTR_PTR_1126c36e8,param_2,param_2,param_3);
  if (puVar1 == (undefined *)0x1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c097100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287300();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105c5bbb0;
    puStack_48 = &UNK_110860cf8;
    _objc_retain(lVar4);
    lStack_40 = lVar4;
    puStack_38 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 105c5bbb0; end: 105c5bbbf;  */

void FUN_105c5bbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c5bbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c5bbc0; end: 105c5bc93; -[SCSpectaclesLensStudioPairManager unpairStudioWithCompletion:] */

void FUN_105c5bbc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3710;
  _objc_alloc_init(PTR_PTR_1126c3710);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c5bc94;
  puStack_48 = &UNK_1108e04c8;
  uStack_40 = uVar3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010c281ca0(uVar2,param_2,puVar1,0,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c5bc94; end: 105c5bd9b;  */

void FUN_105c5bc94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c097100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287300();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105c5bd9c;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(lVar3);
    lStack_48 = lVar3;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(lStack_50);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c5bd9c; end: 105c5bdab;  */

void FUN_105c5bd9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c5bda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105c5bdac; end: 105c5bde3; +[SCSpectaclesLensStudioPairManager _pairStatusFromResponse:error:] */

undefined8 FUN_105c5bdac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_3 != 0) && (param_4 == 0)) {
    func_0x00010c252d60();
    uVar1 = 2;
    if ((int)param_3 == 2) {
      uVar1 = 3;
    }
    if ((int)param_3 == 1) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 105c5bde4; end: 105c5be13; -[SCSpectaclesLensStudioPairManager .cxx_destruct] */

void FUN_105c5bde4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c5be14; end: 105c5be87; -[UNISpectaclesPairingService initWithUnifiedGrpcService:] */

undefined1 * FUN_105c5be14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec8e8;
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



/* Entry: 105c5be88; end: 105c5bf6b; -[UNISpectaclesPairingService isRegisteredWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5be88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd818;
  _objc_opt_class(PTR_PTR_1126bd818);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9c78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5bf6c; end: 105c5c04f; -[UNISpectaclesPairingService canRegisterStudioWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5bf6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd820;
  _objc_opt_class(PTR_PTR_1126bd820);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9c98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c050; end: 105c5c133; -[UNISpectaclesPairingService registerStudioWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5c050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd828;
  _objc_opt_class(PTR_PTR_1126bd828);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9cb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c134; end: 105c5c217; -[UNISpectaclesPairingService createPairingAuthorizationTokenWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5c134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd830;
  _objc_opt_class(PTR_PTR_1126bd830);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9cd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c218; end: 105c5c2fb; -[UNISpectaclesPairingService pairAccountWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5c218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd838;
  _objc_opt_class(PTR_PTR_1126bd838);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9cf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c2fc; end: 105c5c3df; -[UNISpectaclesPairingService unpairAllAccountsWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5c2fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd840;
  _objc_opt_class(PTR_PTR_1126bd840);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9d18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c3e0; end: 105c5c4c3; -[UNISpectaclesPairingService getCertsWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5c3e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd858;
  _objc_opt_class(PTR_PTR_1126bd858);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9d78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c4c4; end: 105c5c5a7; -[UNISpectaclesPairingService echoWithRequest:callOptionsBuilder:handler:] */

void FUN_105c5c4c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd870;
  _objc_opt_class(PTR_PTR_1126bd870);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9dd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5c5a8; end: 105c5c68b; -[UNISpectaclesPairingService getAllAccountsPairedToAssociatedLensStudioRequest:callOptionsBuilder:handler:] */

void FUN_105c5c5a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd850;
  _objc_opt_class(PTR_PTR_1126bd850);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df9d58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


