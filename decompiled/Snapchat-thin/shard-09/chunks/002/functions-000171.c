/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b24870; end: 106b248eb;  */

undefined * FUN_106b24870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c69a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e73fd8,
                        &UNK_10dde6788,&UNK_10dde67c8,4,FUN_106b248ec,0);
    do {
      if (puRam00000001136c69a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c69a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c69a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c69a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c69a0;
}



/* Entry: 106b248ec; end: 106b248f7;  */

bool FUN_106b248ec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106b248f8; end: 106b2495f; +[RevokePasskeyRequest descriptor] */

void FUN_106b248f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c69a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17eb0,
                        &PTR____CFConstantStringClassReference_110e73ff8,&PTR_DAT_113172c68,
                        &PTR_DAT_113172ce0,3,0x20,0x1c);
    puRam00000001136c69a8 = puVar1;
  }
  return;
}



/* Entry: 106b24960; end: 106b249c7; +[RevokePasskeyResponse descriptor] */

void FUN_106b24960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c69b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17f00,
                        &PTR____CFConstantStringClassReference_110e74018,&PTR_DAT_113172c68,
                        &PTR_s_result_113172c80,1,0x10,0x1c);
    puRam00000001136c69b0 = puVar1;
  }
  return;
}



/* Entry: 106b249c8; end: 106b24a2f; +[RevokePasskeyResult descriptor] */

void FUN_106b249c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c69b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17f50,
                        &PTR____CFConstantStringClassReference_110e74038,&PTR_DAT_113172c68,
                        &PTR_s_statusCode_113172ca0,2,0x10,0x1c);
    puRam00000001136c69b8 = puVar1;
  }
  return;
}



/* Entry: 106b24a30; end: 106b24a97; +[DeviceId descriptor] */

void FUN_106b24a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c69c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17ff0,
                        &PTR____CFConstantStringClassReference_110e74058,&PTR_DAT_113172d40,
                        &PTR_DAT_113172d58,2,0x18,0x1c);
    puRam00000001136c69c0 = puVar1;
  }
  return;
}



/* Entry: 106b24a98; end: 106b24dc3; -[SCLegacyBirthdaySettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b24a98(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  uVar1 = param_1;
  FUN_106b24dc4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x000106b24de8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x000106b24e0c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1a840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010bf1a7c0();
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar4 != 0) {
        func_0x00010c1704c0(uVar3,param_2,1);
      }
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  puVar5 = PTR_PTR_1126b4378;
  _objc_alloc();
  uVar1 = param_1;
  func_0x000106b24e0c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000106b24e0c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000106b24e0c();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + (long)_DAT_112758644;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar15;
  func_0x00010c121fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000106b24de8();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_106b24dc4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + (long)_DAT_112758638;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7940(puVar5,param_2,uVar2,uVar4,uVar7,lVar8,uVar10,uVar12,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_106b24dc4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106b24dc4; end: 106b24e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b24dc4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275863c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b24e30; end: 106b24e8b; -[SCLegacyBirthdaySettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b24e30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758648);
  _objc_destroyWeak(param_1 + _DAT_112758644);
  _objc_destroyWeak(param_1 + _DAT_112758640);
  _objc_destroyWeak(param_1 + _DAT_112758638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275863c);
  return;
}



/* Entry: 106b24e8c; end: 106b24ec3; -[BirthdaySettingsViewController initWithBirthdayProvider:birthdayMutator:registrationInfoProvider:reauthenticationService:featureSettingsService:delegate:circumstanceEngine:] */

void FUN_106b24e8c(void)

{
  func_0x00010bff7900();
  return;
}



/* Entry: 106b24ec4; end: 106b24ef3; -[BirthdaySettingsViewController initWithBirthdayProvider:birthdayMutator:registrationInfoProvider:auraServices:auraSettingScopeExposer:reauthenticationService:featureSettingsService:delegate:circumstanceEngine:] */

void FUN_106b24ec4(void)

{
  func_0x00010bff7920();
  return;
}



/* Entry: 106b24ef4; end: 106b251a7; -[BirthdaySettingsViewController initWithBirthdayProvider:birthdayMutator:registrationInfoProvider:auraServices:auraSettingScopeExposer:reauthenticationService:featureSettingsService:skipHandlingDismissal:delegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b24ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             long param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f5008;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11275864c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758650;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758654;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758658;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275865c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758660;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758664;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758668) = param_10;
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275866c,param_12);
    lVar4 = (long)_DAT_112758670;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(long *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = param_13;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010bf1f3c0(lVar4);
    }
    puVar3 = PTR_PTR_1126d09b8;
    _objc_alloc();
    func_0x00010c00f940();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758674);
    *(undefined **)((long)puVar1 + (long)_DAT_112758674) = puVar3;
    _objc_release(uVar2);
    _objc_release(lVar4);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b251a8; end: 106b251af; -[BirthdaySettingsViewController pageViewName] */

undefined8 FUN_106b251a8(void)

{
  return 0x19;
}



/* Entry: 106b251b0; end: 106b256a3; -[BirthdaySettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b251b0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f5008;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puStack_78 = PTR_PTR_1126f5008;
  puVar3 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_class_1125ac0b8);
  func_0x00010bf56720();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112758678;
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  *(ulong **)(param_1 + lVar14) = puVar3;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  lVar13 = (long)_DAT_112758650;
  lVar4 = *(long *)(param_1 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar14));
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e74098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74098,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar14));
    _objc_release(ppuVar5);
  }
  _objc_release(lVar12);
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar12 = (long)_DAT_11275867c;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar9);
  puVar1 = PTR__OBJC_CLASS___UIDatePicker_1126af760;
  _objc_alloc_init();
  uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112758680);
  *(undefined **)(param_1 + (long)_DAT_112758680) = puVar1;
  _objc_release(uVar9);
  func_0x00010bfee480(param_1);
  func_0x00010bfef140(param_1);
  func_0x00010bfee440(param_1);
  func_0x00010bfee680(param_1);
  func_0x00010c228740(param_1);
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1940(param_1);
  _objc_release(uVar9);
  _objc_release(uVar6);
  func_0x00010bee1960(param_1);
  func_0x00010be48e00(param_1);
  uVar2 = param_1;
  func_0x00010c06d340();
  if (((int)uVar2 != 0) && (uVar2 = param_1, func_0x00010c07ce40(), (uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x00010bf1a7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c25d3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12));
    _objc_release(uVar7);
    _objc_release(uVar2);
    func_0x00010c1a7f80(*(undefined8 *)(param_1 + (long)_DAT_112758684));
  }
  func_0x00010be58280(param_1);
  _objc_initWeak(auStack_88,param_1);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11275864c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106b256a4;
  puStack_98 = &UNK_1108531d0;
  _objc_copyWeak(auStack_90,auStack_88);
  uVar9 = uVar6;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112758688);
  *(undefined8 *)(param_1 + (long)_DAT_112758688) = uVar9;
  _objc_release(uVar10);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar1);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_88);
  uVar10 = uVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + (long)_DAT_11275868c);
  *(undefined8 *)(param_1 + (long)_DAT_11275868c) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 106b256a4; end: 106b256cf;  */

void FUN_106b256a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b256d0; end: 106b2573f;  */

void FUN_106b256d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee1940(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b25740; end: 106b257e3; -[BirthdaySettingsViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b25740(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5008;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758690);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b257e4; end: 106b2584f; -[BirthdaySettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b257e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5008;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_leftButtonPressedWithSkipHandlin_112601358,
                      *(undefined1 *)(param_1 + _DAT_112758668));
  param_1 = param_1 + _DAT_11275866c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1a8a0();
  _objc_release(param_1);
  return;
}



/* Entry: 106b25850; end: 106b262fb; -[BirthdaySettingsViewController setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b25850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long lVar58;
  long lVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  long lVar62;
  long lVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined *puVar67;
  undefined *puVar68;
  long lVar69;
  undefined8 uVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  undefined8 uVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  double dVar80;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  lVar77 = (long)_DAT_112758680;
  uVar1 = *(undefined8 *)(param_1 + lVar77);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar80 = 216.0;
  uVar76 = uVar1;
  func_0x00010bf493c0(0x406b000000000000,uVar1,param_2,lVar69);
  _objc_retainAutoreleasedReturnValue();
  lVar78 = (long)_DAT_112758694;
  uVar70 = *(undefined8 *)(param_1 + lVar78);
  *(undefined8 *)(param_1 + lVar78) = uVar76;
  _objc_release(uVar70);
  _objc_release(lVar69);
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar68 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar74 = (long)_DAT_112758678;
  lVar3 = *(long *)(param_1 + lVar74);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  lVar79 = lVar3;
  func_0x00010bf493c0(dVar80 + 16.0,lVar3,param_2,lVar69);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar74);
  lStack_138 = lVar79;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar76 = uVar4;
  func_0x00010bf49480(0x4040000000000000,uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar74);
  uStack_130 = uVar76;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf49520(0xc040000000000000,uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar71 = (long)_DAT_112758690;
  uVar10 = *(undefined8 *)(param_1 + lVar71);
  uStack_128 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar74);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar70 = uVar10;
  func_0x00010bf493c0(0x4030000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar71);
  uStack_120 = uVar70;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar74;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar71);
  uStack_118 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar71);
  uStack_110 = uVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar75 = (long)_DAT_11275867c;
  uVar21 = *(undefined8 *)(param_1 + lVar75);
  uStack_108 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar71);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar75);
  uStack_100 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar71);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar75);
  uStack_f8 = uVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar71);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar75);
  uStack_f0 = uVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar71);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493c0(0x4030000000000000,uVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  lVar72 = (long)_DAT_112758698;
  uVar33 = *(undefined8 *)(param_1 + lVar72);
  uStack_e8 = uVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar75);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493a0(uVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar72);
  uStack_e0 = uVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar36;
  func_0x00010bf493a0(uVar36,param_2,lVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar72);
  uStack_d8 = uVar39;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = lVar71;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x00010bf493a0(uVar40,param_2,lVar75);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar72);
  uStack_d0 = uVar41;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar72;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar42;
  func_0x00010bf493a0(uVar42,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = *(undefined8 *)(param_1 + lVar78);
  uVar45 = *(undefined8 *)(param_1 + lVar77);
  uStack_c8 = uVar44;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar78;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar45;
  func_0x00010bf493a0(uVar45,param_2,lVar46);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar77);
  uStack_b8 = uVar47;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar48;
  func_0x00010bf493a0(uVar48,param_2,lVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar77);
  uStack_b0 = uVar51;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar52;
  func_0x00010bf49420(0x406b000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar73 = (long)_DAT_112758684;
  uVar54 = *(undefined8 *)(param_1 + lVar73);
  uStack_a8 = uVar53;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = lVar55;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar54;
  func_0x00010bf493c0(0xc06b000000000000,uVar54,param_2,lVar77);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + lVar73);
  uStack_a0 = uVar56;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = lVar58;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar57;
  func_0x00010bf493a0(uVar57,param_2,lVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(param_1 + lVar73);
  uStack_98 = uVar60;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = lVar62;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = uVar61;
  func_0x00010bf493a0(uVar61,param_2,lVar63);
  _objc_retainAutoreleasedReturnValue();
  uVar65 = *(undefined8 *)(param_1 + lVar73);
  uStack_90 = uVar64;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = uVar65;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar67 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar66;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_138,0x17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar68,param_2,puVar67);
  _objc_release(puVar67);
  _objc_release(uVar66);
  _objc_release(uVar65);
  _objc_release(uVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(lVar77);
  _objc_release(lVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(lVar46);
  _objc_release(lVar78);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(lVar43);
  _objc_release(lVar72);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(lVar75);
  _objc_release(lVar71);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar74);
  _objc_release(uVar12);
  _objc_release(uVar70);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar76);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar79);
  _objc_release(lVar69);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar79 = (long)_DAT_11275867c;
  uVar76 = *(undefined8 *)(lVar3 + lVar79);
  puVar68 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar76,param_2,puVar68);
  _objc_release(puVar68);
  func_0x00010c160fc0(*(undefined8 *)(lVar3 + lVar79),param_2,
                      &PTR____CFConstantStringClassReference_110e740d8);
  lVar69 = *(long *)(lVar3 + _DAT_112758650);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar69;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar69);
  if (lVar2 != 0) {
    lVar69 = lVar2;
    func_0x00010c25d3e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar3 + lVar79),param_2,lVar69);
    _objc_release(lVar69);
  }
  puVar68 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar69 = (long)_DAT_112758690;
  uVar76 = *(undefined8 *)(lVar3 + lVar69);
  *(undefined **)(lVar3 + lVar69) = puVar68;
  _objc_release(uVar76);
  puVar68 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar3 + lVar69),param_2,puVar68);
  _objc_release(puVar68);
  puVar68 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar76 = *(undefined8 *)(lVar3 + lVar69);
  func_0x00010c08c0e0(uVar76);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar76);
  _objc_release(puVar68);
  uVar76 = *(undefined8 *)(lVar3 + lVar69);
  func_0x00010c08c0e0(uVar76);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar76);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar69),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar69),param_2,*(undefined8 *)(lVar3 + lVar79));
  lVar69 = lVar3;
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar69);
  puVar68 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(lVar3 + lVar79),param_2,puVar68);
  func_0x00010c21e900(*(undefined8 *)(lVar3 + lVar79),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar79),param_2,0);
  _objc_release(puVar68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b262fc; end: 106b2652b; -[BirthdaySettingsViewController initBirthdayTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b262fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11275867c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5),param_2,
                      &PTR____CFConstantStringClassReference_110e740d8);
  lVar2 = *(long *)(param_1 + _DAT_112758650);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010c25d3e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar2 = (long)_DAT_112758690;
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar2),param_2,*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106b2652c; end: 106b266b7; -[BirthdaySettingsViewController initParty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2652c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112758698;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c181f80(0xbff0000000000000,0,0,0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1974c0(0x4049000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1eeb20(*(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8,
                      *(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b266b8; end: 106b267af; -[BirthdaySettingsViewController partyCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b266b8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11275869c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b5550;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e740f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e740f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e74118;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74118,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010c17a3a0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c210a20(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
    if (2 < lRam00000001138466f0) {
      func_0x00010bf8f3e0(lVar4);
      lVar4 = *(long *)(param_1 + lVar5);
    }
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106b267b0; end: 106b2693f; -[BirthdaySettingsViewController astrologicalBirthdayCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b267b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  lVar6 = (long)_DAT_1127586a0;
  lVar4 = *(long *)(param_1 + lVar6);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126d09c0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11275865c;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf102e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c227fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf102e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106b26940;
    puStack_60 = &UNK_1108450c8;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    func_0x00010bf67160(uVar5,param_2,&puStack_78);
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c17a3a0(puVar1,param_2,param_1);
    if (2 < lRam00000001138466f0) {
      func_0x00010bf8f3e0(puVar1);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar5);
    _objc_release(puStack_58);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106b26940; end: 106b26a0b;  */

void FUN_106b26940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106b269dc;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 106b26a0c; end: 106b26b53; -[BirthdaySettingsViewController settingsSwitchTableViewCell:didToggleSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112758650);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be48e00(param_1);
  }
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275864c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  func_0x00010c0f8520(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106b26b54; end: 106b26bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26b54(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275864c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1704c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b26bbc; end: 106b26d13; -[BirthdaySettingsViewController initBirthdayPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26bbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112758680;
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3),param_2,param_1,PTR_s_dateDidChange_1125b6d70
                      ,0x1000);
  func_0x00010c189bc0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c288b80(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c0ce380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8220(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0c33c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3ac0(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfc4980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a40(*(undefined8 *)(param_1 + lVar3),param_2,lVar2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3),param_2,
                      &PTR____CFConstantStringClassReference_110dafe38);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  *(undefined1 *)(param_1 + _DAT_1127586a4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b26d14; end: 106b26d27; -[BirthdaySettingsViewController updatePreferredDatePickerStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758680),PTR_s_setPreferredDatePickerStyle__1126559e8,
             1);
  return;
}



/* Entry: 106b26d28; end: 106b26ec7; -[BirthdaySettingsViewController initContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26d28(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112758684;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
  ppuVar2 = &PTR____CFConstantStringClassReference_110e74158;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74158,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1837c0(param_1);
  _objc_release(ppuVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c1a7f80(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c1b5bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsWorking__11264b120,0);
  return;
}



/* Entry: 106b26ec8; end: 106b26f17; -[BirthdaySettingsViewController setContinueButtonTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758684;
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar2),param_2,param_3,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b26f18; end: 106b26f27; -[BirthdaySettingsViewController getTitle] */

void FUN_106b26f18(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74178;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74178,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b26f28; end: 106b26fa7; -[BirthdaySettingsViewController _layoutBirthdayPickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26f28(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_112758694));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b26fa8;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03420(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,0);
  return;
}



/* Entry: 106b26fa8; end: 106b26fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758680),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106b26fbc; end: 106b270ab; -[BirthdaySettingsViewController dateDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b26fbc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010bf1a7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + (long)_DAT_11275867c),param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c07ce40(param_1);
  func_0x00010c1a7f80(*(undefined8 *)(param_1 + (long)_DAT_112758684),param_2,uVar1,1);
  uVar1 = param_1;
  func_0x00010c06d340();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_1127586a4;
    if (*(char *)(param_1 + lVar3) == '\x01') {
      uVar1 = param_1;
      func_0x00010c0f4d20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210a80();
      _objc_release(uVar1);
      *(undefined1 *)(param_1 + lVar3) = 0;
    }
  }
  func_0x00010c0f4d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b270ac; end: 106b270bb; -[BirthdaySettingsViewController birthdayPickerDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b270ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758680),PTR_s_date_1125b6d20);
  return;
}



/* Entry: 106b270bc; end: 106b27133; -[BirthdaySettingsViewController setIsWorking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b270bc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758684;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar2),param_2,param_3 ^ 1);
  lVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(lVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c162d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setActivityIndicatorHidden_align_112636580,
             param_3 ^ 1,0);
  return;
}



/* Entry: 106b27134; end: 106b2718b; -[BirthdaySettingsViewController isBirthdaySet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b27134(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112758650);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 106b2718c; end: 106b2722b; -[BirthdaySettingsViewController isSameBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b2718c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112758650);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf1a7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf433a0(lVar3,param_2,param_1);
    bVar1 = lVar2 == 0;
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 106b2722c; end: 106b272af; -[BirthdaySettingsViewController _minimumAge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b2722c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758658);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c127a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  FUN_106b8ffec(uVar3);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 106b272b0; end: 106b272bb; -[BirthdaySettingsViewController getReportUnderThirteenUrl] */

undefined ** FUN_106b272b0(void)

{
  return &PTR____CFConstantStringClassReference_110e74198;
}



/* Entry: 106b272bc; end: 106b2733b; -[BirthdaySettingsViewController handleOverThirteen] */

void FUN_106b272bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06d340();
  if ((int)uVar1 != 0) {
    func_0x00010beb86c0(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBirthdayForOver13WithPass_1125929b0,0)
  ;
  return;
}



/* Entry: 106b2733c; end: 106b27347;  */

void FUN_106b2733c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateBirthdayForOver13WithPass_1125929b0,0);
  return;
}



/* Entry: 106b27348; end: 106b27397; -[BirthdaySettingsViewController _logScreenOpenTelemetryWithDateClamped:] */

void FUN_106b27348(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c26aca0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 != 0) && (func_0x00010c0abac0(param_1,param_2,0), param_3 != 0)) {
    func_0x00010c0abac0(param_1,param_2,10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b27398; end: 106b273eb; -[BirthdaySettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b27398(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c0abac0(*(undefined8 *)(param_1 + _DAT_112758674),param_2,1);
  puStack_28 = PTR_PTR_1126f5008;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b273ec; end: 106b276f7; -[BirthdaySettingsViewController _showConfirmationWithConfirmedActionHandler:] */

void FUN_106b273ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar9 = param_1;
  func_0x00010c26aca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e741b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e741b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bf1a7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c25d3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(ppuVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e741d8;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e741d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befe7e0();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(ppuVar1);
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c235c40(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  _objc_retain(puVar10);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c26aca0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(uVar8);
  lVar11 = *(long *)(param_3 + 0x28);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x10))(lVar11,uVar9,puVar10);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106b276f8; end: 106b2777b;  */

void FUN_106b276f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26aca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b2777c; end: 106b277c3;  */

void FUN_106b2777c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26aca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b5bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsWorking__11264b120,0);
  return;
}



/* Entry: 106b277c4; end: 106b278ef; -[BirthdaySettingsViewController _updateBirthdayForOver13WithPasswordVerified:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b277c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c1b5be0(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010c26aca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758654);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c283ce0(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b278f0; end: 106b27adb;  */

void FUN_106b278f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b27adc;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,param_1 + 0x20);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106b27b48;
  puStack_a8 = &UNK_110852b60;
  _objc_copyWeak(auStack_a0,param_1 + 0x20);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106b27bec;
  puStack_d0 = &UNK_110852b60;
  _objc_copyWeak(auStack_c8,param_1 + 0x20);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x106b27c90;
  puStack_f8 = &UNK_110852b60;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x106b27d34;
  puStack_120 = &UNK_110852b60;
  _objc_copyWeak(auStack_118,param_1 + 0x20);
  _objc_copyWeak(auStack_140,param_1 + 0x20);
  func_0x00010c0c0900(param_2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 106b27adc; end: 106b27b47;  */

void FUN_106b27adc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c26aca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b27b48; end: 106b27e83;  */

void FUN_106b27b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c26aca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10cf00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b27e84; end: 106b281b7; -[BirthdaySettingsViewController _showPasswordConfirmationLastChange] */

void FUN_106b27e84(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_1;
  func_0x00010c26aca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abac0();
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126d09c8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e741f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e741f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0362a0();
  _objc_release(ppuVar2);
  _objc_initWeak(auStack_88,param_1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e74218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74218,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106b281b8;
  puStack_a0 = &UNK_1108e5260;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar1);
  puStack_98 = puVar1;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_88);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar6 = PTR_PTR_1126af4d8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e74238;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74238,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  puStack_78 = puVar3;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar2);
  puVar5 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c236180();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar3);
  _objc_release(puStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(uVar7);
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bee8700();
  _objc_release(puVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b281b8; end: 106b282d3;  */

void FUN_106b281b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8700();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b282d4; end: 106b28313;  */

void FUN_106b282d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
  func_0x00010c18f600(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106b28314; end: 106b28613; -[BirthdaySettingsViewController _verifyPasswordToProceedWithPassword:submitAction:alertView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b28314(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0f5600();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010c0f5600();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        func_0x00010c196ee0(param_3);
        puVar4 = PTR_PTR_1126afd30;
        _objc_alloc();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfffb60();
        _objc_release(puVar5);
        func_0x00010c1739e0(0,0,0x4030000000000000,0x4030000000000000,puVar4);
        func_0x00010c24dbc0(puVar4);
        func_0x00010c131200(param_4);
        func_0x00010c21e900(param_5);
        _objc_initWeak(auStack_78,param_1);
        uVar6 = *(undefined8 *)(param_1 + _DAT_112758664);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010c0f5600(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106b28614;
        puStack_90 = &UNK_110841fb0;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(param_5);
        uStack_88 = param_5;
        _objc_copyWeak(auStack_b0,auStack_78);
        _objc_retain(param_3);
        _objc_retain(param_5);
        _objc_retain(param_4);
        _objc_retain(puVar4);
        func_0x00010c121fc0(uVar6);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(uVar6);
        _objc_release(puVar4);
        _objc_release(param_4);
        _objc_release(param_5);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_b0);
        _objc_release(uStack_88);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
        _objc_release(puVar4);
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b28614; end: 106b286ab;  */

void FUN_106b28614(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c26aca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0abac0();
    _objc_release(lVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c13a0e0(*(undefined8 *)(param_1 + 0x20));
    func_0x000100c749e0(0x3e99999a,"APPSTORE",&PTR___NSConcreteGlobalBlock_110961f10);
    func_0x00010bed4020(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b286ac; end: 106b286e3;  */

void FUN_106b286ac(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b286e4; end: 106b287cb;  */

void FUN_106b286e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c26aca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0abac0();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (param_2 == 2) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e74258;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74258,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196ee0(uVar4);
      _objc_release(ppuVar3);
      func_0x00010c21e900(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c23a7c0(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e74278;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74278,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196ee0(uVar4);
      _objc_release(ppuVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b287cc; end: 106b2885b; -[BirthdaySettingsViewController getDefaultBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b287cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112758650);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf5e600(param_1,param_2,0x12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b2885c; end: 106b28933; -[BirthdaySettingsViewController currentDateYearsAgo:] */

void FUN_106b2885c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf44640(puVar1,param_2,0x1c,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c2bedc0(puVar3);
  func_0x00010c2278a0(puVar3,param_2,(long)puVar1 - param_3);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b28934; end: 106b289d3; -[BirthdaySettingsViewController underChangeBirthYearMinAge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b28934(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112758650);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bf5e600(param_1,param_2,0x12);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c06bb60(lVar2,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 106b289d4; end: 106b28adb; -[BirthdaySettingsViewController minimumDateForCurrentBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b289d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x00010c27f6e0();
  if ((uVar1 & 1) == 0) {
    puVar7 = *(undefined **)(param_1 + (long)_DAT_112758670);
    FUN_106b9003c(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_alloc(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    func_0x00010bffabc0();
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112758650);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf44640(puVar2,param_2,4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar6 = puVar5;
    func_0x00010c2bedc0(puVar5);
    func_0x00010bf65100(puVar7,param_2,1,1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106b28adc; end: 106b28ca7; -[BirthdaySettingsViewController maximumDateForCurrentBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b28adc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  uVar1 = param_1;
  func_0x00010c27f6e0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c06d340();
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((uVar1 & 1) == 0) {
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be60740(param_1);
      func_0x00010c2bee20(puVar8,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_alloc();
    func_0x00010bffabc0();
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf44640(puVar2,param_2,0x1c,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112758650);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf44640(puVar2,param_2,4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar7 = puVar6;
    func_0x00010c2bedc0(puVar6);
    puVar8 = puVar3;
    func_0x00010c2bedc0();
    puVar10 = puVar6;
    func_0x00010c2bedc0();
    func_0x00010be60740();
    if ((long)(int)param_1 < (long)puVar8 - (long)puVar10) {
      puVar9 = (undefined *)0x1f;
      puVar10 = (undefined *)0xc;
    }
    else {
      puVar10 = puVar3;
      func_0x00010c0d0e40(puVar3);
      puVar9 = puVar3;
      func_0x00010bf65700(puVar3);
    }
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65100(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,puVar10,puVar9,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106b28ca8; end: 106b28e0b; -[BirthdaySettingsViewController presentManyUpdatesAlertWithTitle:message:] */

void FUN_106b28ca8(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e74298;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74298,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    ppuVar1 = param_3;
  }
  if (param_4 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e742b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e742b8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    ppuVar2 = param_4;
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b28e0c;
  puStack_68 = &UNK_110848218;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(ppuVar1);
  ppuStack_60 = ppuVar1;
  _objc_retain(ppuVar2);
  ppuStack_58 = ppuVar2;
  func_0x000100c749e0(0x3e99999a,"APPSTORE",&puStack_80);
  _objc_release(ppuStack_58);
  _objc_release(ppuStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b28e0c; end: 106b28ec3;  */

void FUN_106b28e0c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010be7a1c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106b28ec4; end: 106b28eef;  */

void FUN_106b28ec4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b28ef0; end: 106b28fa7; -[BirthdaySettingsViewController _presentUserAgeVerifiedAlertWithTitle:message:] */

void FUN_106b28ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b28fa8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b28fa8; end: 106b29167;  */

void FUN_106b28fa8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_70,puVar6);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar5 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar5);
  func_0x00010bf84b00(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bdf80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106b29168; end: 106b291a7;  */

void FUN_106b29168(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b291a8; end: 106b292ff; -[BirthdaySettingsViewController _presentPayoutsOnboardedDialogWithTitle:message:] */

void FUN_106b291a8(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e74298;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74298,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
  }
  else {
    ppuVar2 = param_3;
    _objc_retain();
    ppuVar1 = param_3;
  }
  if (param_4 == (undefined **)0x0) {
    FUN_106b4aaf0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    ppuVar2 = param_4;
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b29300;
  puStack_68 = &UNK_110848218;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(ppuVar1);
  ppuStack_60 = ppuVar1;
  _objc_retain(ppuVar2);
  ppuStack_58 = ppuVar2;
  func_0x000100c749e0(0x3e99999a,"APPSTORE",&puStack_80);
  _objc_release(ppuStack_58);
  _objc_release(ppuStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b29300; end: 106b293b7;  */

void FUN_106b29300(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010be7a1c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106b293b8; end: 106b293e3;  */

void FUN_106b293b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b293e4; end: 106b2943f; -[BirthdaySettingsViewController _datePickerToDefaultBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b293e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfc4980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a40(*(undefined8 *)(param_1 + _DAT_112758680),param_2,lVar1,0);
  func_0x00010bf64f20(param_1);
  func_0x00010c1b5be0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b29440; end: 106b295a3; -[BirthdaySettingsViewController presentLastChangeAttemptAlertWithTitle:message:] */

void FUN_106b29440(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e742d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e742d8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    ppuVar1 = param_3;
  }
  if (param_4 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e742f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e742f8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    ppuVar2 = param_4;
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b295a4;
  puStack_68 = &UNK_110848218;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(ppuVar1);
  ppuStack_60 = ppuVar1;
  _objc_retain(ppuVar2);
  ppuStack_58 = ppuVar2;
  func_0x000100c749e0(0x3e99999a,"APPSTORE",&puStack_80);
  _objc_release(ppuStack_58);
  _objc_release(ppuStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b295a4; end: 106b2965b;  */

void FUN_106b295a4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010be7a1c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106b2965c; end: 106b2972f;  */

void FUN_106b2965c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010beb86c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106b29730; end: 106b2975b;  */

void FUN_106b29730(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b2975c; end: 106b298af; -[BirthdaySettingsViewController _presentAlertWithTitle:message:actionHandler:] */

void FUN_106b2975c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126af180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106b298b0;
  uStack_70 = param_4;
  uStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_78,puVar2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106b29938;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106b298b0; end: 106b29963; -[BirthdaySettingsViewController _handleBirthdayUpdateSuccess] */

void FUN_106b298b0(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106b29938;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106b29964; end: 106b29a33; -[BirthdaySettingsViewController _popCurrentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b29964(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11275866c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1a8a0();
  _objc_release(lVar1);
  if ((*(byte *)(param_1 + _DAT_112758668) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a00();
      _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106b29a34; end: 106b29b1b; -[BirthdaySettingsViewController _handleBirthdayUpdateGeneralError:] */

void FUN_106b29a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106b29ae8;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106b29b1c; end: 106b29b4b; -[BirthdaySettingsViewController _displayStatusBarOverlayWithError:] */

void FUN_106b29b1c(undefined8 param_1)

{
  func_0x00010c237520(PTR_PTR_1126afca8);
                    /* WARNING: Could not recover jumptable at 0x00010c1b5bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsWorking__11264b120,0);
  return;
}



/* Entry: 106b29b4c; end: 106b29b87; -[BirthdaySettingsViewController _updateSwitchEnabled:] */

void FUN_106b29b4c(undefined8 param_1)

{
  func_0x00010c0f4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b29b88; end: 106b29c53; -[BirthdaySettingsViewController _updateSwitchOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b29b88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275864c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a7c0();
  if ((int)uVar2 != 0) {
    unaff_x22 = *(undefined8 *)(param_1 + _DAT_112758650);
    func_0x00010c269d40(unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0f4d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210a80();
  _objc_release(param_1);
  if ((int)uVar2 != 0) {
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b29c54; end: 106b29c5b; -[BirthdaySettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_106b29c54(void)

{
  return 1;
}



/* Entry: 106b29c5c; end: 106b29ccb; -[BirthdaySettingsViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b29c5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275865c);
  func_0x00010bf102e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c235820();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 1;
  if ((int)uVar3 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 106b29ccc; end: 106b29d63; -[BirthdaySettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_106b29ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010c0840e0(), lVar1 == 0)) {
    func_0x00010c0f4d20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_4;
    func_0x00010c1554e0();
    if ((lVar1 == 1) && (lVar1 = param_4, func_0x00010c0840e0(), lVar1 == 0)) {
      func_0x00010bf0bf40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = 0;
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b29d64; end: 106b29d6b; -[BirthdaySettingsViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_106b29d64(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 106b29d6c; end: 106b29eaf; -[BirthdaySettingsViewController tableView:viewForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b29d6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  if (param_4 == 1) {
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c1cfce0();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275865c);
    func_0x00010bf102e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c227fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar5,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c213040(puVar5,param_2,1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106b29eb0; end: 106b29ec7; -[BirthdaySettingsViewController tableView:heightForFooterInSection:] */

undefined8 FUN_106b29eb0(void)

{
  long in_x3;
  undefined8 uVar1;
  
  uVar1 = 0x4046000000000000;
  if (in_x3 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106b29ec8; end: 106b29f1f; -[BirthdaySettingsViewController auraSettingWorkflowDidFinish] */

void FUN_106b29ec8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b29f20;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106b29f20; end: 106b29fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b29f20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112758660;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127586a0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127586a0) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758698),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 106b29fa8; end: 106b2a05b; -[BirthdaySettingsViewController settingsClearTableViewCellDidTapContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b29fa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126d09d0;
  _objc_alloc(PTR_PTR_1126d09d0);
  func_0x00010c057520();
  lVar4 = (long)_DAT_112758660;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b2a05c; end: 106b2a10f; -[BirthdaySettingsViewController settingsClearTableViewCellDidTapClear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a05c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126d09d0;
  _objc_alloc(PTR_PTR_1126d09d0);
  func_0x00010c057520();
  lVar4 = (long)_DAT_112758660;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b2a110; end: 106b2a11f; -[BirthdaySettingsViewController telemetryLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b2a110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758674);
}



/* Entry: 106b2a120; end: 106b2a15f; -[BirthdaySettingsViewController setTelemetryLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758674;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b2a160; end: 106b2a2cb; -[BirthdaySettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a160(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758674,0);
  _objc_storeStrong(param_1 + _DAT_11275868c,0);
  _objc_storeStrong(param_1 + _DAT_112758688,0);
  _objc_destroyWeak(param_1 + _DAT_11275866c);
  _objc_storeStrong(param_1 + _DAT_112758664,0);
  _objc_storeStrong(param_1 + _DAT_112758660,0);
  _objc_storeStrong(param_1 + _DAT_112758658,0);
  _objc_storeStrong(param_1 + _DAT_112758654,0);
  _objc_storeStrong(param_1 + _DAT_112758650,0);
  _objc_storeStrong(param_1 + _DAT_11275864c,0);
  _objc_storeStrong(param_1 + _DAT_112758670,0);
  _objc_storeStrong(param_1 + _DAT_112758694,0);
  _objc_storeStrong(param_1 + _DAT_11275865c,0);
  _objc_storeStrong(param_1 + _DAT_1127586a0,0);
  _objc_storeStrong(param_1 + _DAT_11275869c,0);
  _objc_storeStrong(param_1 + _DAT_112758698,0);
  _objc_storeStrong(param_1 + _DAT_112758678,0);
  _objc_storeStrong(param_1 + _DAT_112758684,0);
  _objc_storeStrong(param_1 + _DAT_112758680,0);
  _objc_storeStrong(param_1 + _DAT_11275867c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758690,0);
  return;
}



/* Entry: 106b2a2cc; end: 106b2a2d3; -[ChangeDisplayNameViewController pageViewName] */

undefined8 FUN_106b2a2cc(void)

{
  return 0x150;
}



/* Entry: 106b2a2d4; end: 106b2a2e3; -[ChangeDisplayNameViewController getTitle] */

void FUN_106b2a2d4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7918;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dc7918,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b2a2e4; end: 106b2a2f3; -[ChangeDisplayNameViewController getInfo] */

void FUN_106b2a2e4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3318;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dc3318,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


