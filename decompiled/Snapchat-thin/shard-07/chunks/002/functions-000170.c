/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10531322c; end: 1053132a7; -[SCNotificationAcknowledger acknowledgeNotificationReceived:source:clientReceiveTimestampMs:] */

void FUN_10531322c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030320();
  _objc_release(param_3);
  func_0x00010beedb60(param_1,param_2,puVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053132a8; end: 10531367f; -[SCNotificationAcknowledger acknowledgeNotificationReceived:clientReceiveTimestampMs:] */

void FUN_1053132a8(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar1 = param_4;
  func_0x00010c15f560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720((long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  ppuVar1 = param_4;
  func_0x00010bf6d280();
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar1 != (undefined **)0x0) && (puVar3 != (undefined *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    ppuVar5 = param_4;
    func_0x00010bf6d240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar6 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar6 = param_4;
      func_0x00010bf6d240();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar5 = param_4;
    func_0x00010bf6d260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_4;
    if (ppuVar5 == (undefined **)0x0) {
      func_0x00010c0dc140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf6d260();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar7;
    func_0x00010c08fa60();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar8 = param_4;
      func_0x00010c15df60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar5 = ppuVar8;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar8);
      puVar2 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
      func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x105313540;
      puStack_a0 = &UNK_110878cf0;
      uStack_98 = param_2;
      _objc_retain(ppuVar7);
      ppuStack_90 = ppuVar7;
      ppuStack_88 = ppuVar5;
      _objc_retain(param_4);
      ppuStack_80 = param_4;
      uStack_70 = param_5;
      _objc_retain(ppuVar6);
      ppuStack_78 = ppuVar6;
      uStack_68 = puVar4 == (undefined *)0x2;
      _objc_retain(ppuVar5);
      func_0x00010bfc81e0(puVar2,param_3,&puStack_b8);
      _objc_release(ppuStack_78);
      _objc_release(ppuStack_80);
      _objc_release(ppuStack_88);
      _objc_release(ppuStack_90);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 105313680; end: 1053139ff; -[SCNotificationAcknowledger acknowledgeNotificationDisplayed:isSystem:] */

void FUN_105313680(double param_1,long param_2,undefined8 param_3,undefined **param_4,
                  undefined1 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  double dVar12;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar1 = param_4;
  func_0x00010c15f560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar12 = (double)(long)(param_1 * 1000.0);
  func_0x00010c0df720(dVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  ppuVar1 = param_4;
  func_0x00010bf86740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar1;
  func_0x00010c08fa60();
  if ((ppuVar10 != (undefined **)0x0) &&
     (puVar2 = puVar3, func_0x00010c08fa60(), puVar2 != (undefined *)0x0)) {
    ppuVar10 = param_4;
    func_0x00010bf6d240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar10;
    func_0x00010c08fa60();
    _objc_release(ppuVar10);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      ppuVar10 = param_4;
      func_0x00010bf6d240();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar4 = param_4;
    func_0x00010bf6d260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_4;
    if (ppuVar4 == (undefined **)0x0) {
      func_0x00010c0dc140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf6d260();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar11 = param_4;
      func_0x00010c15df60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar4 = ppuVar11;
      }
      _objc_retain();
      _objc_release(ppuVar11);
      func_0x00010c079e00();
      ppuVar11 = param_4;
      func_0x00010bfb1e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = param_4;
        func_0x00010bfb1e80(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f3a0();
        func_0x00010c0df720((long)ABS(dVar12 * 1000.0));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(puVar2);
        _objc_release(ppuVar11);
      }
      ppuVar11 = param_4;
      func_0x00010bfeafa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        ppuVar11 = param_4;
        func_0x00010bfeafa0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar6 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_4;
      func_0x00010c15f560(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_4;
      func_0x00010c11c460(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c073d60();
      puVar2 = PTR_PTR_1126b74f8;
      ppuVar9 = param_4;
      func_0x00010c247520(param_4);
      func_0x00010becf540(puVar2,param_3,ppuVar9);
      func_0x00010beeda60(uVar6,param_3,ppuVar5,ppuVar4,ppuVar7,0,ppuVar8,ppuVar10,param_5);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(uVar6);
      _objc_release(ppuVar11);
      _objc_release(ppuVar4);
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105313a00; end: 105313a23; +[SCNotificationAcknowledger _translateNotificationClientSource:] */

undefined4 FUN_105313a00(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 7) {
    return *(undefined4 *)(&UNK_10dd961b0 + (param_3 - 2U) * 4);
  }
  return 5;
}



/* Entry: 105313a24; end: 105313a5f; -[SCNotificationAcknowledger .cxx_destruct] */

void FUN_105313a24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105313a60; end: 105313af7;  */

void FUN_105313a60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_105313af8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105313af8; end: 105313b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105313af8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112721700);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105313b1c; end: 105313b63;  */

void FUN_105313b1c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105313b64; end: 105313dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105313b64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = lVar3 + _DAT_1127216fc;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x0001008fe838();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      puVar9 = PTR_PTR_1126b74f8;
      _objc_alloc(PTR_PTR_1126b74f8);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      lVar7 = lVar3 + _DAT_112721704;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010c0dc400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeff80(puVar9,param_2,uVar1,uVar2,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
      goto LAB_105313c34;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_105313c34:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105313dd0; end: 105313e73;  */

void FUN_105313dd0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd540(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105313e74; end: 105313ecb;  */

void FUN_105313e74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc40e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105313ecc; end: 105313f87;  */

void FUN_105313ecc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105313f88; end: 105313f93;  */

void FUN_105313f88(void)

{
  return;
}



/* Entry: 105313f94; end: 10531400b;  */

void FUN_105313f94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c26a060(param_2);
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be56720(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10531400c; end: 1053140e3; -[SCNotificationReportingServicesSystemScopedServiceProvider _createAckClientWithGraphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10531400c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b7510;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar4 = (long)_DAT_1127216f8;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034600(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1b38,param_3,lVar3,
                      lVar4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053140e4; end: 10531416b; -[SCNotificationReportingServicesSystemScopedServiceProvider _ackAndLogNotificationDisplayed:isSystem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053140e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127216e8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beedb40();
  _objc_release(uVar1);
  func_0x00010c133920(*(undefined8 *)(param_1 + _DAT_1127216e4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10531416c; end: 10531427f; -[SCNotificationReportingServicesSystemScopedServiceProvider _logNotificationOpen:destinationPage:] */

void FUN_10531416c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010c1d0560();
  ppuVar3 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x00010c1d0560(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dd1b98);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  func_0x00010c1d0560(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dd1bb8);
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar2,param_2,puVar5,&PTR____CFConstantStringClassReference_110dd1bd8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105314280; end: 105314333; -[SCNotificationReportingServicesSystemScopedServiceProvider _getJsonFromDictionary:] */

void FUN_105314280(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105314334; end: 1053143e7; -[SCNotificationReportingServicesSystemScopedServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105314334(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721708);
  _objc_destroyWeak(param_1 + _DAT_1127216f8);
  _objc_destroyWeak(param_1 + _DAT_112721704);
  _objc_destroyWeak(param_1 + _DAT_1127216f4);
  _objc_destroyWeak(param_1 + _DAT_112721700);
  _objc_destroyWeak(param_1 + _DAT_1127216fc);
  _objc_destroyWeak(param_1 + _DAT_1127216f0);
  _objc_storeStrong(param_1 + _DAT_1127216e0,0);
  _objc_storeStrong(param_1 + _DAT_1127216e4,0);
  _objc_storeStrong(param_1 + _DAT_1127216ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127216e8,0);
  return;
}



/* Entry: 1053143e8; end: 10531474f; -[SCNotificationReportingUserScopedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053143e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272170c);
  *(undefined **)(param_1 + _DAT_11272170c) = puVar1;
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112721710);
  *(undefined **)(param_1 + _DAT_112721710) = puVar1;
  _objc_release(uVar7);
  lVar2 = param_1 + _DAT_112721714;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112721718);
  *(long *)(param_1 + _DAT_112721718) = lVar5;
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11272171c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0dbfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0dbf40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105314750;
  puStack_88 = &UNK_110878de0;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar2 = lVar6;
  func_0x00010c25ff60(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112721720;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001008fb738();
  param_1 = param_1 + _DAT_112721724;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  if ((int)lVar4 == 0) {
    func_0x00010c0dc740(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dc720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0e0ec0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105314750; end: 1053147f3;  */

void FUN_105314750(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd540(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1053147f4; end: 105314853;  */

void FUN_1053147f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105314854; end: 105314957;  */

void FUN_105314854(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10531495c;
  puStack_50 = &UNK_110878eb0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bf140(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105314958; end: 10531495b;  */

void FUN_105314958(void)

{
  return;
}



/* Entry: 10531495c; end: 1053149bb;  */

void FUN_10531495c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50be0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053149bc; end: 105314a0b;  */

void FUN_1053149bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50be0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105314a0c; end: 105314a13;  */

void FUN_105314a0c(void)

{
  return;
}



/* Entry: 105314a14; end: 105314be3; -[SCNotificationReportingUserScopedEntryPoint _logBlizzardNotificationSuppression:isSystem:suppressionReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105314a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b7520;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c073d60(param_3);
  func_0x00010c1a0fc0(puVar1,param_2,uVar2);
  func_0x00010c1b4e80(puVar1,param_2,param_4);
  uVar2 = param_3;
  func_0x00010c247620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11c460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce740(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce180(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c124c00(param_3);
  func_0x00010c1e9380(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf5a700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2102c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b7528;
  func_0x00010c25d540(PTR_PTR_1126b7528,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce6e0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010bec90a0(param_1,param_2,param_5);
  func_0x00010c17a060(puVar1,param_2,lVar4);
  param_1 = param_1 + _DAT_112721728;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105314be4; end: 10531501b; -[SCNotificationReportingUserScopedEntryPoint _logBlizzardNotificationDisplay:withSystem:avatarType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105314be4(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c247520();
  uVar2 = param_3;
  func_0x00010bf86740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 == 2) || (uVar2 != 0)) {
    uVar1 = param_3;
    func_0x00010c122140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      puVar3 = PTR_PTR_1126b3e90;
      _objc_opt_new(PTR_PTR_1126b3e90);
      func_0x00010c1ce780();
      lVar4 = param_1 + _DAT_11272172c;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf53fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b3e98;
      func_0x00010bf60460(PTR_PTR_1126b3e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133420(lVar5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b7530;
    _objc_alloc_init(PTR_PTR_1126b7530);
    uVar1 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce180(puVar3);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce740(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c1b4e80(puVar3);
    func_0x00010c073d60(param_3);
    func_0x00010c1a0fc0(puVar3);
    uVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c122140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar6);
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_3;
      func_0x00010c122140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e8320(puVar3);
      _objc_release(uVar1);
      uVar8 = *(undefined8 *)(param_1 + _DAT_11272170c);
      func_0x00010bf5e5e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c122140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar8);
      _objc_release(uVar1);
      func_0x00010c1b92e0(puVar3);
      _objc_release(uVar8);
    }
    if (param_4 != 0) {
      uVar1 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar9 != 0) {
        func_0x00010c1691e0(puVar3);
      }
    }
    puVar6 = PTR_PTR_1126b7538;
    _objc_alloc();
    func_0x00010c02fc60();
    puVar7 = puVar6;
    func_0x00010bf2c2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c08fa60();
    if (puVar10 != (undefined *)0x0) {
      func_0x00010c177880(puVar3);
    }
    if (param_4 != 0) {
      func_0x00010bdd1e80(PTR_PTR_1126b7540);
      func_0x00010c1cdea0(puVar3);
    }
    param_1 = param_1 + _DAT_112721728;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10531501c; end: 10531503f; +[SCNotificationReportingUserScopedEntryPoint _avatarTypeForRenderedAvatarType:] */

undefined8 FUN_10531501c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10dd961d0 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 105315040; end: 105315063; -[SCNotificationReportingUserScopedEntryPoint _suppressionCategoryFromReason:] */

undefined8 FUN_105315040(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x15) {
    return *(undefined8 *)(&UNK_10dd961e8 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 105315064; end: 105315107; -[SCNotificationReportingUserScopedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105315064(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721714);
  _objc_destroyWeak(param_1 + _DAT_11272172c);
  _objc_destroyWeak(param_1 + _DAT_112721728);
  _objc_destroyWeak(param_1 + _DAT_11272171c);
  _objc_destroyWeak(param_1 + _DAT_112721720);
  _objc_destroyWeak(param_1 + _DAT_112721724);
  _objc_destroyWeak(param_1 + _DAT_112721730);
  _objc_storeStrong(param_1 + _DAT_112721718,0);
  _objc_storeStrong(param_1 + _DAT_11272170c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721710,0);
  return;
}



/* Entry: 105315108; end: 10531520b; -[SCDuplicateNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_105315108(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c247520();
  if (((uVar1 != 8) && (uVar1 = param_3, func_0x00010c07c5e0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_3, func_0x00010c11c420(), uVar1 != 8)) {
    lVar4 = *(long *)(param_1 + 8);
    uVar1 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar4 != 0) {
      uVar3 = 1;
      goto LAB_1053151f0;
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,puVar2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  uVar3 = 0;
LAB_1053151f0:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10531520c; end: 10531520f; -[SCDuplicateNotificationProcessor processNotification:] */

void FUN_10531520c(void)

{
  return;
}



/* Entry: 105315210; end: 105315217; -[SCDuplicateNotificationProcessor userDidLogOut] */

void FUN_105315210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105315218; end: 10531535b; -[SCDuplicateNotificationProcessor didApplicationStateChange:withCurrentNotifications:] */

void FUN_105315218(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dff20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      bVar2 = false;
      if (!NAN((double)CONCAT17(uVar15,CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(uVar12,CONCAT13(
                                                  uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)))))))
              )) {
        bVar2 = (double)CONCAT17(uVar15,CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(uVar12,CONCAT13(
                                                  uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)))))))
                < -900.0;
      }
      if (bVar2) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
      }
      _objc_release(uVar5);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 10531535c; end: 105315367; -[SCDuplicateNotificationProcessor .cxx_destruct] */

void FUN_10531535c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105315368; end: 105315397;  */

void FUN_105315368(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001070c1c7c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105315398; end: 10531539f; -[SCAppNotificationProvider removeProcessor:] */

void FUN_105315398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 1053153a0; end: 1053154b3; -[SCAppNotificationProvider userDidLogOut] */

void FUN_1053153a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_userDidLogOut_112682148;
  while (PTR_s_userDidLogOut_112682148 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c291c80(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_userDidLogOut_112682148;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar6 + 0x28),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 1053154b4; end: 1053154bb; -[SCAppNotificationProvider unregisterPushNotificationPresenter:] */

void FUN_1053154b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 1053154bc; end: 1053154db; -[SCAppNotificationProvider _isAppInForeground] */

bool FUN_1053154bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf07b60(lVar1);
  return lVar1 == 0;
}



/* Entry: 1053154dc; end: 105315527; -[SCAppNotificationProvider delegateForAppState] */

void FUN_1053154dc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be3e260();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcdf98;
  if ((int)lVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcdfb8;
  }
  func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x28),param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105315528; end: 10531552f; -[SCAppNotificationProvider applicationWillResignActive] */

void FUN_105315528(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf077d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_applicationDidChangeState__11259f798,0);
  return;
}



/* Entry: 105315530; end: 10531598b;  */

void FUN_105315530(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  ulong uVar12;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5f5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_220;
    do {
      lVar14 = 0;
      do {
        if (*plStack_220 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(ulong *)(lStack_228 + lVar14 * 8);
        iVar11 = (int)uVar12;
        func_0x00010c074cc0();
        if (((uVar12 & 1) == 0) && (func_0x00010c232520(), iVar11 != 0)) {
          func_0x00010c12d300(*(undefined8 *)(param_1 + 0x20));
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5f5c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72500(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5f5c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72500(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_260;
    do {
      lVar14 = 0;
      do {
        if (*plStack_260 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        puVar15 = *(undefined **)(lStack_268 + lVar14 * 8);
        puVar6 = PTR_PTR_1126b1370;
        _objc_alloc();
        func_0x00010c05c980();
        puVar7 = puVar15;
        func_0x00010c134680(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010bf4b900();
        _objc_release(puVar8);
        _objc_release(puVar7);
        if (((ulong)puVar9 & 1) == 0) {
          puVar7 = puVar6;
          func_0x00010c232e40();
          if ((int)puVar7 == 0) {
            uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
            puVar15 = puVar6;
            func_0x00010c11c460(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1334c0(uVar3);
          }
          else {
            func_0x00010c134680(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar15;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(puVar7);
          }
          _objc_release(puVar15);
        }
        _objc_release(puVar6);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010be8b460(*(undefined8 *)(param_1 + 0x20));
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar1);
  puVar10 = &uStack_2b0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_2a0;
    do {
      puVar6 = PTR_s_didApplicationStateChange_withCu_1125ba2e0;
      lVar14 = 0;
      do {
        if (*plStack_2a0 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar16 = *(ulong *)(lStack_2a8 + lVar14 * 8);
        uVar12 = uVar16;
        _objc_opt_respondsToSelector(uVar16,puVar6);
        if ((uVar12 & 1) != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf5f5c0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf724e0(uVar16);
          _objc_release(uVar3);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar10 = &uStack_2b0;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar5 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  func_0x00010bfc4a60(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar10);
  return;
}



/* Entry: 10531598c; end: 105315a2b; -[SCAppNotificationProvider _removeAllNotificationsExcept:] */

void FUN_10531598c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105315a2c;
  puStack_30 = &UNK_110850cc8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc4a60(puVar1,param_2,&puStack_48);
  _objc_release(puVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105315a2c; end: 105315c13;  */

void FUN_105315a2c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar8 = *(undefined8 *)(lVar10 * 8);
      uVar9 = *(ulong *)(param_1 + 0x20);
      uVar4 = uVar8;
      func_0x00010c134680(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar9 & 1) == 0) {
        func_0x00010c134680(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar4);
        _objc_release(uVar8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12bf00();
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be8ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105315c14; end: 105315c1b; -[SCAppNotificationProvider removeNotificationWithoutSuccess:] */

void FUN_105315c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeNotification_executeSucce_112580c40,param_3,0);
  return;
}



/* Entry: 105315c1c; end: 105315c23; -[SCAppNotificationProvider removeNotification:] */

void FUN_105315c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeNotification_executeSucce_112580c40,param_3,1);
  return;
}



/* Entry: 105315c24; end: 105315eef; -[SCAppNotificationProvider _removeNotification:executeSuccessBlock:] */

void FUN_105315c24(double param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x20;
  bool bVar14;
  undefined8 *unaff_x22;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  ulong uVar18;
  ulong unaff_x26;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long unaff_x27;
  undefined **unaff_x28;
  long lVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined1 *puStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  code *pcStack_520;
  undefined *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined1 *puStack_500;
  long lStack_2f8;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
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
  puVar4 = param_4;
  puVar5 = param_4;
  puVar13 = param_5;
  _objc_retain();
  if (param_4 != (undefined8 *)0x0) {
    puVar5 = param_2;
    func_0x00010bf6b0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe24a0();
    _objc_release(puVar5);
    unaff_x24 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x24;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    if (((int)param_5 == 0) || (unaff_x20 == (undefined8 *)0x0)) {
      if (unaff_x20 != (undefined8 *)0x0) goto LAB_105315ce8;
    }
    else {
      (*(code *)unaff_x20[2])(unaff_x20);
LAB_105315ce8:
      puVar5 = param_4;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar5;
      func_0x00010c0d3c80();
      _objc_release(puVar5);
      func_0x00010c12d3e0(unaff_x24);
      func_0x00010c12d3e0(unaff_x24);
      puVar5 = (undefined8 *)PTR_PTR_1126b1370;
      _objc_alloc();
      puVar4 = unaff_x24;
      func_0x00010bf51e00(unaff_x24);
      func_0x00010c247520(param_4);
      func_0x00010c030320();
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(unaff_x24);
      param_4 = puVar5;
    }
    unaff_x22 = param_4;
    puStack_138 = unaff_x20;
    func_0x00010c0dc200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(param_2[2]);
    func_0x00010c12d3e0(param_2[3]);
    param_5 = (undefined1 *)param_2[4];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != (undefined1 *)0x0) {
      func_0x00010c069d00(param_5);
      func_0x00010c12d3e0(param_2[4]);
    }
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    param_2 = (undefined8 *)param_2[1];
    _objc_retain(param_2);
    puVar5 = &uStack_130;
    puVar13 = auStack_f0;
    puVar4 = param_2;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      unaff_x27 = *plStack_120;
      unaff_x28 = &PTR_s_remixExportItem_112628000;
      do {
        unaff_x25 = PTR_s_removeNotification__112628ee0;
        unaff_x20 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x26 = *(ulong *)(lStack_128 + (long)unaff_x20 * 8);
          uVar6 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar6 & 1) != 0) {
            func_0x00010c12d300(unaff_x26);
          }
          unaff_x20 = (undefined8 *)((long)unaff_x20 + 1);
        } while (puVar4 != unaff_x20);
        puVar5 = &uStack_130;
        puVar13 = auStack_f0;
        puVar4 = param_2;
        func_0x00010bf52a60();
        unaff_x24 = (undefined8 *)0x0;
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(param_2);
    _objc_release(param_5);
    _objc_release(unaff_x22);
    _objc_release(puStack_138);
    puVar4 = param_4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar22 = &uStack_270;
  pcStack_148 = FUN_105315ef0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = param_5;
  puStack_170 = unaff_x22;
  puStack_168 = param_2;
  puStack_160 = unaff_x20;
  puStack_158 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = puVar5;
    func_0x00010c0dc200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(puVar4[2]);
    func_0x00010c12d3e0(puVar4[3]);
    lVar8 = puVar4[4];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      func_0x00010c069d00(lVar8);
      func_0x00010c12d3e0(puVar4[4]);
    }
    param_1 = 0.0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    lVar15 = puVar4[1];
    _objc_retain(lVar15);
    puVar13 = auStack_230;
    lVar16 = lVar15;
    func_0x00010bf52a60();
    if (lVar16 != 0) {
      lVar19 = *plStack_260;
      do {
        puVar9 = PTR_s_removeNotification__112628ee0;
        lVar23 = 0;
        do {
          if (*plStack_260 != lVar19) {
            _objc_enumerationMutation(lVar15);
          }
          uVar18 = *(ulong *)(lStack_268 + lVar23 * 8);
          uVar6 = uVar18;
          _objc_opt_respondsToSelector(uVar18,puVar9);
          if ((uVar6 & 1) != 0) {
            func_0x00010c12d300(uVar18);
          }
          lVar23 = lVar23 + 1;
        } while (lVar16 != lVar23);
        puVar13 = auStack_230;
        lVar16 = lVar15;
        puVar22 = &uStack_270;
        func_0x00010bf52a60();
      } while (lVar16 != 0);
    }
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(puVar7);
    puVar7 = puVar22;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  if (puVar7 == (undefined8 *)0x0) goto LAB_105316780;
  puVar9 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar9 & 1) == 0) {
    puStack_530 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_528 = 0xc2000000;
    pcStack_520 = FUN_105316964;
    puStack_518 = &UNK_110848ba8;
    puStack_510 = puVar5;
    _objc_retain(puVar7);
    puStack_508 = puVar7;
    _objc_retain(puVar13);
    puStack_500 = puVar13;
    func_0x000100162d98("APPSTORE",&puStack_530);
    _objc_release(puStack_500);
    puVar4 = puStack_508;
  }
  else {
    puVar4 = puVar7;
    func_0x00010c292820(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dba0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    func_0x00010c133960(puVar5[0xd]);
    puVar4 = puVar7;
    func_0x00010bf9cb20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined8 *)0x0) {
      puVar22 = puVar7;
      func_0x00010bf9cb20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(puVar22);
      _objc_release(puVar4);
      if (param_1 < 0.0) {
        puVar4 = puVar7;
        func_0x00010bf58460();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined8 *)0x0) {
          func_0x00010be08480(puVar5);
        }
        else {
          func_0x00010befa0a0(puVar5);
        }
        goto LAB_10531677c;
      }
    }
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aafa0(PTR_PTR_1126b7550);
    puVar22 = puVar5;
    func_0x00010be42520();
    iVar3 = (int)puVar22;
    lStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    plStack_560 = (long *)0x0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    lVar16 = puVar5[1];
    _objc_retain(lVar16);
    lVar8 = lVar16;
    func_0x00010bf52a60();
    if (lVar8 == 0) {
      bVar14 = true;
    }
    else {
      bVar1 = 0;
      lVar15 = *plStack_560;
      do {
        puVar9 = PTR_s_shouldFilterNotification_withSys_112669b98;
        lVar19 = 0;
        do {
          if (*plStack_560 != lVar15) {
            _objc_enumerationMutation(lVar16);
          }
          puVar2 = PTR_PTR_1126b7550;
          uVar20 = *(ulong *)(lStack_568 + lVar19 * 8);
          uVar6 = uVar20;
          _objc_opt_class(uVar20);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ab0e0(puVar2);
          _objc_release(uVar6);
          uVar6 = uVar20;
          _objc_opt_respondsToSelector(uVar20,puVar9);
          uVar18 = uVar20;
          if ((uVar6 & 1) == 0) {
            func_0x00010c2305a0();
          }
          else {
            func_0x00010c2305c0();
          }
          if ((long)uVar18 < 3) {
            if (uVar18 == 2) {
LAB_105316358:
              func_0x00010befa120(puVar4);
            }
            else if (uVar18 == 1) {
              if (iVar3 != 0) {
                func_0x00010be62000(puVar5);
              }
              func_0x00010be08480(puVar5);
LAB_105316598:
              puVar9 = PTR_PTR_1126b7550;
              _objc_opt_class(uVar20);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ab100(puVar9);
              _objc_release(uVar20);
              goto LAB_1053165d0;
            }
          }
          else {
            if (uVar18 == 4) {
              bVar1 = 1;
              goto LAB_105316358;
            }
            if (uVar18 == 3) {
              if (iVar3 == 0) {
                func_0x00010be08000(puVar5);
              }
              else {
                func_0x00010be62000(puVar5);
                func_0x00010be08480(puVar5);
              }
              goto LAB_105316598;
            }
          }
          lVar19 = lVar19 + 1;
        } while (lVar8 != lVar19);
        lVar8 = lVar16;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
      bVar14 = (bool)(bVar1 ^ 1);
    }
    _objc_release(lVar16);
    puVar10 = puVar4;
    func_0x00010bf529e0();
    if (puVar10 == (undefined8 *)0x0) {
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5d8 = 0;
      plStack_5e0 = (long *)0x0;
      lStack_5e8 = 0;
      uStack_5f0 = 0;
      lVar16 = puVar5[1];
      _objc_retain(lVar16);
      lVar8 = lVar16;
      func_0x00010bf52a60();
      if (lVar8 != 0) {
        lVar15 = *plStack_5e0;
        do {
          lVar19 = 0;
          do {
            if (*plStack_5e0 != lVar15) {
              _objc_enumerationMutation(lVar16);
            }
            uVar17 = *(undefined8 *)(lStack_5e8 + lVar19 * 8);
            func_0x00010c114fc0(uVar17);
            puVar9 = PTR_PTR_1126b7550;
            _objc_opt_class(uVar17);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ab100(puVar9);
            _objc_release(uVar17);
            lVar19 = lVar19 + 1;
          } while (lVar8 != lVar19);
          lVar8 = lVar16;
          func_0x00010bf52a60();
        } while (lVar8 != 0);
      }
      _objc_release(lVar16);
      func_0x00010c0ab060(PTR_PTR_1126b7550);
      if (iVar3 == 0) {
        dVar24 = 0.0;
        uStack_608 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        lStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        plStack_620 = (long *)0x0;
        puVar22 = puVar5;
        func_0x00010bf5f5c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar22;
        func_0x00010bf52a60();
        if (puVar10 != (undefined8 *)0x0) {
          lVar8 = *plStack_620;
          do {
            puVar21 = (undefined8 *)0x0;
            do {
              if (*plStack_620 != lVar8) {
                _objc_enumerationMutation(puVar22);
              }
              lVar16 = *(long *)(lStack_628 + (long)puVar21 * 8);
              puVar11 = puVar7;
              func_0x00010c232ca0();
              if (((ulong)puVar11 & 1) != 0) {
                _objc_retain(lVar16);
                _objc_release(puVar22);
                puVar9 = PTR_PTR_1126b7550;
                if (lVar16 == 0) goto LAB_1053168ec;
                lVar8 = lVar16;
                func_0x00010c0dc140(lVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0ab160(puVar9);
                _objc_release(lVar8);
                func_0x00010bf88260(puVar7);
                if (dVar24 == 0.0) {
                  func_0x00010c12d300(puVar5);
                  goto LAB_1053168ec;
                }
                lVar8 = lVar16;
                func_0x00010c0dc200(lVar16);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = puVar5[3];
                func_0x00010c0e00e0(uVar12);
                _objc_retainAutoreleasedReturnValue();
                uVar17 = uVar12;
                func_0x00010bf64e40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                puVar22 = puVar7;
                dVar25 = dVar24;
                func_0x00010bf5a700(puVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                _objc_release(puVar22);
                _objc_release(uVar17);
                _objc_release(uVar12);
                _objc_release(lVar8);
                func_0x00010c12d300(puVar5);
                if (dVar24 <= dVar25) goto LAB_1053168ec;
                func_0x00010be08480(puVar5);
                func_0x00010bf436e0(puVar13);
                goto LAB_1053165d0;
              }
              puVar21 = (undefined8 *)((long)puVar21 + 1);
            } while (puVar10 != puVar21);
            puVar10 = puVar22;
            func_0x00010bf52a60();
          } while (puVar10 != (undefined8 *)0x0);
        }
        _objc_release(puVar22);
        lVar16 = 0;
LAB_1053168ec:
        puStack_668 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_660 = 0xc2000000;
        uStack_658 = 0x105316974;
        puStack_650 = &UNK_110848ba8;
        puStack_648 = puVar5;
        _objc_retain(puVar7);
        puStack_640 = puVar7;
        _objc_retain(puVar13);
        puStack_638 = puVar13;
        func_0x0001000d76cc("APPSTORE",&puStack_668);
        _objc_release(puStack_638);
        _objc_release(puStack_640);
LAB_1053165d0:
        _objc_release(lVar16);
      }
      else {
        func_0x00010be62000(puVar5);
        func_0x00010be08480(puVar5);
        func_0x00010bf436e0(puVar13);
      }
    }
    else {
      if (((ulong)puVar22 & 1) == 0 && !bVar14) {
        func_0x00010be08000(puVar5);
      }
      else {
        if (iVar3 != 0) {
          func_0x00010be62000(puVar5);
        }
        func_0x00010be08480(puVar5);
      }
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      lStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      plStack_5a0 = (long *)0x0;
      _objc_retain(puVar4);
      puVar5 = puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined8 *)0x0) {
        lVar8 = *plStack_5a0;
        do {
          puVar22 = (undefined8 *)0x0;
          do {
            if (*plStack_5a0 != lVar8) {
              _objc_enumerationMutation(puVar4);
            }
            uVar17 = *(undefined8 *)(lStack_5a8 + (long)puVar22 * 8);
            func_0x00010c114fc0(uVar17);
            puVar9 = PTR_PTR_1126b7550;
            _objc_opt_class(uVar17);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ab100(puVar9);
            _objc_release(uVar17);
            puVar22 = (undefined8 *)((long)puVar22 + 1);
          } while (puVar5 != puVar22);
          puVar5 = puVar4;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined8 *)0x0);
      }
      _objc_release(puVar4);
    }
  }
LAB_10531677c:
  _objc_release(puVar4);
LAB_105316780:
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar7[4],PTR_s_addNotification_withSystemComple_11259c1d8,puVar7[5],puVar7[6]);
  return;
}



/* Entry: 105315ef0; end: 105316097; -[SCAppNotificationProvider prepareToReplaceNotification:] */

void FUN_105315ef0(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined1 *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined1 *puStack_3c0;
  long lStack_1b8;
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
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  _objc_retain(param_4);
  if (param_4 != (undefined *)0x0) {
    puVar3 = param_4;
    func_0x00010c0dc200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x10));
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x18));
    lVar4 = *(long *)(param_2 + 0x20);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c069d00(lVar4);
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x20));
    }
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar12 = *(long *)(param_2 + 8);
    _objc_retain(lVar12);
    param_5 = auStack_f0;
    lVar13 = lVar12;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar16 = *plStack_120;
      do {
        puVar6 = PTR_s_removeNotification__112628ee0;
        lVar20 = 0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(lVar12);
          }
          uVar15 = *(ulong *)(lStack_128 + lVar20 * 8);
          uVar5 = uVar15;
          _objc_opt_respondsToSelector(uVar15,puVar6);
          if ((uVar5 & 1) != 0) {
            func_0x00010c12d300(uVar15);
          }
          lVar20 = lVar20 + 1;
        } while (lVar13 != lVar20);
        param_5 = auStack_f0;
        lVar13 = lVar12;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar12);
    _objc_release(lVar4);
    _objc_release(puVar3);
    puVar3 = (undefined *)puVar10;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(param_5);
  if (puVar3 == (undefined *)0x0) goto LAB_105316780;
  puVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar6 & 1) == 0) {
    puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3e8 = 0xc2000000;
    pcStack_3e0 = FUN_105316964;
    puStack_3d8 = &UNK_110848ba8;
    puStack_3d0 = param_4;
    _objc_retain(puVar3);
    puStack_3c8 = puVar3;
    _objc_retain(param_5);
    puStack_3c0 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_3f0);
    _objc_release(puStack_3c0);
    puVar6 = puStack_3c8;
  }
  else {
    puVar6 = puVar3;
    func_0x00010c292820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    func_0x00010c133960(*(undefined8 *)(param_4 + 0x68));
    puVar6 = puVar3;
    func_0x00010bf9cb20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar3;
      func_0x00010bf9cb20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (param_1 < 0.0) {
        puVar6 = puVar3;
        func_0x00010bf58460();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          func_0x00010be08480(param_4);
        }
        else {
          func_0x00010befa0a0(param_4);
        }
        goto LAB_10531677c;
      }
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aafa0(PTR_PTR_1126b7550);
    puVar7 = param_4;
    func_0x00010be42520();
    iVar2 = (int)puVar7;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lVar13 = *(long *)(param_4 + 8);
    _objc_retain(lVar13);
    lVar4 = lVar13;
    func_0x00010bf52a60();
    if (lVar4 == 0) {
      bVar11 = true;
    }
    else {
      bVar1 = 0;
      lVar12 = *plStack_420;
      do {
        puVar19 = PTR_s_shouldFilterNotification_withSys_112669b98;
        lVar16 = 0;
        do {
          if (*plStack_420 != lVar12) {
            _objc_enumerationMutation(lVar13);
          }
          puVar18 = PTR_PTR_1126b7550;
          uVar17 = *(ulong *)(lStack_428 + lVar16 * 8);
          uVar5 = uVar17;
          _objc_opt_class(uVar17);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ab0e0(puVar18);
          _objc_release(uVar5);
          uVar5 = uVar17;
          _objc_opt_respondsToSelector(uVar17,puVar19);
          uVar15 = uVar17;
          if ((uVar5 & 1) == 0) {
            func_0x00010c2305a0();
          }
          else {
            func_0x00010c2305c0();
          }
          if ((long)uVar15 < 3) {
            if (uVar15 == 2) {
LAB_105316358:
              func_0x00010befa120(puVar6);
            }
            else if (uVar15 == 1) {
              if (iVar2 != 0) {
                func_0x00010be62000(param_4);
              }
              func_0x00010be08480(param_4);
LAB_105316598:
              puVar7 = PTR_PTR_1126b7550;
              _objc_opt_class(uVar17);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ab100(puVar7);
              _objc_release(uVar17);
              goto LAB_1053165d0;
            }
          }
          else {
            if (uVar15 == 4) {
              bVar1 = 1;
              goto LAB_105316358;
            }
            if (uVar15 == 3) {
              if (iVar2 == 0) {
                func_0x00010be08000(param_4);
              }
              else {
                func_0x00010be62000(param_4);
                func_0x00010be08480(param_4);
              }
              goto LAB_105316598;
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar4 != lVar16);
        lVar4 = lVar13;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      bVar11 = (bool)(bVar1 ^ 1);
    }
    _objc_release(lVar13);
    puVar19 = puVar6;
    func_0x00010bf529e0();
    if (puVar19 == (undefined *)0x0) {
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_498 = 0;
      plStack_4a0 = (long *)0x0;
      lStack_4a8 = 0;
      uStack_4b0 = 0;
      lVar13 = *(long *)(param_4 + 8);
      _objc_retain(lVar13);
      lVar4 = lVar13;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar12 = *plStack_4a0;
        do {
          lVar16 = 0;
          do {
            if (*plStack_4a0 != lVar12) {
              _objc_enumerationMutation(lVar13);
            }
            uVar14 = *(undefined8 *)(lStack_4a8 + lVar16 * 8);
            func_0x00010c114fc0(uVar14);
            puVar7 = PTR_PTR_1126b7550;
            _objc_opt_class(uVar14);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ab100(puVar7);
            _objc_release(uVar14);
            lVar16 = lVar16 + 1;
          } while (lVar4 != lVar16);
          lVar4 = lVar13;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar13);
      func_0x00010c0ab060(PTR_PTR_1126b7550);
      if (iVar2 == 0) {
        dVar21 = 0.0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        lStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        plStack_4e0 = (long *)0x0;
        puVar7 = param_4;
        func_0x00010bf5f5c0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar7;
        func_0x00010bf52a60();
        if (puVar19 != (undefined *)0x0) {
          lVar4 = *plStack_4e0;
          do {
            puVar18 = (undefined *)0x0;
            do {
              if (*plStack_4e0 != lVar4) {
                _objc_enumerationMutation(puVar7);
              }
              lVar13 = *(long *)(lStack_4e8 + (long)puVar18 * 8);
              puVar8 = puVar3;
              func_0x00010c232ca0();
              if (((ulong)puVar8 & 1) != 0) {
                _objc_retain(lVar13);
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126b7550;
                if (lVar13 == 0) goto LAB_1053168ec;
                lVar4 = lVar13;
                func_0x00010c0dc140(lVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0ab160(puVar7);
                _objc_release(lVar4);
                func_0x00010bf88260(puVar3);
                if (dVar21 == 0.0) {
                  func_0x00010c12d300(param_4);
                  goto LAB_1053168ec;
                }
                lVar4 = lVar13;
                func_0x00010c0dc200(lVar13);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = *(undefined8 *)(param_4 + 0x18);
                func_0x00010c0e00e0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar9;
                func_0x00010bf64e40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                puVar7 = puVar3;
                dVar22 = dVar21;
                func_0x00010bf5a700(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                _objc_release(puVar7);
                _objc_release(uVar14);
                _objc_release(uVar9);
                _objc_release(lVar4);
                func_0x00010c12d300(param_4);
                if (dVar21 <= dVar22) goto LAB_1053168ec;
                func_0x00010be08480(param_4);
                func_0x00010bf436e0(param_5);
                goto LAB_1053165d0;
              }
              puVar18 = puVar18 + 1;
            } while (puVar19 != puVar18);
            puVar19 = puVar7;
            func_0x00010bf52a60();
          } while (puVar19 != (undefined *)0x0);
        }
        _objc_release(puVar7);
        lVar13 = 0;
LAB_1053168ec:
        puStack_528 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_520 = 0xc2000000;
        uStack_518 = 0x105316974;
        puStack_510 = &UNK_110848ba8;
        puStack_508 = param_4;
        _objc_retain(puVar3);
        puStack_500 = puVar3;
        _objc_retain(param_5);
        puStack_4f8 = param_5;
        func_0x0001000d76cc("APPSTORE",&puStack_528);
        _objc_release(puStack_4f8);
        _objc_release(puStack_500);
LAB_1053165d0:
        _objc_release(lVar13);
      }
      else {
        func_0x00010be62000(param_4);
        func_0x00010be08480(param_4);
        func_0x00010bf436e0(param_5);
      }
    }
    else {
      if (((ulong)puVar7 & 1) == 0 && !bVar11) {
        func_0x00010be08000(param_4);
      }
      else {
        if (iVar2 != 0) {
          func_0x00010be62000(param_4);
        }
        func_0x00010be08480(param_4);
      }
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      lStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      plStack_460 = (long *)0x0;
      _objc_retain(puVar6);
      puVar7 = puVar6;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar4 = *plStack_460;
        do {
          puVar19 = (undefined *)0x0;
          do {
            if (*plStack_460 != lVar4) {
              _objc_enumerationMutation(puVar6);
            }
            uVar14 = *(undefined8 *)(lStack_468 + (long)puVar19 * 8);
            func_0x00010c114fc0(uVar14);
            puVar18 = PTR_PTR_1126b7550;
            _objc_opt_class(uVar14);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ab100(puVar18);
            _objc_release(uVar14);
            puVar19 = puVar19 + 1;
          } while (puVar7 != puVar19);
          puVar7 = puVar6;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar6);
    }
  }
LAB_10531677c:
  _objc_release(puVar6);
LAB_105316780:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x20),PTR_s_addNotification_withSystemComple_11259c1d8,
             *(undefined8 *)(puVar3 + 0x28),*(undefined8 *)(puVar3 + 0x30));
  return;
}



/* Entry: 105316098; end: 105316963; -[SCAppNotificationProvider addNotification:withSystemCompletion:] */

void FUN_105316098(double param_1,ulong param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  ulong uStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  long lStack_88;
  ulong uVar6;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0) goto LAB_105316780;
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar4 & 1) == 0) {
    puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b8 = 0xc2000000;
    pcStack_2b0 = FUN_105316964;
    puStack_2a8 = &UNK_110848ba8;
    uStack_2a0 = param_2;
    _objc_retain(param_4);
    puStack_298 = param_4;
    _objc_retain(param_5);
    uStack_290 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_2c0);
    _objc_release(uStack_290);
    puVar4 = puStack_298;
  }
  else {
    puVar4 = param_4;
    func_0x00010c292820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dba0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    func_0x00010c133960(*(undefined8 *)(param_2 + 0x68));
    puVar4 = param_4;
    func_0x00010bf9cb20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = param_4;
      func_0x00010bf9cb20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (param_1 < 0.0) {
        puVar4 = param_4;
        func_0x00010bf58460();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          func_0x00010be08480(param_2);
        }
        else {
          func_0x00010befa0a0(param_2);
        }
        goto LAB_10531677c;
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aafa0(PTR_PTR_1126b7550);
    uVar6 = param_2;
    func_0x00010be42520();
    iVar3 = (int)uVar6;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    lVar14 = lVar10;
    func_0x00010bf52a60();
    if (lVar14 == 0) {
      bVar9 = true;
    }
    else {
      bVar1 = 0;
      lVar11 = *plStack_2f0;
      do {
        puVar5 = PTR_s_shouldFilterNotification_withSys_112669b98;
        lVar13 = 0;
        do {
          if (*plStack_2f0 != lVar11) {
            _objc_enumerationMutation(lVar10);
          }
          puVar17 = PTR_PTR_1126b7550;
          uVar15 = *(ulong *)(lStack_2f8 + lVar13 * 8);
          uVar7 = uVar15;
          _objc_opt_class(uVar15);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ab0e0(puVar17);
          _objc_release(uVar7);
          uVar7 = uVar15;
          _objc_opt_respondsToSelector(uVar15,puVar5);
          uVar16 = uVar15;
          if ((uVar7 & 1) == 0) {
            func_0x00010c2305a0();
          }
          else {
            func_0x00010c2305c0();
          }
          if ((long)uVar16 < 3) {
            if (uVar16 == 2) {
LAB_105316358:
              func_0x00010befa120(puVar4);
            }
            else if (uVar16 == 1) {
              if (iVar3 != 0) {
                func_0x00010be62000(param_2);
              }
              func_0x00010be08480(param_2);
LAB_105316598:
              puVar5 = PTR_PTR_1126b7550;
              _objc_opt_class(uVar15);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ab100(puVar5);
              _objc_release(uVar15);
              goto LAB_1053165d0;
            }
          }
          else {
            if (uVar16 == 4) {
              bVar1 = 1;
              goto LAB_105316358;
            }
            if (uVar16 == 3) {
              if (iVar3 == 0) {
                func_0x00010be08000(param_2);
              }
              else {
                func_0x00010be62000(param_2);
                func_0x00010be08480(param_2);
              }
              goto LAB_105316598;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = lVar10;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
      bVar9 = (bool)(bVar1 ^ 1);
    }
    _objc_release(lVar10);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_368 = 0;
      plStack_370 = (long *)0x0;
      lStack_378 = 0;
      uStack_380 = 0;
      lVar10 = *(long *)(param_2 + 8);
      _objc_retain(lVar10);
      lVar14 = lVar10;
      func_0x00010bf52a60();
      if (lVar14 != 0) {
        lVar11 = *plStack_370;
        do {
          lVar13 = 0;
          do {
            if (*plStack_370 != lVar11) {
              _objc_enumerationMutation(lVar10);
            }
            uVar12 = *(undefined8 *)(lStack_378 + lVar13 * 8);
            func_0x00010c114fc0(uVar12);
            puVar5 = PTR_PTR_1126b7550;
            _objc_opt_class(uVar12);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ab100(puVar5);
            _objc_release(uVar12);
            lVar13 = lVar13 + 1;
          } while (lVar14 != lVar13);
          lVar14 = lVar10;
          func_0x00010bf52a60();
        } while (lVar14 != 0);
      }
      _objc_release(lVar10);
      func_0x00010c0ab060(PTR_PTR_1126b7550);
      if (iVar3 == 0) {
        dVar18 = 0.0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        lStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3a8 = 0;
        plStack_3b0 = (long *)0x0;
        uVar6 = param_2;
        func_0x00010bf5f5c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf52a60();
        if (uVar7 != 0) {
          lVar14 = *plStack_3b0;
          do {
            uVar16 = 0;
            do {
              if (*plStack_3b0 != lVar14) {
                _objc_enumerationMutation(uVar6);
              }
              lVar10 = *(long *)(lStack_3b8 + uVar16 * 8);
              puVar5 = param_4;
              func_0x00010c232ca0();
              if (((ulong)puVar5 & 1) != 0) {
                _objc_retain(lVar10);
                _objc_release(uVar6);
                puVar5 = PTR_PTR_1126b7550;
                if (lVar10 == 0) goto LAB_1053168ec;
                lVar14 = lVar10;
                func_0x00010c0dc140(lVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0ab160(puVar5);
                _objc_release(lVar14);
                func_0x00010bf88260(param_4);
                if (dVar18 == 0.0) {
                  func_0x00010c12d300(param_2);
                  goto LAB_1053168ec;
                }
                lVar14 = lVar10;
                func_0x00010c0dc200(lVar10);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = *(undefined8 *)(param_2 + 0x18);
                func_0x00010c0e00e0(uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar8;
                func_0x00010bf64e40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                puVar5 = param_4;
                dVar19 = dVar18;
                func_0x00010bf5a700(param_4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                _objc_release(puVar5);
                _objc_release(uVar12);
                _objc_release(uVar8);
                _objc_release(lVar14);
                func_0x00010c12d300(param_2);
                if (dVar18 <= dVar19) goto LAB_1053168ec;
                func_0x00010be08480(param_2);
                func_0x00010bf436e0(param_5);
                goto LAB_1053165d0;
              }
              uVar16 = uVar16 + 1;
            } while (uVar7 != uVar16);
            uVar7 = uVar6;
            func_0x00010bf52a60();
          } while (uVar7 != 0);
        }
        _objc_release(uVar6);
        lVar10 = 0;
LAB_1053168ec:
        puStack_3f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3f0 = 0xc2000000;
        uStack_3e8 = 0x105316974;
        puStack_3e0 = &UNK_110848ba8;
        uStack_3d8 = param_2;
        _objc_retain(param_4);
        puStack_3d0 = param_4;
        _objc_retain(param_5);
        uStack_3c8 = param_5;
        func_0x0001000d76cc("APPSTORE",&puStack_3f8);
        _objc_release(uStack_3c8);
        _objc_release(puStack_3d0);
LAB_1053165d0:
        _objc_release(lVar10);
      }
      else {
        func_0x00010be62000(param_2);
        func_0x00010be08480(param_2);
        func_0x00010bf436e0(param_5);
      }
    }
    else {
      if ((uVar6 & 1) == 0 && !bVar9) {
        func_0x00010be08000(param_2);
      }
      else {
        if (iVar3 != 0) {
          func_0x00010be62000(param_2);
        }
        func_0x00010be08480(param_2);
      }
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      _objc_retain(puVar4);
      puVar5 = puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar14 = *plStack_330;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_330 != lVar14) {
              _objc_enumerationMutation(puVar4);
            }
            uVar12 = *(undefined8 *)(lStack_338 + (long)puVar17 * 8);
            func_0x00010c114fc0(uVar12);
            puVar2 = PTR_PTR_1126b7550;
            _objc_opt_class(uVar12);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ab100(puVar2);
            _objc_release(uVar12);
            puVar17 = puVar17 + 1;
          } while (puVar5 != puVar17);
          puVar5 = puVar4;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar4);
    }
  }
LAB_10531677c:
  _objc_release(puVar4);
LAB_105316780:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_addNotification_withSystemComple_11259c1d8,
             *(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
  return;
}



/* Entry: 105316964; end: 105316983;  */

void FUN_105316964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addNotification_withSystemComple_11259c1d8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105316984; end: 105316a33; -[SCAppNotificationProvider addTalkVoipNotification:] */

void FUN_105316984(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c420();
  if ((uVar1 < 0x23) && ((1L << (uVar1 & 0x3f) & 0x630000000U) != 0)) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105316a34;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_30 = param_3;
    uStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105316a34; end: 105316b17;  */

void FUN_105316a34(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c292820(*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c133960(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x68));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
  func_0x00010c0dc200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar3);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010bf9cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf9cb20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(uVar2);
    if (0.0 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010befc090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,*(undefined8 *)(param_2 + 0x28),
                 PTR_s_addToActiveNotificationExpiratio_11259c9c8,*(undefined8 *)(param_2 + 0x20));
      return;
    }
  }
  return;
}



/* Entry: 105316b18; end: 105316bd3; -[SCAppNotificationProvider _isNotificationSuppressedByNative:] */

uint FUN_105316b18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar1 = lVar2;
    _objc_opt_isKindOfClass(lVar2,puVar3);
    _objc_release(lVar2);
    uVar4 = (uint)lVar1 & (uint)(lVar2 != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105316bd4; end: 105316cb7; -[SCAppNotificationProvider _nativeSuppressionReason:] */

ulong FUN_105316bd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    uVar4 = 0xd;
  }
  else {
    uVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar4 = 0xd;
    }
    else {
      func_0x00010c067fc0(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105316cb8; end: 105317037; -[SCAppNotificationProvider _addNonDuplicateNotification:systemCompletion:] */

void FUN_105316cb8(ulong param_1,undefined1 *param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c22f2c0();
  ppuVar6 = param_3;
  if ((((ulong)ppuVar1 & 1) == 0) &&
     (ppuVar1 = param_3, func_0x00010c22f840(), ((ulong)ppuVar1 & 1) == 0)) {
    func_0x00010be08480(param_1);
    func_0x00010bf436e0(param_4);
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar2 = param_1;
    func_0x00010bf5f5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        uVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(uVar2);
          }
          ppuVar7 = *(undefined ***)(lStack_128 + uVar9 * 8);
          ppuVar1 = ppuVar7;
          func_0x00010c234d60();
          if (((ulong)ppuVar1 & 1) != 0) {
            _objc_retain(ppuVar7);
            _objc_release(uVar2);
            if (ppuVar7 == (undefined **)0x0) goto LAB_105316df4;
            func_0x00010be08480(param_1);
            func_0x00010bf436e0(param_4);
            goto LAB_105316fb8;
          }
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
    _objc_release(uVar2);
LAB_105316df4:
    ppuVar7 = param_3;
    func_0x00010c0dc200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf6b0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2c7c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c0ab040(PTR_PTR_1126b7550);
      func_0x00010c1338e0(*(undefined8 *)(param_1 + 0x68));
      func_0x00010be08480(param_1);
      func_0x00010bf436e0(param_4);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        func_0x00010c10a1e0(param_1);
        func_0x00010c283c60(param_3);
      }
      uVar2 = param_1;
      func_0x00010be3e260();
      if ((int)uVar2 == 0) {
        _objc_initWeak(auStack_138,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c13ecc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_105317038;
        puStack_160 = &UNK_110878c60;
        param_2 = auStack_138;
        _objc_copyWeak(auStack_148);
        _objc_retain(param_4);
        ppuVar1 = param_3;
        uStack_158 = param_4;
        _objc_retain(param_3);
        uStack_140 = (undefined1)uVar2;
        ppuStack_150 = param_3;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &puStack_178;
        func_0x00010c297280(uVar4);
        _objc_release(ppuVar1);
        _objc_release(ppuStack_150);
        _objc_release(uStack_158);
        _objc_destroyWeak(auStack_148);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_138);
      }
      else {
        func_0x00010be04a40(param_1);
      }
      _objc_release(lVar8);
    }
LAB_105316fb8:
    _objc_release(ppuVar7);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(param_2);
  ppuVar1 = param_3 + 6;
  _objc_loadWeakRetained();
  if (ppuVar1 != (undefined **)0x0) {
    if (((param_2 == (undefined1 *)0x0) || (ppuVar6 != (undefined **)0x0)) ||
       (puVar5 = param_2, func_0x00010bf10fa0(), puVar5 != (undefined1 *)0x2)) {
      func_0x00010be04a40(ppuVar1);
      goto LAB_1053170c4;
    }
    func_0x00010be08020(ppuVar1);
    func_0x00010c1338e0(ppuVar1[0xd]);
  }
  func_0x00010bf436e0(param_3[4]);
LAB_1053170c4:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105317038; end: 1053170df;  */

void FUN_105317038(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((param_2 == 0) || (param_3 != 0)) || (lVar2 = param_2, func_0x00010bf10fa0(), lVar2 != 2))
    {
      func_0x00010be04a40(lVar1);
      goto LAB_1053170c4;
    }
    func_0x00010be08020(lVar1);
    func_0x00010c1338e0(*(undefined8 *)(lVar1 + 0x68));
  }
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
LAB_1053170c4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053170e0; end: 105317253; -[SCAppNotificationProvider _displayNotification:isAppForegrounded:systemCompletion:] */

void FUN_1053170e0(double param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010be07ac0(param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcdf98;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcdfb8;
  }
  func_0x00010c0e00e0(uVar2,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86100();
  func_0x00010c1339c0(*(undefined8 *)(param_2 + 0x68),param_3,param_4);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = param_4;
  func_0x00010c0dc200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar5,param_3,param_4,lVar3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bf9cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010bf9cb20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(lVar3);
    if (0.0 < param_1) {
      func_0x00010befc080(param_1,param_2,param_3,param_4);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  if ((int)uVar5 != 0) {
    func_0x00010bf6f8c0(*(undefined8 *)(param_2 + 0x68),param_3,param_4);
  }
  func_0x00010bf436e0(param_6);
  _objc_release(uVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105317254; end: 10531725b; -[SCAppNotificationProvider addNotification:] */

void FUN_105317254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addNotification_withSystemComple_11259c1d8,param_3,0);
  return;
}



/* Entry: 10531725c; end: 1053172bf; -[SCAppNotificationProvider canDisplayNotification:] */

undefined8 FUN_10531725c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf6b0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2c7c0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1053172c0; end: 105317433; -[SCAppNotificationProvider addToActiveNotificationExpirations:withDuration:] */

void FUN_1053172c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  if (param_4 != 0) {
    func_0x00010c0dc200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6,param_3,puVar1,param_4);
    _objc_release(puVar1);
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0dff20(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c069d00(lVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    puVar1 = PTR_s_checkHasNotificationExpired__112528e70;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dc1758;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_60 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&lStack_60,&ppuStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1503c0(param_1,puVar4,param_3,param_2,puVar1,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar1 = puVar4;
    func_0x00010c1d0560(*(undefined8 *)(param_2 + 0x20),param_3,puVar4,param_4);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release();
    param_2 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c292820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x18),param_3,puVar4);
  func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x20),param_3,puVar4);
  if (lVar2 != 0) {
    func_0x00010c12d300(param_2,param_3,lVar2);
    lVar5 = lVar2;
    func_0x00010bf58460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010befa0a0(param_2,param_3,lVar5);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105317434; end: 105317503; -[SCAppNotificationProvider checkHasNotificationExpired:] */

void FUN_105317434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  if (lVar2 != 0) {
    func_0x00010c12d300(param_1,param_2,lVar2);
    lVar3 = lVar2;
    func_0x00010bf58460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010befa0a0(param_1,param_2,lVar3);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105317504; end: 10531755f; -[SCAppNotificationProvider currentNotifications] */

void FUN_105317504(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_alloc(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105317560; end: 105317567; -[SCAppNotificationProvider getPushNotificationPresenter:] */

void FUN_105317560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 105317568; end: 1053175e3; -[SCAppNotificationProvider _emitDisplayNotificationProcessingStepEvent:] */

void FUN_105317568(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6b90;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010be3e260(param_1);
    func_0x00010c0dcb80(puVar2,param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1053175e4; end: 105317667; -[SCAppNotificationProvider _emitSuppressionNotificationProcessingStepEvent:suppressionReason:] */

void FUN_1053175e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6b90;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010be3e260(param_1);
    func_0x00010c0dc1e0(puVar2,param_2,param_3,lVar1,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105317668; end: 1053176b3; -[SCAppNotificationProvider _emitNotificationProcessingStepEventSuppressedDueToOSPermission:] */

void FUN_105317668(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b6b90;
    func_0x00010c0dc1c0(PTR_PTR_1126b6b90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1053176b4; end: 1053176ff; -[SCAppNotificationProvider _emitNotificationProcessingStepEventNotificationIsClaimed:] */

void FUN_1053176b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b6b90;
    func_0x00010c0dc1a0(PTR_PTR_1126b6b90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105317700; end: 105317727; -[SCAppNotificationProvider _filterResultToString:] */

undefined ** FUN_105317700(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110878fa0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd1c98;
}



/* Entry: 105317728; end: 1053177f3; -[SCAppNotificationProvider .cxx_destruct] */

void FUN_105317728(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1053177f4; end: 1053178ab; -[SCNotificationProcessingManager addNotification:withSystemCompletion:] */

void FUN_1053177f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053178ac;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053178ac; end: 1053178bf;  */

void FUN_1053178ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),
             PTR_s_addNotification_withSystemComple_11259c1d8,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1053178c0; end: 1053178c7; -[SCNotificationProcessingManager addNotification:] */

void FUN_1053178c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addNotification_withSystemComple_11259c1d8,param_3,0);
  return;
}



/* Entry: 1053178c8; end: 1053178cf; -[SCNotificationProcessingManager addTalkVoipNotification:] */

void FUN_1053178c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addTalkVoipNotification__11259c8f0);
  return;
}



/* Entry: 1053178d0; end: 10531795f; -[SCNotificationProcessingManager removeNotification:] */

void FUN_1053178d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105317960;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105317960; end: 1053179d7;  */

void FUN_105317960(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1053179d8;
  puStack_28 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 1053179d8; end: 1053179e3;  */

void FUN_1053179d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_removeNotification__112628ee0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053179e4; end: 105317a6b; -[SCNotificationProcessingManager removeNotificationWithoutSuccess:] */

void FUN_1053179e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105317a6c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105317a6c; end: 105317a77;  */

void FUN_105317a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_removeNotificationWithoutSuccess_112628ee8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105317a78; end: 105317acf; -[SCNotificationProcessingManager userDidLogOut] */

void FUN_105317a78(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105317ad0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105317ad0; end: 105317adb;  */

void FUN_105317ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_userDidLogOut_112682148);
  return;
}



/* Entry: 105317adc; end: 105317b63; -[SCNotificationProcessingManager unregisterPushNotificationPresenter:] */

void FUN_105317adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105317b64;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105317b64; end: 105317b6f;  */

void FUN_105317b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2821b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_unregisterPushNotificationPresen_11267e290,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105317b70; end: 105317b77; -[SCNotificationProcessingManager getPushNotificationPresenter:] */

void FUN_105317b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getPushNotificationPresenter__1125cfeb0);
  return;
}



/* Entry: 105317b78; end: 105317bbf; -[SCNotificationProcessingManager .cxx_destruct] */

void FUN_105317b78(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105317bc0; end: 105317c23; -[SCNotificationsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105317bc0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112721794;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e7898;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105317c24; end: 105317ce3; -[SCNotificationsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105317c24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127217b0);
  _objc_destroyWeak(param_1 + _DAT_1127217ac);
  _objc_destroyWeak(param_1 + _DAT_112721788);
  _objc_destroyWeak(param_1 + _DAT_1127217a8);
  _objc_destroyWeak(param_1 + _DAT_1127217a4);
  _objc_storeStrong(param_1 + _DAT_112721790,0);
  _objc_destroyWeak(param_1 + _DAT_1127217a0);
  _objc_destroyWeak(param_1 + _DAT_11272179c);
  _objc_destroyWeak(param_1 + _DAT_112721798);
  _objc_storeStrong(param_1 + _DAT_112721784,0);
  _objc_storeStrong(param_1 + _DAT_11272178c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721794,0);
  return;
}



/* Entry: 105317ce4; end: 105317f83; -[SCPasswordHashRepositoryImpl initWithPreferences:circumstanceEngine:graphene:blizzard:] */

undefined8 *
FUN_105317ce4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined **unaff_x28;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e78a0;
  puVar1 = &uStack_80;
  puVar8 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_80 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    plVar10 = puVar1 + 1;
    lVar2 = *plVar10;
    *plVar10 = param_3;
    _objc_release(lVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar3);
    _objc_initWeak(&uStack_88,puVar1);
    lVar5 = *plVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110dd1d58;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105317f84;
    puStack_98 = &UNK_1108531d0;
    puVar8 = &uStack_88;
    _objc_copyWeak(auStack_90);
    lVar2 = lVar5;
    func_0x00010c0e06e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[6];
    puVar1[6] = lVar2;
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(&uStack_88);
    unaff_x28 = &puStack_b0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x20));
  _objc_destroyWeak(&uStack_88);
  __Unwind_Resume();
  _objc_retain(puVar8);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puVar1 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    }
    else {
      _objc_retain(puVar1);
      puVar7 = puVar1;
    }
    _objc_release(puVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar7);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 105317f84; end: 10531802b;  */

void FUN_105317f84(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10531802c; end: 1053181bf; -[SCPasswordHashRepositoryImpl hashPasswordAndSave:password:source:] */

void FUN_10531802c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd1d78,1,0);
  if ((int)uVar1 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf2c4e0(param_4,param_2,1);
    lVar3 = param_4;
    func_0x00010bf64920(param_4,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar4 = param_3;
      func_0x00010b704680();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126b7588;
        func_0x00010bfdea20(PTR_PTR_1126b7588,param_2,lVar3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b7590;
        _objc_alloc();
        lVar6 = lVar3;
        func_0x00010c08fa60(lVar3);
        func_0x00010c05b7e0(puVar7,param_2,param_3,puVar5,lVar6,lVar2);
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(param_3);
    if (puVar7 != (undefined *)0x0) {
      func_0x00010be99220(param_1,param_2,puVar7,param_3);
      puVar5 = puVar7;
      func_0x00010bdc0d80(puVar7);
      func_0x00010be58140(param_1,param_2,param_5,puVar5);
    }
    _objc_release(puVar7);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053181c0; end: 105318273; -[SCPasswordHashRepositoryImpl getPasswordHash:] */

void FUN_1053181c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf529e0(lVar1);
  func_0x00010be55660(param_1,param_2,lVar3 != 0,lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105318274; end: 105318353; -[SCPasswordHashRepositoryImpl removePasswordHash:] */

void FUN_105318274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar1;
    func_0x00010c0d3c80(puVar1);
  }
  func_0x00010c12d3e0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
  func_0x00010be52380(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105318354; end: 1053184d3; -[SCPasswordHashRepositoryImpl hashUpdatedObservableWithUserId:] */

void FUN_105318354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c0d9840(uVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0b8600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1053184d4; end: 1053185e3;  */

void FUN_1053184d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_2;
      func_0x00010bf00d20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010be55660(param_1);
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053185e4; end: 1053186db; -[SCPasswordHashRepositoryImpl _saveHash:userId:] */

void FUN_1053185e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar1;
    func_0x00010c0d3c80(puVar1);
  }
  func_0x00010c1d0640();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053186dc; end: 10531883f; -[SCPasswordHashRepositoryImpl _logSaveMetric:ASCII:] */

void FUN_1053186dc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7570;
  func_0x00010c14ab20(PTR_PTR_1126b7570);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 2) {
    param_3 = (ulong)(param_3 != 1);
  }
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd1d98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,1);
  puVar1 = PTR_PTR_1126b7578;
  _objc_alloc_init(PTR_PTR_1126b7578);
  func_0x00010c197d00();
  func_0x00010c206c40(puVar1,param_2,param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105318840; end: 1053188d3; -[SCPasswordHashRepositoryImpl _logDeleteMetric] */

void FUN_105318840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7570;
  func_0x00010bf6c540(PTR_PTR_1126b7570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,1);
  puVar2 = PTR_PTR_1126b7578;
  _objc_alloc_init(PTR_PTR_1126b7578);
  func_0x00010c197d00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053188d4; end: 105318a4f; -[SCPasswordHashRepositoryImpl _logLoadMetric:count:] */

void FUN_1053188d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7570;
  func_0x00010c09bdc0(PTR_PTR_1126b7570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1db8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd1dd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x18),param_2,puVar3,1);
  puVar1 = PTR_PTR_1126b7580;
  _objc_alloc_init(PTR_PTR_1126b7580);
  func_0x00010c226300();
  func_0x00010c1a7440(puVar1,param_2,param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}


