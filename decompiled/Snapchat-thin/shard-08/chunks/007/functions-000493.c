/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10654742c; end: 106547483; -[SCChatViewControllerV3 bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654742c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a238;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106547484; end: 106547597; -[SCChatViewControllerV3 _presentLockedConversationAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547484(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11274a158;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11274a15c);
      lVar2 = (long)_DAT_11274a1ec;
      uVar4 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf60a00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bfce400(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22e40(uVar6,param_2,uVar4,uVar5,param_1,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,uVar6);
      _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 106547598; end: 10654767f; -[SCChatViewControllerV3 _presentMerlinOnboardingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547598(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be41ea0();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11274a164);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06fda0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010be7c820(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 106547680; end: 1065476b7;  */

void FUN_106547680(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be027e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065476b8; end: 10654772f; -[SCChatViewControllerV3 _presentMerlinGroupOnboardingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065476b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010be41e80();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11274a164);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06fdc0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__presentMerlinOnboardingType_com_11257cba8,7,0);
      return;
    }
  }
  return;
}



/* Entry: 106547730; end: 1065477f3; -[SCChatViewControllerV3 _presentMerlinMentionOnboardingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547730(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a1ec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bfd90e0();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c074920();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + lVar4);
      func_0x00010c122e00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    uVar3 = *(ulong *)(param_1 + _DAT_11274a164);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c06fe00();
    _objc_release(uVar3);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__presentMerlinOnboardingType_com_11257cba8,2,0);
      return;
    }
  }
  return;
}



/* Entry: 1065477f4; end: 1065479b7; -[SCChatViewControllerV3 _presentMerlinOnboardingType:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065477f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11274a160;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) && (*(char *)(param_1 + _DAT_11274a34c) == '\x01')) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    if (param_4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      puVar3 = puVar4;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1065479b8;
      puStack_70 = &UNK_110881a90;
      lVar1 = param_4;
      _objc_retain(param_4);
      lStack_68 = param_4;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar3,param_2,&puStack_88,lVar1);
      _objc_release(lVar1);
      _objc_release(puVar3);
      _objc_release(lStack_68);
    }
    puVar3 = PTR_PTR_1126b28c0;
    _objc_alloc(PTR_PTR_1126b28c0);
    func_0x00010c031aa0();
    *(undefined1 *)(param_1 + _DAT_11274a358) = 1;
    lVar1 = param_1;
    func_0x00010bf368c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf801e0();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1065479b8; end: 1065479ef;  */

void FUN_1065479b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001065479ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 1065479f0; end: 106547a5b; -[SCChatViewControllerV3 _isMerlinOneOnOne] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065479f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a1ec;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c074920();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c122e00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106547a5c; end: 106547cab; -[SCChatViewControllerV3 _isMerlinGroupConversationWithMerlinParticipant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106547a5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11274a1ec;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c074920();
  if ((int)lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      lVar4 = lVar1;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar9 = *plStack_1a0;
        do {
          lVar10 = 0;
          do {
            if (*plStack_1a0 != lVar9) {
              _objc_enumerationMutation(lVar4);
            }
            uVar3 = *(ulong *)(lStack_1a8 + lVar10 * 8);
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((uVar5 & 1) != 0) {
              uVar7 = 1;
              goto LAB_106547c5c;
            }
            lVar10 = lVar10 + 1;
          } while (lVar2 != lVar10);
          lVar2 = lVar4;
          func_0x00010bf52a60(lVar4,param_2,&uStack_1b0,auStack_f0,0x10);
        } while (lVar2 != 0);
      }
      _objc_release(lVar4);
    }
    lVar4 = *(long *)(param_1 + lVar8);
    func_0x00010bf66040();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lVar8 = lVar4;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_1e0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1e0 != lVar9) {
            _objc_enumerationMutation(lVar8);
          }
          uVar5 = *(ulong *)(lStack_1e8 + lVar10 * 8);
          func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e12b58);
          if ((uVar5 & 1) != 0) {
            uVar7 = 1;
            goto LAB_106547c54;
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar8;
        func_0x00010bf52a60(lVar8,param_2,&uStack_1f0,auStack_170,0x10);
      } while (lVar2 != 0);
    }
    uVar7 = 0;
LAB_106547c54:
    _objc_release(lVar8);
LAB_106547c5c:
    _objc_release(lVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar7;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(lVar1 + _DAT_11274a24c);
  func_0x00010c150520(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return uVar6;
}



/* Entry: 106547cac; end: 106547d03; -[SCChatViewControllerV3 settingsScopeWantsDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547cac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a24c);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106547d04; end: 106547d3f; -[SCChatViewControllerV3 settingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547d04(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a24c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c076220();
  if (iVar1 != 0) {
    func_0x00010bf94c20(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be08d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessary_11255fce8);
  return;
}



/* Entry: 106547d40; end: 106547d9b; -[SCChatViewControllerV3 setVerticalScrollEnabled:] */

void FUN_106547d40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106547d9c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 106547d9c; end: 106547db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a2f4),
             PTR_s_setScrollEnabled__11265b8f0,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106547db4; end: 106547fd7; -[SCChatViewControllerV3 presentPlaybackScopeWithConversationId:senderUserId:configuration:transitionConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar8 = (long)_DAT_11274a154;
  lVar7 = *(long *)(param_1 + lVar8);
  _objc_retain(param_6);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar7 = (long)_DAT_11274a1ec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c074920();
  puVar5 = PTR_PTR_1126c2cf0;
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010bf50940(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf2be20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126c2cf0;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c076ee0(uVar2);
    func_0x00010c2448e0(puVar5,param_2,param_4,uVar2,lVar4 != 0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c076ee0(uVar2);
    func_0x00010bfcf620(puVar5,param_2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar7 = (long)_DAT_11274a364;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar6;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a38c);
  *(undefined8 *)(param_1 + _DAT_11274a38c) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126c2d08;
  _objc_alloc(PTR_PTR_1126c2d08);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  lVar7 = param_1;
  func_0x00010c10fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0054e0(puVar6,param_2,param_3,puVar5,param_5,uVar2,param_6,param_1,lVar7);
  _objc_release(param_6);
  _objc_release(lVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar8),param_2,puVar6);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106547fd8; end: 106547ffb; -[SCChatViewControllerV3 playbackScopeWillBeginPresenting:] */

void FUN_106547fd8(undefined8 param_1)

{
  func_0x00010be64660();
                    /* WARNING: Could not recover jumptable at 0x00010be6dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterWillAppear_112579100);
  return;
}



/* Entry: 106547ffc; end: 10654802f; -[SCChatViewControllerV3 playbackScopeDidFinishPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547ffc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a394) = 1;
  func_0x00010bee0a80();
                    /* WARNING: Could not recover jumptable at 0x00010be6dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterDidAppear_1125790d0);
  return;
}



/* Entry: 106548030; end: 106548443; -[SCChatViewControllerV3 playbackScopeWillBeginDismissing:mediaId:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  *(undefined1 *)(param_5 + (long)_DAT_11274a394) = 0;
  func_0x00010bee0a80(param_5);
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_10653ac28;
  uStack_120 = 0x10653ac38;
  uStack_118 = 0;
  uVar14 = 0xc2000000;
  func_0x00010c0bdfa0(*(undefined8 *)(param_5 + (long)_DAT_11274a38c));
  uVar12 = param_7;
  func_0x00010c27a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010c232480();
  _objc_release(uVar12);
  if ((int)uVar4 == 0) {
    uVar4 = param_7;
    func_0x00010c27a700(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar14 = 0;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar5 = uVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    uVar12 = 0;
    if (uVar5 != 0) {
      do {
        uVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(uVar4);
          }
          uVar13 = *(ulong *)(uVar12 * 8);
          _objc_retain(uVar13);
          puVar6 = PTR_PTR_1126cb4b0;
          _objc_opt_class(PTR_PTR_1126cb4b0);
          uVar7 = uVar13;
          _objc_opt_isKindOfClass(uVar13,puVar6);
          uVar1 = uVar13;
          if ((uVar7 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar13);
          if (uVar1 != 0) {
            uVar7 = uVar13;
            func_0x00010c0cb300();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar9 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar6);
            uVar7 = uVar8;
            if ((uVar9 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar8);
            iVar3 = (int)puStack_138[5];
            func_0x00010c071ae0();
            if (iVar3 != 0) {
              uVar12 = uVar13;
              func_0x00010c26e5a0(uVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              _objc_release(uVar13);
              goto LAB_106548308;
            }
            _objc_release(uVar7);
          }
          _objc_release(uVar1);
          uVar12 = uVar12 + 1;
        } while (uVar5 != uVar12);
        uVar5 = uVar4;
        func_0x00010bf52a60();
      } while (uVar5 != 0);
      uVar12 = 0;
    }
  }
LAB_106548308:
  _objc_release(uVar4);
  func_0x00010c16f460(param_9);
  func_0x00010bf20c00(uVar12);
  uVar10 = param_9;
  func_0x00010c0f3c60(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar14,param_2,param_3,param_4,uVar12);
  func_0x00010c16f4e0(param_9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar12);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_140,8);
    __Unwind_Resume(param_7);
    return;
  }
  return;
}



/* Entry: 106548444; end: 106548447;  */

void FUN_106548444(void)

{
  return;
}



/* Entry: 106548448; end: 10654847f;  */

void FUN_106548448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106548480; end: 106548493; -[SCChatViewControllerV3 playbackScopeDidCancelDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548480(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a394) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bee0a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStatusBarForFullScreenPla_112595c48);
  return;
}



/* Entry: 106548494; end: 1065484a3; -[SCChatViewControllerV3 playbackScopeDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548494(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a394) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee0a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStatusBarForFullScreenPla_112595c48);
  return;
}



/* Entry: 1065484a4; end: 10654853b; -[SCChatViewControllerV3 playbackScopeDidTearDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065484a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010be6dce0();
  *(undefined1 *)(param_1 + _DAT_11274a394) = 0;
  func_0x00010bee0a80(param_1);
  lVar3 = (long)_DAT_11274a154;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a364);
    *(undefined8 *)(param_1 + _DAT_11274a364) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a38c);
    *(undefined8 *)(param_1 + _DAT_11274a38c) = 0;
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10654853c; end: 1065485bb; -[SCChatViewControllerV3 playbackScopeUnableToStartPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654853c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a154;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a364);
    *(undefined8 *)(param_1 + _DAT_11274a364) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a38c);
    *(undefined8 *)(param_1 + _DAT_11274a38c) = 0;
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065485bc; end: 106548607; -[SCChatViewControllerV3 playbackScopeUnableToContinuePresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065485bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a364);
  puVar1 = PTR_PTR_1126c2c50;
  func_0x00010bf82f40(PTR_PTR_1126c2c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106548608; end: 106548853; -[SCChatViewControllerV3 presentPlaybackWithBaseView:configuration:] */

void FUN_106548608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bef0700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10653ac28;
    uStack_70 = 0x10653ac38;
    uStack_68 = 0;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_10653ac28;
    uStack_a0 = 0x10653ac38;
    uStack_98 = 0;
    func_0x00010c0bfea0(param_4);
    puVar2 = PTR_PTR_1126c2d00;
    _objc_alloc(PTR_PTR_1126c2d00);
    func_0x00010bff7220();
    func_0x00010c10d940(param_1);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106548854; end: 10654891b;  */

void FUN_106548854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c2cf8;
  func_0x00010bf37bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654891c; end: 1065489ef;  */

void FUN_10654891c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c2cf8;
  func_0x00010bf37bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065489f0; end: 106548c4b;  */

void FUN_1065489f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c2cf8;
  func_0x00010bf37bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106548c4c; end: 106548cab; -[SCChatViewControllerV3 talkTypingActivitySubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548c4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a3a4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106548cac; end: 106548e5f; -[SCChatViewControllerV3 _initTalkUIIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548cac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11274a3a8;
  if (*(long *)(param_1 + lVar9) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126cb728;
  _objc_opt_new();
  lVar8 = (long)_DAT_11274a398;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar6 = (long)_DAT_11274a3ac;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274a100);
  uVar7 = *(undefined8 *)(param_1 + lVar6);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf364c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c268a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf27dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c10ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c24b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23280(uVar5,param_2,uVar7,uVar4,lVar6,lVar8,lVar2,lVar3 != 0,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = uVar5;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(uVar4);
  func_0x00010c268b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106548e60; end: 106548e97; -[SCChatViewControllerV3 talkChatViewLifeCycleListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548e60(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be3a7a0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a398);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106548e98; end: 106548efb; -[SCChatViewControllerV3 _initPresenceContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548e98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a310;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  func_0x00010be3a740();
  puVar1 = PTR_PTR_1126cb730;
  _objc_alloc();
  func_0x00010c050300();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106548efc; end: 106548f03; -[SCChatViewControllerV3 setActiveTalkSessionForConversationWithId:startingCallWithMedia:] */

void FUN_106548efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setActiveTalkSessionForConversat_112636500,param_3,param_4,0);
  return;
}



/* Entry: 106548f04; end: 10654915b; -[SCChatViewControllerV3 setActiveTalkSessionForConversationWithId:startingCallWithMedia:isHangout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106548f04(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10aca0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf50ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf50ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076ee0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf50ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06ecc0();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar4 = *(ulong *)(param_1 + (long)_DAT_11274a0b0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bf8fac0();
        _objc_release(uVar4);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) != 0) goto LAB_10654913c;
      }
      uVar1 = param_1;
      func_0x00010bf50ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf50940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf2be20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 == 0) {
        uVar1 = param_1;
        func_0x00010c074920();
        puVar5 = PTR_PTR_1126b55b8;
        if ((int)uVar1 == 0) {
          uVar1 = param_1;
          func_0x00010bf50ac0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c122e00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7ef20(puVar5,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(uVar1);
        }
        else {
          func_0x00010bfce840(PTR_PTR_1126b55b8);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010be3a7a0(param_1);
        uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11274a3ac);
        puVar6 = PTR_PTR_1126cb738;
        _objc_alloc(PTR_PTR_1126cb738);
        func_0x00010c005300();
        func_0x00010c0d9840(uVar7,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
    }
  }
LAB_10654913c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654915c; end: 1065491db; -[SCChatViewControllerV3 setupPresenceContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654915c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be3a1e0();
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf36920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beddb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePresenceContainerLayout_112595078);
  return;
}



/* Entry: 1065491dc; end: 106549243; -[SCChatViewControllerV3 _updatePresenceContainerLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065491dc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106549244;
  puStack_20 = &UNK_1108471b0;
  lStack_18 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + _DAT_11274a310),param_2,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106549244; end: 106549383;  */

void FUN_106549244(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf36920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106549384; end: 106549443; -[SCChatViewControllerV3 talkUIScope:didUpdateRemoteUsersPresentOnWeb:remoteUsersPresentOnMobile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106549384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf529e0(param_4);
  func_0x00010bf529e0(param_5);
  _objc_release(param_5);
  puVar1 = PTR_PTR_1126b6100;
  _objc_alloc();
  func_0x00010bf529e0(param_4);
  _objc_release(param_4);
  func_0x00010c030580();
  lVar3 = (long)_DAT_11274a3b0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a3b4),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106549444; end: 10654948b; -[SCChatViewControllerV3 talkUIScope:updateScrollLock:] */

void FUN_106549444(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c280da0();
  }
  else {
    func_0x00010c09fde0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654948c; end: 106549693; -[SCChatViewControllerV3 talkUIScope:didTapPresencePillForUserId:username:longPressed:completion:] */

void FUN_10654948c(undefined8 param_1,undefined1 *param_2,long param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == 0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106549694;
    puStack_98 = &UNK_11092a650;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_88);
    _objc_retain(param_7);
    lStack_90 = param_7;
    uStack_80 = param_6;
    func_0x00010c09d7c0(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    unaff_x27 = &puStack_b0;
  }
  _objc_release(param_7);
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
  _objc_retain(param_2);
  lVar3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puVar4 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afca8;
    if (puVar4 == (undefined1 *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dae758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar2);
      _objc_release(ppuVar5);
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    }
    else {
      func_0x00010be01140(lVar3);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106549694; end: 106549763;  */

void FUN_106549694(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126afca8;
    if (lVar3 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dae758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar4);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    else {
      func_0x00010be01140(lVar2);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106549764; end: 106549a17; -[SCChatViewControllerV3 _didTapPresencePillForSnapchatter:longPressed:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106549764(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c06d560();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (((param_4 & 1) == 0) && (uVar1 != 0)) {
      uVar1 = *(ulong *)(param_1 + _DAT_11274a1ec);
      func_0x00010c074920();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010901e928();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 != 0) {
          lVar10 = (long)_DAT_11274a1d4;
          uVar2 = *(ulong *)(param_1 + lVar10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0fa8e0();
          if ((uVar3 & 1) == 0) {
            _objc_release(uVar2);
            _objc_release(uVar1);
          }
          else {
            lVar4 = *(long *)(param_1 + lVar10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar4;
            func_0x00010c0fa8c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar10;
            func_0x00010bf60aa0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c252440();
            _objc_release(lVar5);
            _objc_release(lVar10);
            _objc_release(lVar4);
            _objc_release(uVar2);
            _objc_release(uVar1);
            if (lVar6 == 1) {
              puVar9 = PTR_PTR_1126aead8;
              _objc_alloc(PTR_PTR_1126aead8);
              func_0x00010c038f40();
              puVar7 = PTR_PTR_1126b1da8;
              _objc_alloc(PTR_PTR_1126b1da8);
              func_0x00010c04abe0();
              uVar8 = *(undefined8 *)(param_1 + _DAT_11274a1e0);
              func_0x00010bf23e60(uVar8,param_2,puVar9,puVar7,param_1,4,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11274a1dc),param_2,uVar8);
              (**(code **)(param_5 + 0x10))(param_5);
              _objc_release(uVar8);
              _objc_release(puVar7);
              _objc_release(puVar9);
              goto LAB_1065499f0;
            }
          }
        }
      }
      func_0x00010c24d120(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b01c0;
      uVar1 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c294260(puVar9,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183aa0(param_1,param_2,puVar9,0,0x31,0xffffffffffffffff);
      _objc_release(puVar9);
      _objc_release(uVar1);
      _objc_release(param_1);
      (**(code **)(param_5 + 0x10))(param_5);
      goto LAB_1065499f0;
    }
  }
  func_0x00010be7db80(param_1,param_2,param_3,0x2e879d01,0x28,param_5);
LAB_1065499f0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106549a18; end: 106549a47; -[SCChatViewControllerV3 remoteUsersPresenceInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106549a18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a3b0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106549a48; end: 106549a77; -[SCChatViewControllerV3 tableInsetUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106549a48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a31c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106549a78; end: 106549abb; -[SCChatViewControllerV3 chatInputView] */

void FUN_106549a78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106549abc; end: 106549ad7; -[SCChatViewControllerV3 isHeaderShown] */

bool FUN_106549abc(double param_1)

{
  func_0x00010bddce00();
  return param_1 <= 0.0;
}



/* Entry: 106549ad8; end: 106549bbb; -[SCChatViewControllerV3 _chatHeaderVerticalTranslationUp] */

double FUN_106549ad8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = param_5;
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  _objc_release(uVar1);
  dVar2 = 0.0;
  if (0.0 < param_1) {
    uVar1 = param_5;
    func_0x00010bfdef60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdf520();
    _CGRectGetHeight();
    _objc_release(uVar1);
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar3 = 5.0;
    _objc_release(param_5);
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar3 = param_4 / 5.0 + dVar2 + dVar3;
    if (dVar3 <= 100.0) {
      dVar3 = 100.0;
    }
    if (dVar3 - param_1 <= dVar2) {
      dVar2 = dVar3 - param_1;
    }
    if (dVar3 <= param_1) {
      dVar2 = 0.0;
    }
  }
  return dVar2;
}



/* Entry: 106549bbc; end: 106549bfb; -[SCChatViewControllerV3 _showStatusBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106549bbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c074b80();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274a0a8),
               PTR_s_sc_setStatusBarHidden_DEPRECATED_112631128,0);
    return;
  }
  return;
}



/* Entry: 106549bfc; end: 106549e63; -[SCChatViewControllerV3 _initInputControllerV3] */

void FUN_106549bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef76e0(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106549e64; end: 10654a0d7; -[SCChatViewControllerV3 _createDisabledInputConversationFooterView] */

void FUN_106549e64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cb740;
  _objc_opt_new();
  func_0x00010c219b60();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be027f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10654a0d8; end: 10654a0df; -[SCChatViewControllerV3 rightButtonPressed] */

void FUN_10654a0d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be027f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissChatWithExitEvent__11255e398,8);
  return;
}



/* Entry: 10654a0e0; end: 10654a1e7; -[SCChatViewControllerV3 _dismissChatWithExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a0e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010c24d120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf84560();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = (long)_DAT_11274a26c;
  func_0x00010c17b580(*(undefined8 *)(param_1 + lVar3),param_2,
                      *(undefined8 *)(param_1 + (long)_DAT_11274a188));
  func_0x00010c17b5a0(*(undefined8 *)(param_1 + lVar3),param_2,
                      *(undefined8 *)(param_1 + (long)_DAT_11274a18c));
  func_0x00010c17b2e0(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  uVar1 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf15f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf835c0();
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + (long)_DAT_11274a318) = 2;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a76c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654a1e8; end: 10654a347; -[SCChatViewControllerV3 _showBlurOverlayOnView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  lVar4 = (long)_DAT_11274a3b8;
  if (*(long *)(param_1 + lVar4) == 0) {
    _objc_retain(param_3);
    func_0x00010bf8cf60(puVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010bf20c00(param_3);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbb60(param_3,param_2,*(undefined8 *)(param_1 + lVar4));
    _objc_release(param_3);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10654a348;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10654a360;
    puStack_78 = &UNK_110841f20;
    lStack_70 = param_1;
    lStack_48 = param_1;
    func_0x00010bf03420(0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68,&puStack_90);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10654a348; end: 10654a373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a3b8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10654a374; end: 10654a3af; -[SCChatViewControllerV3 showBlurOverlay] */

void FUN_10654a374(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb8140(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654a3b0; end: 10654a3f3; -[SCChatViewControllerV3 hideBlurOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a3b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3b8;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIgnoreScreenCaptures__112586b80,0);
  return;
}



/* Entry: 10654a3f4; end: 10654a453; -[SCChatViewControllerV3 _setIgnoreScreenCaptures:] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_10654a3f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  uVar2 = param_1;
  func_0x00010bfe6820();
  func_0x00010c1a9da0(param_1);
  func_0x00010c1a9d80(param_1);
  if ((param_3 != 0) || ((int)uVar2 == 0)) {
    return;
  }
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14fb00();
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      ppuVar5 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto SUB_1000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar5 = &PTR___NSConcreteGlobalBlock_110d5b250;
SUB_1000d76cc:
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar5);
  func_0x000107c4a02c();
  if ((int)puVar3 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10654a454; end: 10654a557; -[SCChatViewControllerV3 blueOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a454(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = (long)_DAT_11274a30c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126cb748;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    dVar6 = 0.0;
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
    lVar4 = param_1;
    func_0x00010c14c8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bef60();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(dVar6 + 1.0);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10654a558; end: 10654a5bf; -[SCChatViewControllerV3 setBlueOverlayAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a558(double param_1,long param_2)

{
  if ((param_1 == 0.0) && (*(long *)(param_2 + _DAT_11274a30c) == 0)) {
    return;
  }
  func_0x00010bf1e560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10654a5c0; end: 10654a5ef; -[SCChatViewControllerV3 contextOperaPluginWillPresent:presentationContext:] */

void FUN_10654a5c0(undefined8 param_1)

{
  func_0x00010c268880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654a5f0; end: 10654a64f; -[SCChatViewControllerV3 contextOperaPluginWillDismiss:] */

void FUN_10654a5f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162b60(param_1,param_2,uVar1,0);
  _objc_release(uVar1);
  func_0x00010c268880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654a650; end: 10654a67f; -[SCChatViewControllerV3 actionSheetWillAppear] */

void FUN_10654a650(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654a680; end: 10654a683; -[SCChatViewControllerV3 actionSheetWillDisappear] */

void FUN_10654a680(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessary_11255fce8);
  return;
}



/* Entry: 10654a684; end: 10654a71f; -[SCChatViewControllerV3 resetTransitionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a684(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf520();
  func_0x00010bc851d4();
  func_0x00010c1a7820(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a76c0(0x3ff0000000000000);
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + _DAT_11274a318) = 0;
  return;
}



/* Entry: 10654a720; end: 10654a75f; -[SCChatViewControllerV3 setHeaderButtonsAlpha:] */

void FUN_10654a720(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10654a760; end: 10654a76f; -[SCChatViewControllerV3 setChatEntryEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a26c),PTR_s_setChatEntryEvent__11263c6b0);
  return;
}



/* Entry: 10654a770; end: 10654a7d3; -[SCChatViewControllerV3 unifiedProfileWillAppear] */

void FUN_10654a770(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beeb120();
  uVar1 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80200();
  _objc_release(uVar1);
  func_0x00010c0f3c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654a7d4; end: 10654a843; -[SCChatViewControllerV3 unifiedProfileDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654a7d4(long param_1)

{
  long lVar1;
  
  func_0x00010c116fe0(*(undefined8 *)(param_1 + _DAT_11274a17c));
  func_0x00010be83e40(param_1);
  lVar1 = param_1;
  func_0x00010c0f3c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280da0();
  _objc_release(lVar1);
  func_0x00010c1a7700(0x3ff0000000000000,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be08c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardAsynchronously_11255fcc0);
  return;
}



/* Entry: 10654a844; end: 10654a8cb; -[SCChatViewControllerV3 presentingVC] */

void FUN_10654a844(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_retain(param_1);
    }
    else {
      func_0x00010c0f3ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10654a8cc; end: 10654a963; -[SCChatViewControllerV3 switchChatTo:userId:deepLinkURL:] */

void FUN_10654a8cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  if (param_3 != 0) {
    _objc_retain(param_5);
    func_0x00010c294260(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183a80();
    _objc_release(param_5);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10654a964; end: 10654a9db; -[SCChatViewControllerV3 switchChatTo:deepLinkURL:] */

void FUN_10654a964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654a9dc; end: 10654aa6b; -[SCChatViewControllerV3 _presentProfileForSnapchatter:addSource:page:completion:] */

void FUN_10654a9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801e0();
  _objc_release(uVar1);
  func_0x00010c10ec20(param_1,param_2,param_3,param_4,param_6,param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654aa6c; end: 10654aaaf; -[SCChatViewControllerV3 chatIsFullyVisible] */

undefined8 FUN_10654aa6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0741e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10654aab0; end: 10654aaf3; -[SCChatViewControllerV3 chatIsPartiallyVisible] */

undefined8 FUN_10654aab0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0799e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10654aaf4; end: 10654aaf7; -[SCChatViewControllerV3 _handleSourceNotificationIfNeeded] */

void FUN_10654aaf4(void)

{
  return;
}



/* Entry: 10654aaf8; end: 10654ab5b; -[SCChatViewControllerV3 setCustomStatusBarStyleForViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654aaf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11274a080) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11274a080) = param_3;
  func_0x00010bf61c60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654ab5c; end: 10654abb3; -[SCChatViewControllerV3 lockedConversationAlertScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654ab5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a158;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10654abb4; end: 10654abd7; -[SCChatViewControllerV3 merlinOnboardingNeedsDismiss:] */

void FUN_10654abb4(undefined8 param_1)

{
  func_0x00010be02da0();
                    /* WARNING: Could not recover jumptable at 0x00010be08c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardAsynchronously_11255fcc0);
  return;
}



/* Entry: 10654abd8; end: 10654ac3b; -[SCChatViewControllerV3 _dismissMerlinOnboardingScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654abd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a160;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11274a358) = 0;
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10654ac3c; end: 10654ac3f; -[SCChatViewControllerV3 merlinBioPageDidDismiss] */

void FUN_10654ac3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissMerlinBioPage_11255e500);
  return;
}



/* Entry: 10654ac40; end: 10654ace3; -[SCChatViewControllerV3 _dismissMerlinBioPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654ac40(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a370;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == uVar1) {
      uVar3 = uVar1;
      func_0x00010c06d1a0();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        func_0x00010bf84b00(param_1);
      }
    }
    else {
      _objc_release(uVar2);
    }
  }
  _objc_storeWeak(param_1 + lVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654ace4; end: 10654ae4f; -[SCChatViewControllerV3 _initChatWallpapers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654ace4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1b0);
  FUN_1064fa8a4(uVar1,*(undefined8 *)(param_1 + _DAT_11274a0f0),
                *(undefined8 *)(param_1 + _DAT_11274a1ac));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10654ae50; end: 10654ae97;  */

void FUN_10654ae50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed53e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654ae98; end: 10654aff7; -[SCChatViewControllerV3 _updateViewWithWallpaper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654ae98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_3 == 0) {
    lVar4 = (long)_DAT_11274a2ec;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe6360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe6360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    func_0x00010be09f80(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a2ec);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10654aff8;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    _objc_retain(param_3);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10654b070;
    puStack_90 = &UNK_110841f20;
    lStack_88 = param_1;
    lStack_58 = param_3;
    func_0x00010c27ac60(0x3fc3333333333333,puVar2,param_2,uVar3,0x500000,&puStack_80,&puStack_a8);
    _objc_release(uVar3);
    _objc_release(lStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10654aff8; end: 10654b06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654aff8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a2ec;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654b070; end: 10654b097;  */

void FUN_10654b070(long param_1)

{
  func_0x00010be09f80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be5a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logWallpaperLoadLatency_1125743c0);
  return;
}



/* Entry: 10654b098; end: 10654b0d7; -[SCChatViewControllerV3 _logWallpaperLoadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654b098(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a120);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654b0d8; end: 10654b3ab; -[SCChatViewControllerV3 _updateChatWithWallpaper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654b0d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11274a1ec);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  if (uVar1 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_10654b1c0:
    uVar2 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar6 = false;
      uVar5 = *(undefined8 *)(param_1 + _DAT_11274a37c);
    }
    else {
      uVar3 = uVar2;
      _UIAccessibilityIsReduceTransparencyEnabled();
      _objc_release(uVar2);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11274a37c);
      if ((uVar3 & 1) == 0) {
        bVar6 = lRam00000001138466f0 < 3;
      }
      else {
        bVar6 = false;
      }
    }
    func_0x00010c283de0(uVar5,param_2,bVar6);
    uVar2 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a18c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bee3e80(param_1,param_2,uVar3);
    uVar2 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c2a1840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0c61c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    _objc_release(uVar2);
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11274a1ac);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0ec5e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c2a1840();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0c61c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a39a0(uVar5,param_2,uVar4,2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(uVar3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar4 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) != 0) goto LAB_10654b1c0;
    }
    uVar2 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010bee3e80(param_1,param_2,0);
    func_0x00010c283de0(*(undefined8 *)(param_1 + _DAT_11274a37c),param_2,
                        uVar2 != 0 && lRam00000001138466f0 < 3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654b3ac; end: 10654b42b; -[SCChatViewControllerV3 _pulseWallpaperBackgroundWithExistingConversationViewModel:] */

void FUN_10654b3ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010bfd5480();
  if ((param_3 & 1) == 0) {
    _dispatch_time(0,500000000);
    func_0x00010058c530();
  }
  return;
}



/* Entry: 10654b42c; end: 10654b433;  */

void FUN_10654b42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__pulseWallpaperBackground_11257ebc0);
  return;
}



/* Entry: 10654b434; end: 10654b61b; -[SCChatViewControllerV3 _pulseWallpaperBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654b434(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274a1ec);
  func_0x00010bfd5480();
  if (iVar1 != 0) {
    lVar8 = (long)_DAT_11274a2ec;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar7 == 0) {
      lVar7 = (long)_DAT_11274a2f0;
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24dbc0();
      _objc_release(uVar3);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1c);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar3);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                          &PTR____CFConstantStringClassReference_110dbf678);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40(0x3ff0000000000000);
      func_0x00010c1eabe0(0x7f800000,puVar4);
      func_0x00010c16d4c0(puVar4,param_2,1);
      func_0x00010c1a1180(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184b30);
      func_0x00010c216920(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184b40);
      puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
      func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                          *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar3);
      _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 10654b61c; end: 10654b6f3; -[SCChatViewControllerV3 _endWallpaperBackgroundPulse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654b61c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a2f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11274a2ec;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10654b6f4; end: 10654b8eb; -[SCChatViewControllerV3 _makeChatWallpaperLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654b6f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined *puVar23;
  long lVar24;
  long lVar25;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010c1a8560(puVar1);
  lVar25 = (long)_DAT_11274a2ec;
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    func_0x00010c182220();
    puVar11 = puVar3;
    func_0x00010c267cc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0();
    _objc_release(puVar11);
    func_0x00010c219b60(puVar1);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    func_0x00010c29bf00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar11);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar3);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be7ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10654b8ec; end: 10654bbcb; -[SCChatViewControllerV3 _makeChatWallpaperImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654b8ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  func_0x00010c182220();
  uVar3 = param_1;
  func_0x00010c267cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(param_1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be7ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10654bbcc; end: 10654bbcf; -[SCChatViewControllerV3 _showStreakRestore] */

void FUN_10654bbcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentStreakRestoreDirectFlow_11257d4d8);
  return;
}



/* Entry: 10654bbd0; end: 10654bd1f; -[SCChatViewControllerV3 _presentStreakRestoreDirectFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654bbd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2d28;
  _objc_opt_new(PTR_PTR_1126c2d28);
  func_0x00010c1d8620();
  func_0x00010c1ed260(puVar2,param_2,1);
  lVar7 = (long)_DAT_11274a1ec;
  func_0x00010bece1c0(param_1,param_2,puVar2,*(undefined8 *)(param_1 + lVar7));
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126b3590;
  _objc_alloc(PTR_PTR_1126b3590);
  func_0x00010c04e600();
  puVar5 = PTR_PTR_1126b3598;
  _objc_alloc(PTR_PTR_1126b3598);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf50280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056e20(puVar5,param_2,puVar3,puVar4,uVar6,param_1,1);
  _objc_release(uVar6);
  func_0x00010bf21f80(*(undefined8 *)(param_1 + _DAT_11274a1cc),param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10654bd20; end: 10654be4f; -[SCChatViewControllerV3 _trackStreakRestoreEvent:conversationViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654bd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c122da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf9caa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c25be80();
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bf9caa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar4;
  func_0x00010c270aa0(uVar4);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1844c0(param_3,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c206fa0(param_3,param_2,0x17);
  func_0x00010c20e2c0(param_3,param_2,(long)(int)uVar2);
  func_0x00010c20e300(param_3,param_2,uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a384);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654be50; end: 10654be53; -[SCChatViewControllerV3 streakRestorePurchaseDismissedWithDidRestore:] */

void FUN_10654be50(void)

{
  return;
}



/* Entry: 10654be54; end: 10654bec3; -[SCChatViewControllerV3 updateInputText:select:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654be54(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11274a308;
  func_0x00010c1311e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  func_0x00010bf90900(*(undefined8 *)(param_1 + lVar2));
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c1fb500(*(undefined8 *)(param_1 + lVar2),param_2,0,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


