/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10676f0bc; end: 10676f0f7;  */

void FUN_10676f0bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010c231c40(param_2);
  }
  else {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010676f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 10676f0f8; end: 10676f2c3; -[SCMapSlippyUpsellController reportChatPushNotificationUpsellActionWithFriendId:actionType:] */

void FUN_10676f0f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126cda98;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  func_0x00010c161c40(puVar1);
  puVar4 = PTR_PTR_1126cdaa0;
  _objc_alloc_init(PTR_PTR_1126cdaa0);
  puVar3 = PTR_PTR_1126cdac0;
  _objc_alloc_init(PTR_PTR_1126cdac0);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar3);
  _objc_release(puVar5);
  if ((param_4 == 0) || (param_4 == 1)) {
    func_0x00010c161620(puVar3);
  }
  func_0x00010c17ba80(puVar4);
  func_0x00010c1e7b60(puVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289140(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10676f2c4; end: 10676f2c7;  */

void FUN_10676f2c4(void)

{
  return;
}



/* Entry: 10676f2c8; end: 10676f497; -[SCMapSlippyUpsellController requestShareBackUpsellWithCompletion:] */

void FUN_10676f2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cda88;
  _objc_alloc_init(PTR_PTR_1126cda88);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_48,auStack_50);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  func_0x00010c161c40(puVar1);
  puVar4 = PTR_PTR_1126cda90;
  _objc_alloc_init(PTR_PTR_1126cda90);
  puVar3 = PTR_PTR_1126cdac8;
  _objc_alloc_init(PTR_PTR_1126cdac8);
  func_0x00010c1c2600(puVar4);
  _objc_release(puVar3);
  func_0x00010c21e7c0(puVar1);
  puVar3 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bfca3e0(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10676f498; end: 10676f66b;  */

void FUN_10676f498(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  if (((param_3 == 0) && (lVar1 = param_2, func_0x00010c231c40(), (int)lVar1 != 0)) &&
     (lVar1 = param_2, func_0x00010bfd3a20(), (int)lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010beee280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b9d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      if (lVar1 != 0) {
        lVar2 = param_2;
        func_0x00010beee280(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0b9d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar3;
        func_0x00010bfb81c0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bfe2ee0();
        lVar5 = lVar2;
        func_0x00010c0b5940(lVar2);
        func_0x000100c4a928(lVar4,lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar2);
        puVar6 = PTR_PTR_1126cdad0;
        _objc_alloc(PTR_PTR_1126cdad0);
        lVar2 = lVar3;
        func_0x00010c2711a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c260dc0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c015780(puVar6);
        _objc_release(lVar4);
        _objc_release(lVar2);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar6);
        _objc_release(puVar6);
        _objc_release(lVar5);
        _objc_release(lVar3);
      }
      _objc_release(lVar1);
      goto LAB_10676f650;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
LAB_10676f650:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10676f66c; end: 10676f837; -[SCMapSlippyUpsellController reportShareBackUpsellActionWithFriendId:actionType:] */

void FUN_10676f66c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126cda98;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  func_0x00010c161c40(puVar1);
  puVar4 = PTR_PTR_1126cdaa0;
  _objc_alloc_init(PTR_PTR_1126cdaa0);
  puVar3 = PTR_PTR_1126cdad8;
  _objc_alloc_init(PTR_PTR_1126cdad8);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar3);
  _objc_release(puVar5);
  if ((param_4 == 0) || (param_4 == 1)) {
    func_0x00010c161620(puVar3);
  }
  func_0x00010c1c25e0(puVar4);
  func_0x00010c1e7b60(puVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289140(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10676f838; end: 10676f83b;  */

void FUN_10676f838(void)

{
  return;
}



/* Entry: 10676f83c; end: 10676f9bb; -[SCMapSlippyUpsellController _locationShareInfo] */

void FUN_10676f83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126cdae0;
  _objc_alloc_init(PTR_PTR_1126cdae0);
  lVar2 = param_1;
  func_0x00010be19a20(param_1);
  func_0x00010c1a0ba0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfcc660();
  func_0x00010c1a3a20(puVar1,param_2,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5a40(puVar1,param_2,lVar7 != 0);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  func_0x00010c1c2100(puVar1,param_2,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216020(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676f9bc; end: 10676fb7f; -[SCMapSlippyUpsellController _friendsWithBitmojiCount] */

ulong FUN_10676f9bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar10 = *(undefined8 *)(lVar11 * 8);
        lVar4 = *(long *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2923e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b96e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        uVar8 = (uint)uVar9;
        if (lVar6 != 0) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = (ulong)uVar8;
        _objc_release(lVar5);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar2 + 0x38,0);
    _objc_storeStrong(lVar2 + 0x30,0);
    _objc_storeStrong(lVar2 + 0x28,0);
    _objc_storeStrong(lVar2 + 0x20,0);
    _objc_storeStrong(lVar2 + 0x18,0);
    _objc_storeStrong(lVar2 + 0x10,0);
    uVar9 = lVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(uVar9,0);
    return uVar9;
  }
  return uVar9;
}



/* Entry: 10676fb80; end: 10676fbeb; -[SCMapSlippyUpsellController .cxx_destruct] */

void FUN_10676fb80(long param_1)

{
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



/* Entry: 10676fbec; end: 10676fccf; -[SCMapSlippyUpsellServiceProvider provide] */

void FUN_10676fbec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdae8;
  _objc_alloc(PTR_PTR_1126cdae8);
  func_0x00010c059d00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10676fcd0; end: 10676fd0f;  */

void FUN_10676fcd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee6020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10676fd10; end: 10676ff03; -[SCMapSlippyUpsellServiceProvider _upsellRequestService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10676fd10(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cdaf0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274f800;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274f804;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274f808;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274f80c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274f810;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bdf3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274f814;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0077c0(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar13,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
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



/* Entry: 10676ff04; end: 106770077; -[SCMapSlippyUpsellServiceProvider _createSlippyService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10676ff04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126ae790;
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x11,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar3,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar3,param_2,4000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274f818;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126cdaf8;
  _objc_alloc(PTR_PTR_1126cdaf8);
  func_0x00010c058f80();
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106770078; end: 106770173; -[SCMapSlippyUpsellServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106770078(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f814);
  _objc_destroyWeak(param_1 + _DAT_11274f818);
  _objc_destroyWeak(param_1 + _DAT_11274f80c);
  _objc_destroyWeak(param_1 + _DAT_11274f808);
  _objc_destroyWeak(param_1 + _DAT_11274f804);
  _objc_destroyWeak(param_1 + _DAT_11274f800);
  _objc_destroyWeak(param_1 + _DAT_11274f810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f81c);
  return;
}



/* Entry: 106770174; end: 10677017f;  */

bool FUN_106770174(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106770180; end: 1067701fb;  */

undefined * FUN_106770180(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4020 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ca98,
                        &UNK_10dddedec,&UNK_10dddee70,5,FUN_1067701fc,0);
    do {
      if (puRam00000001136c4020 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4020;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4020,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4020 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4020;
}



/* Entry: 1067701fc; end: 106770207;  */

bool FUN_1067701fc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106770208; end: 106770283;  */

undefined * FUN_106770208(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4028 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cab8,
                        &UNK_10dddee84,&UNK_10dddeeb0,3,FUN_106770284,0);
    do {
      if (puRam00000001136c4028 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4028;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4028,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4028 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4028;
}



/* Entry: 106770284; end: 10677028f;  */

bool FUN_106770284(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106770290; end: 10677030b;  */

undefined * FUN_106770290(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4030 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cad8,
                        &UNK_10dddee84,&UNK_10dddeebc,3,FUN_10677030c,0);
    do {
      if (puRam00000001136c4030 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4030;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4030,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4030 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4030;
}



/* Entry: 10677030c; end: 106770317;  */

bool FUN_10677030c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106770318; end: 106770393;  */

undefined * FUN_106770318(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4038 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5caf8,
                        &UNK_10dddee84,&UNK_10dddeec8,3,FUN_106770394,0);
    do {
      if (puRam00000001136c4038 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4038;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4038,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4038 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4038;
}



/* Entry: 106770394; end: 10677039f;  */

bool FUN_106770394(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1067703a0; end: 10677041b;  */

undefined * FUN_1067703a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cb18,
                        &UNK_10dddeed4,&UNK_10dddeefc,3,FUN_10677041c,0);
    do {
      if (puRam00000001136c4040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4040;
}



/* Entry: 10677041c; end: 106770427;  */

bool FUN_10677041c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106770428; end: 10677048f; +[SCMapsSlippyLocationShareUserInfo descriptor] */

void FUN_106770428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7a70,
                        &PTR____CFConstantStringClassReference_110e5cb38,&PTR_DAT_11315e668,
                        &PTR_DAT_11315eda0,6,0x20,0x1c);
    puRam00000001136c4048 = puVar1;
  }
  return;
}



/* Entry: 106770490; end: 1067704f7; +[SCMapsSlippyLiveLocationUpsellInfo descriptor] */

void FUN_106770490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7ac0,
                        &PTR____CFConstantStringClassReference_110e5cb58,&PTR_DAT_11315e668,
                        &PTR_DAT_11315e8a0,3,0x18,0x1c);
    puRam00000001136c4050 = puVar1;
  }
  return;
}



/* Entry: 1067704f8; end: 10677055f; +[SCMapsSlippyChatShareBackUpsellUserInfo descriptor] */

void FUN_1067704f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7b10,
                        &PTR____CFConstantStringClassReference_110e5cb78,&PTR_DAT_11315e668,
                        &PTR_s_friendId_11315e680,1,0x10,0x1c);
    puRam00000001136c4058 = puVar1;
  }
  return;
}



/* Entry: 106770560; end: 1067705c7; +[SCMapsSlippyMapShareBackUpsellUserInfo descriptor] */

void FUN_106770560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7b60,
                        &PTR____CFConstantStringClassReference_110e5cb98,&PTR_DAT_11315e668,0,0,4,
                        0x1c);
    puRam00000001136c4060 = puVar1;
  }
  return;
}



/* Entry: 1067705c8; end: 10677062f; +[SCMapsSlippyChatPushNotificationUpsellUserInfo descriptor] */

void FUN_1067705c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7bb0,
                        &PTR____CFConstantStringClassReference_110e5cbb8,&PTR_DAT_11315e668,
                        &PTR_s_friendId_11315e6a0,1,0x10,0x1c);
    puRam00000001136c4068 = puVar1;
  }
  return;
}



/* Entry: 106770630; end: 106770697; +[SCMapsSlippyLiveSharingStatus descriptor] */

void FUN_106770630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7c00,
                        &PTR____CFConstantStringClassReference_110e5cbd8,&PTR_DAT_11315e668,
                        &PTR_s_friendId_11315e6e0,2,0x10,0x1c);
    puRam00000001136c4070 = puVar1;
  }
  return;
}



/* Entry: 106770698; end: 106770723; +[SCMapsSlippyUserInfo descriptor] */

undefined * FUN_106770698(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7c50,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_11315e668,
                        &PTR_DAT_11315eb20,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c4078 = puVar1;
  }
  return puRam00000001136c4078;
}



/* Entry: 106770724; end: 1067707af; +[SCMapsSlippyActionConfig descriptor] */

undefined * FUN_106770724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7ca0,
                        &PTR____CFConstantStringClassReference_110e5cbf8,&PTR_DAT_11315e668,
                        &PTR_DAT_11315ebc0,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c4080 = puVar1;
  }
  return puRam00000001136c4080;
}



/* Entry: 1067707b0; end: 106770817; +[SCMapsSlippyLiveLocationUpsellConfig descriptor] */

void FUN_1067707b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7cf0,
                        &PTR____CFConstantStringClassReference_110e5cc18,&PTR_DAT_11315e668,
                        &PTR_s_title_11315ec60,5,0x30,0x1c);
    puRam00000001136c4088 = puVar1;
  }
  return;
}



/* Entry: 106770818; end: 10677087f; +[SCMapsSlippyChatShareBackUpsellConfig descriptor] */

void FUN_106770818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7d40,
                        &PTR____CFConstantStringClassReference_110e5cc38,&PTR_DAT_11315e668,0,0,4,
                        0x1c);
    puRam00000001136c4090 = puVar1;
  }
  return;
}



/* Entry: 106770880; end: 1067708e7; +[SCMapsSlippyMapShareBackUpsellConfig descriptor] */

void FUN_106770880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7d90,
                        &PTR____CFConstantStringClassReference_110e5cc58,&PTR_DAT_11315e668,
                        &PTR_s_title_11315e900,3,0x20,0x1c);
    puRam00000001136c4098 = puVar1;
  }
  return;
}



/* Entry: 1067708e8; end: 10677094f; +[SCMapsSlippyChatPushNotificationUpsellConfig descriptor] */

void FUN_1067708e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7de0,
                        &PTR____CFConstantStringClassReference_110e5cc78,&PTR_DAT_11315e668,0,0,4,
                        0x1c);
    puRam00000001136c40a0 = puVar1;
  }
  return;
}



/* Entry: 106770950; end: 1067709db; +[SCMapsSlippyReaction descriptor] */

undefined * FUN_106770950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7e30,
                        &PTR____CFConstantStringClassReference_110e5cc98,&PTR_DAT_11315e668,
                        &PTR_DAT_11315ea20,4,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c40a8 = puVar1;
  }
  return puRam00000001136c40a8;
}



/* Entry: 1067709dc; end: 106770a43; +[SCMapsSlippyChatShareBackUpsellReaction descriptor] */

void FUN_1067709dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7e80,
                        &PTR____CFConstantStringClassReference_110e5ccb8,&PTR_DAT_11315e668,
                        &PTR_s_friendId_11315e720,2,0x10,0x1c);
    puRam00000001136c40b0 = puVar1;
  }
  return;
}



/* Entry: 106770a44; end: 106770aab; +[SCMapsSlippyChatPushNotificationUpsellReaction descriptor] */

void FUN_106770a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7ed0,
                        &PTR____CFConstantStringClassReference_110e5ccd8,&PTR_DAT_11315e668,
                        &PTR_s_friendId_11315e760,2,0x10,0x1c);
    puRam00000001136c40b8 = puVar1;
  }
  return;
}



/* Entry: 106770aac; end: 106770b13; +[SCMapsSlippyMapShareBackUpsellReaction descriptor] */

void FUN_106770aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7f20,
                        &PTR____CFConstantStringClassReference_110e5ccf8,&PTR_DAT_11315e668,
                        &PTR_s_friendId_11315e7a0,2,0x10,0x1c);
    puRam00000001136c40c0 = puVar1;
  }
  return;
}



/* Entry: 106770b14; end: 106770b7b; +[SCMapsSlippyGetShouldPerformActionRequest descriptor] */

void FUN_106770b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7f70,
                        &PTR____CFConstantStringClassReference_110e5cd18,&PTR_DAT_11315e668,
                        &PTR_s_userId_11315ed00,5,0x20,0x1c);
    puRam00000001136c40c8 = puVar1;
  }
  return;
}



/* Entry: 106770b7c; end: 106770be3; +[SCMapsSlippyGetShouldPerformActionResponse descriptor] */

void FUN_106770b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7fc0,
                        &PTR____CFConstantStringClassReference_110e5cd38,&PTR_DAT_11315e668,
                        &PTR_DAT_11315e7e0,2,0x10,0x1c);
    puRam00000001136c40d0 = puVar1;
  }
  return;
}



/* Entry: 106770be4; end: 106770c4b; +[SCMapsSlippyUpdateReactionRequest descriptor] */

void FUN_106770be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8010,
                        &PTR____CFConstantStringClassReference_110e5cd58,&PTR_DAT_11315e668,
                        &PTR_s_userId_11315e960,3,0x18,0x1c);
    puRam00000001136c40d8 = puVar1;
  }
  return;
}



/* Entry: 106770c4c; end: 106770cb3; +[SCMapsSlippyUpdateReactionResponse descriptor] */

void FUN_106770c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8060,
                        &PTR____CFConstantStringClassReference_110e5cd78,&PTR_DAT_11315e668,0,0,4,
                        0x1c);
    puRam00000001136c40e0 = puVar1;
  }
  return;
}



/* Entry: 106770cb4; end: 106770d1b; +[SCMapsSlippyGetLocationPreferencesReminderRequest descriptor] */

void FUN_106770cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af80b0,
                        &PTR____CFConstantStringClassReference_110e5cd98,&PTR_DAT_11315e668,
                        &PTR_s_timezone_11315e820,2,0x10,0x1c);
    puRam00000001136c40e8 = puVar1;
  }
  return;
}



/* Entry: 106770d1c; end: 106770d83; +[SCMapsSlippyGetLocationPreferencesReminderResponse descriptor] */

void FUN_106770d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8100,
                        &PTR____CFConstantStringClassReference_110e5cdb8,&PTR_DAT_11315e668,
                        &PTR_DAT_11315eaa0,4,0x20,0x1c);
    puRam00000001136c40f0 = puVar1;
  }
  return;
}



/* Entry: 106770d84; end: 106770deb; +[SCMapsSlippyLocationPreferencesSnapshot descriptor] */

void FUN_106770d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c40f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8150,
                        &PTR____CFConstantStringClassReference_110e5cdd8,&PTR_DAT_11315e668,
                        &PTR_DAT_11315e9c0,3,0x18,0x1c);
    puRam00000001136c40f8 = puVar1;
  }
  return;
}



/* Entry: 106770dec; end: 106770e53; +[SCMapsSlippyAreUpsellsAvailableRequest descriptor] */

void FUN_106770dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af81a0,
                        &PTR____CFConstantStringClassReference_110e5cdf8,&PTR_DAT_11315e668,
                        &PTR_s_userId_11315e860,2,0x18,0x1c);
    puRam00000001136c4100 = puVar1;
  }
  return;
}



/* Entry: 106770e54; end: 106770f37; +[SCMapsSlippyAreUpsellsAvailableResponse descriptor] */

void FUN_106770e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af81f0,
                        &PTR____CFConstantStringClassReference_110e5ce18,&PTR_DAT_11315e668,
                        &PTR_DAT_11315e6c0,1,4,0x1c);
    puRam00000001136c4108 = puVar1;
  }
  return;
}



/* Entry: 106770f38; end: 106770f43;  */

bool FUN_106770f38(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106770f44; end: 106770fbf;  */

undefined * FUN_106770f44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4118 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ce58,
                        &UNK_10dddef44,&UNK_10dddef84,6,FUN_106770fc0,0);
    do {
      if (puRam00000001136c4118 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4118;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4118,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4118 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4118;
}



/* Entry: 106770fc0; end: 106770fcb;  */

bool FUN_106770fc0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106770fcc; end: 106771047;  */

undefined * FUN_106770fcc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ce78,
                        &UNK_10dddef9c,&UNK_10dddf03c,10,FUN_106771048,0);
    do {
      if (puRam00000001136c4120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4120;
}



/* Entry: 106771048; end: 10677105f;  */

uint FUN_106771048(uint param_1)

{
  return (uint)(param_1 < 0xf) & 0x7c1fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106771060; end: 1067710db;  */

undefined * FUN_106771060(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ce98,
                        &UNK_10dddf064,&UNK_10dddf098,4,FUN_1067710dc,0);
    do {
      if (puRam00000001136c4128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4128;
}



/* Entry: 1067710dc; end: 1067710e7;  */

bool FUN_1067710dc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1067710e8; end: 106771163;  */

undefined * FUN_1067710e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4130 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ceb8,
                        &UNK_10dddf0a8,&UNK_10dddf0f8,6,FUN_106771164,0);
    do {
      if (puRam00000001136c4130 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4130;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4130,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4130 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4130;
}



/* Entry: 106771164; end: 10677116f;  */

bool FUN_106771164(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106771170; end: 1067711eb;  */

undefined * FUN_106771170(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4138 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ced8,
                        &UNK_10dddf110,&UNK_10dddf134,5,FUN_1067711ec,0);
    do {
      if (puRam00000001136c4138 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4138;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4138,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4138 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4138;
}



/* Entry: 1067711ec; end: 1067711f7;  */

bool FUN_1067711ec(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1067711f8; end: 106771273;  */

undefined * FUN_1067711f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4140 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cef8,
                        &UNK_10dddf148,&UNK_10dddf174,5,FUN_106771274,0);
    do {
      if (puRam00000001136c4140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4140;
}



/* Entry: 106771274; end: 10677127f;  */

bool FUN_106771274(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106771280; end: 1067712fb;  */

undefined * FUN_106771280(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4148 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cf18,
                        &UNK_10dddf188,&UNK_10dddf19c,3,FUN_1067712fc,0);
    do {
      if (puRam00000001136c4148 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4148;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4148,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4148 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4148;
}



/* Entry: 1067712fc; end: 106771307;  */

bool FUN_1067712fc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106771308; end: 106771383;  */

undefined * FUN_106771308(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4150 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cf38,
                        &UNK_10dddf1a8,&UNK_10dddf218,7,FUN_106771384,0);
    do {
      if (puRam00000001136c4150 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4150;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4150,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4150 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4150;
}



/* Entry: 106771384; end: 10677138f;  */

bool FUN_106771384(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106771390; end: 10677140b;  */

undefined * FUN_106771390(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4158 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cf58,
                        &UNK_10dddf234,&UNK_10dddf260,5,FUN_10677140c,0);
    do {
      if (puRam00000001136c4158 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4158;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4158,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4158 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4158;
}



/* Entry: 10677140c; end: 106771417;  */

bool FUN_10677140c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106771418; end: 106771493;  */

undefined * FUN_106771418(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4160 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5cf78,
                        &UNK_10dddf274,&UNK_10dddf290,2,FUN_106771494,0);
    do {
      if (puRam00000001136c4160 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4160;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4160,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4160 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4160;
}



/* Entry: 106771494; end: 10677149f;  */

bool FUN_106771494(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1067714a0; end: 10677150b; +[SCVSShareLocationPreferences descriptor] */

void FUN_1067714a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8290,
                        &PTR____CFConstantStringClassReference_110e5cf98,&PTR_DAT_11315ee88,
                        &PTR_DAT_113160020,0xf,0x40,0x1c);
    puRam00000001136c4168 = puVar1;
  }
  return;
}



/* Entry: 10677150c; end: 106771587; +[SCVSShareLocationPreferences_LiveSession descriptor] */

undefined * FUN_10677150c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af82e0,
                        &PTR____CFConstantStringClassReference_110e5cfb8,&PTR_DAT_11315ee88,
                        &PTR_s_friendId_11315f880,6,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001136c4170 = puVar1;
  }
  return puRam00000001136c4170;
}



/* Entry: 106771588; end: 1067715ef; +[SCVSMotionData descriptor] */

void FUN_106771588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8330,
                        &PTR____CFConstantStringClassReference_110e5cfd8,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315fa00,7,0x28,0x1c);
    puRam00000001136c4178 = puVar1;
  }
  return;
}



/* Entry: 1067715f0; end: 106771657; +[SCVSDeviceData descriptor] */

void FUN_1067715f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8380,
                        &PTR____CFConstantStringClassReference_110e5cff8,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315fbc0,9,0x20,0x1c);
    puRam00000001136c4180 = puVar1;
  }
  return;
}



/* Entry: 106771658; end: 1067716bf; +[SCVSDeviceStateChange descriptor] */

void FUN_106771658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af83d0,
                        &PTR____CFConstantStringClassReference_110e5d018,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315eea0,1,8,0x1c);
    puRam00000001136c4188 = puVar1;
  }
  return;
}



/* Entry: 1067716c0; end: 106771727; +[SCVSLocationPermission descriptor] */

void FUN_1067716c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8420,
                        &PTR____CFConstantStringClassReference_110e5d038,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315efc0,2,8,0x1c);
    puRam00000001136c4190 = puVar1;
  }
  return;
}



/* Entry: 106771728; end: 10677178f; +[SCVSUserAction descriptor] */

void FUN_106771728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8470,
                        &PTR____CFConstantStringClassReference_110e4c2b8,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315eec0,1,8,0x1c);
    puRam00000001136c4198 = puVar1;
  }
  return;
}



/* Entry: 106771790; end: 1067717f7; +[SCVSLiveLocationPushPayload descriptor] */

void FUN_106771790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af84c0,
                        &PTR____CFConstantStringClassReference_110e5d058,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f600,5,0x20,0x1c);
    puRam00000001136c41a0 = puVar1;
  }
  return;
}



/* Entry: 1067717f8; end: 106771863; +[SCVSLocationUpdate descriptor] */

void FUN_1067717f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8510,
                        &PTR____CFConstantStringClassReference_110e5d078,&PTR_DAT_11315ee88,
                        &PTR_s_lat_113160200,0xf,0x48,0x1c);
    puRam00000001136c41a8 = puVar1;
  }
  return;
}



/* Entry: 106771864; end: 1067718cb; +[SCVSBatchValisLocationUpdate descriptor] */

void FUN_106771864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8560,
                        &PTR____CFConstantStringClassReference_110e5d098,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315eee0,1,0x10,0x1c);
    puRam00000001136c41b0 = puVar1;
  }
  return;
}



/* Entry: 1067718cc; end: 106771933; +[SCVSClusterFullSync descriptor] */

void FUN_1067718cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af85b0,
                        &PTR____CFConstantStringClassReference_110e5d0b8,&PTR_DAT_11315ee88,
                        &PTR_s_locale_11315f000,2,0x18,0x1c);
    puRam00000001136c41b8 = puVar1;
  }
  return;
}



/* Entry: 106771934; end: 10677199b; +[SCVSClusterStopSync descriptor] */

void FUN_106771934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8600,
                        &PTR____CFConstantStringClassReference_110e5d0d8,&PTR_DAT_11315ee88,0,0,4,
                        0x1c);
    puRam00000001136c41c0 = puVar1;
  }
  return;
}



/* Entry: 10677199c; end: 106771a07; +[SCVSClusterMember descriptor] */

void FUN_10677199c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8650,
                        &PTR____CFConstantStringClassReference_110e5d0f8,&PTR_DAT_11315ee88,
                        &PTR_s_userId_1131603e0,0x10,0x60,0x1c);
    puRam00000001136c41c8 = puVar1;
  }
  return;
}



/* Entry: 106771a08; end: 106771aa3; +[SCVSMemberAccessory descriptor] */

undefined * FUN_106771a08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af86a0,
                        &PTR____CFConstantStringClassReference_110e5d118,&PTR_DAT_11315ee88,
                        &PTR_s_id_p_11315f6a0,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dddf2a0);
    puRam00000001136c41d0 = puVar1;
  }
  return puRam00000001136c41d0;
}



/* Entry: 106771aa4; end: 106771b2f; +[SCVSLocationAnnotation descriptor] */

undefined * FUN_106771aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af86f0,
                        &PTR____CFConstantStringClassReference_110e5d138,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f480,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c41d8 = puVar1;
  }
  return puRam00000001136c41d8;
}



/* Entry: 106771b30; end: 106771bab; +[SCVSImage descriptor] */

undefined * FUN_106771b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8740,
                        &PTR____CFConstantStringClassReference_110dac698,&PTR_DAT_11315ee88,
                        &PTR_s_URL_11315ef00,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c41e0 = puVar1;
  }
  return puRam00000001136c41e0;
}



/* Entry: 106771bac; end: 106771c17; +[SCVSFriendCluster descriptor] */

void FUN_106771bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8790,
                        &PTR____CFConstantStringClassReference_110e5d158,&PTR_DAT_11315ee88,
                        &PTR_s_id_p_11315fce0,0xc,0x58,0x1c);
    puRam00000001136c41e8 = puVar1;
  }
  return;
}



/* Entry: 106771c18; end: 106771c7f; +[SCVSBatchFriendClusters descriptor] */

void FUN_106771c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af87e0,
                        &PTR____CFConstantStringClassReference_110e5d178,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f040,2,0x10,0x1c);
    puRam00000001136c41f0 = puVar1;
  }
  return;
}



/* Entry: 106771c80; end: 106771ce7; +[SCVSGetPreferencesRequest descriptor] */

void FUN_106771c80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c41f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8830,
                        &PTR____CFConstantStringClassReference_110e5d198,&PTR_DAT_11315ee88,0,0,4,
                        0x1c);
    puRam00000001136c41f8 = puVar1;
  }
  return;
}



/* Entry: 106771ce8; end: 106771d4f; +[SCVSGetPreferencesResponse descriptor] */

void FUN_106771ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8880,
                        &PTR____CFConstantStringClassReference_110e5d1b8,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f080,2,0x18,0x1c);
    puRam00000001136c4200 = puVar1;
  }
  return;
}



/* Entry: 106771d50; end: 106771db7; +[SCVSSetPreferencesRequest descriptor] */

void FUN_106771d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af88d0,
                        &PTR____CFConstantStringClassReference_110e5d1d8,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f180,3,0x20,0x1c);
    puRam00000001136c4208 = puVar1;
  }
  return;
}



/* Entry: 106771db8; end: 106771e1f; +[SCVSSetPreferencesResponse descriptor] */

void FUN_106771db8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8920,
                        &PTR____CFConstantStringClassReference_110e5d1f8,&PTR_DAT_11315ee88,
                        &PTR_s_version_11315f1e0,3,0x20,0x1c);
    puRam00000001136c4210 = puVar1;
  }
  return;
}



/* Entry: 106771e20; end: 106771e87; +[SCVSViewportUpdate descriptor] */

void FUN_106771e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8970,
                        &PTR____CFConstantStringClassReference_110e5d218,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f240,3,0x18,0x1c);
    puRam00000001136c4218 = puVar1;
  }
  return;
}



/* Entry: 106771e88; end: 106771eef; +[SCVSFocusView descriptor] */

void FUN_106771e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af89c0,
                        &PTR____CFConstantStringClassReference_110e5d238,&PTR_DAT_11315ee88,
                        &PTR_s_friendIdsArray_11315f500,4,0x18,0x1c);
    puRam00000001136c4220 = puVar1;
  }
  return;
}



/* Entry: 106771ef0; end: 106771f57; +[SCVSNotificationAckUpdate descriptor] */

void FUN_106771ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8a10,
                        &PTR____CFConstantStringClassReference_110e5d258,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f0c0,2,0x10,0x1c);
    puRam00000001136c4228 = puVar1;
  }
  return;
}



/* Entry: 106771f58; end: 106771fbf; +[SCVSGeofenceUpdate descriptor] */

void FUN_106771f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8a60,
                        &PTR____CFConstantStringClassReference_110e5d278,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315f740,5,0x20,0x1c);
    puRam00000001136c4230 = puVar1;
  }
  return;
}



/* Entry: 106771fc0; end: 106772027; +[SCVSVisitUpdate descriptor] */

void FUN_106771fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4238 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8ab0,
                        &PTR____CFConstantStringClassReference_110e5d298,&PTR_DAT_11315ee88,
                        &PTR_s_lat_11315fae0,7,0x28,0x1c);
    puRam00000001136c4238 = puVar1;
  }
  return;
}



/* Entry: 106772028; end: 1067720b7; +[SCVSClientUpdate descriptor] */

undefined * FUN_106772028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af8b00,
                        &PTR____CFConstantStringClassReference_110e5d2b8,&PTR_DAT_11315ee88,
                        &PTR_DAT_11315fe60,0xe,0x60,0x1c);
    func_0x00010c229040();
    puRam00000001136c4240 = puVar1;
  }
  return puRam00000001136c4240;
}


