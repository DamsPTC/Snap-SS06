/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b95184; end: 105b951fb;  */

void FUN_105b95184(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bddaa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b951fc; end: 105b9521b;  */

void FUN_105b951fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 105b9521c; end: 105b95273;  */

void FUN_105b9521c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79ec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b95274; end: 105b95483; -[SCFriendsFeedViewController _cancelMenuActionSheetScopeForConversationId:isFailed:profileActionData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b95274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105b8e1e0;
  uStack_70 = 0x105b8e1f0;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105b8e1e0;
  uStack_a0 = 0x105b8e1f0;
  uStack_98 = 0;
  _objc_retain();
  _objc_retain(puVar1);
  func_0x00010c0be180(param_5);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731240);
  puVar2 = PTR_PTR_1126c2cd8;
  func_0x00010bf50820(PTR_PTR_1126c2cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23780(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b95484; end: 105b95593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b95484(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127311b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f3c0();
  if ((int)uVar4 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112730f08);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06ecc0();
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2858;
  _objc_alloc();
  func_0x00010c0f2220(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0584e0();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b95594; end: 105b95633;  */

void FUN_105b95594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b2860;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c0f2220(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c058a60();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b95634; end: 105b956b7; -[SCFriendsFeedViewController _cancelMenuActionSheetScopeForConversationIds:isFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b95634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731240);
  puVar1 = PTR_PTR_1126c2cd8;
  func_0x00010c0d1ee0(PTR_PTR_1126c2cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23780(uVar2,param_2,puVar1,param_1,param_4,0,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b956b8; end: 105b959df; -[SCFriendsFeedViewController cellHandleTapOnBitmoji:identifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b956b8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  if ((int)lVar2 == 0) {
    puVar4 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bfd5ca0();
    puVar4 = PTR_PTR_1126c2c40;
    if ((int)uVar3 == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar4);
      uVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      uVar3 = param_3;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      uVar5 = uVar1;
      func_0x00010c232440();
      if (((int)uVar5 == 0) || (uVar3 == 0)) {
        uVar5 = param_3;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf131e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar4 = PTR_PTR_1126c2cd0;
        _objc_opt_class(PTR_PTR_1126c2cd0);
        uVar6 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar4);
        uVar5 = uVar7;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar7);
        if (uVar5 != 0) {
          _objc_initWeak(auStack_78,param_1);
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_105b959e0;
          puStack_88 = &UNK_1108d91c0;
          _objc_copyWeak(auStack_80,auStack_78);
          _objc_copyWeak(auStack_a8,auStack_78);
          func_0x00010c0be180(uVar7);
          uVar8 = *(undefined8 *)(param_1 + _DAT_112731204);
          uVar6 = uVar1;
          func_0x00010bf33f20(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecb00(uVar8);
          _objc_release(uVar6);
          func_0x00010bf33ac0(*(undefined8 *)(param_1 + _DAT_112731220));
          _objc_destroyWeak(auStack_a8);
          _objc_destroyWeak(auStack_80);
          _objc_destroyWeak(auStack_78);
        }
        _objc_release(uVar5);
      }
      else {
        func_0x00010bf33da0(param_1);
      }
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf33c40(param_1);
    }
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b959e0; end: 105b95ac7;  */

void FUN_105b959e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bae0();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b95ac8; end: 105b95c8b; -[SCFriendsFeedViewController cell:didLongPressOnSnapInConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b95ac8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(puVar1);
  puVar3 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = puVar3;
  if ((int)puVar2 == 0) {
    puVar2 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    puVar2 = puVar1;
    func_0x000105bb5dc4();
    if ((int)puVar2 == 0) {
      puVar2 = puVar1;
      func_0x000105bb50e0();
      if ((int)puVar2 == 0) goto LAB_105b95c74;
      puVar2 = puVar1;
      func_0x000105bb5214(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c28f0;
      _objc_alloc(PTR_PTR_1126c28f0);
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      func_0x00010c00ae40(puVar3);
      _objc_release(puVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112731060));
    }
    else {
      func_0x00010c0cb1e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bfa3920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c0b4d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(param_1);
      _objc_release(puVar2);
      puVar2 = param_1;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
LAB_105b95c74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b95c8c; end: 105b95c8f; -[SCFriendsFeedViewController handleTapOnSnap:cell:] */

void FUN_105b95c8c(void)

{
  return;
}



/* Entry: 105b95c90; end: 105b95fbf; -[SCFriendsFeedViewController cellHandleTapOnUnopenedReceivedMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b95c90(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2ce0;
  func_0x00010bfba2e0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puVar3 = puVar2;
  func_0x00010c2b97a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x000105bb5374();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar5 = uVar1;
    func_0x000105bb54d4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar4);
    uVar5 = uVar4;
  }
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x000105bb5424();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar6 = uVar1;
    func_0x000105bb58e8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar4);
    uVar6 = uVar4;
  }
  _objc_release(uVar4);
  func_0x00010c074920(uVar1);
  uVar4 = uVar1;
  func_0x000105bb4ccc();
  if ((int)uVar4 == 0) {
    uVar4 = uVar1;
    func_0x000105bb4e38();
    if ((int)uVar4 == 0) {
      uVar4 = uVar1;
      func_0x000105bb4db8();
      if ((int)uVar4 != 0) {
        func_0x00010be53c00(param_1);
        _objc_initWeak(auStack_58,param_1);
        uVar7 = *(undefined8 *)(param_1 + _DAT_1127311d0);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        _objc_retain(uVar1);
        _objc_retain(uVar6);
        _objc_retain(uVar5);
        _objc_retain(puVar3);
        func_0x00010c109b40(uVar7);
        _objc_release(uVar7);
        _objc_release(puVar3);
        _objc_release(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    else {
      func_0x00010be53c00(param_1);
      uVar7 = *(undefined8 *)(param_1 + _DAT_1127311d0);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ba80();
      _objc_release(uVar7);
    }
  }
  else {
    func_0x00010be128e0(param_1);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105b95fc0; end: 105b9600b;  */

void FUN_105b95fc0(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9600c; end: 105b96157; -[SCFriendsFeedViewController _fetchMessageForSponsoredSnap:conversationId:messageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9600c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112730f2c);
  func_0x00010c071800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127311d0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bfa89a0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b96158; end: 105b96217;  */

void FUN_105b96158(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b96218;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b96218; end: 105b9624b;  */

void FUN_105b96218(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9624c; end: 105b9652b; -[SCFriendsFeedViewController _launchPlaybackForSponsoredSnap:cell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9624c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105b8e1e0;
    uStack_70 = 0x105b8e1f0;
    uStack_68 = 0;
    uVar1 = param_4;
    func_0x00010c29d560(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0020();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bfa3900(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa3ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar8 = (long)_DAT_112730f2c;
    lVar3 = *(long *)(param_1 + lVar8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar4 = param_4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar5 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112731204);
    uVar6 = uVar1;
    func_0x00010bf33f20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecb00(uVar7);
    _objc_release(uVar6);
    func_0x00010bdcc680(param_1);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112730f30);
    lVar3 = param_1;
    func_0x00010be6ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf233a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar8));
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9652c; end: 105b9656b;  */

void FUN_105b9652c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b9656c; end: 105b966f7; -[SCFriendsFeedViewController _prepareMediaForMessageCompletionHelperWithCell:friendsFeedCellViewModel:messageId:conversationId:isMessageReadyToDisplay:snapTapLatencyBuilder:] */

void FUN_105b9656c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _CACurrentMediaTime();
  uVar1 = param_8;
  func_0x00010c2add80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  if ((param_7 & 1) == 0) {
    func_0x000105bb4ccc();
  }
  else {
    uVar2 = param_4;
    func_0x000105bb4db8();
    uVar3 = param_4;
    func_0x000105bb4ccc();
    if ((int)uVar2 != 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105b966f8;
      puStack_88 = &UNK_110867cb8;
      _objc_retain(param_5);
      uStack_80 = param_5;
      uStack_78 = param_1;
      _objc_retain(param_3);
      uStack_70 = param_3;
      _objc_retain(param_6);
      uStack_58 = (undefined1)uVar3;
      uStack_68 = param_6;
      _objc_retain(uVar1);
      uStack_60 = uVar1;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_release(uStack_60);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_80);
      goto LAB_105b966b4;
    }
  }
  func_0x00010be53c20(param_1);
LAB_105b966b4:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b966f8; end: 105b9670b;  */

void FUN_105b966f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__cellHandleTapOnUnopenedReceived_112554a40,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 105b9670c; end: 105b96d23; -[SCFriendsFeedViewController _cellHandleTapOnUnopenedReceivedSnap:conversationId:isCampaignConversation:snapTapLatencyBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9670c(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  uVar1 = param_6;
  func_0x00010c2ac760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar15 = param_1;
  func_0x00010c10fce0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar15);
  if (lVar15 == lVar16) {
    func_0x00010be53c20(param_1);
  }
  else {
    lVar15 = (long)_DAT_112731390;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    *(long *)(param_1 + lVar15) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730f00);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142280(param_1);
    func_0x00010c0a2b20(uVar2);
    _objc_release(uVar2);
    func_0x00010c14c8a0(*(undefined8 *)(param_1 + _DAT_1127312e8));
    if (param_4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112730ec4);
      func_0x00010bf374e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c135120();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b7f68;
      func_0x00010c22b6a0(PTR_PTR_1126b7f68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1835e0();
      _objc_release(puVar4);
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    uVar5 = param_3;
    func_0x00010bfa3900();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa3ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar8 = uVar7;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2ce8;
    _objc_opt_class(PTR_PTR_1126c2ce8);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar4);
    uVar5 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar8);
    if (uVar5 == 0) {
      func_0x00010be53c20(param_1);
    }
    else {
      func_0x00010be53bc0(param_1);
      uVar10 = param_3;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c29a8;
      _objc_retain();
      _objc_opt_class(puVar4);
      uVar11 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar4);
      uVar9 = uVar10;
      if ((uVar11 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar10);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112731204);
      uVar11 = uVar9;
      func_0x00010bf33f20(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecb00(uVar2);
      _objc_release(uVar11);
      func_0x00010bf33ac0(*(undefined8 *)(param_1 + _DAT_112731220));
      lVar16 = (long)_DAT_112730f28;
      lVar15 = *(long *)(param_1 + lVar16);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar15 != 0) {
        func_0x00010be53c20(param_1);
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar16));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_105b8e1e0;
      uStack_88 = 0x105b8e1f0;
      uStack_80 = 0;
      uVar11 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      _objc_retain(uVar8);
      func_0x00010c0c0020(uVar12);
      _objc_release(uVar12);
      _objc_release(uVar11);
      puVar4 = PTR_PTR_1126c2cf8;
      func_0x00010c0fece0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfba3c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar13 = PTR_PTR_1126c2d00;
      _objc_alloc(PTR_PTR_1126c2d00);
      func_0x00010bff7220();
      puVar14 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112731394);
      *(undefined **)(param_1 + _DAT_112731394) = puVar14;
      _objc_release(uVar2);
      puVar14 = PTR_PTR_1126c2d08;
      _objc_alloc(PTR_PTR_1126c2d08);
      lVar15 = param_1;
      func_0x00010be6ddc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0054e0(puVar14);
      _objc_release(lVar15);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar16));
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar5);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
      _objc_release(uVar9);
      _objc_release(uVar10);
    }
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b96d24; end: 105b96e1f;  */

void FUN_105b96d24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c2cf0;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076ee0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c2448e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b96e20; end: 105b96ec7; -[SCFriendsFeedViewController _logFriendsFeedSnapTapAttempt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b96e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2cb0;
  _objc_retain(param_3);
  func_0x00010bfac060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b96ec8; end: 105b96f6f; -[SCFriendsFeedViewController _logFriendsFeedSnapTapFailureReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b96ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2cb0;
  _objc_retain(param_3);
  func_0x00010bfac080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b96f70; end: 105b96fd3; -[SCFriendsFeedViewController _logFriendsFeedSnapPresentAttempt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b96f70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bfac020(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b96fd4; end: 105b9701b; -[SCFriendsFeedViewController cellShouldInstallReplyButtonTouchDownRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b96fd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273103c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaf600();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105b9701c; end: 105b9701f; -[SCFriendsFeedViewController cellHandleReplyButtonTouchDown:] */

void FUN_105b9701c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginFingerDownWarmup_1125526e8);
  return;
}



/* Entry: 105b97020; end: 105b970cb; -[SCFriendsFeedViewController _beginFingerDownWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b97020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273103c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaf600();
  if ((int)uVar2 != 0) {
    lVar5 = (long)_DAT_11273134c;
    uVar3 = *(ulong *)(param_1 + lVar5);
    func_0x00010c070ea0();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + lVar5);
      func_0x00010c070400();
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar1;
        func_0x00010bfaf5c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd2f40();
        _objc_release(uVar4);
        _objc_release(uVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b970cc; end: 105b9714f; -[SCFriendsFeedViewController _commitFingerDownWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b970cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273103c);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaf600();
  if ((int)uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010bfaf5c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd08e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b97150; end: 105b971d3; -[SCFriendsFeedViewController _reclaimFingerDownWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b97150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273103c);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaf600();
  if ((int)uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010bfaf5c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123000();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b971d4; end: 105b97397; -[SCFriendsFeedViewController cellHandleReplyButtonPressed:contextSessionId:isReplyCta:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b971d4(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb6e00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126c2d10;
      _objc_opt_new(PTR_PTR_1126c2d10);
      func_0x00010c1833c0();
      func_0x00010c196b80(puVar1,param_2,5);
      func_0x00010c183220(puVar1,param_2,0xffffffffffffffff);
      func_0x00010c1831e0(puVar1,param_2,3);
      func_0x00010c183200(puVar1,param_2,9);
      puVar3 = PTR_PTR_1126b5c68;
      func_0x00010c242c40(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162000(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127311c4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar4);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126c2d18;
    _objc_opt_new(PTR_PTR_1126c2d18);
    func_0x00010c18c2a0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127311c4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    func_0x00010be61440(param_1,param_2,param_3,param_5,5);
  }
  else {
    puVar1 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1fc0(param_1,param_2,puVar1,8);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b97398; end: 105b97443; -[SCFriendsFeedViewController cellHandleSnapButtonPressed:] */

void FUN_105b97398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb6e00(param_1,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be61440(param_1,param_2,param_3,0,4);
  }
  else {
    uVar1 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bed1fc0(param_1,param_2,uVar1,9);
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b97444; end: 105b976a3; -[SCFriendsFeedViewController cellHandleCallingButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b97444(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  if ((int)lVar2 == 0) {
    puVar4 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x000105bb5b70();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 != 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      uVar5 = uVar3;
      func_0x00010bf36840(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c11e0();
      _objc_release(uVar5);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112730f84);
      uVar5 = uVar3;
      if (*(char *)(puStack_58 + 3) == '\x01') {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf36840(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf28140(uVar3);
        func_0x00010c085980(uVar6);
      }
      else {
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf36840(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf28140(uVar3);
        func_0x00010c24e0a0(uVar6);
      }
      _objc_release(uVar5);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_60,8);
    }
    _objc_release(uVar3);
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b976a4; end: 105b976bb;  */

void FUN_105b976a4(void)

{
  return;
}



/* Entry: 105b976bc; end: 105b9780b; -[SCFriendsFeedViewController cellHandleMissedCallButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b976bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)lVar2 == 0) {
    puVar3 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar5 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x000105bb5b70();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112730f84);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf36840(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b560(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b9780c; end: 105b979e7; -[SCFriendsFeedViewController cellHandleFriendshipFlashbackPressed:] */

void FUN_105b9780c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c112c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar5 = uVar4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2cd0;
  _objc_opt_class(PTR_PTR_1126c2cd0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105b979e8;
  puStack_68 = &UNK_1108d91c0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0be180(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b979e8; end: 105b97abb;  */

void FUN_105b979e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bae0();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b97abc; end: 105b97d27; -[SCFriendsFeedViewController _moveToCameraFromFeedCell:isReplyCta:navigationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b97abc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010be82d80();
  if ((uVar5 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfa3900();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = uVar4;
    func_0x00010010fab4(uVar4,PTR_DAT_1126a5088);
    uVar1 = uVar4;
    if ((int)uVar2 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_105b8e1e0;
    uStack_60 = 0x105b8e1f0;
    uStack_58 = 0;
    uVar4 = uVar1;
    func_0x00010c1409a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf920();
    _objc_release(uVar4);
    if (puStack_78[5] == 0) {
      uVar5 = param_1;
      func_0x00010be8f020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3e040(param_1);
      func_0x00010be476c0(param_1);
    }
    else {
      uVar5 = *(ulong *)(param_1 + (long)_DAT_112731044);
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf246c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar6 = (long)_DAT_112731414;
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar5;
      _objc_release(uVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + (long)_DAT_112731040));
    }
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b97d28; end: 105b97d5f;  */

void FUN_105b97d28(long param_1,undefined8 param_2)

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



/* Entry: 105b97d60; end: 105b97d63; -[SCFriendsFeedViewController _presentStreakRestoreFromFeedCell:actionModel:] */

void FUN_105b97d60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentStreakRestoreDirectFlowF_11257d4e0);
  return;
}



/* Entry: 105b97d64; end: 105b9802f; -[SCFriendsFeedViewController _presentStreakRestoreDirectFlowFromFeedCell:actionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b97d64(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2d20;
  _objc_opt_class(PTR_PTR_1126c2d20);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    uVar4 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010bf33f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    if (uVar5 != 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112731204);
      uVar4 = uVar3;
      func_0x00010bf33f20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecb00(uVar8);
      _objc_release(uVar4);
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2d28;
    _objc_opt_new(PTR_PTR_1126c2d28);
    func_0x00010c1d8620();
    func_0x00010c1ed260(puVar2);
    uVar5 = param_4;
    func_0x00010bf50280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1844c0(puVar2);
    _objc_release(uVar5);
    func_0x00010c206fa0(puVar2);
    func_0x00010c25be80(param_4);
    func_0x00010c20e2c0(puVar2);
    func_0x00010c25bf60(param_4);
    func_0x00010c20e300(puVar2);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127311c4);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
    puVar6 = PTR_PTR_1126b3590;
    _objc_alloc(PTR_PTR_1126b3590);
    func_0x00010c04e600();
    puVar7 = PTR_PTR_1126b3598;
    _objc_alloc(PTR_PTR_1126b3598);
    func_0x00010bf50280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056e20(puVar7);
    _objc_release(param_4);
    func_0x00010bf21f80(*(undefined8 *)(param_1 + _DAT_1127312a4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b98030; end: 105b9868b; -[SCFriendsFeedViewController cellHandleStoryIconPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b98030(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c29d560(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  if ((int)lVar5 == 0) {
    if (*(long *)(param_2 + _DAT_11273137c) != 0) goto LAB_105b985e4;
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + _DAT_112731440) = param_1;
    uVar2 = param_4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar11 = *(undefined8 *)(param_2 + _DAT_112731204);
    uVar2 = uVar1;
    func_0x00010bf33f20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecb00(uVar11);
    _objc_release(uVar2);
    func_0x00010bf33ac0(*(undefined8 *)(param_2 + _DAT_112731220));
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105b8e1e0;
    uStack_80 = 0x105b8e1f0;
    uStack_78 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_105b8e1e0;
    uStack_b0 = 0x105b8e1f0;
    uStack_a8 = 0;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_105b8e1e0;
    uStack_e0 = 0x105b8e1f0;
    uStack_d8 = 0;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_105b8e1e0;
    uStack_110 = 0x105b8e1f0;
    uStack_108 = 0;
    uVar2 = uVar1;
    puStack_128 = &uStack_130;
    puStack_f8 = &uStack_100;
    puStack_c8 = &uStack_d0;
    puStack_98 = &uStack_a0;
    func_0x000105bb5c04(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_105b9868c;
    puStack_148 = &UNK_1108d92a0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_105b986ec;
    puStack_178 = &UNK_1108d92d0;
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x105b9876c;
    puStack_1a8 = &UNK_1108d92d0;
    puStack_1a0 = &uStack_a0;
    puStack_198 = &uStack_130;
    puStack_170 = &uStack_a0;
    puStack_168 = &uStack_d0;
    puStack_140 = &uStack_a0;
    puStack_138 = &uStack_100;
    func_0x00010c0c0560();
    _objc_release(uVar2);
    lVar5 = puStack_98[5];
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      if (puStack_128[5] != 0) {
        uVar6 = *(undefined8 *)(param_2 + _DAT_11273116c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c2a20;
        func_0x00010c24b800(PTR_PTR_1126c2a20);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar6;
        func_0x00010bf1f320();
        _objc_release(puVar7);
        _objc_release(uVar6);
        if ((int)uVar11 != 0) {
          func_0x00010be485a0(param_2);
          goto LAB_105b9858c;
        }
      }
      lVar5 = param_2;
      func_0x00010c267f00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bfecfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      uStack_1e0 = 0;
      uStack_1d0 = 0x2020000000;
      uStack_1c8 = 0;
      uVar2 = uVar1;
      puStack_1d8 = &uStack_1e0;
      func_0x00010bf50940(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_208 = puVar3;
      uStack_200 = 0xc2000000;
      pcStack_1f8 = FUN_105b987ec;
      puStack_1f0 = &UNK_1108d9bb0;
      puStack_1e8 = &uStack_1e0;
      func_0x00010c0bcde0();
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x000107cf9bb0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bf96da0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar2;
      func_0x000107cf92c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x000100bec1f0(uVar4,uVar10);
      _objc_release(uVar10);
      _objc_release(uVar2);
      if ((((uint)*(byte *)(puStack_1d8 + 3) | (uint)uVar9) & 1) == 0) {
        if (puStack_f8[5] != 0) {
          lVar5 = (long)_DAT_112731014;
          uVar11 = *(undefined8 *)(param_2 + lVar5);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c123ac0();
          _objc_release(uVar11);
          uVar10 = *(ulong *)(param_2 + _DAT_112730fdc);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar10;
          func_0x00010bf1f3c0();
          _objc_release(uVar10);
          if ((uVar2 & 1) == 0) {
            uVar11 = *(undefined8 *)(param_2 + lVar5);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1071a0();
            _objc_release(uVar11);
          }
        }
        _objc_initWeak(auStack_210,param_2);
        uVar11 = *(undefined8 *)(param_2 + _DAT_112730f88);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_218,auStack_210);
        _objc_retain(param_4);
        _objc_retain(lVar8);
        func_0x00010c25b4c0(uVar11);
        _objc_release(uVar11);
        _objc_release(lVar8);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_218);
        _objc_destroyWeak(auStack_210);
      }
      else {
        func_0x00010be48600(param_2);
      }
      _objc_release(uVar4);
      __Block_object_dispose(&uStack_1e0,8);
      _objc_release(lVar8);
    }
LAB_105b9858c:
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  else {
    uVar1 = param_4;
    func_0x00010c29d560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1fc0(param_2);
  }
  _objc_release(uVar1);
LAB_105b985e4:
  _objc_release(param_4);
  return;
}



/* Entry: 105b9868c; end: 105b986eb;  */

void FUN_105b9868c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b986ec; end: 105b987eb;  */

void FUN_105b986ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b987ec; end: 105b987ff;  */

void FUN_105b987ec(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b98800; end: 105b98867;  */

void FUN_105b98800(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b98868; end: 105b98b5b; -[SCFriendsFeedViewController _launchStoriesPlaybackForCampaign:cell:storyId:storySummaryInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b98868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [128];
  long lStack_f8;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c27dd80();
  puVar1 = PTR_PTR_1126b4d28;
  _objc_alloc();
  uVar19 = param_6;
  func_0x00010c259cc0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c04dcc0();
  _objc_release(uVar19);
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc();
  uVar19 = param_4;
  func_0x00010bf83280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar20 = param_1;
  func_0x00010be6ddc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127312b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010bff7200();
  _objc_release(uVar4);
  _objc_release(lVar20);
  _objc_release(uVar19);
  puVar26 = PTR_PTR_1126b4d48;
  _objc_alloc();
  func_0x00010bff0a00(*(undefined8 *)(param_1 + _DAT_112731440));
  puVar6 = PTR_PTR_1126b4d38;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf361c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar7 = *(long *)(param_1 + _DAT_11273128c);
  lVar16 = 0;
  puVar5 = puVar3;
  func_0x00010bf22a20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar7;
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112731288));
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar26);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar20);
  _objc_retain(puVar5);
  _objc_retain(lVar16);
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_105b8e1e0;
  uStack_1d0 = 0x105b8e1f0;
  puVar6 = puVar5;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x000107cf9cc8();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar2;
  _objc_release(puVar6);
  lVar7 = puStack_1e8[5];
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar7 = lVar20;
    func_0x00010c259560(lVar20);
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_105b992a8;
    puStack_200 = &UNK_1108d9b80;
    puStack_1f8 = &uStack_1f0;
    func_0x00010c0bf680();
    _objc_release(lVar7);
  }
  lVar18 = (long)_DAT_112730eec;
  lVar17 = *(long *)(puVar1 + lVar18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar17;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  lVar17 = lVar7;
  func_0x000100504554(lVar7,&PTR___NSConcreteGlobalBlock_1108d9b60);
  _objc_retain(lVar7);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(lVar7);
  lVar11 = lVar7;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar23 = *plStack_1b0;
    do {
      lVar25 = 0;
      do {
        if (*plStack_1b0 != lVar23) {
          _objc_enumerationMutation(lVar7);
        }
        lVar8 = *(long *)(lStack_1b8 + lVar25 * 8);
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        FUN_105b99338();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        lVar8 = lVar9;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar8;
        func_0x00010c08fa60();
        _objc_release(lVar8);
        if (lVar10 != 0) {
          lVar8 = lVar9;
          func_0x00010c2923e0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(lVar8);
        }
        _objc_release(lVar9);
        lVar25 = lVar25 + 1;
      } while (lVar11 != lVar25);
      lVar11 = lVar7;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar7);
  puVar2 = puVar6;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(lVar7);
  puVar6 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_105b99338();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar26 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010c2923e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar2);
  }
  lVar11 = puStack_1e8[5];
  func_0x00010c08fa60();
  puVar2 = (undefined *)0x0;
  if (lVar11 != 0) {
    puVar2 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar26 = puVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar26;
  func_0x00010c08fa60();
  _objc_release(puVar26);
  puVar26 = puVar6;
  func_0x00010bf529e0();
  if (puVar26 == (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    puVar26 = PTR_PTR_1126b6068;
    _objc_alloc();
    if (puVar12 == (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
      puVar21 = (undefined *)0x0;
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar21 = puVar2;
      func_0x00010c2923e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar2;
      func_0x00010c294420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar2;
      func_0x00010bf85d80(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c05c0a0();
    if (puVar12 != (undefined *)0x0) {
      _objc_release(puVar24);
      _objc_release(puVar22);
      _objc_release(puVar21);
    }
  }
  lVar23 = lVar16;
  func_0x00010bf83280();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar16;
  if (lVar23 != 0) {
    lVar11 = lVar23;
  }
  _objc_retain(lVar11);
  _objc_release(lVar23);
  puVar12 = puVar5;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  func_0x00010bf51e00();
  uVar19 = *(undefined8 *)(puVar1 + _DAT_112731444);
  *(undefined **)(puVar1 + _DAT_112731444) = puVar21;
  _objc_release(uVar19);
  _objc_release(puVar12);
  _objc_initWeak(auStack_178,puVar1);
  uVar13 = *(undefined8 *)(puVar1 + lVar18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar13;
  func_0x00010c24b8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_220,auStack_178);
  _objc_retain(lVar11);
  _objc_retain(lVar20);
  _objc_retain(lVar17);
  _objc_retain(puVar26);
  func_0x00010c25ff60(uVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar13);
  _objc_release(puVar26);
  _objc_release(lVar17);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_178);
  _objc_release(lVar11);
  _objc_release(puVar26);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar17);
  _objc_release(lVar7);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(puStack_1c8);
  _objc_release(lVar16);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_178);
  uVar15 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = *(long *)(*(long *)(lVar20 + 0x20) + 8);
  uVar13 = *(undefined8 *)(lVar20 + 0x28);
  *(undefined8 *)(lVar20 + 0x28) = uVar14;
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 105b98b5c; end: 105b992a7; -[SCFriendsFeedViewController _launchSpotlightOnFriendsFeedTapWithStory:cellViewModel:cell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b98b5c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_105b8e1e0;
  uStack_150 = 0x105b8e1f0;
  lVar1 = param_4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107cf9cc8();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar2;
  _objc_release(lVar1);
  lVar1 = puStack_168[5];
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_105b992a8;
    puStack_180 = &UNK_1108d9b80;
    puStack_178 = &uStack_170;
    func_0x00010c0bf680();
    _objc_release(lVar1);
  }
  lVar14 = (long)_DAT_112730eec;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_1108d9b60);
  _objc_retain(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar1);
  lVar8 = lVar1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar18 = *plStack_130;
    do {
      lVar20 = 0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(lStack_138 + lVar20 * 8);
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        FUN_105b99338();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        if (lVar6 != 0) {
          lVar4 = lVar5;
          func_0x00010c2923e0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar4);
        }
        _objc_release(lVar5);
        lVar20 = lVar20 + 1;
      } while (lVar8 != lVar20);
      lVar8 = lVar1;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar1);
  puVar7 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(lVar1);
  puVar3 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  lVar8 = param_4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar8;
  FUN_105b99338();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar18;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  if (lVar20 != 0) {
    lVar8 = lVar18;
    func_0x00010c2923e0(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(lVar8);
  }
  lVar8 = puStack_168[5];
  func_0x00010c08fa60();
  puVar7 = (undefined *)0x0;
  if (lVar8 != 0) {
    puVar7 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar21 = puVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar21;
  func_0x00010c08fa60();
  _objc_release(puVar21);
  puVar21 = puVar3;
  func_0x00010bf529e0();
  if (puVar21 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126b6068;
    _objc_alloc();
    if (puVar9 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar16 = puVar7;
      func_0x00010c2923e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar7;
      func_0x00010c294420(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar7;
      func_0x00010bf85d80(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c05c0a0();
    if (puVar9 != (undefined *)0x0) {
      _objc_release(puVar19);
      _objc_release(puVar17);
      _objc_release(puVar16);
    }
  }
  lVar20 = param_5;
  func_0x00010bf83280();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  if (lVar20 != 0) {
    lVar8 = lVar20;
  }
  _objc_retain(lVar8);
  _objc_release(lVar20);
  lVar20 = param_4;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar20;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112731444);
  *(long *)(param_1 + _DAT_112731444) = lVar5;
  _objc_release(uVar15);
  _objc_release(lVar20);
  _objc_initWeak(auStack_f8,param_1);
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar10;
  func_0x00010c24b8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar15;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010c0e0ec0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_f8);
  _objc_retain(lVar8);
  _objc_retain(param_3);
  _objc_retain(lVar2);
  _objc_retain(puVar21);
  func_0x00010c25ff60(uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(puVar21);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_f8);
  _objc_release(lVar8);
  _objc_release(puVar21);
  _objc_release(puVar7);
  _objc_release(lVar18);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(lStack_148);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_f8);
  uVar13 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar15;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar10 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar12;
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 105b992a8; end: 105b99337;  */

void FUN_105b992a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b99338; end: 105b994b3;  */

void FUN_105b99338(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x000107cf9bb0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    lVar2 = param_2;
  }
  lVar3 = lVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  else {
    lVar4 = lVar1;
    func_0x00010c294420(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  lVar5 = param_1;
  func_0x000107cfa164();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar4;
  if (lVar5 != 0) {
    lVar3 = lVar5;
  }
  _objc_retain(lVar3);
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b6068;
    _objc_alloc(PTR_PTR_1126b6068);
    func_0x00010c05c080();
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b994b4; end: 105b99603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b994b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731164);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be6ddc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar2;
    func_0x00010c08be20(uVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010bdc8b80(param_2);
  }
  lVar5 = param_3;
  func_0x000107d02054();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010bdc8b80(param_2);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b99604; end: 105b996b3; -[SCFriendsFeedViewController spotlightDidBeginPlayingStory:] */

void FUN_105b99604(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bdc8b80(param_1,param_2,lVar2);
  }
  lVar1 = param_3;
  func_0x000107d02054();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010bdc8b80(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b996b4; end: 105b998a3; -[SCFriendsFeedViewController updateSpotlightDismissTargetWithPlaybackManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b996b4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar4 = param_2;
    func_0x00010bfa3820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2c40;
    _objc_opt_class(PTR_PTR_1126c2c40);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      func_0x00010c285260(param_4);
      uVar4 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010bc8525c(uVar6,uVar8,uVar10,uVar12,param_1);
      uVar7 = uVar6;
      uVar9 = uVar8;
      uVar11 = uVar10;
      uVar13 = uVar12;
      _objc_release(uVar4);
      uVar4 = *(ulong *)(param_2 + (long)_DAT_11273134c);
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126c2c40;
      _objc_opt_class(PTR_PTR_1126c2c40);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      uVar4 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar3);
      if (uVar4 != 0) {
        func_0x00010bf83280();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        if (uVar3 != 0) {
          uVar5 = uVar3;
        }
        func_0x00010bfb68e0(uVar5);
        func_0x00010bc8525c();
        _objc_release(uVar3);
        uVar8 = uVar9;
        uVar6 = uVar7;
        uVar10 = uVar11;
        uVar12 = uVar13;
      }
      func_0x00010c285280(uVar6,uVar8,uVar10,uVar12,param_4);
    }
    else {
      func_0x00010bf83280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285260(param_4);
    }
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b998a4; end: 105b998f7; -[SCFriendsFeedViewController removeSpotlightScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b998a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731444);
  *(undefined8 *)(param_1 + _DAT_112731444) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731164);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b998f8; end: 105b99a1b; -[SCFriendsFeedViewController _presentClearMenuActionSheetScopeForIdentifier:conversationId:recipientSnapchatter:cellViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b998f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112731264;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = param_1 + _DAT_112731268;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010bf22fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b99a1c; end: 105b99acb; -[SCFriendsFeedViewController _presentRemoveConversationAlertForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b99a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273126c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126c2d30;
    _objc_alloc(PTR_PTR_1126c2d30);
    func_0x00010c018ce0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b99acc; end: 105b99d13; -[SCFriendsFeedViewController cellHandleTapOnClear:] */

void FUN_105b99acc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  if ((int)uVar2 == 0) {
    puVar4 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c112c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar6 = uVar5;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2d38;
    _objc_opt_class(PTR_PTR_1126c2d38);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar3 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    if (uVar3 != 0) {
      _objc_initWeak(auStack_68,param_1);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105b99d14;
      puStack_88 = &UNK_1108d9360;
      _objc_copyWeak(auStack_70,auStack_68);
      uStack_80 = param_1;
      _objc_retain(param_3);
      uStack_78 = param_3;
      _objc_copyWeak(auStack_a8,auStack_68);
      func_0x00010c0bffe0(uVar6);
      _objc_destroyWeak(auStack_a8);
      _objc_release(uStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b99d14; end: 105b99e0f;  */

void FUN_105b99d14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x000100bec1f0(param_4,0), (int)lVar1 != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde01e0(lVar1);
    _objc_release(lVar2);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c142280(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be7aac0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b99e10; end: 105b99e57;  */

void FUN_105b99e10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b99e58; end: 105b99eb3; -[SCFriendsFeedViewController _clearConversationForSnapchatterWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b99e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730ec8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b99eb4; end: 105b9a09f; -[SCFriendsFeedViewController cellHandleLensButtonPressed:] */

void FUN_105b99eb4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bfa3920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c1409a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0bf920(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
  }
  else {
    uVar1 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9a0a0; end: 105b9a133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a0a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde2400(param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731078);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142280(param_1);
    func_0x00010c0a9780(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b9a134; end: 105b9a247; -[SCFriendsFeedViewController cellHandleStreakRestoreButtonPressed:] */

void FUN_105b9a134(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar5 = uVar1;
    func_0x00010bfa3920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = uVar5;
    func_0x00010c25c260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010be7ed20(param_1);
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9a248; end: 105b9a4a3; -[SCFriendsFeedViewController cellHandleCampaignButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a248(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf33f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00();
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105b8e1e0;
  uStack_70 = 0x105b8e1f0;
  uStack_68 = 0;
  uVar2 = uVar1;
  func_0x00010bfa3920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf920();
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar5 = puStack_88[5];
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112730f48);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf0cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c0c0800(uVar7);
    _objc_release(uVar7);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9a4a4; end: 105b9a4e3;  */

void FUN_105b9a4a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b9a4e4; end: 105b9a4fb;  */

void FUN_105b9a4e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openAdAttachment_viewModel_inde_112578d08,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105b9a4fc; end: 105b9a713; -[SCFriendsFeedViewController cellHandleGroupJoinPermissionPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a4fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = uVar3;
  func_0x00010c112c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2d40;
  _objc_opt_class(PTR_PTR_1126c2d40);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar6 = PTR_PTR_1126c2d48;
    _objc_alloc(PTR_PTR_1126c2d48);
    uVar5 = uVar3;
    func_0x00010bfce980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bfcec00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c0b36c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf50760(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058380(puVar6);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273110c));
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105b9a714; end: 105b9a723; -[SCFriendsFeedViewController didTapViewAllInFriendsFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731204),PTR_s_handleTapViewAllCell_1125d2530);
  return;
}



/* Entry: 105b9a724; end: 105b9a84b; -[SCFriendsFeedViewController _openAdAttachment:viewModel:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a724(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar5 = (long)_DAT_112730f54;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c071800();
    if (iVar1 != 0) {
      func_0x00010be02420(param_1);
      func_0x00010bdcc680(param_1,param_2,param_4,param_5,
                          &PTR____CFConstantStringClassReference_110eb85f8);
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar3 = PTR_PTR_1126c2d50;
      _objc_alloc(PTR_PTR_1126c2d50);
      func_0x00010c032460();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112730f58);
      func_0x00010bf229e0(uVar4,param_2,param_3,puVar2,puVar3,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9a84c; end: 105b9a8a3; -[SCFriendsFeedViewController _dismissAdAttachmentHandlerScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a84c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730f54;
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



/* Entry: 105b9a8a4; end: 105b9a8d7; -[SCFriendsFeedViewController _announceTapEventAndUpdateVisibilityWithViewModel:index:actionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a8a4(long param_1)

{
  func_0x00010bf33ac0(*(undefined8 *)(param_1 + _DAT_112731220));
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,0)
  ;
  return;
}



/* Entry: 105b9a8d8; end: 105b9a967; -[SCFriendsFeedViewController _shouldUnselectShortcutWithCellViewModel:] */

ulong FUN_105b9a8d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bfa3920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c078da0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105b9a968; end: 105b9aa43; -[SCFriendsFeedViewController _unselectShortcutWithCellViewModel:exitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9a968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  _objc_opt_isKindOfClass(param_3,puVar1);
  func_0x00010bf7b0a0(*(undefined8 *)(param_1 + _DAT_112731204));
  func_0x00010bed3fe0(param_1);
  func_0x00010bea7300(param_1);
  func_0x00010be35680(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731190);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2c58;
  func_0x00010c068340(PTR_PTR_1126c2c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9aa44; end: 105b9aaef; -[SCFriendsFeedViewController _setSelectedShortcutType:] */

void FUN_105b9aa44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b9aaf0;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b9aaf0; end: 105b9acab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9aaf0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_112731360;
    lVar4 = *(long *)(lVar1 + lVar5);
    if (lVar4 != *(long *)(param_1 + 0x28)) {
      if (*(long *)(param_1 + 0x28) == 0xc) {
        *(undefined1 *)(lVar1 + _DAT_11273140c) = 1;
        func_0x00010be89360(lVar1);
      }
      else {
        if (lVar4 == 0xc) {
          *(undefined1 *)(lVar1 + _DAT_11273140c) = 1;
        }
        func_0x00010bddf620(lVar1);
      }
      *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bea7760(lVar1,param_2,0,0);
      if ((*(ulong *)(param_1 + 0x28) < 0xf) || (*(ulong *)(param_1 + 0x28) == 0x12)) {
        lVar4 = lVar1;
        func_0x00010c267f00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7b20();
        _objc_release(lVar4);
        func_0x00010c20c540(*(undefined8 *)(lVar1 + _DAT_1127312dc),param_2,
                            *(long *)(param_1 + 0x28) == 0);
        func_0x00010bddf780(lVar1);
      }
      else {
        lVar4 = lVar1;
        func_0x00010c267f00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7b20();
        _objc_release(lVar4);
        func_0x00010c20c540(*(undefined8 *)(lVar1 + _DAT_1127312dc),param_2,0);
        func_0x00010be0cec0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
      }
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112730f00);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x000105bddfd4(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ffda0(uVar2,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b9acac; end: 105b9ae4f; -[SCFriendsFeedViewController _registerCommunitiesObservablesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9acac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && ((*(byte *)(param_1 + _DAT_112731448) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112731448) = 1;
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127311ac);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010beffcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105b9ae50; end: 105b9ae97;  */

void FUN_105b9ae50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9ae98; end: 105b9aef7; -[SCFriendsFeedViewController _cleanupCommunitiesData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9ae98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273144c);
  *(undefined8 *)(param_1 + _DAT_11273144c) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112731450;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731454);
  *(undefined8 *)(param_1 + _DAT_112731454) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b9aef8; end: 105b9b073; -[SCFriendsFeedViewController _communityMetadatasDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9aef8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
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
  if (*(long *)(param_1 + _DAT_112731360) == 0xc) {
    _objc_retain(param_3);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar2 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    uVar4 = 0;
    if (lVar2 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
          uVar1 = uVar4;
          func_0x00010bf60900();
          if ((uVar1 & 1) != 0) {
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105b9aff0;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
      uVar4 = 0;
    }
LAB_105b9aff0:
    _objc_release(param_3);
    lVar5 = (long)_DAT_112731458;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c08fa60();
    if ((lVar2 != 0) && (uVar1 = uVar4, func_0x00010c08fa60(), uVar1 == 0)) {
      func_0x00010bed1fc0(param_1,param_2,0,0x10);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_1127313c8;
  lVar2 = *(long *)(param_3 + lVar5);
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    *(long *)(param_3 + lVar5) = lVar2;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_3 + lVar5);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105b9b074; end: 105b9b0d3; -[SCFriendsFeedViewController _getSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b074(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127313c8;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105b9b0d4; end: 105b9b147; -[SCFriendsFeedViewController _getShortcutSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b0d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127313ec;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    func_0x00010c1ffd40(*(undefined8 *)(param_1 + _DAT_1127312bc),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105b9b148; end: 105b9b1d3; -[SCFriendsFeedViewController _emitShortcutEventWithSelectedShortcut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b148(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112731360);
  lVar1 = param_1;
  func_0x00010be22940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2c20;
  func_0x00010c11b7e0(PTR_PTR_1126c2c20,param_2,lVar1,param_3,lVar3 == 0 || lVar3 != param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07c20(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b9b1d4; end: 105b9b1e3; -[SCFriendsFeedViewController _emitFriendsFeedInteractionEventUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731194),PTR_s_next__112614028);
  return;
}



/* Entry: 105b9b1e4; end: 105b9b1e7; -[SCFriendsFeedViewController adAttachmentHandlerViewWillFullyAppear:] */

void FUN_105b9b1e4(void)

{
  return;
}



/* Entry: 105b9b1e8; end: 105b9b20f; -[SCFriendsFeedViewController adAttachmentHandlerDidComplete:result:] */

void FUN_105b9b1e8(undefined8 param_1)

{
  func_0x00010be02420();
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,1)
  ;
  return;
}



/* Entry: 105b9b210; end: 105b9b213; -[SCFriendsFeedViewController adAttachmentHandlerDidPresent:] */

void FUN_105b9b210(void)

{
  return;
}



/* Entry: 105b9b214; end: 105b9b217; -[SCFriendsFeedViewController adAttachmentHandlerViewDidFullyAppear:] */

void FUN_105b9b214(void)

{
  return;
}



/* Entry: 105b9b218; end: 105b9b21b; -[SCFriendsFeedViewController adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_105b9b218(void)

{
  return;
}



/* Entry: 105b9b21c; end: 105b9b21f; -[SCFriendsFeedViewController adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_105b9b21c(void)

{
  return;
}



/* Entry: 105b9b220; end: 105b9b297; -[SCFriendsFeedViewController presentClearMenuActionSheet:] */

void FUN_105b9b220(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_opt_class(PTR_PTR_1126b10a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c10af80(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9b298; end: 105b9b2ef; -[SCFriendsFeedViewController clearMenuActionSheetDidDismiss:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b298(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731264;
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



/* Entry: 105b9b2f0; end: 105b9b347; -[SCFriendsFeedViewController removeConversationAlertScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b2f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273126c;
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



/* Entry: 105b9b348; end: 105b9b36f; -[SCFriendsFeedViewController createChatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b348(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112730fa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b9b370; end: 105b9b3a7; -[SCFriendsFeedViewController createChatScopeWantsToDismiss:] */

void FUN_105b9b370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9b3a8; end: 105b9b4b3; -[SCFriendsFeedViewController createChatScope:wantsToDismissWithNewChat:] */

void FUN_105b9b3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9b4b4; end: 105b9b4e7;  */

void FUN_105b9b4b4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9b4e8; end: 105b9b50f; -[SCFriendsFeedViewController createCommunitiesNewChatPageDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b4e8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127310d8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b9b510; end: 105b9b643; -[SCFriendsFeedViewController createCommunitiesNewChatPageWantsToDismissWithNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  lVar4 = (long)_DAT_1127310d8;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf6f440(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9b644; end: 105b9b677;  */

void FUN_105b9b644(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9b678; end: 105b9b6f7; -[SCFriendsFeedViewController _navigateToChatWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b678(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730fc4;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c183a80();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d5fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


