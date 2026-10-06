/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fd19fc; end: 105fd1f6f; -[SCSnapProChatShareMessageRenderingPlugin _getContextProviderForSnapId:snapProUserId:message:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:] */

void FUN_105fd19fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,uint param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined *puStack_a0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _os_unfair_lock_lock(param_1 + 200);
  lVar34 = *(long *)(param_1 + 0x50);
  uVar22 = param_5;
  func_0x00010bf490e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar34,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  lVar35 = *(long *)(param_1 + 0x58);
  uVar22 = param_5;
  func_0x00010bf490e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar35,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  if ((((param_8 & 1) == 0) && ((param_7 & 1) == 0)) && (lVar34 != 0)) {
    _objc_retain(lVar34);
    lVar30 = lVar34;
  }
  else if (lVar35 == 0) {
    uVar22 = param_5;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    _objc_release(uVar22);
    puVar25 = PTR_PTR_1126c6d60;
    _objc_alloc();
    uVar29 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    uVar37 = *(undefined8 *)(param_1 + 0x130);
    uVar4 = *(undefined8 *)(param_1 + 0x150);
    uVar9 = *(undefined8 *)(param_1 + 0x158);
    uVar36 = *(undefined8 *)(param_1 + 0xd8);
    uVar22 = uVar24;
    func_0x00010c0828a0();
    param_7 = param_7 | param_8;
    func_0x00010c0482e0(puVar25,param_2,param_4,param_3,uVar29,uVar1,uVar5,uVar6,uVar2,uVar7,uVar3,
                        uVar8,param_1,uVar37,(char)param_7,uVar4,uVar9,uVar36,uVar22 & 0xff);
    if ((param_8 & 1) == 0) {
      puVar38 = PTR_PTR_1126c6d68;
      _objc_alloc();
      uVar29 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar32 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar31 = *(undefined8 *)(param_1 + 0x70);
      lVar26 = param_1 + 0x1c0;
      _objc_loadWeakRetained();
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      uVar12 = *(undefined8 *)(param_1 + 0x90);
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      uVar13 = *(undefined8 *)(param_1 + 0xd8);
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      uVar14 = *(undefined8 *)(param_1 + 0xe8);
      uVar5 = *(undefined8 *)(param_1 + 0xf8);
      uVar15 = *(undefined8 *)(param_1 + 0x100);
      uVar6 = *(undefined8 *)(param_1 + 0x108);
      uVar16 = *(undefined8 *)(param_1 + 0x110);
      uVar7 = *(undefined8 *)(param_1 + 0x120);
      uVar17 = *(undefined8 *)(param_1 + 0x128);
      uVar8 = *(undefined8 *)(param_1 + 0xa0);
      uVar18 = *(undefined8 *)(param_1 + 0xa8);
      uVar9 = *(undefined8 *)(param_1 + 0x160);
      uVar19 = *(undefined8 *)(param_1 + 0x168);
      uVar36 = *(undefined8 *)(param_1 + 0x170);
      uVar20 = *(undefined8 *)(param_1 + 0x178);
      uVar37 = *(undefined8 *)(param_1 + 0x180);
      uVar21 = *(undefined8 *)(param_1 + 0x188);
      uVar33 = *(undefined8 *)(param_1 + 400);
      uVar27 = param_6;
      func_0x0001070b1c70();
      func_0x00010c0482c0(puVar38,param_2,param_4,puVar25,uVar29,uVar10,uVar32,uVar1,uVar11,param_1,
                          uVar31,lVar26,uVar2,uVar12,uVar3,uVar8,uVar13,uVar4,uVar14,uVar5,uVar15,
                          uVar6,uVar16,uVar7,uVar17,uVar18,uVar9,uVar19,uVar36,uVar20,uVar37,uVar21,
                          uVar33,(char)uVar27);
      _objc_release(lVar26);
    }
    else {
      puVar38 = (undefined *)0x0;
    }
    func_0x00010c20da20();
    if ((param_7 & 1) == 0) {
      puStack_a0 = PTR_PTR_1126c6d70;
      _objc_alloc();
      lVar26 = param_1 + 0x1b0;
      _objc_loadWeakRetained(lVar26);
      func_0x00010c048300(puStack_a0,param_2,param_4,param_3,puVar25,lVar26,
                          *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x78),puVar38,
                          *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xd0),
                          *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x118),
                          *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x138),
                          *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
      _objc_release(lVar26);
    }
    else {
      puStack_a0 = (undefined *)0x0;
    }
    lVar28 = *(long *)(param_1 + 8);
    func_0x00010c295300(lVar28);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar28;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf821c0(uVar29);
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar26;
    func_0x00010bf4ef00(lVar26,param_2,puVar25,puVar38,uVar29,puStack_a0,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar29);
    _objc_release(lVar26);
    _objc_release(lVar28);
    uVar22 = param_5;
    if (param_7 == 0) {
      uVar29 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf490e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar29,param_2,lVar30,uVar22);
    }
    else {
      uVar29 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf490e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar29,param_2,lVar30,uVar22);
    }
    _objc_release(uVar22);
    uVar29 = *(undefined8 *)(param_1 + 0x60);
    uVar22 = param_5;
    func_0x00010bf490e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar29,param_2,puVar25,uVar22);
    _objc_release(uVar22);
    _objc_release(puStack_a0);
    _objc_release(puVar38);
    _objc_release(puVar25);
    _objc_release(uVar24);
  }
  else {
    _objc_retain(lVar35);
    lVar30 = lVar35;
  }
  _objc_release(lVar35);
  _objc_release(lVar34);
  _os_unfair_lock_unlock(param_1 + 200);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar30);
  return;
}



/* Entry: 105fd1f70; end: 105fd1fcb; -[SCSnapProChatShareMessageRenderingPlugin _handleConversationChange] */

void FUN_105fd1f70(long param_1)

{
  _os_unfair_lock_lock(param_1 + 200);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 200);
  return;
}



/* Entry: 105fd1fcc; end: 105fd20a7; -[SCSnapProChatShareMessageRenderingPlugin _thumbnailObservableWithThumbnailUrlObservable:] */

void FUN_105fd1fcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010bfb2660(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fd20a8; end: 105fd2193;  */

void FUN_105fd20a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  if (param_2 == 0) {
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fd2194; end: 105fd2313;  */

void FUN_105fd2194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126aebd8;
    func_0x00010c14e320(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar3 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    _objc_retain(param_2);
    func_0x00010bf88c20(uVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fd2314; end: 105fd233f;  */

void FUN_105fd2314(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105fd2340; end: 105fd23e7; -[SCSnapProChatShareMessageRenderingPlugin _storyForMessage:] */

void FUN_105fd2340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 200);
  uVar1 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 200);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c258f40(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fd23e8; end: 105fd2483; -[SCSnapProChatShareMessageRenderingPlugin didHideForwardButtonForStoryId:] */

void FUN_105fd23e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 200);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xf0),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 200);
    param_1 = param_1 + 0x1c8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101c40();
    _objc_release(param_1);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 200);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fd2484; end: 105fd262b; -[SCSnapProChatShareMessageRenderingPlugin dismissPresentedView] */

long FUN_105fd2484(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _os_unfair_lock_lock(param_1 + 200);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar2 = *(long *)(param_1 + 0x60);
        func_0x00010c0e00e0(lVar2,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c25b080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c0e00e0(uVar4,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c25b080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf376e0();
          _objc_release(uVar6);
          _objc_release(uVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  lVar1 = param_1 + 200;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 200);
  __Unwind_Resume();
  return *(long *)(lVar1 + 0x1a0);
}



/* Entry: 105fd262c; end: 105fd2633; -[SCSnapProChatShareMessageRenderingPlugin activeConversationInformationObservable] */

undefined8 FUN_105fd262c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 105fd2634; end: 105fd2663; -[SCSnapProChatShareMessageRenderingPlugin setActiveConversationInformationObservable:] */

void FUN_105fd2634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fd2664; end: 105fd266b; -[SCSnapProChatShareMessageRenderingPlugin activeConversationIdObservable] */

undefined8 FUN_105fd2664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 105fd266c; end: 105fd2683; -[SCSnapProChatShareMessageRenderingPlugin uiContainer] */

void FUN_105fd266c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd2684; end: 105fd268f; -[SCSnapProChatShareMessageRenderingPlugin setUiContainer:] */

void FUN_105fd2684(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b0,param_3);
  return;
}



/* Entry: 105fd2690; end: 105fd26a7; -[SCSnapProChatShareMessageRenderingPlugin presentingViewController] */

void FUN_105fd2690(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd26a8; end: 105fd26b3; -[SCSnapProChatShareMessageRenderingPlugin setPresentingViewController:] */

void FUN_105fd26a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b8,param_3);
  return;
}



/* Entry: 105fd26b4; end: 105fd26cb; -[SCSnapProChatShareMessageRenderingPlugin operaPresenterDelegate] */

void FUN_105fd26b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd26cc; end: 105fd26d7; -[SCSnapProChatShareMessageRenderingPlugin setOperaPresenterDelegate:] */

void FUN_105fd26cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c0,param_3);
  return;
}



/* Entry: 105fd26d8; end: 105fd26ef; -[SCSnapProChatShareMessageRenderingPlugin forwardingDelegate] */

void FUN_105fd26d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd26f0; end: 105fd26fb; -[SCSnapProChatShareMessageRenderingPlugin setForwardingDelegate:] */

void FUN_105fd26f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c8,param_3);
  return;
}



/* Entry: 105fd26fc; end: 105fd29a3; -[SCSnapProChatShareMessageRenderingPlugin .cxx_destruct] */

void FUN_105fd26fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1c8);
  _objc_destroyWeak(param_1 + 0x1c0);
  _objc_destroyWeak(param_1 + 0x1b8);
  _objc_destroyWeak(param_1 + 0x1b0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
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
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fd29a4; end: 105fd2d63; -[SCSnapProShareDataFetcher initWithSnapProId:snapId:snapProProfilesProvider:storiesNetworkRequester:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:notificationPool:networkConnectivityMonitor:locationProvider:forwardabilityListener:mediaCoordinator:renderForQuotedMessage:adRenderDataParser:remoteSnapchattersDataFetcher:storiesConfigProvider:isUserQuoted:] */

undefined8 *
FUN_105fd29a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126eed18;
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
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_13);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x14) = param_15;
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    uVar2 = param_19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2320;
    func_0x00010c25a1c0(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320();
    *(char *)((long)puVar1 + 0xa1) = (char)uVar4;
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x000108f493d4();
    *(char *)((long)puVar1 + 0xa3) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0xa2) = param_20;
    *(undefined4 *)(puVar1 + 0x19) = 0;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 105fd2d64; end: 105fd2dab; -[SCSnapProShareDataFetcher dealloc] */

void FUN_105fd2d64(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xa8));
  puStack_28 = PTR_PTR_1126eed18;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105fd2dac; end: 105fd2dfb; -[SCSnapProShareDataFetcher hasLiveStory] */

long FUN_105fd2dac(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 200);
  lVar1 = param_1;
  func_0x00010be34080(param_1);
  _os_unfair_lock_unlock(param_1 + 200);
  return lVar1;
}



/* Entry: 105fd2dfc; end: 105fd2e73; -[SCSnapProShareDataFetcher snapProUserName] */

void FUN_105fd2dfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf25000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe4480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fd2e74; end: 105fd2e9b; -[SCSnapProShareDataFetcher storyThumbnailUrlObservable] */

void FUN_105fd2e74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fd2e9c; end: 105fd2ed7; -[SCSnapProShareDataFetcher story] */

void FUN_105fd2e9c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fd2ed8; end: 105fd2f2f; -[SCSnapProShareDataFetcher initialSnapClientId] */

void FUN_105fd2ed8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c24cfc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fd2f30; end: 105fd2fa7; -[SCSnapProShareDataFetcher snapProHostUserId] */

void FUN_105fd2f30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf25000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fd2fa8; end: 105fd30a7; -[SCSnapProShareDataFetcher subscribe] */

void FUN_105fd2fa8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 200);
  lVar2 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retainBlock();
  _os_unfair_lock_unlock(param_1 + 200);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c28a860(lVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(uVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 105fd30a8; end: 105fd316f;  */

void FUN_105fd30a8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (func_0x00010bee2c60(param_1), param_2 != 0)) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e357d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e357d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf55ce0(PTR_PTR_1126afde0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd3170; end: 105fd33d7; -[SCSnapProShareDataFetcher _updateWithSnapProProfileHandler:uiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105fd3170(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [8];
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126b0f68;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    _os_unfair_lock_lock(param_1 + 200);
    _objc_retain(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = uVar1;
    _objc_release(uVar5);
    _os_unfair_lock_unlock(param_1 + 200);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined1 *)(param_1 + 0xa3);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105fd33d8;
    puStack_a8 = &UNK_110905570;
    uStack_80 = uVar2;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_4);
    uStack_a0 = param_4;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(param_6);
    uStack_90 = param_6;
    func_0x00010be14140(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    _objc_copyWeak(auStack_d0,auStack_78);
    uStack_c8 = uVar2;
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010befa2a0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_d0);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd33d8; end: 105fd345b;  */

void FUN_105fd33d8(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    cVar1 = *(char *)(param_1 + 0x40);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    if (cVar1 == '\x01') {
      func_0x00010be2f300();
    }
    else {
      func_0x00010bee2c60();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd345c; end: 105fd356b;  */

void FUN_105fd345c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uStack_48 = *(undefined1 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_50,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be14140(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 105fd356c; end: 105fd35ef;  */

void FUN_105fd356c(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    cVar1 = *(char *)(param_1 + 0x40);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    if (cVar1 == '\x01') {
      func_0x00010be2f300();
    }
    else {
      func_0x00010bee2c60();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd35f0; end: 105fd3787; -[SCSnapProShareDataFetcher _handleResolveResultWithStorySnap:uiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105fd35f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105fd3788;
  puStack_80 = &UNK_1109055d0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_6);
  ppuVar1 = &puStack_98;
  uStack_68 = param_6;
  _objc_retainBlock();
  if (param_3 == 0) {
    if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa4) = 1;
      func_0x00010bec1a20(param_1);
      if ((*(byte *)(param_1 + 0xa4) & 1) == 0) goto LAB_105fd3700;
    }
  }
  else if (*(byte *)(param_1 + 0xa4) != 0) {
    func_0x00010be172e0(param_1);
  }
  (*(code *)ppuVar1[2])(ppuVar1,param_3);
LAB_105fd3700:
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd3788; end: 105fd37df;  */

void FUN_105fd3788(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd37e0; end: 105fd38b3; -[SCSnapProShareDataFetcher _startStoryCardResolveWithShareTileRenderBlock:] */

void FUN_105fd37e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be36ce0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd38b4; end: 105fd3917;  */

void FUN_105fd38b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdd1fc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd3918; end: 105fd3a1f; -[SCSnapProShareDataFetcher _identifyOwnershipWithCompletion:] */

void FUN_105fd3918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfd3260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd3a20; end: 105fd3afb;  */

void FUN_105fd3a20(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b0f68;
  if (lVar2 == 0) goto LAB_105fd3adc;
  _objc_retain(param_2);
  _objc_opt_class(puVar3);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    uVar4 = *(ulong *)(lVar2 + 0x88);
    _objc_retain(uVar4);
    if (uVar4 != 0) goto LAB_105fd3ab4;
  }
  else {
    _objc_retain(param_2);
    uVar4 = param_2;
LAB_105fd3ab4:
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar4,uVar1 != 0);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
LAB_105fd3adc:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd3afc; end: 105fd3bab; -[SCSnapProShareDataFetcher _awaitStoryCardOnHandler:isOwnStory:shareTileRenderBlock:] */

void FUN_105fd3afc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0xc0) + 1;
  *(long *)(param_1 + 0xc0) = lVar1;
  func_0x00010be88240(param_1,param_2,param_3,param_5);
  if ((*(char *)(param_1 + 0xa4) == '\x01') &&
     (func_0x00010be9b8c0(param_1,param_2,lVar1,param_5), (param_4 & 1) == 0)) {
    func_0x00010be757e0(param_1,param_2,lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fd3bac; end: 105fd3d17; -[SCSnapProShareDataFetcher _refreshAndObserveStoryCardOnHandler:shareTileRenderBlock:] */

void FUN_105fd3bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c259c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_3;
  func_0x00010c259c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uVar1 = uVar2;
  func_0x00010befa2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xa8));
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd3d18; end: 105fd3d7b;  */

void FUN_105fd3d18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) == 0)) {
    func_0x00010be86720(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd3d7c; end: 105fd3fc3; -[SCSnapProShareDataFetcher _readSnapFromStoryHandler:shareTileRenderBlock:] */

void FUN_105fd3d7c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    if (lVar1 != 0) {
      lVar3 = param_3;
      func_0x00010c089340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        func_0x00010be172e0(param_1);
        (**(code **)(param_4 + 0x10))(param_4,0);
      }
    }
  }
  else {
    puVar4 = PTR_PTR_1126b0ef0;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b0ef8;
      _objc_alloc(PTR_PTR_1126b0ef8);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03ef40(puVar5);
      _objc_release(puVar6);
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
      if (*(undefined **)(param_1 + 0xb8) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0xb8);
      }
      puVar7 = puVar4;
      func_0x000108482f84(puVar4,puVar5,0,0,0,0,puVar6,0,0,0,*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        _objc_retain(param_4);
        func_0x00010be16c20(param_1);
        _objc_release(param_4);
      }
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd3fc4; end: 105fd401b;  */

void FUN_105fd3fc4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010be172e0(uVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 105fd401c; end: 105fd40fb; -[SCSnapProShareDataFetcher _scheduleUnavailableFallbackForGeneration:shareTileRenderBlock:] */

void FUN_105fd401c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_time(0,120000000000);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fd40fc;
  puStack_58 = &UNK_110848558;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_50 = param_4;
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fd40fc; end: 105fd4167;  */

void FUN_105fd40fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((((lVar1 != 0) && (*(long *)(lVar1 + 0xc0) == *(long *)(param_1 + 0x30))) &&
      (*(char *)(lVar1 + 0xa4) == '\x01')) && (*(long *)(lVar1 + 0x20) == 0)) {
    func_0x00010be172e0(lVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fd4168; end: 105fd42a3; -[SCSnapProShareDataFetcher _pollStoryCardUntilSnapIndexedForGeneration:] */

void FUN_105fd4168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_time(0,5000000000);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105fd421c;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fd42a4; end: 105fd42e3; -[SCSnapProShareDataFetcher _finishStoryCardResolve] */

void FUN_105fd42a4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xa4) = 0;
  return;
}



/* Entry: 105fd42e4; end: 105fd435b; -[SCSnapProShareDataFetcher _hasLiveStory] */

bool FUN_105fd42e4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x18) != 0;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105fd435c; end: 105fd460b; -[SCSnapProShareDataFetcher _fetchSnapchatterAndStoryWithCompletion:] */

void FUN_105fd435c(ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined **unaff_x25;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = *(undefined1 **)(param_1 + 0x20);
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_1 + 0x88);
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010c08fa60();
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    else {
      puVar8 = (undefined1 *)0x11;
      puVar2 = puVar1;
      func_0x000108f51ed0(puVar1,0x11,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)puVar2;
      func_0x000108f51d40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c25baa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      _objc_release(lVar3);
      if ((lVar4 == 0) || (uVar5 = param_1, func_0x00010be16c20(), (uVar5 & 1) == 0)) {
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_60 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_68,param_1);
        uVar7 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_105fd460c;
        puStack_88 = &UNK_1109056c0;
        puVar8 = auStack_68;
        _objc_copyWeak(auStack_70,puVar8);
        _objc_retain(param_3);
        lStack_78 = param_3;
        _objc_retain(puVar2);
        puStack_80 = puVar2;
        func_0x00010bfaa4c0(uVar7);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar7);
        _objc_release(puStack_80);
        _objc_release(lStack_78);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(puVar6);
        unaff_x25 = &puStack_a0;
      }
      _objc_release(lVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,puVar8,1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x30));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar8);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be14b80();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fd460c; end: 105fd465f;  */

void FUN_105fd460c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14b80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd4660; end: 105fd4703; -[SCSnapProShareDataFetcher _fetchStoryWithCompletion:snapchatterByUserId:compositeStoryId:] */

void FUN_105fd4660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0xa2) == '\x01') {
    func_0x00010be14b20();
  }
  else {
    func_0x00010be14b40(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fd4704; end: 105fd48c3; -[SCSnapProShareDataFetcher _fetchStoryViaStoryLookupWithCompletion:snapchatterByUserId:compositeStoryId:] */

void FUN_105fd4704(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105fd48c4;
  puStack_80 = &UNK_1109056f0;
  _objc_retain(param_5);
  uStack_78 = param_5;
  lStack_70 = param_1;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_4);
  func_0x00010bfaa9e0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd48c4; end: 105fd48df;  */

/* WARNING: Removing unreachable block (ram,0x00010846dc58) */

void FUN_105fd48c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(lVar9 + 0x10);
  uVar1 = *(undefined8 *)(lVar9 + 0x58);
  uVar2 = *(undefined8 *)(lVar9 + 0x60);
  cVar3 = *(char *)(lVar9 + 0xa1);
  _objc_retain(lVar11);
  puVar4 = PTR_PTR_1126c0de8;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar7);
  _objc_opt_new(puVar4);
  puVar5 = puVar4;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar4);
  _objc_release(puVar5);
  func_0x00010c1ec220(puVar4);
  uVar6 = uVar7;
  func_0x00010846d990(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c1805c0(puVar4);
  _objc_release(uVar6);
  uVar7 = uVar1;
  func_0x000108f13840(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c17cd40(puVar4);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126c0dd8;
  _objc_opt_new(PTR_PTR_1126c0dd8);
  puVar8 = puVar4;
  func_0x00010bf454e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar5);
  _objc_release(puVar8);
  if (cVar3 == '\0') {
    lVar9 = lVar11;
    func_0x00010c08fa60();
    if (lVar9 != 0) {
      puVar8 = PTR_PTR_1126d9760;
      _objc_opt_new(PTR_PTR_1126d9760);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204720(puVar8);
      _objc_release(puVar10);
      puVar10 = puVar8;
      func_0x00010c2414e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar10);
      func_0x00010c2054a0(puVar5);
      _objc_release(puVar8);
    }
  }
  else {
    func_0x00010c197f60(puVar5);
  }
  func_0x00010c1ebdc0(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fd48e0; end: 105fd49d3;  */

void FUN_105fd48e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bec49a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,1);
    }
    else {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010be16c20();
      _objc_release(param_1);
    }
    _objc_release(lVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fd49d4; end: 105fd4b6b; -[SCSnapProShareDataFetcher _fetchStoryViaBatchStoryLookupWithCompletion:snapchatterByUserId:compositeStoryId:] */

void FUN_105fd49d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105fd4b6c;
  puStack_70 = &UNK_1109007f8;
  _objc_retain(param_5);
  uStack_68 = param_5;
  lStack_60 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_4);
  func_0x00010bfa5340(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd4b6c; end: 105fd4b87;  */

void FUN_105fd4b6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  uVar2 = *(undefined8 *)(lVar9 + 0x60);
  cVar3 = *(char *)(lVar9 + 0xa1);
  _objc_retain(0);
  puVar4 = PTR_PTR_1126d5c48;
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  _objc_opt_new(puVar4);
  puVar5 = puVar4;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar4);
  _objc_release(puVar5);
  func_0x00010c1d64a0(puVar4);
  uVar6 = uVar7;
  func_0x000108f13840(uVar7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  func_0x00010c17cd40(puVar4);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c0dd8;
  _objc_opt_new(PTR_PTR_1126c0dd8);
  uVar7 = uVar1;
  func_0x00010846d990(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1805c0(puVar5);
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126d5c50;
  _objc_opt_new(PTR_PTR_1126d5c50);
  func_0x00010c19b200();
  func_0x00010c196c60(puVar5);
  if (cVar3 == '\0') {
    lVar9 = 0;
    func_0x00010c08fa60();
    if (lVar9 != 0) {
      puVar10 = PTR_PTR_1126d9760;
      _objc_opt_new(PTR_PTR_1126d9760);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204720(puVar10);
      _objc_release(puVar11);
      puVar11 = puVar10;
      func_0x00010c2414e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar11);
      func_0x00010c2054a0(puVar5);
      _objc_release(puVar10);
    }
  }
  else {
    func_0x00010c197f60(puVar5);
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebde0(puVar4);
  _objc_release(puVar10);
  puVar10 = puVar4;
  func_0x00010c1359c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fd4b88; end: 105fd4ccf;  */

void FUN_105fd4b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105fd4cd0;
  puStack_78 = &UNK_11086e698;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = param_4;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_3;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105fd4cd0; end: 105fd4db3;  */

void FUN_105fd4cd0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fd4d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,1);
    return;
  }
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bec4960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,1);
  }
  else {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be16c20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105fd4db4; end: 105fd5273; -[SCSnapProShareDataFetcher _updateUiWithUiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:storySnap:] */

void FUN_105fd4db4(long param_1,undefined8 param_2,long *param_3,undefined ***param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long *plVar12;
  undefined ***pppuVar13;
  long lVar14;
  long *plVar15;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_3;
  pppuVar13 = param_4;
  lVar14 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar1 = *(long **)(param_1 + 0x88);
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  if (plVar1 == (long *)0x0) goto LAB_105fd5210;
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  plVar12 = plVar1;
  func_0x00010c2711a0(plVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(plVar12);
  plVar12 = plVar1;
  func_0x00010c0b4680(plVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb0a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(plVar12);
  _objc_retain(plVar1);
  plVar12 = plVar1;
  func_0x00010c078f80();
  func_0x00010c0691a0(plVar1);
  _objc_release(plVar1);
  func_0x00010c2a9180(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x88);
  func_0x00010c080120();
  if ((uVar3 & 1) == 0) {
    plVar12 = (long *)0x4;
    func_0x00010c2a7620(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar4 = param_1;
  func_0x00010be34080();
  if ((int)lVar4 != 0) {
    plVar12 = (long *)0x2;
    func_0x00010c2af680(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_retain(param_6);
  if (param_6 == 0) {
LAB_105fd5124:
    if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e357f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e357f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad540(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1 + 0x68;
      _objc_loadWeakRetained();
      plVar12 = *(long **)(param_1 + 0x10);
      func_0x00010bf77360();
      _objc_release(lVar4);
      _objc_release(ppuVar10);
    }
  }
  else {
    lVar4 = param_6;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_105fd5124;
    lVar14 = param_6;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar14;
    func_0x0001084866e4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    func_0x00010c2ba960(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar14 = param_6;
    func_0x00010c0c6c20();
    if (((lVar14 + 1U < 0x1c) && ((1L << (lVar14 + 1U & 0x3f) & 0xd8de5fdU) != 0)) &&
       (param_4 != (undefined ***)0x0)) {
      (*(code *)param_4[2])(param_4,param_6);
    }
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dc1758;
    lVar5 = param_6;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc1778;
    lVar6 = param_6;
    lStack_88 = lVar5;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ddd938;
    lVar7 = param_6;
    lStack_80 = lVar6;
    func_0x00010c0c6e00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dc1798;
    ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4270;
    lStack_78 = lVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    plVar12 = &lStack_88;
    pppuVar13 = &ppuStack_a8;
    lVar14 = 4;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = ppuVar10;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110dc1718;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(ppuVar10);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (param_5 != 0) {
      ppuVar10 = ppuVar9;
      func_0x00010beec820(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,ppuVar10);
      _objc_release(ppuVar10);
    }
    _objc_release(ppuVar9);
    _objc_release(lVar4);
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    puVar8 = PTR_PTR_1126c6870;
    func_0x00010c25b100();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)param_3[2])(param_3,puVar11);
    _objc_release(puVar11);
  }
  else {
    puVar8 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)param_3[2])(param_3,puVar8);
  }
  _objc_release(puVar8);
  _objc_release(param_6);
  _objc_release(puVar2);
LAB_105fd5210:
  _objc_release(plVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(plVar12);
  _objc_retain(pppuVar13);
  _objc_retain(lVar14);
  plVar1 = plVar12;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  if (plVar1 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0ef8;
    _objc_alloc(PTR_PTR_1126b0ef8);
    plVar15 = plVar12;
    func_0x00010c135700(plVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ef40(puVar2);
    _objc_release(plVar15);
    plVar15 = plVar1;
    func_0x000108482f84(plVar1,puVar2,0,0,0,0,lVar14,0,0,0,param_3[7],param_3[0xf]);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(plVar1);
  _objc_release(lVar14);
  _objc_release(pppuVar13);
  _objc_release(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar15);
  return;
}



/* Entry: 105fd5274; end: 105fd53b7; -[SCSnapProShareDataFetcher _storyFromStoryLookupResponse:responseTimestamp:snapchatterByUserId:] */

void FUN_105fd5274(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b0ef8;
    _objc_alloc(PTR_PTR_1126b0ef8);
    lVar3 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ef40(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x000108482f84(lVar1,puVar2,0,0,0,0,param_5,0,0,0,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fd53b8; end: 105fd54ff; -[SCSnapProShareDataFetcher _storyFromBatchStoryLookupResponse:responseTimestamp:snapchatterByUserId:] */

void FUN_105fd53b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010846e4c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b0ef8;
    _objc_alloc(PTR_PTR_1126b0ef8);
    lVar3 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ef40(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x000108482f84(lVar1,puVar2,0,0,0,0,param_5,0,0,0,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fd5500; end: 105fd58fb; -[SCSnapProShareDataFetcher _findSnapInStory:completion:] */

ulong FUN_105fd5500(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 200);
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_105fd58fc;
  uStack_98 = 0x105fd590c;
  uStack_90 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_105fd58fc;
  uStack_c8 = 0x105fd590c;
  uStack_c0 = 0;
  uVar7 = param_3;
  puStack_e0 = &uStack_e8;
  puStack_b0 = &uStack_b8;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105fd5914;
  puStack_108 = &UNK_110905750;
  lStack_100 = param_1;
  puStack_f8 = &uStack_b8;
  puStack_f0 = &uStack_e8;
  func_0x00010c0bf680();
  _objc_release(uVar7);
  lVar9 = puStack_e0[5];
  if (lVar9 == 0) {
    _os_unfair_lock_unlock(param_1 + 200);
    (**(code **)(param_4 + 0x10))(param_4,0,1);
  }
  else {
    func_0x00010c080120(*(undefined8 *)(param_1 + 0x88));
    puVar2 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c6d80;
    func_0x00010bf81c20(PTR_PTR_1126c6d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6400();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c6d88;
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11abc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba3c0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a480(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_retain(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar5;
    _objc_release(uVar6);
    uVar8 = puStack_e0[5];
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    _objc_release(uVar6);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,puStack_e0[5],1);
    }
    _os_unfair_lock_unlock(param_1 + 200);
    _objc_initWeak(auStack_128,param_1);
    puStack_150 = puVar1;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_105fd5aa4;
    puStack_138 = &UNK_1108434b0;
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x0001000d76cc("APPSTORE",&puStack_150);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar7 = (ulong)(lVar9 != 0);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(uVar7 + 0x20);
  _objc_destroyWeak(auStack_128);
  __Block_object_dispose(&uStack_e8,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return param_3;
}



/* Entry: 105fd58fc; end: 105fd5913;  */

void FUN_105fd58fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fd5914; end: 105fd5aa3;  */

void FUN_105fd5914(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = param_2;
  _objc_release(uVar2);
  lVar3 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
LAB_105fd5a58:
      _objc_release(lVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      param_2 = param_2 + 0x20;
      _objc_loadWeakRetained();
      if (param_2 != 0) {
        lVar6 = param_2 + 0xd8;
        _objc_loadWeakRetained(lVar6);
        func_0x00010bf49700();
        _objc_release(lVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar2 = uVar7;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        _objc_retain(uVar7);
        uVar2 = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        _objc_release(uVar2);
        func_0x00010be77720(*(undefined8 *)(param_1 + 0x20));
        goto LAB_105fd5a58;
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105fd5aa4; end: 105fd5ae7;  */

void FUN_105fd5aa4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf49700();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd5ae8; end: 105fd5bb7; -[SCSnapProShareDataFetcher _prefetchStoryMedia:] */

void FUN_105fd5ae8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf9c800(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x000107d03060(param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11d620();
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105fd5bb8; end: 105fd5bbb;  */

void FUN_105fd5bb8(void)

{
  return;
}



/* Entry: 105fd5bbc; end: 105fd5dcf; -[SCSnapProShareDataFetcher fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105fd5bbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 200);
  lVar1 = param_3;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = lVar1;
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 200);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0x20), _objc_release(), lVar1 != 0)) {
      func_0x00010bee2c60(param_1);
      goto LAB_105fd5d7c;
    }
  }
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100(PTR_PTR_1126c6870);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfd3260(uVar4);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_105fd5d7c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd5dd0; end: 105fd5e27;  */

void FUN_105fd5dd0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4d00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd5e28; end: 105fd5e2f; -[SCSnapProShareDataFetcher shouldOverrideMediaSize] */

undefined1 FUN_105fd5e28(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 105fd5e30; end: 105fd5e43; -[SCSnapProShareDataFetcher overrideMediaSize] */

undefined1  [16] FUN_105fd5e30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4064000000000000;
  auVar1._0_8_ = 0x4056800000000000;
  return auVar1;
}



/* Entry: 105fd5e44; end: 105fd5e5b; -[SCSnapProShareDataFetcher storySharePlaybackPresenterDelegate] */

void FUN_105fd5e44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd5e5c; end: 105fd5e67; -[SCSnapProShareDataFetcher setStorySharePlaybackPresenterDelegate:] */

void FUN_105fd5e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 105fd5e68; end: 105fd5e7f; -[SCSnapProShareDataFetcher storyShareDataListener] */

void FUN_105fd5e68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd5e80; end: 105fd5e8b; -[SCSnapProShareDataFetcher setStoryShareDataListener:] */

void FUN_105fd5e80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 105fd5e8c; end: 105fd5fb7; -[SCSnapProShareDataFetcher .cxx_destruct] */

void FUN_105fd5e8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 105fd5fb8; end: 105fd6633; -[SCSnapProSharePlaybackProvider initWithSnapProId:shareDataFetcher:userSession:navigationServices:contextOperaPluginProvider:circumstanceEngine:discoverOperaPluginCreator:composerRenderedPlugin:safetyReportScopeExposer:operaPresenterDelegate:viewModelGenerator:autoAdvancePlaybackDataProvider:storiesReadReceiptCoordinator:discoverDataFetcher:storiesConfigProvider:notificationOSSettingsRetriever:composerStoryAutoAdvanceHandlerFactory:snapchattersSynchronousDataFetcher:musicContentRestrictionServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:discoverFeedFriendStoriesDataCoordinator:optInDataProvider:discoverFeedDataMutator:storiesUsageLogger:imageDownloader:grapheneRegistry:snapchatterObservableRepository:storiesCachedSummaryInfoProvider:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:isGroup:message:] */

undefined8 *
FUN_105fd5fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36)

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
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_36);
  puStack_70 = PTR_PTR_1126eed20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_10);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    func_0x00010c222640(puVar1[10]);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x24) = param_34;
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    func_0x00010be114e0(puVar1);
  }
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_32);
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



/* Entry: 105fd6634; end: 105fd6687; -[SCSnapProSharePlaybackProvider playlistPlugins] */

void FUN_105fd6634(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c064400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101700(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fd6688; end: 105fd688f; -[SCSnapProSharePlaybackProvider _storyLoggingPluginWithOverriddenFields] */

void FUN_105fd6688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f41c18;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4288;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c42a0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f42758;
  puVar1 = *(undefined **)(param_1 + 0x128);
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f42778;
  puStack_70 = puVar6;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    puVar2 = *(undefined **)(param_1 + 0x128);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f42798;
  puVar3 = *(undefined **)(param_1 + 0x128);
  puStack_68 = puVar2;
  FUN_105fd6890();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_a8,5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar1);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf81f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = puVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    _objc_release(puVar6);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar1;
      func_0x00010c272380(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fd6890; end: 105fd6943;  */

void FUN_105fd6890(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c272380(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fd6944; end: 105fd6993; -[SCSnapProSharePlaybackProvider operaLaunchingCandidates] */

void FUN_105fd6944(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x130);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bde6d80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    *(long *)(param_1 + 0x130) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x130);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105fd6994; end: 105fd6ae7; -[SCSnapProSharePlaybackProvider firstGroupViewModel] */

void FUN_105fd6994(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    unaff_x20 = *(ulong *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010c0fed80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4d28;
    _objc_opt_class(PTR_PTR_1126b4d28);
    uVar6 = unaff_x21;
    _objc_opt_isKindOfClass(unaff_x21,puVar2);
    uVar4 = unaff_x21;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    if (uVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_1;
      func_0x00010be44440();
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_50 = lVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066720(uVar5);
        _objc_release(puVar2);
      }
      _objc_retain(unaff_x21);
      uVar6 = unaff_x21;
    }
    _objc_release(uVar4);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_105fd6ae8;
    uVar4 = *(ulong *)(lVar3 + 8);
    uStack_80 = uVar6;
    uStack_78 = unaff_x21;
    uStack_70 = unaff_x20;
    lStack_68 = lVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_105fdbcf4(uVar4,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x20),
                  *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x28),
                  *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x60),
                  *(undefined8 *)(lVar3 + 0x78),*(undefined8 *)(lVar3 + 0x98),
                  *(undefined8 *)(lVar3 + 0xa0),*(undefined8 *)(lVar3 + 0x88),
                  *(undefined8 *)(lVar3 + 0x90),*(undefined8 *)(lVar3 + 0xc0),
                  *(undefined8 *)(lVar3 + 200),*(undefined8 *)(lVar3 + 0xd0),
                  *(undefined8 *)(lVar3 + 0xd8),*(undefined8 *)(lVar3 + 0xe0),
                  *(undefined8 *)(lVar3 + 0xe8),*(undefined8 *)(lVar3 + 0xf0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec4b60();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x105fd6bc8;
    puStack_90 = &UNK_1109057d0;
    uVar6 = uVar4;
    lStack_88 = lVar3;
    func_0x000100504554(uVar4,&puStack_a8);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105fd6ae8; end: 105fd6c2f; -[SCSnapProSharePlaybackProvider playlistPluginsFromPlaylistFetcher] */

void FUN_105fd6ae8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105fdbcf4(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x98),
                *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x88),
                *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xc0),
                *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec4b60();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105fd6bc8;
  puStack_40 = &UNK_1109057d0;
  uVar2 = uVar1;
  lStack_38 = param_1;
  func_0x000100504554(uVar1,&puStack_58);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fd6c30; end: 105fd70cf; -[SCSnapProSharePlaybackProvider playlistPluginsWithInitialClientId:] */

void FUN_105fd6c30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar11 = 0;
  }
  else {
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x2020000000;
    uStack_f8 = 5;
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x2020000000;
    uStack_118 = 7;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf680();
    _objc_release(lVar1);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f41c18;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4288;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c42a0;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110ea1ad8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110ea1af8;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_a8 = puVar2;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f42758;
    puVar4 = *(undefined **)(param_1 + 0x128);
    puStack_a0 = puVar3;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f42778;
    puStack_98 = puVar5;
    if (*(char *)(param_1 + 0x120) == '\x01') {
      puVar6 = *(undefined **)(param_1 + 0x128);
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110f42798;
    puVar7 = *(undefined **)(param_1 + 0x128);
    puStack_90 = puVar6;
    FUN_105fd6890();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c242740();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef0c0();
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = uVar11;
    _objc_release(uVar13);
    func_0x00010be44440();
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010bfb7ba0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(puVar9);
    __Block_object_dispose(&uStack_130,8);
    __Block_object_dispose(&uStack_110,8);
  }
  _objc_release();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_130,8);
  uVar10 = 8;
  __Block_object_dispose(&uStack_110);
  __Unwind_Resume();
  _objc_retain(uVar10);
  uVar11 = uVar10;
  func_0x00010c078f60();
  if ((int)uVar11 == 0) {
    uVar11 = uVar10;
    func_0x00010c07a6a0();
    if ((int)uVar11 == 0) goto LAB_105fd712c;
    uVar12 = 0x10;
  }
  else {
    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 4;
    uVar12 = 0xf;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = uVar12;
LAB_105fd712c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 105fd70d0; end: 105fd713b;  */

void FUN_105fd70d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c078f60();
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010c07a6a0();
    if ((int)uVar1 == 0) goto LAB_105fd712c;
    uVar2 = 0x10;
  }
  else {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
    uVar2 = 0xf;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
LAB_105fd712c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd713c; end: 105fd71a7; -[SCSnapProSharePlaybackProvider operaSessionContextWithIntentDate:] */

void FUN_105fd713c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fd71a8; end: 105fd71e7; -[SCSnapProSharePlaybackProvider parentViewController] */

void FUN_105fd71a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fd71e8; end: 105fd71ff; -[SCSnapProSharePlaybackProvider operaPresenterDelegate] */

void FUN_105fd71e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd7200; end: 105fd73e7; -[SCSnapProSharePlaybackProvider upNextConfig] */

void FUN_105fd7200(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  uVar1 = *(ulong *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf80be0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c0309a0();
      lVar4 = param_1;
      func_0x00010bf695c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x000100504554();
      func_0x00010befa160(puVar6);
      _objc_release(lVar7);
      puVar10 = PTR_PTR_1126c6948;
      _objc_alloc(PTR_PTR_1126c6948);
      puVar8 = puVar6;
      func_0x00010bf51e00(puVar6);
      func_0x00010bf695c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf454e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0332c0(puVar10);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(param_1);
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(puVar6);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105fd73e8; end: 105fd742f;  */

void FUN_105fd73e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fd7430; end: 105fd7493; -[SCSnapProSharePlaybackProvider contentProductPlaybackConfig] */

void FUN_105fd7430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c242700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bde7f80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd7494; end: 105fd74f7; -[SCSnapProSharePlaybackProvider contentProductPlaybackConfigStoryRing] */

void FUN_105fd7494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c242720();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bde7f80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd74f8; end: 105fd78af; -[SCSnapProSharePlaybackProvider _contentProductPlaybackConfig] */

void FUN_105fd74f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 5;
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = 7;
    lVar2 = lVar1;
    func_0x00010c259560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf680();
    _objc_release(lVar2);
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f41c18;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4288;
    ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c42a0;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110ea1ad8;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110ea1af8;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_98 = puVar13;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110f42758;
    puVar4 = *(undefined **)(param_1 + 0x128);
    puStack_90 = puVar3;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110f42778;
    puStack_88 = puVar5;
    if (*(char *)(param_1 + 0x120) == '\x01') {
      puVar6 = *(undefined **)(param_1 + 0x128);
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f42798;
    puVar7 = *(undefined **)(param_1 + 0x128);
    puStack_80 = puVar6;
    FUN_105fd6890();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c6950;
    _objc_alloc();
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c242740(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c064400(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dd60();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    __Block_object_dispose(&uStack_120,8);
    __Block_object_dispose(&uStack_100,8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  uVar11 = 8;
  __Block_object_dispose(&uStack_100);
  __Unwind_Resume();
  _objc_retain(uVar11);
  uVar10 = uVar11;
  func_0x00010c078f60();
  if ((int)uVar10 == 0) {
    uVar10 = uVar11;
    func_0x00010c07a6a0();
    if ((int)uVar10 == 0) goto LAB_105fd790c;
    uVar12 = 0x10;
  }
  else {
    *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 8) + 0x18) = 4;
    uVar12 = 0xf;
  }
  *(undefined4 *)(*(long *)(*(long *)(lVar1 + 0x28) + 8) + 0x18) = uVar12;
LAB_105fd790c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 105fd78b0; end: 105fd791b;  */

void FUN_105fd78b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c078f60();
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010c07a6a0();
    if ((int)uVar1 == 0) goto LAB_105fd790c;
    uVar2 = 0x10;
  }
  else {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
    uVar2 = 0xf;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
LAB_105fd790c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd791c; end: 105fd79d3; -[SCSnapProSharePlaybackProvider _fetchFriendStoriesForPlaylist] */

void FUN_105fd791c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9a40();
  _objc_release(uVar1);
  return;
}



/* Entry: 105fd79d4; end: 105fd79ef;  */

uint FUN_105fd79d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07fc80(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105fd79f0; end: 105fd7b37; -[SCSnapProSharePlaybackProvider _isStoryFriendOrFoF] */

long FUN_105fd79f0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c242740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x100);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  lVar12 = 0;
  if (lVar2 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar10);
        }
        uVar3 = *(ulong *)(lVar12 * 8);
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          lVar12 = 1;
          goto LAB_105fd7aec;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar12 = 0;
  }
LAB_105fd7aec:
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return lVar12;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(lVar1 + 0x108);
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar1 + 0x58);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = puVar11;
    func_0x000107d00a08(puVar11,*(undefined8 *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x68),
                        *(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000107af933c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x108);
    *(undefined **)(lVar1 + 0x108) = puVar6;
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(lVar12);
    lVar12 = *(long *)(lVar1 + 0x108);
  }
  lVar2 = lVar12;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (*(long *)(lVar2 + 0x130) == 0) {
      lVar12 = lVar2;
      func_0x00010bde6d80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(lVar2 + 0x130);
      *(long *)(lVar2 + 0x130) = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar8);
      return lVar8;
    }
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return lVar12;
}


