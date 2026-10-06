/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079e1abc; end: 1079e1adf;  */

void FUN_1079e1abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e1acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1079e1ae0; end: 1079e1c2f; -[SCRemoteStoriesDataProvider fetchPublicStoryWithUserId:ignoreBlockerStories:completionQueue:completion:] */

void FUN_1079e1ae0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1079e1c30;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_48 = param_6;
    func_0x00010007380c(param_5,&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126d5c10;
    _objc_alloc();
    func_0x00010c05b480();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e1c30; end: 1079e1c53;  */

void FUN_1079e1c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1079e1c54; end: 1079e1da3; -[SCRemoteStoriesDataProvider fetchPublicStoriesWithUserIds:ignoreBlockerStories:completionQueue:completion:] */

void FUN_1079e1c54(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != (undefined *)0x0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1079e1da4;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_6);
      puStack_48 = param_6;
      func_0x00010007380c(param_5,&puStack_68);
      puVar2 = puStack_48;
    }
    else {
      puVar2 = PTR_PTR_1126d5c10;
      _objc_alloc();
      func_0x00010c05c380();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain();
      func_0x00010c0f7fc0(uVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e1da4; end: 1079e1dc7;  */

void FUN_1079e1da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e1db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1079e1dc8; end: 1079e1f2f; -[SCRemoteStoriesDataProvider fetchStoryRemotelyWithUserId:ignoreBlockerStories:source:completionQueue:completion:] */

void FUN_1079e1dc8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1079e1f30;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_7);
    puStack_58 = param_7;
    func_0x00010007380c(param_6,&puStack_78);
    puVar2 = puStack_58;
  }
  else {
    puVar2 = PTR_PTR_1126d5c10;
    _objc_alloc();
    func_0x00010c05b480();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e1f30; end: 1079e1f53;  */

void FUN_1079e1f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e1f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1079e1f54; end: 1079e204b; -[SCRemoteStoriesDataProvider fetchStoriesWithStoryIds:completionQueue:completion:] */

void FUN_1079e1f54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126d5c10;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04dd40();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1079e204c;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 1079e204c; end: 1079e205b;  */

void FUN_1079e204c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be148b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchStoriesWithProgress_isDeep_112562bc8,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1079e205c; end: 1079e2173; -[SCRemoteStoriesDataProvider fetchAndStoreStoryFromRemoteWithUserId:ignoreBlockerStories:source:] */

void FUN_1079e205c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d5c10;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05b480(puVar2,param_2,param_3,param_4,1,param_5,uVar3,
                        &PTR___NSConcreteGlobalBlock_1109f40b8);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1079e2178;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    puStack_48 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_70);
    _objc_release(puStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e2174; end: 1079e2187;  */

void FUN_1079e2174(void)

{
  return;
}



/* Entry: 1079e2188; end: 1079e2337; -[SCRemoteStoriesDataProvider _fetchStoriesWithProgress:isDeepLinkPublicStory:] */

void FUN_1079e2188(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1079e2338;
  puStack_88 = &UNK_1109f40d8;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  ppuVar1 = &puStack_a0;
  lStack_80 = param_3;
  uStack_70 = param_4;
  _objc_retainBlock();
  lVar2 = param_3;
  func_0x00010c259d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c259d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar1);
    func_0x00010c25b4c0(uVar4);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(lStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e2338; end: 1079e241b;  */

void FUN_1079e2338(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf9fb40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1079e241c; end: 1079e244b;  */

void FUN_1079e241c(long param_1,undefined8 param_2)

{
  func_0x00010be94d60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010be15290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchUnresolvedStoriesRemotelyW_112562e40,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 1079e244c; end: 1079e2457;  */

void FUN_1079e244c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e2454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1079e2458; end: 1079e263f; -[SCRemoteStoriesDataProvider _resolveStoriesLocallyWithProgress:summaryInfoMap:] */

void FUN_1079e2458(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
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
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010c259d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = (uint)auStack_f0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_PTR_1126d5000;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x24 = *(long *)(lStack_128 + unaff_x28 * 8);
        lVar11 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 == 0) {
          unaff_x25 = *(undefined **)(param_1 + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          unaff_x24 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = PTR_PTR_1126d5c18;
          _objc_alloc();
          func_0x00010c27dd80();
          func_0x00010c04f7a0();
          _objc_release(unaff_x24);
        }
        if (unaff_x25 != (undefined *)0x0) {
          func_0x00010c13ade0(param_3);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      uVar10 = (uint)auStack_f0;
      lVar2 = lVar1;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1079e2640;
  lStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = lVar1;
  lStack_158 = param_1;
  lStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puVar3 = (undefined1 *)puVar9;
  func_0x00010c282300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined1 *)0x0) {
    func_0x00010bf436e0(puVar9);
  }
  else {
    lVar11 = *(long *)(lVar2 + 0x20);
    puVar4 = puVar3;
    func_0x00010bf00560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar1 = lVar11;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010bf436e0(puVar9);
    }
    else {
      _objc_initWeak(auStack_198,lVar2);
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_1079e292c;
      puStack_1b0 = &UNK_110853590;
      _objc_retain(puVar9);
      puStack_1a8 = (undefined1 *)puVar9;
      _objc_copyWeak(auStack_1a0,auStack_198);
      ppuVar5 = &puStack_1c8;
      _objc_retainBlock(ppuVar5);
      puVar4 = (undefined1 *)puVar9;
      func_0x00010bf09bc0();
      puVar8 = (undefined1 *)puVar9;
      if ((uVar10 & (uint)puVar4) == 1) {
        uVar6 = *(undefined8 *)(lVar2 + 0x18);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe6660(puVar9);
        func_0x00010c247520(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(lVar2 + 0x38);
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa9960(uVar6);
      }
      else {
        puVar4 = (undefined1 *)puVar9;
        func_0x00010bf09bc0();
        uVar6 = *(undefined8 *)(lVar2 + 0x18);
        if ((int)puVar4 == 0) {
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe6660(puVar9);
          func_0x00010c247520(puVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(lVar2 + 0x38);
          func_0x00010c11de00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaa6a0(uVar6);
        }
        else {
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe6660(puVar9);
          func_0x00010c247520(puVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(lVar2 + 0x38);
          func_0x00010c11de00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaa8c0(uVar6);
        }
      }
      _objc_release(uVar7);
      _objc_release(puVar8);
      _objc_release(uVar6);
      _objc_release(ppuVar5);
      _objc_destroyWeak(auStack_1a0);
      _objc_release(puStack_1a8);
      _objc_destroyWeak(auStack_198);
    }
    _objc_release(lVar11);
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  return;
}



/* Entry: 1079e2640; end: 1079e292b; -[SCRemoteStoriesDataProvider _fetchUnresolvedStoriesRemotelyWithProgress:isDeepLinkPublicStory:] */

void FUN_1079e2640(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c282300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010bf436e0(param_3);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010bf00560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar7;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010bf436e0(param_3);
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1079e292c;
      puStack_80 = &UNK_110853590;
      _objc_retain(param_3);
      lStack_78 = param_3;
      _objc_copyWeak(auStack_70,auStack_68);
      ppuVar3 = &puStack_98;
      _objc_retainBlock(ppuVar3);
      lVar2 = param_3;
      func_0x00010bf09bc0();
      lVar6 = param_3;
      if ((param_4 & (uint)lVar2) == 1) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe6660(param_3);
        func_0x00010c247520(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa9960(uVar4);
      }
      else {
        lVar2 = param_3;
        func_0x00010bf09bc0();
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        if ((int)lVar2 == 0) {
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe6660(param_3);
          func_0x00010c247520(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c11de00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaa6a0(uVar4);
        }
        else {
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe6660(param_3);
          func_0x00010c247520(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c11de00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaa8c0(uVar4);
        }
      }
      _objc_release(uVar5);
      _objc_release(lVar6);
      _objc_release(uVar4);
      _objc_release(ppuVar3);
      _objc_destroyWeak(auStack_70);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e292c; end: 1079e29b3;  */

void FUN_1079e292c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf9fb40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      func_0x00010bf9fb40(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010be94a00(lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079e29b4; end: 1079e2ad7; -[SCRemoteStoriesDataProvider _resolveFetchedStories:progress:] */

void FUN_1079e29b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c121840(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e2ad8; end: 1079e2bcb;  */

void FUN_1079e2ad8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf9fb40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1079e2bcc; end: 1079e2bdb;  */

void FUN_1079e2bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resolveFetchedStories_viewState_112582c28,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1079e2bdc; end: 1079e2d13; -[SCRemoteStoriesDataProvider _resolveFetchedStories:viewStateMap:progress:] */

void FUN_1079e2bdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 *puStack_328;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
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
  
  puVar13 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar14 = auStack_d8;
  uVar15 = 0x10;
  lVar16 = param_3;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_110;
    do {
      lVar19 = 0;
      do {
        if (*plStack_110 != lVar18) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be94a40(param_1);
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      puVar14 = auStack_d8;
      uVar15 = 0x10;
      lVar16 = param_3;
      puVar13 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  func_0x00010bf436e0(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(uVar15);
  puVar1 = (undefined1 *)puVar13;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)puVar13;
    func_0x00010c25b720();
    puStack_2f8 = PTR_PTR_1126c2118;
    lVar18 = param_3;
    if (puVar2 < (undefined1 *)0x2) {
      puStack_2f0 = PTR_PTR_1126d5c20;
      _objc_alloc();
      puVar2 = (undefined1 *)puVar13;
      func_0x00010c259cc0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined1 *)puVar13;
      func_0x00010c25b340(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05bc60();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puStack_2f8 = PTR_PTR_1126c2118;
      func_0x00010be83d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb8500();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar2 != (undefined1 *)0x6) goto LAB_1079e33d0;
      func_0x00010bebc360(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23ce20();
      _objc_retainAutoreleasedReturnValue();
      puStack_2f0 = (undefined *)0x0;
    }
    _objc_release(lVar18);
    puVar2 = (undefined1 *)puVar13;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(ulong *)(param_3 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf92780();
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar14);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar21 = 0.0;
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    if (puVar3 == (undefined1 *)0x0) {
      dVar23 = 0.0;
      dVar25 = 0.0;
      dVar27 = 0.0;
    }
    else {
      dVar23 = 0.0;
      dVar25 = 0.0;
      dVar27 = 0.0;
      do {
        puVar20 = (undefined1 *)0x0;
        dVar24 = dVar23;
        dVar26 = dVar25;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(puVar2);
          }
          uVar17 = *(undefined8 *)((long)puVar20 * 8);
          uVar12 = uVar17;
          func_0x00010c26f2a0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9c720();
          dVar22 = dVar21;
          _objc_release(uVar12);
          dVar23 = dVar21;
          if (dVar21 <= dVar24) {
            dVar23 = dVar24;
          }
          uVar12 = uVar17;
          func_0x00010c15f2e0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar12);
          func_0x00010c26f2a0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          dVar21 = dVar22;
          _objc_release(uVar17);
          dVar25 = dVar22;
          if (puVar7 == (undefined1 *)0x0) {
            func_0x00010befa120(puVar6);
            dVar25 = dVar26;
            dVar27 = dVar22;
          }
          puVar20 = puVar20 + 1;
          dVar24 = dVar23;
          dVar26 = dVar25;
        } while (puVar3 != puVar20);
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar3 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar3;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x000100aad290();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = PTR_PTR_1126d5358;
      _objc_alloc();
      puVar10 = puVar6;
      func_0x00010c0dfd20(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f4380();
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126d5358;
      _objc_alloc();
      func_0x00010c0f43a0();
      _objc_release(puVar9);
    }
    puVar9 = PTR_PTR_1126d5360;
    _objc_alloc();
    if ((uVar5 & 1) == 0) {
      puStack_328 = puVar3;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c720();
      dVar23 = dVar21;
    }
    func_0x00010bf529e0(puVar2);
    puVar11 = puVar3;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x00010c04dce0(dVar23,dVar21,dVar27,dVar25,0);
    _objc_release(puVar11);
    if ((uVar5 & 1) == 0) {
      _objc_release(puStack_328);
    }
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar20);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar6 = PTR_PTR_1126d5c18;
    _objc_alloc();
    func_0x00010c25b720(puVar13);
    func_0x00010c04f7a0();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x30));
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x28));
    func_0x00010c13ade0(uVar15);
    uVar12 = uVar15;
    func_0x00010c234c60();
    if ((int)uVar12 != 0) {
      uVar12 = *(undefined8 *)(param_3 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar9);
      _objc_retain(puVar1);
      _objc_retain(puVar13);
      _objc_retain(puStack_2f0);
      uVar17 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8500(uVar12);
      _objc_release(uVar17);
      _objc_release(uVar12);
      _objc_release(puStack_2f0);
      _objc_release(puVar13);
      _objc_release(puVar1);
      _objc_release(puVar9);
    }
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2f8);
  }
LAB_1079e33d0:
  _objc_release(puVar1);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)((long)puVar13 + 0x20);
  _objc_retain(param_2);
  func_0x00010c27dd80(uVar12);
  uVar15 = *(undefined8 *)((long)puVar13 + 0x30);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084ee948(param_2,uVar12,puVar6,0,0,0,0,0);
  _objc_release(puVar6);
  _objc_release(uVar15);
  func_0x0001084f0ae4(param_2,*(undefined8 *)((long)puVar13 + 0x38));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1079e2d14; end: 1079e3433; -[SCRemoteStoriesDataProvider _resolveFetchedStory:viewStateMap:progress:] */

void FUN_1079e2d14(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulong uStack_208;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c25b720();
    puStack_1d8 = PTR_PTR_1126c2118;
    lVar4 = param_1;
    if (uVar2 < 2) {
      puStack_1d0 = PTR_PTR_1126d5c20;
      _objc_alloc();
      uVar2 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c25b340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05bc60();
      _objc_release(uVar3);
      _objc_release(uVar2);
      puStack_1d8 = PTR_PTR_1126c2118;
      func_0x00010be83d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb8500();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar2 != 6) goto LAB_1079e33d0;
      func_0x00010bebc360(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23ce20();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d0 = (undefined *)0x0;
    }
    _objc_release(lVar4);
    uVar2 = param_3;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf92780();
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(param_4);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar18 = 0.0;
    _objc_retain(uVar2);
    uVar7 = uVar2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (uVar7 == 0) {
      dVar20 = 0.0;
      dVar22 = 0.0;
      dVar24 = 0.0;
    }
    else {
      dVar20 = 0.0;
      dVar22 = 0.0;
      dVar24 = 0.0;
      do {
        uVar17 = 0;
        dVar21 = dVar20;
        dVar23 = dVar22;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(uVar2);
          }
          uVar16 = *(undefined8 *)(uVar17 * 8);
          uVar14 = uVar16;
          func_0x00010c26f2a0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9c720();
          dVar19 = dVar18;
          _objc_release(uVar14);
          dVar20 = dVar18;
          if (dVar18 <= dVar21) {
            dVar20 = dVar21;
          }
          uVar14 = uVar16;
          func_0x00010c15f2e0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar14);
          func_0x00010c26f2a0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          dVar18 = dVar19;
          _objc_release(uVar16);
          dVar22 = dVar19;
          if (lVar8 == 0) {
            func_0x00010befa120(puVar6);
            dVar22 = dVar23;
            dVar24 = dVar19;
          }
          uVar17 = uVar17 + 1;
          dVar21 = dVar20;
          dVar23 = dVar22;
        } while (uVar7 != uVar17);
        uVar7 = uVar2;
        func_0x00010bf52a60();
      } while (uVar7 != 0);
    }
    _objc_release(uVar2);
    uVar7 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar7;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x000100aad290();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126d5358;
      _objc_alloc();
      puVar12 = puVar6;
      func_0x00010c0dfd20(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f4380();
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126d5358;
      _objc_alloc();
      func_0x00010c0f43a0();
      _objc_release(puVar11);
    }
    puVar11 = PTR_PTR_1126d5360;
    _objc_alloc();
    if ((uVar3 & 1) == 0) {
      uStack_208 = uVar7;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c720();
      dVar20 = dVar18;
    }
    func_0x00010bf529e0(uVar2);
    uVar13 = uVar7;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x00010c04dce0(dVar20,dVar18,dVar24,dVar22,0);
    _objc_release(uVar13);
    if ((uVar3 & 1) == 0) {
      _objc_release(uStack_208);
    }
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar17);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126d5c18;
    _objc_alloc();
    func_0x00010c25b720(param_3);
    func_0x00010c04f7a0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c13ade0(param_5);
    uVar14 = param_5;
    func_0x00010c234c60();
    if ((int)uVar14 != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar11);
      _objc_retain(uVar1);
      _objc_retain(param_3);
      _objc_retain(puStack_1d0);
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8500(uVar14);
      _objc_release(uVar16);
      _objc_release(uVar14);
      _objc_release(puStack_1d0);
      _objc_release(param_3);
      _objc_release(uVar1);
      _objc_release(puVar11);
    }
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1d8);
  }
LAB_1079e33d0:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c27dd80(uVar16);
  uVar14 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084ee948(param_2,uVar16,puVar6,0,0,0,0,0);
  _objc_release(puVar6);
  _objc_release(uVar14);
  func_0x0001084f0ae4(param_2,*(undefined8 *)(param_3 + 0x38));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1079e3434; end: 1079e3537;  */

void FUN_1079e3434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c27dd80(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084ee948(param_2,uVar4,puVar2,0,0,0,0,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x0001084f0ae4(param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1079e3538; end: 1079e353b;  */

void FUN_1079e3538(void)

{
  return;
}



/* Entry: 1079e353c; end: 1079e35d3; -[SCRemoteStoriesDataProvider _publicUserPlaybackSequenceWithRemoteStory:outgoingSequence:viewStateMap:] */

void FUN_1079e353c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf82560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x000107a87528(param_4,0,0,param_5,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e35d4; end: 1079e36bf; -[SCRemoteStoriesDataProvider _singleSnapPlaybackSequenceWithRemoteStory:] */

void FUN_1079e35d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_107a8673c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126cc4e8;
  _objc_alloc(PTR_PTR_1126cc4e8);
  uVar2 = param_3;
  func_0x00010bf82560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04d880(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079e36c0; end: 1079e36c7; -[SCRemoteStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_1079e36c0(void)

{
  return 0;
}



/* Entry: 1079e36c8; end: 1079e376f; -[SCRemoteStoriesDataProvider .cxx_destruct] */

void FUN_1079e36c8(long param_1)

{
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



/* Entry: 1079e3770; end: 1079e3ac3; -[SCRemoteStoriesDataProviderCreator initWithStoriesDataCoordinator:friendStoriesPlaybackDataProvider:mixerNetworkRequester:snapReadReceiptCoordinator:grapheneMetricsEmitter:circumstanceEngine:adConfigProvider:networkConnectivityMonitor:locationProvider:storiesConfigProvider:docObjectContext:adRenderDataParser:discoverFeedDataMutator:discoverFeedDataFetcher:contentObjectResolver:] */

undefined8 *
FUN_1079e3770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f92d0;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
  }
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



/* Entry: 1079e3ac4; end: 1079e3b23; -[SCRemoteStoriesDataProviderCreator createRemoteStoriesDataProvider] */

void FUN_1079e3ac4(void)

{
  _objc_alloc(PTR_PTR_1126d5c28);
  func_0x00010c04cfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079e3b24; end: 1079e3bef; -[SCRemoteStoriesDataProviderCreator .cxx_destruct] */

void FUN_1079e3b24(long param_1)

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



/* Entry: 1079e3bf0; end: 1079e3dcb; -[SCRemoteStoriesFetchProgress initWithUserId:ignoreBlockerStories:shouldStoreInDatabase:source:completionQueue:completion:] */

undefined8 *
FUN_1079e3bf0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f92d8;
  puVar2 = &uStack_70;
  puVar7 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_70 = param_1;
  _objc_msgSendSuper2();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[4];
    puVar2[4] = puVar3;
    _objc_release(uVar8);
    *(undefined1 *)(puVar2 + 3) = 1;
    *(undefined1 *)((long)puVar2 + 0x19) = param_4;
    *(undefined1 *)((long)puVar2 + 0x1a) = param_5;
    _objc_retain(param_6);
    uVar8 = puVar2[5];
    puVar2[5] = param_6;
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lVar4 = puVar2[4];
    func_0x00010bf529e0();
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[1];
    puVar2[1] = puVar3;
    _objc_release(uVar8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1079e3dcc;
    puStack_88 = &UNK_110854320;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_8);
    uStack_78 = param_8;
    _objc_retainBlock();
    uVar8 = puVar2[2];
    puVar2[2] = ppuVar5;
    _objc_release(uVar8);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1079e3dcc;
  uStack_d0 = param_8;
  uStack_c8 = param_7;
  uStack_c0 = param_6;
  lStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(lVar4);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x1079e3e94;
  puStack_f0 = &UNK_11084a9e8;
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  _objc_retain(uVar1);
  puStack_e8 = puVar7;
  lStack_e0 = lVar4;
  uStack_d8 = uVar1;
  _objc_retain(lVar4);
  _objc_retain(puVar7);
  func_0x00010007380c(uVar8,&puStack_108);
  _objc_release(lStack_e0);
  _objc_release(puStack_e8);
  _objc_release(uStack_d8);
  _objc_release(lVar4);
  _objc_release(puVar7);
  return puVar7;
}



/* Entry: 1079e3dcc; end: 1079e3eff;  */

void FUN_1079e3dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1079e3e94;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079e3f00; end: 1079e4083; -[SCRemoteStoriesFetchProgress initWithUserIds:ignoreBlockerStories:source:completionQueue:completion:] */

undefined8 *
FUN_1079e3f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f92d8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 3) = 1;
    *(undefined1 *)((long)puVar1 + 0x19) = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar1[4]);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1079e4084;
    puStack_68 = &UNK_110854320;
    _objc_retain(param_6);
    uStack_60 = param_6;
    _objc_retain(param_7);
    uStack_58 = param_7;
    _objc_retainBlock();
    uVar2 = puVar1[2];
    puVar1[2] = ppuVar4;
    _objc_release(uVar2);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079e4084; end: 1079e414b;  */

void FUN_1079e4084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079e414c;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  _objc_retain(uVar2);
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079e414c; end: 1079e418f;  */

void FUN_1079e414c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1109f4148);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),uVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e4190; end: 1079e4197;  */

void FUN_1079e4190(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c262930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_summaryInfo_112676470);
  return;
}



/* Entry: 1079e4198; end: 1079e4317; -[SCRemoteStoriesFetchProgress initWithStoryIds:ignoreBlockerStories:source:completionQueue:completion:] */

undefined8 *
FUN_1079e4198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f92d8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((long)puVar1 + 0x19) = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar1[4]);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1079e4318;
    puStack_68 = &UNK_110854320;
    _objc_retain(param_6);
    uStack_60 = param_6;
    _objc_retain(param_7);
    uStack_58 = param_7;
    _objc_retainBlock();
    uVar2 = puVar1[2];
    puVar1[2] = ppuVar4;
    _objc_release(uVar2);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079e4318; end: 1079e43df;  */

void FUN_1079e4318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079e43e0;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079e43e0; end: 1079e43f3;  */

void FUN_1079e43e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079e43f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079e43f4; end: 1079e446b; -[SCRemoteStoriesFetchProgress resolveStory:] */

void FUN_1079e43f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c262920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e446c; end: 1079e45bf; -[SCRemoteStoriesFetchProgress unresolvedStoryIds] */

void FUN_1079e446c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        func_0x00010befa120(puVar2);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 0x10) != 0) {
    puVar5 = puVar2;
    func_0x00010be94f60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(puVar2 + 0x10) + 0x10))(*(long *)(puVar2 + 0x10),puVar5,0);
    uVar6 = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1079e45c0; end: 1079e461b; -[SCRemoteStoriesFetchProgress complete] */

void FUN_1079e45c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = param_1;
    func_0x00010be94f60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1079e461c; end: 1079e465f; -[SCRemoteStoriesFetchProgress failWithError:] */

void FUN_1079e461c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1079e4660; end: 1079e46bf; -[SCRemoteStoriesFetchProgress _resolvedStoriesList] */

void FUN_1079e4660(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079e46c0;
  puStack_20 = &UNK_1109f4168;
  lStack_18 = param_1;
  func_0x00010bf43280(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079e46c0; end: 1079e46cf;  */

void FUN_1079e46c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_objectForKeyedSubscript__112615a50
             ,param_2);
  return;
}



/* Entry: 1079e46d0; end: 1079e46d7; -[SCRemoteStoriesFetchProgress storyIds] */

undefined8 FUN_1079e46d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079e46d8; end: 1079e46df; -[SCRemoteStoriesFetchProgress areUserIds] */

undefined1 FUN_1079e46d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1079e46e0; end: 1079e46e7; -[SCRemoteStoriesFetchProgress ignoreBlockerStories] */

undefined1 FUN_1079e46e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 1079e46e8; end: 1079e46ef; -[SCRemoteStoriesFetchProgress source] */

undefined8 FUN_1079e46e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079e46f0; end: 1079e46f7; -[SCRemoteStoriesFetchProgress shouldStoreInDatabase] */

undefined1 FUN_1079e46f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 1079e46f8; end: 1079e473f; -[SCRemoteStoriesFetchProgress .cxx_destruct] */

void FUN_1079e46f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079e4740; end: 1079e47a3; -[SCSingleSnapStoriesDataProvider init] */

undefined1 * FUN_1079e4740(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f92e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079e47a4; end: 1079e485b; -[SCSingleSnapStoriesDataProvider insertSingleSnapStoryWithStoryId:displayName:discoverMetadata:storySnaps:] */

void FUN_1079e47a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc4e8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04d880();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079e485c; end: 1079e4863; -[SCSingleSnapStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_1079e485c(void)

{
  return 0;
}



/* Entry: 1079e4864; end: 1079e486b; -[SCSingleSnapStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

undefined8 FUN_1079e4864(void)

{
  return 0;
}



/* Entry: 1079e486c; end: 1079e4873; -[SCSingleSnapStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_1079e486c(void)

{
  return 0;
}



/* Entry: 1079e4874; end: 1079e487b; -[SCSingleSnapStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_1079e4874(void)

{
  return 0;
}



/* Entry: 1079e487c; end: 1079e4883; -[SCSingleSnapStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_1079e487c(void)

{
  return 0;
}



/* Entry: 1079e4884; end: 1079e488b; -[SCSingleSnapStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

void FUN_1079e4884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1079e488c; end: 1079e4893; -[SCSingleSnapStoriesDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e488c(void)

{
  return 0;
}



/* Entry: 1079e4894; end: 1079e489b; -[SCSingleSnapStoriesDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e4894(void)

{
  return 0;
}



/* Entry: 1079e489c; end: 1079e4a3b; -[SCSingleSnapStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1079e489c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x00010c25b340(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1079e4a3c; end: 1079e4a3f; -[SCSingleSnapStoriesDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_1079e4a3c(void)

{
  return;
}



/* Entry: 1079e4a40; end: 1079e4a4b; -[SCSingleSnapStoriesDataProvider .cxx_destruct] */

void FUN_1079e4a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079e4a4c; end: 1079e4b3f; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider initWithDiscoverFeedPublicUserStories:cachedReadReceiptViewStateProvider:grapheneRegistry:storiesConfigProvider:] */

undefined8 *
FUN_1079e4a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f92e8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c6988;
    _objc_alloc();
    func_0x00010c00cf80();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    func_0x00010bede300(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079e4b40; end: 1079e4c83; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider initWithLazyStoriesDataCoordinator:lazyDocObjectContext:snapReadReceiptCoordinator:discoverFeedPublicUserStories:cachedReadReceiptViewStateProvider:storiesConfigProvider:circumstanceEngine:grapheneRegistry:creatorSubscriptionsInfoProvider:plusFeatureGating:] */

long FUN_1079e4b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010c00cf40(param_1,param_2,param_6,param_7,param_10,param_8);
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126cf118;
    _objc_alloc();
    func_0x00010c021f80();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1079e4c84; end: 1079e4cb3; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider setFriendStoriesPlaybackDataProvider:] */

void FUN_1079e4c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e4cb4; end: 1079e4ce3; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider setRemoteStoriesPlaybackDataProvider:] */

void FUN_1079e4cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e4ce4; end: 1079e4d77; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider _updatePublicUserStoriesIds:] */

void FUN_1079e4ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1079e4d78;
  puStack_30 = &UNK_1109f4198;
  lStack_28 = param_1;
  func_0x000100504554(param_3,&puStack_48);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e4d78; end: 1079e4d87;  */

void FUN_1079e4d78(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_storyIdForDiscoverFeedStory__112674160,param_2);
  return;
}



/* Entry: 1079e4d88; end: 1079e4dbf; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider _insertPublicUserStoriesIds:] */

void FUN_1079e4d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c174be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079e4dc0; end: 1079e4dc3; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider insertAdditionalDiscoverFeedStories:] */

void FUN_1079e4dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_insertDiscoverFeedStories__1125f73d8);
  return;
}



/* Entry: 1079e4dc4; end: 1079e4dc7; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_1079e4dc4(void)

{
  return;
}



/* Entry: 1079e4dc8; end: 1079e4e6b; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider insertDiscoverFeedStories:] */

void FUN_1079e4dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c066720(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1079e4e6c;
  puStack_40 = &UNK_1109f4198;
  uVar1 = param_3;
  lStack_38 = param_1;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  func_0x00010be3c840(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1079e4e6c; end: 1079e4e7b;  */

void FUN_1079e4e6c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_storyIdForDiscoverFeedStory__112674160,param_2);
  return;
}



/* Entry: 1079e4e7c; end: 1079e4e83; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider storyIdForDiscoverFeedStory:] */

void FUN_1079e4e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_storyIdForDiscoverFeedStory__112674160);
  return;
}



/* Entry: 1079e4e84; end: 1079e4e8b; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider fetchPlaybackMetadataMapForStoryIds:] */

void FUN_1079e4e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa9490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchPlaybackMetadataMapForStory_1125c7ec8);
  return;
}



/* Entry: 1079e4e8c; end: 1079e4e93; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider setViewLocationOverride:] */

void FUN_1079e4e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1079e4e94; end: 1079e50ab; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1079e4e94(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4b900();
      puVar6 = puVar3;
      if (iVar2 == 0) {
        puVar6 = puVar4;
      }
      func_0x00010befa120(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010bfa9480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(uVar9);
  func_0x00010c2589a0(uVar8);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d3c80(uVar9);
  func_0x00010bef7f60();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1079e50ac; end: 1079e510f;  */

void FUN_1079e50ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d3c80(uVar1);
  func_0x00010bef7f60();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e5110; end: 1079e529f; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

void FUN_1079e5110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  if ((int)uVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c293c40(lVar4,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c293c40(lVar4,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        puVar3 = (undefined *)0x0;
        goto LAB_1079e5268;
      }
    }
    lVar1 = 0x2b;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
    }
    puVar3 = PTR_PTR_1126cc618;
    _objc_alloc(PTR_PTR_1126cc618);
    lVar5 = lVar4;
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf82560(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c25b340(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010c073b60(lVar4);
    lVar9 = lVar4;
    func_0x00010c073b40(lVar4);
    func_0x00010c05b080(puVar3,param_2,lVar5,lVar6,lVar7,lVar1,lVar8,lVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c293c40(puVar3,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1079e5268:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079e52a0; end: 1079e5303; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

void FUN_1079e52a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c14bc60(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e5304; end: 1079e53cb; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

void FUN_1079e5304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf62620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = 0x2b;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
    }
    puVar5 = PTR_PTR_1126d5bf0;
    _objc_alloc(PTR_PTR_1126d5bf0);
    lVar3 = lVar2;
    func_0x00010bf622e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c25b340(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007fe0(puVar5,param_2,lVar3,lVar4,lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079e53cc; end: 1079e53d3; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_1079e53cc(void)

{
  return 0;
}



/* Entry: 1079e53d4; end: 1079e53db; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_1079e53d4(void)

{
  return 0;
}



/* Entry: 1079e53dc; end: 1079e53e3; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

void FUN_1079e53dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_bundleStoryPlaybackSequenceByBun_1125a6ca8);
  return;
}



/* Entry: 1079e53e4; end: 1079e53eb; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e53e4(void)

{
  return 0;
}



/* Entry: 1079e53ec; end: 1079e545f; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

void FUN_1079e53ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  lVar1 = 8;
  if ((int)uVar2 == 0) {
    lVar1 = 0x18;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c23ce00(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079e5460; end: 1079e5493; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider storyAvailability] */

long FUN_1079e5460(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c259180(lVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c259180(lVar2);
  return lVar2 + lVar1;
}



/* Entry: 1079e5494; end: 1079e54db; -[SCStoriesFriendAndPublicUserStoriesPlaybackDataProvider .cxx_destruct] */

void FUN_1079e5494(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079e54dc; end: 1079e57db; -[SCStoriesPlaybackDataProvider initWithLazyStoriesDataCoordinator:lazyDocObjectContext:snapReadReceiptCoordinator:cachedReadReceiptViewStateProvider:storiesConfigProvider:circumstanceEngine:creatorSubscriptionsInfoProvider:plusFeatureGating:] */

undefined8 *
FUN_1079e54dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126f92f0;
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
    uVar2 = puVar1[8];
    puVar1[8] = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa0b80();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      _objc_initWeak(auStack_78,puVar1);
      uVar2 = param_9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf5ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_78);
      uVar3 = uVar4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puVar1[9];
      puVar1[9] = uVar3;
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    uVar4 = puVar1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1270;
    func_0x00010c1342e0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f360();
    *(char *)(puVar1 + 10) = (char)uVar2;
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
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



/* Entry: 1079e57dc; end: 1079e58bb;  */

void FUN_1079e57dc(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1079e5890;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_1);
    lStack_30 = param_1;
    _objc_retain(param_2);
    uStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
    _objc_release(lStack_30);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1079e58bc; end: 1079e5903; -[SCStoriesPlaybackDataProvider dealloc] */

void FUN_1079e58bc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x48));
  puStack_28 = PTR_PTR_1126f92f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1079e5904; end: 1079e5907; -[SCStoriesPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_1079e5904(void)

{
  return;
}



/* Entry: 1079e5908; end: 1079e5a17; -[SCStoriesPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1079e5908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25b360(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e5a18; end: 1079e5aaf;  */

void FUN_1079e5a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079e5ab0; end: 1079e5e2f; -[SCStoriesPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

void FUN_1079e5ab0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010c08fa60();
  if (lVar11 == 0) {
    lVar11 = 0;
    goto LAB_1079e5de0;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5820();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0e60();
    _objc_release(uVar3);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  func_0x00010094ff70(lVar4,puVar5,*(undefined1 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(puVar5);
  _objc_release(lVar4);
  if (lVar6 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x0001084e6550(lVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(puVar5);
    _objc_release(lVar4);
    if (lVar7 == 0) {
      lVar9 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x0001084eb4fc(lVar9,puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar11;
      lVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(puVar5);
      _objc_release(lVar9);
      if (lVar8 == 0) {
        lVar7 = 0;
        lVar11 = 0;
        goto LAB_1079e5dc8;
      }
      lVar10 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010bf00760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = 1;
      lVar11 = lVar8;
      func_0x000107a87d24(lVar8,1,1,lVar9,*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010bf00760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = 1;
      lVar11 = lVar7;
      func_0x000107a87528(lVar7,1,1,lVar10,*(undefined8 *)(param_1 + 0x30),0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar10);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf00760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = 1;
    lVar11 = lVar6;
    FUN_107a873a0(lVar6,1,1,lVar8,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1079e5dc8:
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
LAB_1079e5de0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar4);
    lVar11 = lVar4;
    func_0x00010c08fa60();
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      uVar1 = *(ulong *)(param_3 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd5820();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x18);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b0e60();
        _objc_release(uVar3);
      }
      lVar11 = *(long *)(param_3 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x0001084e73c8(lVar11,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar11);
      lVar7 = lVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        lVar11 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar12;
        func_0x00010bf00760();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar7;
        FUN_107a87658(lVar7,1,1,uVar3,*(undefined8 *)(param_3 + 0x30));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar12);
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      lVar4 = *(long *)(lVar4 + 0x10);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar4;
      func_0x0001084e77a4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 1079e5e30; end: 1079e5ff7; -[SCStoriesPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

void FUN_1079e5e30(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5820();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0e60();
      _objc_release(uVar3);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x0001084e73c8(lVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    lVar7 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf00760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      FUN_107a87658(lVar7,1,1,uVar3,*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar8);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = *(long *)(param_3 + 0x10);
    func_0x00010c269d40(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x0001084e77a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}


