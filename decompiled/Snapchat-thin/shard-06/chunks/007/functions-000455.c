/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cb2b28; end: 104cb2b2f; -[SCActivityCenterActionConfig setActionType:] */

void FUN_104cb2b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 104cb2b30; end: 104cb2b3b; -[SCActivityCenterActionConfig .cxx_destruct] */

void FUN_104cb2b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb2b3c; end: 104cb2cd7; +[SCActivityCenterBillboardABHelper _cachedCoFConfigs:] */

undefined1  [16] FUN_104cb2b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = lRam00000001136b8970;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104cb2c04;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar4 = param_3;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136b8970,&puStack_58);
    uVar4 = uStack_38;
  }
  uVar3 = uRam00000001136b8978;
  _objc_retain(uRam00000001136b8978);
  uVar1 = uRam00000001136b8968;
  _objc_release(uVar4);
  _objc_release(param_3);
  auVar5[8] = uVar1;
  auVar5._0_8_ = uVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 104cb2cd8; end: 104cb2cdf; +[SCActivityCenterBillboardABHelper useTestingMode] */

undefined8 FUN_104cb2cd8(void)

{
  return 0;
}



/* Entry: 104cb2ce0; end: 104cb2d27; +[SCActivityCenterBillboardABHelper shouldShowSubtitle:] */

uint FUN_104cb2ce0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdd7f00(param_1);
  _objc_release();
  _objc_release(param_3);
  return param_2 & 1;
}



/* Entry: 104cb2d28; end: 104cb2ddb; +[SCActivityCenterBillboardABHelper _activityCenterBillboardGenericActions:] */

void FUN_104cb2d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bdd7f00(param_1,param_2,param_3);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126aee60;
    _objc_alloc(PTR_PTR_1126aee60);
    func_0x00010c008360();
  }
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cb2ddc; end: 104cb2e5f; +[SCActivityCenterBillboardABHelper _isValidActionType:] */

undefined * FUN_104cb2ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117e238);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4b900(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 104cb2e60; end: 104cb2e6f; +[SCActivityCenterBillboardABHelper _actionTypeFromPBType:] */

long FUN_104cb2e60(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 5) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 104cb2e70; end: 104cb2eaf; +[SCActivityCenterBillboardABHelper _actionConfigFromLegacyActionWithIsButtonAction:] */

void FUN_104cb2e70(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aee68;
  _objc_opt_new(PTR_PTR_1126aee68);
  func_0x00010c161fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cb2eb0; end: 104cb30bb; +[SCActivityCenterBillboardABHelper _birthdayCampaignActionConfig:tweakActionType:genericActions:isButtonAction:] */

void FUN_104cb2eb0(undefined *param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5
                  ,ulong param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126aee68;
  _objc_opt_new(PTR_PTR_1126aee68);
  func_0x00010c161fe0();
  if (param_3 != 0) {
    func_0x00010be45260(param_1,param_2,param_4);
    if ((int)param_1 == 0) {
      param_4 = 0;
    }
    func_0x00010c161fe0(puVar2,param_2,param_4);
    _objc_retain(puVar2);
    param_1 = puVar2;
    goto LAB_104cb303c;
  }
  if (param_5 == 0) {
LAB_104cb3024:
    func_0x00010bdc42e0(param_1,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_5;
    if ((param_6 & 1) == 0) {
      func_0x00010c0b65a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf253a0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar3;
    func_0x00010c0b65e0();
    if ((int)lVar4 == 0) {
      func_0x00010bdc42e0(param_1,param_2,param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = lVar3;
      func_0x00010c0b65e0();
      if ((int)lVar4 != 1) {
        lVar4 = lVar3;
        func_0x00010c08fba0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010beef1e0();
        iVar1 = (int)lVar5;
        if (iVar1 < 1) {
          if ((iVar1 != -0x4524111) && (iVar1 != 0)) {
LAB_104cb3014:
            _objc_release(lVar4);
            _objc_release(lVar3);
            goto LAB_104cb3024;
          }
        }
        else {
          if (iVar1 == 1) {
            uVar6 = 6;
          }
          else if (iVar1 == 3) {
            uVar6 = 8;
          }
          else {
            if (iVar1 != 2) goto LAB_104cb3014;
            uVar6 = 7;
          }
          func_0x00010c161fe0(puVar2,param_2,uVar6);
          lVar5 = lVar4;
          func_0x00010c0e0180(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0740(puVar2,param_2,lVar5);
          _objc_release(lVar5);
        }
        _objc_retain(puVar2);
        _objc_release(lVar4);
        _objc_release(lVar3);
        param_1 = puVar2;
        goto LAB_104cb303c;
      }
      lVar4 = lVar3;
      func_0x00010beef1e0(lVar3);
      func_0x00010bdc47c0(param_1,param_2,lVar4);
      func_0x00010c161fe0(puVar2,param_2,param_1);
      _objc_retain(puVar2);
      param_1 = puVar2;
    }
    _objc_release(lVar3);
  }
LAB_104cb303c:
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cb30bc; end: 104cb3117; +[SCActivityCenterBillboardABHelper birthdayCampaignMainAction:] */

void FUN_104cb30bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdc5360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd43a0(param_1,param_2,0,1,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cb3118; end: 104cb3173; +[SCActivityCenterBillboardABHelper birthdayCampaignButtonAction:] */

void FUN_104cb3118(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdc5360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd43a0(param_1,param_2,0,2,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cb3174; end: 104cb33e7; +[SCActivityCenterBillboardABHelper birthdayEligibilityConfig:] */

void FUN_104cb3174(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  if (param_3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126aee70;
    _objc_opt_new(PTR_PTR_1126aee70);
    lVar1 = param_3;
    func_0x00010c0b84a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dadf58,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010c214640(puVar8,param_2,99);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c296d80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067ec0();
      func_0x00010c214640(puVar8,param_2,lVar3);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0b84a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dadf78,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c214680(puVar8,param_2,499);
    }
    else {
      lVar3 = lVar2;
      func_0x00010c296d80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067ec0();
      func_0x00010c214680(puVar8,param_2,lVar4);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0b84a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dadf98,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010c214660(puVar8,param_2,0xffffffff);
    }
    else {
      lVar4 = lVar3;
      func_0x00010c296d80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c067ec0();
      func_0x00010c214660(puVar8,param_2,lVar5);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010c0b84a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dadfb8,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010c2146a0(puVar8,param_2,0x5a);
    }
    else {
      lVar5 = lVar4;
      func_0x00010c296d80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c067ec0();
      func_0x00010c2146a0(puVar8,param_2,lVar6);
      _objc_release(lVar5);
    }
    lVar5 = param_3;
    func_0x00010c0b84a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dadfd8,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c2146c0(puVar8,param_2,0x1e);
    }
    else {
      lVar6 = lVar5;
      func_0x00010c296d80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c067ec0();
      func_0x00010c2146c0(puVar8,param_2,lVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104cb33e8; end: 104cb34bf; -[SCActivityCenterBillboardFHPActionProvider openChatDeeplinkActionWithSnapchatter:] */

void FUN_104cb33e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae8a8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126aee78;
  _objc_opt_new(PTR_PTR_1126aee78);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ab20(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c1d4d60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cb34c0; end: 104cb35d3; -[SCActivityCenterBillboardFHPActionProvider openReplyCameraActionWithSnapchatter:lensId:] */

void FUN_104cb34c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae8a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126aee80;
  _objc_opt_new(PTR_PTR_1126aee80);
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21f760(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126aee88;
  _objc_opt_new(PTR_PTR_1126aee88);
  func_0x00010c1ba8a0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c08fa60();
  puVar4 = puVar2;
  func_0x00010c08fb40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60();
  _objc_release(param_4);
  _objc_release(puVar4);
  func_0x00010c1d5000(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cb35d4; end: 104cb362f; -[SCActivityCenterBillboardFHPActionProvider openBirthdayPageDeeplinkAction] */

void FUN_104cb35d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae8a8;
  _objc_opt_new(PTR_PTR_1126ae8a8);
  puVar2 = PTR_PTR_1126aee78;
  _objc_opt_new(PTR_PTR_1126aee78);
  func_0x00010c18ab20();
  func_0x00010c1d4d60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cb3630; end: 104cb371f; -[SCActivityCenterBillboardFHPActionProvider _actionLensReplyWithSnapchatter:] */

void FUN_104cb3630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aee90;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126ae698;
  _objc_opt_new(PTR_PTR_1126ae698);
  func_0x00010c21dd80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c290fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ecc0();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c290fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620();
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cb3720; end: 104cb37cf; -[SCActivityCenterBillboardFHPActionProvider openLensCollectionActionWithSnapchatter:collectionId:] */

void FUN_104cb3720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar2 = PTR_PTR_1126ae8a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010bdc4440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar3 = param_4;
  func_0x00010c08fa60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae038;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  func_0x00010c1bb200(param_1,param_2,ppuVar1);
  _objc_release(param_4);
  func_0x00010c1d4ea0(puVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cb37d0; end: 104cb37db; -[SCActivityCenterBillboardFHPActionProvider openFullLensCollectionActionWithSnapchatter:] */

void FUN_104cb37d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_openLensCollectionActionWithSnap_112617ef0,param_3,
             &PTR____CFConstantStringClassReference_110dae038);
  return;
}



/* Entry: 104cb37dc; end: 104cb37e7; -[SCActivityCenterBillboardFHPActionProvider openShortLensCollectionActionWithSnapchatter:] */

void FUN_104cb37dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_openLensCollectionActionWithSnap_112617ef0,param_3,
             &PTR____CFConstantStringClassReference_110dae058);
  return;
}



/* Entry: 104cb37e8; end: 104cb38bb; -[SCActivityCenterBillboardFHPActionProvider openNamespaceActionWithSnapchatter:namespace:] */

void FUN_104cb37e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ae8a8;
    _objc_opt_new(PTR_PTR_1126ae8a8);
    func_0x00010bdc4440(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aee98;
    _objc_opt_new(PTR_PTR_1126aee98);
    func_0x00010c1cb120();
    func_0x00010c1cb120(param_1,param_2,puVar2);
    func_0x00010c1d4ea0(puVar3,param_2,param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cb38bc; end: 104cb393f; -[SCActivityCenterBillboardFHPActionProvider mainActionFor:snapchatter:] */

void FUN_104cb38bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeea0;
  _objc_retain(param_4);
  func_0x00010bf1a600(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc4340(param_1,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cb3940; end: 104cb39c3; -[SCActivityCenterBillboardFHPActionProvider buttonActionFor:snapchatter:] */

void FUN_104cb3940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeea0;
  _objc_retain(param_4);
  func_0x00010bf1a5e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc4340(param_1,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cb39c4; end: 104cb3b93; -[SCActivityCenterBillboardFHPActionProvider _actionForConfig:snapchatter:] */

void FUN_104cb39c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010beef1e0();
  uVar3 = 0;
  if (lVar1 < 5) {
    if (lVar1 < 3) {
      if (lVar1 == 1) {
        func_0x00010c0e9040(param_1,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
      }
      else if (lVar1 == 2) {
        func_0x00010c0e96c0(param_1,param_2,param_4,0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
      }
    }
    else if (lVar1 == 3) {
      func_0x00010c0e9000(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
    }
    else if (lVar1 == 4) {
      func_0x00010c0e9280(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
    }
    goto LAB_104cb3b6c;
  }
  lVar2 = param_3;
  if (lVar1 < 7) {
    if (lVar1 == 5) {
      func_0x00010c0e97c0(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      goto LAB_104cb3b6c;
    }
    if (lVar1 != 6) goto LAB_104cb3b6c;
    func_0x00010c0e0180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e96c0(param_1,param_2,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 7) {
    func_0x00010c0e0180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9360(param_1,param_2,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 8) goto LAB_104cb3b6c;
    func_0x00010c0e0180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9400(param_1,param_2,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  uVar3 = param_1;
LAB_104cb3b6c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104cb3b94; end: 104cb3ccb; -[SCActivityCenterBillboardFHPUIProvider initWithSnapchattersDataFetcher:useTestingMode:userInfoRepository:circumstanceEngineServices:] */

undefined1 *
FUN_104cb3b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3a60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x2c) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeeb0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010be9b220(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cb3ccc; end: 104cb3d1f; -[SCActivityCenterBillboardFHPUIProvider dealloc] */

void FUN_104cb3ccc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e3a60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104cb3d20; end: 104cb3ed7; -[SCActivityCenterBillboardFHPUIProvider _scheduleLoadData] */

void FUN_104cb3d20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aeeb8;
  if ((uVar3 & 1) == 0) {
    func_0x00010bef1440(PTR_PTR_1126aeeb8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef1460();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_58,param_1);
  puVar7 = PTR_PTR_1126aeec0;
  puVar5 = PTR_PTR_1126ae960;
  func_0x00010bef1400(PTR_PTR_1126ae960);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = (undefined1)uVar3;
  func_0x00010bf0caa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar7;
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  return;
}



/* Entry: 104cb3ed8; end: 104cb3f1b;  */

void FUN_104cb3ed8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4d0a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb3f1c; end: 104cb3fdb; -[SCActivityCenterBillboardFHPUIProvider _loadDataWithFriendsFeedSchedulingEnabled:] */

void FUN_104cb3f1c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4d010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadData_112570da0);
    return;
  }
  _objc_initWeak(auStack_28);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104cb3fdc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cb3fdc; end: 104cb400f;  */

void FUN_104cb3fdc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4d000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb4010; end: 104cb40ff; -[SCActivityCenterBillboardFHPUIProvider _loadData] */

void FUN_104cb4010(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0d42a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cb4100; end: 104cb414f;  */

void FUN_104cb4100(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be803a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cb4150; end: 104cb4163; -[SCActivityCenterBillboardFHPUIProvider _offsetForConfig:] */

double FUN_104cb4150(undefined8 param_1,undefined8 param_2,int param_3)

{
  return (double)param_3 * -86400.0;
}



/* Entry: 104cb4164; end: 104cb41cf; -[SCActivityCenterBillboardFHPUIProvider _buttonTitleForAction:] */

void FUN_104cb4164(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 4) {
    if (param_3 == 1) {
      func_0x000104cb4d90(0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104cb4190;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        func_0x000104cb4d78();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104cb4190;
    }
  }
  else if (4 < param_3 - 4U) goto LAB_104cb4190;
  func_0x000104cb4d60();
  _objc_retainAutoreleasedReturnValue();
LAB_104cb4190:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb41d0; end: 104cb4227; -[SCActivityCenterBillboardFHPUIProvider _proceedSnapchatters:] */

void FUN_104cb41d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfaf3e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x18),param_2,PTR____NSArray0__struct_11034ab48);
  }
  else {
    func_0x00010bdd5c60(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cb4228; end: 104cb47e3; -[SCActivityCenterBillboardFHPUIProvider findMostRecentInteractingSnapchatter:ignoreSamedayConversations:] */

/* WARNING: Possible PIC construction at 0x000104cb4468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cb446c) */

void FUN_104cb4228(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined *puStack_170;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = param_3;
  _objc_release(uVar4);
  puVar19 = *(undefined8 **)(param_1 + 0x30);
  puVar5 = PTR_PTR_1126aeea0;
  func_0x00010bf1a640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf529e0();
  puVar22 = puVar5;
  func_0x00010c26e7c0();
  if ((int)puVar22 < lVar6) {
    lVar6 = param_3;
    func_0x00010bf529e0();
    puVar22 = puVar5;
    func_0x00010c26e800();
    if ((int)puVar22 < lVar6) {
      puVar22 = puVar5;
      func_0x00010c26e840();
      uVar3 = SUB84(puVar22,0);
    }
    else {
      puVar22 = puVar5;
      func_0x00010c26e820();
      uVar3 = SUB84(puVar22,0);
    }
  }
  else {
    puVar22 = puVar5;
    func_0x00010c26e7e0();
    uVar3 = SUB84(puVar22,0);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  lVar6 = param_3;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    puStack_170 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf98520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    if (*(int *)(param_1 + 0x28) != -1) {
      func_0x00010be67340(param_1);
      uVar4 = uVar7;
      func_0x00010bf64e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
    }
    puVar22 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar22;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    lVar10 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(param_3);
    puVar19 = &uStack_150;
    lVar10 = param_3;
    func_0x00010bf52a60();
    if (lVar10 == 0) {
      puStack_170 = (undefined *)0x0;
    }
    else {
      puStack_170 = (undefined *)0x0;
      lVar20 = *plStack_140;
      do {
        lVar21 = 0;
        do {
          if (*plStack_140 != lVar20) {
            _objc_enumerationMutation(param_3);
          }
          puVar22 = *(undefined **)(lStack_148 + lVar21 * 8);
          if (lVar6 != 0) {
            func_0x00010c2923e0(puVar22);
            _objc_retainAutoreleasedReturnValue();
            goto code_r0x00010c0720c0;
          }
          puVar11 = puVar22;
          func_0x00010bfb8280();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c261440();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf0a8a0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010bf1a5c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          if (puVar14 != (undefined *)0x0) {
            puVar11 = puVar22;
            func_0x00010bfb8280();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0891c0();
            dVar1 = (double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13
                                                  (uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24))))
                                                  )));
            func_0x00010c26f320(uVar4);
            dVar2 = (double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13
                                                  (uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24))))
                                                  )));
            _objc_release(puVar11);
            if (dVar2 <= dVar1) {
              if (*(int *)(param_1 + 0x28) != -1) {
                puVar11 = puVar22;
                func_0x00010bfb8280();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0891c0();
                dVar1 = (double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,
                                                  CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,
                                                  uVar24)))))));
                _objc_release(puVar11);
                if (dVar1 <= 1.0) goto LAB_104cb46a0;
              }
              if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
                puVar11 = puVar14;
                func_0x00010c0d0e40();
                puVar12 = puVar9;
                func_0x00010c0d0e40();
                if (puVar12 == (undefined *)((ulong)puVar11 & 0xffffffff)) {
                  puVar11 = puVar14;
                  func_0x00010bf65700();
                  puVar12 = puVar9;
                  func_0x00010bf65700();
                  if (puVar12 == (undefined *)((ulong)puVar11 & 0xffffffff)) goto LAB_104cb4564;
                }
              }
              else {
LAB_104cb4564:
                if (puStack_170 != (undefined *)0x0) {
                  puVar11 = puStack_170;
                  func_0x00010bfb8280();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0891c0();
                  dVar1 = (double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,
                                                  CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,
                                                  uVar24)))))));
                  puVar12 = puVar22;
                  func_0x00010bfb8280();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0891c0();
                  dVar2 = (double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,
                                                  CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,
                                                  uVar24)))))));
                  _objc_release(puVar12);
                  _objc_release(puVar11);
                  if (dVar2 <= dVar1) goto LAB_104cb46a0;
                }
                puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
                if ((param_4 & 1) == 0) {
                  _objc_retain(puVar22);
                }
                else {
                  puVar12 = puVar22;
                  func_0x00010bfb8280(puVar22);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0891c0();
                  func_0x00010bf655e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar12);
                  puVar12 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
                  func_0x00010bf5e300();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar12;
                  func_0x00010bf44640();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar12);
                  puVar12 = puVar13;
                  func_0x00010bf65700();
                  puVar15 = puVar9;
                  func_0x00010bf65700();
                  if (puVar12 == puVar15) {
                    puVar12 = puVar13;
                    func_0x00010c0d0e40();
                    puVar15 = puVar9;
                    func_0x00010c0d0e40();
                    if (puVar12 != puVar15) goto LAB_104cb4704;
                    puVar12 = puVar13;
                    func_0x00010c2bedc0();
                    puVar15 = puVar9;
                    func_0x00010c2bedc0();
                    puVar23 = puStack_170;
                    if (puVar12 != puVar15) goto LAB_104cb4704;
                  }
                  else {
LAB_104cb4704:
                    _objc_retain(puVar22);
                    _objc_release(puStack_170);
                    puVar23 = puVar22;
                  }
                  _objc_release(puVar13);
                  puStack_170 = puVar11;
                  puVar22 = puVar23;
                }
                _objc_release(puStack_170);
                puStack_170 = puVar22;
              }
            }
          }
LAB_104cb46a0:
          _objc_release(puVar14);
          lVar21 = lVar21 + 1;
        } while (lVar10 != lVar21);
        puVar19 = &uStack_150;
        lVar10 = param_3;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(param_3);
    _objc_release(lVar6);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_170);
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar19);
  lVar6 = *(long *)(param_3 + 0x38);
  func_0x00010c0b65c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010bf253c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea0;
  func_0x00010bf1a5e0(PTR_PTR_1126aeea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef1e0();
  _objc_release(puVar5);
  lVar10 = param_3;
  func_0x00010bdd7460(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x18));
  }
  else {
    puVar16 = puVar19;
    func_0x00010901d7c4(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    FUN_104cb4d48();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aeed0;
    _objc_alloc();
    puVar18 = puVar19;
    func_0x00010c2923e0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006040();
    _objc_release(puVar18);
    puVar22 = PTR_PTR_1126aed90;
    _objc_alloc();
    lVar21 = param_3;
    func_0x00010be1d360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc2e0();
    _objc_release(lVar21);
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar7);
    _objc_release(puVar9);
    _objc_release(puVar22);
    _objc_release(puVar5);
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  _objc_release(lVar10);
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(puVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010c0720c0:
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104cb47e4; end: 104cb4a2b; -[SCActivityCenterBillboardFHPUIProvider _buildAndResolveBillboardConfigForSnapchatter:] */

void FUN_104cb47e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0b65c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf253c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aeea0;
  func_0x00010bf1a5e0(PTR_PTR_1126aeea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef1e0();
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010bdd7460(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR____NSArray0__struct_11034ab48;
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    uVar5 = param_3;
    func_0x00010901d7c4(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_104cb4d48();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aeed0;
    _objc_alloc();
    uVar12 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006040();
    _objc_release(uVar12);
    puVar8 = PTR_PTR_1126aed90;
    _objc_alloc();
    lVar9 = param_1;
    func_0x00010be1d360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc2e0();
    _objc_release(lVar9);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bf43d60(uVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110dae0d8);
  return;
}



/* Entry: 104cb4a2c; end: 104cb4a3b; -[SCActivityCenterBillboardFHPUIProvider canHandleCampaignId:] */

void FUN_104cb4a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110dae0d8);
  return;
}



/* Entry: 104cb4a3c; end: 104cb4a43; -[SCActivityCenterBillboardFHPUIProvider configs] */

void FUN_104cb4a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 104cb4a44; end: 104cb4b57; -[SCActivityCenterBillboardFHPUIProvider _getBillboardIconURLForSnapchatter:] */

void FUN_104cb4a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126aeed8;
    func_0x00010c28fae0(PTR_PTR_1126aeed8,param_2,&PTR____CFConstantStringClassReference_110dae0b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126aeed8;
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c1c0(puVar4,param_2,lVar2,lVar1,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cb4b58; end: 104cb4bcf; -[SCActivityCenterBillboardFHPUIProvider .cxx_destruct] */

void FUN_104cb4b58(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb4bd0; end: 104cb4d03; -[SCActivityCenterBillboardFHPUIProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb4bd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126aeee0;
  _objc_alloc(PTR_PTR_1126aeee0);
  lVar7 = (long)_DAT_1127103f4;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aeea0;
  func_0x00010c290be0(PTR_PTR_1126aeea0);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar5 = lVar7;
  func_0x00010c244da0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127103f8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c049c00(puVar1,param_2,lVar3,puVar4,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127103fc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar7 = lVar2;
  func_0x00010c1018e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cb4d04; end: 104cb4d47; -[SCActivityCenterBillboardFHPUIProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb4d04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127103f8);
  _objc_destroyWeak(param_1 + _DAT_1127103f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127103fc);
  return;
}



/* Entry: 104cb4d48; end: 104cb4da7;  */

void FUN_104cb4d48(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae138;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae138,
                      &PTR____CFConstantStringClassReference_110dae118,0);
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



/* Entry: 104cb4da8; end: 104cb4e23;  */

undefined * FUN_104cb4da8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8980 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dae1b8,
                        &UNK_10dd8aea8,&UNK_10dd8afa0,6,FUN_104cb4e24,0);
    do {
      if (puRam00000001136b8980 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8980;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8980,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8980 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8980;
}



/* Entry: 104cb4e24; end: 104cb4e2f;  */

bool FUN_104cb4e24(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 104cb4e30; end: 104cb4eab;  */

undefined * FUN_104cb4e30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8988 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dae1d8,
                        &UNK_10dd8afb8,&UNK_10dd8b04c,4,FUN_104cb4eac,0);
    do {
      if (puRam00000001136b8988 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8988;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8988,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8988 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8988;
}



/* Entry: 104cb4eac; end: 104cb4eb7;  */

bool FUN_104cb4eac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104cb4eb8; end: 104cb4f1f; +[ACBillboardActionsPbACBillboardLensAction descriptor] */

void FUN_104cb4eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f3020,
                        &PTR____CFConstantStringClassReference_110dae1f8,
                        &PTR_s_activity_center_config_1130ac370,&PTR_s_actionType_1130ac388,2,0x10,
                        0x1c);
    puRam00000001136b8990 = puVar1;
  }
  return;
}



/* Entry: 104cb4f20; end: 104cb4fab; +[ACBillboardActionsPbACBillboardBirthdaysGenericAction descriptor] */

undefined * FUN_104cb4f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f3070,
                        &PTR____CFConstantStringClassReference_110dae218,
                        &PTR_s_activity_center_config_1130ac370,&PTR_s_actionType_1130ac3c8,2,0x18,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136b8998 = puVar1;
  }
  return puRam00000001136b8998;
}



/* Entry: 104cb4fac; end: 104cb5013; +[ACBillboardActionsPbACBillboardBirthdaysCampaignAction descriptor] */

void FUN_104cb4fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f30c0,
                        &PTR____CFConstantStringClassReference_110dae238,
                        &PTR_s_activity_center_config_1130ac370,&PTR_s_mainAction_1130ac408,2,0xc,
                        0x1c);
    puRam00000001136b89a0 = puVar1;
  }
  return;
}



/* Entry: 104cb5014; end: 104cb510f; +[ACBillboardActionsPbACBillboardBirthdaysCampaignGenericAction descriptor] */

void FUN_104cb5014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f3110,
                        &PTR____CFConstantStringClassReference_110dae258,
                        &PTR_s_activity_center_config_1130ac370,&PTR_s_mainAction_1130ac448,2,0x18,
                        0x1c);
    puRam00000001136b89a8 = puVar1;
  }
  return;
}



/* Entry: 104cb5110; end: 104cb5123; -[SCACBillboardReportingActionLogger _acCampaigns] */

void FUN_104cb5110(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_setWithArray__112667130,
             &PTR__OBJC_CLASS___NSConstantArray_11117e250);
  return;
}



/* Entry: 104cb5124; end: 104cb5517;  */

void FUN_104cb5124(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bdc3ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf2c020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2bf80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      uVar2 = param_2;
      func_0x00010bf2c020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27dd80();
      _objc_release(uVar2);
      if (uVar3 < 3) {
        ppuVar9 = (undefined **)(&PTR_PTR_1108475e0)[uVar3];
      }
      else {
        ppuVar9 = &PTR____CFConstantStringClassReference_110dae278;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126aeef0;
      _objc_opt_new();
      uVar2 = param_2;
      func_0x00010bf2c020(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf3f4c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c177840(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010bf2c020(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf2bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1778c0(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010bf2c020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b3cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar7 = PTR_PTR_1126aeed0;
      _objc_opt_class(PTR_PTR_1126aeed0);
      uVar8 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar7);
      uVar2 = uVar3;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010bf52720(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c1844c0(puVar6);
      _objc_release(uVar3);
      uVar2 = param_2;
      func_0x00010bf2be40(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      _objc_retain(uVar5);
      _objc_retain(param_2);
      _objc_retain(puVar6);
      _objc_retain(uVar5);
      _objc_retain(param_2);
      _objc_retain(puVar6);
      _objc_retain(uVar5);
      _objc_retain(param_2);
      _objc_retain(param_2);
      _objc_retain(uVar5);
      _objc_retain(puVar6);
      func_0x00010c0bcfe0(uVar2);
      _objc_release(uVar2);
      _objc_release(ppuVar9);
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(puVar6);
      _objc_release(ppuVar9);
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(puVar6);
      _objc_release(ppuVar9);
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(puVar6);
      _objc_release(ppuVar9);
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cb5518; end: 104cb5817;  */

void FUN_104cb5518(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c197d00(*(undefined8 *)(param_1 + 0x20),param_2,3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010bf2c020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2bf80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf2c020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf3f4c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_104cb6784(uVar6,uVar3,uVar1,uVar5,1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cb5818; end: 104cb5847; -[SCACBillboardReportingActionLogger .cxx_destruct] */

void FUN_104cb5818(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb5848; end: 104cb5947; -[SCACBillboardTransponder initWithValdiRuntimeProvider:performer:] */

undefined1 * FUN_104cb5848(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3a70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    if (param_4 == 0) {
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar3;
    }
    else {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_4;
    }
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010bdea500(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cb5948; end: 104cb5a47; -[SCACBillboardTransponder transpondEvent:] */

void FUN_104cb5948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf2c020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf2bf80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd97e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfbc3e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104cb5a48;
    puStack_50 = &UNK_1108475f8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c297280(uVar3,param_2,&puStack_68,*(undefined8 *)(param_1 + 0x10),1);
    _objc_release(uVar3);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104cb5a48; end: 104cb5bdf;  */

void FUN_104cb5a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2be40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0bcfe0(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2c020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2ac0(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104cb5be0; end: 104cb5bef; -[SCACBillboardTransponder _campaignIsEligibleForReceipt:] */

void FUN_104cb5be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110daaf38);
  return;
}



/* Entry: 104cb5bf0; end: 104cb5ca3; -[SCACBillboardTransponder _createActionTracker] */

void FUN_104cb5bf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cb5ca4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104cb5ca4; end: 104cb5d33;  */

void FUN_104cb5ca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104cb5d34;
  puStack_30 = &UNK_110847628;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bfc69a0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 104cb5d34; end: 104cb5d9f;  */

void FUN_104cb5d34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aeef8;
  func_0x00010bfbc0e0(PTR_PTR_1126aeef8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = puVar1;
  func_0x00010bf54c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cb5da0; end: 104cb5ddb; -[SCACBillboardTransponder .cxx_destruct] */

void FUN_104cb5da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb5ddc; end: 104cb5e2b;  */

void FUN_104cb5ddc(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 104cb5e2c; end: 104cb6047; -[SCACBillboardReportingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb5e2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112710414);
  *(undefined **)(param_1 + _DAT_112710414) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104cb6048;
  puStack_68 = &UNK_110847688;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112710418);
  *(undefined **)(param_1 + _DAT_112710418) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae720;
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104cb60e0;
  puStack_90 = &UNK_1108476b8;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271041c);
  *(undefined **)(param_1 + _DAT_11271041c) = puVar2;
  _objc_release(uVar4);
  param_1 = param_1 + _DAT_112710420;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfac220();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_58);
  func_0x00010c0e33e0(lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104cb6048; end: 104cb60df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6048(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126aef00;
    _objc_alloc(PTR_PTR_1126aef00);
    lVar1 = param_1 + _DAT_112710434;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000104cb507c(puVar3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cb60e0; end: 104cb619f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb60e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126aef08;
    _objc_alloc(PTR_PTR_1126aef08);
    lVar1 = param_1 + _DAT_112710430;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060060(puVar4,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cb61a0; end: 104cb61ef;  */

void FUN_104cb61a0(long param_1,undefined8 param_2)

{
  func_0x00010bfac240(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec70c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cb61f0; end: 104cb627f; -[SCACBillboardReportingEntryPoint _receivedEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb61f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710418);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104cb5124();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271041c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27aee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cb6280; end: 104cb650b; -[SCACBillboardReportingEntryPoint _subscribeReportingForObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112710414);
  _objc_retain(uVar10);
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_1 + _DAT_112710424;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126aeeb8;
  func_0x00010c2a1d60(PTR_PTR_1126aeeb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1400(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae970;
  func_0x00010c0b5920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104cb650c;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c2a1620(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar7 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar8 = uVar7;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112710428);
  *(undefined8 *)(param_1 + _DAT_112710428) = uVar8;
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar10);
  _objc_release(param_3);
  return;
}



/* Entry: 104cb650c; end: 104cb657f;  */

void FUN_104cb650c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a1f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb6580; end: 104cb65cb; -[SCACBillboardReportingEntryPoint warmupLoggerAndTransponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6580(long param_1)

{
  func_0x00010bf57500(*(undefined8 *)(param_1 + _DAT_112710418));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf57500(*(undefined8 *)(param_1 + _DAT_11271041c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cb65cc; end: 104cb6623; -[SCACBillboardReportingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb65cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112710428));
  puStack_28 = PTR_PTR_1126e3a78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb6624; end: 104cb6633; -[SCACBillboardReportingEntryPoint performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cb6624(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112710414);
}



/* Entry: 104cb6634; end: 104cb6673; -[SCACBillboardReportingEntryPoint setPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112710414;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cb6674; end: 104cb670f; -[SCACBillboardReportingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6674(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710414,0);
  _objc_destroyWeak(param_1 + _DAT_112710424);
  _objc_destroyWeak(param_1 + _DAT_112710434);
  _objc_destroyWeak(param_1 + _DAT_112710430);
  _objc_destroyWeak(param_1 + _DAT_112710420);
  _objc_destroyWeak(param_1 + _DAT_11271042c);
  _objc_storeStrong(param_1 + _DAT_11271041c,0);
  _objc_storeStrong(param_1 + _DAT_112710418,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710428,0);
  return;
}



/* Entry: 104cb6710; end: 104cb6783; -[SCGrapheneAcFhpLoggingMetric2 init] */

undefined1 * FUN_104cb6710(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3a80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104cb6784; end: 104cb6a43;  */

/* WARNING: Removing unreachable block (ram,0x000104cb6f8c) */
/* WARNING: Removing unreachable block (ram,0x000104cb6a0c) */
/* WARNING: Removing unreachable block (ram,0x000104cb6ccc) */
/* WARNING: Removing unreachable block (ram,0x000104cb724c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6784(long param_1,char *param_2,long *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *unaff_x24;
  char acStack_3e0 [24];
  char *pcStack_3c8;
  char **appcStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  long *plStack_390;
  char **ppcStack_388;
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  long alStack_370 [3];
  char *pcStack_358;
  char **appcStack_350 [2];
  char cStack_339;
  long lStack_338;
  char *pcStack_330;
  char *pcStack_328;
  long *plStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  long alStack_300 [3];
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  long alStack_240 [3];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long alStack_180 [3];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  plVar23 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  plVar22 = param_3;
  pcVar4 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    alStack_c0[2] = 0;
    func_0x00010007e1e8(alStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_a8 = (undefined1 *)alStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar21 = 0;
    plVar22 = plVar23;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x24 = alStack_c0;
    } while (lVar21 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  plVar16 = alStack_180;
  pcStack_c8 = FUN_104cb6a44;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar15 = pcVar1;
  plVar23 = plVar22;
  pcVar18 = pcVar4;
  pcVar19 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(plVar22);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar23 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(plVar22);
    if (plVar22 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar22);
      pcVar2 = (char *)plVar22;
      func_0x00010bdc3520(plVar22);
    }
    _objc_release(plVar22);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_130,pcVar2);
    alStack_180[0] = 0;
    alStack_180[1] = 0;
    alStack_180[2] = 0;
    func_0x00010007e1e8(alStack_180,auStack_160,&lStack_118,3);
    pcVar15 = "";
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_168 = (undefined1 *)alStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar21 = 0;
    plVar23 = plVar16;
    pcVar18 = pcVar3;
    do {
      if ((&cStack_119)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x24 = alStack_180;
    } while (lVar21 != -0x48);
  }
  _objc_release(pcVar4);
  _objc_release(plVar22);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_160);
  _objc_release(pcVar4);
  _objc_release(plVar22);
  _objc_release(pcVar1);
  __Unwind_Resume();
  plVar17 = alStack_240;
  pcStack_188 = FUN_104cb6d04;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar15;
  plVar22 = plVar23;
  plVar16 = (long *)pcVar18;
  pcVar4 = pcVar19;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar15);
  _objc_retain(plVar23);
  _objc_retain(pcVar18);
  if (pcVar3 != (char *)0x0) {
    plVar22 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar15;
      _objc_retainAutorelease(pcVar15);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_220,pcVar1);
    _objc_retain(plVar23);
    if (plVar23 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar23);
      pcVar1 = (char *)plVar23;
      func_0x00010bdc3520(plVar23);
    }
    _objc_release(plVar23);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar18);
    if (pcVar18 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar18);
      pcVar1 = pcVar18;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar18);
    func_0x00010002b838(auStack_1f0,pcVar1);
    alStack_240[0] = 0;
    alStack_240[1] = 0;
    alStack_240[2] = 0;
    func_0x00010007e1e8(alStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_228 = (undefined1 *)alStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar21 = 0;
    plVar22 = plVar17;
    plVar16 = (long *)pcVar19;
    do {
      if ((&cStack_1d9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x24 = alStack_240;
    } while (lVar21 != -0x48);
  }
  _objc_release(pcVar18);
  _objc_release(plVar23);
  pcVar3 = pcVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar18);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_220);
  _objc_release(pcVar18);
  _objc_release(plVar23);
  _objc_release(pcVar15);
  __Unwind_Resume();
  plVar17 = alStack_300;
  pcStack_248 = FUN_104cb6fc4;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar1;
  plVar23 = plVar22;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  iVar14 = (int)pcVar2;
  _objc_retain(plVar22);
  _objc_retain(plVar16);
  if (pcVar3 != (char *)0x0) {
    plVar23 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2e0,pcVar3);
    _objc_retain(plVar22);
    if (plVar22 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(plVar22);
      pcVar3 = (char *)plVar22;
      func_0x00010bdc3520(plVar22);
    }
    _objc_release(plVar22);
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(plVar16);
      pcVar3 = (char *)plVar16;
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    func_0x00010002b838(auStack_2b0,pcVar3);
    alStack_300[0] = 0;
    alStack_300[1] = 0;
    alStack_300[2] = 0;
    func_0x00010007e1e8(alStack_300,auStack_2e0,&lStack_298,3);
    puVar8 = &UNK_110847838;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_110847838,alStack_300,pcVar4);
    puStack_2e8 = (undefined1 *)alStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar21 = 0;
    plVar23 = plVar17;
    do {
      if ((&cStack_299)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar21));
      }
      iVar14 = (int)puVar8;
      lVar21 = lVar21 + -0x18;
      unaff_x24 = alStack_300;
    } while (lVar21 != -0x48);
  }
  _objc_release(plVar16);
  _objc_release(plVar22);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar16);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_2e0);
  _objc_release(plVar16);
  _objc_release(plVar22);
  _objc_release(pcVar1);
  pcVar3 = pcVar4;
  __Unwind_Resume();
  plVar17 = alStack_370;
  pcStack_308 = FUN_104cb7284;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = (char **)0x0;
  pcStack_330 = pcVar4;
  pcStack_328 = (char *)plVar16;
  plStack_320 = plVar22;
  pcStack_318 = pcVar1;
  pppuStack_310 = &pppuStack_250;
  if (pcVar3 != (char *)0x0) {
    plVar22 = *(long **)(pcVar3 + 8);
    pcVar1 = "true";
    if (iVar14 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appcStack_350,pcVar1);
    alStack_370[0] = 0;
    alStack_370[1] = 0;
    alStack_370[2] = 0;
    func_0x00010007e1e8(alStack_370,appcStack_350,&lStack_338,1);
    iVar14 = 0x10847948;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_110847948,alStack_370,plVar23);
    ppcVar5 = &pcStack_358;
    pcStack_358 = (char *)alStack_370;
    func_0x00010007e5dc();
    plVar23 = plVar17;
    plVar16 = alStack_370;
    if (cStack_339 < '\0') {
      ppcVar5 = appcStack_350[0];
      __ZdlPv();
      plVar23 = plVar17;
      plVar16 = alStack_370;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = (char *)plVar16;
  func_0x00010007e5dc(&pcStack_358);
  if (cStack_339 < '\0') {
    __ZdlPv(appcStack_350[0]);
  }
  ppcVar6 = ppcVar5;
  __Unwind_Resume();
  pcStack_378 = FUN_104cb739c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar7 = (char **)0x0;
  pcStack_3a0 = pcVar4;
  pcStack_398 = (char *)plVar16;
  plStack_390 = plVar22;
  ppcStack_388 = ppcVar5;
  pppuStack_380 = &pppuStack_310;
  if (ppcVar6 != (char **)0x0) {
    plVar22 = (long *)ppcVar6[1];
    pcVar1 = "true";
    if (iVar14 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appcStack_3c0,pcVar1);
    acStack_3e0[0] = '\0';
    acStack_3e0[1] = '\0';
    acStack_3e0[2] = '\0';
    acStack_3e0[3] = '\0';
    acStack_3e0[4] = '\0';
    acStack_3e0[5] = '\0';
    acStack_3e0[6] = '\0';
    acStack_3e0[7] = '\0';
    acStack_3e0[8] = '\0';
    acStack_3e0[9] = '\0';
    acStack_3e0[10] = '\0';
    acStack_3e0[0xb] = '\0';
    acStack_3e0[0xc] = '\0';
    acStack_3e0[0xd] = '\0';
    acStack_3e0[0xe] = '\0';
    acStack_3e0[0xf] = '\0';
    acStack_3e0[0x10] = '\0';
    acStack_3e0[0x11] = '\0';
    acStack_3e0[0x12] = '\0';
    acStack_3e0[0x13] = '\0';
    acStack_3e0[0x14] = '\0';
    acStack_3e0[0x15] = '\0';
    acStack_3e0[0x16] = '\0';
    acStack_3e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3e0,appcStack_3c0,&lStack_3a8,1);
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_110847998,acStack_3e0,plVar23);
    ppcVar7 = &pcStack_3c8;
    pcStack_3c8 = acStack_3e0;
    func_0x00010007e5dc();
    plVar16 = (long *)acStack_3e0;
    if (cStack_3a9 < '\0') {
      ppcVar7 = appcStack_3c0[0];
      __ZdlPv();
      plVar16 = (long *)acStack_3e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
    ___stack_chk_fail();
    pcStack_3c8 = (char *)plVar16;
    func_0x00010007e5dc(&pcStack_3c8);
    if (cStack_3a9 < '\0') {
      __ZdlPv(appcStack_3c0[0]);
    }
    __Unwind_Resume();
    puVar8 = PTR_PTR_1126aef10;
    _objc_alloc();
    lVar21 = (long)ppcVar7 + (long)_DAT_112710440;
    _objc_loadWeakRetained(lVar21);
    lVar9 = lVar21;
    func_0x00010bef2620();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)ppcVar7 + (long)_DAT_112710444;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)ppcVar7 + (long)_DAT_11271044c;
    _objc_loadWeakRetained(lVar12);
    lVar13 = (long)ppcVar7 + (long)_DAT_112710450;
    _objc_loadWeakRetained(lVar13);
    func_0x00010bff1420();
    uVar20 = *(undefined8 *)((long)ppcVar7 + (long)_DAT_112710454);
    *(undefined **)((long)ppcVar7 + (long)_DAT_112710454) = puVar8;
    _objc_release(uVar20);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar21);
    lVar21 = (long)ppcVar7 + (long)_DAT_112710458;
    _objc_loadWeakRetained(lVar21);
    lVar10 = lVar21;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar21);
    return;
  }
  return;
}



/* Entry: 104cb6a44; end: 104cb6d03;  */

/* WARNING: Removing unreachable block (ram,0x000104cb6f8c) */
/* WARNING: Removing unreachable block (ram,0x000104cb6ccc) */
/* WARNING: Removing unreachable block (ram,0x000104cb724c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6a44(long param_1,char *param_2,long *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *unaff_x24;
  char acStack_320 [24];
  char *pcStack_308;
  char **appcStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  long *plStack_2d0;
  char **ppcStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  long alStack_2b0 [3];
  char *pcStack_298;
  char **appcStack_290 [2];
  char cStack_279;
  long lStack_278;
  char *pcStack_270;
  char *pcStack_268;
  long *plStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  long alStack_240 [3];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long alStack_180 [3];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  plVar22 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  plVar21 = param_3;
  pcVar4 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    alStack_c0[2] = 0;
    func_0x00010007e1e8(alStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_a8 = (undefined1 *)alStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar20 = 0;
    plVar21 = plVar22;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = alStack_c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  plVar16 = alStack_180;
  pcStack_c8 = FUN_104cb6d04;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar15 = pcVar1;
  plVar22 = plVar21;
  plVar17 = (long *)pcVar4;
  pcVar18 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(plVar21);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar22 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(plVar21);
    if (plVar21 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar21);
      pcVar2 = (char *)plVar21;
      func_0x00010bdc3520(plVar21);
    }
    _objc_release(plVar21);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_130,pcVar2);
    alStack_180[0] = 0;
    alStack_180[1] = 0;
    alStack_180[2] = 0;
    func_0x00010007e1e8(alStack_180,auStack_160,&lStack_118,3);
    pcVar15 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_168 = (undefined1 *)alStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar20 = 0;
    plVar22 = plVar16;
    plVar17 = (long *)pcVar3;
    do {
      if ((&cStack_119)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = alStack_180;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar4);
  _objc_release(plVar21);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_160);
  _objc_release(pcVar4);
  _objc_release(plVar21);
  _objc_release(pcVar1);
  __Unwind_Resume();
  plVar16 = alStack_240;
  pcStack_188 = FUN_104cb6fc4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar15;
  plVar21 = plVar22;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar15);
  iVar14 = (int)pcVar1;
  _objc_retain(plVar22);
  _objc_retain(plVar17);
  if (pcVar3 != (char *)0x0) {
    plVar21 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar15;
      _objc_retainAutorelease(pcVar15);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_220,pcVar1);
    _objc_retain(plVar22);
    if (plVar22 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar22);
      pcVar1 = (char *)plVar22;
      func_0x00010bdc3520(plVar22);
    }
    _objc_release(plVar22);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(plVar17);
    if (plVar17 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar17);
      pcVar1 = (char *)plVar17;
      func_0x00010bdc3520();
    }
    _objc_release(plVar17);
    func_0x00010002b838(auStack_1f0,pcVar1);
    alStack_240[0] = 0;
    alStack_240[1] = 0;
    alStack_240[2] = 0;
    func_0x00010007e1e8(alStack_240,auStack_220,&lStack_1d8,3);
    puVar8 = &UNK_110847838;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_110847838,alStack_240,pcVar18);
    puStack_228 = (undefined1 *)alStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar20 = 0;
    plVar21 = plVar16;
    do {
      if ((&cStack_1d9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar20));
      }
      iVar14 = (int)puVar8;
      lVar20 = lVar20 + -0x18;
      unaff_x24 = alStack_240;
    } while (lVar20 != -0x48);
  }
  _objc_release(plVar17);
  _objc_release(plVar22);
  pcVar1 = pcVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(plVar17);
    do {
      unaff_x24 = (long *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (long *)auStack_220);
    _objc_release(plVar17);
    _objc_release(plVar22);
    _objc_release(pcVar15);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    plVar16 = alStack_2b0;
    pcStack_248 = FUN_104cb7284;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar5 = (char **)0x0;
    pcStack_270 = pcVar1;
    pcStack_268 = (char *)plVar17;
    plStack_260 = plVar22;
    pcStack_258 = pcVar15;
    pppuStack_250 = &ppuStack_190;
    if (pcVar4 != (char *)0x0) {
      plVar22 = *(long **)(pcVar4 + 8);
      pcVar4 = "true";
      if (iVar14 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(appcStack_290,pcVar4);
      alStack_2b0[0] = 0;
      alStack_2b0[1] = 0;
      alStack_2b0[2] = 0;
      func_0x00010007e1e8(alStack_2b0,appcStack_290,&lStack_278,1);
      iVar14 = 0x10847948;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_110847948,alStack_2b0,plVar21);
      ppcVar5 = &pcStack_298;
      pcStack_298 = (char *)alStack_2b0;
      func_0x00010007e5dc();
      plVar21 = plVar16;
      plVar17 = alStack_2b0;
      if (cStack_279 < '\0') {
        ppcVar5 = appcStack_290[0];
        __ZdlPv();
        plVar21 = plVar16;
        plVar17 = alStack_2b0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
      return;
    }
    ___stack_chk_fail();
    pcStack_298 = (char *)plVar17;
    func_0x00010007e5dc(&pcStack_298);
    if (cStack_279 < '\0') {
      __ZdlPv(appcStack_290[0]);
    }
    ppcVar6 = ppcVar5;
    __Unwind_Resume();
    pcStack_2b8 = FUN_104cb739c;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar7 = (char **)0x0;
    pcStack_2e0 = pcVar1;
    pcStack_2d8 = (char *)plVar17;
    plStack_2d0 = plVar22;
    ppcStack_2c8 = ppcVar5;
    pppuStack_2c0 = &pppuStack_250;
    if (ppcVar6 != (char **)0x0) {
      plVar22 = (long *)ppcVar6[1];
      pcVar1 = "true";
      if (iVar14 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(appcStack_300,pcVar1);
      acStack_320[0] = '\0';
      acStack_320[1] = '\0';
      acStack_320[2] = '\0';
      acStack_320[3] = '\0';
      acStack_320[4] = '\0';
      acStack_320[5] = '\0';
      acStack_320[6] = '\0';
      acStack_320[7] = '\0';
      acStack_320[8] = '\0';
      acStack_320[9] = '\0';
      acStack_320[10] = '\0';
      acStack_320[0xb] = '\0';
      acStack_320[0xc] = '\0';
      acStack_320[0xd] = '\0';
      acStack_320[0xe] = '\0';
      acStack_320[0xf] = '\0';
      acStack_320[0x10] = '\0';
      acStack_320[0x11] = '\0';
      acStack_320[0x12] = '\0';
      acStack_320[0x13] = '\0';
      acStack_320[0x14] = '\0';
      acStack_320[0x15] = '\0';
      acStack_320[0x16] = '\0';
      acStack_320[0x17] = '\0';
      func_0x00010007e1e8(acStack_320,appcStack_300,&lStack_2e8,1);
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_110847998,acStack_320,plVar21);
      ppcVar7 = &pcStack_308;
      pcStack_308 = acStack_320;
      func_0x00010007e5dc();
      plVar17 = (long *)acStack_320;
      if (cStack_2e9 < '\0') {
        ppcVar7 = appcStack_300[0];
        __ZdlPv();
        plVar17 = (long *)acStack_320;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      pcStack_308 = (char *)plVar17;
      func_0x00010007e5dc(&pcStack_308);
      if (cStack_2e9 < '\0') {
        __ZdlPv(appcStack_300[0]);
      }
      __Unwind_Resume();
      puVar8 = PTR_PTR_1126aef10;
      _objc_alloc();
      lVar20 = (long)ppcVar7 + (long)_DAT_112710440;
      _objc_loadWeakRetained(lVar20);
      lVar9 = lVar20;
      func_0x00010bef2620();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)ppcVar7 + (long)_DAT_112710444;
      _objc_loadWeakRetained(lVar10);
      lVar11 = lVar10;
      func_0x00010c0dc640();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)ppcVar7 + (long)_DAT_11271044c;
      _objc_loadWeakRetained(lVar12);
      lVar13 = (long)ppcVar7 + (long)_DAT_112710450;
      _objc_loadWeakRetained(lVar13);
      func_0x00010bff1420();
      uVar19 = *(undefined8 *)((long)ppcVar7 + (long)_DAT_112710454);
      *(undefined **)((long)ppcVar7 + (long)_DAT_112710454) = puVar8;
      _objc_release(uVar19);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar20);
      lVar20 = (long)ppcVar7 + (long)_DAT_112710458;
      _objc_loadWeakRetained(lVar20);
      lVar10 = lVar20;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar20);
      return;
    }
    return;
  }
  return;
}



/* Entry: 104cb6d04; end: 104cb6fc3;  */

/* WARNING: Removing unreachable block (ram,0x000104cb6f8c) */
/* WARNING: Removing unreachable block (ram,0x000104cb724c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6d04(long param_1,char *param_2,long *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x24;
  char acStack_260 [24];
  char *pcStack_248;
  char **appcStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  char *pcStack_218;
  long *plStack_210;
  char **ppcStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  long alStack_1f0 [3];
  char *pcStack_1d8;
  char **appcStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  long *plStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long alStack_180 [3];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  plVar20 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  plVar19 = param_3;
  plVar16 = (long *)param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    alStack_c0[2] = 0;
    func_0x00010007e1e8(alStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_a8 = (undefined1 *)alStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar18 = 0;
    plVar19 = plVar20;
    plVar16 = (long *)param_5;
    do {
      if ((&cStack_59)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      unaff_x24 = alStack_c0;
    } while (lVar18 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (long *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (long *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  plVar15 = alStack_180;
  pcStack_c8 = FUN_104cb6fc4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar14 = pcVar1;
  plVar20 = plVar19;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  iVar13 = (int)pcVar14;
  _objc_retain(plVar19);
  _objc_retain(plVar16);
  if (pcVar2 != (char *)0x0) {
    plVar20 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(plVar19);
    if (plVar19 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar19);
      pcVar2 = (char *)plVar19;
      func_0x00010bdc3520(plVar19);
    }
    _objc_release(plVar19);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar16);
      pcVar2 = (char *)plVar16;
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    func_0x00010002b838(auStack_130,pcVar2);
    alStack_180[0] = 0;
    alStack_180[1] = 0;
    alStack_180[2] = 0;
    func_0x00010007e1e8(alStack_180,auStack_160,&lStack_118,3);
    puVar7 = &UNK_110847838;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_110847838,alStack_180,pcVar3);
    puStack_168 = (undefined1 *)alStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar18 = 0;
    plVar20 = plVar15;
    do {
      if ((&cStack_119)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar18));
      }
      iVar13 = (int)puVar7;
      lVar18 = lVar18 + -0x18;
      unaff_x24 = alStack_180;
    } while (lVar18 != -0x48);
  }
  _objc_release(plVar16);
  _objc_release(plVar19);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(plVar16);
    do {
      unaff_x24 = (long *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (long *)auStack_160);
    _objc_release(plVar16);
    _objc_release(plVar19);
    _objc_release(pcVar1);
    pcVar2 = pcVar3;
    __Unwind_Resume();
    plVar15 = alStack_1f0;
    pcStack_188 = FUN_104cb7284;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar4 = (char **)0x0;
    pcStack_1b0 = pcVar3;
    pcStack_1a8 = (char *)plVar16;
    plStack_1a0 = plVar19;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    if (pcVar2 != (char *)0x0) {
      plVar19 = *(long **)(pcVar2 + 8);
      pcVar1 = "true";
      if (iVar13 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(appcStack_1d0,pcVar1);
      alStack_1f0[0] = 0;
      alStack_1f0[1] = 0;
      alStack_1f0[2] = 0;
      func_0x00010007e1e8(alStack_1f0,appcStack_1d0,&lStack_1b8,1);
      iVar13 = 0x10847948;
      (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110847948,alStack_1f0,plVar20);
      ppcVar4 = &pcStack_1d8;
      pcStack_1d8 = (char *)alStack_1f0;
      func_0x00010007e5dc();
      plVar20 = plVar15;
      plVar16 = alStack_1f0;
      if (cStack_1b9 < '\0') {
        ppcVar4 = appcStack_1d0[0];
        __ZdlPv();
        plVar20 = plVar15;
        plVar16 = alStack_1f0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_1d8 = (char *)plVar16;
    func_0x00010007e5dc(&pcStack_1d8);
    if (cStack_1b9 < '\0') {
      __ZdlPv(appcStack_1d0[0]);
    }
    ppcVar5 = ppcVar4;
    __Unwind_Resume();
    pcStack_1f8 = FUN_104cb739c;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar6 = (char **)0x0;
    pcStack_220 = pcVar3;
    pcStack_218 = (char *)plVar16;
    plStack_210 = plVar19;
    ppcStack_208 = ppcVar4;
    pppuStack_200 = &ppuStack_190;
    if (ppcVar5 != (char **)0x0) {
      plVar19 = (long *)ppcVar5[1];
      pcVar1 = "true";
      if (iVar13 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(appcStack_240,pcVar1);
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
      func_0x00010007e1e8(acStack_260,appcStack_240,&lStack_228,1);
      (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110847998,acStack_260,plVar20);
      ppcVar6 = &pcStack_248;
      pcStack_248 = acStack_260;
      func_0x00010007e5dc();
      plVar16 = (long *)acStack_260;
      if (cStack_229 < '\0') {
        ppcVar6 = appcStack_240[0];
        __ZdlPv();
        plVar16 = (long *)acStack_260;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      pcStack_248 = (char *)plVar16;
      func_0x00010007e5dc(&pcStack_248);
      if (cStack_229 < '\0') {
        __ZdlPv(appcStack_240[0]);
      }
      __Unwind_Resume();
      puVar7 = PTR_PTR_1126aef10;
      _objc_alloc();
      lVar18 = (long)ppcVar6 + (long)_DAT_112710440;
      _objc_loadWeakRetained(lVar18);
      lVar8 = lVar18;
      func_0x00010bef2620();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)ppcVar6 + (long)_DAT_112710444;
      _objc_loadWeakRetained(lVar9);
      lVar10 = lVar9;
      func_0x00010c0dc640();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)ppcVar6 + (long)_DAT_11271044c;
      _objc_loadWeakRetained(lVar11);
      lVar12 = (long)ppcVar6 + (long)_DAT_112710450;
      _objc_loadWeakRetained(lVar12);
      func_0x00010bff1420();
      uVar17 = *(undefined8 *)((long)ppcVar6 + (long)_DAT_112710454);
      *(undefined **)((long)ppcVar6 + (long)_DAT_112710454) = puVar7;
      _objc_release(uVar17);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar18);
      lVar18 = (long)ppcVar6 + (long)_DAT_112710458;
      _objc_loadWeakRetained(lVar18);
      lVar9 = lVar18;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar18);
      return;
    }
    return;
  }
  return;
}



/* Entry: 104cb6fc4; end: 104cb7283;  */

/* WARNING: Removing unreachable block (ram,0x000104cb724c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb6fc4(long param_1,char *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char **ppcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *unaff_x24;
  char acStack_1a0 [24];
  char *pcStack_188;
  char **appcStack_180 [2];
  char cStack_169;
  long lStack_168;
  char *pcStack_160;
  char *pcStack_158;
  long *plStack_150;
  char **ppcStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long alStack_130 [3];
  char *pcStack_118;
  char **appcStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  long *plStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  plVar14 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  plVar16 = param_3;
  _objc_retain(param_2);
  iVar12 = (int)pcVar1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    alStack_c0[2] = 0;
    func_0x00010007e1e8(alStack_c0,auStack_a0,&lStack_58,3);
    puVar6 = &UNK_110847838;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110847838,alStack_c0,param_5);
    puStack_a8 = (undefined1 *)alStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar15 = 0;
    plVar16 = plVar14;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      iVar12 = (int)puVar6;
      lVar15 = lVar15 + -0x18;
      unaff_x24 = alStack_c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (long *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (long *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    plVar14 = alStack_130;
    pcStack_c8 = FUN_104cb7284;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar3 = (char **)0x0;
    pcStack_f0 = pcVar1;
    pcStack_e8 = (char *)param_4;
    plStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    if (pcVar2 != (char *)0x0) {
      param_3 = *(long **)(pcVar2 + 8);
      pcVar2 = "true";
      if (iVar12 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(appcStack_110,pcVar2);
      alStack_130[0] = 0;
      alStack_130[1] = 0;
      alStack_130[2] = 0;
      func_0x00010007e1e8(alStack_130,appcStack_110,&lStack_f8,1);
      iVar12 = 0x10847948;
      (**(code **)(*param_3 + 0x18))(param_3,&UNK_110847948,alStack_130,plVar16);
      ppcVar3 = &pcStack_118;
      pcStack_118 = (char *)alStack_130;
      func_0x00010007e5dc();
      plVar16 = plVar14;
      param_4 = alStack_130;
      if (cStack_f9 < '\0') {
        ppcVar3 = appcStack_110[0];
        __ZdlPv();
        plVar16 = plVar14;
        param_4 = alStack_130;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      pcStack_118 = (char *)param_4;
      func_0x00010007e5dc(&pcStack_118);
      if (cStack_f9 < '\0') {
        __ZdlPv(appcStack_110[0]);
      }
      ppcVar4 = ppcVar3;
      __Unwind_Resume();
      pcStack_138 = FUN_104cb739c;
      lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = (char **)0x0;
      pcStack_160 = pcVar1;
      pcStack_158 = (char *)param_4;
      plStack_150 = param_3;
      ppcStack_148 = ppcVar3;
      ppuStack_140 = &puStack_d0;
      if (ppcVar4 != (char **)0x0) {
        plVar14 = (long *)ppcVar4[1];
        pcVar1 = "true";
        if (iVar12 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(appcStack_180,pcVar1);
        acStack_1a0[0] = '\0';
        acStack_1a0[1] = '\0';
        acStack_1a0[2] = '\0';
        acStack_1a0[3] = '\0';
        acStack_1a0[4] = '\0';
        acStack_1a0[5] = '\0';
        acStack_1a0[6] = '\0';
        acStack_1a0[7] = '\0';
        acStack_1a0[8] = '\0';
        acStack_1a0[9] = '\0';
        acStack_1a0[10] = '\0';
        acStack_1a0[0xb] = '\0';
        acStack_1a0[0xc] = '\0';
        acStack_1a0[0xd] = '\0';
        acStack_1a0[0xe] = '\0';
        acStack_1a0[0xf] = '\0';
        acStack_1a0[0x10] = '\0';
        acStack_1a0[0x11] = '\0';
        acStack_1a0[0x12] = '\0';
        acStack_1a0[0x13] = '\0';
        acStack_1a0[0x14] = '\0';
        acStack_1a0[0x15] = '\0';
        acStack_1a0[0x16] = '\0';
        acStack_1a0[0x17] = '\0';
        func_0x00010007e1e8(acStack_1a0,appcStack_180,&lStack_168,1);
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847998,acStack_1a0,plVar16);
        ppcVar5 = &pcStack_188;
        pcStack_188 = acStack_1a0;
        func_0x00010007e5dc();
        param_4 = (long *)acStack_1a0;
        if (cStack_169 < '\0') {
          ppcVar5 = appcStack_180[0];
          __ZdlPv();
          param_4 = (long *)acStack_1a0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
        ___stack_chk_fail();
        pcStack_188 = (char *)param_4;
        func_0x00010007e5dc(&pcStack_188);
        if (cStack_169 < '\0') {
          __ZdlPv(appcStack_180[0]);
        }
        __Unwind_Resume();
        puVar6 = PTR_PTR_1126aef10;
        _objc_alloc();
        lVar15 = (long)ppcVar5 + (long)_DAT_112710440;
        _objc_loadWeakRetained(lVar15);
        lVar7 = lVar15;
        func_0x00010bef2620();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = (long)ppcVar5 + (long)_DAT_112710444;
        _objc_loadWeakRetained(lVar8);
        lVar9 = lVar8;
        func_0x00010c0dc640();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)ppcVar5 + (long)_DAT_11271044c;
        _objc_loadWeakRetained(lVar10);
        lVar11 = (long)ppcVar5 + (long)_DAT_112710450;
        _objc_loadWeakRetained(lVar11);
        func_0x00010bff1420();
        uVar13 = *(undefined8 *)((long)ppcVar5 + (long)_DAT_112710454);
        *(undefined **)((long)ppcVar5 + (long)_DAT_112710454) = puVar6;
        _objc_release(uVar13);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar15);
        lVar15 = (long)ppcVar5 + (long)_DAT_112710458;
        _objc_loadWeakRetained(lVar15);
        lVar8 = lVar15;
        func_0x00010c1018e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125b60();
        _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar15);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 104cb7284; end: 104cb739b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb7284(long param_1,int param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar11 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x10847948;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110847948,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar11;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar11;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar13 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110847998,&uStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126aef10;
  _objc_alloc();
  lVar5 = (long)ppuVar3 + (long)_DAT_112710440;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bef2620();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)ppuVar3 + (long)_DAT_112710444;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)ppuVar3 + (long)_DAT_11271044c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = (long)ppuVar3 + (long)_DAT_112710450;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bff1420();
  uVar12 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112710454);
  *(undefined **)((long)ppuVar3 + (long)_DAT_112710454) = puVar4;
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = (long)ppuVar3 + (long)_DAT_112710458;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104cb739c; end: 104cb74b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb739c(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110847998,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126aef10;
  _objc_alloc();
  lVar4 = (long)ppuVar2 + (long)_DAT_112710440;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bef2620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)ppuVar2 + (long)_DAT_112710444;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)ppuVar2 + (long)_DAT_11271044c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = (long)ppuVar2 + (long)_DAT_112710450;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bff1420();
  uVar10 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112710454);
  *(undefined **)((long)ppuVar2 + (long)_DAT_112710454) = puVar3;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = (long)ppuVar2 + (long)_DAT_112710458;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104cb74b4; end: 104cb75ff; -[SCAdPreviewSnapcodeViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb74b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126aef10;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112710440;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bef2620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112710444;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112710448);
  lVar6 = param_1 + _DAT_11271044c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112710450;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bff1420(puVar1,param_2,lVar3,lVar5,uVar8,lVar6,lVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112710454);
  *(undefined **)(param_1 + _DAT_112710454) = puVar1;
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112710458;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb7600; end: 104cb766f; -[SCAdPreviewSnapcodeViewModelProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb7600(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  plVar2 = alStack_40;
  lVar3 = (long)_DAT_112710454;
  if (*(long *)(param_1 + lVar3) == 0) {
    plVar2 = alStack_30;
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126e3a90;
  _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb7670; end: 104cb76f7; -[SCAdPreviewSnapcodeViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb7670(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710448,0);
  _objc_destroyWeak(param_1 + _DAT_11271044c);
  _objc_destroyWeak(param_1 + _DAT_112710450);
  _objc_destroyWeak(param_1 + _DAT_112710440);
  _objc_destroyWeak(param_1 + _DAT_112710444);
  _objc_destroyWeak(param_1 + _DAT_112710458);
  _objc_destroyWeak(param_1 + _DAT_11271045c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710454,0);
  return;
}



/* Entry: 104cb76f8; end: 104cb7827; -[SCAdsPreviewSnapcodeViewModelProvider initWithAdCreativeFetcher:notificationPool:adOperaSessionScopeExposer:adOperaSessionScopeServices:audioSessionServices:] */

undefined1 *
FUN_104cb76f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e3a98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aef18;
    _objc_alloc();
    func_0x00010bff1440();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cb7828; end: 104cb786b; -[SCAdsPreviewSnapcodeViewModelProvider end] */

void FUN_104cb7828(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104cb786c; end: 104cb7893; -[SCAdsPreviewSnapcodeViewModelProvider scanResultViewModels] */

void FUN_104cb786c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104cb7894; end: 104cb7a1f; -[SCAdsPreviewSnapcodeViewModelProvider configureWithContext:] */

void FUN_104cb7894(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
    _objc_release(uVar5);
    lVar1 = param_3;
    func_0x00010beeee20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104cb7a20; end: 104cb7a67;  */

void FUN_104cb7a20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb7a68; end: 104cb7f6f; -[SCAdsPreviewSnapcodeViewModelProvider _handleSnapcodeMetadata:] */

void FUN_104cb7a68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *unaff_x20;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 != 9) goto LAB_104cb7ef0;
  puVar2 = PTR_PTR_1126aef20;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = (undefined *)0x0;
  func_0x00010c008360();
  unaff_x20 = puStack_b8;
  _objc_retain(puStack_b8);
  _objc_release(lVar1);
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dae2d8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae2f8;
  puVar3 = puVar2;
  lStack_88 = param_3;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dae318;
  puVar4 = unaff_x20;
  puStack_80 = puVar3;
  if (unaff_x20 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar5;
  if (unaff_x20 == (undefined *)0x0) {
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae558;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdd30;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110dae358;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = puVar3;
      _objc_initWeak(auStack_c0,param_1);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_104cb7f70;
      puStack_d8 = &UNK_110841fb0;
      _objc_copyWeak(auStack_c8,auStack_c0);
      _objc_retain(puVar2);
      ppuVar6 = &puStack_f0;
      puStack_d0 = puVar2;
      _objc_retainBlock();
      puVar3 = PTR_PTR_1126aef30;
      ppuStack_100 = ppuVar6;
      func_0x00010c25d9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126aef38;
      puStack_110 = puVar3;
      _objc_alloc();
      puVar3 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      puVar7 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      puVar8 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      ppuStack_130 = ppuStack_100;
      func_0x00010c0048e0();
      puStack_118 = puVar5;
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar3);
      puVar5 = PTR_PTR_1126aef40;
      _objc_alloc();
      func_0x00010c020120();
      puVar3 = PTR_PTR_1126aef48;
      puVar7 = PTR_PTR_1126aef50;
      puStack_120 = puVar5;
      _objc_alloc(PTR_PTR_1126aef50);
      lVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a5c0(puVar7);
      func_0x00010c2453a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar1);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126aef58;
      _objc_alloc(PTR_PTR_1126aef58);
      puVar7 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b920(puVar5);
      _objc_release(puVar7);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(puVar3);
      _objc_release(puStack_120);
      _objc_release(puStack_118);
      _objc_release(puStack_110);
      _objc_release(ppuStack_100);
      _objc_release(puStack_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puStack_108);
      puVar3 = puVar4;
    }
LAB_104cb7ed0:
    _objc_release(puVar3);
  }
  else if (puVar2 == (undefined *)0x0) goto LAB_104cb7ed0;
  _objc_release(puStack_f8);
  _objc_release(puVar2);
  _objc_release(unaff_x20);
LAB_104cb7ef0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    lVar1 = param_3;
    __Unwind_Resume();
    pcStack_138 = FUN_104cb7f70;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_104cb8014;
    puStack_168 = &UNK_110841fb0;
    puStack_150 = unaff_x20;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_copyWeak(auStack_158,lVar1 + 0x28);
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    _objc_retain(uVar11);
    uStack_160 = uVar11;
    func_0x0001000d76cc("APPSTORE",&puStack_180);
    _objc_release(uStack_160);
    _objc_destroyWeak(auStack_158);
    return;
  }
  return;
}



/* Entry: 104cb7f70; end: 104cb8013;  */

void FUN_104cb7f70(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104cb8014;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cb8014; end: 104cb8047;  */

void FUN_104cb8014(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb8048; end: 104cb80eb; -[SCAdsPreviewSnapcodeViewModelProvider _displayAdWithdCreativePreview:] */

void FUN_104cb8048(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c27dd80();
  iVar1 = (int)uVar3;
  if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (iVar1 == 2) {
      uVar3 = 2;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bf96e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf85320(uVar4,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cb80ec; end: 104cb80f7; -[SCAdsPreviewSnapcodeViewModelProvider adPreviewFailed] */

void FUN_104cb80ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_dismissParentScopes__1125be9b0,9);
  return;
}



/* Entry: 104cb80f8; end: 104cb8103; -[SCAdsPreviewSnapcodeViewModelProvider adPreviewPresenterDidTearDown] */

void FUN_104cb80f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_dismissParentScopes__1125be9b0,9);
  return;
}



/* Entry: 104cb8104; end: 104cb8163; -[SCAdsPreviewSnapcodeViewModelProvider .cxx_destruct] */

void FUN_104cb8104(long param_1)

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



/* Entry: 104cb8164; end: 104cb826f; -[SCLensCarouselStoreProductPrefetcher initWithCarouselLenses:skStoreProductPrefetcher:performer:] */

undefined1 *
FUN_104cb8164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e3aa0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


