/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b4bbb0; end: 106b4bbd3; -[SCEmailDomainSuggestionPill copyWithZone:] */

undefined8 FUN_106b4bbb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b4bbd4; end: 106b4bc47; -[SCEmailDomainSuggestionPill hash] */

undefined8 * FUN_106b4bbd4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106b4bcc8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106b4bcd4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106b4bcd4;
        }
        goto LAB_106b4bcc8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106b4bcd4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106b4bc48; end: 106b4bcef; -[SCEmailDomainSuggestionPill isEqual:] */

long FUN_106b4bc48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b4bcc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b4bcd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106b4bcd4;
        }
        goto LAB_106b4bcc8;
      }
    }
    lVar3 = 0;
  }
LAB_106b4bcd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b4bcf0; end: 106b4bcf7; -[SCEmailDomainSuggestionPill fullEmailDomain] */

undefined8 FUN_106b4bcf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b4bcf8; end: 106b4bcff; -[SCEmailDomainSuggestionPill croppedEmailDomain] */

undefined8 FUN_106b4bcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b4bd00; end: 106b4bd2f; -[SCEmailDomainSuggestionPill .cxx_destruct] */

void FUN_106b4bd00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b4bd30; end: 106b4bd7b;  */

void FUN_106b4bd30(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e75178;
  }
  else {
    if (param_1 != 1) goto _objc_autoreleaseReturnValue;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e75198;
  }
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b4bd7c; end: 106b4be73; -[SCRegisterSecurityGhostV2View initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b4bd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  puVar3 = &uStack_40;
  _objc_retain(param_4);
  func_0x00010c0b6c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_38 = PTR_PTR_1126f50c8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame_delegate__1125e2a78,param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar2);
    func_0x00010bfe4240(puVar3);
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112758a30);
    *puVar1 = 0;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = param_1;
    func_0x00010bfef7c0(puVar3);
    func_0x00010c2284e0(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 106b4be74; end: 106b4c053; -[SCRegisterSecurityGhostV2View initTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4be74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112758a34;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000106b66b58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106b4bfec;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b4c054; end: 106b4c067; -[SCRegisterSecurityGhostV2View .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758a34,0);
  return;
}



/* Entry: 106b4c068; end: 106b4c1db; +[SCRegisterV2BackButton initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126d0a98;
  _objc_retain(param_3);
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(puVar1 + _DAT_112758a38,param_3);
  _objc_release(param_3);
  func_0x00010c198080(puVar1);
  uVar2 = 0;
  FUN_106b4bd30(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1);
  _objc_release(uVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106b4c198;
  puStack_30 = &UNK_110842e18;
  _objc_retain(puVar1);
  ppuVar3 = &puStack_48;
  puStack_28 = puVar1;
  _objc_retainBlock(ppuVar3);
  func_0x00010bfd2f00(puVar1);
  func_0x00010befbd60(puVar1);
  _objc_retain(puVar1);
  _objc_release(ppuVar3);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b4c1dc; end: 106b4c217; -[SCRegisterV2BackButton backButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c1dc(long param_1)

{
  param_1 = param_1 + _DAT_112758a38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf13900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4c218; end: 106b4c227; -[SCRegisterV2BackButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758a38);
  return;
}



/* Entry: 106b4c228; end: 106b4c2cb; -[SCRegisterV2BaseView initWithFrame:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b4c228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f50d0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758a3c),param_7);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106b4c2cc; end: 106b4c3cb; -[SCRegisterV2BaseView setupBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c2cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126d0a98;
  lVar1 = param_1 + _DAT_112758a3c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c00a2c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112758a40;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c160fc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e28658);
  func_0x000108b9a93c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b4c3cc;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b4c3cc; end: 106b4c5cf;  */

void FUN_106b4c3cc(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9eb60(*(undefined8 *)(param_2 + 0x20));
  (**(code **)(lVar5 + 0x10))(param_1 + 3.0,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b4c5d0; end: 106b4c70b; -[SCRegisterV2BaseView setupContinueButtonWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c5d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126d0aa0;
  _objc_retain(param_4);
  _objc_alloc();
  lVar2 = param_2 + _DAT_112758a3c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c052de0(puVar1,param_3,param_4,lVar2);
  _objc_release(param_4);
  lVar4 = (long)_DAT_112758a44;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar4),param_3,0);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c160fc0(uVar3,param_3,&PTR____CFConstantStringClassReference_110dae558);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_2 + lVar4),param_3,uVar3);
  _objc_release(uVar3);
  func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar4));
  func_0x00010bf4fba0(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b4c70c;
  puStack_58 = &UNK_11084fc28;
  lStack_50 = param_2;
  uStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar4),param_3,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b4c70c; end: 106b4c94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c70c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fac0(*(undefined8 *)(param_2 + 0x20));
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(-param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_2 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b4c950; end: 106b4cb1b; -[SCRegisterV2BaseView setupGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4c950(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar10 = (long)_DAT_112758a48;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c066fe0(param_1);
  lVar10 = *(long *)(param_1 + lVar10);
  dVar11 = 1.60807493534087e-314;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf20c00(*(undefined8 *)(lVar10 + 0x20));
  _CGRectGetWidth();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf4fac0(*(undefined8 *)(lVar10 + 0x20));
  func_0x00010c0df720(dVar11 * 2.0 + 48.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106b4cb1c; end: 106b4ccef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4cb1c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf4fac0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0df720(param_1 * 2.0 + 48.0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b4ccf0; end: 106b4cd63; -[SCRegisterV2BaseView horizontalInset] */

undefined8 FUN_106b4ccf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d4a0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d460();
    uVar3 = 0x4038000000000000;
    if ((int)puVar2 == 0) {
      uVar3 = 0x404a400000000000;
    }
  }
  else {
    uVar3 = 0x4051100000000000;
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4cd64; end: 106b4cddb; -[SCRegisterV2BaseView buttonHorizontalInset] */

undefined8 FUN_106b4cd64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d4a0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d460();
    uVar3 = 0x4049000000000000;
    if ((int)puVar2 == 0) {
      uVar3 = 0x4052c00000000000;
    }
  }
  else {
    uVar3 = 0x4058600000000000;
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4cddc; end: 106b4ce53; -[SCRegisterV2BaseView descHorizontalInset] */

undefined8 FUN_106b4cddc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d4a0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d460();
    uVar3 = 0x4046000000000000;
    if ((int)puVar2 == 0) {
      uVar3 = 0x4050800000000000;
    }
  }
  else {
    uVar3 = 0x4055733333333333;
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4ce54; end: 106b4ce5f; -[SCRegisterV2BaseView extraTopPadding] */

void FUN_106b4ce54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIScreen_1126aea10,PTR_s_sc_safeAreaInsets_112631098);
  return;
}



/* Entry: 106b4ce60; end: 106b4cee7; -[SCRegisterV2BaseView titleTopPadding] */

undefined8 FUN_106b4ce60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d280();
  uVar3 = 0x4022000000000000;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d2a0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010c14d2e0();
      uVar3 = 0x4052e66666666666;
      if ((int)puVar2 == 0) {
        uVar3 = 0x404f800000000000;
      }
    }
    else {
      uVar3 = 0x4045000000000000;
    }
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4cee8; end: 106b4cf6f; -[SCRegisterV2BaseView loginTitleTopPadding] */

undefined8 FUN_106b4cee8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d280();
  uVar3 = 0x4022000000000000;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d2a0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010c14d2e0();
      uVar3 = 0x405ca66666666666;
      if ((int)puVar2 == 0) {
        uVar3 = 0x4057e00000000000;
      }
    }
    else {
      uVar3 = 0x404fd55555555555;
    }
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4cf70; end: 106b4cff7; -[SCRegisterV2BaseView titleTopPaddingLarge] */

undefined8 FUN_106b4cf70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d280();
  uVar3 = 0x4022000000000000;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d2a0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010c14d2e0();
      uVar3 = 0x4063b00000000000;
      if ((int)puVar2 == 0) {
        uVar3 = 0x405f800000000000;
      }
    }
    else {
      uVar3 = 0x4051533333333334;
    }
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4cff8; end: 106b4cffb; -[SCRegisterV2BaseView titleBottomPadding] */

void FUN_106b4cff8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_descriptionBottomPadding_1125b9288);
  return;
}



/* Entry: 106b4cffc; end: 106b4d067; -[SCRegisterV2BaseView descriptionBottomPadding] */

undefined8 FUN_106b4cffc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d280();
  uVar3 = 0x4030000000000000;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c14d2e0();
    uVar3 = 0x4042000000000000;
    if ((int)puVar2 == 0) {
      uVar3 = 0x4038000000000000;
    }
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4d068; end: 106b4d0bf; -[SCRegisterV2BaseView continueButtonBottomPadding] */

undefined8 FUN_106b4d068(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d280();
  uVar3 = 0x4028000000000000;
  if ((int)puVar2 == 0) {
    uVar3 = 0x403c000000000000;
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106b4d0c0; end: 106b4d1f7; -[SCRegisterV2BaseView continueButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b4d0c0(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar4 = param_1;
  func_0x00010bfe4240(param_5);
  dVar6 = dVar4;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar5 = dVar6;
  func_0x00010bf255a0(param_5);
  dVar6 = dVar6 + dVar5 * -2.0;
  _objc_release(puVar1);
  lVar3 = (long)_DAT_112758a44;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bf20c00(uVar2);
  dVar5 = param_4;
  func_0x00010c23d5a0(uVar2);
  func_0x00010c2712a0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010c2712a0(*(undefined8 *)(param_5 + lVar3));
  dVar5 = param_3 + param_4 + dVar5 + 30.0;
  if ((dVar6 <= dVar5) && (param_1 = param_1 + dVar4 * -2.0, dVar6 = dVar5, param_1 < dVar5)) {
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c271420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(uVar2);
    dVar6 = param_1;
  }
  return dVar6;
}



/* Entry: 106b4d1f8; end: 106b4d1ff; -[SCRegisterV2BaseView isInputIncomplete] */

undefined8 FUN_106b4d1f8(void)

{
  return 0;
}



/* Entry: 106b4d200; end: 106b4d203; -[SCRegisterV2BaseView showOrHideEnterButton] */

void FUN_106b4d200(void)

{
  return;
}



/* Entry: 106b4d204; end: 106b4d207; -[SCRegisterV2BaseView keyboardWillShow:] */

void FUN_106b4d204(void)

{
  return;
}



/* Entry: 106b4d208; end: 106b4d20b; -[SCRegisterV2BaseView keyboardWillHide:] */

void FUN_106b4d208(void)

{
  return;
}



/* Entry: 106b4d20c; end: 106b4d263; -[SCRegisterV2BaseView setActivityAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d20c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  func_0x00010bfe1980();
  lVar1 = (long)_DAT_112758a44;
  func_0x00010c1ae0a0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c162d80(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c19b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFieldsEnabled__112644898,param_3 ^ 1);
  return;
}



/* Entry: 106b4d264; end: 106b4d267; -[SCRegisterV2BaseView setFieldsEnabled:] */

void FUN_106b4d264(void)

{
  return;
}



/* Entry: 106b4d268; end: 106b4d277; -[SCRegisterV2BaseView hideBackButtonWithAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758a40),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 106b4d278; end: 106b4d297; -[SCRegisterV2BaseView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d278(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112758a3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b4d298; end: 106b4d2ab; -[SCRegisterV2BaseView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d298(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112758a3c,param_3);
  return;
}



/* Entry: 106b4d2ac; end: 106b4d2bb; -[SCRegisterV2BaseView backButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b4d2ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a40);
}



/* Entry: 106b4d2bc; end: 106b4d2fb; -[SCRegisterV2BaseView setBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4d2fc; end: 106b4d30b; -[SCRegisterV2BaseView continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b4d2fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a44);
}



/* Entry: 106b4d30c; end: 106b4d34b; -[SCRegisterV2BaseView setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d30c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4d34c; end: 106b4d35b; -[SCRegisterV2BaseView gradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b4d34c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a48);
}



/* Entry: 106b4d35c; end: 106b4d39b; -[SCRegisterV2BaseView setGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a48;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4d39c; end: 106b4d3f7; -[SCRegisterV2BaseView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d39c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758a48,0);
  _objc_storeStrong(param_1 + _DAT_112758a44,0);
  _objc_storeStrong(param_1 + _DAT_112758a40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758a3c);
  return;
}



/* Entry: 106b4d3f8; end: 106b4d5ef; -[SCRegisterV2EnterButton initWithTitle:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b4d3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f50d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758a50),param_4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c216260(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b20(0x3ff0000000000000);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    func_0x00010c1ae0a0(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4038000000000000);
    _objc_release(puVar4);
    func_0x00010befbd60(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b4d5f0; end: 106b4d623; -[SCRegisterV2EnterButton continueButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d5f0(long param_1)

{
  param_1 = param_1 + _DAT_112758a50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4fae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4d624; end: 106b4d663; -[SCRegisterV2EnterButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758a54);
  *(undefined8 *)(param_1 + _DAT_112758a54) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundColor_112592848);
  return;
}



/* Entry: 106b4d664; end: 106b4d6a3; -[SCRegisterV2EnterButton setInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d664(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112758a4c) = param_3;
  func_0x00010c195460();
  func_0x00010c21e900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundColor_112592848);
  return;
}



/* Entry: 106b4d6a4; end: 106b4d767; -[SCRegisterV2EnterButton _updateBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d6a4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c082800();
  if ((int)lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + _DAT_112758a54);
    _objc_retain(puVar2);
  }
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc0fe0();
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f50d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setBackgroundColor__112639330,puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 106b4d768; end: 106b4d97b; -[SCRegisterV2EnterButton indicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4d768(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_112758a58;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb60(puVar1,param_2,puVar2,1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106b4d864;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106b4d97c; end: 106b4da5f; -[SCRegisterV2EnterButton setActivityIndicatorHidden:alignment:] */

void FUN_106b4d97c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bfed500();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfed500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfed500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216380(param_1,param_2,puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b4da60; end: 106b4da6f; -[SCRegisterV2EnterButton interactionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b4da60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112758a4c);
}



/* Entry: 106b4da70; end: 106b4daaf; -[SCRegisterV2EnterButton setIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4da70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4dab0; end: 106b4dafb; -[SCRegisterV2EnterButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4dab0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758a58,0);
  _objc_storeStrong(param_1 + _DAT_112758a54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758a50);
  return;
}



/* Entry: 106b4dafc; end: 106b4e27f; -[SCRecoverPasswordEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4dafc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b4e280;
  puStack_90 = &UNK_1109622f8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112758a5c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x000106b7ffa0();
  func_0x00010bf1f440();
  puVar5 = PTR_PTR_1126d0aa8;
  _objc_alloc();
  lVar24 = (long)_DAT_112758a60;
  lVar3 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112758a64;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112758a6c;
  _objc_loadWeakRetained(lVar9);
  lVar25 = (long)_DAT_112758a80;
  lVar10 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_112758a84;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_112758a88;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf09820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc4040();
  lVar28 = param_1 + _DAT_112758a8c;
  _objc_loadWeakRetained();
  lVar13 = lVar28;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033ca0();
  _objc_release(lVar13);
  _objc_release(lVar28);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar27);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar14 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  lVar27 = (long)_DAT_112758a90;
  lVar3 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar7;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_112758a94;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010c083f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar3);
  puVar15 = PTR_PTR_1126d0ab0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112758a98;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112758a9c;
  _objc_loadWeakRetained();
  lVar16 = lVar7;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112758aa0;
  _objc_loadWeakRetained();
  lVar17 = lVar9;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112758aa4;
  _objc_loadWeakRetained();
  lVar18 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar19 = lVar27;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112758aa8;
  _objc_loadWeakRetained();
  lVar20 = lVar11;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112758aac;
  _objc_loadWeakRetained();
  lVar21 = lVar28;
  func_0x00010bf680a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112758ab0;
  _objc_loadWeakRetained();
  lVar22 = lVar6;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3ce0();
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(lVar28);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar27);
  _objc_release(lVar18);
  _objc_release(lVar10);
  _objc_release(lVar17);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar3);
  puVar23 = PTR_PTR_1126d0ab8;
  _objc_alloc();
  lVar3 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar24);
  lVar10 = lVar24;
  func_0x00010c294660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc4040(param_1);
  lVar7 = param_1 + _DAT_112758ab4;
  _objc_loadWeakRetained(lVar7);
  lVar27 = lVar7;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar11 = lVar25;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040760();
  lVar28 = (long)_DAT_112758ab8;
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar23;
  _objc_release(uVar26);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar27);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar3);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar15);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106b4e280; end: 106b4e2ff;  */

void FUN_106b4e280(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be87d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106b4e300; end: 106b4e553; -[SCRecoverPasswordEntryPoint _recoverPasswordPhoneService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4e300(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b4e554;
  puStack_90 = &UNK_110962358;
  puVar1 = PTR_PTR_1126ae720;
  lStack_88 = param_1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0ac0;
  _objc_alloc(PTR_PTR_1126d0ac0);
  lVar3 = param_1 + _DAT_112758abc;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112758ac0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112758ac4;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112758ac8;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112758a80;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010bfe6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bfeff40(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b4e554; end: 106b4e55f;  */

void FUN_106b4e554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed1210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__unifiedGrpcJanusAccountRecovery_112591e28);
  return;
}



/* Entry: 106b4e560; end: 106b4e597;  */

long FUN_106b4e560(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebc6c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106b4e598; end: 106b4e6df; -[SCRecoverPasswordEntryPoint _recoverPasswordLoginCodeService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4e598(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010be87d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0ac8;
  _objc_alloc(PTR_PTR_1126d0ac8);
  func_0x00010c035c00();
  puVar3 = PTR_PTR_1126d0ad0;
  _objc_alloc(PTR_PTR_1126d0ad0);
  lVar4 = param_1 + _DAT_112758acc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c08d700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112758ab4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112758a80;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027a40(puVar3,param_2,lVar5,puVar2,lVar7,lVar8,&PTR___NSConcreteGlobalBlock_1109623a8
                     );
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b4e6e0; end: 106b4e6e3;  */

void FUN_106b4e6e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b4e6e4; end: 106b4e75b; -[SCRecoverPasswordEntryPoint _accountRecoveryViaSignIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b4e6e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112758ad0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf70760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa2380();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 106b4e75c; end: 106b4e903; -[SCRecoverPasswordEntryPoint _unifiedGrpcJanusAccountRecoveryService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4e75c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112758ad4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010c0f98e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar4,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar4,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112758ad8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010bfcfa00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126d0ad8;
  _objc_alloc(PTR_PTR_1126d0ad8);
  func_0x00010c058f80();
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106b4e904; end: 106b4ea2b; -[SCRecoverPasswordEntryPoint _skipDeviceCheckToken] */

byte FUN_106b4e904(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (lRam00000001136c6a18 != -1) {
    func_0x00010002a2fc(0x1136c6a18,&PTR___NSConcreteGlobalBlock_1109623c8);
  }
  if ((bRam00000001136c6a09 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106b4e9c4;
    puStack_30 = &UNK_110842e18;
    bVar1 = bRam00000001136c6a08;
    if (lRam00000001136c6a10 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x1136c6a10,&puStack_48);
      bVar1 = bRam00000001136c6a08;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 106b4ea2c; end: 106b4ec53; -[SCRecoverPasswordEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4ea2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758a7c,0);
  _objc_storeStrong(param_1 + _DAT_112758adc,0);
  _objc_storeStrong(param_1 + _DAT_112758a74,0);
  _objc_storeStrong(param_1 + _DAT_112758a70,0);
  _objc_destroyWeak(param_1 + _DAT_112758a6c);
  _objc_storeStrong(param_1 + _DAT_112758a68,0);
  _objc_storeStrong(param_1 + _DAT_112758a78,0);
  _objc_destroyWeak(param_1 + _DAT_112758ad0);
  _objc_destroyWeak(param_1 + _DAT_112758a84);
  _objc_destroyWeak(param_1 + _DAT_112758a88);
  _objc_destroyWeak(param_1 + _DAT_112758ac8);
  _objc_destroyWeak(param_1 + _DAT_112758ac4);
  _objc_destroyWeak(param_1 + _DAT_112758ac0);
  _objc_destroyWeak(param_1 + _DAT_112758ad8);
  _objc_destroyWeak(param_1 + _DAT_112758ad4);
  _objc_destroyWeak(param_1 + _DAT_112758ab4);
  _objc_destroyWeak(param_1 + _DAT_112758acc);
  _objc_destroyWeak(param_1 + _DAT_112758a5c);
  _objc_destroyWeak(param_1 + _DAT_112758a8c);
  _objc_destroyWeak(param_1 + _DAT_112758aa0);
  _objc_destroyWeak(param_1 + _DAT_112758abc);
  _objc_destroyWeak(param_1 + _DAT_112758ab0);
  _objc_destroyWeak(param_1 + _DAT_112758a94);
  _objc_destroyWeak(param_1 + _DAT_112758a9c);
  _objc_destroyWeak(param_1 + _DAT_112758aac);
  _objc_destroyWeak(param_1 + _DAT_112758aa8);
  _objc_destroyWeak(param_1 + _DAT_112758a90);
  _objc_destroyWeak(param_1 + _DAT_112758aa4);
  _objc_destroyWeak(param_1 + _DAT_112758a98);
  _objc_destroyWeak(param_1 + _DAT_112758a60);
  _objc_destroyWeak(param_1 + _DAT_112758a80);
  _objc_destroyWeak(param_1 + _DAT_112758a64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758ab8,0);
  return;
}



/* Entry: 106b4ec54; end: 106b4ed63; -[SCChooseNewPasswordBusinessLogic initWithNewPasswordChooser:recoverPasswordLogger:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b4ec54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f50e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112758ae0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758ae4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758ae8),param_5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758aec) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758af0);
    *(undefined ***)((long)puVar1 + (long)_DAT_112758af0) =
         &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758af4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112758af4) =
         &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b4ed64; end: 106b4edc3; -[SCChooseNewPasswordBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4ed64(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f50e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  lVar1 = (long)_DAT_112758ae4;
  func_0x00010c0ae4a0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c0ae4c0(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 106b4edc4; end: 106b4ee9f; -[SCChooseNewPasswordBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4edc4(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126d0ae0;
  _objc_alloc(PTR_PTR_1126d0ae0);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112758af0);
  bVar1 = *(byte *)(param_1 + _DAT_112758aec);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112758af4);
  lVar4 = param_1;
  func_0x00010be70aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112758af8);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112758afc);
  func_0x00010bdd9980();
  func_0x00010c0344a0(puVar3,param_2,uVar5,bVar1 ^ 1,uVar6,bVar1,lVar4,uVar7,uVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b4eea0; end: 106b4f113; -[SCChooseNewPasswordBusinessLogic _passwordStrengthRating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106b4eea0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_112758af4);
  func_0x00010c08fa60();
  puVar6 = (undefined *)0x0;
  if (puVar1 == (undefined *)0x0) {
    lVar5 = *(long *)(param_1 + _DAT_112758b04);
    if (lVar5 < 3) {
      if (lVar5 == 1) {
        puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar1 = puVar6;
        func_0x000106b66ae0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar5 != 2) goto LAB_106b4f0e0;
        puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar1 = puVar6;
        func_0x000106b66af8();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar5 == 3) {
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      puVar1 = puVar6;
      func_0x000106b66b10();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar5 != 4) goto LAB_106b4f0e0;
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      puVar1 = puVar6;
      func_0x000106b66b10();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
LAB_106b4f0e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  if (puVar1[_DAT_112758aec] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be70950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 106b4f114; end: 106b4f133; -[SCChooseNewPasswordBusinessLogic _canChoosePassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b4f114(long param_1)

{
  if (*(char *)(param_1 + _DAT_112758aec) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be70950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__passwordConfirmationMatches_112579bf0);
    return param_1;
  }
  return 0;
}



/* Entry: 106b4f134; end: 106b4f14f; -[SCChooseNewPasswordBusinessLogic _passwordConfirmationMatches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758af0),PTR_s_isEqualToString__1125fa240,
             *(undefined8 *)(param_1 + _DAT_112758af4));
  return;
}



/* Entry: 106b4f150; end: 106b4f213; -[SCChooseNewPasswordBusinessLogic handleAction:] */

void FUN_106b4f150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  pcStack_28 = FUN_106b4f214;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106b4f300;
  puStack_48 = &UNK_1108450c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b4f40c;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106b4f414;
  puStack_98 = &UNK_110842e18;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106b4f44c;
  puStack_c0 = &UNK_110842e18;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c1020(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}



/* Entry: 106b4f214; end: 106b4f40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f214(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(lVar2 + _DAT_112758afc) & 1) == 0) &&
     ((*(byte *)(lVar2 + _DAT_112758b00) & 1) == 0)) {
    *(undefined1 *)(lVar2 + _DAT_112758aec) = 0;
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = (long)_DAT_112758af0;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + lVar3);
    *(undefined8 *)(lVar2 + lVar3) = param_2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758af4);
    *(undefined ***)(*(long *)(param_1 + 0x20) + (long)_DAT_112758af4) =
         &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758b04) = 0;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758af8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758af8) = 0;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b4f40c; end: 106b4f413;  */

void FUN_106b4f40c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdddfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkPasswordStrength_112555190);
  return;
}



/* Entry: 106b4f414; end: 106b4f483;  */

void FUN_106b4f414(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd9980();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__chooseNewPassword_112555438);
    return;
  }
  return;
}



/* Entry: 106b4f484; end: 106b4f5e3; -[SCChooseNewPasswordBusinessLogic _checkPasswordStrength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f484(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c0ae420(*(undefined8 *)(param_1 + _DAT_112758ae4));
  if (*(char *)(param_1 + _DAT_112758aec) == '\x01') {
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112758afc) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b4f5e4;
  puStack_50 = &UNK_1109623e8;
  _objc_copyWeak(auStack_40,auStack_38);
  ppuVar2 = &puStack_68;
  lStack_48 = param_1;
  _objc_retainBlock(ppuVar2);
  func_0x00010bf38280(*(undefined8 *)(param_1 + _DAT_112758ae0));
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b4f5e4; end: 106b4f6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f5e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106b4f6e0;
  if (param_2 == 2) {
    *(undefined1 *)(lVar1 + _DAT_112758aec) = 1;
LAB_106b4f6a8:
    func_0x00010c0ae440(*(undefined8 *)(lVar1 + _DAT_112758ae4));
  }
  else {
    if (param_2 == 1) {
      lVar3 = (long)_DAT_112758af8;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(lVar1 + lVar3);
      *(undefined8 *)(lVar1 + lVar3) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)(lVar1 + _DAT_112758b04) = param_3;
      goto LAB_106b4f6a8;
    }
    if (param_2 == 0) {
      *(undefined1 *)(lVar1 + _DAT_112758aec) = 1;
      *(undefined8 *)(lVar1 + _DAT_112758b04) = param_3;
      func_0x00010c0ae460(*(undefined8 *)(lVar1 + _DAT_112758ae4));
    }
  }
  *(undefined1 *)(lVar1 + _DAT_112758afc) = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
LAB_106b4f6e0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b4f700; end: 106b4f80f; -[SCChooseNewPasswordBusinessLogic _chooseNewPassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f700(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar2 = &puStack_60;
  func_0x00010c0ae3c0(*(undefined8 *)(param_1 + _DAT_112758ae4));
  *(undefined1 *)(param_1 + _DAT_112758b00) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b4f810;
  puStack_48 = &UNK_110870850;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010bf39060(*(undefined8 *)(param_1 + _DAT_112758ae0));
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b4f810; end: 106b4f967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f810(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106b4f94c;
  if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x00010c0ae400(*(undefined8 *)(param_1 + _DAT_112758ae4));
      lVar2 = param_1 + _DAT_112758ae8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf390c0();
      _objc_release(lVar2);
      goto LAB_106b4f94c;
    }
    if (param_2 != 1) goto LAB_106b4f94c;
    *(undefined1 *)(param_1 + _DAT_112758b00) = 0;
    lVar2 = (long)_DAT_112758af8;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
LAB_106b4f918:
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
  }
  else {
    if (param_2 == 2) {
      *(undefined1 *)(param_1 + _DAT_112758b00) = 0;
      lVar2 = param_1;
      func_0x000106b66b40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112758af8);
      *(long *)(param_1 + _DAT_112758af8) = lVar2;
      goto LAB_106b4f918;
    }
    if (param_2 != 3) goto LAB_106b4f94c;
    lVar2 = param_1 + _DAT_112758ae8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf390a0();
  }
  _objc_release(lVar2);
  func_0x00010c0ae3e0(*(undefined8 *)(param_1 + _DAT_112758ae4));
LAB_106b4f94c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b4f968; end: 106b4f9e3; -[SCChooseNewPasswordBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4f968(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758ae4,0);
  _objc_storeStrong(param_1 + _DAT_112758af8,0);
  _objc_storeStrong(param_1 + _DAT_112758af4,0);
  _objc_storeStrong(param_1 + _DAT_112758af0,0);
  _objc_destroyWeak(param_1 + _DAT_112758ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758ae0,0);
  return;
}



/* Entry: 106b4f9e4; end: 106b4facb; -[SCChooseNewPasswordViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b4f9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f50e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758b08);
    *(undefined **)((long)puVar1 + (long)_DAT_112758b08) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758b0c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758b10;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b4facc; end: 106b4fad3; -[SCChooseNewPasswordViewController pageViewName] */

undefined8 FUN_106b4facc(void)

{
  return 0x2c;
}



/* Entry: 106b4fad4; end: 106b4fb33; -[SCChooseNewPasswordViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4fad4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f50e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b10);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 106b4fb34; end: 106b4fbe3; -[SCChooseNewPasswordViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4fb34(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b0c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106b4fbe4; end: 106b4fc2b;  */

void FUN_106b4fbe4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4fc2c; end: 106b4ff63; -[SCChooseNewPasswordViewController _renderViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4fc2c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c079ae0();
  iVar1 = _DAT_112758b14;
  if (((int)uVar2 == 0) &&
     (uVar2 = param_3, func_0x00010c079ac0(), iVar1 = _DAT_112758b1c, (int)uVar2 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112758b18);
    *(undefined8 *)(param_1 + _DAT_112758b18) = 0;
  }
  else {
    lVar6 = (long)_DAT_112758b18;
    uVar5 = *(undefined8 *)(param_1 + iVar1);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar5;
  }
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010c0f5180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112758b14;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0f5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c079ae0();
  if ((int)uVar2 != 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar6));
  }
  uVar2 = param_3;
  func_0x00010c0f5260();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112758b1c;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0f5260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c079ac0();
  if ((int)uVar2 != 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar6));
  }
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112758b20;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,uVar2 == 0);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f55e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112758b24;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f55e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  }
  else {
    uVar4 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,uVar4 != 0);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c06e7a0();
  if ((int)uVar2 == 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112758b28));
  }
  else {
    func_0x00010c24dbc0();
  }
  lVar6 = (long)_DAT_112758b2c;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf2c6a0(param_3);
  func_0x00010c21e900(uVar3,param_2,uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06e8a0(param_3);
  func_0x00010c162d80(uVar3,param_2,(uint)uVar2 ^ 1,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b4ff64; end: 106b4ffaf; -[SCChooseNewPasswordViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4ff64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b0c);
  puVar1 = PTR_PTR_1126d0ae8;
  func_0x00010bf39040(PTR_PTR_1126d0ae8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b4ffb0; end: 106b4fffb; -[SCChooseNewPasswordViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4ffb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b0c);
  puVar1 = PTR_PTR_1126d0ae8;
  func_0x00010bf9b400(PTR_PTR_1126d0ae8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b4fffc; end: 106b500f3; -[SCChooseNewPasswordViewController textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4fffc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d0ae8;
  lVar1 = param_3;
  if (param_3 == *(long *)(param_1 + _DAT_112758b14)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112758b0c);
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288620(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != *(long *)(param_1 + _DAT_112758b1c)) goto LAB_106b500e0;
    uVar3 = *(undefined8 *)(param_1 + _DAT_112758b0c);
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288600(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
LAB_106b500e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b500f4; end: 106b501b3; -[SCChooseNewPasswordViewController textViewShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b500f4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0ae8;
  if (param_3 == *(long *)(param_1 + _DAT_112758b14)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112758b0c);
    func_0x00010bf38340(PTR_PTR_1126d0ae8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != *(long *)(param_1 + _DAT_112758b1c)) goto LAB_106b50198;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112758b0c);
    func_0x00010bf39040(PTR_PTR_1126d0ae8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
LAB_106b50198:
  _objc_release(param_3);
  return 0;
}



/* Entry: 106b501b4; end: 106b5025b; -[SCChooseNewPasswordViewController textViewShouldBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b501b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == *(long *)(param_1 + _DAT_112758b18)) ||
     (param_3 != *(long *)(param_1 + _DAT_112758b1c))) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112758b0c);
    puVar1 = PTR_PTR_1126d0ae8;
    func_0x00010bf38340(PTR_PTR_1126d0ae8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106b5025c; end: 106b502b3; -[SCChooseNewPasswordViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5025c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar3 = (long)_DAT_112758b2c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106b502b4; end: 106b51d6f; -[SCChooseNewPasswordViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b502b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_198 = PTR_PTR_1126f50e8;
  lStack_1a0 = param_1;
  _objc_msgSendSuper2(&lStack_1a0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  dVar31 = *(double *)PTR__CGRectZero_110347608;
  uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  dVar30 = dVar31;
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x000106b66a98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  lVar29 = (long)_DAT_112758b08;
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf6a7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(uVar3);
  func_0x00010c213040(puVar1);
  func_0x00010c1cfce0(puVar1);
  lVar28 = (long)_DAT_112758b2c;
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar7 = puVar4;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_b8 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar11 = puVar8;
  func_0x00010bf493c0(-dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_b0 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a7e0(*(undefined8 *)(param_1 + lVar29));
  puVar14 = puVar12;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  dVar30 = dVar31;
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar2);
  func_0x000108b9a96c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf69280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar4);
  _objc_release(uVar3);
  func_0x00010c213040(puVar4);
  func_0x00010c1cfce0(puVar4);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar26 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar27 = puVar26;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  puStack_d0 = puVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar14 = puVar15;
  func_0x00010bf493c0(-dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  puStack_c8 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar15);
  _objc_release(puVar27);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(puVar26);
  puVar16 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar16);
  _objc_release();
  func_0x000106b66ab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar16);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar16);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf6a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar16);
  _objc_release(uVar3);
  func_0x00010c213040(puVar16);
  dVar30 = 1.0;
  func_0x00010c1b6b20(puVar16);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar16);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar14 = puVar15;
  func_0x00010bf493c0(dVar30 + 2.8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar16;
  puStack_e0 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf1ff80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(param_1 + lVar29));
  puVar8 = puVar12;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar15);
  puVar17 = PTR_PTR_1126af260;
  _objc_alloc();
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758b14);
  *(undefined **)(param_1 + _DAT_112758b14) = puVar17;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010c1f9a00(puVar17);
  func_0x00010c18b5e0(puVar17);
  puVar2 = puVar17;
  func_0x00010c160fc0();
  func_0x000106b66ab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar17);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar17);
  _objc_release(puVar2);
  func_0x00010c12ea40(puVar17);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar17);
  puVar2 = puVar17;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar17;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 3.0;
  puVar7 = puVar11;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar17;
  puStack_108 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar20 = puVar14;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar17;
  puStack_100 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar23 = puVar21;
  func_0x00010bf493c0(-dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar17;
  puStack_f8 = puVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar17;
  puStack_f0 = puVar25;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar27;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(puVar14);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar12);
  puVar18 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar18);
  _objc_release();
  func_0x000106b66ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar18);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar18);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf6a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar18);
  _objc_release(uVar3);
  func_0x00010c213040(puVar18);
  dVar30 = 1.0;
  func_0x00010c1b6b20(puVar18);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar18);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar11 = puVar15;
  func_0x00010bf493c0(dVar30 + 2.8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar18;
  puStack_118 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(param_1 + lVar29));
  puVar8 = puVar12;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar15);
  puVar19 = PTR_PTR_1126af260;
  _objc_alloc();
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758b1c);
  *(undefined **)(param_1 + _DAT_112758b1c) = puVar19;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010c1f9a00(puVar19);
  func_0x00010c18b5e0(puVar19);
  puVar2 = puVar19;
  func_0x00010c160fc0();
  func_0x000106b66ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar19);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar19);
  _objc_release(puVar2);
  func_0x00010c12ea40(puVar19);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar19);
  puVar2 = puVar19;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar20 = puVar19;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 3.0;
  puVar22 = puVar21;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar19;
  puStack_140 = puVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar25 = puVar24;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar19;
  puStack_138 = puVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar27 = puVar26;
  func_0x00010bf493c0(-dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar19;
  puStack_130 = puVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar19;
  puStack_128 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar11;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar23);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar27);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puVar7);
  _objc_release(puVar21);
  _objc_release(puVar20);
  puVar22 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(dVar31,uVar32,uVar33,uVar34);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758b20);
  *(undefined **)(param_1 + _DAT_112758b20) = puVar22;
  _objc_retain();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar22);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf694c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar22);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf694e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar22);
  _objc_release(uVar3);
  func_0x00010c213040(puVar22);
  func_0x00010c1cfce0(puVar22);
  func_0x00010c1a7f60(puVar22);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar22);
  dVar30 = 5.67605380487384e-315;
  func_0x00010c181cc0(puVar22);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar8 = puVar12;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar22;
  puStack_160 = puVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar7 = puVar11;
  func_0x00010bf493c0(-dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  puStack_158 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar22;
  puStack_150 = puVar26;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_148 = puVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar7);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(puVar12);
  puVar25 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758b24);
  *(undefined **)(param_1 + _DAT_112758b24) = puVar25;
  _objc_retain();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar25);
  _objc_release(puVar2);
  func_0x00010c213040(puVar25);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf694e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar25);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar25);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar12 = puVar14;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar25;
  puStack_178 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar11;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  puStack_170 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_168 = puVar27;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar27);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(puVar26);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar14);
  puVar24 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc();
  func_0x00010bff0f20();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758b28);
  *(undefined **)(param_1 + _DAT_112758b28) = puVar24;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010c1a8560(puVar24);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar24);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar26 = puVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar29));
  puVar27 = puVar26;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar24;
  puStack_190 = puVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar15;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar24;
  puStack_188 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4b2a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_180 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar27);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar26);
  uVar13 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar13);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf13860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar22);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar3);
  func_0x00010bec1580(param_1);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_112758b28,0);
  _objc_storeStrong(puVar1 + _DAT_112758b24,0);
  _objc_storeStrong(puVar1 + _DAT_112758b20,0);
  _objc_storeStrong(puVar1 + _DAT_112758b1c,0);
  _objc_storeStrong(puVar1 + _DAT_112758b14,0);
  _objc_storeStrong(puVar1 + _DAT_112758b18,0);
  _objc_storeStrong(puVar1 + _DAT_112758b2c,0);
  _objc_storeStrong(puVar1 + _DAT_112758b08,0);
  _objc_storeStrong(puVar1 + _DAT_112758b10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_112758b0c,0);
  return;
}



/* Entry: 106b51d70; end: 106b51e2f; -[SCChooseNewPasswordViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b51d70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758b28,0);
  _objc_storeStrong(param_1 + _DAT_112758b24,0);
  _objc_storeStrong(param_1 + _DAT_112758b20,0);
  _objc_storeStrong(param_1 + _DAT_112758b1c,0);
  _objc_storeStrong(param_1 + _DAT_112758b14,0);
  _objc_storeStrong(param_1 + _DAT_112758b18,0);
  _objc_storeStrong(param_1 + _DAT_112758b2c,0);
  _objc_storeStrong(param_1 + _DAT_112758b08,0);
  _objc_storeStrong(param_1 + _DAT_112758b10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758b0c,0);
  return;
}



/* Entry: 106b51e30; end: 106b51f17; -[SCPasswordResetSuccessViewController initWithDelegate:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b51e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f50f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758b30),param_3);
    lVar4 = (long)_DAT_112758b34;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758b38);
    *(undefined **)((long)puVar1 + (long)_DAT_112758b38) = puVar3;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b51f18; end: 106b51f1f; -[SCPasswordResetSuccessViewController pageViewName] */

undefined8 FUN_106b51f18(void)

{
  return 0xbc;
}



/* Entry: 106b51f20; end: 106b51f7f; -[SCPasswordResetSuccessViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b51f20(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f50f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b34);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}


