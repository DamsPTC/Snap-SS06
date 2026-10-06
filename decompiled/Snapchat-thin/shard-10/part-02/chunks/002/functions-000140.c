/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cc2d40; end: 107cc2dc3; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryNonStreamingCachedDataLocallyForMediaInfo:contexts:completion:] */

void FUN_107cc2d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be8f860(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110eb6b58);
  func_0x00010be96a20(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc2dc4; end: 107cc2e9f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryNonStreamingMediaDataForMediaInfo:contexts:completion:] */

void FUN_107cc2dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be8f860(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110eb6b78);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107cc2ea0;
  puStack_40 = &UNK_110a06cc0;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010be968a0(param_1,param_2,param_3,1,param_4,1,1,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 107cc2ea0; end: 107cc2f2f;  */

void FUN_107cc2ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0db020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(lVar3 + 0x10))(lVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cc2f30; end: 107cc2fb3; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryCachedDataLocallyForMediaInfo:contexts:completion:] */

void FUN_107cc2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be8f860(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110eb6b98);
  func_0x00010be96660(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc2fb4; end: 107cc32bf; -[SCStoriesMediaCoordinatorUsingContentManagerImpl batchQueryLocallyCachedDataForClientIds:storyType:completionQueue:completion:] */

void FUN_107cc2fb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = puVar1;
  _dispatch_group_create();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_148 + lVar8 * 8);
        _dispatch_group_enter(puVar2);
        uVar4 = uVar6;
        func_0x000108ea5f00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c3390;
        _objc_alloc(PTR_PTR_1126c3390);
        func_0x00010bffa840();
        _objc_initWeak(auStack_158,param_1);
        puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_190 = 0xc2000000;
        pcStack_188 = FUN_107cc32c0;
        puStack_180 = &UNK_1108b3f88;
        _objc_copyWeak(auStack_160,auStack_158);
        _objc_retain(puVar1);
        puStack_178 = puVar1;
        uStack_170 = uVar6;
        _objc_retain(puVar2);
        puStack_168 = puVar2;
        func_0x00010c11d580(param_1);
        _objc_release(puStack_168);
        _objc_release(puStack_178);
        _objc_destroyWeak(auStack_160);
        _objc_destroyWeak(auStack_158);
        _objc_release(puVar5);
        _objc_release(uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_107cc3344;
  puStack_1b0 = &UNK_11084aaa8;
  puStack_1a8 = puVar1;
  uStack_1a0 = param_6;
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x000100bc0718(puVar2,param_5,&puStack_1c8);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&uStack_190);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume();
  lVar3 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    _os_unfair_lock_lock(lVar3 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar1);
    _os_unfair_lock_unlock(lVar3 + 0x28);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107cc32c0; end: 107cc3343;  */

void FUN_107cc32c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(lVar1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _os_unfair_lock_unlock(lVar1 + 0x28);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cc3344; end: 107cc3353;  */

void FUN_107cc3344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc3350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cc3354; end: 107cc3613; -[SCStoriesMediaCoordinatorUsingContentManagerImpl batchQueryMediaStateForMediaInfos:completionQueue:completion:] */

void FUN_107cc3354(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **unaff_x28;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar2;
  _dispatch_group_create();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_140;
    unaff_x28 = &puStack_198;
    do {
      lVar7 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_148 + lVar7 * 8);
        lVar5 = lVar9;
        func_0x00010bf267e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          _dispatch_group_enter(puVar3);
          _objc_initWeak(auStack_158,param_1);
          puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_107cc3614;
          puStack_180 = &UNK_1108b3f88;
          _objc_copyWeak(auStack_160,auStack_158);
          _objc_retain(puVar2);
          puStack_178 = puVar2;
          lStack_170 = lVar9;
          _objc_retain(puVar3);
          puStack_168 = puVar3;
          func_0x00010c11d580(param_1);
          _objc_release(puStack_168);
          _objc_release(puStack_178);
          _objc_destroyWeak(auStack_160);
          _objc_destroyWeak(auStack_158);
        }
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_107cc36c0;
  puStack_1b0 = &UNK_11084aaa8;
  puStack_1a8 = puVar2;
  uStack_1a0 = param_5;
  _objc_retain(puVar2);
  _objc_retain(param_5);
  func_0x000100bc0718(puVar3,param_4,&puStack_1c8);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 7);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume();
  lVar4 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    _os_unfair_lock_lock(lVar4 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf267e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(lVar4 + 0x28);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107cc3614; end: 107cc36bf;  */

void FUN_107cc3614(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _os_unfair_lock_lock(lVar2 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf267e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _os_unfair_lock_unlock(lVar2 + 0x28);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107cc36c0; end: 107cc36cf;  */

void FUN_107cc36c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc36cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cc36d0; end: 107cc375f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryForMediaInfo:contexts:completion:] */

void FUN_107cc36d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be8f860(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110eb6bb8);
  func_0x00010be968a0(param_1,param_2,param_3,1,param_4,0x20,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc3760; end: 107cc3837; -[SCStoriesMediaCoordinatorUsingContentManagerImpl deleteAllMediaFromCacheWithCompletion:] */

void FUN_107cc3760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c12ac20(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc3838; end: 107cc38c7;  */

void FUN_107cc3838(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdcbd40(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107cc38b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107cc38c8; end: 107cc38cf; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryLocalMediaDataToUploadWithCacheKey:completion:] */

void FUN_107cc38c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_retrieveLocalContentToUpload_com_11262d4c0);
  return;
}



/* Entry: 107cc38d0; end: 107cc3a17; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryMediaForMediaInfo:completionQueue:completion:] */

void FUN_107cc38d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

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
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be8f860(param_1);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  lVar6 = param_3;
  func_0x00010be968a0(param_1);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010c25c760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = lVar6;
    func_0x00010c0db020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f2a0();
    if ((int)lVar4 == 0) {
      lVar4 = lVar6;
      func_0x00010c0db020();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c23fc80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar5 != 0) {
        lVar9 = *(long *)(param_5 + 0x20);
        lVar3 = lVar6;
        func_0x00010c0db020(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c23fc80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010c0db020(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010c0ef700();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar9 + 0x10))(lVar9,lVar4,lVar8);
        _objc_release(lVar8);
        goto LAB_107cc3abc;
      }
    }
    else {
      _objc_release(lVar3);
    }
    (**(code **)(*(long *)(param_5 + 0x20) + 0x10))(*(long *)(param_5 + 0x20),0,0);
  }
  else {
    lVar8 = *(long *)(param_5 + 0x20);
    lVar3 = lVar7;
    func_0x00010bf4d380(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c0ef700(lVar7);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,lVar4,lVar5);
LAB_107cc3abc:
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107cc3a18; end: 107cc3bdf;  */

void FUN_107cc3a18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25c760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c0db020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27f2a0();
    if ((int)lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c0db020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c23fc80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) {
        lVar6 = *(long *)(param_1 + 0x20);
        lVar2 = param_3;
        func_0x00010c0db020(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c23fc80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010c0db020(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0ef700();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))(lVar6,lVar3,lVar5);
        _objc_release(lVar5);
        goto LAB_107cc3abc;
      }
    }
    else {
      _objc_release(lVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010bf4d380(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0ef700(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar3,lVar4);
LAB_107cc3abc:
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc3be0; end: 107cc3be7; -[SCStoriesMediaCoordinatorUsingContentManagerImpl removeListener:] */

void FUN_107cc3be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107cc3be8; end: 107cc3c1f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceDidUpdateMediaStateChangeRequest:] */

void FUN_107cc3be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(param_3);
  func_0x00010bf7e4a0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc3c20; end: 107cc3c57; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceDidUpdateMediaStateIdempotencyRequest:] */

void FUN_107cc3c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(param_3);
  func_0x00010bf7e4c0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc3c58; end: 107cc3c8f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceDidUpdateStoriesMediaAddedRequest:] */

void FUN_107cc3c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(param_3);
  func_0x00010bf7e720(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc3c90; end: 107cc3dbf; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceForceableDeletionsForCacheKeys:] */

void FUN_107cc3c90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = PTR_PTR_1126d75b0;
        _objc_alloc(PTR_PTR_1126d75b0);
        func_0x00010bffa880();
        func_0x00010bdcba60(param_1,param_2,puVar2);
        _objc_release(puVar2);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be12640();
  return;
}



/* Entry: 107cc3dc0; end: 107cc3de7; -[SCStoriesMediaCoordinatorUsingContentManagerImpl fetchMediaForMediaInfo:userInitiated:completePrefetch:contexts:trigger:batchId:completion:] */

void FUN_107cc3dc0(void)

{
  func_0x00010be12640();
  return;
}



/* Entry: 107cc3de8; end: 107cc3e17; -[SCStoriesMediaCoordinatorUsingContentManagerImpl forceFetchMediaForMediaInfo:userInitiated:completePrefetch:contexts:trigger:batchId:completion:] */

void FUN_107cc3de8(void)

{
  func_0x00010be12640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107cc3e18; end: 107cc3ed3; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _requestInfoForMedia:userInitiated:contexts:batchId:] */

void FUN_107cc3e18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_6);
  uVar1 = 2;
  if ((int)param_4 != 0) {
    uVar1 = 3;
  }
  FUN_107cc5d98(param_3,uVar1,1,param_4,param_5,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebae0();
    _objc_release(lVar2);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107cc3ed4; end: 107cc3f9b; -[SCStoriesMediaCoordinatorUsingContentManagerImpl deleteMediaForMediaInfos:] */

void FUN_107cc3ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c12b9a0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc3f9c; end: 107cc3fe3;  */

void FUN_107cc3f9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbd40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc3fe4; end: 107cc413f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl saveStoriesMediaForMediaInfo:decryptedMedia:shouldGenerateThumbnails:completionQueue:completion:] */

void FUN_107cc3fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c14a8c0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc4140; end: 107cc42bb;  */

void FUN_107cc4140(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  puVar1 = PTR_PTR_1126d75b0;
  _objc_alloc(PTR_PTR_1126d75b0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf267e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010bffa880(puVar1);
    _objc_release(uVar2);
    puVar3 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar3);
    func_0x00010bdcba60();
  }
  else {
    func_0x00010bffa880();
    _objc_release(uVar2);
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bdcba60();
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126d75b8;
    _objc_alloc(PTR_PTR_1126d75b8);
    func_0x00010c0297c0();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bdcbaa0();
    _objc_release(lVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar5 = *(long *)(param_1 + 0x28);
  if ((lVar5 != 0) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107cc42bc;
    puStack_58 = &UNK_11084a9b8;
    _objc_retain(lVar4);
    uStack_48 = (undefined1)param_2;
    lStack_50 = lVar4;
    func_0x00010007380c(lVar5,&puStack_70);
    _objc_release(lStack_50);
  }
  return;
}



/* Entry: 107cc42bc; end: 107cc42cf;  */

void FUN_107cc42bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc42cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107cc42d0; end: 107cc42d7; -[SCStoriesMediaCoordinatorUsingContentManagerImpl releaseLocalAuthoritativeStoriesMediaForCacheKeys:] */

void FUN_107cc42d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1285b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_releaseLocalAuthoritativeContent_112627b88);
  return;
}



/* Entry: 107cc42d8; end: 107cc4357; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceOperationAndStateIdempotencyForAlreadyExistingCacheKey:contentStatus:] */

void FUN_107cc42d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d75c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010be5ec00(param_1,param_2,param_4);
  func_0x00010bffa860(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  func_0x00010bdcba80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cc4358; end: 107cc4493; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _queryCachedDataLocallyForMediaInfo:contexts:queryNonStreaming:completion:] */

void FUN_107cc4358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(param_6);
  uStack_50 = param_5;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  func_0x00010c11d280(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc4494; end: 107cc462f;  */

void FUN_107cc4494(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == 0) {
    cVar1 = *(char *)(param_1 + 0x40);
    puVar3 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar3);
    if (cVar1 == '\x01') {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      func_0x00010be96a20(puVar3);
      _objc_release(puVar3);
      _objc_release(uVar5);
      return;
    }
    func_0x00010be96660(puVar3);
  }
  else {
    func_0x00010b7f5470();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_2);
    lVar4 = *(long *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126d7598;
    func_0x00010c258540(PTR_PTR_1126d7598);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107cc4630; end: 107cc46a3;  */

void FUN_107cc4630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d7598;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02fb40();
  _objc_release(param_3);
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cc46a4; end: 107cc493f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _retrieveMediaDataForMediaInfo:userInitiated:contexts:trigger:queryNonStreaming:completion:] */

void FUN_107cc46a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010be91260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      func_0x00010be851e0(param_1);
      goto LAB_107cc48bc;
    }
  }
  else {
    _objc_release();
  }
  _objc_initWeak(auStack_80,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = lVar1;
  func_0x00010c134680(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf9c720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = param_7;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_8);
  func_0x00010bf88b20(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
LAB_107cc48bc:
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc4940; end: 107cc4a1f;  */

void FUN_107cc4940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  cVar3 = *(char *)(param_1 + 0x40);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (cVar3 == '\x01') {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107cc4a20;
    puStack_50 = &UNK_1108539d0;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010be96a20(lVar4,param_2,uVar1,uVar2,&puStack_68);
    _objc_release(lVar4);
    _objc_release(uStack_48);
    return;
  }
  func_0x00010be96660(lVar4,param_2,uVar1,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107cc4a20; end: 107cc4aab;  */

void FUN_107cc4a20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7598;
  if (param_4 == 0) {
    _objc_alloc(PTR_PTR_1126d7598);
    func_0x00010c02fb40();
  }
  else {
    func_0x00010c258540();
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc4aac; end: 107cc4bab;  */

void FUN_107cc4aac(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == (undefined *)0x0) {
    func_0x00010b7f5470();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_2);
    param_3 = puVar2;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d7598;
  func_0x00010c258540(PTR_PTR_1126d7598);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc4bac; end: 107cc4c4b; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _retrieveNonStreamingDownloadedContentForMedia:contexts:completion:] */

void FUN_107cc4bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107cc4c4c;
  puStack_40 = &UNK_110a06d50;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c13eca0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 107cc4c4c; end: 107cc4c6b;  */

void FUN_107cc4c4c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000107cc4c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_2);
  return;
}



/* Entry: 107cc4c6c; end: 107cc4d73; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _retrieveDownloadedContentForMedia:contexts:completion:] */

void FUN_107cc4c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107cc4d0c;
  puStack_40 = &UNK_110a06d80;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c13e540(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 107cc4d74; end: 107cc4d97; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _mediaStateFromContentStatus:] */

undefined8 FUN_107cc4d74(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10dee54c0 + (param_3 - 1U) * 8);
  }
  return 2;
}



/* Entry: 107cc4d98; end: 107cc5193; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _fetchMediaForMediaInfo:userInitiated:completePrefetch:contexts:trigger:forceFetch:batchId:completion:] */

void FUN_107cc4d98(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c11d260();
  if ((((param_5 & 1) == 0) && ((param_8 & 1) == 0)) && (lVar1 == 0)) {
    puVar6 = param_3;
    func_0x00010bf267e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcc220(param_1);
    _objc_release(puVar6);
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,2,0);
    }
    puVar6 = PTR_PTR_1126b2798;
    _objc_alloc_init(PTR_PTR_1126b2798);
    goto LAB_107cc50e4;
  }
  lVar2 = param_1;
  func_0x00010be91260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar6 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar6);
    if (puVar5 != (undefined *)0x0) goto LAB_107cc4ef4;
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,0,0);
    }
    puVar6 = PTR_PTR_1126b2798;
    _objc_alloc_init(PTR_PTR_1126b2798);
  }
  else {
    _objc_release();
LAB_107cc4ef4:
    _objc_initWeak(auStack_80,param_1);
    puVar6 = *(undefined **)(param_1 + 0x10);
    lVar3 = lVar2;
    func_0x00010c134680(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107cc5194;
    puStack_a0 = &UNK_110848378;
    _objc_retain(param_10);
    lStack_90 = param_10;
    _objc_retain(param_3);
    puStack_98 = param_3;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_10);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_c0,auStack_80);
    func_0x00010bf88b20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    if (lVar1 == 2) {
      puVar4 = param_3;
      func_0x00010bf267e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdcc220(param_1);
    }
    else {
      puVar4 = PTR_PTR_1126d75b0;
      _objc_alloc(PTR_PTR_1126d75b0);
      puVar5 = param_3;
      func_0x00010bf267e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa880(puVar4);
      _objc_release(puVar5);
      func_0x00010bdcba60(param_1);
    }
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_release(param_3);
    _objc_release(param_10);
    _objc_destroyWeak(auStack_88);
    _objc_release(puStack_98);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar2);
LAB_107cc50e4:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cc5194; end: 107cc5237;  */

void FUN_107cc5194(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,2,0);
  }
  puVar2 = PTR_PTR_1126d75b0;
  _objc_alloc(PTR_PTR_1126d75b0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf267e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa880(puVar2);
  _objc_release(uVar3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcba60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107cc5238; end: 107cc5317;  */

void FUN_107cc5238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_3);
  }
  puVar2 = PTR_PTR_1126d75b0;
  _objc_alloc(PTR_PTR_1126d75b0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf267e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa880(puVar2);
  _objc_release(uVar3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcba60();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc5318; end: 107cc540f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl _reportFSNBlobInfo:callSite:] */

void FUN_107cc5318(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf7f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_3;
  if (lVar2 == 0) {
    func_0x00010bf06600();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf7f0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = lVar3, FUN_107cc5d28(), (int)lVar1 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bf7f0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0720c0(lVar3,param_2,lVar1);
    func_0x00010c0b0d40(uVar4,param_2,lVar2,param_4);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc5410; end: 107cc5457; -[SCStoriesMediaCoordinatorUsingContentManagerImpl .cxx_destruct] */

void FUN_107cc5410(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc5458; end: 107cc549b; +[SCStoriesContent storiesContentWithError:] */

void FUN_107cc5458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7598;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cc549c; end: 107cc5567; -[SCStoriesContent initWithContentResult:withOverlayData:firstFrameData:] */

undefined1 *
FUN_107cc549c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa6a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d75c8;
    _objc_alloc();
    func_0x00010c003b40();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc5568; end: 107cc5653; -[SCStoriesContent initWithContentBundle:metadata:withOverlayData:firstFrameData:] */

undefined1 *
FUN_107cc5568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126fa6a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d75c8;
    _objc_alloc();
    func_0x00010c002da0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc5654; end: 107cc56ff; -[SCStoriesContent initWithSnapData:overlayData:unarchivingFailed:] */

undefined1 *
FUN_107cc5654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa6a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d75a0;
    _objc_alloc();
    func_0x00010c0473a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc5700; end: 107cc57a3; -[SCStoriesContent initWithNonStreamingContent:firstFrameData:] */

undefined1 *
FUN_107cc5700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa6a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc57a4; end: 107cc57ab; -[SCStoriesContent streamingContent] */

undefined8 FUN_107cc57a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cc57ac; end: 107cc57b3; -[SCStoriesContent nonStreamingContent] */

undefined8 FUN_107cc57ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cc57b4; end: 107cc57bb; -[SCStoriesContent firstFrameData] */

undefined8 FUN_107cc57b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cc57bc; end: 107cc57c3; -[SCStoriesContent error] */

undefined8 FUN_107cc57bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cc57c4; end: 107cc580b; -[SCStoriesContent .cxx_destruct] */

void FUN_107cc57c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc580c; end: 107cc587f; -[SCStoriesMediaRequestInfo initWithRequest:] */

undefined1 * FUN_107cc580c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa6a8;
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



/* Entry: 107cc5880; end: 107cc5887; -[SCStoriesMediaRequestInfo request] */

undefined8 FUN_107cc5880(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cc5888; end: 107cc5893; -[SCStoriesMediaRequestInfo .cxx_destruct] */

void FUN_107cc5888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc5894; end: 107cc593f; -[SCStoriesNonStreamingContent initWithSnapData:overlayData:unarchivingFailed:] */

undefined1 *
FUN_107cc5894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa6b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc5940; end: 107cc5947; -[SCStoriesNonStreamingContent snapData] */

undefined8 FUN_107cc5940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cc5948; end: 107cc594f; -[SCStoriesNonStreamingContent overlayData] */

undefined8 FUN_107cc5948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cc5950; end: 107cc5957; -[SCStoriesNonStreamingContent unarchivingFailed] */

undefined1 FUN_107cc5950(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cc5958; end: 107cc5987; -[SCStoriesNonStreamingContent .cxx_destruct] */

void FUN_107cc5958(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cc5988; end: 107cc5a2b; -[SCStoriesStreamingContent initWithContentResult:overlayData:] */

undefined1 *
FUN_107cc5988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa6b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc5a2c; end: 107cc5af7; -[SCStoriesStreamingContent initWithContentBundle:metadata:overlayData:] */

undefined1 *
FUN_107cc5a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa6b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc5af8; end: 107cc5aff; -[SCStoriesStreamingContent contentResult] */

undefined8 FUN_107cc5af8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cc5b00; end: 107cc5b07; -[SCStoriesStreamingContent contentBundle] */

undefined8 FUN_107cc5b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cc5b08; end: 107cc5b0f; -[SCStoriesStreamingContent contentBundleMetadata] */

undefined8 FUN_107cc5b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cc5b10; end: 107cc5b17; -[SCStoriesStreamingContent overlayData] */

undefined8 FUN_107cc5b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cc5b18; end: 107cc5b5f; -[SCStoriesStreamingContent .cxx_destruct] */

void FUN_107cc5b18(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc5b60; end: 107cc5bd3; -[SCStoriesMediaFetcher initWithStoriesMediaCoordinator:] */

undefined1 * FUN_107cc5b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa6c0;
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



/* Entry: 107cc5bd4; end: 107cc5d0f; -[SCStoriesMediaFetcher downloadStoriesMediaInfo:storyId:userInitiated:completePrefetch:trigger:completionHandler:] */

void FUN_107cc5bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_x7;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  uVar2 = param_3;
  func_0x00010bf267e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010b26c050(param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x7);
  func_0x00010bfa85c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(in_x7);
  _objc_release(in_x7);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc5d10; end: 107cc5d1b;  */

void FUN_107cc5d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc5d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107cc5d1c; end: 107cc5d27; -[SCStoriesMediaFetcher .cxx_destruct] */

void FUN_107cc5d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc5d28; end: 107cc5d97;  */

ulong FUN_107cc5d28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110eb6bf8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110eb6c18);
    }
    else {
      uVar1 = 1;
    }
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cc5d98; end: 107cc618b;  */

void FUN_107cc5d98(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x4;
  ulong in_x5;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *unaff_x24;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  puVar1 = param_1;
  func_0x00010bf267e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar8 = param_1;
  func_0x00010c25b720();
  if (puVar8 + -1 < (undefined *)0x2) {
    ppuVar7 = &PTR_PTR_110ccc198;
LAB_107cc5e58:
    unaff_x24 = *ppuVar7;
    _objc_retain(unaff_x24);
  }
  else {
    if (puVar8 == (undefined *)0x3) {
      ppuVar7 = &PTR_PTR_110ccc1c0;
      goto LAB_107cc5e58;
    }
    if (puVar8 == (undefined *)0x0) {
      puVar8 = param_1;
      func_0x00010c0d7220();
      ppuVar7 = &PTR_PTR_110ccc1a8;
      if ((int)puVar8 == 0) {
        ppuVar7 = &PTR_PTR_110ccc1a0;
      }
      goto LAB_107cc5e58;
    }
  }
  _objc_release(param_1);
  puVar8 = param_1;
  func_0x00010bf7f0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c08fa60();
  _objc_release(puVar8);
  puVar8 = param_1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bf06600();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    if (puVar5 != (undefined *)0x0) {
      if (in_x5 != 0) {
        puVar2 = param_1;
        func_0x00010bf06600();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        FUN_107cc5d28();
        _objc_release(puVar2);
        if (((ulong)puVar5 & 1) != 0) goto LAB_107cc5f34;
      }
      puVar5 = PTR_PTR_1126b4960;
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bf06600(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cc5f88;
    }
    puVar5 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010bf7f0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    FUN_107cc5d28();
    if (((ulong)puVar5 & 1) == 0) {
      _objc_release(puVar2);
    }
    else {
      uVar3 = in_x5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(puVar2);
      if ((uVar4 & 1) != 0) {
LAB_107cc5f34:
        puVar8 = (undefined *)0x0;
        goto LAB_107cc6120;
      }
    }
    puVar5 = PTR_PTR_1126b4960;
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bf7f0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_107cc5f88:
    func_0x00010bdc3460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x00010bf267e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c27dd80();
    puVar6 = param_1;
    func_0x00010c083e00();
    ppuVar7 = &PTR_PTR_110ccc1c8;
    if ((puVar9 + 1 < (undefined *)0x1c) && ((1L << ((ulong)(puVar9 + 1) & 0x3f) & 0xd8de5fdU) != 0)
       ) {
      if (((undefined *)0x1b < puVar9 + 1) ||
         ((((1L << ((ulong)(puVar9 + 1) & 0x3f) & 0xb4b5dbbU) == 0 ||
           ((undefined *)0x1a < puVar9 + 1)) ||
          ((0x6c6bd77U >> (ulong)((uint)(puVar9 + 1) & 0x1f) & 1) == 0)))) {
        ppuVar7 = &PTR_PTR_110ccc1e8;
        if ((int)puVar6 == 0) {
          ppuVar7 = &PTR_PTR_110ccc1f0;
        }
        goto LAB_107cc60b4;
      }
      puVar9 = (undefined *)0x0;
    }
    else {
LAB_107cc60b4:
      puVar9 = *ppuVar7;
      _objc_retain(puVar9);
    }
    func_0x00010c219380(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar8);
    func_0x00010c21e860(puVar5);
    puVar8 = PTR_PTR_1126d75d0;
    _objc_alloc(PTR_PTR_1126d75d0);
    func_0x00010c03eae0();
  }
  _objc_release(puVar5);
LAB_107cc6120:
  _objc_release(unaff_x24);
  _objc_release(puVar1);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107cc618c; end: 107cc6277;  */

void FUN_107cc618c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b4960;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cc6278; end: 107cc64d7;  */

void FUN_107cc6278(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  func_0x00010c071640();
  func_0x00010c083e00(param_1);
  uVar1 = param_1;
  func_0x00010bf1eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d62a8;
  _objc_alloc_init(PTR_PTR_1126d62a8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cd0620(puVar3,puVar4,puVar5,puVar6,puVar7,1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cc64d8; end: 107cc6523;  */

void FUN_107cc64d8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cc6524; end: 107cc65bf;  */

void FUN_107cc6524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126b08b8;
  _objc_retain();
  _objc_alloc(puVar3);
  lVar4 = param_1;
  func_0x00010bf267e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c25b720();
  _objc_release(param_1);
  uVar1 = 0x1d;
  if (lVar5 != 3) {
    uVar1 = 0x10;
  }
  uVar2 = 4;
  if (lVar5 != 0) {
    uVar2 = uVar1;
  }
  func_0x00010c0295e0(puVar3,param_2,lVar4,uVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cc65c0; end: 107cc696b;  */

void FUN_107cc65c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar3 = PTR_PTR_1126b08b8;
  _objc_retain();
  _objc_alloc(puVar3);
  lVar4 = param_1;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c25b720();
  _objc_release(param_1);
  uVar1 = 0x1d;
  if (lVar6 != 3) {
    uVar1 = 0x10;
  }
  uVar2 = 4;
  if (lVar6 != 0) {
    uVar2 = uVar1;
  }
  func_0x00010c0295e0(puVar3,param_2,puVar5,uVar2);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cc696c; end: 107cc6e8f;  */

void FUN_107cc696c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR____NSArray0__struct_11034ab48;
  if (lVar4 == 0) goto LAB_107cc6e60;
  lVar2 = param_1;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    _objc_release(lVar3);
    _objc_release(lVar2);
LAB_107cc6bc4:
    func_0x00010c27dd80();
    puVar8 = PTR_PTR_1126d75d8;
    _objc_alloc(PTR_PTR_1126d75d8);
    lVar2 = param_1;
    FUN_107cc6524(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1eea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_107cc6e90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003680(puVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa120(puVar1);
  }
  else {
    lVar4 = param_1;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar6 == 0) goto LAB_107cc6bc4;
    puVar8 = PTR_PTR_1126d75d8;
    _objc_alloc(PTR_PTR_1126d75d8);
    lVar2 = param_1;
    FUN_107cc65c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1eea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_107cc6e90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003680(puVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126d75d8;
    _objc_alloc(PTR_PTR_1126d75d8);
    lVar2 = param_1;
    func_0x000107cc66ac(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1eea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_107cc6e90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003680(puVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa120(puVar1);
    func_0x00010befa120(puVar1);
    _objc_release(puVar7);
  }
  _objc_release(puVar8);
  lVar2 = param_1;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_1;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107cc6e90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      puVar8 = PTR_PTR_1126d75d8;
      _objc_alloc(PTR_PTR_1126d75d8);
      lVar2 = param_1;
      func_0x000107cc6880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003680(puVar8);
      _objc_release(lVar2);
      func_0x00010befa120(puVar1);
      _objc_release(puVar8);
    }
    _objc_release(lVar4);
  }
  if ((param_2 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb11c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      puVar8 = PTR_PTR_1126d75d8;
      _objc_alloc(PTR_PTR_1126d75d8);
      lVar2 = param_1;
      func_0x000107cc6798(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf1eea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb11c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003680(puVar8);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010befa120(puVar1);
      _objc_release(puVar8);
    }
  }
  _objc_retain(puVar1);
  puVar8 = puVar1;
LAB_107cc6e60:
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107cc6e90; end: 107cc6f33;  */

void FUN_107cc6e90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126bc668;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_38 = 0;
  func_0x00010c008360(puVar1,param_2,puVar2,&uStack_38);
  puVar3 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cc6f34; end: 107cc728f;  */

void FUN_107cc6f34(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c98a8;
  _objc_alloc(PTR_PTR_1126c98a8);
  uVar2 = param_1;
  func_0x00010bf93e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf93e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126bff90;
  func_0x00010c100200(PTR_PTR_1126bff90);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf4c8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aae20(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c2ad7e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc3a0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b8010;
  _objc_alloc(PTR_PTR_1126b8010);
  func_0x00010c0003a0();
  func_0x00010c2b5b20(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c2b70a0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c072fa0();
  if ((uVar7 & 1) == 0) {
    uVar7 = param_2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfda7c0();
    _objc_release(uVar9);
    _objc_release(uVar7);
    if (((uVar10 & 1) == 0) && (uVar7 = param_2, func_0x00010c0c6c20(), uVar7 == 9)) {
      uVar2 = param_1;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0802a0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) goto LAB_107cc71a0;
    }
  }
  func_0x00010c2ad2c0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_107cc71a0:
  puVar11 = PTR_PTR_1126bfef0;
  _objc_alloc(PTR_PTR_1126bfef0);
  puVar8 = PTR_PTR_1126b2c80;
  uVar7 = param_2;
  func_0x00010bf1eec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cda0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_2);
  puVar12 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029760(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107cc7290; end: 107cc731f; -[SCStoriesMediaDownloadingInfo initWithRequest:] */

undefined1 * FUN_107cc7290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa6c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc7320; end: 107cc7327; -[SCStoriesMediaDownloadingInfo request] */

undefined8 FUN_107cc7320(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cc7328; end: 107cc732f; -[SCStoriesMediaDownloadingInfo callbacks] */

undefined8 FUN_107cc7328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cc7330; end: 107cc735f; -[SCStoriesMediaDownloadingInfo .cxx_destruct] */

void FUN_107cc7330(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc7360; end: 107cc74a3; -[SCStoriesMediaDownloader submitRequestForKey:request:callback:] */

void FUN_107cc7360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126d75e0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c03eae0();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_3);
  _objc_release(puVar2);
  func_0x00010c125ee0(param_1,param_2,param_3,param_5);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bec8c00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0e380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f660(uVar1,param_2,param_4,uVar3,uVar4,lVar5,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107cc74a4; end: 107cc7533; -[SCStoriesMediaDownloader registerCallbackForKey:callback:] */

void FUN_107cc74a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  _objc_retainBlock(param_4);
  _objc_release(param_4);
  func_0x00010befa120(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107cc7534; end: 107cc756b; -[SCStoriesMediaDownloader hasPendingRequestForKey:] */

bool FUN_107cc7534(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107cc756c; end: 107cc76cf; -[SCStoriesMediaDownloader cancelRequestsForKeys:] */

void FUN_107cc756c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(param_1 + 0x18);
        func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          lVar3 = lVar2;
          func_0x00010c134680(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2ee60(uVar5,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf002e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ef00(param_3,param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107cc76d0; end: 107cc770f; -[SCStoriesMediaDownloader cancelAllRequests] */

void FUN_107cc76d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ef00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cc7710; end: 107cc77cb; -[SCStoriesMediaDownloader _successCallback:] */

void FUN_107cc7710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107cc77cc;
  puStack_50 = &UNK_110a06db0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cc77cc; end: 107cc78bb;  */

void FUN_107cc77cc(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  uVar3 = 0;
  if ((lVar2 != 0) && (func_0x00010c11f420(lVar1), param_3 != 0)) {
    lVar2 = lVar1;
    func_0x00010c260c00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar2);
    uVar3 = param_1;
  }
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010be3db80(uVar3);
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cc78bc; end: 107cc79d7; -[SCStoriesMediaDownloader _failureCallback:] */

void FUN_107cc78bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107cc7978;
  puStack_50 = &UNK_110a06de0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cc79d8; end: 107cc7b77; -[SCStoriesMediaDownloader _invokeCallbacksForKey:cause:encryptedMedia:serverExpirationTime:] */

void FUN_107cc79d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      (**(code **)(*(long *)(lVar6 * 8) + 0x10))(param_1,*(long *)(lVar6 * 8),param_5,param_6);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 107cc7b78; end: 107cc7bb3; -[SCStoriesMediaDownloader .cxx_destruct] */

void FUN_107cc7b78(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


