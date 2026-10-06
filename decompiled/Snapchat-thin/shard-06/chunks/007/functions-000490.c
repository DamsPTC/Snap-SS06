/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d58678; end: 104d58757; -[SCFriendProfileBitmojiSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d58678(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711e7c);
  _objc_storeStrong(param_1 + _DAT_112711e78,0);
  _objc_storeStrong(param_1 + _DAT_112711e68,0);
  _objc_destroyWeak(param_1 + _DAT_112711e6c);
  _objc_storeStrong(param_1 + _DAT_112711e64,0);
  _objc_destroyWeak(param_1 + _DAT_112711e94);
  _objc_destroyWeak(param_1 + _DAT_112711e90);
  _objc_destroyWeak(param_1 + _DAT_112711e98);
  _objc_destroyWeak(param_1 + _DAT_112711e8c);
  _objc_destroyWeak(param_1 + _DAT_112711e88);
  _objc_destroyWeak(param_1 + _DAT_112711e84);
  _objc_destroyWeak(param_1 + _DAT_112711e80);
  _objc_destroyWeak(param_1 + _DAT_112711e74);
  _objc_destroyWeak(param_1 + _DAT_112711e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711e60);
  return;
}



/* Entry: 104d58758; end: 104d58a8b; -[SCFriendUnifiedProfileBitmojiActionHandler initWithBitmojiAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:notificationPool:bitmojiFashionNotificationProvider:profileSessionId:bitmojiOutfitSharingScopeExposer:bitmojiOutfitSharingScopeServices:avatarProvider:flatlandContentServices:profileLensServices:bitmojiOutfitSharingLogger:circumstanceEngine:fashionTrayPresentingServices:bitmojiStyle:] */

undefined8 *
FUN_104d58758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126e4120;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
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
    puVar1[0xf] = param_17;
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



/* Entry: 104d58a8c; end: 104d58f83; -[SCFriendUnifiedProfileBitmojiActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_104d58a8c(long param_1,undefined *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar9 = 1;
      func_0x00010be47800(param_1);
      goto LAB_104d58bb4;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar9 = 1;
      func_0x00010be47800(param_1);
      goto LAB_104d58bb4;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 == 0) {
          lVar9 = 0;
          goto LAB_104d58bb4;
        }
        uVar3 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar6 = uVar3;
        _objc_opt_isKindOfClass(uVar3,param_2);
        uVar2 = uVar3;
        if ((uVar6 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar3);
        func_0x00010be7dc40(param_1);
        _objc_release(uVar2);
      }
      else {
        func_0x00010be47800(param_1);
      }
    }
    else {
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      uVar6 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar10);
      uVar2 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar6 = uVar2;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = PTR_PTR_1126afdc0;
      _objc_opt_class(PTR_PTR_1126afdc0);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,param_2);
      uVar3 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar6);
      uVar6 = uVar3;
      func_0x00010bfb7be0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c08fa60();
      if (uVar4 != 0) {
        uVar4 = uVar3;
        func_0x00010bfb8100();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        _objc_release(uVar4);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (uVar5 == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          FUN_104d5aa20();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010bfb8100();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
        func_0x00010bf1f440();
        if (iVar1 == 0) {
          func_0x00010be48840(param_1);
        }
        else {
          _objc_initWeak(auStack_78,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x70);
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_70 = uVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          param_1 = param_1 + 0x80;
          _objc_loadWeakRetained(param_1);
          param_2 = auStack_78;
          _objc_copyWeak(auStack_80,param_2);
          func_0x00010c10c100(uVar8);
          _objc_release(param_1);
          _objc_release(puVar7);
          _objc_destroyWeak(auStack_80);
          _objc_destroyWeak(auStack_78);
        }
        _objc_release(puVar10);
      }
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010bdeb580(param_1);
  }
  lVar9 = 1;
LAB_104d58bb4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be47800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 104d58f84; end: 104d58fd3;  */

void FUN_104d58f84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d58fd4; end: 104d590b7; -[SCFriendUnifiedProfileBitmojiActionHandler _launchComposerBuilderWithFlowMode:withAvatarType:avatarStateHistoryJson:] */

void FUN_104d58fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d590b8;
  puStack_60 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 104d590b8; end: 104d592b3;  */

void FUN_104d590b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d592b4;
    puStack_70 = &UNK_110849680;
    _objc_copyWeak(auStack_68,param_1 + 0x28);
    _objc_copyWeak(auStack_90,param_1 + 0x28);
    func_0x00010c0311a0(puVar3);
    puVar4 = PTR_PTR_1126afdc8;
    _objc_opt_new(PTR_PTR_1126afdc8);
    func_0x00010c2ae460();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8f40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8f00(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23c40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10));
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104d592b4; end: 104d59327;  */

void FUN_104d592b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d59328; end: 104d594ab; -[SCFriendUnifiedProfileBitmojiActionHandler _createBitmojiWithCamera] */

void FUN_104d59328(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d594ac;
  puStack_68 = &UNK_110849680;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0311a0(puVar2);
  puVar3 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104d594ac; end: 104d5951f;  */

void FUN_104d594ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d59520; end: 104d595ef; -[SCFriendUnifiedProfileBitmojiActionHandler _launchTryOnFriendsOutfitWithFriendAvatarId:] */

void FUN_104d59520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d595f0;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d595f0; end: 104d5976b;  */

void FUN_104d595f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    lVar2 = lVar1 + 0x80;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e4c0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126afdc8;
    _objc_opt_new(PTR_PTR_1126afdc8);
    func_0x00010c2ae460();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126afdd0;
    func_0x00010bfb7c60(PTR_PTR_1126afdd0,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b51c0(puVar5,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23c40(uVar7,param_2,puVar3,puVar6,lVar1,0x6a,*(undefined8 *)(lVar1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10),param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d5976c; end: 104d5994f; -[SCFriendUnifiedProfileBitmojiActionHandler _fetchCombinedSceneImage:withBgIdResult:petImageUrl:friendPetImageUrl:] */

void FUN_104d5976c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104d59950;
  uStack_70 = 0x104d59960;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c0c0800(param_4);
  puVar1 = PTR_PTR_1126afd80;
  func_0x00010bfe5e80(PTR_PTR_1126afd80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afd88;
  _objc_alloc(PTR_PTR_1126afd88);
  func_0x00010bff6380();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf418c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa9f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(ppuStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104d59950; end: 104d59967;  */

void FUN_104d59950(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d59968; end: 104d5999f;  */

void FUN_104d59968(long param_1,undefined8 param_2)

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



/* Entry: 104d599a0; end: 104d59acb; +[SCFriendUnifiedProfileBitmojiActionHandler sceneRequestWithMyAvatarId:friendAvatarId:sceneId:] */

void FUN_104d599a0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (((ppuVar1 == (undefined **)0x0) ||
      (ppuVar1 = param_4, func_0x00010c08fa60(), ppuVar1 == (undefined **)0x0)) ||
     (ppuVar1 = param_5, func_0x00010c08fa60(), ppuVar1 == (undefined **)0x0)) {
    ppuVar2 = param_3;
    func_0x00010c08fa60();
    ppuVar4 = (undefined **)0x0;
    ppuVar1 = param_4;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    ppuVar5 = ppuVar1;
    ppuVar6 = &PTR____CFConstantStringClassReference_110db1298;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110db1278;
    }
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    ppuVar1 = param_5;
    ppuVar4 = param_4;
    ppuVar5 = param_3;
    ppuVar6 = param_5;
  }
  _objc_retain(ppuVar1);
  puVar3 = PTR_PTR_1126af5d8;
  _objc_alloc(PTR_PTR_1126af5d8);
  func_0x00010bff6000();
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d59acc; end: 104d59ae3; -[SCFriendUnifiedProfileBitmojiActionHandler _logShareOutfitTap] */

void FUN_104d59acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0af690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_logShareOutfitTapWithProfileSess_1126097b0,
             *(undefined8 *)(param_1 + 0x30),0x6a,*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Entry: 104d59ae4; end: 104d5a1bb; -[SCFriendUnifiedProfileBitmojiActionHandler _presentProfileLensCarouselWithFriendInfo:] */

void FUN_104d59ae4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  func_0x00010be588e0(param_1);
  ppuVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  ppuVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar3 = ppuVar4;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar4);
  ppuVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar4 = ppuVar5;
  }
  _objc_retain();
  _objc_release(ppuVar5);
  ppuVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = ppuVar6;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  ppuVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c08fa60();
  ppuVar6 = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar6 = ppuVar7;
  }
  _objc_retain();
  _objc_release(ppuVar7);
  ppuVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c08fa60();
  ppuVar7 = (undefined **)0x0;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar7 = ppuVar8;
  }
  _objc_retain();
  _objc_release(ppuVar8);
  ppuVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c08fa60();
  ppuVar8 = (undefined **)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar8 = ppuVar9;
  }
  _objc_retain();
  _objc_release(ppuVar9);
  ppuVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar9);
  ppuVar11 = ppuVar5;
  func_0x00010c08fa60();
  ppuVar9 = (undefined **)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar9 = ppuVar5;
  }
  _objc_retain();
  lVar12 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = lVar13;
  func_0x00010c08fa60();
  if ((lVar12 == 0) && (ppuVar11 = ppuVar1, func_0x00010c08fa60(), ppuVar11 == (undefined **)0x0))
  goto LAB_104d5a00c;
  puVar14 = PTR_PTR_1126afdb0;
  func_0x00010c14fb40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar11 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar11 != (undefined **)0x0) {
      puVar15 = PTR_PTR_1126afd80;
      func_0x00010bfe5e80(PTR_PTR_1126afd80);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126afd88;
      _objc_alloc(PTR_PTR_1126afd88);
      func_0x00010bff6380();
      puVar16 = *(undefined **)(param_1 + 0x50);
      func_0x00010bf418c0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010bfa9f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar19);
      goto LAB_104d59e8c;
    }
    _objc_initWeak(auStack_70,param_1);
    puVar18 = *(undefined **)(param_1 + 0x50);
    func_0x00010bf461c0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    func_0x00010bf68de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(puVar14);
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar8);
    puVar20 = puVar19;
    func_0x00010bfb2660(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar15);
    _objc_release(puVar18);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(puVar14);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puVar15 = *(undefined **)(param_1 + 0x50);
    func_0x00010bf418c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bfa9f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
LAB_104d59e8c:
    _objc_release(puVar15);
  }
  puVar19 = puVar20;
  func_0x00010bf43280(puVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c116c60(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e41c0();
  _objc_release(uVar21);
  _objc_release(uVar17);
  puVar15 = PTR_PTR_1126afdd8;
  lVar12 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar12);
  func_0x00010c0f2220();
  func_0x00010bfc8740(puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  ppuVar11 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bde50;
  if ((int)ppuVar10 == 0) {
    ppuVar11 = (undefined **)0x0;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(ppuVar11);
  lVar12 = param_1;
  func_0x00010bdd4920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24560(0,uVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  _objc_release(lVar12);
  lVar12 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar21);
  _objc_release(puVar15);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(puVar14);
LAB_104d5a00c:
  _objc_release(lVar13);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5a1bc; end: 104d5a227;  */

void FUN_104d5a1bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be10660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d5a228; end: 104d5a307;  */

void FUN_104d5a228(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d59950;
  uStack_30 = 0x104d59960;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d5a308; end: 104d5a33f;  */

void FUN_104d5a308(long param_1,undefined8 param_2)

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



/* Entry: 104d5a340; end: 104d5a44f; -[SCFriendUnifiedProfileBitmojiActionHandler _bitmojiOutfitSharingContainerView] */

void FUN_104d5a340(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d5a450;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d5a450; end: 104d5a4eb;  */

void FUN_104d5a450(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5a4ec; end: 104d5a533; -[SCFriendUnifiedProfileBitmojiActionHandler bitmojiOutfitSharingScopeDidDismiss:] */

void FUN_104d5a4ec(long param_1)

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



/* Entry: 104d5a534; end: 104d5a54b; -[SCFriendUnifiedProfileBitmojiActionHandler presentingViewControllerForBitmojiOutfitSharing] */

void FUN_104d5a534(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5a54c; end: 104d5a5b7; -[SCFriendUnifiedProfileBitmojiActionHandler _pushViewController:] */

void FUN_104d5a54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5a5b8; end: 104d5a607; -[SCFriendUnifiedProfileBitmojiActionHandler _popViewController] */

void FUN_104d5a5b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103980();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5a608; end: 104d5a69b; -[SCFriendUnifiedProfileBitmojiActionHandler _showError] */

void FUN_104d5a608(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d5a69c; end: 104d5a6ef; -[SCFriendUnifiedProfileBitmojiActionHandler _presentOutfitChangeNotificationWithAvatarId:] */

void FUN_104d5a69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d6c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d5a6f0; end: 104d5a737; -[SCFriendUnifiedProfileBitmojiActionHandler bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_104d5a6f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d5a738; end: 104d5a77f; -[SCFriendUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderCancelled] */

void FUN_104d5a738(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d5a780; end: 104d5a7c7; -[SCFriendUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderCompleted] */

void FUN_104d5a780(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d5a7c8; end: 104d5a813; -[SCFriendUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderFailedWithError:] */

void FUN_104d5a7c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showError_11258bd40);
  return;
}



/* Entry: 104d5a814; end: 104d5a8ff; -[SCFriendUnifiedProfileBitmojiActionHandler bitmojiEditAvatarBuilderScopeDidSaveOutfitChange:avatarId:] */

void FUN_104d5a814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d5a900;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5a900; end: 104d5a933;  */

void FUN_104d5a900(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5a934; end: 104d5a94b; -[SCFriendUnifiedProfileBitmojiActionHandler presentingViewController] */

void FUN_104d5a934(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5a94c; end: 104d5a957; -[SCFriendUnifiedProfileBitmojiActionHandler setPresentingViewController:] */

void FUN_104d5a94c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 104d5a958; end: 104d5aa1f; -[SCFriendUnifiedProfileBitmojiActionHandler .cxx_destruct] */

void FUN_104d5a958(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
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



/* Entry: 104d5aa20; end: 104d5aa37;  */

void FUN_104d5aa20(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db13b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db13b8,
                      &PTR____CFConstantStringClassReference_110db13d8,0);
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



/* Entry: 104d5aa38; end: 104d5ab6f; -[SCGroupProfileBitmojiSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5aa38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_112711edc;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104d5ab70; end: 104d5abaf;  */

void FUN_104d5ab70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d5abb0; end: 104d5aeb3; -[SCGroupProfileBitmojiSectionEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5abb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  puVar1 = PTR_PTR_1126afde8;
  _objc_alloc();
  uVar25 = *(undefined8 *)(param_1 + _DAT_112711ee0);
  uVar26 = *(undefined8 *)(param_1 + _DAT_112711ee4);
  lVar2 = param_1 + _DAT_112711ee8;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112711eec;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112711ef0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + _DAT_112711ef4);
  lVar7 = param_1 + _DAT_112711ef8;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112711edc;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + _DAT_112711efc);
  lVar10 = param_1 + _DAT_112711f00;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_112711f04;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112711f08;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_112711f0c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112711f10;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112711f14;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112711f18;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112711f1c;
  _objc_loadWeakRetained();
  lVar22 = param_1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf5e220();
  func_0x00010bff7ae0(puVar1,param_2,uVar25,uVar26,lVar2,lVar4,lVar6,uVar27,lVar7,lVar9,uVar28,
                      lVar10,lVar12,lVar13,lVar15,lVar18,lVar20,lVar21,lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(param_1);
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
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d5aeb4; end: 104d5aed3; -[SCGroupProfileBitmojiSectionEntryPoint groupProfileSectionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5aeb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711edc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5aed4; end: 104d5aee7; -[SCGroupProfileBitmojiSectionEntryPoint setGroupProfileSectionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5aed4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711edc,param_3);
  return;
}



/* Entry: 104d5aee8; end: 104d5af07; -[SCGroupProfileBitmojiSectionEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5aee8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711eec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5af08; end: 104d5af1b; -[SCGroupProfileBitmojiSectionEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5af08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711eec,param_3);
  return;
}



/* Entry: 104d5af1c; end: 104d5af3b; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiFashionNotificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5af1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5af3c; end: 104d5af4f; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiFashionNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5af3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711ef0,param_3);
  return;
}



/* Entry: 104d5af50; end: 104d5af6f; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5af50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5af70; end: 104d5af83; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5af70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f04,param_3);
  return;
}



/* Entry: 104d5af84; end: 104d5afa3; -[SCGroupProfileBitmojiSectionEntryPoint flatlandContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5af84(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5afa4; end: 104d5afb7; -[SCGroupProfileBitmojiSectionEntryPoint setFlatlandContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5afa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f0c,param_3);
  return;
}



/* Entry: 104d5afb8; end: 104d5afd7; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiProfileLensServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5afb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5afd8; end: 104d5afeb; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiProfileLensServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5afd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f08,param_3);
  return;
}



/* Entry: 104d5afec; end: 104d5b00b; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiMetricsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5afec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b00c; end: 104d5b01f; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiMetricsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b00c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f10,param_3);
  return;
}



/* Entry: 104d5b020; end: 104d5b03f; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiStyleProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b020(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b040; end: 104d5b053; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiStyleProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b040(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f1c,param_3);
  return;
}



/* Entry: 104d5b054; end: 104d5b073; -[SCGroupProfileBitmojiSectionEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b054(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b074; end: 104d5b087; -[SCGroupProfileBitmojiSectionEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b074(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f14,param_3);
  return;
}



/* Entry: 104d5b088; end: 104d5b0a7; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiFashionTrayPresentingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b088(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b0a8; end: 104d5b0bb; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiFashionTrayPresentingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f18,param_3);
  return;
}



/* Entry: 104d5b0bc; end: 104d5b0cb; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiAvatarBuilderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d5b0bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711ee0);
}



/* Entry: 104d5b0cc; end: 104d5b10b; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711ee0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d5b10c; end: 104d5b12b; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiEditAvatarBuilderScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b10c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711ee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b12c; end: 104d5b13f; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiEditAvatarBuilderScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b12c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711ee8,param_3);
  return;
}



/* Entry: 104d5b140; end: 104d5b14f; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiEditAvatarBuilderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d5b140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711ee4);
}



/* Entry: 104d5b150; end: 104d5b18f; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiEditAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711ee4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d5b190; end: 104d5b19f; -[SCGroupProfileBitmojiSectionEntryPoint profileSharingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d5b190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711ef4);
}



/* Entry: 104d5b1a0; end: 104d5b1df; -[SCGroupProfileBitmojiSectionEntryPoint setProfileSharingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711ef4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d5b1e0; end: 104d5b1ff; -[SCGroupProfileBitmojiSectionEntryPoint profileSharingScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b1e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b200; end: 104d5b213; -[SCGroupProfileBitmojiSectionEntryPoint setProfileSharingScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b200(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711ef8,param_3);
  return;
}



/* Entry: 104d5b214; end: 104d5b223; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiOutfitSharingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d5b214(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711efc);
}



/* Entry: 104d5b224; end: 104d5b263; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiOutfitSharingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711efc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d5b264; end: 104d5b283; -[SCGroupProfileBitmojiSectionEntryPoint bitmojiOutfitSharingScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b264(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5b284; end: 104d5b297; -[SCGroupProfileBitmojiSectionEntryPoint setBitmojiOutfitSharingScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b284(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711f00,param_3);
  return;
}



/* Entry: 104d5b298; end: 104d5b393; -[SCGroupProfileBitmojiSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5b298(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711f00);
  _objc_storeStrong(param_1 + _DAT_112711efc,0);
  _objc_destroyWeak(param_1 + _DAT_112711ef8);
  _objc_storeStrong(param_1 + _DAT_112711ef4,0);
  _objc_storeStrong(param_1 + _DAT_112711ee4,0);
  _objc_destroyWeak(param_1 + _DAT_112711ee8);
  _objc_storeStrong(param_1 + _DAT_112711ee0,0);
  _objc_destroyWeak(param_1 + _DAT_112711f18);
  _objc_destroyWeak(param_1 + _DAT_112711f14);
  _objc_destroyWeak(param_1 + _DAT_112711f1c);
  _objc_destroyWeak(param_1 + _DAT_112711f10);
  _objc_destroyWeak(param_1 + _DAT_112711f08);
  _objc_destroyWeak(param_1 + _DAT_112711f0c);
  _objc_destroyWeak(param_1 + _DAT_112711f04);
  _objc_destroyWeak(param_1 + _DAT_112711ef0);
  _objc_destroyWeak(param_1 + _DAT_112711eec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711edc);
  return;
}



/* Entry: 104d5b394; end: 104d5b74b; -[SCGroupUnifiedProfileBitmojiActionHandler initWithBitmojiAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:notificationPool:bitmojiFashionNotificationProvider:profileSharingScopeExposer:profileSharingScopeServices:profileSessionId:bitmojiOutfitSharingScopeExposer:bitmojiOutfitSharingScopeServices:avatarProvider:profileLensServices:contentFetcher:bitmojiOutfitSharingLogger:circumstanceEngine:fashionTrayPresentingServices:bitmojiStyle:] */

undefined8 *
FUN_104d5b394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126e4128;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
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
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    puVar1[0x12] = param_19;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 104d5b74c; end: 104d5bb77; -[SCGroupUnifiedProfileBitmojiActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104d5b74c(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [8];
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_4;
  _objc_retain(param_4);
  ppuVar10 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110eb7978;
  ppuVar2 = ppuVar10;
  func_0x00010c0720c0();
  _objc_release(ppuVar10);
  if ((int)ppuVar2 == 0) {
    ppuVar7 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar7;
    func_0x00010c0720c0();
    _objc_release(ppuVar7);
    if ((int)ppuVar10 == 0) {
      ppuVar10 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(ppuVar10);
      if ((int)ppuVar2 != 0) {
        ppuVar7 = (undefined **)0x3;
        ppuVar8 = (undefined **)0x0;
        param_5 = 0;
        func_0x00010be47800(param_1);
        goto LAB_104d5bb24;
      }
      ppuVar7 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar7;
      func_0x00010c0720c0();
      _objc_release(ppuVar7);
      if ((int)ppuVar10 == 0) {
        ppuVar10 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110eb7a18;
        ppuVar2 = ppuVar10;
        func_0x00010c0720c0();
        _objc_release(ppuVar10);
        if ((int)ppuVar2 == 0) {
          uVar9 = 0;
          goto LAB_104d5bb28;
        }
        ppuVar10 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126afdf0;
        _objc_opt_class(PTR_PTR_1126afdf0);
        ppuVar7 = ppuVar10;
        _objc_opt_isKindOfClass(ppuVar10,puVar6);
        ppuVar3 = ppuVar10;
        if (((ulong)ppuVar7 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar10);
        ppuVar7 = ppuVar3;
        func_0x00010be7dc20(param_1);
        ppuVar2 = ppuVar3;
      }
      else {
        ppuVar10 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126afdb8;
        _objc_opt_class(PTR_PTR_1126afdb8);
        ppuVar7 = ppuVar10;
        _objc_opt_isKindOfClass(ppuVar10,puVar6);
        ppuVar3 = ppuVar10;
        if (((ulong)ppuVar7 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar10);
        ppuVar7 = ppuVar3;
        func_0x00010be484c0(param_1);
        ppuVar2 = ppuVar3;
      }
    }
    else {
      ppuVar2 = *(undefined ***)(param_1 + 0x80);
      ppuVar8 = (undefined **)0x0;
      param_5 = 0;
      func_0x00010bf1f440();
      ppuVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      ppuVar10 = ppuVar7;
      _objc_opt_isKindOfClass(ppuVar7,puVar6);
      ppuVar3 = ppuVar7;
      if (((ulong)ppuVar10 & 1) == 0) {
        ppuVar3 = (undefined **)0x0;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar7);
      ppuVar10 = ppuVar3;
      if ((int)ppuVar2 == 0) {
        ppuVar7 = ppuVar3;
        func_0x00010be48820(param_1);
      }
      else {
        ppuStack_138 = ppuVar3;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        ppuVar7 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar6);
        ppuVar2 = ppuVar3;
        if (((ulong)ppuVar7 & 1) == 0) {
          ppuVar2 = (undefined **)0x0;
        }
        _objc_retain(ppuVar2);
        _objc_release(ppuVar3);
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_128 = 0;
        puStack_130 = (undefined *)0x0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        _objc_retain(ppuVar2);
        ppuVar7 = &puStack_130;
        ppuVar8 = apuStack_f0;
        param_5 = 0x10;
        ppuVar4 = ppuVar2;
        func_0x00010bf52a60();
        if (ppuVar4 != (undefined **)0x0) {
          lVar12 = *plStack_120;
          do {
            ppuVar10 = (undefined **)0x0;
            do {
              if (*plStack_120 != lVar12) {
                _objc_enumerationMutation(ppuVar2);
              }
              puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar11 = *(ulong *)(lStack_128 + (long)ppuVar10 * 8);
              _objc_retain(uVar11);
              _objc_opt_class(puVar6);
              uVar5 = uVar11;
              _objc_opt_isKindOfClass(uVar11,puVar6);
              uVar1 = uVar11;
              if ((uVar5 & 1) == 0) {
                uVar1 = 0;
              }
              _objc_retain(uVar1);
              _objc_release(uVar11);
              uVar5 = uVar1;
              func_0x00010c08fa60();
              if (uVar5 != 0) {
                func_0x00010befa120(ppuVar3);
              }
              _objc_release(uVar1);
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
            } while (ppuVar4 != ppuVar10);
            ppuVar7 = &puStack_130;
            ppuVar8 = apuStack_f0;
            param_5 = 0x10;
            ppuVar4 = ppuVar2;
            func_0x00010bf52a60();
          } while (ppuVar4 != (undefined **)0x0);
        }
        _objc_release(ppuVar2);
        ppuVar4 = ppuVar3;
        func_0x00010bf529e0();
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar7 = ppuVar3;
          func_0x00010be7b520(param_1);
        }
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        ppuVar3 = ppuStack_138;
      }
    }
    _objc_release(ppuVar3);
  }
  else {
    func_0x00010bdeb580(param_1);
  }
LAB_104d5bb24:
  uVar9 = 1;
LAB_104d5bb28:
  ppuVar3 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_104d5bb78;
    ppuStack_170 = ppuVar2;
    ppuStack_168 = ppuVar10;
    uStack_160 = uVar9;
    ppuStack_158 = param_4;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(param_5);
    _objc_initWeak(auStack_178,ppuVar3);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_104d5bc5c;
    puStack_1a0 = &UNK_11084d6b8;
    _objc_copyWeak(auStack_190,auStack_178);
    ppuStack_188 = ppuVar7;
    ppuStack_180 = ppuVar8;
    _objc_retain(param_5);
    uStack_198 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_1b8);
    _objc_release(uStack_198);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_178);
    _objc_release(param_5);
    return param_5;
  }
  return uVar9;
}



/* Entry: 104d5bb78; end: 104d5bc5b; -[SCGroupUnifiedProfileBitmojiActionHandler _launchComposerBuilderWithFlowMode:withAvatarType:avatarStateHistoryJson:] */

void FUN_104d5bb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d5bc5c;
  puStack_60 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 104d5bc5c; end: 104d5be57;  */

void FUN_104d5bc5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d5be58;
    puStack_70 = &UNK_110849680;
    _objc_copyWeak(auStack_68,param_1 + 0x28);
    _objc_copyWeak(auStack_90,param_1 + 0x28);
    func_0x00010c0311a0(puVar3);
    puVar4 = PTR_PTR_1126afdc8;
    _objc_opt_new(PTR_PTR_1126afdc8);
    func_0x00010c2ae460();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8f40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8f00(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23c40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10));
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104d5be58; end: 104d5becb;  */

void FUN_104d5be58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5becc; end: 104d5c04f; -[SCGroupUnifiedProfileBitmojiActionHandler _createBitmojiWithCamera] */

void FUN_104d5becc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d5c050;
  puStack_68 = &UNK_110849680;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0311a0(puVar2);
  puVar3 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104d5c050; end: 104d5c0c3;  */

void FUN_104d5c050(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5c0c4; end: 104d5c293; -[SCGroupUnifiedProfileBitmojiActionHandler _launchTryOnFriendsOutfit:] */

void FUN_104d5c0c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = uVar2;
  if (uVar1 == 0) {
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar4 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_release(uVar1);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) goto LAB_104d5c250;
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d5c294;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
LAB_104d5c250:
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5c294; end: 104d5c40f;  */

void FUN_104d5c294(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    lVar2 = lVar1 + 0x98;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e4c0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126afdc8;
    _objc_opt_new(PTR_PTR_1126afdc8);
    func_0x00010c2ae460();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126afdd0;
    func_0x00010bfb7c60(PTR_PTR_1126afdd0,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b51c0(puVar5,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23c40(uVar7,param_2,puVar3,puVar6,lVar1,0x52,*(undefined8 *)(lVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10),param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d5c410; end: 104d5c52f; -[SCGroupUnifiedProfileBitmojiActionHandler _presentFashionTrayWithAvatarIdOverrides:] */

void FUN_104d5c410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  FUN_104d5e268();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c10c100(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5c530; end: 104d5c57f;  */

void FUN_104d5c530(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5c580; end: 104d5c7ff; -[SCGroupUnifiedProfileBitmojiActionHandler _launchShareProfileFlow:] */

void FUN_104d5c580(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdf0;
  _objc_opt_class(PTR_PTR_1126afdf0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c14fb80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfcee60();
  uVar5 = uVar1;
  func_0x00010bf12f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar3 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x104d5c68c;
    puStack_68 = &UNK_11084d788;
    uStack_60 = uVar3;
    uStack_58 = param_1;
    uStack_50 = uVar5;
    uStack_48 = uVar4;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 104d5c800; end: 104d5c817; -[SCGroupUnifiedProfileBitmojiActionHandler _logShareOutfitTap] */

void FUN_104d5c800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0af690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_logShareOutfitTapWithProfileSess_1126097b0,
             *(undefined8 *)(param_1 + 0x40),0x52,*(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 104d5c818; end: 104d5ca5b; -[SCGroupUnifiedProfileBitmojiActionHandler _presentProfileLensCarousel:] */

void FUN_104d5c818(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010be588e0(param_1);
  lVar1 = param_3;
  func_0x00010c23e4e0();
  lVar2 = param_3;
  func_0x00010c14fb80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 != 0 && lVar2 != 0) {
    lVar4 = param_3;
    func_0x00010c090200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar5 == 0) || (lVar3 = lVar4, func_0x00010bf529e0(), lVar3 == 0)) {
      _objc_initWeak(auStack_58,param_1);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_104d5ca5c;
      puStack_78 = &UNK_1108488f8;
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(lVar2);
      lStack_70 = lVar2;
      uStack_60 = (char)lVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_90);
      _objc_release(lStack_70);
      puVar6 = auStack_68;
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_104d5ca94;
      puStack_b8 = &UNK_110844dd0;
      _objc_copyWeak(auStack_a0,auStack_58);
      _objc_retain(lVar2);
      lStack_b0 = lVar2;
      uStack_98 = (char)lVar1;
      _objc_retain(lVar4);
      lStack_a8 = lVar4;
      func_0x0001000d76cc("APPSTORE",&puStack_d0);
      _objc_release(lStack_a8);
      _objc_release(lStack_b0);
      puVar6 = auStack_a0;
    }
    _objc_destroyWeak(puVar6);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5ca5c; end: 104d5ca93;  */

void FUN_104d5ca5c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5ca94; end: 104d5cc6f;  */

void FUN_104d5ca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  
  lVar1 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    lVar3 = *(long *)(param_5 + 0x20);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_5 + 0x20);
    }
    _objc_retain(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe7c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010be7c1e0(lVar1);
    }
    else {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
      uVar7 = param_3;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
      _objc_copyWeak(auStack_80,param_5 + 0x30);
      uVar6 = *(undefined8 *)(param_5 + 0x20);
      _objc_retain(uVar6);
      uStack_78 = *(undefined1 *)(param_5 + 0x38);
      func_0x00010be0f4a0(param_3,uVar7,param_4,param_1,lVar1);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(puVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104d5cc70; end: 104d5ccdf;  */

void FUN_104d5cc70(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be7c1e0(param_1);
  }
  else {
    func_0x00010be7c200(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d5cce0; end: 104d5d05f; -[SCGroupUnifiedProfileBitmojiActionHandler _fetchAndCompositeLensImageWithBackground:lensAvatarInfos:viewWidth:canvasSize:screenScale:completion:] */

void FUN_104d5cce0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010bf529e0();
  uVar2 = param_5;
  if (uVar1 < 0xb) {
    _objc_retain(param_5);
  }
  else {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar2;
  func_0x00010bf529e0();
  uVar3 = uVar2;
  if (uVar1 < 6) {
    _objc_retain(uVar2);
    uVar12 = 0;
  }
  else {
    func_0x00010bf529e0(uVar2);
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(uVar2);
    uVar12 = uVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104d5d060;
  puStack_c0 = &UNK_11084d7e8;
  uStack_a0 = param_1;
  _objc_retain();
  puStack_b8 = puVar6;
  puStack_b0 = puVar5;
  uStack_a8 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(puVar5);
  ppuVar7 = &puStack_d8;
  _objc_retainBlock();
  pcVar11 = (code *)ppuVar7[2];
  if (uVar1 < 6) {
    uVar13 = 0x3fe8000000000000;
    uVar14 = 0;
    uVar1 = uVar3;
  }
  else {
    (*pcVar11)(0x3fe8000000000000,0x3fbeb851eb851eb8,ppuVar7,uVar3);
    pcVar11 = (code *)ppuVar7[2];
    uVar13 = 0x3fe4cccccccccccd;
    uVar14 = 0xbfa47ae147ae147b;
    uVar1 = uVar12;
  }
  (*pcVar11)(uVar13,uVar14,ppuVar7,uVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_2 + 0x70));
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar6);
  _objc_retain(param_6);
  puVar10 = puVar9;
  func_0x00010c25ff60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(ppuVar7);
  _objc_release(uStack_a8);
  _objc_release(puStack_b0);
  _objc_release(puStack_b8);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 104d5d060; end: 104d5d363;  */

void FUN_104d5d060(double param_1,double param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf529e0();
  dVar10 = param_1 * -0.28 * 0.5;
  if ((uVar1 & 1) != 0) {
    dVar10 = 0.0;
  }
  if (uVar1 != 0) {
    uVar8 = 0;
    dVar11 = *(double *)(param_3 + 0x38);
    dVar17 = param_1 * dVar11;
    uVar12 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar16 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      dVar13 = -(double)(long)((double)uVar8 / 2.0);
      if ((uVar8 & 1) != 0) {
        dVar13 = (double)(long)((double)uVar8 / 2.0);
      }
      dVar15 = *(double *)(param_3 + 0x38);
      uVar2 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c14fa80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfdcf80();
      _objc_release(uVar3);
      _objc_release(uVar2);
      dVar14 = 0.9;
      if ((int)uVar4 == 0) {
        dVar14 = 1.0;
      }
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971a0(dVar15 * (dVar10 + (1.0 - param_1) * 0.5 + param_1 * dVar13 * 0.28) +
                          dVar17 * (1.0 - dVar14) * 0.5,
                          param_2 * dVar11 + dVar15 * 0.359 +
                          (dVar17 * 1.3333333333333333 - dVar17 * dVar14 * 1.3333333333333333),
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar9);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126af5d8;
      _objc_alloc(PTR_PTR_1126af5d8);
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c14fa80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6020(uVar12,uVar16,puVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar9 = *(undefined8 *)(param_3 + 0x28);
      uVar7 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bfa9f20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar9);
      _objc_release(uVar7);
      _objc_release(puVar5);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d5d364; end: 104d5d38b;  */

void FUN_104d5d364(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104d5d38c; end: 104d5d7df;  */

void FUN_104d5d38c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_150;
    do {
      lVar10 = 0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        puVar7 = PTR___NSConcreteStackBlock_11034bd00;
        uVar8 = *(undefined8 *)(lStack_158 + lVar10 * 8);
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_104d5d7e0;
        puStack_170 = &UNK_11084d858;
        _objc_retain(puVar1);
        puStack_1b0 = puVar7;
        uStack_1a8 = 0xc2000000;
        uStack_1a0 = 0x104d5d7ec;
        puStack_198 = &UNK_11084d888;
        puStack_190 = &uStack_120;
        puStack_168 = puVar1;
        func_0x00010c0c0800(uVar8);
        _objc_release(puStack_168);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  if (*(char *)(puStack_118 + 3) == '\x01') {
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x104d5d800;
    puStack_1c0 = &UNK_110849530;
    puVar7 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar7);
    puStack_1b8 = puVar7;
    func_0x0001000d76cc("APPSTORE",&puStack_1d8);
    puVar3 = puStack_1b8;
  }
  else {
    puVar7 = puVar1;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar7 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1d4c20(puVar7);
    puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc();
    func_0x00010c046ac0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_104d5d810;
    puStack_208 = &UNK_11084d8b8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x48);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x40);
    uStack_200 = uVar4;
    _objc_retain(puVar3);
    puStack_1f8 = puVar3;
    _objc_retain(uVar8);
    puVar6 = puVar5;
    uStack_1f0 = uVar8;
    func_0x00010bfe91c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_248 = 0xc2000000;
    pcStack_240 = FUN_104d5d8b8;
    puStack_238 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uStack_228 = uVar4;
    _objc_retain(puVar6);
    puStack_230 = puVar6;
    func_0x0001000d76cc("APPSTORE",&puStack_250);
    _objc_release(puStack_230);
    _objc_release(uStack_228);
    _objc_release(puVar6);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1f8);
    _objc_release(uStack_200);
    _objc_release(puVar7);
    _objc_release(uVar8);
  }
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_addObject__11259c1f0,uVar8);
  return;
}



/* Entry: 104d5d7e0; end: 104d5d80f;  */

void FUN_104d5d7e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 104d5d810; end: 104d5d8b7;  */

void FUN_104d5d810(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010bf89920(0,0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40(uVar3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      func_0x00010bf89920(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar4 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf529e0();
    } while (uVar5 < uVar4);
  }
  return;
}



/* Entry: 104d5d8b8; end: 104d5d8c7;  */

void FUN_104d5d8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d5d8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}


