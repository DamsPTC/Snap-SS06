/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104983f9c; end: 104983fa3; -[FBSDKSKAdNetworkRule conversionValue] */

undefined8 FUN_104983f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104983fa4; end: 104983fab; -[FBSDKSKAdNetworkRule setConversionValue:] */

void FUN_104983fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104983fac; end: 104983fb3; -[FBSDKSKAdNetworkRule events] */

undefined8 FUN_104983fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104983fb4; end: 104983fbb; -[FBSDKSKAdNetworkRule setEvents:] */

void FUN_104983fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104983fbc; end: 104983fc7; -[FBSDKSKAdNetworkRule .cxx_destruct] */

void FUN_104983fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104983fc8; end: 10498414f; +[FBSDKSKAdnetworkUtils parseEvents:] */

undefined * FUN_104983fc8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_3 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    puVar3 = param_3;
    _objc_retain();
    puVar6 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar4 = PTR_PTR_1126adf90;
        _objc_alloc();
        func_0x00010c020680();
        if (puVar4 == (undefined *)0x0) {
          _objc_release(puVar3);
          puVar6 = (undefined *)0x0;
          goto LAB_1049840f8;
        }
        func_0x00010bf09f20(PTR_PTR_1126add78);
        _objc_release(puVar4);
        puVar7 = puVar7 + 1;
      } while (puVar6 != puVar7);
      puVar6 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
LAB_1049840f8:
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar2 = param_3;
  func_0x00010c075f00();
  puVar6 = param_3;
  if ((int)puVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retainAutoreleaseReturnValue(puVar6);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104984150; end: 104984197;  */

undefined8 FUN_104984150(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c075f00();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retainAutoreleaseReturnValue(uVar1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104984198; end: 1049845df; -[FBSDKServerConfiguration initWithAppID:appName:loginTooltipEnabled:loginTooltipText:defaultShareMode:advertisingIDEnabled:implicitLoggingEnabled:implicitPurchaseLoggingEnabled:codelessEventsEnabled:uninstallTrackingEnabled:dialogConfigurations:dialogFlows:timestamp:errorConfiguration:sessionTimeoutInterval:defaults:loggingToken:smartLoginOptions:smartLoginBookmarkIconURL:smartLoginMenuIconURL:updateMessage:eventBindings:restrictiveParams:AAMRules:suggestedEventsSetting:protectedModeRules:migratedAutoLogValues:] */

undefined8 *
FUN_104984198(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_8;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_18;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar3 = param_23;
  _objc_retain(param_23);
  uVar4 = param_24;
  _objc_retain();
  uVar5 = param_25;
  _objc_retain(param_25);
  uVar6 = param_26;
  _objc_retain();
  uVar7 = param_27;
  _objc_retain();
  _objc_retain();
  puStack_80 = PTR_PTR_1126e3450;
  puVar8 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    uVar9 = param_4;
    func_0x00010bf51e00();
    uVar10 = puVar8[2];
    puVar8[2] = uVar9;
    _objc_release(uVar10);
    uVar9 = param_5;
    func_0x00010bf51e00();
    uVar10 = puVar8[3];
    puVar8[3] = uVar9;
    _objc_release(uVar10);
    *(undefined1 *)((long)puVar8 + 0xd) = param_6;
    uVar9 = param_7;
    func_0x00010bf51e00();
    uVar10 = puVar8[6];
    puVar8[6] = uVar9;
    _objc_release(uVar10);
    _objc_storeStrong(puVar8 + 4,param_8);
    *(undefined1 *)(puVar8 + 1) = param_9;
    *(undefined1 *)((long)puVar8 + 10) = (undefined1)param_10;
    *(undefined1 *)((long)puVar8 + 0xb) = param_10._1_1_;
    *(undefined1 *)((long)puVar8 + 0xc) = param_10._2_1_;
    *(undefined1 *)((long)puVar8 + 0xe) = param_10._3_1_;
    uVar9 = param_12;
    func_0x00010bf51e00();
    uVar10 = puVar8[0x15];
    puVar8[0x15] = uVar9;
    _objc_release(uVar10);
    uVar9 = param_13;
    func_0x00010bf51e00();
    uVar10 = puVar8[0x16];
    puVar8[0x16] = uVar9;
    _objc_release(uVar10);
    uVar9 = param_14;
    func_0x00010bf51e00();
    uVar10 = puVar8[7];
    puVar8[7] = uVar9;
    _objc_release(uVar10);
    uVar9 = param_15;
    func_0x00010bf51e00();
    uVar10 = puVar8[5];
    puVar8[5] = uVar9;
    _objc_release(uVar10);
    if (param_1 == 0.0) {
      param_1 = 60.0;
    }
    puVar8[8] = param_1;
    *(undefined1 *)((long)puVar8 + 9) = param_16;
    _objc_storeStrong(puVar8 + 9,param_18);
    puVar8[10] = param_19;
    uVar9 = param_21;
    func_0x00010bf51e00();
    uVar10 = puVar8[0xc];
    puVar8[0xc] = uVar9;
    _objc_release(uVar10);
    uVar9 = param_20;
    func_0x00010bf51e00();
    uVar10 = puVar8[0xb];
    puVar8[0xb] = uVar9;
    _objc_release(uVar10);
    uVar9 = param_22;
    func_0x00010bf51e00();
    uVar10 = puVar8[0xd];
    puVar8[0xd] = uVar9;
    _objc_release(uVar10);
    _objc_storeStrong(puVar8 + 0xe,param_23);
    _objc_storeStrong(puVar8 + 0xf,param_24);
    _objc_storeStrong(puVar8 + 0x10,param_25);
    _objc_storeStrong(puVar8 + 0x11,param_26);
    puVar8[0x14] = 3;
    _objc_storeStrong(puVar8 + 0x12,param_27);
    uVar9 = param_28;
    func_0x00010bf51e00();
    uVar10 = puVar8[0x13];
    puVar8[0x13] = uVar9;
    _objc_release(uVar10);
  }
  _objc_release(param_28);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(uVar2);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar8;
}



/* Entry: 1049845e0; end: 10498482b; +[FBSDKServerConfiguration defaultServerConfigurationForAppID:] */

undefined * FUN_1049845e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar6 = puRam000000011369d4f8;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c0720c0();
  _objc_release(puVar6);
  if (((ulong)puVar1 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126adf98;
    _objc_alloc();
    func_0x00010bff3360(0x404e000000000000);
    puVar6 = puRam000000011369d4f8;
    puRam000000011369d4f8 = puVar1;
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar6 = puRam000000011369d4f8;
  _objc_retainAutoreleaseReturnValue(puRam000000011369d4f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined **)(param_3 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_objectForKeyedSubscript__112615a50);
  return puVar6;
}



/* Entry: 10498482c; end: 104984833; -[FBSDKServerConfiguration dialogConfigurationForDialogName:] */

void FUN_10498482c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 104984834; end: 104984843; -[FBSDKServerConfiguration useNativeDialogForDialogName:] */

void FUN_104984834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__useFeatureWithKey_dialogName__112597340,
             &PTR____CFConstantStringClassReference_110da5ab8,param_3);
  return;
}



/* Entry: 104984844; end: 104984853; -[FBSDKServerConfiguration useSafariViewControllerForDialogName:] */

void FUN_104984844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__useFeatureWithKey_dialogName__112597340,
             &PTR____CFConstantStringClassReference_110da5ad8,param_3);
  return;
}



/* Entry: 104984854; end: 1049849f3; -[FBSDKServerConfiguration _useFeatureWithKey:dialogName:] */

long FUN_104984854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = param_4;
  func_0x00010c0720c0();
  lVar2 = *(long *)(param_1 + 0xb0);
  func_0x00010c0e00e0(lVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    if (lVar3 != 0) goto LAB_104984914;
    lVar4 = *(long *)(param_1 + 0xb0);
    func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110eb2a78);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) goto LAB_10498495c;
    lVar6 = *(long *)(param_1 + 0xb0);
    func_0x00010c0e00e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110dc3a38);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf1f3c0();
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    if (lVar3 != 0) {
LAB_104984914:
      lVar8 = lVar3;
      func_0x00010bf1f3c0(lVar3);
      goto LAB_104984974;
    }
    lVar4 = *(long *)(param_1 + 0xb0);
    func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110dc3a38);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
LAB_10498495c:
    lVar8 = lVar5;
    func_0x00010bf1f3c0();
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
LAB_104984974:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return lVar8;
}



/* Entry: 1049849f4; end: 1049849fb; +[FBSDKServerConfiguration supportsSecureCoding] */

undefined8 FUN_1049849f4(void)

{
  return 1;
}



/* Entry: 1049849fc; end: 10498510f; -[FBSDKServerConfiguration initWithCoder:] */

long FUN_1049849fc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined *puVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined4 uVar31;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010bf39c40(puVar1);
  uVar2 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110e6f678);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5af8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf66ce0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5b18);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5b38);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5b58);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf66ce0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5b78);
  uVar8 = param_4;
  func_0x00010bf66ce0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5b98);
  uVar9 = param_4;
  func_0x00010bf66ce0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5bb8);
  uVar10 = param_4;
  func_0x00010bf66ce0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5bd8);
  uVar11 = param_4;
  func_0x00010bf66ce0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5bf8);
  func_0x00010bf66f40(param_4,param_3,&PTR____CFConstantStringClassReference_110da5c18);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar12 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010bf39c40();
  func_0x00010c0309a0(puVar13,param_3,puVar1);
  uVar14 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar13,&PTR____CFConstantStringClassReference_110da5c38);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010c0309a0(puVar15,param_3,puVar1);
  uVar16 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar15,&PTR____CFConstantStringClassReference_110da5c58);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ade90;
  func_0x00010bf39c40(PTR_PTR_1126ade90);
  uVar17 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5c78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66da0(param_4,param_3,&PTR____CFConstantStringClassReference_110da5c98);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar18 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5cb8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar19 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar20 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5cf8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar21 = param_4;
  func_0x00010bf67020(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110da5d18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010c0309a0(puVar22,param_3,puVar1);
  uVar23 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar22,&PTR____CFConstantStringClassReference_110da5d38);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf39c40();
  uVar31 = (undefined4)((ulong)puVar24 >> 0x20);
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010c226900(puVar25,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126add78;
  uVar29 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar25,&PTR____CFConstantStringClassReference_110da5d58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar1,param_3,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  puVar24 = PTR_PTR_1126add78;
  uVar29 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar25,&PTR____CFConstantStringClassReference_110da5d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar24,param_3,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  puVar26 = PTR_PTR_1126add78;
  uVar29 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar25,&PTR____CFConstantStringClassReference_110da5d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar26,param_3,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  uVar27 = param_4;
  func_0x00010bf66f40(param_4,param_3,&PTR____CFConstantStringClassReference_110dd8fd8);
  puVar28 = PTR_PTR_1126add78;
  uVar29 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar25,&PTR____CFConstantStringClassReference_110da5db8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar28,param_3,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  puVar30 = PTR_PTR_1126add78;
  uVar29 = param_4;
  func_0x00010bf67040(param_4,param_3,puVar25,&PTR____CFConstantStringClassReference_110da5dd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf71fc0(puVar30,param_3,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  func_0x00010bff3360(param_1,param_2,param_3,uVar2,uVar3,uVar4 & 0xffffffff,uVar5,uVar6,
                      uVar7 & 0xffffffff,
                      CONCAT71(CONCAT61(CONCAT51(CONCAT41(uVar31,(char)uVar11),(char)uVar10),
                                        (char)uVar9),(char)uVar8),uVar14,uVar16,uVar12,uVar17,0);
  _objc_retainAutoreleasedReturnValue();
  *(ulong *)(param_2 + 0xa0) = uVar27;
  _objc_release(puVar30);
  _objc_release(puVar28);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(puVar1);
  _objc_release(puVar25);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return param_2;
}



/* Entry: 104985110; end: 10498535f; -[FBSDKServerConfiguration encodeWithCoder:] */

void FUN_104985110(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf92da0();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6f678);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da5af8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110da5b58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110da5c38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110da5c58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110da5c78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110da5b98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110da5bb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110da5bd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110da5b18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110da5bf8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110da5b38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110dc1558);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x40),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110da5c98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110da5cb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110da5c18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110da5cd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110da5cf8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110da5d18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110da5d38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110da5d58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110da5d78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110da5d98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110dd8fd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110da5db8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110da5dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104985360; end: 104985363; -[FBSDKServerConfiguration copyWithZone:] */

void FUN_104985360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104985364; end: 10498536b; -[FBSDKServerConfiguration dialogConfigurations] */

void FUN_104985364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0xa8));
  return;
}



/* Entry: 10498536c; end: 104985373; -[FBSDKServerConfiguration dialogFlows] */

void FUN_10498536c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0xb0));
  return;
}



/* Entry: 104985374; end: 10498537b; -[FBSDKServerConfiguration isAdvertisingIDEnabled] */

undefined1 FUN_104985374(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10498537c; end: 104985383; -[FBSDKServerConfiguration appID] */

undefined8 FUN_10498537c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104985384; end: 10498538b; -[FBSDKServerConfiguration appName] */

undefined8 FUN_104985384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10498538c; end: 104985393; -[FBSDKServerConfiguration isDefaults] */

undefined1 FUN_10498538c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104985394; end: 10498539b; -[FBSDKServerConfiguration defaultShareMode] */

undefined8 FUN_104985394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10498539c; end: 1049853a3; -[FBSDKServerConfiguration errorConfiguration] */

undefined8 FUN_10498539c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049853a4; end: 1049853ab; -[FBSDKServerConfiguration isImplicitLoggingSupported] */

undefined1 FUN_1049853a4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1049853ac; end: 1049853b3; -[FBSDKServerConfiguration isImplicitPurchaseLoggingSupported] */

undefined1 FUN_1049853ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1049853b4; end: 1049853bb; -[FBSDKServerConfiguration isCodelessEventsEnabled] */

undefined1 FUN_1049853b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1049853bc; end: 1049853c3; -[FBSDKServerConfiguration isLoginTooltipEnabled] */

undefined1 FUN_1049853bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1049853c4; end: 1049853cb; -[FBSDKServerConfiguration isUninstallTrackingEnabled] */

undefined1 FUN_1049853c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1049853cc; end: 1049853d3; -[FBSDKServerConfiguration loginTooltipText] */

undefined8 FUN_1049853cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049853d4; end: 1049853db; -[FBSDKServerConfiguration timestamp] */

undefined8 FUN_1049853d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1049853dc; end: 1049853e3; -[FBSDKServerConfiguration sessionTimeoutInterval] */

undefined8 FUN_1049853dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1049853e4; end: 1049853eb; -[FBSDKServerConfiguration setSessionTimeoutInterval:] */

void FUN_1049853e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 1049853ec; end: 1049853f3; -[FBSDKServerConfiguration loggingToken] */

undefined8 FUN_1049853ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1049853f4; end: 1049853fb; -[FBSDKServerConfiguration smartLoginOptions] */

undefined8 FUN_1049853f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1049853fc; end: 104985403; -[FBSDKServerConfiguration smartLoginBookmarkIconURL] */

undefined8 FUN_1049853fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104985404; end: 10498540b; -[FBSDKServerConfiguration smartLoginMenuIconURL] */

undefined8 FUN_104985404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10498540c; end: 104985413; -[FBSDKServerConfiguration updateMessage] */

undefined8 FUN_10498540c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104985414; end: 10498541b; -[FBSDKServerConfiguration eventBindings] */

undefined8 FUN_104985414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10498541c; end: 104985423; -[FBSDKServerConfiguration restrictiveParams] */

undefined8 FUN_10498541c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104985424; end: 10498542b; -[FBSDKServerConfiguration AAMRules] */

undefined8 FUN_104985424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10498542c; end: 104985433; -[FBSDKServerConfiguration suggestedEventsSetting] */

undefined8 FUN_10498542c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 104985434; end: 10498543b; -[FBSDKServerConfiguration protectedModeRules] */

undefined8 FUN_104985434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10498543c; end: 104985443; -[FBSDKServerConfiguration migratedAutoLogValues] */

undefined8 FUN_10498543c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104985444; end: 10498544b; -[FBSDKServerConfiguration version] */

undefined8 FUN_104985444(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10498544c; end: 104985453; -[FBSDKServerConfiguration setVersion:] */

void FUN_10498544c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 104985454; end: 10498545f; -[FBSDKServerConfiguration setDialogConfigurations:] */

void FUN_104985454(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 104985460; end: 10498546b; -[FBSDKServerConfiguration setDialogFlows:] */

void FUN_104985460(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 10498546c; end: 10498555b; -[FBSDKServerConfiguration .cxx_destruct] */

void FUN_10498546c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10498555c; end: 1049855bf; -[FBSDKServerConfigurationManager init] */

undefined1 * FUN_10498555c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1049855c0; end: 10498561b; +[FBSDKServerConfigurationManager shared] */

void FUN_1049855c0(void)

{
  if (lRam000000011369d508 != -1) {
    func_0x00010bda8bd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d500);
  return;
}



/* Entry: 10498561c; end: 10498568f; -[FBSDKServerConfigurationManager configureWithGraphRequestFactory:graphRequestConnectionFactory:dialogConfigurationMapBuilder:] */

void FUN_10498561c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1a42e0(param_1,param_2,param_3);
  func_0x00010c1a42c0(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c18d440(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104985690; end: 104985773; -[FBSDKServerConfigurationManager clearCache] */

void FUN_104985690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c1fd240(param_1,param_2,0);
  func_0x00010c1fd260(param_1,param_2,0);
  func_0x00010c1fd280(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da5df8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c12d3e0(puVar1,param_2,puVar4);
  func_0x00010c266b80(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104985774; end: 10498585b; -[FBSDKServerConfigurationManager cachedServerConfiguration] */

void FUN_104985774(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0(PTR_PTR_1126ade50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c09c180(param_1,param_2,0);
  puVar1 = param_1;
  func_0x00010c15f060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126adf98;
    func_0x00010bf6a320(PTR_PTR_1126adf98,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10498585c; end: 104985da7; -[FBSDKServerConfigurationManager loadServerConfigurationWithCompletionBlock:] */

/* WARNING: Removing unreachable block (ram,0x000104985cf8) */

void FUN_10498585c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain();
  _objc_sync_enter();
  uVar14 = param_1;
  func_0x00010c15f060();
  _objc_retainAutoreleasedReturnValue();
  if (uVar14 != 0) {
    uVar3 = param_1;
    func_0x00010c15f060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar14);
    if ((uVar5 & 1) == 0) {
      func_0x00010c1fd240(param_1,param_2,0);
      func_0x00010c1fd260(param_1,param_2,0);
      func_0x00010c1fd280(param_1,param_2,0);
    }
  }
  uVar14 = param_1;
  func_0x00010c15f060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar14 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da5df8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0dff20(puVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar9 = puVar7;
    func_0x00010c075f00(puVar7,param_2,puVar8);
    if ((int)puVar9 != 0) {
      puVar8 = PTR_PTR_1126addf0;
      func_0x00010bf58b60(PTR_PTR_1126addf0,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126adf98;
      func_0x00010bf39c40(PTR_PTR_1126adf98);
      puVar10 = puVar8;
      func_0x00010bf67020(puVar8,param_2,puVar9,
                          *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)puVar11 != 0) {
        func_0x00010c1fd240(param_1,param_2,puVar10);
      }
      _objc_release(puVar10);
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
  uVar14 = param_1;
  func_0x00010c134660();
  if ((int)uVar14 != 0) {
    uVar14 = param_1;
    func_0x00010c15f060();
    _objc_retainAutoreleasedReturnValue();
    if (uVar14 != 0) {
      uVar3 = param_1;
      func_0x00010c15f060(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bea1540(param_1,param_2,uVar4);
      if ((uVar5 & 1) == 0) {
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar14);
      }
      else {
        uVar5 = param_1;
        func_0x00010c15f060();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar5;
        func_0x00010c298be0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar14);
        if (2 < (long)uVar12) {
          uVar14 = param_1;
          func_0x00010beeb7c0(param_1,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104985ca0;
        }
      }
    }
  }
  puVar1 = PTR_PTR_1126add78;
  uVar14 = param_1;
  func_0x00010bf44020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010bf09f20(puVar1,param_2,uVar14,uVar13);
  _objc_release(uVar13);
  _objc_release(uVar14);
  uVar14 = param_1;
  func_0x00010c09d360();
  if ((uVar14 & 1) == 0) {
    func_0x00010c1bef00(param_1,param_2,1);
    uVar14 = param_1;
    func_0x00010c136c60(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfcde00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf56540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c215b40(0x4010000000000000,uVar4);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104985da8;
    puStack_78 = &UNK_1107b9a18;
    puVar1 = puVar2;
    uStack_70 = param_1;
    _objc_retain();
    puStack_68 = puVar1;
    func_0x00010befafc0(uVar4,param_2,uVar14,&puStack_90);
    func_0x00010c24d960(uVar4);
    _objc_release(puStack_68);
    _objc_release(uVar4);
    _objc_release(uVar14);
  }
  uVar14 = 0;
LAB_104985ca0:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (uVar14 != 0) {
    (**(code **)(uVar14 + 0x10))(uVar14);
  }
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(param_3);
  return;
}



/* Entry: 104985da8; end: 104985e13;  */

void FUN_104985da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1ebaa0(uVar1,param_2,1);
  func_0x00010c114e80(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104985e14; end: 10498676f; -[FBSDKServerConfigurationManager processLoadRequestResponse:error:appID:] */

void FUN_104985e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

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
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uStack_98;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (param_5 == 0) {
    puVar1 = PTR_PTR_1126add78;
    func_0x00010bf71fc0(PTR_PTR_1126add78,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126add78;
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827e0(puVar3,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126add78;
    puVar4 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110dbf1b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f0e0(puVar2,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126add78;
    puVar5 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5e38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3e0(puVar4,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126add78;
    puVar6 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5e58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f0e0(puVar5,param_3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126add78;
    puVar7 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5e78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f0e0(puVar6,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3e0(puVar7,param_3,puVar8);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126add78;
    puVar9 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5eb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71fc0(puVar8,param_3,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar8 == (undefined *)0x0) {
      uStack_98 = *(undefined8 *)PTR____NSDictionary0___11034ab50;
      _objc_retain();
    }
    else {
      uStack_98 = param_2;
      func_0x00010be700c0(param_2,param_3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    puVar10 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71fc0(puVar10,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar11 = PTR_PTR_1126ade90;
    _objc_alloc();
    func_0x00010c00c560();
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5ef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c440(puVar11,param_3,puVar8);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126add78;
    puVar9 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5f18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3e0(puVar8,param_3,puVar9);
    _objc_release(puVar9);
    puVar12 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5f38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f0e0(puVar12,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126add78;
    puVar9 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5f58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fe0(puVar8,param_3,puVar9);
    _objc_release(puVar9);
    puVar13 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5f78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f100(puVar13,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar14 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5f98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f100(puVar14,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar15 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5fb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f0e0(puVar15,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar16 = PTR_PTR_1126add78;
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5fd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0a0(puVar16,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126add58;
    puVar9 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da5ff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff00(puVar8,param_3,puVar9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126add58;
    puVar17 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da6018);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff00(puVar9,param_3,puVar17,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126add58;
    puVar18 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da6038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff00(puVar17,param_3,puVar18,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126add78;
    puVar19 = puVar1;
    func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da6058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71fc0(puVar18,param_3,puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420();
    puVar19 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf4b900();
    _objc_release(puVar19);
    puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar19 = PTR_PTR_1126add78;
    if ((int)puVar21 != 0) {
      puVar21 = puVar1;
      func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da6078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3e0(puVar19,param_3,puVar21);
      func_0x00010c0df6e0(puVar22,param_3,puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20,param_3,puVar22,&PTR____CFConstantStringClassReference_110da6078);
      _objc_release(puVar22);
      _objc_release(puVar21);
    }
    puVar19 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf4b900();
    _objc_release(puVar19);
    puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar19 = PTR_PTR_1126add78;
    if ((int)puVar21 != 0) {
      puVar21 = puVar1;
      func_0x00010c0e00e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110da6098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3e0(puVar19,param_3,puVar21);
      func_0x00010c0df6e0(puVar22,param_3,puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20,param_3,puVar22,&PTR____CFConstantStringClassReference_110da6098);
      _objc_release(puVar22);
      _objc_release(puVar21);
    }
    puVar19 = PTR_PTR_1126adf98;
    _objc_alloc(PTR_PTR_1126adf98);
    puVar22 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bf51e00();
    func_0x00010bff3360(param_1,puVar19,param_3,param_6,puVar2,(ulong)puVar4 & 0xffffffff,puVar5,
                        puVar6,(uint)puVar3 & 1,(char)puVar7);
    _objc_release(puVar21);
    _objc_release(puVar22);
    func_0x00010bdfefa0(param_2,param_3,puVar19,param_6,0);
    _objc_release(puVar19);
    _objc_release(puVar20);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uStack_98);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bdfefa0(param_2,param_3,0,param_6,param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104986770; end: 104986a17; -[FBSDKServerConfigurationManager requestToLoadServerConfiguration:] */

void FUN_104986770(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1b0;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126add20;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c22c4c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010c0eb960(&uStack_120,puVar1);
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110da5e18;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dbf1b8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110da5e78;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110da5eb8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110da5ef8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110da5e98;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110da5e38;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110da5e58;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110da5f18;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110da5f38;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110da5ff8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da6018;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da6038;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110da6058;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110da6098;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110da6078;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110da5fd8;
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110fb00d8;
  puVar3 = puVar16;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dd5c18;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar3;
  puStack_f0 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfcde20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 0;
  lVar11 = param_1;
  lVar14 = param_3;
  puVar3 = puVar4;
  func_0x00010bf565a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = lVar14;
  _objc_retain();
  _objc_retain();
  lVar11 = lVar12;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  _objc_retain();
  _objc_sync_enter();
  if (lVar11 == 0) {
    _objc_storeStrong(puVar1 + 0x30,lVar14);
    uVar13 = *(undefined8 *)(puVar1 + 0x38);
    *(undefined8 *)(puVar1 + 0x38) = 0;
    _objc_release(uVar13);
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar6 = *(ulong *)(puVar1 + 0x30);
    if (uVar6 == 0) {
      puVar16 = (undefined *)0x0;
LAB_104986b48:
      *(undefined8 *)(puVar1 + 0x30) = 0;
    }
    else {
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      if ((uVar7 & 1) == 0) {
        puVar16 = *(undefined **)(puVar1 + 0x30);
        goto LAB_104986b48;
      }
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23cd40(PTR_PTR_1126add38);
    }
    _objc_release(puVar16);
    _objc_storeStrong(puVar1 + 0x38,lVar12);
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar13 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined **)(puVar1 + 0x40) = puVar16;
  _objc_release(uVar13);
  puVar16 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar16);
    _objc_release(puVar8);
  }
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  lVar12 = *(long *)(puVar1 + 0x28);
  _objc_retain();
  lVar14 = lVar12;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar15 = *plStack_2e0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_2e0 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        puVar8 = PTR_PTR_1126add78;
        puVar9 = puVar1;
        func_0x00010beeb7c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f20(puVar8);
        _objc_release(puVar9);
        lVar17 = lVar17 + 1;
      } while (lVar14 != lVar17);
      lVar14 = lVar12;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lVar12);
  func_0x00010c12adc0(*(undefined8 *)(puVar1 + 0x28));
  puVar1[8] = 0;
  _objc_release(puVar4);
  _objc_release(puVar16);
  _objc_sync_exit(puVar1);
  _objc_release(puVar1);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  _objc_retain();
  puVar10 = &uStack_330;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar14 = *plStack_320;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_320 != lVar14) {
          _objc_enumerationMutation(puVar2);
        }
        (**(code **)(*(long *)(lStack_328 + (long)puVar16 * 8) + 0x10))();
        puVar16 = puVar16 + 1;
      } while (puVar1 != puVar16);
      puVar10 = &uStack_330;
      puVar1 = puVar2;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar11);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar2);
  __Unwind_Resume(lVar5);
  puVar1 = PTR_PTR_1126add78;
  func_0x00010c0e00e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (puVar1 == (undefined *)0x0) {
    lVar11 = *(long *)PTR____NSDictionary0___11034ab50;
    _objc_retain(lVar11);
  }
  else {
    func_0x00010bf71d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010bf221a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  _objc_release(puVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 104986a18; end: 104986e17; -[FBSDKServerConfigurationManager _didProcessConfigurationFromNetwork:appID:error:] */

void FUN_104986a18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  lVar9 = param_5;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  _objc_retain();
  _objc_sync_enter();
  if (lVar9 == 0) {
    _objc_storeStrong(param_1 + 0x30,param_3);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar10);
    puVar15 = (undefined *)0x0;
    goto LAB_104986b74;
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 == 0) {
    puVar15 = (undefined *)0x0;
LAB_104986b48:
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      puVar15 = *(undefined **)(param_1 + 0x30);
      goto LAB_104986b48;
    }
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cd40(PTR_PTR_1126add38);
  }
  _objc_release(puVar15);
  _objc_storeStrong(param_1 + 0x38,param_5);
  puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
LAB_104986b74:
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar15;
  _objc_release(uVar10);
  puVar15 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar15);
    _objc_release(puVar5);
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain();
  lVar11 = lVar6;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar12 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(lVar6);
        }
        puVar5 = PTR_PTR_1126add78;
        lVar7 = param_1;
        func_0x00010beeb7c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f20(puVar5);
        _objc_release(lVar7);
        lVar14 = lVar14 + 1;
      } while (lVar11 != lVar14);
      lVar11 = lVar6;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 8) = 0;
  _objc_release(puVar13);
  _objc_release(puVar15);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain();
  puVar8 = &uStack_1f0;
  puVar15 = puVar2;
  func_0x00010bf52a60();
  if (puVar15 != (undefined *)0x0) {
    lVar11 = *plStack_1e0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        (**(code **)(*(long *)(lStack_1e8 + (long)puVar13 * 8) + 0x10))();
        puVar13 = puVar13 + 1;
      } while (puVar15 != puVar13);
      puVar8 = &uStack_1f0;
      puVar15 = puVar2;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar2);
  __Unwind_Resume(lVar1);
  puVar2 = PTR_PTR_1126add78;
  func_0x00010c0e00e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puVar2 == (undefined *)0x0) {
    lVar9 = *(long *)PTR____NSDictionary0___11034ab50;
    _objc_retain(lVar9);
  }
  else {
    func_0x00010bf71d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf221a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 104986e18; end: 104986edb; -[FBSDKServerConfigurationManager _parseDialogConfigurations:] */

void FUN_104986e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126add78;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)PTR____NSDictionary0___11034ab50;
    _objc_retain(uVar2);
  }
  else {
    func_0x00010bf71d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf221a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104986edc; end: 104986f53; -[FBSDKServerConfigurationManager _serverConfigurationTimestampIsValid:] */

bool FUN_104986edc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1 < 3600.0;
}



/* Entry: 104986f54; end: 104987063; -[FBSDKServerConfigurationManager _wrapperBlockForLoadBlock:] */

void FUN_104986f54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain();
  if (param_3 == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    _objc_retain();
    _objc_sync_enter();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104987064;
    puStack_50 = &UNK_11084a9e8;
    lVar3 = param_3;
    _objc_retain();
    uStack_48 = uVar1;
    uStack_40 = uVar2;
    lStack_38 = lVar3;
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    ppuVar4 = &puStack_68;
    _objc_retainBlock(ppuVar4);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(lStack_38);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104987064; end: 104987077;  */

void FUN_104987064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104987074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104987078; end: 10498707f; -[FBSDKServerConfigurationManager graphRequestFactory] */

undefined8 FUN_104987078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104987080; end: 10498708b; -[FBSDKServerConfigurationManager setGraphRequestFactory:] */

void FUN_104987080(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10498708c; end: 104987093; -[FBSDKServerConfigurationManager graphRequestConnectionFactory] */

undefined8 FUN_10498708c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104987094; end: 10498709f; -[FBSDKServerConfigurationManager setGraphRequestConnectionFactory:] */

void FUN_104987094(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049870a0; end: 1049870a7; -[FBSDKServerConfigurationManager dialogConfigurationMapBuilder] */

undefined8 FUN_1049870a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049870a8; end: 1049870b3; -[FBSDKServerConfigurationManager setDialogConfigurationMapBuilder:] */

void FUN_1049870a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049870b4; end: 1049870bb; -[FBSDKServerConfigurationManager completionBlocks] */

undefined8 FUN_1049870b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049870bc; end: 1049870c7; -[FBSDKServerConfigurationManager setCompletionBlocks:] */

void FUN_1049870bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049870c8; end: 1049870cf; -[FBSDKServerConfigurationManager loadingServerConfiguration] */

undefined1 FUN_1049870c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1049870d0; end: 1049870d7; -[FBSDKServerConfigurationManager setLoadingServerConfiguration:] */

void FUN_1049870d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1049870d8; end: 1049870df; -[FBSDKServerConfigurationManager serverConfiguration] */

undefined8 FUN_1049870d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049870e0; end: 1049870eb; -[FBSDKServerConfigurationManager setServerConfiguration:] */

void FUN_1049870e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1049870ec; end: 1049870f3; -[FBSDKServerConfigurationManager serverConfigurationError] */

undefined8 FUN_1049870ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1049870f4; end: 1049870ff; -[FBSDKServerConfigurationManager setServerConfigurationError:] */

void FUN_1049870f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104987100; end: 104987107; -[FBSDKServerConfigurationManager serverConfigurationErrorTimestamp] */

undefined8 FUN_104987100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104987108; end: 104987113; -[FBSDKServerConfigurationManager setServerConfigurationErrorTimestamp:] */

void FUN_104987108(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104987114; end: 10498711b; -[FBSDKServerConfigurationManager requeryFinishedForAppStart] */

undefined1 FUN_104987114(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10498711c; end: 104987123; -[FBSDKServerConfigurationManager setRequeryFinishedForAppStart:] */

void FUN_10498711c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104987124; end: 10498718f; -[FBSDKServerConfigurationManager .cxx_destruct] */

void FUN_104987124(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104987190; end: 104987317; -[FBSDKSuggestedEventsIndexer initWithGraphRequestFactory:serverConfigurationProvider:swizzler:settings:eventLogger:featureExtractor:eventProcessor:] */

undefined8 *
FUN_104987190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_6;
  _objc_retain();
  uVar4 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e3460;
  puVar5 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar5[7];
    puVar5[7] = puVar6;
    _objc_release(uVar7);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar5[8];
    puVar5[8] = puVar6;
    _objc_release(uVar7);
    _objc_storeStrong(puVar5 + 1,param_3);
    _objc_storeStrong(puVar5 + 2,param_4);
    _objc_storeStrong(puVar5 + 3,param_5);
    _objc_storeStrong(puVar5 + 4,param_6);
    _objc_storeStrong(puVar5 + 5,param_7);
    _objc_storeStrong(puVar5 + 6,param_8);
    _objc_storeWeak(puVar5 + 9,param_9);
  }
  _objc_release(param_9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar5;
}



/* Entry: 104987318; end: 1049873df; -[FBSDKSuggestedEventsIndexer enable] */

void FUN_104987318(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c15f080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c09c180(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1049873e0; end: 104987563;  */

void FUN_1049873e0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    return;
  }
  func_0x00010c261e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar1 = param_2;
  func_0x00010c075f00();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        lVar3 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c0ebde0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(lVar4);
        _objc_release(uVar1);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar3 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c27f620();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(lVar4);
        _objc_release(uVar1);
        _objc_release(lVar4);
        _objc_release(lVar3);
        param_1 = param_1 + 0x20;
        _objc_loadWeakRetained(param_1);
        func_0x00010c2283c0();
        _objc_release(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104987564; end: 1049875f3; -[FBSDKSuggestedEventsIndexer setup] */

void FUN_104987564(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      return;
    }
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1049875f4;
  puStack_30 = &UNK_110842e18;
  if (lRam000000011369d510 != -1) {
    lStack_28 = param_1;
    func_0x00010002a2fc(0x11369d510,&puStack_48);
  }
  return;
}



/* Entry: 1049875f4; end: 1049877af;  */

void FUN_1049875f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c265a00(uVar3);
  puVar2 = PTR_s_didMoveToWindow_112527020;
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1049877b0;
  puStack_70 = &UNK_1107b9dd0;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c265920(uVar3,param_2,puVar2,puVar4,&puStack_88,
                      &PTR____CFConstantStringClassReference_110da6138);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104987838;
  puStack_98 = &UNK_1107b9878;
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  ppuVar5 = &puStack_b0;
  _objc_retainBlock(ppuVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c265a00(uVar3);
  puVar2 = PTR_s_setDelegate__112640798;
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c265920(uVar3,param_2,puVar2,puVar4,ppuVar5,
                      &PTR____CFConstantStringClassReference_110da6138);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x104987844;
  puStack_c0 = &UNK_1107b98a8;
  uStack_b8 = *(undefined8 *)(param_1 + 0x20);
  ppuVar6 = &puStack_d8;
  _objc_retainBlock(ppuVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c265a00(uVar3);
  puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x00010c265920(uVar3,param_2,puVar2,puVar4,ppuVar6,
                      &PTR____CFConstantStringClassReference_110da6138);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x104987850;
  puStack_e8 = &UNK_110842e18;
  uStack_e0 = *(undefined8 *)(param_1 + 0x20);
  func_0x000104938910(&puStack_100);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  return;
}



/* Entry: 1049877b0; end: 104987837;  */

void FUN_1049877b0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIButton_1126aec48);
    lVar2 = param_2;
    func_0x00010c075f00();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010befbd60(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104987838; end: 104987857;  */

void FUN_104987838(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleView_withDelegate__1125d25f0,param_2);
  return;
}



/* Entry: 104987858; end: 104987983; -[FBSDKSuggestedEventsIndexer rematchBindings] */

void FUN_104987858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  long lStack_180;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar9 = *plStack_100;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c0c0720(param_1,param_2,*(undefined8 *)(lStack_108 + (long)puVar10 * 8));
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = puVar3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = &uStack_240;
    puVar2 = (undefined *)puVar4;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_230;
      do {
        puVar1 = PTR_s_buttonClicked__112525248;
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar9) {
            _objc_enumerationMutation(puVar4);
          }
          uVar11 = *(ulong *)(lStack_238 + (long)puVar10 * 8);
          puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
          uVar6 = uVar11;
          func_0x00010c075f00(uVar11,param_2,puVar5);
          if ((int)uVar6 == 0) {
            puVar5 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
            func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
            uVar6 = uVar11;
            func_0x00010c075f00(uVar11,param_2,puVar5);
            if ((int)uVar6 != 0) goto LAB_104987a68;
            puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
            func_0x00010bf39c40(PTR__OBJC_CLASS___UIButton_1126aec48);
            uVar6 = uVar11;
            func_0x00010c075f00(uVar11,param_2,puVar5);
            if ((int)uVar6 != 0) {
              func_0x00010befbd60(uVar11,param_2,puVar3,puVar1,1);
            }
          }
          else {
LAB_104987a68:
            uVar6 = uVar11;
            _objc_retain(uVar11);
            uVar7 = uVar6;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfd3120(puVar3,param_2,uVar6,uVar7);
            _objc_release(uVar6);
            _objc_release(uVar7);
          }
          puVar5 = PTR__OBJC_CLASS___UIControl_1126c3e60;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
          uVar6 = uVar11;
          func_0x00010c075f00(uVar11,param_2,puVar5);
          if ((uVar6 & 1) == 0) {
            func_0x00010c0c0720(puVar3,param_2,uVar11);
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar8 = &uStack_240;
        puVar2 = (undefined *)puVar4;
        func_0x00010bf52a60(puVar4,param_2,puVar8,auStack_200,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    puVar3 = (undefined *)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126ade58;
  _objc_retain(puVar8);
  func_0x00010bfcb180(puVar2,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1064e0(puVar3,param_2,puVar8,puVar2);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104987984; end: 104987b6b; -[FBSDKSuggestedEventsIndexer matchSubviewsIn:] */

void FUN_104987984(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x0;
  if (param_3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &uStack_130;
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        puVar6 = PTR_s_buttonClicked__112525248;
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar8 = *(ulong *)(lStack_128 + lVar7 * 8);
          puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
          uVar3 = uVar8;
          func_0x00010c075f00(uVar8,param_2,puVar2);
          if ((int)uVar3 == 0) {
            puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
            func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
            uVar3 = uVar8;
            func_0x00010c075f00(uVar8,param_2,puVar2);
            if ((int)uVar3 != 0) goto LAB_104987a68;
            puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
            func_0x00010bf39c40(PTR__OBJC_CLASS___UIButton_1126aec48);
            uVar3 = uVar8;
            func_0x00010c075f00(uVar8,param_2,puVar2);
            if ((int)uVar3 != 0) {
              func_0x00010befbd60(uVar8,param_2,param_1,puVar6,1);
            }
          }
          else {
LAB_104987a68:
            uVar3 = uVar8;
            _objc_retain(uVar8);
            uVar4 = uVar3;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfd3120(param_1,param_2,uVar3,uVar4);
            _objc_release(uVar3);
            _objc_release(uVar4);
          }
          puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
          uVar3 = uVar8;
          func_0x00010c075f00(uVar8,param_2,puVar2);
          if ((uVar3 & 1) == 0) {
            func_0x00010c0c0720(param_1,param_2,uVar8);
          }
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        puVar5 = &uStack_130;
        lVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,puVar5,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    param_1 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126ade58;
  _objc_retain(puVar5);
  func_0x00010bfcb180(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1064e0(param_1,param_2,puVar5,puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104987b6c; end: 104987bd7; -[FBSDKSuggestedEventsIndexer buttonClicked:] */

void FUN_104987b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade58;
  _objc_retain(param_3);
  func_0x00010bfcb180(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1064e0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104987bd8; end: 104987d3b; -[FBSDKSuggestedEventsIndexer handleView:withDelegate:] */

void FUN_104987bd8(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *apuStack_90 [5];
  undefined *apuStack_68 [5];
  
  ppuVar4 = apuStack_90;
  _objc_retain();
  _objc_retain();
  if (param_4 == 0) goto LAB_104987d14;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  puVar1 = PTR_s_tableView_didSelectRowAtIndexPat_1126779f8;
  if ((int)uVar2 == 0) {
LAB_104987c6c:
    puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    puVar1 = PTR_s_collectionView_didSelectItemAtIn_1125ada28;
    if ((int)uVar2 == 0) goto LAB_104987d14;
    lVar3 = param_4;
    func_0x00010c13b700(param_4,param_2,PTR_s_collectionView_didSelectItemAtIn_1125ada28);
    if ((int)lVar3 == 0) goto LAB_104987d14;
    apuStack_90[0] = PTR___NSConcreteStackBlock_11034bd00;
    puVar5 = &UNK_1107b9e30;
    pcVar6 = (code *)0x104987dc8;
  }
  else {
    lVar3 = param_4;
    func_0x00010c13b700(param_4,param_2,PTR_s_tableView_didSelectRowAtIndexPat_1126779f8);
    if ((int)lVar3 == 0) goto LAB_104987c6c;
    apuStack_68[0] = PTR___NSConcreteStackBlock_11034bd00;
    puVar5 = &UNK_1107b9e00;
    pcVar6 = FUN_104987d3c;
    ppuVar4 = apuStack_68;
  }
  ppuVar4[1] = (undefined *)0xc2000000;
  ppuVar4[2] = pcVar6;
  ppuVar4[3] = puVar5;
  ppuVar4[4] = param_1;
  _objc_retainBlock();
  func_0x00010c265a00(param_1);
  lVar3 = param_4;
  func_0x00010bf39c40(param_4);
  func_0x00010c265920(param_1,param_2,puVar1,lVar3,ppuVar4,
                      &PTR____CFConstantStringClassReference_110da6138);
  _objc_release(ppuVar4);
LAB_104987d14:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104987d3c; end: 104987e53;  */

void FUN_104987d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf33b80(param_4,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfcb1c0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1064e0(uVar3,param_2,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104987e54; end: 104987f8f; -[FBSDKSuggestedEventsIndexer predictEventWithUIResponder:text:] */

void FUN_104987e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  _objc_retain();
  _objc_retain();
  uVar1 = param_4;
  func_0x00010c08fa60();
  if ((uVar1 < 0x65) && (uVar1 = param_4, func_0x00010c08fa60(), uVar1 != 0)) {
    puVar2 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07d900();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_104987f90;
      puStack_68 = &UNK_11084c4a0;
      uVar4 = param_3;
      _objc_retain();
      uVar1 = param_4;
      uStack_60 = uVar4;
      puStack_58 = puVar2;
      uStack_50 = param_1;
      _objc_retain();
      uStack_48 = uVar1;
      _objc_retain(puVar2);
      func_0x000104938910(&puStack_80);
      _objc_release(uStack_48);
      _objc_release(puStack_58);
      _objc_release(uStack_60);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104987f90; end: 1049882d3;  */

void FUN_104987f90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain();
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        iVar12 = (int)*(undefined8 *)(lStack_128 + (long)puVar14 * 8);
        puVar4 = PTR_PTR_1126ade58;
        func_0x00010c124700();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010c075e80();
          if (iVar12 == 0) {
            func_0x00010bf09f20(PTR_PTR_1126add78);
          }
          else {
            func_0x00010c066b00(*(undefined8 *)(param_1 + 0x28));
          }
        }
        _objc_release(puVar4);
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126add20;
  func_0x00010c22c4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010c274780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  if (puVar4 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar4;
    func_0x00010bf39c40();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf71e80(PTR_PTR_1126add78);
  func_0x00010bf71e80(PTR_PTR_1126add78);
  _objc_initWeak(auStack_138,*(undefined8 *)(param_1 + 0x30));
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1049882d4;
  puStack_160 = &UNK_110850cf8;
  _objc_retain();
  puStack_158 = puVar2;
  _objc_copyWeak(auStack_140,auStack_138);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  ppuVar6 = &puStack_178;
  uStack_150 = uVar5;
  _objc_retainBlock();
  func_0x000104938968();
  _objc_release(ppuVar6);
  _objc_release(uStack_150);
  _objc_destroyWeak(auStack_140);
  _objc_release(puStack_158);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c0d3c80();
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bfa23a0();
  func_0x00010bfc4a80();
  _objc_release(puVar2);
  ppuVar8 = (undefined **)PTR_PTR_1126adf28;
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained(puVar2);
  puVar14 = puVar2;
  func_0x00010bfa23a0();
  uVar5 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb1a0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(uVar5);
  _objc_release(puVar2);
  ppuVar6 = (undefined **)(puVar1 + 0x38);
  _objc_loadWeakRetained();
  ppuVar9 = ppuVar6;
  func_0x00010bf9a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  ppuVar11 = ppuVar8;
  func_0x00010c115460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  if (ppuVar10 == (undefined **)0x0) goto LAB_104988568;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dd2318;
  ppuVar6 = ppuVar10;
  func_0x00010c0720c0();
  if (((ulong)ppuVar6 & 1) != 0) goto LAB_104988568;
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  puVar14 = puVar2;
  func_0x00010c0ebde0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010bf4b900();
  _objc_release(puVar14);
  _objc_release(puVar2);
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  ppuVar11 = ppuVar10;
  if ((int)puVar4 == 0) {
    puVar14 = puVar2;
    func_0x00010c27f620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf4b900();
    _objc_release(puVar14);
    _objc_release(puVar2);
    if (((int)puVar4 != 0) && (puVar3 != (undefined *)0x0)) {
      puVar2 = puVar1 + 0x38;
      _objc_loadWeakRetained();
      puVar1 = *(undefined **)(puVar1 + 0x30);
      func_0x00010bfc4aa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c0b14c0(puVar2);
      goto LAB_104988554;
    }
  }
  else {
    puVar1 = puVar2;
    func_0x00010bf99fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a60(puVar1);
    _objc_release(puVar14);
LAB_104988554:
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _free(puVar3);
LAB_104988568:
  _objc_release(ppuVar10);
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = 0;
  do {
    puVar2 = PTR_PTR_1126add78;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(*(undefined4 *)((long)ppuVar11 + lVar13),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f20(puVar2);
    _objc_release(puVar3);
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x78);
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1049882d4; end: 1049885b7;  */

void FUN_1049882d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  lVar15 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar15;
  func_0x00010bfa23a0();
  func_0x00010bfc4a80();
  _objc_release(lVar15);
  ppuVar5 = (undefined **)PTR_PTR_1126adf28;
  lVar15 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar15);
  lVar3 = lVar15;
  func_0x00010bfa23a0();
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da3ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb1a0(lVar3,param_2,uVar16,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6c0(ppuVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar15);
  ppuVar6 = (undefined **)(param_1 + 0x38);
  _objc_loadWeakRetained();
  ppuVar7 = ppuVar6;
  func_0x00010bf9a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  ppuVar14 = ppuVar5;
  func_0x00010c115460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  if (ppuVar8 == (undefined **)0x0) goto LAB_104988568;
  ppuVar14 = &PTR____CFConstantStringClassReference_110dd2318;
  ppuVar6 = ppuVar8;
  func_0x00010c0720c0();
  if (((ulong)ppuVar6 & 1) != 0) goto LAB_104988568;
  lVar15 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar3 = lVar15;
  func_0x00010c0ebde0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf4b900();
  _objc_release(lVar3);
  _objc_release(lVar15);
  ppuVar6 = (undefined **)(param_1 + 0x38);
  _objc_loadWeakRetained();
  ppuVar14 = ppuVar8;
  if ((int)lVar9 == 0) {
    ppuVar7 = ppuVar6;
    func_0x00010c27f620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar7;
    func_0x00010bf4b900();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    if (((int)ppuVar11 != 0) && (lVar2 != 0)) {
      ppuVar6 = (undefined **)(param_1 + 0x38);
      _objc_loadWeakRetained();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      ppuVar11 = *(undefined ***)(param_1 + 0x30);
      func_0x00010bfc4aa0(ppuVar11,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar7 = ppuVar11;
      }
      ppuVar14 = ppuVar8;
      func_0x00010c0b14c0(ppuVar6,param_2,ppuVar8,uVar4,ppuVar7);
      goto LAB_104988554;
    }
  }
  else {
    ppuVar11 = ppuVar6;
    func_0x00010bf99fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110da6158;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da6178;
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_68 = &PTR____CFConstantStringClassReference_110db2d38;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&ppuStack_78,2
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a60(ppuVar11,param_2,ppuVar8,puVar10);
    _objc_release(puVar10);
LAB_104988554:
    _objc_release(ppuVar11);
    _objc_release(ppuVar6);
  }
  _free(lVar2);
LAB_104988568:
  _objc_release(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 0;
  do {
    puVar13 = PTR_PTR_1126add78;
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(*(undefined4 *)((long)ppuVar14 + lVar15),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f20(puVar13,param_2,puVar10,puVar12);
    _objc_release(puVar12);
    lVar15 = lVar15 + 4;
  } while (lVar15 != 0x78);
  puVar13 = puVar10;
  func_0x00010bf446e0(puVar10,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1049885b8; end: 104988677; -[FBSDKSuggestedEventsIndexer getDenseFeaure:] */

void FUN_1049885b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  do {
    puVar3 = PTR_PTR_1126add78;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(*(undefined4 *)(param_3 + lVar4),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f20(puVar3,param_2,puVar1,puVar2);
    _objc_release(puVar2);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x78);
  puVar3 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104988678; end: 104988807; -[FBSDKSuggestedEventsIndexer getTextFromContentView:] */

void FUN_104988678(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  long lVar10;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  lVar8 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126ade58;
        func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,*(undefined8 *)(lStack_128 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c08fa60();
        if (puVar5 != (undefined *)0x0) {
          func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,puVar4);
        }
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      puVar7 = auStack_e8;
      lVar8 = 0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2d98;
  puVar4 = puVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_PTR_1126add58;
  if (lVar8 != 0) {
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110da6198;
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110da61b8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1a8 = puVar7;
    lStack_1a0 = lVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1a8,&ppuStack_1b8,
                        2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc19c0(puVar1,param_2,puVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar1 != (undefined *)0x0) {
      lVar2 = param_3;
      func_0x00010bfcde20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da61d8);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dd1b78;
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dceed8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_1c8 = ppuVar6;
      puStack_1c0 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1c8,
                          &ppuStack_1d8,2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010bf56560(lVar2,param_2,puVar4,puVar5,
                          &PTR____CFConstantStringClassReference_110dada18,0,in_x6,in_x7,lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(param_3);
      _objc_release(lVar2);
      func_0x00010c251a80(lVar9,param_2,&PTR___NSConcreteGlobalBlock_1107b9e60);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    _objc_release(puVar1);
  }
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  return;
}


