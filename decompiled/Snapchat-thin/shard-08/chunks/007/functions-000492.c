/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106543b20; end: 106543b3f; -[SCChatViewControllerV3 _updateFriendmojiOnStickerAccessoryActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543b20(long param_1)

{
  if (*(char *)(param_1 + _DAT_11274a088) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274a088) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed8f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateGroupFriendmoji_112593d68);
    return;
  }
  return;
}



/* Entry: 106543b40; end: 106543b53; -[SCChatViewControllerV3 _requestGroupFriendmojiUpdateOnStickerAccessoryActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543b40(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a088) = 1;
  return;
}



/* Entry: 106543b54; end: 106543ba7; -[SCChatViewControllerV3 _updateFriendmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543b54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274a1ec);
  if (lVar1 == 0) {
    return;
  }
  func_0x00010c074920();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed8f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateGroupFriendmoji_112593d68);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedc5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateOneOnOneFriendmoji_112594b18);
  return;
}



/* Entry: 106543ba8; end: 106543cdf; -[SCChatViewControllerV3 _updateOneOnOneFriendmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543ba8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0cc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106543ce0; end: 106543e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543ce0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a178);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0d0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
    func_0x00010c122e80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(uVar1);
    func_0x00010c244960(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106543e14; end: 106543e2b;  */

void FUN_106543e14(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateWithBitmojiUser_bitmojiUse_112680b78,
             param_2,PTR____NSArray0__struct_11034ab48,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106543e2c; end: 1065441bf; -[SCChatViewControllerV3 _updateGroupFriendmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543e2c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  lVar1 = *(long *)(param_1 + _DAT_11274a1ec);
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = auStack_80;
    _objc_initWeak(puVar2,param_1);
    _dispatch_group_create();
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10653ac28;
    uStack_90 = 0x10653ac38;
    puStack_88 = PTR____NSArray0__struct_11034ab48;
    _dispatch_group_enter();
    lVar8 = (long)_DAT_11274a0c0;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfceb20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1065441c0;
    puStack_c8 = &UNK_110860220;
    puStack_b8 = &uStack_b0;
    _objc_retain(puVar2);
    puStack_c0 = puVar2;
    func_0x00010c244de0(uVar3);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c293740(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x000108ef2144(lVar1,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x3032000000;
    pcStack_f8 = FUN_10653ac28;
    uStack_f0 = 0x10653ac38;
    uStack_e8 = 0;
    if (lVar4 != 0) {
      _dispatch_group_enter(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bfceb20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c2923e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      uStack_130 = 0x106544224;
      puStack_128 = &UNK_11086f418;
      puStack_118 = &uStack_110;
      _objc_retain(puVar2);
      puStack_120 = puVar2;
      func_0x00010c2447c0(uVar3);
      _objc_release(uVar5);
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_release(uVar3);
      _objc_release(puStack_120);
    }
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106544280;
    puStack_160 = &UNK_1108ad760;
    _objc_copyWeak(auStack_148,auStack_80);
    puStack_150 = &uStack_b0;
    puStack_158 = &uStack_110;
    func_0x000100bc0718(puVar2,uVar5,&puStack_178);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_148);
    __Block_object_dispose(&uStack_110,8);
    _objc_release(uStack_e8);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(puStack_c0);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(puStack_88);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065441c0; end: 10654427f;  */

void FUN_1065441c0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106544280; end: 106544403;  */

void FUN_106544280(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long lVar8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined1 *puStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed88e0(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x21 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    _objc_retain(unaff_x21);
    param_4 = auStack_f0;
    lVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x26 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != unaff_x26) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x23 = *(undefined1 **)(lStack_128 + lVar8 * 8);
          unaff_x24 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_opt_new();
          unaff_x25 = unaff_x23;
          func_0x00010901cdb0(unaff_x23,unaff_x24);
          _objc_release(unaff_x24);
          if ((int)unaff_x25 != 0) {
            param_4 = *(undefined1 **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
            puVar7 = (undefined8 *)unaff_x23;
            func_0x00010bed88e0(lVar1);
            unaff_x22 = lVar2;
            goto LAB_1065443b8;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        param_4 = auStack_f0;
        lVar2 = unaff_x21;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x22 = lVar2;
      } while (lVar2 != 0);
    }
LAB_1065443b8:
    _objc_release(unaff_x21);
    param_3 = (undefined1 *)puVar7;
  }
  lVar2 = lVar1;
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_106544404;
    lStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    lStack_160 = unaff_x22;
    lStack_158 = unaff_x21;
    lStack_150 = param_1;
    lStack_148 = lVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar3 = param_4;
    func_0x00010c0d3c80();
    puVar4 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined1 *)0x0) {
      puVar6 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      puVar6 = param_3;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c12d360(puVar3);
    _objc_initWeak(auStack_188,lVar2);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_106544598;
    puStack_1a8 = &UNK_110848218;
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(puVar6);
    puStack_1a0 = puVar6;
    _objc_retain(puVar3);
    puStack_198 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_1c0);
    _objc_release(puStack_198);
    _objc_release(puStack_1a0);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 106544404; end: 106544597; -[SCChatViewControllerV3 _updateFriendmojiWithLastParticipant:bitmojiUsersForPicker:] */

void FUN_106544404(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0d3c80();
  lVar2 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar4 = param_3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c12d360(lVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106544598;
  puStack_78 = &UNK_110848218;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(lVar4);
  lStack_70 = lVar4;
  _objc_retain(lVar1);
  lStack_68 = lVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(lStack_68);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106544598; end: 10654461b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_11274a178);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar4);
    func_0x00010c28c540(uVar3,param_2,uVar1,uVar4,0);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10654461c; end: 1065446a3; -[SCChatViewControllerV3 didGrantBlockExceptionForGroupId:] */

void FUN_10654461c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_1065446a4;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 1065446a4; end: 10654473b;  */

void FUN_1065446a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183a80();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5fa0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10654473c; end: 106544793; -[SCChatViewControllerV3 blockedExceptionAlertScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654473c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a1f4;
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



/* Entry: 106544794; end: 10654487b; -[SCChatViewControllerV3 _operaPresenterWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544794(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_11274a368) = 1;
  func_0x00010bee0a80();
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f3c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fde0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801e0();
  _objc_release(lVar1);
  func_0x00010bf36de0(*(undefined8 *)(param_1 + _DAT_11274a398));
  func_0x00010bea6760(param_1,param_2,1);
  func_0x00010bf1d400(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a290);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10654487c; end: 10654487f; -[SCChatViewControllerV3 _operaPresenterDidAppear] */

void FUN_10654487c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_willEndDisplayingAllCells_1126872f0);
  return;
}



/* Entry: 106544880; end: 10654499b; -[SCChatViewControllerV3 _operaPresenterDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544880(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010b738094();
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f3c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280da0();
  _objc_release(lVar1);
  func_0x00010bf36b80(*(undefined8 *)(param_1 + _DAT_11274a398));
  func_0x00010bebb280(param_1);
  *(undefined1 *)(param_1 + _DAT_11274a368) = 0;
  func_0x00010bee0a80(param_1);
  func_0x00010be08d60(param_1);
  func_0x00010bea6760(param_1);
  func_0x00010be95c20(param_1);
  func_0x00010bf01280(param_1);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeafe0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a0f8);
  func_0x00010c0f2220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_startPage__112671938,param_1);
  return;
}



/* Entry: 10654499c; end: 106544a43; -[SCChatViewControllerV3 multiDirectionalUIContainerDidDetachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654499c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a098);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e539f8,0,0);
  if ((int)uVar1 != 0) {
    func_0x00010be755c0(param_1,param_2,1);
    lVar2 = param_1;
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be6eb60();
    if ((int)lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0f8);
      func_0x00010c0f2220(param_1);
      func_0x00010c24fc40(uVar1,param_2,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106544a44; end: 106544b03; -[SCChatViewControllerV3 _overlayDismissalRevealsChat] */

ulong FUN_106544a44(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06d1a0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) {
        return 0;
      }
    }
    uVar1 = param_1;
    func_0x00010c0793a0();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf36970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_chatIsFullyVisible_1125ab400);
      return param_1;
    }
  }
  return 0;
}



/* Entry: 106544b04; end: 106544b33; -[SCChatViewControllerV3 tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544b04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a2f4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106544b34; end: 106544bf3; -[SCChatViewControllerV3 updateTableContentInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544b34(double param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + (long)_DAT_11274a21c);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 + 12.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_3,puVar2);
  _objc_release(puVar2);
  if (*(long *)(param_2 + (long)_DAT_11274a190) == 0) {
    return;
  }
  uVar3 = param_2;
  func_0x00010beb4a80();
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + (long)_DAT_11274a1ec);
    func_0x00010c071380();
    if (iVar1 == 0) {
      return;
    }
  }
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106544bf4; end: 106544bf7; -[SCChatViewControllerV3 _updateStatusBarForFullScreenPlayer] */

void FUN_106544bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 106544bf8; end: 106544c13; -[SCChatViewControllerV3 isFullScreenPlayerShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106544bf8(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11274a394) & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0793b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isOperaShowing_1125fbef8);
  return param_1;
}



/* Entry: 106544c14; end: 106544edb; -[SCChatViewControllerV3 _saveItemAtIndexPath:withSelectedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544c14(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2c580();
  if ((int)uVar2 == 0) goto LAB_106544eb4;
  uVar2 = uVar1;
  func_0x00010c0cb2a0();
  uVar3 = *(ulong *)(param_1 + (long)_DAT_11274a0b0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  if (uVar2 == 1) {
    func_0x00010bf80aa0();
  }
  else {
    func_0x00010bf80a80();
  }
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) goto LAB_106544eb4;
  func_0x00010bea7800(param_1);
  uVar4 = uVar1;
  func_0x00010c0cb5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cb308;
  _objc_retain(uVar1);
  _objc_opt_class(puVar5);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar5);
  uVar2 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar1);
  uVar3 = uVar1;
  uVar6 = uVar4;
  if (uVar2 == 0) {
LAB_106544e0c:
    puVar5 = PTR_PTR_1126cb578;
    _objc_retain(uVar3);
    _objc_opt_class(puVar5);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar4 = uVar1;
    func_0x00010c14b840();
    uVar7 = uVar3;
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if ((int)uVar4 == 0) {
      func_0x00010c14a9a0(param_1);
    }
    else {
      func_0x00010c282480();
    }
    _objc_release(uVar7);
    uVar1 = uVar3;
    uVar4 = uVar6;
  }
  else {
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if ((param_4 != 0x7fffffffffffffff) && (param_4 < uVar6)) {
      uVar3 = uVar1;
      func_0x00010c0cbb20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf490e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar3);
      uVar4 = uVar1;
      func_0x00010c24d420();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126cb4d0;
      _objc_opt_class(PTR_PTR_1126cb4d0);
      uVar4 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar3 = uVar7;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar1);
      goto LAB_106544e0c;
    }
    func_0x00010bdd2f20(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar4);
LAB_106544eb4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106544edc; end: 106545083; -[SCChatViewControllerV3 _batchToggleSaveForStackedViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106544edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 1;
  lVar1 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c0cbb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  uVar4 = uVar3;
  func_0x00010c0ba200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010c069180(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17360(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return;
}



/* Entry: 106545084; end: 1065450ab;  */

void FUN_106545084(long param_1,undefined8 param_2)

{
  func_0x0001070b5a80(param_2,*(undefined8 *)(param_1 + 0x20),
                      *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065450ac; end: 10654512f; -[SCChatViewControllerV3 _setShouldAnimateOnSave:forIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065450ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11274a2f4);
  func_0x00010bf33b80(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb6e8;
  _objc_opt_class(PTR_PTR_1126cb6e8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1fffc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106545130; end: 106545187; -[SCChatViewControllerV3 _performTapGestureAtIndexPath:selectedIndex:] */

void FUN_106545130(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be726a0(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010be993c0(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106545188; end: 106545257; -[SCChatViewControllerV3 _performRetryForFailedSendIfApplicableAtIndexPath:] */

undefined8 FUN_106545188(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5ffa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0728e0();
  if (((int)uVar2 == 0) ||
     (uVar2 = param_1, func_0x00010be346e0(param_1,param_2,param_3), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0cb5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96ea0(param_1,param_2,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar4 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106545258; end: 106545267; -[SCChatViewControllerV3 currentGroupForGroupConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106545258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfce410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a1ec),PTR_s_group_1125d12a8);
  return;
}



/* Entry: 106545268; end: 106545403; -[SCChatViewControllerV3 messageViewModelWithMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106545268(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + _DAT_11274a1ec);
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      puVar5 = PTR_PTR_1126cb4d0;
      uVar9 = *(ulong *)(lVar10 * 8);
      _objc_retain(uVar9);
      _objc_opt_class(puVar5);
      uVar6 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar5);
      uVar1 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar9);
      if (uVar1 != 0) {
        uVar6 = uVar9;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf32ee0();
        _objc_release(uVar6);
        if (uVar7 == 0) goto LAB_1065453b4;
      }
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  uVar9 = 0;
LAB_1065453b4:
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11274a354),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6388);
  return;
}



/* Entry: 106545404; end: 10654541b; -[SCChatViewControllerV3 dismissActionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106545404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a354),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6388);
  return;
}



/* Entry: 10654541c; end: 10654545b; -[SCChatViewControllerV3 replayScopeWillDisplayAlertView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654541c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a358) = 1;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654545c; end: 1065454c3; -[SCChatViewControllerV3 replayScopeDidCompleteWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654545c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a1f0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + _DAT_11274a358) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be08d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessary_11255fce8);
  return;
}



/* Entry: 1065454c4; end: 1065454c7; -[SCChatViewControllerV3 replayScope:didReplaySnapsInConversation:] */

void FUN_1065454c4(void)

{
  return;
}



/* Entry: 1065454c8; end: 1065455ab; -[SCChatViewControllerV3 shouldSuppressKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065454c8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + (long)_DAT_11274a324) == '\x01') {
    *(undefined1 *)(param_1 + (long)_DAT_11274a324) = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c073fe0();
    if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c07a4a0(), (uVar4 & 1) == 0)) {
      uVar4 = param_1;
      func_0x00010c24d120();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c06cf60();
      _objc_release(uVar4);
      if ((uVar1 & 1) == 0) {
        puVar2 = PTR_PTR_1126af178;
        func_0x00010c22b900();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c083820();
        _objc_release(puVar2);
        if ((((ulong)puVar3 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_11274a358) & 1) == 0)) {
          uVar4 = *(ulong *)(param_1 + (long)_DAT_11274a1ec);
          if ((uVar4 != 0) && (func_0x00010c075860(), (uVar4 & 1) == 0)) {
            func_0x00010c076ee0();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1065455ac; end: 1065455af; -[SCChatViewControllerV3 didStartSnapchattersUpdateDataRequest:] */

void FUN_1065455ac(void)

{
  return;
}



/* Entry: 1065455b0; end: 1065456a3; -[SCChatViewControllerV3 didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1065455b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1065456a4;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1065456a4; end: 1065456db;  */

void FUN_1065456a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065456dc; end: 1065457df; -[SCChatViewControllerV3 _didEndSnapchattersUpdateDataRequest:withSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065456dc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11274a1ec) != 0) {
    lVar1 = param_1;
    func_0x00010bef0700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1065457e4;
      puStack_58 = &UNK_11092a510;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10654589c;
      puStack_88 = &UNK_11092a540;
      lStack_80 = param_1;
      uStack_78 = param_4;
      lStack_50 = param_1;
      uStack_48 = param_4;
      func_0x00010c0bc6c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_11092a4f0,0,&puStack_70,0,
                          &puStack_a0,0,0,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065457e0; end: 1065457e3;  */

void FUN_1065457e0(void)

{
  return;
}



/* Entry: 1065457e4; end: 10654589b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065457e4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar5 = (long)_DAT_11274a1ec;
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010c074920();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010c122e00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        func_0x00010bdfd180(*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10654589c; end: 106545a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654589c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_1065459e8;
  lVar8 = (long)_DAT_11274a1ec;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x000108ef3c74(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar8);
    func_0x00010c074920();
    if ((uVar5 & 1) != 0) {
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_1065459e8;
    }
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar8);
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar5 & 1) == 0) goto LAB_1065459e8;
  }
  else {
    _objc_release();
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bdfd180(*(undefined8 *)(param_1 + 0x20));
LAB_1065459e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106545a04; end: 106545b77; -[SCChatViewControllerV3 _didDeleteOrBlockSnapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106545a04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_11274a1ec);
  if (lVar1 != 0) {
    func_0x00010c074920();
    if ((int)lVar1 == 0) {
      ppuVar6 = (undefined **)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0d8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c293740(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x000108ef2f84(lVar1,uVar2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
      if ((int)lVar5 == 0) {
        ppuVar6 = (undefined **)0x0;
      }
      else {
        _objc_initWeak(auStack_48,param_1);
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_106545b78;
        puStack_60 = &UNK_110841fb0;
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(lVar1);
        ppuVar6 = &puStack_78;
        lStack_58 = lVar1;
        _objc_retainBlock(ppuVar6);
        _objc_release(lStack_58);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      _objc_release(lVar1);
    }
    func_0x00010be027c0(param_1);
    _objc_release(ppuVar6);
  }
  return;
}



/* Entry: 106545b78; end: 106545bcb;  */

void FUN_106545b78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfceb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a4a0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106545bcc; end: 106545c9f; -[SCChatViewControllerV3 _presentBlockedExceptionAlertForConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106545bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a1f4;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a1f8);
  func_0x00010bf23160(uVar2,param_2,param_3,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106545ca0; end: 106545edf; -[SCChatViewControllerV3 _dismissChatViewsWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106545ca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  lVar6 = (long)_DAT_11274a09c;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar6 = (long)_DAT_11274a174;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_106545e7c;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c150520(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_80;
    _objc_copyWeak(puVar5,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf6f440(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar2 = param_3;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c150520(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106545ee0;
    puStack_60 = &UNK_110848708;
    puVar5 = auStack_50;
    _objc_copyWeak(puVar5,auStack_48);
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010bf6f440(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar2 = lStack_58;
  }
  _objc_release(lVar2);
  _objc_destroyWeak(puVar5);
LAB_106545e7c:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106545ee0; end: 106545f47;  */

void FUN_106545ee0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be027a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106545f48; end: 106545f8f; -[SCChatViewControllerV3 _dismissChatViewControllerIfInChatWithCompletion:] */

void FUN_106545f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf36960();
  if ((int)uVar1 != 0) {
    func_0x00010be24260(param_1,param_2,1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106545f90; end: 106546027; -[SCChatViewControllerV3 imageForRightButtonInState:] */

void FUN_106545f90(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x88,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c07bac0();
  puVar1 = puVar2;
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106546028; end: 10654604f; -[SCChatViewControllerV3 imageForXButtonInState:] */

void FUN_106546028(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010be36b20();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106546050; end: 10654605f; -[SCChatViewControllerV3 backgroundColorForHeader] */

void FUN_106546050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x2d);
  return;
}



/* Entry: 106546060; end: 1065460f7; -[SCChatViewControllerV3 imageForLeftButtonInState:] */

void FUN_106546060(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x86,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c07bac0();
  puVar1 = (undefined *)0x0;
  if (param_1 == 0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065460f8; end: 10654624f; -[SCChatViewControllerV3 iconForPlaceholderAttributedString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065460f8(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar7 = (long)_DAT_11274a39c;
  lVar6 = *(long *)(param_3 + lVar7);
  if (lVar6 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    *(undefined **)(param_3 + lVar7) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110e53a18);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x3ff0000000000000;
    puVar2 = puVar1;
    func_0x00010c2a8240(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar7),param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010be711a0(param_3);
    uVar5 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010bfe6ac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar9 = 0xbfd0000000000000;
    dVar10 = param_2 * -0.25;
    uVar3 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1739e0(uVar8,dVar10,uVar9,param_2,*(undefined8 *)(param_3 + lVar7));
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    lVar6 = *(long *)(param_3 + lVar7);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106546250; end: 106546273; -[SCChatViewControllerV3 _pencilIconPadding] */

undefined8 FUN_106546250(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c07bac0();
  uVar1 = 0xbff0000000000000;
  if (param_1 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 106546274; end: 106546283; -[SCChatViewControllerV3 textColorForHeader:] */

void FUN_106546274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x48);
  return;
}



/* Entry: 106546284; end: 106546293; -[SCChatViewControllerV3 textColorForPlaceholderInHeader:] */

void FUN_106546284(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbf);
  return;
}



/* Entry: 106546294; end: 1065462a3; -[SCChatViewControllerV3 fontForHeader:] */

void FUN_106546294(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 1065462a4; end: 1065462b3; -[SCChatViewControllerV3 fontForPlaceholderInHeader] */

void FUN_1065462a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 1065462b4; end: 1065462c3; -[SCChatViewControllerV3 tintColorForHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065462b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf610f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a1ec),PTR_s_cursorColor_1125b5de0);
  return;
}



/* Entry: 1065462c4; end: 10654630b; -[SCChatViewControllerV3 titleForHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065462c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10654630c; end: 106546313; -[SCChatViewControllerV3 isInChatCreationMode] */

undefined8 FUN_10654630c(void)

{
  return 0;
}



/* Entry: 106546314; end: 106546323; -[SCChatViewControllerV3 borderColor] */

void FUN_106546314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xae);
  return;
}



/* Entry: 106546324; end: 10654632b; -[SCChatViewControllerV3 borderThickness] */

undefined8 FUN_106546324(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 10654632c; end: 1065463a3; -[SCChatViewControllerV3 hasUnreadMessages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10654632c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126cb2f0;
  uVar4 = *(ulong *)(param_1 + _DAT_11274a1ec);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bfddd60(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1065463a4; end: 1065463ff; -[SCChatViewControllerV3 cell:didFinishAnimationForMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065463a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  _objc_retain(param_4);
  func_0x00010bf03ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5740();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106546400; end: 1065464cf; -[SCChatViewControllerV3 openReactionDetailViewForMessage:] */

void FUN_106546400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_1065464d0;
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



/* Entry: 1065464d0; end: 106546503;  */

void FUN_1065464d0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106546504; end: 1065466f7; -[SCChatViewControllerV3 _exposeReactionsDetailScopeForMessageWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106546504(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar11 = (long)_DAT_11274a22c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010bf84360(param_1);
    lVar2 = *(long *)(param_1 + _DAT_11274a1ec);
    func_0x00010bfed000();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_1;
      func_0x00010c267f00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf33b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar5 = lVar4;
      func_0x00010010fab4(lVar4,PTR_DAT_1126a5468);
      lVar3 = lVar4;
      if ((int)lVar5 == 0) {
        lVar3 = 0;
      }
      _objc_retain(lVar3);
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
      func_0x00010bf50a20(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2894c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      uVar8 = param_3;
      FUN_1064faef4(param_3,uVar7,*(undefined8 *)(param_1 + _DAT_11274a3a0),
                    *(undefined8 *)(param_1 + _DAT_11274a0b0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar9 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar10 = PTR_PTR_1126cb720;
      _objc_alloc(PTR_PTR_1126cb720);
      func_0x00010c061fa0();
      _objc_release(lVar3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar11));
      func_0x00010be60e00(param_1);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uVar8);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065466f8; end: 106546853; -[SCChatViewControllerV3 didReactToMessageFromBelowMessage:conversationId:reactionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065466f8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b6070;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = param_5;
    func_0x00010bf1bf60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010bf8e2c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c01e5e0(puVar1,param_2,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c120b40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c120960();
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106546854; end: 106546997; -[SCChatViewControllerV3 didRemoveReactionFromBelowMessage:conversationId:reactionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106546854(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b6070;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = param_5;
    func_0x00010bf1bf60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010bf8e2c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c01e5e0(puVar1,param_2,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c120b40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12dea0();
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106546998; end: 1065469f3; -[SCChatViewControllerV3 didFinishReplayAnimationForMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106546998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  _objc_retain(param_3);
  func_0x00010bf03ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eadc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065469f4; end: 106546a4f; -[SCChatViewControllerV3 groupProfileWillDimiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065469f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a174;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c27fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unifiedProfileDidDisappear_11267da20);
  return;
}



/* Entry: 106546a50; end: 106546a53; -[SCChatViewControllerV3 groupProfileDidDimiss:withRequestedFriendshipProfile:] */

void FUN_106546a50(void)

{
  return;
}



/* Entry: 106546a54; end: 106546b13; -[SCChatViewControllerV3 groupProfileDidDismiss:withRequestedChat:deeplinkType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106546a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c071ae0(param_4,param_2,*(undefined8 *)(param_1 + _DAT_11274a328));
  if ((int)uVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b41f8;
    func_0x00010c27a4c0(PTR_PTR_1126b41f8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183a80(param_1,param_2,param_4,puVar2,3,7);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  else {
    *(undefined8 *)(param_1 + _DAT_11274a320) = param_5;
    func_0x00010be27e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106546b14; end: 106546b2b; -[SCChatViewControllerV3 groupProfileDidDimiss:withRequestedProfile:] */

void FUN_106546b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentUnifiedProfileForSnapchat_112621528,param_4,0x2e879d01,0,0xd8);
  return;
}



/* Entry: 106546b2c; end: 106546b2f; -[SCChatViewControllerV3 groupProfileWillAppear] */

void FUN_106546b2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2800d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unifiedProfileWillAppear_11267da58);
  return;
}



/* Entry: 106546b30; end: 106546b37; -[SCChatViewControllerV3 groupProfileDidDismiss:withRequestedCallInChat:media:] */

void FUN_106546b30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_friendProfileDidDismiss_withRequ_1125cbb70,0)
  ;
  return;
}



/* Entry: 106546b38; end: 106546b93; -[SCChatViewControllerV3 friendProfileDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106546b38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a09c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c27fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unifiedProfileDidDisappear_11267da20);
  return;
}



/* Entry: 106546b94; end: 106546c0b; -[SCChatViewControllerV3 friendProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_106546b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b41f8;
  _objc_retain(param_4);
  func_0x00010c27a4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265660(param_1);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be27e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDeepLinkAfterViewDidSwipe_112567940);
  return;
}



/* Entry: 106546c0c; end: 106546cf3; -[SCChatViewControllerV3 friendProfileDidDismiss:withRequestedCallInChat:media:] */

bool FUN_106546c0c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (param_5 != 0) {
    puVar1 = param_1;
    func_0x00010bef05e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c071ae0(param_4,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      uVar2 = 3;
      if (param_5 != 1) {
        uVar2 = 4;
      }
      puVar1 = PTR_PTR_1126b41f8;
      func_0x00010c27a4c0(PTR_PTR_1126b41f8,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265660(param_1,param_2,param_4,puVar1);
    }
    else {
      puVar1 = param_1;
      func_0x00010bf50280(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162b60(param_1,param_2,puVar1,param_5);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return param_5 != 0;
}



/* Entry: 106546cf4; end: 106546cf7; -[SCChatViewControllerV3 friendProfileWillAppear] */

void FUN_106546cf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2800d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unifiedProfileWillAppear_11267da58);
  return;
}



/* Entry: 106546cf8; end: 106546e7b; -[SCChatViewControllerV3 _presentGroupUnifiedProfileWithGroupId:friendshipFlashbackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106546cf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + _DAT_11274a1ec);
  func_0x00010c076ee0();
  if ((uVar1 & 1) == 0) {
    lVar6 = param_1;
    func_0x00010c10fce0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c06d1a0();
    lVar2 = param_1;
    if ((int)lVar7 == 0) {
      func_0x00010c10fce0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_1);
    }
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126b4b68;
    _objc_alloc(PTR_PTR_1126b4b68);
    func_0x00010c0029c0();
    if (param_4 != 0) {
      func_0x00010c19dc20(puVar3,param_2,param_4);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11274a098);
      func_0x00010bf05fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f440();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        func_0x00010c1b9580(puVar3,param_2,1);
      }
    }
    lVar7 = (long)_DAT_11274a174;
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106546e7c; end: 106546ebb; -[SCChatViewControllerV3 _pressCameraFromUnifiedProfile] */

void FUN_106546e7c(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106546ebc; end: 106546f5f; -[SCChatViewControllerV3 _switchToGroupChatWithGroupId:deepLinkURL:chatPageSource:] */

void FUN_106546ebc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  if (param_3 != 0) {
    _objc_retain(param_4);
    func_0x00010bfcf680(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183a80();
    _objc_release(param_4);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106546f60; end: 10654711b; -[SCChatViewControllerV3 _hasVisibleImmutableViewModelCells] */

undefined * FUN_106546f60(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar8 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          uVar7 = *(ulong *)((long)puVar8 * 8);
          puVar4 = PTR_PTR_1126cb4a0;
          _objc_opt_class(PTR_PTR_1126cb4a0);
          uVar5 = uVar7;
          _objc_opt_isKindOfClass(uVar7,puVar4);
          if ((uVar5 & 1) != 0) {
            func_0x00010c29d560();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126c6d00;
            _objc_opt_class(PTR_PTR_1126c6d00);
            uVar5 = uVar7;
            _objc_opt_isKindOfClass(uVar7,puVar4);
            _objc_release(uVar7);
            if ((uVar5 & 1) != 0) {
              puVar8 = (undefined *)0x1;
              goto LAB_1065470d4;
            }
          }
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
      puVar8 = (undefined *)0x0;
    }
LAB_1065470d4:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar8 = puVar2;
    func_0x00010bf368c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf5e780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar4 = puVar3;
    func_0x00010010fab4(puVar3,PTR_DAT_1126a5038);
    puVar8 = puVar3;
    if ((int)puVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar3);
    puVar3 = puVar8;
    _objc_opt_respondsToSelector(puVar8,PTR_s_defaultProjectNameV2_1125b8198);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010be41ea0();
      puVar3 = PTR_PTR_1126aedf8;
      if ((int)puVar2 == 0) {
        func_0x00010bf35d60(PTR_PTR_1126aedf8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0cae80();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar3 = puVar8;
      func_0x00010bf69fc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  return puVar8;
}



/* Entry: 10654711c; end: 1065471fb; -[SCChatViewControllerV3 defaultProjectNameV2] */

void FUN_10654711c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010010fab4(puVar2,PTR_DAT_1126a5038);
  puVar1 = puVar2;
  if ((int)puVar3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_opt_respondsToSelector(puVar1,PTR_s_defaultProjectNameV2_1125b8198);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010be41ea0();
    puVar2 = PTR_PTR_1126aedf8;
    if ((int)param_1 == 0) {
      func_0x00010bf35d60(PTR_PTR_1126aedf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0cae80();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf69fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065471fc; end: 106547203; -[SCChatViewControllerV3 defaultSubProjectName] */

undefined8 FUN_1065471fc(void)

{
  return 0;
}



/* Entry: 106547204; end: 1065472eb; -[SCChatViewControllerV3 jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547204(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + _DAT_11274a1ec);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0ac);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c293740(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_1065894c4(lVar5,uVar2,lVar4,*(undefined8 *)(param_1 + _DAT_11274a278));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1065472ec; end: 10654730f; -[SCChatViewControllerV3 operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1065472ec(undefined8 param_1)

{
  func_0x00010be64660();
                    /* WARNING: Could not recover jumptable at 0x00010be6dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterWillAppear_112579100);
  return;
}



/* Entry: 106547310; end: 106547313; -[SCChatViewControllerV3 operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_106547310(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterDidAppear_1125790d0);
  return;
}



/* Entry: 106547314; end: 106547323; -[SCChatViewControllerV3 operaPresenterWillBeginDismissing:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547314(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 0;
  return;
}



/* Entry: 106547324; end: 106547337; -[SCChatViewControllerV3 operaPresenterDidCancelDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547324(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 1;
  return;
}



/* Entry: 106547338; end: 106547347; -[SCChatViewControllerV3 operaPresenterWillBeginAnimatingToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547338(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 0;
  return;
}



/* Entry: 106547348; end: 106547357; -[SCChatViewControllerV3 operaPresenterDidFailToPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547348(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 0;
  return;
}



/* Entry: 106547358; end: 106547367; -[SCChatViewControllerV3 operaPresenterDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547358(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be6dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterDidDisappear_1125790d8);
  return;
}



/* Entry: 106547368; end: 106547377; -[SCChatViewControllerV3 operaPresenterDidTearDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547368(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 0;
  return;
}



/* Entry: 106547378; end: 10654738b; -[SCChatViewControllerV3 operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547378(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a390) = 1;
  return;
}



/* Entry: 10654738c; end: 10654738f; -[SCChatViewControllerV3 operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10654738c(void)

{
  return;
}



/* Entry: 106547390; end: 10654742b; -[SCChatViewControllerV3 didPressCreateAvatarButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106547390(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a238;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126af678;
    _objc_alloc(PTR_PTR_1126af678);
    func_0x00010c04a940();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}


