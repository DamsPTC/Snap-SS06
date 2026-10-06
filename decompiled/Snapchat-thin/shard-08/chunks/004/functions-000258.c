/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060720c0; end: 1060721ef; -[TwoFASetupTPAViewController getTableCellWithIdentifier:InfoText:SubInfoText:] */

void FUN_1060720c0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c75b8;
    _objc_alloc(PTR_PTR_1126c75b8);
    func_0x00010c040040();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c26c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c25e820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060721f0; end: 10607232f; -[TwoFASetupTPAViewController tableView:cellForRowAtIndexPath:] */

void FUN_1060721f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010c142240(), lVar1 == 0)) {
    func_0x000106078a14();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001060789fc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3ae18;
  }
  else {
    lVar1 = param_4;
    func_0x00010c1554e0();
    if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010c142240(), lVar1 == 1)) {
      func_0x000106078aec();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000106078aa4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3ae38;
    }
    else {
      lVar1 = param_4;
      func_0x00010c1554e0();
      if ((lVar1 != 0) || (lVar1 = param_4, func_0x00010c142240(), lVar1 != 2)) {
        param_1 = 0;
        goto LAB_106072314;
      }
      func_0x000106078a74();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000106078a5c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3ae58;
    }
  }
  func_0x00010bfcb000(param_1,param_2,ppuVar3,lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_106072314:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106072330; end: 1060723d3; -[TwoFASetupTPAViewController tableView:didSelectRowAtIndexPath:] */

void FUN_106072330(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c142240();
    if (lVar1 == 2) {
      func_0x00010bf7a9e0(param_1);
    }
    else if (lVar1 == 1) {
      func_0x00010bf7abe0(param_1);
    }
    else if (lVar1 == 0) {
      func_0x00010bf7a6c0(param_1);
    }
  }
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060723d4; end: 10607264f; -[TwoFASetupTPAViewController showTPAPopupWithUsername:secret:] */

void FUN_1060723d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010c25cda0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3acf8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af180;
  puVar4 = puVar3;
  func_0x0001060784a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106072650;
  puStack_98 = &UNK_110909e90;
  uStack_90 = param_1;
  uStack_88 = param_4;
  puStack_80 = puVar3;
  _objc_retain(puVar3);
  _objc_retain(param_4);
  func_0x00010beef320(puVar1,param_2,puVar4,3,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126af180;
  func_0x00010607845c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320(puVar5,param_2,puVar4,4,&PTR___NSConcreteGlobalBlock_110909ec0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x0001060789e4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x0001060789cc();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4,param_2,puVar6,puVar7,puVar8,0,0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c10d400(*(undefined8 *)(lVar2 + 0x20),param_2,*(undefined8 *)(lVar2 + 0x28));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(lVar2 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1,param_2,puVar5,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106072650; end: 1060726cf;  */

void FUN_106072650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c10d400(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1,param_2,puVar2,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060726d0; end: 1060726d3;  */

void FUN_1060726d0(void)

{
  return;
}



/* Entry: 1060726d4; end: 106072813; -[TwoFASetupTPAViewController showNoTPAPopup] */

void FUN_1060726d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126af180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000106078744();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320(puVar1,param_2,param_1,3,&PTR___NSConcreteGlobalBlock_110909ee0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000106078a44();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000106078a2c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar2,param_2,puVar3,puVar4,puVar5,0,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106072814; end: 106072817;  */

void FUN_106072814(void)

{
  return;
}



/* Entry: 106072818; end: 1060728d3; -[TwoFASetupTPAViewController didSelectAutoSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072818(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11273dfa0);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c75a8;
  func_0x00010bfbfd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0 || puVar4 == (undefined *)0x0) {
    func_0x00010c238b20(param_1);
  }
  else {
    func_0x00010c23a620(param_1,param_2,lVar3,puVar4);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1060728d4; end: 106072a0f; -[TwoFASetupTPAViewController didSelectManualSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060728d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c7658;
  _objc_alloc(PTR_PTR_1126c7658);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033580(puVar1,*(undefined8 *)(param_1 + _DAT_11273dfc4),299,puVar2,1,
                      *(undefined1 *)(param_1 + _DAT_11273dfd0),
                      *(undefined1 *)(param_1 + _DAT_11273dfd4),
                      *(undefined8 *)(param_1 + _DAT_11273df9c),
                      *(undefined8 *)(param_1 + _DAT_11273dfa0),
                      *(undefined8 *)(param_1 + _DAT_11273dfa4),
                      *(undefined8 *)(param_1 + _DAT_11273dfa8),
                      *(undefined8 *)(param_1 + _DAT_11273dfac),
                      *(undefined8 *)(param_1 + _DAT_11273dfb0),
                      *(undefined8 *)(param_1 + _DAT_11273dfb4),
                      *(undefined8 *)(param_1 + _DAT_11273dfb8),
                      *(undefined8 *)(param_1 + _DAT_11273dfbc),
                      *(undefined8 *)(param_1 + _DAT_11273dfc0),
                      *(undefined8 *)(param_1 + _DAT_11273dfc4),
                      *(undefined8 *)(param_1 + _DAT_11273dfc8),
                      *(undefined8 *)(param_1 + _DAT_11273dfcc));
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106072a10; end: 106072a83; -[TwoFASetupTPAViewController didSelectFindApp] */

void FUN_106072a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e3ae78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1,param_2,puVar2,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106072a84; end: 106072bb7; -[TwoFASetupTPAViewController presentOTPCodeVerifyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7628;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04aa00();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(uVar2);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106072bb8; end: 106072bcf; -[TwoFASetupTPAViewController disableLeftSwipe] */

uint FUN_106072bb8(uint param_1)

{
  func_0x00010c08e9e0();
  return param_1 ^ 1;
}



/* Entry: 106072bd0; end: 106072c0b; -[TwoFASetupTPAViewController leftButtonPressed] */

void FUN_106072bd0(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106072c0c; end: 106072c17; -[TwoFASetupTPAViewController defaultProjectNameV3] */

void FUN_106072c0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106072c18; end: 106072c23; -[TwoFASetupTPAViewController defaultProjectNameV2] */

void FUN_106072c18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106072c24; end: 106072c33; -[TwoFASetupTPAViewController leftSwipeable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106072c24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273df94);
}



/* Entry: 106072c34; end: 106072c43; -[TwoFASetupTPAViewController setLeftSwipeable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072c34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273df94) = param_3;
  return;
}



/* Entry: 106072c44; end: 106072c53; -[TwoFASetupTPAViewController infoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072c44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df98);
}



/* Entry: 106072c54; end: 106072c93; -[TwoFASetupTPAViewController setInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072c94; end: 106072ca3; -[TwoFASetupTPAViewController infoTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072c94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfd8);
}



/* Entry: 106072ca4; end: 106072ce3; -[TwoFASetupTPAViewController setInfoTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072ce4; end: 106072cf3; -[TwoFASetupTPAViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072ce4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfdc);
}



/* Entry: 106072cf4; end: 106072d33; -[TwoFASetupTPAViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfdc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072d34; end: 106072d43; -[TwoFASetupTPAViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072d34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df9c);
}



/* Entry: 106072d44; end: 106072d83; -[TwoFASetupTPAViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072d84; end: 106072d93; -[TwoFASetupTPAViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072d84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfa0);
}



/* Entry: 106072d94; end: 106072dd3; -[TwoFASetupTPAViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfa0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072dd4; end: 106072de3; -[TwoFASetupTPAViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072dd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfa4);
}



/* Entry: 106072de4; end: 106072e23; -[TwoFASetupTPAViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfa4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072e24; end: 106072e33; -[TwoFASetupTPAViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfa8);
}



/* Entry: 106072e34; end: 106072e73; -[TwoFASetupTPAViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfa8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072e74; end: 106072e83; -[TwoFASetupTPAViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106072e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfac);
}



/* Entry: 106072e84; end: 106072ec3; -[TwoFASetupTPAViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106072ec4; end: 106072fe3; -[TwoFASetupTPAViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106072ec4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dfac,0);
  _objc_storeStrong(param_1 + _DAT_11273dfa8,0);
  _objc_storeStrong(param_1 + _DAT_11273dfa4,0);
  _objc_storeStrong(param_1 + _DAT_11273dfa0,0);
  _objc_storeStrong(param_1 + _DAT_11273df9c,0);
  _objc_storeStrong(param_1 + _DAT_11273dfdc,0);
  _objc_storeStrong(param_1 + _DAT_11273dfd8,0);
  _objc_storeStrong(param_1 + _DAT_11273df98,0);
  _objc_storeStrong(param_1 + _DAT_11273dfcc,0);
  _objc_storeStrong(param_1 + _DAT_11273dfc8,0);
  _objc_storeStrong(param_1 + _DAT_11273dfc4,0);
  _objc_storeStrong(param_1 + _DAT_11273dfc0,0);
  _objc_storeStrong(param_1 + _DAT_11273dfbc,0);
  _objc_storeStrong(param_1 + _DAT_11273dfb8,0);
  _objc_storeStrong(param_1 + _DAT_11273dfb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dfb0,0);
  return;
}



/* Entry: 106072fe4; end: 106073377; -[TwoFASmsPromptViewController initWithPageViewName:title:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106072fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
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
  puStack_70 = PTR_PTR_1126ef610;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273dfe0) = param_3;
    puVar2 = puVar1;
    func_0x00010c216240();
    func_0x00010607896c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273dfe4);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11273dfe4) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfe8;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfec;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dff0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dff4;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dff8;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dffc;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e000;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e004;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e008;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e00c;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e010;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e014;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e018;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e01c) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e020) = param_6;
  }
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
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106073378; end: 106073417; -[TwoFASmsPromptViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106073378(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010bebfd60(param_1);
  func_0x00010bf56bc0(param_1);
  func_0x00010bf557a0(param_1);
  func_0x00010bf56760(param_1);
  uVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(uVar1);
  func_0x00010bf54ba0(param_1);
  return;
}



/* Entry: 106073418; end: 1060734cb; -[TwoFASmsPromptViewController createLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106073418(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126ef610;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_class_1125ac0b8);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfee0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e024);
  *(long **)(param_1 + _DAT_11273e024) = plVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1060734cc; end: 1060738ff; -[TwoFASmsPromptViewController createContinueButton] */

void FUN_1060734cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1837a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x000106078954();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106073900; end: 10607399b; -[TwoFASmsPromptViewController createHeaderRightButton] */

void FUN_106073900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0620;
  uVar1 = param_1;
  func_0x00010607890c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25c80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010befbd60(puVar2,param_2,param_1,PTR_s_rightButtonPressed_11262dc80,0x40);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10607399c; end: 106073aeb; -[TwoFASmsPromptViewController createBackgroundImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607399c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar4 = (long)_DAT_11273e028;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106073aec;
  puStack_60 = &UNK_1108471b0;
  lStack_58 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  lVar5 = (long)_DAT_11273e02c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar5));
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106073d00;
  puStack_88 = &UNK_1108471b0;
  lStack_80 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106073aec; end: 106073cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106073aec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273e024);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4fa60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106073d00; end: 106073d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106073d00(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106073d74; end: 106073d83; -[TwoFASmsPromptViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106073d74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfe0);
}



/* Entry: 106073d84; end: 106073d87; -[TwoFASmsPromptViewController getTitle] */

void FUN_106073d84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 106073d88; end: 106073dff; -[TwoFASmsPromptViewController preferredRightButtonWidth] */

double FUN_106073d88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x00010607890c();
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 15.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dce0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return dVar2 + 15.0 + 15.0;
}



/* Entry: 106073e00; end: 106073e8f; -[TwoFASmsPromptViewController setIsWorking:] */

void FUN_106073e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106073e90; end: 106073fcf; -[TwoFASmsPromptViewController rightButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106073e90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c7630;
  _objc_alloc(PTR_PTR_1126c7630);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0335c0(puVar1,*(undefined8 *)(param_1 + _DAT_11273e010),0x14d,puVar2,0,
                      *(undefined1 *)(param_1 + _DAT_11273e01c),
                      *(undefined1 *)(param_1 + _DAT_11273e020),
                      *(undefined8 *)(param_1 + _DAT_11273dfe8),
                      *(undefined8 *)(param_1 + _DAT_11273dfec),
                      *(undefined8 *)(param_1 + _DAT_11273dff0),
                      *(undefined8 *)(param_1 + _DAT_11273dff8),
                      *(undefined8 *)(param_1 + _DAT_11273dffc),
                      *(undefined8 *)(param_1 + _DAT_11273dff4),
                      *(undefined8 *)(param_1 + _DAT_11273e000),
                      *(undefined8 *)(param_1 + _DAT_11273e004),
                      *(undefined8 *)(param_1 + _DAT_11273e008),
                      *(undefined8 *)(param_1 + _DAT_11273e00c),
                      *(undefined8 *)(param_1 + _DAT_11273e010),
                      *(undefined8 *)(param_1 + _DAT_11273e014),
                      *(undefined8 *)(param_1 + _DAT_11273e018),0);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106073fd0; end: 1060741af; -[TwoFASmsPromptViewController continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106073fd0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  uVar2 = param_1;
  func_0x00010be341a0();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentMobileSettingView_112620e78);
    return;
  }
  func_0x00010c1b5be0(param_1);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1060741b0;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar3 = &puStack_90;
  _objc_retainBlock();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106074200;
  puStack_a0 = &UNK_110843540;
  _objc_copyWeak(auStack_98,auStack_68);
  ppuVar4 = &puStack_b8;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11273dff0);
  func_0x00010c27db60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar4);
  func_0x00010c15c9c0(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1060741b0; end: 106074263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060741b0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b5be0(param_1,param_2,0);
    *(undefined1 *)(param_1 + _DAT_11273e01c) = 1;
    func_0x00010c10eb60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106074264; end: 10607426f;  */

void FUN_106074264(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_failure__11260dc18,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106074270; end: 1060743b3; -[TwoFASmsPromptViewController verifyMobileDidSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074270(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c75d8;
  _objc_alloc(PTR_PTR_1126c75d8);
  puVar2 = puVar1;
  func_0x0001060787ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033600(puVar1,*(undefined8 *)(param_1 + _DAT_11273e00c),0x126,puVar2,1,0,
                      *(undefined1 *)(param_1 + _DAT_11273e01c),
                      *(undefined1 *)(param_1 + _DAT_11273e020),
                      *(undefined8 *)(param_1 + _DAT_11273dfe8),
                      *(undefined8 *)(param_1 + _DAT_11273dfec),
                      *(undefined8 *)(param_1 + _DAT_11273dff0),
                      *(undefined8 *)(param_1 + _DAT_11273dff8),
                      *(undefined8 *)(param_1 + _DAT_11273dffc),
                      *(undefined8 *)(param_1 + _DAT_11273dff4),
                      *(undefined8 *)(param_1 + _DAT_11273e000),
                      *(undefined8 *)(param_1 + _DAT_11273e004),
                      *(undefined8 *)(param_1 + _DAT_11273e008),
                      *(undefined8 *)(param_1 + _DAT_11273e00c),
                      *(undefined8 *)(param_1 + _DAT_11273e010),
                      *(undefined8 *)(param_1 + _DAT_11273e014),
                      *(undefined8 *)(param_1 + _DAT_11273e018));
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060743b4; end: 1060743ef; -[TwoFASmsPromptViewController verifyMobileWasCancelled] */

void FUN_1060743b4(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060743f0; end: 1060743f7; -[TwoFASmsPromptViewController disableLeftSwipe] */

undefined8 FUN_1060743f0(void)

{
  return 1;
}



/* Entry: 1060743f8; end: 106074437; -[TwoFASmsPromptViewController onTapLeftBackButton:] */

void FUN_1060743f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106074438; end: 10607455f; -[TwoFASmsPromptViewController presentMobileSettingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75e0;
  _objc_alloc(PTR_PTR_1126c75e0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273dfe8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273dfec);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273dff8);
  func_0x00010c121fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb00(puVar1,param_2,1,uVar3,uVar4,uVar2,*(undefined8 *)(param_1 + _DAT_11273e004),
                      *(undefined8 *)(param_1 + _DAT_11273e008),
                      *(undefined8 *)(param_1 + _DAT_11273dffc),
                      *(undefined8 *)(param_1 + _DAT_11273e000),
                      *(undefined8 *)(param_1 + _DAT_11273e00c),
                      *(undefined8 *)(param_1 + _DAT_11273e010),0,0);
  _objc_release(uVar2);
  func_0x00010c189400(puVar1,param_2,1);
  func_0x00010c1c8940(puVar1,param_2,param_1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106074560; end: 106074567;  */

undefined8 FUN_106074560(void)

{
  return 0;
}



/* Entry: 106074568; end: 1060746f7; -[TwoFASmsPromptViewController presentTwoFAConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074568(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c75e8;
  _objc_alloc(PTR_PTR_1126c75e8);
  lVar6 = (long)_DAT_11273dfec;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0fb000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035a80(puVar1,param_2,uVar5,*(undefined1 *)(param_1 + _DAT_11273e01c),
                      *(undefined1 *)(param_1 + _DAT_11273e020),
                      *(undefined8 *)(param_1 + _DAT_11273dfe8),*(undefined8 *)(param_1 + lVar6),
                      *(undefined8 *)(param_1 + _DAT_11273dff0),
                      *(undefined8 *)(param_1 + _DAT_11273dff8),
                      *(undefined8 *)(param_1 + _DAT_11273dffc),
                      *(undefined8 *)(param_1 + _DAT_11273dff4),
                      *(undefined8 *)(param_1 + _DAT_11273e000),
                      *(undefined8 *)(param_1 + _DAT_11273e004),
                      *(undefined8 *)(param_1 + _DAT_11273e008),
                      *(undefined8 *)(param_1 + _DAT_11273e00c),
                      *(undefined8 *)(param_1 + _DAT_11273e010),
                      *(undefined8 *)(param_1 + _DAT_11273e014),
                      *(undefined8 *)(param_1 + _DAT_11273e018));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060746f8; end: 10607485b; -[TwoFASmsPromptViewController _startDownloadingImageResource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060746f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273dff4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10607485c; end: 1060748a3;  */

void FUN_10607485c(long param_1,undefined8 param_2)

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



/* Entry: 1060748a4; end: 106074973; -[TwoFASmsPromptViewController _updateImage:] */

void FUN_1060748a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106074934;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106074974; end: 106074a17; -[TwoFASmsPromptViewController _hasMobileSettingsError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106074974(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_11273dfec);
  func_0x00010c0fb000(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar5 == 0;
}



/* Entry: 106074a18; end: 106074a23; -[TwoFASmsPromptViewController defaultProjectNameV3] */

void FUN_106074a18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106074a24; end: 106074a2f; -[TwoFASmsPromptViewController defaultProjectNameV2] */

void FUN_106074a24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106074a30; end: 106074a3f; -[TwoFASmsPromptViewController infoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106074a30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfe4);
}



/* Entry: 106074a40; end: 106074a7f; -[TwoFASmsPromptViewController setInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfe4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106074a80; end: 106074a8f; -[TwoFASmsPromptViewController continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106074a80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e030);
}



/* Entry: 106074a90; end: 106074acf; -[TwoFASmsPromptViewController setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e030;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106074ad0; end: 106074adf; -[TwoFASmsPromptViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106074ad0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfe8);
}



/* Entry: 106074ae0; end: 106074b1f; -[TwoFASmsPromptViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfe8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106074b20; end: 106074b2f; -[TwoFASmsPromptViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106074b20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dfec);
}



/* Entry: 106074b30; end: 106074b6f; -[TwoFASmsPromptViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dfec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106074b70; end: 106074b7f; -[TwoFASmsPromptViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106074b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dff0);
}



/* Entry: 106074b80; end: 106074bbf; -[TwoFASmsPromptViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dff0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106074bc0; end: 106074bcf; -[TwoFASmsPromptViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106074bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dff8);
}



/* Entry: 106074bd0; end: 106074c0f; -[TwoFASmsPromptViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dff8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106074c10; end: 106074d4f; -[TwoFASmsPromptViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106074c10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dff8,0);
  _objc_storeStrong(param_1 + _DAT_11273dff0,0);
  _objc_storeStrong(param_1 + _DAT_11273dfec,0);
  _objc_storeStrong(param_1 + _DAT_11273dfe8,0);
  _objc_storeStrong(param_1 + _DAT_11273e030,0);
  _objc_storeStrong(param_1 + _DAT_11273dfe4,0);
  _objc_storeStrong(param_1 + _DAT_11273e018,0);
  _objc_storeStrong(param_1 + _DAT_11273e014,0);
  _objc_storeStrong(param_1 + _DAT_11273e010,0);
  _objc_storeStrong(param_1 + _DAT_11273e00c,0);
  _objc_storeStrong(param_1 + _DAT_11273e008,0);
  _objc_storeStrong(param_1 + _DAT_11273e004,0);
  _objc_storeStrong(param_1 + _DAT_11273e000,0);
  _objc_storeStrong(param_1 + _DAT_11273dff4,0);
  _objc_storeStrong(param_1 + _DAT_11273dffc,0);
  _objc_storeStrong(param_1 + _DAT_11273e02c,0);
  _objc_storeStrong(param_1 + _DAT_11273e028,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e024,0);
  return;
}



/* Entry: 106074d50; end: 106074d57; -[TwoFASmsSettingsViewController pageViewName] */

undefined8 FUN_106074d50(void)

{
  return 0x136;
}



/* Entry: 106074d58; end: 1060750ff; -[TwoFASmsSettingsViewController initWithPhoneNumber:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106074d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  _objc_retain(param_3);
  func_0x000106078924();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puStack_70 = PTR_PTR_1126ef618;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithInfoText_type_userBlizza_1125e50a0,puVar1,2,param_12,
                      param_17);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    lVar4 = (long)_DAT_11273e038;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e03c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e040;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e044;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e048;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e04c;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e050;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_12;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e054;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_13;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e058;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_14;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e05c;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_15;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e060;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_16;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e064;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_17;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273e068;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_18;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273e06c) = param_4;
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273e070) = param_5;
  }
  _objc_release(puVar1);
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
  return puVar2;
}



/* Entry: 106075100; end: 10607533b; -[TwoFASmsSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075100(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126ef618;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162900();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fde9e9e9e9e9e9f,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(lVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c298440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c298440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c75e0;
  _objc_alloc(PTR_PTR_1126c75e0);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273e044);
  func_0x00010c121fe0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb00(puVar3);
  _objc_release(uVar9);
  func_0x00010c189400(puVar3);
  func_0x00010c1c8940(puVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10607533c; end: 106075467; -[TwoFASmsSettingsViewController attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607533c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75e0;
  _objc_alloc(PTR_PTR_1126c75e0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273e038);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e03c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273e044);
  func_0x00010c121fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb00(puVar1,param_2,1,uVar3,uVar4,uVar2,*(undefined8 *)(param_1 + _DAT_11273e054),
                      *(undefined8 *)(param_1 + _DAT_11273e058),
                      *(undefined8 *)(param_1 + _DAT_11273e048),
                      *(undefined8 *)(param_1 + _DAT_11273e050),
                      *(undefined8 *)(param_1 + _DAT_11273e05c),
                      *(undefined8 *)(param_1 + _DAT_11273e060),0,0);
  _objc_release(uVar2);
  func_0x00010c189400(puVar1,param_2,1);
  func_0x00010c1c8940(puVar1,param_2,param_1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106075468; end: 10607546f;  */

undefined8 FUN_106075468(void)

{
  return 0;
}



/* Entry: 106075470; end: 106075477; -[TwoFASmsSettingsViewController verifyMobileDidSucceed] */

void FUN_106075470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_verifyMobileDidSucceedWithTwoFaR_112683c68,0)
  ;
  return;
}



/* Entry: 106075478; end: 10607547b; -[TwoFASmsSettingsViewController verifyMobileDidSucceedWithTwoFaRecoveryCode:] */

void FUN_106075478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentRecoveryCodeViewWithRecov_1126211a8);
  return;
}



/* Entry: 10607547c; end: 1060754b7; -[TwoFASmsSettingsViewController verifyMobileWasCancelled] */

void FUN_10607547c(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060754b8; end: 1060754f3; -[TwoFASmsSettingsViewController leftButtonPressed:] */

void FUN_1060754b8(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060754f4; end: 1060756d7; -[TwoFASmsSettingsViewController verifyPressed:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060754f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1060756d8;
  puStack_88 = &UNK_11085d1a0;
  lStack_80 = param_1;
  uStack_78 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106075774;
  puStack_b0 = &UNK_110848438;
  uStack_a8 = param_5;
  _objc_retain(param_5);
  ppuVar3 = &puStack_c8;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e040);
  func_0x00010c27db60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2982a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010c26b700(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x106075780;
  puStack_e0 = &UNK_110909de0;
  ppuStack_d8 = ppuVar2;
  ppuStack_d0 = ppuVar3;
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar2);
  func_0x00010bf91b60(uVar5,param_2,uVar7,&puStack_f8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuStack_d0);
  _objc_release(ppuStack_d8);
  _objc_release(ppuVar3);
  _objc_release(uStack_a8);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1060756d8; end: 106075773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060756d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273e05c);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2bc0();
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273e06c) = 1;
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106075774; end: 10607578b;  */

void FUN_106075774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010607577c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10607578c; end: 106075793; -[TwoFASmsSettingsViewController verifySucceed:recoveryCode:] */

void FUN_10607578c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentRecoveryCodeViewWithRecov_1126211a8,param_4);
  return;
}



/* Entry: 106075794; end: 10607587f; -[TwoFASmsSettingsViewController resendPressed:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e040);
  func_0x00010c27db60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106075880;
  puStack_48 = &UNK_110909cf0;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c15c9c0(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106075880; end: 10607588b;  */

void FUN_106075880(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_failure__11260dc18,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10607588c; end: 106075ab7; -[TwoFASmsSettingsViewController presentRecoveryCodeViewWithRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607588c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126c7638;
    _objc_alloc(PTR_PTR_1126c7638);
    puVar2 = puVar1;
    func_0x0001060787ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0335e0(puVar1,*(undefined8 *)(param_1 + _DAT_11273e058),0x127,puVar2,1,0,param_3,
                        *(undefined1 *)(param_1 + _DAT_11273e06c),
                        *(undefined1 *)(param_1 + _DAT_11273e070),
                        *(undefined8 *)(param_1 + _DAT_11273e038),
                        *(undefined8 *)(param_1 + _DAT_11273e03c),
                        *(undefined8 *)(param_1 + _DAT_11273e040),
                        *(undefined8 *)(param_1 + _DAT_11273e044),
                        *(undefined8 *)(param_1 + _DAT_11273e048),
                        *(undefined8 *)(param_1 + _DAT_11273e04c),
                        *(undefined8 *)(param_1 + _DAT_11273e050),
                        *(undefined8 *)(param_1 + _DAT_11273e054),
                        *(undefined8 *)(param_1 + _DAT_11273e058),
                        *(undefined8 *)(param_1 + _DAT_11273e05c),
                        *(undefined8 *)(param_1 + _DAT_11273e060),
                        *(undefined8 *)(param_1 + _DAT_11273e064),
                        *(undefined8 *)(param_1 + _DAT_11273e068));
  }
  else {
    puVar1 = PTR_PTR_1126c7630;
    _objc_alloc(PTR_PTR_1126c7630);
    puVar2 = puVar1;
    func_0x0001060789b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0335c0(puVar1,*(undefined8 *)(param_1 + _DAT_11273e060),0x14d,puVar2,0,
                        *(undefined1 *)(param_1 + _DAT_11273e06c),
                        *(undefined1 *)(param_1 + _DAT_11273e070),
                        *(undefined8 *)(param_1 + _DAT_11273e038),
                        *(undefined8 *)(param_1 + _DAT_11273e03c),
                        *(undefined8 *)(param_1 + _DAT_11273e040),
                        *(undefined8 *)(param_1 + _DAT_11273e044),
                        *(undefined8 *)(param_1 + _DAT_11273e048),
                        *(undefined8 *)(param_1 + _DAT_11273e04c),
                        *(undefined8 *)(param_1 + _DAT_11273e050),
                        *(undefined8 *)(param_1 + _DAT_11273e054),
                        *(undefined8 *)(param_1 + _DAT_11273e058),
                        *(undefined8 *)(param_1 + _DAT_11273e05c),
                        *(undefined8 *)(param_1 + _DAT_11273e060),
                        *(undefined8 *)(param_1 + _DAT_11273e064),
                        *(undefined8 *)(param_1 + _DAT_11273e068),0);
  }
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106075ab8; end: 106075ad7; -[TwoFASmsSettingsViewController settingsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075ab8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273e074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106075ad8; end: 106075aeb; -[TwoFASmsSettingsViewController setSettingsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273e074,param_3);
  return;
}



/* Entry: 106075aec; end: 106075afb; -[TwoFASmsSettingsViewController skipRecoveryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106075aec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273e034);
}



/* Entry: 106075afc; end: 106075b0b; -[TwoFASmsSettingsViewController setSkipRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075afc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273e034) = param_3;
  return;
}



/* Entry: 106075b0c; end: 106075b1b; -[TwoFASmsSettingsViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106075b0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e038);
}



/* Entry: 106075b1c; end: 106075b5b; -[TwoFASmsSettingsViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e038;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106075b5c; end: 106075b6b; -[TwoFASmsSettingsViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106075b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e03c);
}


