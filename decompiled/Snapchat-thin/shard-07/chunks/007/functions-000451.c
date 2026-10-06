/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10584ca78; end: 10584cad7; -[SCMapUserPreferencesImpl setHasSeenWidgetOnboarding:] */

void FUN_10584ca78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c172fe0(*(undefined8 *)(param_1 + 8),param_2,param_3,
                      &PTR____CFConstantStringClassReference_110e07db8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10584cad8; end: 10584caff; -[SCMapUserPreferencesImpl widgetOnboardingSeenStatusObservable] */

void FUN_10584cad8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584cb00; end: 10584cb0f; -[SCMapUserPreferencesImpl sdkFootstepCacheEvictionNeeded] */

void FUN_10584cb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07dd8);
  return;
}



/* Entry: 10584cb10; end: 10584cb6f; -[SCMapUserPreferencesImpl setSdkFootstepCacheEvictionNeeded:] */

void FUN_10584cb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c172fe0(*(undefined8 *)(param_1 + 8),param_2,param_3,
                      &PTR____CFConstantStringClassReference_110e07dd8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10584cb70; end: 10584cb97; -[SCMapUserPreferencesImpl sdkFootstepCacheEvictionNeededObservable] */

void FUN_10584cb70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584cb98; end: 10584cba7; -[SCMapUserPreferencesImpl lastTappedSeeLessPetsDate] */

void FUN_10584cb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dateForKey__1125b6d90,
             &PTR____CFConstantStringClassReference_110e07df8);
  return;
}



/* Entry: 10584cba8; end: 10584cbb7; -[SCMapUserPreferencesImpl setLastTappedSeeLessPetsDate:] */

void FUN_10584cba8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e07df8);
  return;
}



/* Entry: 10584cbb8; end: 10584cc0b; -[SCMapUserPreferencesImpl .cxx_destruct] */

void FUN_10584cbb8(long param_1)

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



/* Entry: 10584cc0c; end: 10584cc43; -[SCMapUserPreferencesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10584cc0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272abc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272abc8);
  return;
}



/* Entry: 10584cc44; end: 10584cc97; -[SCMapGRPCValisService dealloc] */

void FUN_10584cc44(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ea9b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10584cc98; end: 10584cd33; -[SCMapGRPCValisService valisUnaryService] */

void FUN_10584cc98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126bc1b8;
    func_0x000106b13ab0(PTR_PTR_1126bc1b8,&PTR____CFConstantStringClassReference_110e07e18,
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x98));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126bf268;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x60);
  }
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10584cd34; end: 10584cdcf; -[SCMapGRPCValisService valisBidiStreamingService] */

void FUN_10584cd34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x5c);
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126bc1b8;
    func_0x000106b13ab0(PTR_PTR_1126bc1b8,&PTR____CFConstantStringClassReference_110e07e18,
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0xa0));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126bf268;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10584cdd0; end: 10584ce6b; -[SCMapGRPCValisService valisPrefsService] */

void FUN_10584cdd0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x80);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126bc1b8;
    func_0x000106b13ab0(PTR_PTR_1126bc1b8,&PTR____CFConstantStringClassReference_110e07e38,
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0xa8));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126bf270;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x88);
  }
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10584ce6c; end: 10584ce93; -[SCMapGRPCValisService errorObservable] */

void FUN_10584ce6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584ce94; end: 10584cea3; -[SCMapGRPCValisService _publishError:] */

void FUN_10584ce94(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xd8),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 10584cea4; end: 10584cecb; -[SCMapGRPCValisService streamRejectedObservable] */

void FUN_10584cea4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584cecc; end: 10584d0f3; -[SCMapGRPCValisService updateWithClientUpdate:preferenceData:completion:] */

void FUN_10584cecc(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **unaff_x23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar1 = param_1;
    func_0x00010c25c460();
    if ((int)lVar1 != 0) {
      func_0x00010bee4660(param_1);
      goto LAB_10584d084;
    }
    if (*(char *)(param_1 + 0x38) == '\x01') {
      _objc_initWeak(auStack_58,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10584d0f4;
      puStack_80 = &UNK_1108b78a0;
      unaff_x23 = &puStack_98;
      param_2 = auStack_58;
      _objc_copyWeak(auStack_60);
      _objc_retain(param_3);
      lStack_78 = param_3;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(param_5);
      uStack_68 = param_5;
      func_0x00010beb00a0(param_1);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_10584d084;
    }
  }
  unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c15b8e0(param_1);
  _objc_release(unaff_x23);
  _objc_release(param_5);
LAB_10584d084:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 7);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  if (param_2 == (undefined1 *)0x0) {
    param_3 = param_3 + 0x38;
    _objc_loadWeakRetained();
    if (param_3 != 0) {
      func_0x00010bee4660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
  return;
}



/* Entry: 10584d0f4; end: 10584d13f;  */

void FUN_10584d0f4(long param_1,long param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bee4660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10584d140; end: 10584d15b;  */

void FUN_10584d140(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010584d154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 10584d15c; end: 10584d1b7; -[SCMapGRPCValisService setStreamingEnabled:] */

void FUN_10584d15c(long param_1,undefined8 param_2,byte param_3)

{
  if ((*(byte *)(param_1 + 0xf1) & 1) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x38) = param_3;
  if ((param_3 & 1) != 0) {
    FUN_1058539e8();
                    /* WARNING: Could not recover jumptable at 0x00010beb0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupStreamingConnectionIfNeces_1125899c8)
    ;
    return;
  }
  FUN_105853a60(*(undefined8 *)(param_1 + 0xd0),1);
                    /* WARNING: Could not recover jumptable at 0x00010becb090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__teardownStreamingConnection_1125905c8);
  return;
}



/* Entry: 10584d1b8; end: 10584d63f; -[SCMapGRPCValisService _logUnaryPublish:] */

void FUN_10584d1b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0;
  puStack_1d8 = &uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x2020000000;
  uStack_1c8 = 0;
  puStack_1f8 = &uStack_200;
  uStack_200 = 0;
  uStack_1f0 = 0x2020000000;
  uStack_1e8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x2020000000;
  uStack_208 = 0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0beae0(*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar9 != lVar10);
    lVar9 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  ppuStack_160 = &PTR____CFConstantStringClassReference_110e07e58;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e07e78;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_130 = puVar2;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e07e98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_128 = puVar3;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e07eb8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_120 = puVar4;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e07ed8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar5;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e07ef8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_108 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_200,8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_180,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_200,8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_180,8);
  __Unwind_Resume();
  lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
  return;
}



/* Entry: 10584d640; end: 10584d6cf;  */

void FUN_10584d640(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 10584d6d0; end: 10584d9f3; -[SCMapGRPCValisService sendClientUpdatesUsingUnaryConnection:preferenceData:completionQueue:completion:] */

void FUN_10584d6d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_188 = param_5;
  _objc_retain(param_5);
  uStack_180 = param_6;
  _objc_retain(param_6);
  FUN_105854000(*(undefined8 *)(param_1 + 0xd0),1);
  func_0x00010be5a040(param_1);
  puVar2 = PTR_PTR_1126bf278;
  _objc_alloc_init();
  func_0x00010bfcc660(param_4);
  puStack_178 = puVar2;
  func_0x00010c1a3a20(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x27 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar5 = *(undefined8 *)(param_1 + 0xd0);
        unaff_x28 = unaff_x27;
        FUN_10584d9f4();
        _objc_retainAutoreleasedReturnValue();
        FUN_105854258(uVar5,unaff_x28,1);
        _objc_release(unaff_x28);
        FUN_105852538(unaff_x27,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x27);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  func_0x00010c21cac0(puStack_178);
  _objc_initWeak(auStack_138,param_1);
  lVar3 = param_1;
  func_0x00010c296d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_10584db88;
  puStack_158 = &UNK_1108b7a20;
  _objc_copyWeak(auStack_140,auStack_138);
  uVar1 = uStack_180;
  _objc_retain(uStack_180);
  uVar5 = uStack_188;
  uStack_148 = uVar1;
  _objc_retain(uStack_188);
  uStack_150 = uVar5;
  func_0x00010c15b8c0(lVar3);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar2);
  _objc_release(puStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  lVar3 = param_3;
  __Unwind_Resume();
  pcStack_198 = FUN_10584d9f4;
  uStack_1c0 = unaff_x28;
  uStack_1b8 = unaff_x27;
  uStack_1b0 = param_4;
  lStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (lVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    pcStack_1d8 = FUN_1058513f4;
    uStack_1d0 = 0x105851404;
    uStack_1c8 = 0;
    func_0x00010c0beae0(lVar3);
    ppuVar4 = (undefined **)puStack_1e8[5];
    _objc_retain(ppuVar4);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(uStack_1c8);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10584d9f4; end: 10584db87;  */

void FUN_10584d9f4(long param_1)

{
  undefined **ppuVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1058513f4;
    uStack_40 = 0x105851404;
    uStack_38 = 0;
    func_0x00010c0beae0(param_1);
    ppuVar1 = (undefined **)puStack_58[5];
    _objc_retain(ppuVar1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10584db88; end: 10584dcc3;  */

void FUN_10584db88(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  double dStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be83f80();
    _objc_release(lVar2);
  }
  if (param_2 == 0) {
    dVar3 = 0.0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c1348c0();
    dVar3 = (double)(lVar2 / 1000);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(dVar3,lVar2,param_3);
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10584dcc4;
      puStack_60 = &UNK_11085b7b0;
      _objc_retain(lVar2);
      lStack_50 = lVar2;
      _objc_retain(param_3);
      lStack_58 = param_3;
      dStack_48 = dVar3;
      func_0x00010007380c(lVar1,&puStack_78);
      _objc_release(lStack_58);
      _objc_release(lStack_50);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10584dcc4; end: 10584dcd7;  */

void FUN_10584dcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010584dcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10584dcd8; end: 10584dee7; -[SCMapGRPCValisService getFriendLocationClustersUsingUnaryConnection:completionQueue:completion:] */

void FUN_10584dcd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10584dee8;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_58 = param_5;
    func_0x00010007380c(param_4,&puStack_78);
    puVar1 = puStack_58;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_105853778(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_80,param_1);
    lVar3 = param_1;
    func_0x00010c296d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed0ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(puVar1);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010bfc5e00(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10584dee8; end: 10584df3f;  */

void FUN_10584dee8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf280;
  _objc_alloc(PTR_PTR_1126bf280);
  func_0x00010c0154e0();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10584df40; end: 10584e0e3;  */

void FUN_10584df40(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar2);
    FUN_105853ee8(*(undefined8 *)(lVar1 + 0xd0),param_4 == 0,(long)(param_1 * 1000.0));
    FUN_105853dd0(*(undefined8 *)(lVar1 + 0xd0),param_4 == 0,1);
    uVar3 = param_3;
    FUN_1058538b4(param_3,*(undefined8 *)(lVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      func_0x00010be83f80(lVar1);
    }
    lVar5 = *(long *)(param_2 + 0x30);
    if (lVar5 != 0) {
      lVar4 = *(long *)(param_2 + 0x28);
      if (lVar4 == 0) {
        (**(code **)(lVar5 + 0x10))(lVar5,uVar3,param_4);
      }
      else {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_10584e0e4;
        puStack_70 = &UNK_11084a9e8;
        _objc_retain(lVar5);
        lStack_58 = lVar5;
        _objc_retain(uVar3);
        uStack_68 = uVar3;
        _objc_retain(param_4);
        lStack_60 = param_4;
        func_0x00010007380c(lVar4,&puStack_88);
        _objc_release(lStack_60);
        _objc_release(uStack_68);
        _objc_release(lStack_58);
      }
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10584e0e4; end: 10584e0f7;  */

void FUN_10584e0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010584e0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10584e0f8; end: 10584e267; -[SCMapGRPCValisService getLocationSharingPreferencesWithCompletionQueue:completion:] */

void FUN_10584e0f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_105854168(*(undefined8 *)(param_1 + 0xd0),1);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126bf288;
  _objc_alloc_init(PTR_PTR_1126bf288);
  lVar2 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfc72e0(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10584e268; end: 10584e41b;  */

void FUN_10584e268(long param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == (undefined *)0x0) || (param_3 != (undefined *)0x0)) {
    if (param_3 == (undefined *)0x0) goto LAB_10584e350;
  }
  else {
    puVar2 = param_2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      param_3 = param_2;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10584e434;
      puStack_90 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar1);
      puStack_88 = param_3;
      uStack_78 = uVar1;
      _objc_retain(param_2);
      puStack_80 = param_2;
      _objc_retain(param_3);
      func_0x00010007380c(uVar3,&puStack_a8);
      _objc_release(puStack_80);
      _objc_release(puStack_88);
      uVar3 = uStack_78;
      goto LAB_10584e3f0;
    }
LAB_10584e350:
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10584e41c;
  puStack_58 = &UNK_11084aaa8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  puStack_50 = param_3;
  uStack_48 = uVar1;
  _objc_retain(param_3);
  func_0x00010007380c(uVar3,&puStack_70);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f80();
  _objc_release(param_1);
  _objc_release(puStack_50);
  uVar3 = uStack_48;
LAB_10584e3f0:
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10584e41c; end: 10584e433;  */

void FUN_10584e41c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010584e430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0xffffffffffffffff,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10584e434; end: 10584e49f;  */

void FUN_10584e434(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c15f600(uVar2);
  FUN_10584e4a0(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c298be0(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10584e4a0; end: 10584e617;  */

void FUN_10584e4a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c2a4b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf1c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfcc660();
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x00010bfcc6a0(), lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfcc6a0(param_1);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600((double)((lVar1 - param_2) / 1000),PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126bf2d8;
  _objc_alloc(PTR_PTR_1126bf2d8);
  func_0x00010bf0eca0();
  func_0x00010bfcc660(param_1);
  func_0x00010c0e7d40(param_1);
  func_0x00010c045c80(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10584e618; end: 10584e6b7; -[SCMapGRPCValisService setLocationSharingPreferences:basedOnLastKnownPreferencesVersion:source:completionQueue:completion:] */

void FUN_10584e618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  FUN_1058541e0(uVar1,1);
  func_0x00010bea5700(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10584e6b8; end: 10584e91f; -[SCMapGRPCValisService muteFriendLocationWithId:version:completion:] */

void FUN_10584e6b8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 ***pppuVar9;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 **ppuStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_105854078(*(undefined8 *)(param_1 + 0xd0),1);
  puVar8 = auStack_78;
  pppuVar9 = &ppuStack_80;
  uVar1 = param_3;
  func_0x000100576d08(param_3,puVar8);
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126afad0;
    _objc_alloc_init();
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar2);
    pppuVar9 = (undefined8 ***)ppuStack_80;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4000();
      _objc_release(puVar4);
      _objc_initWeak(auStack_78,param_1);
      pppuVar5 = (undefined8 ***)PTR_PTR_1126bf290;
      _objc_alloc_init();
      func_0x00010c19fd80();
      func_0x00010bf885a0(param_4);
      func_0x00010c186e60(pppuVar5);
      lVar6 = param_1;
      func_0x00010c296d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed0ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10584e920;
      puStack_98 = &UNK_1108b7ab0;
      _objc_retain(param_5);
      puVar8 = auStack_78;
      uStack_90 = param_5;
      _objc_copyWeak(auStack_88,puVar8);
      pppuVar9 = pppuVar5;
      func_0x00010c0d3fc0(lVar6);
      _objc_release(param_1);
      _objc_release(lVar6);
      _objc_destroyWeak(auStack_88);
      _objc_release(uStack_90);
      _objc_release(pppuVar5);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar3);
      _objc_release(puVar2);
      unaff_x27 = &puStack_b0;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x28));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(pppuVar9);
  if (pppuVar9 == (undefined8 ***)0x0) {
    lVar6 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar6);
    puVar7 = puVar8;
    func_0x00010bfb8220(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0d94e0(puVar8);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f420(lVar6);
    _objc_release(puVar2);
    _objc_release(puVar7);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,0,pppuVar9);
    lVar6 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be83f80();
  }
  _objc_release(lVar6);
  _objc_release(pppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10584e920; end: 10584ea17;  */

void FUN_10584e920(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    uVar1 = param_2;
    func_0x00010bfb8220(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0d94e0(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f420(param_1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be83f80();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10584ea18; end: 10584ec7f; -[SCMapGRPCValisService unmuteFriendLocationWithId:version:completion:] */

void FUN_10584ea18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 ***pppuVar9;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 **ppuStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_1058540f0(*(undefined8 *)(param_1 + 0xd0),1);
  puVar8 = auStack_78;
  pppuVar9 = &ppuStack_80;
  uVar1 = param_3;
  func_0x000100576d08(param_3,puVar8);
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126afad0;
    _objc_alloc_init();
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar2);
    pppuVar9 = (undefined8 ***)ppuStack_80;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4000();
      _objc_release(puVar4);
      _objc_initWeak(auStack_78,param_1);
      pppuVar5 = (undefined8 ***)PTR_PTR_1126bf298;
      _objc_alloc_init();
      func_0x00010c19fd80();
      func_0x00010bf885a0(param_4);
      func_0x00010c186e60(pppuVar5);
      lVar6 = param_1;
      func_0x00010c296d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed0ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10584ec80;
      puStack_98 = &UNK_1108b7ae0;
      _objc_retain(param_5);
      puVar8 = auStack_78;
      uStack_90 = param_5;
      _objc_copyWeak(auStack_88,puVar8);
      pppuVar9 = pppuVar5;
      func_0x00010c281980(lVar6);
      _objc_release(param_1);
      _objc_release(lVar6);
      _objc_destroyWeak(auStack_88);
      _objc_release(uStack_90);
      _objc_release(pppuVar5);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar3);
      _objc_release(puVar2);
      unaff_x27 = &puStack_b0;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x28));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(pppuVar9);
  if (pppuVar9 == (undefined8 ***)0x0) {
    lVar6 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar6);
    puVar7 = puVar8;
    func_0x00010bfb8220(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0d94e0(puVar8);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f420(lVar6);
    _objc_release(puVar2);
    _objc_release(puVar7);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,0,pppuVar9);
    lVar6 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be83f80();
  }
  _objc_release(lVar6);
  _objc_release(pppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10584ec80; end: 10584ed77;  */

void FUN_10584ec80(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    uVar1 = param_2;
    func_0x00010bfb8220(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0d94e0(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f420(param_1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be83f80();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10584ed78; end: 10584eeb3; -[SCMapGRPCValisService getMutedFriendsWithCompletion:] */

void FUN_10584ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126bf2a0;
  _objc_alloc_init(PTR_PTR_1126bf2a0);
  uVar2 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfc7c20(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10584eeb4; end: 10584efab;  */

void FUN_10584eeb4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    uVar1 = param_2;
    func_0x00010bfb8220(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c298be0(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f420(param_1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be83f80();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10584efac; end: 10584efdb; -[SCMapGRPCValisService setMutedLocationsSet:] */

void FUN_10584efac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10584efdc; end: 10584f0a3; -[SCMapGRPCValisService _handleResponseWithFriendIDs:version:completion:] */

void FUN_10584efdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff4000(puVar1);
  _objc_release(uVar2);
  (**(code **)(param_5 + 0x10))(param_5,puVar1,param_4,0);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10584f0a4; end: 10584f123;  */

void FUN_10584f0a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe2ee0(param_2);
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  _objc_release(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10584f124; end: 10584f2b7; -[SCMapGRPCValisService sendFeedbackForLocationRequestFromRequesterId:acceptedLive:] */

void FUN_10584f124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf2a8;
  _objc_alloc_init(PTR_PTR_1126bf2a8);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_48,auStack_50);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c1ec440(puVar1);
  _objc_release(puVar3);
  func_0x00010c19b260(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010c09d740(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10584f2b8; end: 10584f343;  */

void FUN_10584f2b8(long param_1,long param_2,undefined *param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0 && param_3 == (undefined *)0x0) {
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be83f80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10584f344; end: 10584f4ab; -[SCMapGRPCValisService canRequestLocationForFriendId:isLiveLocationRequest:completion:] */

void FUN_10584f344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bf2b0;
  _objc_alloc_init(PTR_PTR_1126bf2b0);
  func_0x00010c19fd60();
  func_0x00010c1b23a0(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010bf2d420(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10584f4ac; end: 10584f56b;  */

void FUN_10584f4ac(long param_1,long param_2,undefined *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_2 == 0 && param_3 == (undefined *)0x0) {
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be83f80(lVar2);
    lVar3 = param_2;
    func_0x00010c252440();
    uVar1 = (int)lVar3 - 1;
    lVar3 = 0;
    if (uVar1 < 4) {
      lVar3 = (ulong)uVar1 + 1;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3,param_3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10584f56c; end: 10584f78b; -[SCMapGRPCValisService getLocationRequestStatusForRequesterId:receiverId:isLiveLocationRequest:completion:] */

void FUN_10584f56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bf2b8;
  _objc_alloc_init(PTR_PTR_1126bf2b8);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c1ec440(puVar1);
  _objc_release(puVar3);
  uVar2 = param_4;
  func_0x000100576d08(param_4,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c1e83a0(puVar1);
  _objc_release(puVar3);
  func_0x00010c1b23a0(puVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_6);
  func_0x00010bfc7180(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10584f78c; end: 10584f847;  */

void FUN_10584f78c(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0 && param_3 == (undefined *)0x0) {
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be83f80(lVar1);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010c06e0c0(param_2);
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2,param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10584f848; end: 10584fa27; -[SCMapGRPCValisService cancelLocationRequestForFriendId:isLiveLocationRequest:completion:] */

void FUN_10584f848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bf2a8;
  _objc_alloc_init(PTR_PTR_1126bf2a8);
  puVar2 = PTR_PTR_1126bf2c0;
  _objc_alloc_init(PTR_PTR_1126bf2c0);
  uVar3 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar4);
  func_0x00010c1b23a0(puVar2);
  func_0x00010c178200(puVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  func_0x00010c09d740(uVar3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10584fa28; end: 10584facb;  */

void FUN_10584fa28(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0 && param_3 == (undefined *)0x0) {
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be83f80(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_3 == (undefined *)0x0);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10584facc; end: 10584faf3; -[SCMapGRPCValisService friendLocationClustersObservable] */

void FUN_10584facc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584faf4; end: 10584fafb; -[SCMapGRPCValisService _setupStreamingConnectionIfNecessary] */

void FUN_10584faf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb00b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupStreamingConnectionIfNeces_1125899d0,0)
  ;
  return;
}



/* Entry: 10584fafc; end: 10584fb97; -[SCMapGRPCValisService _setupStreamingConnectionIfNecessaryWithCompletion:] */

void FUN_10584fafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0xf1) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10584fb98;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10584fb98; end: 10584fc17;  */

void FUN_10584fb98(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((*(char *)(uVar1 + 0x38) == '\x01') && (func_0x00010c07d5a0(), (uVar1 & 1) == 0)) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c25c460();
    if (((uVar1 & 1) == 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x28) & 1) == 0)) {
      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar2;
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010beb0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__setupStreamingConnection_1125899c0);
      return;
    }
  }
  return;
}



/* Entry: 10584fc18; end: 10584fc77; -[SCMapGRPCValisService _setupStreamingConnection] */

void FUN_10584fc18(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + 0xf1) & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10584fc78;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f88c0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  }
  return;
}



/* Entry: 10584fc78; end: 10584fe07;  */

void FUN_10584fc78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  FUN_105853ad8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xf2) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 200) = 0xffffffffffffffff;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c296ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd41a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  uVar4 = uVar2;
  func_0x00010bf42be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10584fe08; end: 10584ff2f;  */

void FUN_10584fe08(double param_1,long param_2,int param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010be83f80(param_2);
    lVar1 = param_4;
    func_0x00010c15e680();
    if (lVar1 == 1) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      dVar3 = param_1 * 1000.0;
      _objc_release(puVar2);
      FUN_105853b50(*(undefined8 *)(param_2 + 0xd0),(long)dVar3);
    }
    if (param_3 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar2);
      FUN_1058543cc(*(undefined8 *)(param_2 + 0xd0),(long)(param_1 * 1000.0));
    }
    func_0x00010be312c0(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10584ff30; end: 10584ff87; -[SCMapGRPCValisService _teardownStreamingConnection] */

void FUN_10584ff30(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10584ff88;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 10584ff88; end: 10585000f;  */

void FUN_10584ff88(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c25c460();
  if (iVar1 != 0) {
    FUN_105853bc8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),
                  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xf2),1);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xf2) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 200) = 0xffffffffffffffff;
    func_0x00010bf3de00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8),PTR_s_next__112614028,
               PTR____kCFBooleanFalse_11034ab60);
    return;
  }
  return;
}



/* Entry: 105850010; end: 105850083; -[SCMapGRPCValisService _handleStreamEventWithIsDone:response:error:] */

void FUN_105850010(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 & 1) == 0) && (param_5 == 0)) {
    if (param_4 != 0) {
      func_0x00010be822c0(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010be17300(param_1,param_2,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105850084; end: 105850123; -[SCMapGRPCValisService _retryStreamingConnectionSetupAfterDelay] */

void FUN_105850084(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c082b20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x4008000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__retryStreamingConnection_11252b4c8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105850124; end: 10585014f; -[SCMapGRPCValisService _retryStreamingConnection] */

void FUN_105850124(long param_1)

{
  FUN_105853ce0(*(undefined8 *)(param_1 + 0xd0),1);
                    /* WARNING: Could not recover jumptable at 0x00010beb0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupStreamingConnectionIfNeces_1125899c8);
  return;
}



/* Entry: 105850150; end: 10585026b; -[SCMapGRPCValisService _finishStreamingWithError:] */

void FUN_105850150(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    FUN_105853d58(*(undefined8 *)(param_1 + 0xd0),1);
    lVar2 = param_3;
    func_0x00010bf660a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010becb080(*(undefined8 *)(param_3 + 0x20));
  *(undefined1 *)(*(long *)(param_3 + 0x20) + 0x28) = 0;
  lVar1 = *(long *)(param_3 + 0x20);
  lVar2 = *(long *)(lVar1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_3 + 0x28));
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30);
    *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30) = 0;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_3 + 0x20);
  }
  if (*(char *)(lVar1 + 0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be970b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__retryStreamingConnectionSetupAf_1125835c8);
    return;
  }
  return;
}



/* Entry: 10585026c; end: 1058502df;  */

void FUN_10585026c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010becb080(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (*(char *)(lVar1 + 0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be970b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__retryStreamingConnectionSetupAf_1125835c8);
    return;
  }
  return;
}



/* Entry: 1058502e0; end: 1058505db; -[SCMapGRPCValisService _processServerUpdate:] */

void FUN_1058502e0(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (0 < *(long *)(param_1 + 200)) {
    puVar2 = param_3;
    func_0x00010c15e680();
    if (puVar2 != (undefined *)(*(long *)(param_1 + 200) + 1)) {
      func_0x00010becb080(param_1);
      func_0x00010be970a0(param_1);
      goto LAB_1058505a0;
    }
  }
  puVar2 = param_3;
  func_0x00010c15e680();
  *(undefined **)(param_1 + 200) = puVar2;
  puVar3 = param_3;
  func_0x00010c0cb760();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar1 = (int)puVar3;
  if (iVar1 == 1) {
    puVar2 = param_3;
    func_0x00010bfb7da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59460(param_1);
    _objc_release(puVar2);
    puVar3 = param_3;
    func_0x00010bfb7da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0b9740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126bf2c8;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15e680(param_3);
      func_0x00010bfff460();
      _objc_release(puVar4);
LAB_105850584:
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb0));
      _objc_release(puVar3);
    }
  }
  else if (iVar1 == 4) {
    puVar3 = param_3;
    func_0x00010c25c640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121ea0();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  }
  else {
    if (iVar1 != 3) goto LAB_1058505a0;
    puVar2 = param_3;
    func_0x00010bf16ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf3e940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) goto LAB_1058505a0;
    puVar3 = param_3;
    func_0x00010bf16ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf3e940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126bf2c8;
      _objc_alloc();
      func_0x00010c15e680(param_3);
      func_0x00010bfff460();
      goto LAB_105850584;
    }
  }
  _objc_release(puVar2);
LAB_1058505a0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c0b9740(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be59460(*(undefined8 *)(param_3 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1058505dc; end: 105850647;  */

void FUN_1058505dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0b9740(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be59460(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105850648; end: 10585075b; -[SCMapGRPCValisService _updateWithClientUpdateUsingStreamingGRPCConnection:preferenceData:completion:] */

void FUN_105850648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = param_3;
  FUN_10584d9f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105854258(uVar1,uVar2,1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10585075c; end: 105850967;  */

void FUN_10585075c(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e07f18;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = uVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105850968;
  puStack_78 = &UNK_1108b7c80;
  lStack_70 = *(long *)(param_1 + 0x28);
  func_0x00010c0beae0(*(undefined8 *)(param_1 + 0x20));
  puVar2 = *(undefined1 **)(param_1 + 0x28);
  func_0x00010c25c460();
  if ((int)puVar2 != 0) {
    _objc_initWeak(auStack_98,*(undefined8 *)(param_1 + 0x28));
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105850978;
    puStack_b0 = &UNK_11088fbf8;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    unaff_x23 = &puStack_c8;
    uStack_a8 = uVar1;
    _objc_copyWeak(auStack_a0,auStack_98);
    ppuVar3 = &puStack_c8;
    _objc_retainBlock(ppuVar3);
    puVar4 = PTR_PTR_1126bf2d0;
    _objc_alloc(PTR_PTR_1126bf2d0);
    func_0x00010c0003e0();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    FUN_105852538(uVar1,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b400(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_a8);
    puVar2 = auStack_98;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(puVar2 + 0x20) + 0xf2) = 1;
  return;
}



/* Entry: 105850968; end: 105850977;  */

void FUN_105850968(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xf2) = 1;
  return;
}



/* Entry: 105850978; end: 1058509df;  */

void FUN_105850978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058509e0; end: 105850d33; -[SCMapGRPCValisService _setLocationSharingPreferences:basedOnLastKnownPreferencesVersion:source:completionQueue:completion:] */

void FUN_1058509e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf2e0;
  _objc_alloc_init(PTR_PTR_1126bf2e0);
  lVar2 = param_3;
  func_0x00010bfcc660();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bfcc6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010bfcc6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      func_0x00010c1a3a40(puVar1);
      _objc_release(lVar2);
    }
  }
  puVar3 = PTR_PTR_1126bf2e8;
  _objc_alloc_init(PTR_PTR_1126bf2e8);
  func_0x00010bfcc660(param_3);
  func_0x00010c1a3a20(puVar3);
  func_0x00010c22c5c0();
  func_0x00010c16b9c0(puVar3);
  lVar2 = param_3;
  func_0x00010c2a4ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x000100504554();
  lVar5 = lVar4;
  func_0x00010c0d3c80();
  func_0x00010c225520(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf1c9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x000100504554();
  lVar5 = lVar4;
  func_0x00010c0d3c80();
  func_0x00010c1718e0(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c220e20(puVar3);
  func_0x00010c0e7d40(param_3);
  func_0x00010c1d4540(puVar3);
  func_0x00010c1dfdc0(puVar1);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a9e0();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_3);
  uVar7 = param_1;
  func_0x00010c296d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1bfce0(uVar7);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105850d34; end: 105850ec3;  */

void FUN_105850d34(long param_1,long param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0 && param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be83f80();
  _objc_release(lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105850e48;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  lStack_48 = param_2;
  puStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(puStack_40);
  _objc_release(lStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105850ec4; end: 105850ecb;  */

void FUN_105850ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupStreamingConnectionIfNeces_1125899c8);
  return;
}



/* Entry: 105850ecc; end: 105850f37; -[SCMapGRPCValisService _unaryCallOptions] */

void FUN_105850ecc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc1b8;
  func_0x00010bdc9120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b13b74(puVar1,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105850f38; end: 105850fa7; -[SCMapGRPCValisService _bidiStreamingCallOptions] */

void FUN_105850f38(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc1b8;
  func_0x00010bdc9120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b13b74(puVar1,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105850fa8; end: 105850fe3; -[SCMapGRPCValisService _additionalHeader] */

undefined ** FUN_105850fa8(long param_1)

{
  undefined **ppuVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    return &PTR__OBJC_CLASS___NSConstantDictionary_1111749a0;
  }
  func_0x00010c07d5a0();
  ppuVar1 = (undefined **)0x0;
  if ((int)param_1 != 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_1111749c8;
  }
  return ppuVar1;
}



/* Entry: 105850fe4; end: 105850ff7;  */

void FUN_105850fe4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105850ff8; end: 105851197; -[SCMapGRPCValisService _logStreamedFriendCluster:] */

void FUN_105850ff8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  ppuVar5 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfe2ee0();
  ppuVar7 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar7;
  func_0x00010c0b5940();
  func_0x000100c4a928(ppuVar2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar7);
  _objc_release(ppuVar1);
  ppuVar1 = param_3;
  func_0x00010c2734c0();
  if (((ulong)ppuVar1 & 1) == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    ppuVar1 = param_3;
    func_0x00010bf3e740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar6 = *plStack_110;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(ppuVar1);
          }
          func_0x00010be59440(param_1);
          ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        } while (ppuVar2 != ppuVar7);
        ppuVar2 = ppuVar1;
        ppuVar5 = &puStack_120;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    ppuVar4 = ppuVar5;
  }
  _objc_release(ppuVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  ppuVar1 = ppuVar4;
  func_0x00010bfde100();
  if ((int)ppuVar1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e07f38;
  }
  else {
    ppuVar2 = ppuVar4;
    func_0x00010c2923e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    func_0x00010bfe2ee0();
    ppuVar3 = ppuVar4;
    func_0x00010c2923e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c0b5940();
    func_0x000100c4a928(ppuVar7,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar7;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 105851198; end: 105851263; -[SCMapGRPCValisService _logStreamedClusterMember:] */

void FUN_105851198(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bfde100();
  if ((int)ppuVar1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e07f38;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bfe2ee0();
    ppuVar4 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar4;
    func_0x00010c0b5940();
    func_0x000100c4a928(ppuVar3,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105851264; end: 105851273; -[SCMapGRPCValisService _annotationLogDescriptions:] */

void FUN_105851264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_1108b7d00);
  return;
}



/* Entry: 105851274; end: 1058512af;  */

undefined ** FUN_105851274(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  func_0x00010bf04380();
  if (param_2 - 1U < 4) {
    ppuVar1 = (undefined **)(&PTR_PTR_1108b7da0)[param_2 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e07fb8;
  }
  return ppuVar1;
}



/* Entry: 1058512b0; end: 1058512bb; -[SCMapGRPCValisService isSecondaryDevice] */

byte FUN_1058512b0(long param_1)

{
  return *(byte *)(param_1 + 0xf3) & 1;
}



/* Entry: 1058512bc; end: 1058513f3; -[SCMapGRPCValisService .cxx_destruct] */

void FUN_1058512bc(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058513f4; end: 1058514b3;  */

void FUN_1058513f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058514b4; end: 1058515b3;  */

void FUN_1058514b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe2ee0(param_2);
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  _objc_release(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058515b4; end: 10585167b;  */

void FUN_1058515b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585167c; end: 1058516f3; -[SCMapStreamingCallbackHandler initWithCompletion:] */

undefined1 * FUN_10585167c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea9b8;
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



/* Entry: 1058516f4; end: 10585184b; -[SCMapStreamingCallbackHandler onSend:] */

void FUN_1058516f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_3;
    func_0x00010c252ee0();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c252ee0(param_3);
      lVar2 = param_3;
      func_0x00010bf98fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),lVar1 == 0,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10585184c; end: 105851857; -[SCMapStreamingCallbackHandler .cxx_destruct] */

void FUN_10585184c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105851858; end: 1058518bf; -[SCMapValisServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105851858(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ac6c);
  _objc_destroyWeak(param_1 + _DAT_11272ac68);
  _objc_destroyWeak(param_1 + _DAT_11272ac64);
  _objc_destroyWeak(param_1 + _DAT_11272ac60);
  _objc_destroyWeak(param_1 + _DAT_11272ac5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ac58);
  return;
}



/* Entry: 1058518c0; end: 10585212f; -[SCVSClusterMember mapPersonLocationWithFriendCluster:currentUserId:workEnabled:] */

void FUN_1058518c0(float param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined **param_6)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_2a0;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined1 uStack_258;
  double dStack_250;
  double dStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 uStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_5;
  _objc_retain(param_4);
  uVar14 = (undefined1)uVar5;
  _objc_retain(param_5);
  ppuVar2 = param_2;
  func_0x00010bfde100();
  if ((int)ppuVar2 == 0) {
    ppuVar19 = param_4;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar19;
    func_0x00010bfe2ee0();
    ppuVar20 = param_4;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar19 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar19;
    func_0x00010bfe2ee0();
    ppuVar20 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar3 = ppuVar20;
  func_0x00010c0b5940();
  func_0x000100c4a928(ppuVar2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  ppuVar3 = param_2;
  func_0x00010c27dfa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = &PTR_PTR_1126bf000;
  ppuVar4 = (undefined **)PTR_PTR_1126bf300;
  ppuVar13 = ppuVar3;
  func_0x00010c253fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf346c0(param_4);
  dVar25 = (double)param_1;
  func_0x00010bf346e0(param_4);
  dVar22 = (double)param_1;
  _CLLocationCoordinate2DMake();
  ppuVar16 = ppuVar3;
  dVar23 = dVar25;
  func_0x00010bfd5a40();
  fVar21 = SUB84(dVar23,0);
  ppuVar6 = ppuVar4;
  if ((int)ppuVar16 != 0) {
    ppuVar20 = ppuVar3;
    func_0x00010bf492a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar20;
    func_0x00010c07ef60();
    if ((int)ppuVar16 == 0) {
LAB_105851b04:
      _objc_release(ppuVar20);
    }
    else {
      uVar5 = param_5;
      ppuVar13 = ppuVar2;
      func_0x00010c0720c0();
      _objc_release(ppuVar20);
      if ((int)uVar5 != 0) {
        ppuVar20 = ppuVar3;
        func_0x00010bf492a0(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08aca0();
        dVar26 = (double)fVar21;
        ppuVar16 = ppuVar3;
        func_0x00010bf492a0(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09abe0();
        dVar23 = (double)fVar21;
        _CLLocationCoordinate2DMake(dVar26,dVar23);
        _objc_release(ppuVar16);
        _objc_release(ppuVar20);
        func_0x000108d312a8(dVar26,dVar23,dVar25,dVar22);
        ppuVar20 = ppuVar3;
        dVar23 = dVar26;
        func_0x00010bf492a0();
        fVar21 = SUB84(dVar23,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11ef60();
        dVar23 = (double)fVar21;
        _objc_release(ppuVar20);
        if (dVar23 < dVar26) {
          ppuVar6 = (undefined **)PTR_PTR_1126bf300;
          func_0x00010bf6a540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = ppuVar4;
          goto LAB_105851b04;
        }
      }
    }
  }
  ppuVar4 = ppuVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar16 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar16 == (undefined **)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    ppuVar2 = param_2;
    func_0x00010c09eb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar20 == (undefined **)0x0) {
      ppuVar19 = (undefined **)0x0;
LAB_105851b8c:
      ppuVar16 = (undefined **)0x0;
    }
    else {
      ppuVar2 = ppuVar20;
      func_0x00010bf04380();
      if ((int)ppuVar2 == 1) {
        ppuVar19 = (undefined **)0x0;
        ppuVar16 = (undefined **)0x1;
      }
      else {
        ppuVar2 = ppuVar20;
        func_0x00010bf04380();
        if (((int)param_6 == 0) || ((int)ppuVar2 != 2)) {
          ppuVar2 = ppuVar20;
          func_0x00010bf04380();
          if ((int)ppuVar2 == 3) {
            ppuVar2 = ppuVar20;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar2;
            func_0x00010bfe2ee0();
            ppuVar19 = ppuVar2;
            func_0x00010c0b5940(ppuVar2);
            func_0x000100c4a928(ppuVar16,ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar16;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar16);
            _objc_release();
            goto LAB_105851b8c;
          }
          ppuVar2 = ppuVar20;
          func_0x00010bf04380();
          ppuVar19 = (undefined **)0x0;
          ppuVar16 = (undefined **)0x3;
          if ((int)ppuVar2 != 4) {
            ppuVar16 = (undefined **)0x0;
          }
        }
        else {
          ppuVar19 = (undefined **)0x0;
          ppuVar16 = (undefined **)0x2;
        }
      }
    }
    func_0x000109021ed4();
    if ((2 < (long)ppuVar2 - 1U) &&
       (bVar1 = ppuVar2 == (undefined **)0x4, ppuVar2 = ppuVar16, bVar1)) {
      _objc_release(ppuVar19);
      ppuVar19 = &PTR____CFConstantStringClassReference_110e08098;
    }
    ppuVar16 = param_2;
    ppuStack_1a8 = ppuVar2;
    func_0x00010c088260();
    ppuStack_1b0 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    ppuStack_198 = ppuVar20;
    ppuStack_170 = ppuVar4;
    ppuStack_168 = param_4;
    if ((int)ppuVar16 == 0) {
      ppuStack_1b0 = (undefined **)0x0;
    }
    else {
      ppuVar2 = param_2;
      func_0x00010c088260();
      fVar21 = SUB84((double)((ulong)ppuVar2 & 0xffffffff),0);
      func_0x00010bf655e0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_1a0 = ppuVar19;
    ppuStack_190 = ppuVar6;
    ppuStack_188 = ppuVar3;
    uStack_178 = param_5;
    func_0x00010c08aca0(param_2);
    dVar27 = (double)fVar21;
    ppuVar2 = param_2;
    func_0x00010c09abe0();
    dVar24 = (double)fVar21;
    _CLLocationCoordinate2DMake();
    dVar23 = dVar22;
    dVar26 = dVar25;
    if (((1.1920928955078125e-07 < ABS(dVar27)) && (1.1920928955078125e-07 < ABS(dVar24))) &&
       (_CLLocationCoordinate2DIsValid(dVar27,dVar24), dVar23 = dVar24, dVar26 = dVar27,
       ((ulong)ppuVar2 & 1) == 0)) {
      dVar23 = dVar22;
      dVar26 = dVar25;
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010beed060(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    ppuStack_180 = param_2;
    func_0x00010beed040();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_2;
    func_0x00010bf52a60();
    fVar21 = (float)uVar5;
    if (ppuVar2 != (undefined **)0x0) {
      lVar15 = *plStack_150;
      do {
        ppuVar20 = (undefined **)0x0;
        do {
          if (*plStack_150 != lVar15) {
            _objc_enumerationMutation(param_2);
          }
          lVar18 = *(long *)(lStack_158 + (long)ppuVar20 * 8);
          lVar8 = lVar18;
          func_0x00010c27dd80();
          if (((int)lVar8 == 1) || ((int)lVar8 == 2)) {
            lVar8 = lVar18;
            func_0x00010bf4db80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar17 = PTR_PTR_1126bf308;
            lVar9 = lVar18;
            if (lVar8 == 0) {
              lVar8 = lVar18;
              func_0x00010bf4cce0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar17 = PTR_PTR_1126bf308;
              if (lVar8 == 0) goto LAB_105851f1c;
              func_0x00010bf4cce0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4cda0();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bf4db80(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c28fb40();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(lVar9);
            if (puVar17 != (undefined *)0x0) {
              puVar10 = PTR_PTR_1126bf310;
              _objc_alloc(PTR_PTR_1126bf310);
              lVar8 = lVar18;
              func_0x00010bfe5ea0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0d4f60(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c01bc20(puVar10);
              _objc_release(lVar18);
              _objc_release(lVar8);
              func_0x00010befa120(puVar7);
              _objc_release(puVar10);
              _objc_release(puVar17);
            }
          }
LAB_105851f1c:
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar2 != ppuVar20);
        ppuVar2 = param_2;
        func_0x00010bf52a60();
        fVar21 = (float)uVar5;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(param_2);
    puVar17 = PTR_PTR_1126bf130;
    _objc_alloc();
    ppuVar19 = ppuStack_180;
    func_0x00010bfe40a0(ppuStack_180);
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    ppuVar2 = ppuVar19;
    func_0x00010c2709c0(ppuVar19);
    dVar27 = (double)((long)ppuVar2 / 1000);
    func_0x00010bf655e0(dVar27);
    _objc_retainAutoreleasedReturnValue();
    param_6 = ppuStack_168;
    func_0x00010c09e300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuStack_190;
    ppuVar4 = ppuStack_190;
    if (ppuStack_190 == (undefined **)0x0) {
      ppuVar4 = (undefined **)PTR_PTR_1126bf300;
      func_0x00010bf6a540(PTR_PTR_1126bf300);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf17500(ppuVar19);
    puVar11 = puVar7;
    func_0x00010bf51e00();
    puStack_1b8 = puVar7;
    func_0x00010c076b00();
    ppuVar16 = ppuStack_1a0;
    ppuVar2 = ppuStack_1b0;
    uStack_1c0 = SUB81(ppuVar19,0);
    ppuStack_1d0 = ppuStack_1a0;
    uStack_1e0 = 0;
    ppuStack_1d8 = ppuStack_1a8;
    ppuVar13 = ppuStack_170;
    puVar7 = puVar10;
    dVar24 = dVar25;
    puStack_1c8 = puVar11;
    func_0x00010c05ae80(dVar25,dVar22,(double)fVar21,dVar26,dVar23,dVar27);
    fVar21 = SUB84(dVar24,0);
    uVar14 = SUB81(puVar7,0);
    _objc_release(puVar11);
    ppuVar3 = ppuStack_188;
    ppuVar19 = ppuStack_198;
    if (ppuVar20 == (undefined **)0x0) {
      _objc_release(ppuVar4);
    }
    _objc_release(param_6);
    _objc_release(puVar10);
    _objc_release(puStack_1b8);
    _objc_release(ppuVar2);
    _objc_release(ppuVar19);
    _objc_release(ppuVar16);
    param_4 = ppuStack_168;
    ppuVar4 = ppuStack_170;
    param_5 = uStack_178;
    ppuVar6 = ppuVar20;
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(param_5);
  ppuVar16 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_1e8 = FUN_105852130;
  dStack_250 = dVar22;
  dStack_248 = dVar25;
  ppuStack_240 = ppuVar19;
  ppuStack_238 = ppuVar6;
  ppuStack_230 = param_6;
  uStack_228 = param_5;
  ppuStack_220 = ppuVar4;
  ppuStack_218 = ppuVar20;
  ppuStack_210 = ppuVar3;
  puStack_208 = puVar17;
  ppuStack_200 = ppuVar2;
  ppuStack_1f8 = param_4;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar13);
  ppuVar2 = ppuVar16;
  func_0x00010c2734c0();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar16;
    func_0x00010bf3e740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar2;
    func_0x00010bf529e0();
    if (ppuVar20 == (undefined **)0x0) {
      _objc_release(ppuVar2);
    }
    else {
      ppuVar20 = ppuVar16;
      func_0x00010bfd7d20();
      _objc_release(ppuVar2);
      if (((ulong)ppuVar20 & 1) != 0) goto LAB_1058521b8;
    }
LAB_105852314:
    puVar17 = (undefined *)0x0;
  }
  else {
    ppuVar2 = ppuVar16;
    func_0x00010bfd7d20();
    if ((int)ppuVar2 == 0) goto LAB_105852314;
LAB_1058521b8:
    func_0x00010bf346c0(ppuVar16);
    dVar23 = (double)fVar21;
    func_0x00010bf346e0(ppuVar16);
    dVar25 = (double)fVar21;
    _CLLocationCoordinate2DMake(dVar23,dVar25);
    ppuVar2 = ppuVar16;
    func_0x00010bf3e740();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_105852528;
    puStack_270 = &UNK_1108b7dc0;
    ppuStack_268 = ppuVar16;
    _objc_retain(ppuVar13);
    ppuVar20 = ppuVar2;
    ppuStack_260 = ppuVar13;
    uStack_258 = uVar14;
    func_0x000100504554(ppuVar2,&puStack_288);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar16;
    func_0x00010bfde940();
    puStack_2a0 = PTR_PTR_1126bf318;
    if ((int)ppuVar2 == 0) {
      puStack_2a0 = (undefined *)0x0;
    }
    else {
      ppuVar2 = ppuVar16;
      func_0x00010c2bd580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    func_0x000109021bec();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar2;
    func_0x00010c08fa60();
    _objc_release(ppuVar2);
    puVar17 = PTR_PTR_1126bf318;
    if (ppuVar19 != (undefined **)0x0) {
      func_0x000109021bec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bbd00(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_2a0);
      _objc_release(ppuVar2);
      puStack_2a0 = puVar17;
    }
    ppuVar2 = ppuVar16;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar2;
    func_0x00010bfe2ee0();
    ppuVar3 = ppuVar16;
    func_0x00010bfe5ea0(ppuVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0b5940();
    func_0x000100c4a928(ppuVar19,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar19;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar19);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    puVar17 = PTR_PTR_1126bf100;
    _objc_alloc(PTR_PTR_1126bf100);
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar2 = ppuVar16;
    func_0x00010bfb2e40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar3 = ppuVar16;
    func_0x00010c118ae0(ppuVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2734c0();
    func_0x00010bfcf300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar16;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035720(dVar23,dVar25,puVar17);
    _objc_release(ppuVar12);
    _objc_release(ppuVar16);
    _objc_release(puVar10);
    _objc_release(ppuVar6);
    _objc_release(ppuVar3);
    _objc_release(puVar7);
    _objc_release(ppuVar19);
    _objc_release(ppuVar2);
    _objc_release(ppuVar4);
    _objc_release(puStack_2a0);
    _objc_release(ppuVar20);
    _objc_release(ppuStack_260);
  }
  _objc_release(ppuVar13);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105852130; end: 105852527; -[SCVSFriendCluster mapPersonLocationClusterWithCurrentUserId:workEnabled:] */

void FUN_105852130(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_c0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c2734c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf3e740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_2;
      func_0x00010bfd7d20();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_1058521b8;
    }
  }
  else {
    uVar1 = param_2;
    func_0x00010bfd7d20();
    if ((int)uVar1 != 0) {
LAB_1058521b8:
      func_0x00010bf346c0(param_2);
      dVar12 = (double)param_1;
      func_0x00010bf346e0(param_2);
      dVar11 = (double)param_1;
      _CLLocationCoordinate2DMake(dVar12,dVar11);
      uVar1 = param_2;
      func_0x00010bf3e740();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105852528;
      puStack_90 = &UNK_1108b7dc0;
      uStack_88 = param_2;
      _objc_retain(param_4);
      uVar2 = uVar1;
      uStack_80 = param_4;
      uStack_78 = param_5;
      func_0x000100504554(uVar1,&puStack_a8);
      _objc_release(uVar1);
      uVar1 = param_2;
      func_0x00010bfde940();
      puStack_c0 = PTR_PTR_1126bf318;
      if ((int)uVar1 == 0) {
        puStack_c0 = (undefined *)0x0;
      }
      else {
        uVar1 = param_2;
        func_0x00010c2bd580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b7680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
      }
      func_0x000109021bec();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c08fa60();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126bf318;
      if (uVar3 != 0) {
        func_0x000109021bec();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bbd00(0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_c0);
        _objc_release(uVar1);
        puStack_c0 = puVar4;
      }
      uVar1 = param_2;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bfe2ee0();
      uVar5 = param_2;
      func_0x00010bfe5ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0b5940();
      func_0x000100c4a928(uVar3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar1);
      puVar10 = PTR_PTR_1126bf100;
      _objc_alloc(PTR_PTR_1126bf100);
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar1 = param_2;
      func_0x00010bfb2e40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar5 = param_2;
      func_0x00010c118ae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2734c0();
      func_0x00010bfcf300();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_2;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c035720(dVar12,dVar11,puVar10);
      _objc_release(uVar9);
      _objc_release(param_2);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _objc_release(puStack_c0);
      _objc_release(uVar2);
      _objc_release(uStack_80);
      goto LAB_1058524f8;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_1058524f8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105852528; end: 105852537;  */

void FUN_105852528(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b9790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_mapPersonLocationWithFriendClust_11260bff8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 105852538; end: 1058526e7;  */

void FUN_105852538(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1058526e8;
    uStack_40 = 0x1058526f8;
    puVar1 = PTR_PTR_1126bf320;
    _objc_alloc_init();
    puStack_38 = puVar1;
    func_0x00010c0beae0(param_1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(puStack_38);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058526e8; end: 1058526ff;  */

void FUN_1058526e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105852700; end: 105852db7;  */

void FUN_105852700(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c06cf60(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af680();
  _objc_release(uVar1);
  func_0x00010c08aca0(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(param_1);
  _objc_release(uVar1);
  func_0x00010c09abe0(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(param_1);
  _objc_release(uVar1);
  func_0x00010bf01f00(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167920(param_1);
  _objc_release(uVar1);
  func_0x00010bfe4080(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a90c0(param_1);
  _objc_release(uVar1);
  func_0x00010c298e00(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220fe0(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d1200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0320();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d1200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7b60(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d1200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0340();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d1200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7b80(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d1200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249ca0();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d1200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d1200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249cc0();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d1200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c60(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2709c0(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215dc0();
  _objc_release(uVar1);
  func_0x00010bfcd6c0(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3f80();
  _objc_release(uVar1);
  func_0x00010c06d2e0(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af8a0();
  _objc_release(uVar1);
  func_0x00010c0789a0(param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c09f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105852db8; end: 105852f0b;  */

void FUN_105852db8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfb8160(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000100504554();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bfb36c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c070be0(param_2);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bfb36c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b07c0();
  _objc_release(uVar4);
  func_0x00010c27b580(param_2);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bfb36c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219fc0();
  _objc_release(uVar4);
  func_0x00010c07dcc0(param_2);
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bfb36c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a62e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}


