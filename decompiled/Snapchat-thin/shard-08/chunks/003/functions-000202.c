/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f851ac; end: 105f85487;  */

void FUN_105f851ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001070b1d3c(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be710;
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291340(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b6068;
  _objc_alloc();
  uVar5 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c294420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c080();
  lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar4;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f85488; end: 105f85517; -[SCSpotlight916ShareMessagePlugin _recordRegularSpotlightShareMessage:timestamp:] */

void FUN_105f85488(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_assert_owner(param_1 + 0x28);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = 0;
  if ((param_4 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88),param_2,param_4,param_3);
    func_0x00010be872a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105f85518; end: 105f856f7; -[SCSpotlight916ShareMessagePlugin _recomputeLatestSpotlightShareMessageId] */

void FUN_105f85518(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
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
  _os_unfair_lock_assert_owner(param_1 + 0x28);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar4 == 0) {
    lVar6 = 0;
    ppuVar5 = (undefined **)0x0;
  }
  else {
    lVar6 = 0;
    ppuVar5 = (undefined **)0x0;
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        ppuVar9 = *(undefined ***)(lStack_128 + lVar11 * 8);
        lVar1 = *(long *)(param_1 + 0x88);
        func_0x00010c0e00e0(lVar1,param_2,ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        if ((lVar6 == 0) || (lVar2 = lVar1, func_0x00010bf433a0(lVar1,param_2,lVar6), lVar2 == 1)) {
          _objc_retain(lVar1);
          _objc_release(lVar6);
          _objc_retain(ppuVar9);
          _objc_release(ppuVar5);
          ppuVar5 = ppuVar9;
          lVar6 = lVar1;
        }
        _objc_release(lVar1);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar8);
  lVar4 = *(long *)(param_1 + 0x90);
  ppuVar9 = ppuVar5;
  func_0x00010c0720c0();
  if ((((ulong)ppuVar9 & 1) == 0) && (ppuVar5 != *(undefined ***)(param_1 + 0x90))) {
    _objc_retain(ppuVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined ***)(param_1 + 0x90) = ppuVar5;
    _objc_release(uVar3);
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar9 = ppuVar5;
    }
    _objc_retain(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      _os_unfair_lock_assert_not_owner(ppuVar5 + 5);
      _os_unfair_lock_lock((long)ppuVar5 + 0x2c);
      _os_unfair_lock_lock(ppuVar5 + 5);
      ppuVar7 = (undefined **)ppuVar5[0x12];
      _objc_retain(ppuVar7);
      _os_unfair_lock_unlock(ppuVar5 + 5);
      ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar9 = ppuVar7;
      }
      func_0x00010c0d9840(ppuVar5[0x13],param_2,ppuVar9);
      _objc_release(ppuVar7);
      _os_unfair_lock_unlock((long)ppuVar5 + 0x2c);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 105f856f8; end: 105f85797; -[SCSpotlight916ShareMessagePlugin _emitLatestSpotlightShareMessageId:] */

void FUN_105f856f8(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_assert_not_owner(param_1 + 0x28);
    _os_unfair_lock_lock(param_1 + 0x2c);
    _os_unfair_lock_lock(param_1 + 0x28);
    ppuVar2 = *(undefined ***)(param_1 + 0x90);
    _objc_retain(ppuVar2);
    _os_unfair_lock_unlock(param_1 + 0x28);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x98),param_2,ppuVar1);
    _objc_release(ppuVar2);
    _os_unfair_lock_unlock(param_1 + 0x2c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f85798; end: 105f858cf; -[SCSpotlight916ShareMessagePlugin _handleConversationChange] */

void FUN_105f85798(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f858d0;
  puStack_40 = &UNK_1109004f8;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010bf97ce0(uVar2,param_2,&puStack_58);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x88));
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x90) == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(uStack_38);
  _os_unfair_lock_unlock(param_1 + 0x28);
  func_0x00010be07e20(param_1,param_2,ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f858d0; end: 105f85923;  */

void FUN_105f858d0(long param_1,undefined8 param_2,int param_3)

{
  _objc_retain(param_2);
  func_0x00010c0c68c0();
  if (param_3 != 0) {
    func_0x00010c0b1020(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f85924; end: 105f85953; -[SCSpotlight916ShareMessagePlugin identifier] */

void FUN_105f85924(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb8b8);
  return;
}



/* Entry: 105f85954; end: 105f8595b; -[SCSpotlight916ShareMessagePlugin pluginType] */

undefined8 FUN_105f85954(void)

{
  return 0;
}



/* Entry: 105f8595c; end: 105f85a77; -[SCSpotlight916ShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f8595c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105f85a78; end: 105f85aa3;  */

void FUN_105f85a78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f85aa4; end: 105f85bcb; -[SCSpotlight916ShareMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f85aa4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(long *)(param_1 + 0x128) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010be46fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f85bcc; end: 105f85c5f;  */

void FUN_105f85bcc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010c08fa60();
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_2;
    }
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar1;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f85c60; end: 105f85d9b; -[SCSpotlight916ShareMessagePlugin _lensIdFromMessage:] */

void FUN_105f85c60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar4;
  func_0x00010bfdc580();
  if ((int)uVar2 != 0) {
    uVar2 = uVar4;
    func_0x00010c2453e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd84e0();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      uVar2 = uVar4;
      func_0x00010c2453e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bfe5ea0();
      func_0x00010c0df7c0(puVar5,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_105f85d7c;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105f85d7c:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f85d9c; end: 105f85def; -[SCSpotlight916ShareMessagePlugin _isSpotlightShareMessage:] */

ulong FUN_105f85d9c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x108);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f620();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c076860(uVar1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f85df0; end: 105f85df3; -[SCSpotlight916ShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

void FUN_105f85df0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be44130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSpotlightShareMessage__11256e9e8);
  return;
}



/* Entry: 105f85df4; end: 105f85df7; -[SCSpotlight916ShareMessagePlugin canForwardMessageFromCTA:] */

void FUN_105f85df4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be44130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSpotlightShareMessage__11256e9e8);
  return;
}



/* Entry: 105f85df8; end: 105f85e73; -[SCSpotlight916ShareMessagePlugin isSharingRestrictedForMessage:] */

undefined8 FUN_105f85df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be44120(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c24c240(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c07dce0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105f85e74; end: 105f86113; -[SCSpotlight916ShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105f85e74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar12 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar8,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if (lVar7 == 0) {
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b4458;
      _objc_alloc(PTR_PTR_1126b4458);
      func_0x00010c01c300();
      puVar11 = PTR_PTR_1126c6898;
      puVar12 = puVar10;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08f300(puVar11,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126c68a0;
      func_0x00010c24c200(PTR_PTR_1126c6878);
      func_0x00010c2990e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(lVar7);
  }
  puVar9 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f86114; end: 105f86477; -[SCSpotlight916ShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105f86114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_7);
  uVar11 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0cbe00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar11);
  puVar5 = PTR_PTR_1126b5bd0;
  _objc_alloc();
  puVar6 = PTR_PTR_1126b5bd8;
  func_0x00010bf36620(PTR_PTR_1126b5bd8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be4b000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c000c00();
  _objc_release(lVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c24c460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf026a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf82560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf579a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c15cbe0(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105f86478; end: 105f8648b;  */

void FUN_105f86478(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105f86488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105f8648c; end: 105f864cb; -[SCSpotlight916ShareMessagePlugin actionHandlerDidHandleHeaderTap:] */

void FUN_105f8648c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48580(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f864cc; end: 105f8650b; -[SCSpotlight916ShareMessagePlugin actionHandler:didHandleStoryTap:] */

void FUN_105f864cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48580(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f8650c; end: 105f8666f; -[SCSpotlight916ShareMessagePlugin _launchSpotlightFeedForMessage:] */

void FUN_105f8650c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(ulong *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24b1a0();
  lVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    func_0x00010be61740();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bebc340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105f86670;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f86670; end: 105f8671f;  */

void FUN_105f86670(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0xa8);
    lVar2 = lVar1 + 0x138;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf241c0(uVar3,param_2,lVar2,0,0,0,*(undefined8 *)(param_1 + 0x20),0x16,0x57,
                        0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c18b5e0(uVar3,param_2,lVar1);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0xa0),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f86720; end: 105f86c93; -[SCSpotlight916ShareMessagePlugin _multipleShareConfigurationForMessage:] */

/* WARNING: Possible PIC construction at 0x000105f86a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f86a24) */
/* WARNING: Removing unreachable block (ram,0x000105f86bf4) */
/* WARNING: Removing unreachable block (ram,0x000105f86a34) */
/* WARNING: Removing unreachable block (ram,0x000105f86bf8) */

void FUN_105f86720(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar6;
  if (lVar8 != 0) {
    lVar3 = lVar1;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c24c520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  if (lVar2 == 0) {
    _objc_release(0);
    _objc_release(lVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
      return;
    }
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x28);
    __Unwind_Resume();
    param_1 = *(long *)(param_3 + 0x20);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar3 = lVar1;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c24c520();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    lVar2 = 0x30;
    if (lVar8 != 0) {
      lVar2 = 0x40;
    }
    uVar10 = *(undefined8 *)(param_1 + lVar2);
    _objc_retain(uVar10);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    param_2 = uVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bd86c68();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3c80(*(undefined8 *)(param_1 + 0x60));
    func_0x00010bf490e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(uVar10);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be020b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__discoverFeedStoryFromDataProvid_11255e1c8,param_2);
  return;
}



/* Entry: 105f86c94; end: 105f86c9f;  */

void FUN_105f86c94(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be020b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__discoverFeedStoryFromDataProvid_11255e1c8,
             param_2);
  return;
}



/* Entry: 105f86ca0; end: 105f8715b; -[SCSpotlight916ShareMessagePlugin _singleShareConfigurationForMessage:] */

void FUN_105f86ca0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  puVar12 = param_3;
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar6;
  if (lVar8 != 0) {
    lVar3 = lVar1;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c24c520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  if (lVar2 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar4 = lVar1;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c24c520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c08fa60();
    lVar3 = 0x30;
    if (lVar9 != 0) {
      lVar3 = 0x40;
    }
    puVar16 = *(undefined **)(param_1 + lVar3);
    _objc_retain(puVar16);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar10 = puVar16;
    func_0x00010c0e00e0(puVar16,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    puVar12 = puVar10;
    func_0x00010be020a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0xe0);
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a480(uVar17,param_2,puVar12);
      _objc_release(puVar12);
      uVar17 = *(undefined8 *)(param_1 + 0x68);
      lVar3 = lVar1;
      func_0x00010bf490e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar17,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_3;
      func_0x000107d04eec(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13,param_2,puVar12,&PTR____CFConstantStringClassReference_110f42758);
      _objc_release(puVar12);
      puVar12 = param_3;
      func_0x000107d04fac(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13,param_2,puVar12,&PTR____CFConstantStringClassReference_110f42798);
      _objc_release(puVar12);
      func_0x00010c1d0640(puVar13,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4108,
                          &PTR____CFConstantStringClassReference_110dcad78);
      puVar15 = PTR_PTR_1126c68b8;
      puVar14 = puVar13;
      func_0x00010bf51e00(puVar13);
      puVar12 = puVar11;
      func_0x00010c0d0a00(puVar15,param_2,puVar11,puVar14,uVar17,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(uVar17);
    }
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar16);
  }
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x28);
    __Unwind_Resume(param_3);
    func_0x00010c24c460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = puVar12;
      func_0x000108f4cbe0(puVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105f8715c; end: 105f871b3; -[SCSpotlight916ShareMessagePlugin _discoverFeedStoryFromDataProvider:] */

void FUN_105f8715c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c24c460();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000108f4cbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f871b4; end: 105f871fb; -[SCSpotlight916ShareMessagePlugin dismissPresentedView] */

void FUN_105f871b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f871fc; end: 105f87207; -[SCSpotlight916ShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105f871fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForMessage_co_112597710,param_3,param_4,1,0);
  return;
}



/* Entry: 105f87208; end: 105f87213; -[SCSpotlight916ShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105f87208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForMessage_co_112597710,param_3,param_4,2,0);
  return;
}



/* Entry: 105f87214; end: 105f8721b; -[SCSpotlight916ShareMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105f87214(void)

{
  return 1;
}



/* Entry: 105f8721c; end: 105f872d3; -[SCSpotlight916ShareMessagePlugin removeSpotlightScope:] */

void FUN_105f8721c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010bf1f460(uVar2,param_2,&PTR____CFConstantStringClassReference_110e344d8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      lVar3 = lVar1;
      func_0x00010c0f2220(lVar1);
      func_0x00010c24fc40(uVar4,param_2,lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f872d4; end: 105f872db; -[SCSpotlight916ShareMessagePlugin shouldDisplayContextualHeaderForMessage:] */

undefined8 FUN_105f872d4(void)

{
  return 1;
}



/* Entry: 105f872dc; end: 105f8740f; -[SCSpotlight916ShareMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105f872dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c68c0;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar4 == 0x10) {
    puVar7 = puVar5;
    func_0x000105f87820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c68c8;
    func_0x00010c131980(PTR_PTR_1126c68c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    puVar9 = puVar8;
  }
  else {
    puVar6 = puVar5;
    func_0x000105f87808();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e34418);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    puVar9 = puVar7;
  }
  func_0x00010c051540(puVar5,param_2,puVar7,0,puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f87410; end: 105f87417; -[SCSpotlight916ShareMessagePlugin quotedSupportEnabled] */

undefined8 FUN_105f87410(void)

{
  return 1;
}



/* Entry: 105f87418; end: 105f8755f; -[SCSpotlight916ShareMessagePlugin spotlightShareStoryFor:] */

void FUN_105f87418(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar7,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c24c460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105f87560; end: 105f87567; -[SCSpotlight916ShareMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f87560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 105f87568; end: 105f8756f; -[SCSpotlight916ShareMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f87568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 105f87570; end: 105f87587; -[SCSpotlight916ShareMessagePlugin uiContainer] */

void FUN_105f87570(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f87588; end: 105f87593; -[SCSpotlight916ShareMessagePlugin setUiContainer:] */

void FUN_105f87588(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 105f87594; end: 105f875ab; -[SCSpotlight916ShareMessagePlugin multiDirectionUIContainer] */

void FUN_105f87594(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f875ac; end: 105f875b7; -[SCSpotlight916ShareMessagePlugin setMultiDirectionUIContainer:] */

void FUN_105f875ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x138,param_3);
  return;
}



/* Entry: 105f875b8; end: 105f875cf; -[SCSpotlight916ShareMessagePlugin presentingViewController] */

void FUN_105f875b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f875d0; end: 105f875db; -[SCSpotlight916ShareMessagePlugin setPresentingViewController:] */

void FUN_105f875d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x140,param_3);
  return;
}



/* Entry: 105f875dc; end: 105f875e3; -[SCSpotlight916ShareMessagePlugin messageViewEvents] */

undefined8 FUN_105f875dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 105f875e4; end: 105f87613; -[SCSpotlight916ShareMessagePlugin setMessageViewEvents:] */

void FUN_105f875e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f87614; end: 105f8761b; -[SCSpotlight916ShareMessagePlugin visibleMessageIds] */

undefined8 FUN_105f87614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 105f8761c; end: 105f87807; -[SCSpotlight916ShareMessagePlugin .cxx_destruct] */

void FUN_105f8761c(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_destroyWeak(param_1 + 0x140);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f87808; end: 105f87837;  */

void FUN_105f87808(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34438;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34438,
                      &PTR____CFConstantStringClassReference_110e344f8,0);
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



/* Entry: 105f87838; end: 105f87a07; -[SCFriendStoryShareActionHandler initWithUiContainer:message:friendStoryShareDataProvider:friendProfileScopeExposer:snapchattersSynchronousDataFetcher:communitiesOnboardingScopeExposer:repostMentionScopeExposer:repostMentionScopeServices:messagingMessageProvider:] */

undefined1 *
FUN_105f87838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ee750;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f87a08; end: 105f87af3; -[SCFriendStoryShareActionHandler handleHeaderTap] */

void FUN_105f87a08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105f87af4; end: 105f87b0f; -[SCFriendStoryShareActionHandler handleActionButtonTapFor:] */

void FUN_105f87af4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bec15b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRepostMentionFlow_11258df10);
    return;
  }
  if (param_3 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bec0270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startJoinCommunityFlow_11258da40);
    return;
  }
  return;
}



/* Entry: 105f87b10; end: 105f87e73; -[SCFriendStoryShareActionHandler _startRepostMentionFlow] */

void FUN_105f87b10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(param_1 + 0x48);
  func_0x00010c0cbe00(lVar5,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar8;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar19;
  func_0x00010c0d3a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar8);
  puVar10 = PTR_PTR_1126c6930;
  _objc_alloc();
  lVar4 = lVar7;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010b67af60();
  uVar1 = lVar11 + 1;
  uVar2 = 1;
  if (uVar1 < 0x1b) {
    uVar2 = 0x1394288 >> (ulong)((uint)uVar1 & 0x1f);
  }
  if (0x1b < uVar1 || (1L << (uVar1 & 0x3f) & 0xb4b5dbbU) == 0) {
    uVar2 = 1;
  }
  lVar11 = lVar7;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar13;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c07b7e0();
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar8;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf62d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295a0(puVar10,param_2,lVar4,uVar2 & 1,lVar11,lVar12,uVar19,uVar9,lVar14,uVar3);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(uVar19);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar4);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf244e0(uVar19,param_2,*(undefined8 *)(param_1 + 8),puVar10,0,0,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar19);
  _objc_release(uVar19);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105f87e74; end: 105f87f4b; -[SCFriendStoryShareActionHandler _startJoinCommunityFlow] */

void FUN_105f87e74(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = 0;
    func_0x000100c6f294(0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar2,param_2,uVar5,param_1,uVar3,uVar4,0,0,0);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105f87f4c; end: 105f8800f; -[SCFriendStoryShareActionHandler _storyPosterSnapchatter] */

void FUN_105f87f4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c105880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c0e0(puVar1,param_2,uVar2,uVar3,0,0,0,0,0,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f88010; end: 105f88057; -[SCFriendStoryShareActionHandler friendProfileDidDismiss:] */

void FUN_105f88010(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f88058; end: 105f8809f; -[SCFriendStoryShareActionHandler verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_105f88058(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f880a0; end: 105f880e7; -[SCFriendStoryShareActionHandler didDismissRepostMention] */

void FUN_105f880a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f880e8; end: 105f8816b; -[SCFriendStoryShareActionHandler .cxx_destruct] */

void FUN_105f880e8(long param_1)

{
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



/* Entry: 105f8816c; end: 105f883db; -[SCFriendStoryShareDataProvider initWithMessage:storyId:renderForQuotedMessage:sharedStorySnapManager:storyShareDataListener:storyShareVisibilityListener:snapchattersSynchronousDataFetcher:userSessionScope:storiesMediaCoordinator:contentDelivery:storiesConfigProvider:messagingMessageProvider:] */

undefined8 *
FUN_105f8816c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126ee758;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x13) = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f883dc; end: 105f888b7; -[SCFriendStoryShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105f883dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puStack_1c8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 0x90);
  _objc_retain(lVar11);
  uVar3 = uVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = param_3;
  _objc_retainBlock();
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  _objc_release(uVar10);
  lVar7 = lVar11;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    _objc_initWeak(auStack_a0,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010c25b120();
    _objc_release(uVar10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)uVar5 == 0) {
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_105f89aa8;
      puStack_160 = &UNK_110900638;
      puStack_1c8 = auStack_130;
      _objc_copyWeak(puStack_1c8,auStack_a0);
      _objc_retain(param_3);
      uStack_148 = param_3;
      _objc_retain(lVar11);
      lStack_158 = lVar11;
      puStack_138 = &uStack_98;
      _objc_retain(uVar6);
      uStack_150 = uVar6;
      _objc_retain(param_5);
      ppuVar8 = &puStack_178;
      uStack_140 = param_5;
      _objc_retainBlock(ppuVar8);
      puStack_1b0 = puVar1;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_105f8a75c;
      puStack_198 = &UNK_110900688;
      _objc_copyWeak(auStack_180,auStack_a0);
      puStack_188 = &uStack_98;
      _objc_retain(param_4);
      ppuVar9 = &puStack_1b0;
      uStack_190 = param_4;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be90d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8620(uVar5);
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(ppuVar9);
      _objc_release(uStack_190);
      _objc_destroyWeak(auStack_180);
      _objc_release(ppuVar8);
      _objc_release(uStack_140);
      _objc_release(uStack_150);
      _objc_release(lStack_158);
      uVar5 = uStack_148;
    }
    else {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_105f888b8;
      puStack_d8 = &UNK_110900588;
      puStack_1c8 = auStack_a8;
      _objc_copyWeak(puStack_1c8,auStack_a0);
      _objc_retain(param_3);
      uStack_c0 = param_3;
      _objc_retain(lVar11);
      lStack_d0 = lVar11;
      puStack_b0 = &uStack_98;
      _objc_retain(uVar6);
      uStack_c8 = uVar6;
      _objc_retain(param_5);
      ppuVar9 = &puStack_f0;
      uStack_b8 = param_5;
      _objc_retainBlock(ppuVar9);
      puStack_128 = puVar1;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_105f895c4;
      puStack_110 = &UNK_110900608;
      _objc_copyWeak(auStack_f8,auStack_a0);
      puStack_100 = &uStack_98;
      _objc_retain(param_4);
      ppuVar8 = &puStack_128;
      uStack_108 = param_4;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be90d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa87c0(uVar5);
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(ppuVar8);
      _objc_release(uStack_108);
      _objc_destroyWeak(auStack_f8);
      _objc_release(ppuVar9);
      _objc_release(uStack_b8);
      _objc_release(uStack_c8);
      _objc_release(lStack_d0);
      uVar5 = uStack_c0;
    }
    _objc_release(uVar5);
    _objc_destroyWeak(puStack_1c8);
    _objc_destroyWeak(auStack_a0);
    __Block_object_dispose(&uStack_98,8);
  }
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f888b8; end: 105f8955b;  */

void FUN_105f888b8(long param_1,undefined *param_2,long param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  undefined *puStack_f0;
  undefined *puStack_e8;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _objc_retain(param_4);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_105f894c0;
  if (((ulong)param_2 & 1) == 0) {
    func_0x00010be083c0(uVar1);
    goto LAB_105f894c0;
  }
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_3 == 1;
  puVar8 = param_4;
  func_0x00010c105740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = param_4;
  func_0x00010c105740();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = param_4;
  func_0x00010c105740();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010c08fa60();
  puVar5 = puVar4;
  if (puVar8 != (undefined *)0x0) {
    puVar5 = puVar3;
  }
  _objc_retain(puVar5);
  func_0x00010c2bb3c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba580(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar4);
  uVar7 = *(undefined8 *)(uVar1 + 0x58);
  *(undefined **)(uVar1 + 0x58) = puVar4;
  _objc_release(uVar7);
  puVar8 = puVar3;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    _objc_retain(puVar4);
    uVar7 = *(undefined8 *)(uVar1 + 0x60);
    *(undefined8 *)(uVar1 + 0x60) = puVar4;
  }
  else {
    puVar8 = puVar3;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(uVar1 + 0x60);
    *(undefined8 *)(uVar1 + 0x60) = puVar8;
  }
  _objc_release(uVar7);
  _objc_retain(puVar6);
  uVar7 = *(undefined8 *)(uVar1 + 0x30);
  *(undefined **)(uVar1 + 0x30) = puVar6;
  _objc_release(uVar7);
  func_0x00010bf43d60(*(undefined8 *)(uVar1 + 0x88));
  puVar8 = *(undefined **)(uVar1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = param_4;
  func_0x00010c105740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  _objc_release(puVar8);
  if (puVar11 == (undefined *)0x0) {
    puVar8 = puVar9;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08fa60();
    _objc_release(puVar10);
    _objc_release(puVar8);
    if (puVar11 != (undefined *)0x0) {
      puVar8 = puVar9;
      func_0x00010bf1bae0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puVar9;
      func_0x00010bf1bae0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f88c00;
    }
  }
  else {
    puVar8 = param_4;
    func_0x00010c105740(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = param_4;
    func_0x00010c105740(param_4);
    _objc_retainAutoreleasedReturnValue();
LAB_105f88c00:
    puVar11 = puVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar12 = uVar1;
    func_0x00010bde3b60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb0a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  puVar10 = param_4;
  func_0x00010c105a80();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (puVar10 != (undefined *)0x0) {
    func_0x00010c105a80(param_4);
    func_0x00010bf651a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x0001084866e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba960(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  puVar10 = param_4;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar10;
  func_0x00010bf626e0();
  if (puVar8 == (undefined *)0x6) {
    _objc_release(puVar10);
LAB_105f88d40:
    puVar10 = param_4;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010c259840();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    _objc_release(puVar10);
    if (puVar11 != (undefined *)0x0) {
      puVar8 = param_4;
      func_0x00010c25a520(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c259840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb3c0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar8);
      puVar10 = puVar2;
      func_0x00010c2ba960(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    puVar8 = param_4;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf626e0();
    _objc_release(puVar8);
    _objc_release(puVar10);
    if (puVar11 == (undefined *)0x7) goto LAB_105f88d40;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
LAB_105f88e8c:
      func_0x000108f5944c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bbb80(*(undefined8 *)(uVar1 + 0x18));
    }
    else {
      puVar10 = (undefined *)0x0;
      if (param_3 == 1) {
        uVar12 = *(ulong *)(param_1 + 0x28);
        func_0x00010c0720c0();
        puVar8 = puVar9;
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c261440();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf0a8a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar11 == (undefined *)0x0) {
          func_0x00010c07b720(param_4);
        }
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar8);
        func_0x00010bf49720(*(undefined8 *)(uVar1 + 0x18));
        func_0x00010c25b720();
        puVar8 = param_4;
        func_0x00010c25a520();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar10;
        func_0x00010c27dd80();
        if (puVar8 == (undefined *)0x0) {
          puVar11 = puVar10;
          func_0x00010bf93e00();
          _objc_retainAutoreleasedReturnValue();
          puStack_e8 = puVar11;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puStack_f0 = puVar10;
          func_0x00010bf06600();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar11 = param_4;
          func_0x00010c25a520();
          _objc_retainAutoreleasedReturnValue();
          puStack_e8 = puVar11;
          func_0x00010c26df60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puVar11 = param_4;
          func_0x00010c25a520();
          _objc_retainAutoreleasedReturnValue();
          puStack_f0 = puVar11;
          func_0x00010c26e500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
        }
        puVar11 = puVar10;
        func_0x00010bf93e00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar10;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(uVar1 + 0x38);
        *(undefined **)(uVar1 + 0x38) = puVar11;
        _objc_release(uVar7);
        puVar11 = param_4;
        func_0x00010c25a520();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar11;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(uVar1 + 0x40);
        *(undefined **)(uVar1 + 0x40) = puVar14;
        _objc_release(uVar7);
        _objc_release(puVar11);
        puVar11 = param_4;
        func_0x00010c07b720();
        *(char *)(uVar1 + 0x48) = (char)puVar11;
        puVar11 = PTR_PTR_1126b2378;
        puVar14 = param_4;
        func_0x00010bf4e840(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bf15d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe3740();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(uVar1 + 0x50);
        *(undefined **)(uVar1 + 0x50) = puVar11;
        _objc_release(uVar7);
        _objc_release(puVar15);
        _objc_release(puVar14);
        if (((uVar12 & 1) == 0) && (uVar12 = uVar1, func_0x00010c077b60(), (uVar12 & 1) == 0)) {
          uVar16 = *(undefined8 *)(uVar1 + 0xb8);
          func_0x00010c0cbe00();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar16;
          func_0x00010bf4df40();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar7;
          func_0x00010c22a700();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010c258f40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0828e0();
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar7);
          _objc_release(uVar16);
        }
        if (puVar8 == (undefined *)0x0) {
          ppuVar19 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4120;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = &PTR____CFConstantStringClassReference_110dc1718;
          func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(ppuVar19);
          lVar22 = *(long *)(param_1 + 0x38);
          ppuVar19 = ppuVar20;
          func_0x00010beec820(ppuVar20);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar22 + 0x10))(lVar22,ppuVar19);
          _objc_release(ppuVar19);
          _objc_release(ppuVar20);
        }
        func_0x00010bf497e0(uVar1);
        _objc_release(puVar13);
        _objc_release(puStack_f0);
        _objc_release(puStack_e8);
        _objc_release(puVar10);
        puVar10 = (undefined *)0x0;
      }
    }
  }
  else {
    if (param_3 == 2) goto LAB_105f88e8c;
    puVar10 = (undefined *)0x0;
    if (param_3 != 3) goto LAB_105f89388;
    puVar8 = param_4;
    func_0x00010c25b720();
    if (puVar8 == (undefined *)0x1) {
      if (puVar9 == (undefined *)0x0) {
        func_0x000108f59434();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f5941c();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    else {
      puVar10 = param_4;
      func_0x00010c25a520();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar10;
      func_0x00010bf626e0();
      if (puVar8 == (undefined *)0x6) {
        _objc_release(puVar10);
      }
      else {
        puVar8 = param_4;
        func_0x00010c25a520();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x00010bf626e0();
        _objc_release(puVar8);
        _objc_release(puVar10);
        if (puVar11 != (undefined *)0x7) {
          puVar10 = param_4;
          func_0x00010c25a520();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar10;
          func_0x00010bf626e0();
          _objc_release(puVar10);
          if (puVar8 == (undefined *)0xa) {
            func_0x000108f59404();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x000108f5944c();
            _objc_retainAutoreleasedReturnValue();
          }
          goto LAB_105f89378;
        }
      }
      func_0x000108f59404();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_4;
      func_0x00010c25a520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf626e0();
      _objc_release(puVar8);
    }
LAB_105f89378:
    func_0x00010c0bbb80(*(undefined8 *)(uVar1 + 0x18));
  }
LAB_105f89388:
  func_0x00010c2a7620(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad540(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9180(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(uVar1 + 0x98) == '\x01') {
    puVar11 = PTR_PTR_1126c6870;
    func_0x00010c25b100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad540();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar22 = *(long *)(param_1 + 0x30);
    puVar13 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    (**(code **)(lVar22 + 0x10))(lVar22);
    _objc_release(puVar13);
    _objc_release(puVar11);
  }
  else {
    puVar8 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(uVar1 + 0x70);
    *(undefined **)(uVar1 + 0x70) = puVar8;
    _objc_release(uVar7);
    puVar8 = *(undefined **)(uVar1 + 0x70);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  lVar22 = uVar1 + 0x20;
  _objc_loadWeakRetained(lVar22);
  func_0x00010bf7e780();
  _objc_release(lVar22);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105f894c0:
  _objc_release(uVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
    ___stack_chk_fail();
    _objc_retain(*(undefined8 *)(puVar8 + 0x20));
    _objc_retain(*(undefined8 *)(puVar8 + 0x28));
    __Block_object_assign(param_4 + 0x30,*(undefined8 *)(puVar8 + 0x30),7);
    __Block_object_assign(param_4 + 0x38,*(undefined8 *)(puVar8 + 0x38),7);
    __Block_object_assign(param_4 + 0x40,*(undefined8 *)(puVar8 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_copyWeak_11034d210)(param_4 + 0x48,puVar8 + 0x48);
    return;
  }
  return;
}



/* Entry: 105f8955c; end: 105f895c3;  */

void FUN_105f8955c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 105f895c4; end: 105f8983b;  */

void FUN_105f895c4(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c25a520();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c27dd80();
      if ((lVar3 != 0) && (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01')) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
      }
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105f8983c;
      puStack_98 = &UNK_1108e27e8;
      lStack_90 = lVar2;
      _objc_retain(param_3);
      ppuVar5 = &puStack_b0;
      lStack_88 = param_3;
      uStack_80 = (ulong)(lVar3 != 0);
      _objc_retainBlock();
      puStack_e8 = puVar1;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105f898f8;
      puStack_d0 = &UNK_1109005d8;
      lStack_c8 = lVar2;
      _objc_retain(param_3);
      lStack_c0 = param_3;
      ppuStack_b8 = ppuVar5;
      _objc_retain(ppuVar5);
      ppuVar6 = &puStack_e8;
      _objc_retainBlock();
      uVar7 = *(undefined8 *)(lVar2 + 0xa0);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c25a520(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010bf267e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010b26c050(lVar8,lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar6);
      func_0x00010c11d620(uVar7);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar3);
      _objc_release(uVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar6);
      _objc_release(ppuStack_b8);
      _objc_release(lStack_c0);
      _objc_release(ppuVar5);
      _objc_release(lStack_88);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f8983c; end: 105f898f3;  */

void FUN_105f8983c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c25a520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104c00(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105f898f4; end: 105f898f7;  */

void FUN_105f898f4(void)

{
  return;
}



/* Entry: 105f898f8; end: 105f899e3;  */

void FUN_105f898f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x000108543814(0,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a8a0(uVar5);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105f899e4; end: 105f89aa7;  */

void FUN_105f899e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
  else {
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108455a88(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f89aa8; end: 105f8a75b;  */

void FUN_105f89aa8(long param_1,uint param_2,ulong param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = param_3;
  uVar24 = param_2;
  _objc_retain(param_4);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_105f8a6dc;
  if ((param_2 & 1) == 0) {
    uVar25 = *(ulong *)(param_1 + 0x30);
    func_0x00010be083c0(uVar1);
    goto LAB_105f8a6dc;
  }
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_3 == 0x4da97dc;
  puVar3 = param_4;
  func_0x00010c11afe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c11afe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c11afe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar6 = puVar4;
  func_0x00010c08fa60();
  puVar3 = puVar5;
  if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  _objc_retain(puVar3);
  func_0x00010c2bb3c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba580(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar5);
  uVar8 = *(undefined8 *)(uVar1 + 0x58);
  *(undefined **)(uVar1 + 0x58) = puVar5;
  _objc_release(uVar8);
  puVar6 = puVar4;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    _objc_retain(puVar5);
    uVar8 = *(undefined8 *)(uVar1 + 0x60);
    *(undefined8 *)(uVar1 + 0x60) = puVar5;
  }
  else {
    puVar6 = puVar4;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(uVar1 + 0x60);
    *(undefined8 *)(uVar1 + 0x60) = puVar6;
  }
  _objc_release(uVar8);
  _objc_retain(puVar7);
  uVar8 = *(undefined8 *)(uVar1 + 0x30);
  *(undefined **)(uVar1 + 0x30) = puVar7;
  _objc_release(uVar8);
  func_0x00010bf43d60(*(undefined8 *)(uVar1 + 0x88));
  puVar9 = *(undefined **)(uVar1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = param_4;
  func_0x00010c11afe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar11 == (undefined *)0x0) {
    puVar9 = puVar6;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08fa60();
    _objc_release(puVar10);
    _objc_release(puVar9);
    if (puVar11 != (undefined *)0x0) {
      puVar9 = puVar6;
      func_0x00010bf1bae0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar6;
      func_0x00010bf1bae0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f89df8;
    }
  }
  else {
    puVar9 = param_4;
    func_0x00010c11afe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = param_4;
    func_0x00010c11afe0(param_4);
    _objc_retainAutoreleasedReturnValue();
LAB_105f89df8:
    puVar11 = puVar9;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar25 = uVar1;
    func_0x00010bde3b60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb0a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar25);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  puVar9 = param_4;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c071f40();
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (((ulong)puVar11 & 1) == 0) {
    puVar10 = param_4;
    func_0x00010c258f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010bf651a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar9;
    func_0x0001084866e4(puVar9,4,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba960(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  puVar9 = param_4;
  func_0x00010bf626e0();
  if ((puVar9 == (undefined *)0x6) ||
     (puVar9 = param_4, func_0x00010bf626e0(), puVar9 == (undefined *)0x7)) {
    puVar9 = param_4;
    func_0x00010c259840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    _objc_release();
    if (puVar10 != (undefined *)0x0) {
      puVar9 = param_4;
      func_0x00010c259840(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb3c0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar2;
      func_0x00010c2ba960();
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  puVar10 = (undefined *)0x0;
  if ((long)param_3 < 0x4da97dc) {
    if ((param_3 == 0xffffffffbf2f4718) || (param_3 == 0)) {
      func_0x000108f5944c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bbb80(*(undefined8 *)(uVar1 + 0x18));
      puVar10 = puVar9;
    }
  }
  else if (param_3 == 0x2b446133) {
    puVar9 = param_4;
    func_0x00010c27dde0();
    if (puVar9 == (undefined *)0x7c18fe9e) {
      if (puVar6 == (undefined *)0x0) {
        func_0x000108f59434();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f5941c();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    else {
      puVar10 = param_4;
      func_0x00010bf626e0();
      if ((puVar10 == (undefined *)0x6) ||
         (puVar10 = param_4, func_0x00010bf626e0(), puVar10 == (undefined *)0x7)) {
        func_0x000108f59404();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf626e0();
      }
      else {
        puVar10 = param_4;
        func_0x00010bf626e0();
        if (puVar10 == (undefined *)0xa) {
          func_0x000108f59404();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000108f5944c();
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
    func_0x00010c0bbb80(*(undefined8 *)(uVar1 + 0x18));
  }
  else if (param_3 == 0x4da97dc) {
    uVar24 = (uint)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    puVar9 = puVar6;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined *)0x0) {
      puVar12 = param_4;
      func_0x00010c258f40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c07b720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010bf49740(*(undefined8 *)(uVar1 + 0x18));
    func_0x00010c27dde0();
    puVar9 = param_4;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0c6c20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c071f40();
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = param_4;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    puVar12 = param_4;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x00010c26df60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar12;
      func_0x00010c26e500();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar12;
      func_0x00010c0c6f60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar12);
    puVar12 = param_4;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = param_4;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(uVar1 + 0x38);
    *(undefined **)(uVar1 + 0x38) = puVar14;
    _objc_release(uVar8);
    _objc_release(puVar12);
    puVar12 = param_4;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c07b720();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf1f3c0();
    *(char *)(uVar1 + 0x48) = (char)puVar15;
    _objc_release(puVar14);
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126b2378;
    puVar14 = param_4;
    func_0x00010c258f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe3740();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(uVar1 + 0x50);
    *(undefined **)(uVar1 + 0x50) = puVar12;
    _objc_release(uVar8);
    _objc_release(puVar15);
    _objc_release(puVar14);
    if (((uVar24 & 1) == 0) && (uVar25 = uVar1, func_0x00010c077b60(), (uVar25 & 1) == 0)) {
      uVar16 = *(undefined8 *)(uVar1 + 0xb8);
      func_0x00010c0cbe00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar16;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar8;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0828e0();
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar8);
      _objc_release(uVar16);
    }
    if ((int)puVar11 != 0) {
      ppuVar19 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4120;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = &PTR____CFConstantStringClassReference_110dc1718;
      func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(ppuVar19);
      lVar27 = *(long *)(param_1 + 0x38);
      ppuVar19 = ppuVar20;
      func_0x00010beec820(ppuVar20);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar27 + 0x10))(lVar27,ppuVar19);
      _objc_release(ppuVar19);
      _objc_release(ppuVar20);
    }
    func_0x00010bf497e0(uVar1);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar10 = (undefined *)0x0;
  }
  func_0x00010c2a7620(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad540(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9180(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(uVar1 + 0x98) == '\x01') {
    puVar9 = PTR_PTR_1126c6870;
    func_0x00010c25b100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad540();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar27 = *(long *)(param_1 + 0x30);
    puVar11 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    (**(code **)(lVar27 + 0x10))(lVar27);
    uVar24 = (uint)puVar12;
    _objc_release(puVar11);
    _objc_release(puVar9);
  }
  else {
    puVar9 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(uVar1 + 0x70);
    *(undefined **)(uVar1 + 0x70) = puVar9;
    _objc_release(uVar8);
    uVar24 = (uint)*(undefined8 *)(uVar1 + 0x70);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  lVar27 = uVar1 + 0x20;
  _objc_loadWeakRetained();
  uVar25 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf7e780();
  _objc_release(lVar27);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_105f8a6dc:
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    _objc_retain(uVar25);
    if (uVar24 != 0) {
      puVar3 = param_4 + 0x30;
      _objc_loadWeakRetained();
      if (puVar3 != (undefined *)0x0) {
        uVar1 = uVar25;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(puVar3 + 0x40);
        *(ulong *)(puVar3 + 0x40) = uVar1;
        _objc_release(uVar8);
        uVar1 = uVar25;
        func_0x00010c074fe0();
        if (((uVar1 & 1) == 0) &&
           (*(char *)(*(long *)(*(long *)(param_4 + 0x28) + 8) + 0x18) == '\x01')) {
          (**(code **)(*(long *)(param_4 + 0x20) + 0x10))(*(long *)(param_4 + 0x20),uVar25);
        }
        uVar1 = uVar25;
        func_0x00010c074fe0();
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_105f8a9bc;
        puStack_1a8 = &UNK_1108e27e8;
        puStack_1a0 = puVar3;
        _objc_retain(uVar25);
        ppuVar19 = &puStack_1c0;
        uStack_198 = uVar25;
        uStack_190 = (ulong)((uint)uVar1 ^ 1);
        _objc_retainBlock();
        puStack_1f8 = puVar2;
        uStack_1f0 = 0xc2000000;
        pcStack_1e8 = FUN_105f8aa40;
        puStack_1e0 = &UNK_1109005d8;
        puStack_1d8 = puVar3;
        _objc_retain(uVar25);
        uStack_1d0 = uVar25;
        ppuStack_1c8 = ppuVar19;
        _objc_retain(ppuVar19);
        ppuVar20 = &puStack_1f8;
        _objc_retainBlock();
        uVar1 = uVar25;
        func_0x0001071ea420(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(puVar3 + 0xa0);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar25;
        func_0x00010c259cc0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar1;
        func_0x00010bf267e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar21;
        func_0x00010b26c050(uVar21,uVar22);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar20);
        func_0x00010c11d620(uVar8);
        _objc_release(uVar23);
        _objc_release(uVar22);
        _objc_release(uVar21);
        _objc_release(uVar8);
        _objc_release(ppuVar20);
        _objc_release(ppuVar20);
        _objc_release(uVar1);
        _objc_release(ppuStack_1c8);
        _objc_release(uStack_1d0);
        _objc_release(ppuVar19);
        _objc_release(uStack_198);
      }
      _objc_release(puVar3);
    }
    _objc_release(uVar25);
    return;
  }
  return;
}



/* Entry: 105f8a75c; end: 105f8a9bb;  */

void FUN_105f8a75c(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar2 + 0x40);
      *(ulong *)(lVar2 + 0x40) = uVar3;
      _objc_release(uVar9);
      uVar3 = param_3;
      func_0x00010c074fe0();
      if (((uVar3 & 1) == 0) &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01')) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
      }
      uVar3 = param_3;
      func_0x00010c074fe0();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105f8a9bc;
      puStack_98 = &UNK_1108e27e8;
      lStack_90 = lVar2;
      _objc_retain(param_3);
      ppuVar4 = &puStack_b0;
      uStack_88 = param_3;
      uStack_80 = (ulong)((uint)uVar3 ^ 1);
      _objc_retainBlock();
      puStack_e8 = puVar1;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105f8aa40;
      puStack_d0 = &UNK_1109005d8;
      lStack_c8 = lVar2;
      _objc_retain(param_3);
      uStack_c0 = param_3;
      ppuStack_b8 = ppuVar4;
      _objc_retain(ppuVar4);
      ppuVar5 = &puStack_e8;
      _objc_retainBlock();
      uVar3 = param_3;
      func_0x0001071ea420(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar2 + 0xa0);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bf267e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010b26c050(uVar6,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar5);
      func_0x00010c11d620(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar9);
      _objc_release(ppuVar5);
      _objc_release(ppuVar5);
      _objc_release(uVar3);
      _objc_release(ppuStack_b8);
      _objc_release(uStack_c0);
      _objc_release(ppuVar4);
      _objc_release(uStack_88);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f8a9bc; end: 105f8aa3b;  */

void FUN_105f8a9bc(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be36bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104c00(uVar1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105f8aa3c; end: 105f8aa3f;  */

void FUN_105f8aa3c(void)

{
  return;
}



/* Entry: 105f8aa40; end: 105f8aaf3;  */

void FUN_105f8aa40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108543814(0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a8a0(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105f8aaf4; end: 105f8abb7;  */

void FUN_105f8aaf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
  else {
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108455a88(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f8abb8; end: 105f8ad33; -[SCFriendStoryShareDataProvider _emitSnapUnavailableWithUIUpdateBlock:storyId:] */

void FUN_105f8abb8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f5944c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbb80(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9180(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x98) == '\x01') {
    puVar4 = PTR_PTR_1126c6870;
    func_0x00010c25b100(PTR_PTR_1126c6870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad540();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
    _objc_release(param_3);
    _objc_release(puVar3);
    param_3 = puVar4;
  }
  else {
    puVar4 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar4;
    _objc_release(uVar5);
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e780();
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f8ad34; end: 105f8ad67; -[SCFriendStoryShareDataProvider fetchData] */

void FUN_105f8ad34(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfa6370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchDataWithUIUpdateBlock_video_1125c7280,
             &PTR___NSConcreteGlobalBlock_1109006d8,&PTR___NSConcreteGlobalBlock_1109006f8,
             &PTR___NSConcreteGlobalBlock_110900718);
  return;
}



/* Entry: 105f8ad68; end: 105f8ad8f; -[SCFriendStoryShareDataProvider userId] */

void FUN_105f8ad68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8ad90; end: 105f8ad97; -[SCFriendStoryShareDataProvider userIdFuture] */

void FUN_105f8ad90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105f8ad98; end: 105f8adbf; -[SCFriendStoryShareDataProvider mediaId] */

void FUN_105f8ad98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8adc0; end: 105f8ade7; -[SCFriendStoryShareDataProvider lensId] */

void FUN_105f8adc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8ade8; end: 105f8adef; -[SCFriendStoryShareDataProvider isPublicStorySnap] */

undefined1 FUN_105f8ade8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 105f8adf0; end: 105f8ae4b; -[SCFriendStoryShareDataProvider isMentionRepost] */

undefined8 FUN_105f8adf0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010bf3d0e0();
  if (iVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c27f9c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdcca0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 105f8ae4c; end: 105f8ae73; -[SCFriendStoryShareDataProvider storyId] */

void FUN_105f8ae4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8ae74; end: 105f8ae9b; -[SCFriendStoryShareDataProvider contextHint] */

void FUN_105f8ae74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8ae9c; end: 105f8aec3; -[SCFriendStoryShareDataProvider posterUsername] */

void FUN_105f8ae9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8aec4; end: 105f8aeeb; -[SCFriendStoryShareDataProvider thumbnailDownloadInfo] */

void FUN_105f8aec4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8aeec; end: 105f8b0fb; -[SCFriendStoryShareDataProvider updateUIWithActionButton:] */

void FUN_105f8aeec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  if (param_3 == 2) {
    func_0x000108f59434();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 3) {
      uStack_68 = (undefined *)0x0;
      goto LAB_105f8af84;
    }
    func_0x000108f5941c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
LAB_105f8af84:
  puVar2 = PTR_PTR_1126c6938;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c260dc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c26e520(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c25a980(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15520(*(undefined8 *)(param_1 + 0x70));
  func_0x00010bfdff00();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf9dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29c5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf12c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053860();
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb7700();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x68) + 0x10))
            (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_68);
  return;
}



/* Entry: 105f8b0fc; end: 105f8b1b3; -[SCFriendStoryShareDataProvider constructThumbnailDownloadInfoWithUrl:encryptionKey:encryptionIV:] */

void FUN_105f8b0fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfca8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c020b60();
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126c6940;
  _objc_alloc();
  func_0x00010c051fe0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f8b1b4; end: 105f8b1bb; -[SCFriendStoryShareDataProvider shouldOverrideMediaSize] */

undefined1 FUN_105f8b1b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 105f8b1bc; end: 105f8b1cf; -[SCFriendStoryShareDataProvider overrideMediaSize] */

undefined1  [16] FUN_105f8b1bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4064000000000000;
  auVar1._0_8_ = 0x4056800000000000;
  return auVar1;
}



/* Entry: 105f8b1d0; end: 105f8b27b; -[SCFriendStoryShareDataProvider _requestContextsWithConversationId:] */

void FUN_105f8b1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e34518);
  return;
}



/* Entry: 105f8b27c; end: 105f8b2af; -[SCFriendStoryShareDataProvider _composerBitmojiSelfieUrlStringWithAvatarId:selfieId:userId:] */

void FUN_105f8b27c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e34518);
  return;
}



/* Entry: 105f8b2b0; end: 105f8b2c7; -[SCFriendStoryShareDataProvider storySharePlaybackPresenterDelegate] */

void FUN_105f8b2b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f8b2c8; end: 105f8b2d3; -[SCFriendStoryShareDataProvider setStorySharePlaybackPresenterDelegate:] */

void FUN_105f8b2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 105f8b2d4; end: 105f8b3eb; -[SCFriendStoryShareDataProvider .cxx_destruct] */

void FUN_105f8b2d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f8b3ec; end: 105f8bd63; -[SCFriendStorySharePlaybackDataProvider initWithDiscoverPluginCreator:uiContainer:discoverFeedFriendStoriesDataCoordinator:playbackDataProvider:myStoriesPlaybackDataProvider:autoAdvancePlaybackDataProvider:composerRenderedPlugin:operaPresenterDelegate:optInDataProvider:userSessionScope:myStoriesDataCoordinator:contextOperaPluginProvider:storiesMediaCoordinator:snapchattersSynchronousDataFetcher:externalLinkSendingService:saveFriendStoryOperaPluginProvider:playableViewModelGenerator:discoverDataFetcher:circumstanceEngine:storiesConfigProvider:spotlightShareSender:spotlightPlatformAnalyticsCreator:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:offPlatformShareServices:storiesNetworkRequester:networkConnectivityMonitor:locationProvider:discoverFeedDataMutator:isGroup:message:adRenderDataParser:musicContentRestrictionServices:shareNotificationService:userBlizzardLogger:storiesUsageLogger:blizzardLogger:imageDownloader:discoverFeedEventsController:discoverFeedInteractionHistoryManager:remixOperaPluginProvider:unlockableViewTracker:snapchatterUserInfoProvider:playbackMediaResolver:playbackAssetRepositoryFactory:offPlatformLinkGenerationService:snapchatterObservableRepository:storiesGrapheneMetricsEmitter:grapheneRegistry:legacyStoriesTooltipsService:] */

undefined8 *
FUN_105f8b3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
             undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  puStack_70 = PTR_PTR_1126ee760;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    func_0x00010c222640(puVar1[6]);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_31;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x2b) = param_32;
    _objc_retain(param_34);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_53;
    _objc_release(uVar2);
  }
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f8bd64; end: 105f8bdab; -[SCFriendStorySharePlaybackDataProvider operaLaunchingCandidates] */

void FUN_105f8bd64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bde6d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  *(long *)(param_1 + 0x168) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f8bdac; end: 105f8c32b; -[SCFriendStorySharePlaybackDataProvider playlistPlugins] */

void FUN_105f8bdac(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(char *)(param_2 + 0x130) == '\x01') {
    puVar2 = *(undefined **)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010bf556a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar14 != (undefined *)0x0) {
      func_0x00010befa120(puVar1);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_2 + 400);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x198);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_2 + 0x1d0);
    uVar18 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x120);
    uVar17 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x0001072058bc(uVar3,uVar18,uVar7,0,0,(long)(param_1 * 1000.0),1,uVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar7);
    _objc_release(uVar18);
    uVar18 = uVar8;
    func_0x00010befa120(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(param_2 + 0x160);
    func_0x000107d04eec();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(char *)(param_2 + 0x158) == '\x01') {
      puVar11 = *(undefined **)(param_2 + 0x160);
      func_0x000107d04f3c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = *(undefined **)(param_2 + 0x160);
    func_0x000107d04fac();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    if (puVar12 == (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      _objc_release(puVar13);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_2 + 0x140);
    *(undefined **)(param_2 + 0x140) = puVar2;
    _objc_release(uVar17);
    uVar18 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010bfb7ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    uVar18 = uVar17;
    func_0x00010befa160(puVar1);
    _objc_release(uVar17);
  }
  _objc_release(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b23f0;
    _objc_retain(uVar18);
    _objc_alloc(puVar1);
    func_0x00010c011ae0();
    _objc_release(uVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f8c32c; end: 105f8c39b; -[SCFriendStorySharePlaybackDataProvider operaSessionContextWithIntentDate:] */

void FUN_105f8c32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c011ae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


