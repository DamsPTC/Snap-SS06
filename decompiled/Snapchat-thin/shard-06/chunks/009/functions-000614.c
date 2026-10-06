/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fce734; end: 104fce783; -[SCLegacyMainAppLogoutCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fce734(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718be0);
  _objc_destroyWeak(param_1 + _DAT_112718bdc);
  _objc_destroyWeak(param_1 + _DAT_112718bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718bd4);
  return;
}



/* Entry: 104fce784; end: 104fce787; -[SCScopeGraphNoOpPerformanceMetricsReporter reportLifecycleBeginStart:timestamp:] */

void FUN_104fce784(void)

{
  return;
}



/* Entry: 104fce788; end: 104fce78b; -[SCScopeGraphNoOpPerformanceMetricsReporter reportLifecycleBeginEnd:timestamp:] */

void FUN_104fce788(void)

{
  return;
}



/* Entry: 104fce78c; end: 104fce78f; -[SCScopeGraphNoOpPerformanceMetricsReporter reportEntryPointBeginStart:ofType:inLifecycle:timestamp:] */

void FUN_104fce78c(void)

{
  return;
}



/* Entry: 104fce790; end: 104fce793; -[SCScopeGraphNoOpPerformanceMetricsReporter reportEntryPointBeginEnd:ofType:inLifecycle:timestamp:] */

void FUN_104fce790(void)

{
  return;
}



/* Entry: 104fce794; end: 104fce817; -[SCScopeGraphPerformanceMetricsReporter initWithPerfLogger:lifecycleAndEntryPointLoggingEnabled:] */

undefined1 *
FUN_104fce794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5758;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fce818; end: 104fce93f; -[SCScopeGraphPerformanceMetricsReporter reportLifecycleBeginStart:timestamp:] */

void FUN_104fce818(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    _objc_retain(param_4);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dc1558);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_4);
    puVar3 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    func_0x00010c010c80();
    func_0x00010c0aa440(*(undefined8 *)(param_2 + 8),param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104fce940; end: 104fcea67; -[SCScopeGraphPerformanceMetricsReporter reportLifecycleBeginEnd:timestamp:] */

void FUN_104fce940(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    _objc_retain(param_4);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dc1558);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_4);
    puVar3 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    func_0x00010c010c80();
    func_0x00010c0aa440(*(undefined8 *)(param_2 + 8),param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104fcea68; end: 104fcebb7; -[SCScopeGraphPerformanceMetricsReporter reportEntryPointBeginStart:ofType:inLifecycle:timestamp:] */

void FUN_104fcea68(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dc1558);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_4);
    func_0x00010c1d0640(puVar2,param_3,param_6,&PTR____CFConstantStringClassReference_110dc14b8);
    _objc_release(param_6);
    puVar3 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    func_0x00010c010c80();
    func_0x00010c0aa440(*(undefined8 *)(param_2 + 8),param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104fcebb8; end: 104fced07; -[SCScopeGraphPerformanceMetricsReporter reportEntryPointBeginEnd:ofType:inLifecycle:timestamp:] */

void FUN_104fcebb8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dc1558);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_4);
    func_0x00010c1d0640(puVar2,param_3,param_6,&PTR____CFConstantStringClassReference_110dc14b8);
    _objc_release(param_6);
    puVar3 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    func_0x00010c010c80();
    func_0x00010c0aa440(*(undefined8 *)(param_2 + 8),param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104fced08; end: 104fced13; -[SCScopeGraphPerformanceMetricsReporter .cxx_destruct] */

void FUN_104fced08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fced14; end: 104fced67; -[SCScopeGraphPerformanceMetricsReporterEntryPoint begin] */

void FUN_104fced14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b33d8;
  _objc_alloc_init(PTR_PTR_1126b33d8);
  puVar2 = PTR_PTR_1126b33e0;
  func_0x00010c22b6a0(PTR_PTR_1126b33e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6b80();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fced68; end: 104fcedd7; -[SCScopeGraphPerformanceMetricsReporterEntryPoint end] */

void FUN_104fced68(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b33e0;
  func_0x00010c22b6a0(PTR_PTR_1126b33e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6b80();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1126e5760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fcedd8; end: 104fcede7; -[SCScopeGraphPerformanceMetricsReporterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcedd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718bec);
  return;
}



/* Entry: 104fcede8; end: 104fcef23; -[SCFlexibleUpgradeTakeoverProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcede8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b33e8;
  _objc_alloc(PTR_PTR_1126b33e8);
  lVar2 = param_1 + _DAT_112718bf0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112718bf4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c25d220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112718bf8;
  lVar6 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016920(puVar1,param_2,lVar3,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar4 = lVar2;
  func_0x00010c1018e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fcef24; end: 104fcef67; -[SCFlexibleUpgradeTakeoverProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcef24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718bf4);
  _objc_destroyWeak(param_1 + _DAT_112718bf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718bf8);
  return;
}



/* Entry: 104fcef68; end: 104fcf033; -[SCFlexibleUpgradeTakeoverProvider initWithFstCampaignDataProvider:stringFetcher:additionalMetricsData:] */

undefined1 *
FUN_104fcef68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5768;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fcf034; end: 104fcf07b; -[SCFlexibleUpgradeTakeoverProvider canShowCampaign:] */

undefined8 FUN_104fcf034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104fcf07c; end: 104fcf0ef; -[SCFlexibleUpgradeTakeoverProvider showCampaign:uiContainer:onComplete:] */

void FUN_104fcf07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  func_0x00010bdeabe0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fcf0f0; end: 104fcf21f; -[SCFlexibleUpgradeTakeoverProvider _createAndPresentCampaign:] */

void FUN_104fcf0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                      &PTR____CFConstantStringClassReference_110dc1578);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104fcf220;
  puStack_58 = &UNK_110857d70;
  uVar2 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3,param_2,&puStack_70,uVar2);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104fcf220; end: 104fcf40f;  */

void FUN_104fcf220(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        lVar3 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          lVar4 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            lVar1 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdedd40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(lVar2);
            _objc_release(lVar1);
            func_0x00010be7b5c0(*(undefined8 *)(param_1 + 0x20));
            _objc_release(uVar6);
            goto LAB_104fcf3f4;
          }
          goto LAB_104fcf3ec;
        }
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
LAB_104fcf3ec:
  func_0x00010be31a00(*(undefined8 *)(param_1 + 0x20));
LAB_104fcf3f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fcf410; end: 104fcf653; -[SCFlexibleUpgradeTakeoverProvider _createFlexibleUpdateDialogWithAlertTitle:alertMessageBody:updateActionTitle:dismissActionTitle:] */

void FUN_104fcf410(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR_PTR_1126aed70;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104fcf654;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  puVar5 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c18b5e0(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf7d780();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fcf654; end: 104fcf6e3;  */

void FUN_104fcf654(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fcf6e4; end: 104fcf78f; -[SCFlexibleUpgradeTakeoverProvider _presentFlexibleUpdateDialog:uiContainer:] */

void FUN_104fcf6e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010bf0c980(param_4,param_2,puVar1);
  _objc_release(param_4);
  func_0x00010c10eda0(puVar1,param_2,param_3,1,0);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fcf790; end: 104fcf7cf; -[SCFlexibleUpgradeTakeoverProvider _handleTakeoverProviderCallback] */

void FUN_104fcf790(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fcf7d0; end: 104fcf84b; -[SCFlexibleUpgradeTakeoverProvider didTapUpdate:] */

void FUN_104fcf7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_3,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d700();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb240();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be31a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleTakeoverProviderCallback_11256a020);
  return;
}



/* Entry: 104fcf84c; end: 104fcf8a3; -[SCFlexibleUpgradeTakeoverProvider didTapDismiss:] */

void FUN_104fcf84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_3,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb1c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be31a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleTakeoverProviderCallback_11256a020);
  return;
}



/* Entry: 104fcf8a4; end: 104fcf8eb; -[SCFlexibleUpgradeTakeoverProvider dialogDidDismiss:] */

void FUN_104fcf8a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb1c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be31a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleTakeoverProviderCallback_11256a020);
  return;
}



/* Entry: 104fcf8ec; end: 104fcf93f; -[SCFlexibleUpgradeTakeoverProvider .cxx_destruct] */

void FUN_104fcf8ec(long param_1)

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



/* Entry: 104fcf940; end: 104fcfc67; -[SCPlusMapCarsAndPetsController initWithValdiRuntimeProvider:scope:userInfoProvider:alertFactory:actionSheetFactory:notificationPresenterFactory:blizzardLogger:composerBoltUploader:cameraRollLibrary:composerStaticMapURLGenerator:currentPageTracker:mapLoggerEventSender:plusSubscribeScopeExposer:plusSubscribeScopeServices:] */

undefined8 *
FUN_104fcf940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  puStack_68 = PTR_PTR_1126e5770;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
  }
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fcfc68; end: 104fcfcbf; -[SCPlusMapCarsAndPetsController presentPlusTray] */

void FUN_104fcfc68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c27b5e0();
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be476b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchCarsTray_11256f748);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c27b5e0();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be47e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchPetsTray_11256f940);
    return;
  }
  return;
}



/* Entry: 104fcfcc0; end: 104fcfddb; -[SCPlusMapCarsAndPetsController _launchCarsTray] */

void FUN_104fcfcc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b33f0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1,param_2,uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b33f8;
  _objc_alloc();
  func_0x00010c02ecc0();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c292820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf5860(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c21ffe0(*(undefined8 *)(param_1 + 0x80),param_2,lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27ece0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be487c0(param_1,param_2,uVar2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104fcfddc; end: 104fcff1b; -[SCPlusMapCarsAndPetsController _launchPetsTray] */

void FUN_104fcfddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b33f0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1,param_2,uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b33f8;
  _objc_alloc();
  func_0x00010c02ecc0();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c292820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf58a0(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c21ffe0(*(undefined8 *)(param_1 + 0x80),param_2,lVar3);
  puVar1 = PTR_PTR_1126b3400;
  _objc_alloc(PTR_PTR_1126b3400);
  func_0x00010c040320();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27ece0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be487c0(param_1,param_2,puVar1,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104fcff1c; end: 104fcffcf; -[SCPlusMapCarsAndPetsController _launchTrayWithViewController:uiContainer:] */

void FUN_104fcff1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0a08;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c055640();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar2);
  func_0x00010c167420(*(undefined8 *)(param_1 + 0x78),param_2,0x12);
  func_0x00010c219e20(*(undefined8 *)(param_1 + 0x78),param_2,param_1);
  func_0x00010c219c20(*(undefined8 *)(param_1 + 0x78),param_2,1);
  func_0x00010c10c720(0x3fe3333333333333,*(undefined8 *)(param_1 + 0x78),param_2,param_4,0,0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fcffd0; end: 104fd0097; -[SCPlusMapCarsAndPetsController _trayWasClosed] */

void FUN_104fcffd0(undefined8 param_1)

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
  uStack_40 = 0x104fd0058;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104fd0098; end: 104fd00e7; -[SCPlusMapCarsAndPetsController _cleanup] */

void FUN_104fd0098(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd00e8; end: 104fd050f; -[SCPlusMapCarsAndPetsController _createViewForPetsTrayWithUserInfo:] */

void FUN_104fd00e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b3408;
    _objc_alloc();
    puVar2 = (undefined *)0x36;
    func_0x00010bc9107c(0x36);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04aae0();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000106c68d1c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104fd0510;
  puStack_90 = &UNK_1108606f8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0b7640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b3410;
  _objc_alloc(PTR_PTR_1126b3410);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27b180();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104fd0558;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bff09e0(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  func_0x00010c1c76c0(puVar6);
  puVar10 = PTR_PTR_1126b3418;
  _objc_alloc(PTR_PTR_1126b3418);
  func_0x00010c0616e0();
  func_0x00010c1cb280(puVar6);
  _objc_release(puVar10);
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c1b97e0(puVar6);
  puVar10 = PTR_PTR_1126b3420;
  _objc_alloc_init(PTR_PTR_1126b3420);
  puVar11 = PTR_PTR_1126b3428;
  _objc_alloc(PTR_PTR_1126b3428);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar12;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar11);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104fd0510; end: 104fd05bf;  */

void FUN_104fd0510(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fd05c0; end: 104fd06a3; -[SCPlusMapCarsAndPetsController _launchSubscribePage] */

void FUN_104fd05c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf23e60(uVar4,param_2,puVar3,puVar2,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fd06a4; end: 104fd092b; -[SCPlusMapCarsAndPetsController _createViewForCarsTrayWithUserInfo:] */

void FUN_104fd06a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3408;
  _objc_alloc(PTR_PTR_1126b3408);
  uVar2 = 0x36;
  func_0x00010bc9107c(0x36);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aae0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b7600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126b3430;
  _objc_alloc(PTR_PTR_1126b3430);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27b180(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bff2900(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c1c76c0(puVar5);
  puVar8 = PTR_PTR_1126b3438;
  _objc_alloc_init(PTR_PTR_1126b3438);
  puVar9 = PTR_PTR_1126b3440;
  _objc_alloc(PTR_PTR_1126b3440);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar9);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104fd092c; end: 104fd095f;  */

void FUN_104fd092c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010becf8e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fd0960; end: 104fd096f; -[SCPlusMapCarsAndPetsController tray:positionDidChange:] */

void FUN_104fd0960(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
    return;
  }
  return;
}



/* Entry: 104fd0970; end: 104fd0973; -[SCPlusMapCarsAndPetsController trayDidDismiss:] */

void FUN_104fd0970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 104fd0974; end: 104fd09bb; -[SCPlusMapCarsAndPetsController plusSubscribeDidDismiss] */

void FUN_104fd0974(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104fd09bc; end: 104fd0ac3; -[SCPlusMapCarsAndPetsController logActionWithActionInfo:] */

void FUN_104fd09bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c247b40(uVar7);
    uVar1 = param_3;
    func_0x00010beedca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bb01e90();
    uVar3 = param_3;
    func_0x00010c084c40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c084480(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0b9e20(lVar6,param_2,uVar7,uVar2,0,uVar3,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104fd0ac4; end: 104fd0ac7; -[SCPlusMapCarsAndPetsController logCloseWithCloseInfo:] */

void FUN_104fd0ac4(void)

{
  return;
}



/* Entry: 104fd0ac8; end: 104fd0bab; -[SCPlusMapCarsAndPetsController .cxx_destruct] */

void FUN_104fd0ac8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 104fd0bac; end: 104fd0fab; -[SCPlusMapCarsAndPetsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd0bac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  
  lVar1 = param_1 + _DAT_112718c54;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112718c58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x0001068316a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112718c5c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b0fb8;
  _objc_alloc(PTR_PTR_1126b0fb8);
  func_0x00010c0093c0();
  lVar7 = lVar5;
  func_0x00010c0b7000(lVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b3448;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112718c60;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112718c64;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112718c68;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112718c6c;
  lVar10 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar16 = lVar27;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112718c70;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c28f5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112718c74;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112718c78;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + _DAT_112718c7c);
  lVar26 = param_1 + _DAT_112718c80;
  _objc_loadWeakRetained();
  func_0x00010c060100(puVar6,param_2,lVar8,lVar2,lVar9,lVar12,lVar15,lVar17,lVar3,lVar4,lVar7,lVar19
                      ,lVar21,lVar25,uVar28,lVar26);
  lVar29 = (long)_DAT_112718c84;
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar6;
  _objc_release(uVar28);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar27);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  func_0x00010c10d980(*(undefined8 *)(param_1 + lVar29));
  _objc_release(lVar7);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104fd0fac; end: 104fd106f; -[SCPlusMapCarsAndPetsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd0fac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718c7c,0);
  _objc_destroyWeak(param_1 + _DAT_112718c80);
  _objc_destroyWeak(param_1 + _DAT_112718c78);
  _objc_destroyWeak(param_1 + _DAT_112718c70);
  _objc_destroyWeak(param_1 + _DAT_112718c5c);
  _objc_destroyWeak(param_1 + _DAT_112718c58);
  _objc_destroyWeak(param_1 + _DAT_112718c54);
  _objc_destroyWeak(param_1 + _DAT_112718c68);
  _objc_destroyWeak(param_1 + _DAT_112718c6c);
  _objc_destroyWeak(param_1 + _DAT_112718c60);
  _objc_destroyWeak(param_1 + _DAT_112718c74);
  _objc_destroyWeak(param_1 + _DAT_112718c64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718c84,0);
  return;
}



/* Entry: 104fd1070; end: 104fd1107; -[SCPlusMapCarsAndPetsViewController initWithNavigator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fd1070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112718c88;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c1c1bc0(*(undefined8 *)((long)puVar1 + lVar3));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd1108; end: 104fd115f; -[SCPlusMapCarsAndPetsViewController setValdiView:] */

void FUN_104fd1108(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c222380();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fd1160; end: 104fd11ab; -[SCPlusMapCarsAndPetsViewController viewDidLoad] */

void FUN_104fd1160(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5778;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 104fd11ac; end: 104fd11bf; -[SCPlusMapCarsAndPetsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd11ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718c88,0);
  return;
}



/* Entry: 104fd11c0; end: 104fd12f3; -[SCCPlusChatWallpaperPresenterImpl initWithUIContainer:conversationIdServices:performerProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:sourceType:] */

undefined1 *
FUN_104fd11c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e5780;
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd12f4; end: 104fd142b; -[SCCPlusChatWallpaperPresenterImpl presentChatWallpaperUpdaterForUserWithUserId:entryFeature:] */

void FUN_104fd12f4(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc1638;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(puVar1);
    _objc_release(ppuVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    func_0x00010be94e00(param_1);
    _objc_retain(puVar1);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd142c; end: 104fd14b3;  */

void FUN_104fd142c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar2);
  }
  else {
    ppuVar1 = (undefined **)(param_1 + 0x28);
    _objc_loadWeakRetained(ppuVar1);
    func_0x00010be7b660();
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fd14b4; end: 104fd15e7; -[SCCPlusChatWallpaperPresenterImpl presentChatWallpaperUpdaterForGroupWithGroupId:entryFeature:] */

void FUN_104fd14b4(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc1678;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(ppuVar1,param_2,ppuVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104fd15e8;
    puStack_68 = &UNK_110860758;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    ppuStack_50 = ppuVar1;
    uStack_48 = param_4;
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_80);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(ppuVar1);
    _objc_release(lStack_58);
    ppuVar5 = ppuVar1;
  }
  _objc_release(ppuVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104fd15e8; end: 104fd15fb;  */

void FUN_104fd15e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentForConversationId_entryF_11257c738,
             *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104fd15fc; end: 104fd1757; -[SCCPlusChatWallpaperPresenterImpl presentChatWallpaperPreviewForUserWithUserId:mediaItem:] */

void FUN_104fd15fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc1638;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(puVar1);
    _objc_release(ppuVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010be94e00(param_1);
    _objc_retain(puVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd1758; end: 104fd17db;  */

void FUN_104fd1758(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar2);
  }
  else {
    ppuVar1 = (undefined **)(param_1 + 0x30);
    _objc_loadWeakRetained(ppuVar1);
    func_0x00010be7d720();
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fd17dc; end: 104fd192f; -[SCCPlusChatWallpaperPresenterImpl presentChatWallpaperPreviewForGroupWithGroupId:mediaItem:] */

void FUN_104fd17dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = (undefined **)PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc1678;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(ppuVar1,param_2,ppuVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104fd1930;
    puStack_68 = &UNK_11084c4a0;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    ppuStack_48 = ppuVar1;
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_80);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(ppuVar1);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    ppuVar5 = ppuVar1;
  }
  _objc_release(ppuVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104fd1930; end: 104fd193f;  */

void FUN_104fd1930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentPreviewForConversationId_11257cf68,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104fd1940; end: 104fd1a47; -[SCCPlusChatWallpaperPresenterImpl _presentForConversationId:entryFeature:promise:] */

void FUN_104fd1940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fd1a48;
  puStack_60 = &UNK_1108607b8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104fd1a48; end: 104fd1ad7;  */

void FUN_104fd1a48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf22d60(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),0x94,
                        *(undefined4 *)(param_1 + 0x38),*(undefined8 *)(lVar1 + 8),lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x20),param_2,uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fd1ad8; end: 104fd1c2f; -[SCCPlusChatWallpaperPresenterImpl _presentPreviewForConversationId:mediaItem:promise:] */

void FUN_104fd1ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2d38;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00010bf44e40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf44c60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104fd1c30;
  puStack_70 = &UNK_110850cf8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  puStack_60 = puVar1;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fd1c30; end: 104fd1cb7;  */

void FUN_104fd1c30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf22d80(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x38),
                        *(undefined8 *)(lVar1 + 8),lVar1,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x20),param_2,uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fd1cb8; end: 104fd1e77; -[SCCPlusChatWallpaperPresenterImpl _resolveUserId:completion:] */

void FUN_104fd1cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar7 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf50420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c11de00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bf504e0(uVar2);
  _objc_release(lVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(lVar6 + 0x20);
  if (lVar6 != 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 104fd1e78; end: 104fd1ecb;  */

void FUN_104fd1e78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 104fd1ecc; end: 104fd1ecf; -[SCCPlusChatWallpaperPresenterImpl willDisplayChatCustomizationHubScope:] */

void FUN_104fd1ecc(void)

{
  return;
}



/* Entry: 104fd1ed0; end: 104fd1f27; -[SCCPlusChatWallpaperPresenterImpl didRequestDismissal:] */

void FUN_104fd1ed0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104fd1f28;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104fd1f28; end: 104fd1f37;  */

void FUN_104fd1f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104fd1f38; end: 104fd1fbb; -[SCCPlusChatWallpaperPresenterImpl didDismissChatCustomizationHubScope:] */

void FUN_104fd1f38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(lVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104fd1fbc; end: 104fd1fc3; -[SCCPlusChatWallpaperPresenterImpl isMemorySnap] */

undefined1 FUN_104fd1fbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 104fd1fc4; end: 104fd1fcb; -[SCCPlusChatWallpaperPresenterImpl setIsMemorySnap:] */

void FUN_104fd1fc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 104fd1fcc; end: 104fd202b; -[SCCPlusChatWallpaperPresenterImpl .cxx_destruct] */

void FUN_104fd1fcc(long param_1)

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



/* Entry: 104fd202c; end: 104fd2097; -[SCCPlusStatusBarUpdaterImpl initWithViewController:] */

undefined1 * FUN_104fd202c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd2098; end: 104fd20f7; -[SCCPlusStatusBarUpdaterImpl setStatusBarStyleWithStyle:animated:] */

void FUN_104fd2098(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104fd20f8;
  puStack_28 = &UNK_1108607e8;
  uStack_20 = param_1;
  uStack_18 = param_3;
  uStack_14 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 104fd20f8; end: 104fd21df;  */

void FUN_104fd20f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1d79e0();
  _objc_release(lVar1);
  uVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3400;
  _objc_opt_class(PTR_PTR_1126b3400);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  func_0x00010c20a360(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fd21e0; end: 104fd21e7; -[SCCPlusStatusBarUpdaterImpl .cxx_destruct] */

void FUN_104fd21e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104fd21e8; end: 104fd22c3; -[SCCPlusStoryBoostServiceImpl initWithBoostService:performerProvider:] */

undefined1 *
FUN_104fd21e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5790;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd22c4; end: 104fd2373; -[SCCPlusStoryBoostServiceImpl boost] */

void FUN_104fd22c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd2374; end: 104fd23cb;  */

void FUN_104fd2374(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_fulfillWithError__1125cc760);
    return;
  }
  puVar1 = PTR_PTR_1126b15a8;
  func_0x00010c27f660(PTR_PTR_1126b15a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd23cc; end: 104fd247b; -[SCCPlusStoryBoostServiceImpl hasEligibleStoriesToBoost] */

void FUN_104fd23cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd6940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd247c; end: 104fd248f;  */

void FUN_104fd247c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithError__1125cc760);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,param_2);
  return;
}



/* Entry: 104fd2490; end: 104fd24f7; -[SCCPlusStoryBoostServiceImpl observeBoostState] */

void FUN_104fd2490(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e08e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104fd24f8; end: 104fd2527; -[SCCPlusStoryBoostServiceImpl .cxx_destruct] */

void FUN_104fd24f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd2528; end: 104fd2533; -[SCFeatureSettingsService isStoryViewerNotificationsSettingsAvailable] */

void FUN_104fd2528(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc16b8);
  return;
}



/* Entry: 104fd2534; end: 104fd253f; -[SCFeatureSettingsService storyViewerNotificationsSettingsServerParam] */

undefined ** FUN_104fd2534(void)

{
  return &PTR____CFConstantStringClassReference_110dc16b8;
}



/* Entry: 104fd2540; end: 104fd254f; -[SCFeatureSettingsService setStoryViewerNotificationsSettings:] */

void FUN_104fd2540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110dc16b8,param_3);
  return;
}



/* Entry: 104fd2550; end: 104fd2577; -[SCFeatureSettingsService plus_story_viewed_notification_settings_client_value:] */

void FUN_104fd2550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104fd2578; end: 104fd259f; -[SCFeatureSettingsService plus_story_viewed_notification_settings_server_value:] */

void FUN_104fd2578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104fd25a0; end: 104fd25b3; -[SCFeatureSettingsService storyViewerNotificationsSettings] */

void FUN_104fd25a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110dc16b8,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104fd25b4; end: 104fd2657;  */

void FUN_104fd25b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b39c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106c68d1c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfbc160(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bfbc180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1820(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fd2658; end: 104fd268b;  */

void FUN_104fd2658(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3450;
  _objc_opt_new(PTR_PTR_1126b3450);
  func_0x00010c19aac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd268c; end: 104fd278b;  */

void FUN_104fd268c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b3458;
    func_0x00010c0cb140(PTR_PTR_1126b3458);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b3458;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR_PTR_1126b3458;
      _objc_alloc();
      func_0x00010c008360();
      if (puVar3 == (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b3458;
        func_0x00010c0cb140(PTR_PTR_1126b3458);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar3);
        puVar4 = puVar3;
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fd278c; end: 104fd27ff; -[SCPlusStoryViewerNotificationsSettings initWithfeatureSettingsService:] */

undefined1 * FUN_104fd278c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5798;
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



/* Entry: 104fd2800; end: 104fd28ab; -[SCPlusStoryViewerNotificationsSettings setSerializedConfig:] */

void FUN_104fd2800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf15d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_104fd268c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e080();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd28ac; end: 104fd292b; -[SCPlusStoryViewerNotificationsSettings getSerializedConfig] */

void FUN_104fd28ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ba20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_104fd268c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104fd292c; end: 104fd2937; -[SCPlusStoryViewerNotificationsSettings .cxx_destruct] */

void FUN_104fd292c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd2938; end: 104fd2d6f; -[SCPlusGiftingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd2938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  
  puVar1 = PTR_PTR_1126b3460;
  _objc_alloc();
  lVar28 = (long)_DAT_112718cbc;
  lVar2 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfbc160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027820(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b3468;
  _objc_alloc();
  lVar2 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112718cc0;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112718cc4;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112718cc8;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112718ccc;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112718cd0;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112718cd4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112718cd8;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_112718cdc;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_112718ce0;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_112718ce4;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_112718ce8;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112718cec;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_112718cf0;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112718cf4;
  _objc_loadWeakRetained();
  lVar23 = param_1 + _DAT_112718cf8;
  _objc_loadWeakRetained();
  uVar29 = *(undefined8 *)(param_1 + _DAT_112718cfc);
  lVar24 = param_1 + _DAT_112718d00;
  _objc_loadWeakRetained();
  lVar25 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c10f7c0();
  func_0x00010c004320(puVar6,param_2,lVar7,lVar4,lVar3,lVar5,lVar10,lVar11,lVar13,lVar14,lVar15,
                      lVar16,lVar17,lVar18,lVar19,lVar21,lVar22,lVar23,uVar29,lVar24,puVar1,lVar26,
                      param_1);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  puVar27 = PTR_PTR_1126b3400;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112718d04;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c10f7c0();
  func_0x00010c040320(puVar27,param_2,puVar6,lVar3,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar27);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


