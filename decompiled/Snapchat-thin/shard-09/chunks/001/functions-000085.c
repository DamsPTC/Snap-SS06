/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069934e0; end: 10699350f;  */

void FUN_1069934e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106993510; end: 106993677; -[SCComposerPeopleFriendStore _friendsObservable] */

void FUN_106993510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c067ec0();
  dVar7 = (double)(int)uVar1 / 1000.0;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  if (0.0 < dVar7 && lVar4 != 0) {
    func_0x00010c26d5a0(dVar7,uVar2,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11094f5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  uVar3 = uVar2;
  if ((uVar6 & 1) == 0) {
    _objc_retain(uVar2);
  }
  else {
    func_0x00010bf870c0(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11094f610);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106993678; end: 106993697;  */

void FUN_106993678(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11094f630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106993698; end: 1069937af;  */

ulong FUN_106993698(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = param_2;
  func_0x00010bf529e0();
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar3 == uVar4) {
    uVar3 = param_2;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else {
      uVar4 = 0;
      do {
        uVar1 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c071da0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) == 0) break;
        uVar4 = uVar4 + 1;
        uVar1 = param_2;
        func_0x00010bf529e0();
      } while (uVar4 < uVar1);
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1069937b0; end: 10699388b; -[SCComposerPeopleFriendStore .cxx_destruct] */

void FUN_1069937b0(long param_1)

{
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



/* Entry: 10699388c; end: 1069938ff; -[SCComposerPeopleFriendscoreProvider initWithSnapchattersFriendscoreCoordinator:] */

undefined1 * FUN_10699388c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3fa8;
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



/* Entry: 106993900; end: 10699390b; -[SCComposerPeopleFriendscoreProvider pushToValdiMarshaller:] */

void FUN_106993900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 10699390c; end: 106993a7f; -[SCComposerPeopleFriendscoreProvider forUsersWithRequests:completion:] */

void FUN_10699390c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010bfba5e0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106993a80; end: 106993a87;  */

void FUN_106993a80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 106993a88; end: 106993af3;  */

void FUN_106993a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be199e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106993af4; end: 106993dab; -[SCComposerPeopleFriendscoreProvider _friendsScores:userIds:errors:completion:] */

void FUN_106993af4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 == (undefined *)0x0) ||
     (puVar2 = param_5, func_0x00010bf529e0(), puVar2 == (undefined *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = *(undefined8 *)(lVar8 * 8);
        func_0x00010c150c20(uVar9);
        func_0x00010c0df7c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2923e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar2);
        _objc_release(uVar9);
        _objc_release(puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_retain(puVar2);
    uVar9 = param_4;
    func_0x00010c0b8600(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    (**(code **)(param_6 + 0x10))(param_6,uVar9,0);
    _objc_release(uVar9);
    _objc_release(puVar2);
  }
  else {
    puVar5 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    puVar2 = param_5;
    func_0x00010bf04a20(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar5);
    uVar6 = 0;
    (**(code **)(param_6 + 0x10))(param_6,0,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_objectForKey__1126159e0,uVar6);
  return;
}



/* Entry: 106993dac; end: 106993db7;  */

void FUN_106993dac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKey__1126159e0,param_2);
  return;
}



/* Entry: 106993db8; end: 106993dc3; -[SCComposerPeopleFriendscoreProvider .cxx_destruct] */

void FUN_106993db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106993dc4; end: 106993e37; -[SCComposerPeopleGroupConverter initWithCurrentUserID:] */

undefined1 * FUN_106993dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3fb0;
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



/* Entry: 106993e38; end: 106994363; -[SCComposerPeopleGroupConverter toComposerGroup:] */

void FUN_106993e38(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  undefined *puStack_158;
  undefined **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108ef4e14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(uVar3);
  func_0x00010bffc4a0();
  dVar12 = 0.0;
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar3);
      }
      puVar10 = PTR_PTR_1126b28e0;
      uVar11 = *(undefined8 *)(uVar9 * 8);
      _objc_retain(uVar11);
      _objc_opt_new(puVar10);
      uVar5 = uVar11;
      func_0x00010bf1acc0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16da00(puVar10);
      _objc_release(uVar5);
      uVar5 = uVar11;
      func_0x00010bf1c0a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fbc60(puVar10);
      _objc_release(uVar5);
      uVar5 = uVar11;
      func_0x00010bf1c000(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f6680(puVar10);
      _objc_release(uVar5);
      uVar5 = uVar11;
      func_0x00010bf1af00(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e6a0(puVar10);
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126cf678;
      _objc_alloc(PTR_PTR_1126cf678);
      uVar5 = uVar11;
      func_0x00010c2923e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar11;
      func_0x00010c294420(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar11;
      func_0x00010c0d5140(uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      func_0x00010c05c1a0(puVar6);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(puVar10);
      func_0x00010befa120(puVar4);
      _objc_release(puVar6);
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
    uVar2 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010c0891c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126cf670;
  _objc_alloc(PTR_PTR_1126cf670);
  uVar2 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010c06ecc0();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar9 & 1) == 0) {
    puStack_158 = (undefined *)0x0;
    pcStack_148 = (code *)0x2020000000;
    puStack_140 = (undefined *)((ulong)puStack_140 & 0xffffffffffffff00);
    uVar9 = param_3;
    ppuStack_150 = &puStack_158;
    func_0x00010c261460(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar10;
    ppuStack_128 = (undefined **)0xc2000000;
    uStack_120 = 0x106994370;
    puStack_118 = &UNK_1108431e0;
    ppuStack_110 = &puStack_158;
    func_0x00010c0bcca0();
    _objc_release(uVar9);
    __Block_object_dispose(&puStack_158,8);
  }
  _objc_release(param_3);
  func_0x00010c018f80(dVar12 * 1000.0,puVar6);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar6);
  _objc_release(uVar2);
  _objc_retain(param_3);
  puStack_130 = (undefined *)0x0;
  uStack_120 = 0x3032000000;
  puStack_118 = (undefined *)0x106994384;
  ppuStack_110 = (undefined **)0x106994394;
  uStack_108 = 0;
  uVar2 = param_3;
  ppuStack_128 = &puStack_130;
  func_0x00010c261460(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar10;
  ppuStack_150 = (undefined **)0xc2000000;
  pcStack_148 = FUN_10699439c;
  puStack_140 = &UNK_1108431e0;
  ppuStack_138 = &puStack_130;
  func_0x00010c0bcca0();
  _objc_release(uVar2);
  puVar10 = ppuStack_128[5];
  _objc_retain(puVar10);
  __Block_object_dispose(&puStack_130,8);
  _objc_release(uStack_108);
  _objc_release(param_3);
  func_0x00010c2144c0(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&puStack_158,8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106994364; end: 10699439b; -[SCComposerPeopleGroupConverter .cxx_destruct] */

void FUN_106994364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10699439c; end: 1069943d3;  */

void FUN_10699439c(long param_1,undefined8 param_2)

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



/* Entry: 1069943d4; end: 106994543; -[SCComposerPeopleGroupStore initWithCurrentUserID:groupDataFetcher:groupDataTracker:topGroupsDataFetcher:] */

undefined1 *
FUN_1069943d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3fb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cf680;
    _objc_alloc();
    func_0x00010c007460();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106994544; end: 10699454f; -[SCComposerPeopleGroupStore pushToValdiMarshaller:] */

void FUN_106994544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 106994550; end: 106994627; -[SCComposerPeopleGroupStore getGroupsWithCompletion:] */

void FUN_106994550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106994628; end: 1069947ff;  */

ulong FUN_106994628(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    unaff_x20 = *(undefined8 *)(uVar1 + 0x30);
    _objc_retain(unaff_x20);
    lVar2 = *(long *)(uVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar2;
    func_0x00010bfc22c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bf529e0(unaff_x22);
    func_0x00010bffc4a0(puVar3);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(unaff_x22);
    lVar2 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(unaff_x22);
          }
          iVar7 = (int)*(undefined8 *)(lStack_128 + lVar9 * 8);
          FUN_106994800();
          if (iVar7 != 0) {
            uVar4 = unaff_x20;
            func_0x00010c271ba0(unaff_x20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar4);
          }
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = unaff_x22;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x22);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar3,0);
    _objc_release(puVar3);
    _objc_release(unaff_x22);
    _objc_release(unaff_x20);
  }
  uVar5 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106994800;
  lStack_160 = unaff_x22;
  lStack_158 = param_1;
  uStack_150 = unaff_x20;
  uStack_148 = uVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  uVar1 = uVar5;
  func_0x00010bfd5ca0();
  if ((uVar1 & 1) == 0) {
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x2020000000;
    uStack_168 = 1;
    uVar1 = uVar5;
    func_0x00010c261460(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcca0();
    _objc_release(uVar1);
    uVar6 = (uint)*(byte *)(puStack_178 + 3);
    __Block_object_dispose(&uStack_180,8);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar5);
  return (ulong)(uVar6 & 1);
}



/* Entry: 106994800; end: 1069948f3;  */

byte FUN_106994800(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd5ca0();
  if ((uVar1 & 1) == 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    uVar1 = param_1;
    func_0x00010c261460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcca0();
    _objc_release(uVar1);
    bVar2 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    bVar2 = 0;
  }
  _objc_release(param_1);
  return bVar2 & 1;
}



/* Entry: 1069948f4; end: 1069949f3; -[SCComposerPeopleGroupStore getMostRecentlyInteractedGroupByParticipantsWithParticipantIds:completion:] */

void FUN_1069948f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069949f4; end: 106994acb;  */

void FUN_1069949f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf09f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfc6140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c271ba0(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar5,0);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106994acc; end: 106994c6f; -[SCComposerPeopleGroupStore onGroupsUpdatedWithCallback:] */

void FUN_106994acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cf688;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106994c70;
  puStack_60 = &UNK_11094f6c0;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010c059780();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106994c7c;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_90 = puVar2;
  func_0x00010bffae00();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106994cd8;
  puStack_c0 = &UNK_110842e18;
  ppuVar5 = &puStack_d8;
  puStack_b8 = puVar4;
  _objc_retainBlock(ppuVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106994c70; end: 106994c7b;  */

void FUN_106994c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106994c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106994c7c; end: 106994cd7;  */

void FUN_106994c7c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106994cd8; end: 106994cdf;  */

void FUN_106994cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106994ce0; end: 106994d5f; -[SCComposerPeopleGroupStore observeTopGroupsIds] */

void FUN_106994ce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e1160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106994d60; end: 106994e77; -[SCComposerPeopleGroupStore groupsObservable] */

void FUN_106994d60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00180();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106994e78; end: 106994efb;  */

void FUN_106994e78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bde97e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106994efc; end: 1069951d3; -[SCComposerPeopleGroupStore _convertedGroupsForChatGroups:] */

void FUN_106994efc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      _objc_release(lVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_3 + 0x38,0);
      _objc_storeStrong(param_3 + 0x30,0);
      _objc_storeStrong(param_3 + 0x28,0);
      _objc_storeStrong(param_3 + 0x20,0);
      _objc_storeStrong(param_3 + 0x18,0);
      _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      FUN_106994800();
      if ((int)lVar6 != 0) {
        lVar6 = *(long *)(param_1 + 0x38);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
LAB_1069950b0:
          lVar7 = lVar2;
          func_0x00010c271ba0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          puVar9 = PTR_PTR_1126cf690;
          _objc_alloc(PTR_PTR_1126cf690);
          func_0x00010c01e000();
          func_0x00010c1d0560(uVar11);
          _objc_release(puVar9);
        }
        else {
          lVar7 = lVar6;
          func_0x00010c065640();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_retain(lVar5);
          if (lVar7 != lVar5) {
            if (lVar5 == 0) {
              _objc_release();
              _objc_release(lVar7);
            }
            else {
              lVar8 = lVar7;
              func_0x00010c071ae0();
              _objc_release(lVar5);
              _objc_release(lVar7);
              _objc_release(lVar7);
              if ((int)lVar8 != 0) goto LAB_10699507c;
            }
            goto LAB_1069950b0;
          }
          _objc_release(lVar5);
          _objc_release(lVar7);
          _objc_release(lVar7);
LAB_10699507c:
          lVar7 = lVar6;
          func_0x00010bf516a0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
      lVar12 = lVar12 + 1;
    } while (lVar4 != lVar12);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1069951d4; end: 10699523f; -[SCComposerPeopleGroupStore .cxx_destruct] */

void FUN_1069951d4(long param_1)

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



/* Entry: 106995240; end: 10699524f;  */

void FUN_106995240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 106995250; end: 1069952c7; -[SCComposerPeopleGroupsDataRequestCallbackListener initWithUpdateCallback:] */

undefined1 * FUN_106995250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3fc0;
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



/* Entry: 1069952c8; end: 1069952e3; -[SCComposerPeopleGroupsDataRequestCallbackListener didUpdateGroupsDataRequest:groupId:] */

void FUN_1069952c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069952dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1069952e4; end: 1069952ef; -[SCComposerPeopleGroupsDataRequestCallbackListener .cxx_destruct] */

void FUN_1069952e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069952f0; end: 106995517; -[SCCIncomingFriend initWithSCSnapchatter:] */

undefined8 FUN_1069952f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  func_0x00010c05a680(param_2,param_3,puVar1);
  uVar2 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befb8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf5e0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  func_0x00010c0df720(param_1 * 1000.0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abf80(param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0737e0();
  func_0x00010c0df6e0(puVar4,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1b60(param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c073820();
  func_0x00010c0df6e0(puVar4,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5a40(param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074d00();
  func_0x00010c0df6e0(puVar4,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1ae0(param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c074d00(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 106995518; end: 1069957db; -[SCComposerPeopleIncomingFriendStore initWithSnapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:activeStoryFetcher:performerProvider:circumstanceEngine:shouldRankIncomingFriends:userPreferences:viewedIncomingFriendsTracker:snapchattersObservableRepository:reminderPinReader:] */

undefined8 *
FUN_106995518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f3fc8;
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
    uVar2 = puVar1[2];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdef1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    func_0x00010be65a00(puVar1);
    func_0x00010be663c0(puVar1);
    func_0x00010be11d00(puVar1);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069957dc; end: 1069957e7; -[SCComposerPeopleIncomingFriendStore pushToValdiMarshaller:] */

void FUN_1069957dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1069957e8; end: 1069958af; -[SCComposerPeopleIncomingFriendStore _fetchIncomingFriendsAndPublishInPerformer] */

void FUN_1069957e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1069958b0; end: 1069958db;  */

void FUN_1069958b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069958dc; end: 106995aaf; -[SCComposerPeopleIncomingFriendStore _fetchIncomingFriendsAndPublish] */

void FUN_1069958dc(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x50);
    func_0x0001009b40cc();
    if (iVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106995ab0;
      puStack_58 = &UNK_1108434e0;
      puVar6 = auStack_50;
      _objc_copyWeak(puVar6,auStack_48);
      func_0x00010c11f800(uVar3);
      goto LAB_106995a44;
    }
  }
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x50);
  func_0x000108c079e8();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_80;
  _objc_copyWeak(puVar6,auStack_48);
  uStack_78 = uVar1;
  func_0x00010bf00220(uVar3);
LAB_106995a44:
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(puVar6);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106995ab0; end: 106995b63;  */

void FUN_106995ab0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  if (param_3 == 0) {
    func_0x00010be8e900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be73e40();
    _objc_release(param_1);
  }
  else {
    func_0x00010be380e0();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106995b64; end: 106995be3;  */

void FUN_106995b64(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010be73e40(param_1);
  }
  else {
    func_0x00010be380e0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106995be4; end: 106995c27; -[SCComposerPeopleIncomingFriendStore _incomingFriendsFetchFailed:] */

void FUN_106995be4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106995c28; end: 106995e6b; -[SCComposerPeopleIncomingFriendStore _reorderIncomingFriendsIfNeeded:] */

undefined * FUN_106995c28(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  _objc_retain(param_4);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uVar2 = *(ulong *)(param_2 + 0x50);
    func_0x0001009b40cc();
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x70);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfebee0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b4ca0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      param_1 = 0.0;
      _objc_retain(param_4);
      puVar8 = param_4;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      if (puVar8 != (undefined *)0x0) {
        param_1 = (double)lVar5;
        dVar13 = param_1 / 1000.0;
        do {
          puVar11 = (undefined *)0x0;
          do {
            dVar12 = param_1;
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(param_4);
              dVar12 = param_1;
            }
            uVar10 = *(undefined8 *)((long)puVar11 * 8);
            func_0x00010bfebe20(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befcae0();
            param_1 = dVar12;
            _objc_release(uVar10);
            puVar1 = puVar6;
            if (dVar12 <= dVar13) {
              puVar1 = puVar7;
            }
            func_0x00010befa120(puVar1);
            puVar11 = puVar11 + 1;
          } while (puVar8 != puVar11);
          puVar8 = param_4;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(param_4);
      puVar8 = puVar6;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010befa160();
      puVar6 = puVar7;
      func_0x00010befa160(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar11);
      goto LAB_106995e20;
    }
  }
  _objc_retain(param_4);
  puVar8 = param_4;
LAB_106995e20:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  puVar7 = puVar6;
  dVar13 = param_1;
  func_0x00010bfebe20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010befcae0(puVar7);
  puVar6 = (undefined *)0xffffffffffffffff;
  if (param_1 < dVar13) {
    puVar6 = (undefined *)0x1;
  }
  _objc_release(puVar7);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106995e6c; end: 106995f03;  */

undefined8 FUN_106995e6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_4);
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  uVar2 = param_4;
  dVar3 = param_1;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010befcae0(uVar2);
  uVar1 = 0xffffffffffffffff;
  if (param_1 < dVar3) {
    uVar1 = 1;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106995f04; end: 106996107; -[SCComposerPeopleIncomingFriendStore _pinIncomingFriendIfNeeded:] */

void FUN_106995f04(long param_1,undefined8 param_2,undefined *param_3,undefined1 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar9;
  undefined1 auStack_190 [8];
  long lStack_188;
  undefined1 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x000108c07834();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    func_0x000108c079e8();
    if ((uVar1 & 1) != 0) goto LAB_106995f5c;
LAB_1069960b4:
    puVar7 = (undefined8 *)puVar5;
    _objc_retain(param_3);
    puVar5 = param_3;
  }
  else {
LAB_106995f5c:
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar2 = *(long *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = lVar2;
      func_0x00010c0fc4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (unaff_x22 == 0) goto LAB_1069960b4;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0fc4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    _objc_release(uVar8);
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    param_4 = SUB81(auStack_e8,0);
    puVar6 = param_3;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar2 = *plStack_120;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar2) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x24;
          func_0x00010c0720c0();
          _objc_release(unaff_x24);
          if ((int)uVar4 == 0) {
            func_0x00010befa120(puVar5);
          }
          else {
            func_0x00010c066b00();
          }
          puVar9 = puVar9 + 1;
        } while (puVar6 != puVar9);
        param_4 = SUB81(auStack_e8,0);
        puVar6 = param_3;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(param_3);
  }
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106996108;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  puStack_158 = puVar5;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  lVar2 = *(long *)(puVar6 + 0x90);
  *(long *)(puVar6 + 0x90) = lVar2 + 1;
  _objc_initWeak(auStack_178,puVar6);
  _objc_copyWeak(auStack_190,auStack_178);
  lStack_188 = lVar2 + 1;
  uStack_180 = param_4;
  func_0x00010be73f40(puVar6);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar7);
  return;
}



/* Entry: 106996108; end: 1069961ef; -[SCComposerPeopleIncomingFriendStore _pinAndPublishIncomingFriends:applySinglePin:] */

void FUN_106996108(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90) + 1;
  *(long *)(param_1 + 0x90) = lVar1;
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  lStack_58 = lVar1;
  uStack_50 = param_4;
  func_0x00010be73f40(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1069961f0; end: 106996333;  */

void FUN_1069961f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x90) == *(long *)(param_1 + 0x28))) {
    if (((*(byte *)(lVar1 + 0x88) & 1) == 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)
       ) {
      *(undefined1 *)(lVar1 + 0x88) = 1;
      uVar3 = *(undefined8 *)(lVar1 + 0x80);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bf00560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec740(uVar3);
      _objc_release(lVar2);
      _objc_release(uVar3);
    }
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      _objc_retain(param_2);
      lVar2 = param_2;
    }
    else {
      lVar2 = lVar1;
      func_0x00010be73ee0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar1;
    func_0x00010be361c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84000(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106996334; end: 1069963eb; -[SCComposerPeopleIncomingFriendStore _highlightedUserIdsWithReminderPins:applySinglePin:] */

void FUN_106996334(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  if (param_4 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x50);
    func_0x000108c07834();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x000108c079e8();
      if (iVar1 == 0) goto LAB_1069963c4;
    }
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fc4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      func_0x00010c0d3c80(param_3);
      func_0x00010befa120();
      _objc_release(lVar4);
      goto LAB_1069963d0;
    }
  }
LAB_1069963c4:
  _objc_retain(param_3);
LAB_1069963d0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1069963ec; end: 10699657f; -[SCComposerPeopleIncomingFriendStore _pinReminderUsersIfNeeded:applySinglePin:completion:] */

void FUN_1069963ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x000108c07aa0();
  func_0x000108c07b18(*(undefined8 *)(param_1 + 0x50));
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 < 1 || lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_3,puVar3);
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_5);
    _objc_retain(param_3);
    uStack_60 = param_4;
    func_0x00010bf8d580(lVar2);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106996580; end: 1069966e7;  */

void FUN_106996580(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar3,puVar4);
    _objc_release(puVar4);
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    _objc_retain(param_2);
    uStack_48 = *(undefined1 *)(param_1 + 0x38);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1069966e8; end: 106996773;  */

void FUN_1069966e8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar3,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdce800(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106996774; end: 106996c5b; -[SCComposerPeopleIncomingFriendStore _applyReminderPins:eligibleUserIds:applySinglePin:completion:] */

void FUN_106996774(long param_1,undefined8 param_2,undefined *param_3,long param_4,int param_5,
                  long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  code *pcVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 auStack_1f0 [256];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == 0) {
LAB_106996820:
    lVar16 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x50);
    func_0x000108c07834();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x000108c079e8();
      if (iVar1 == 0) goto LAB_106996820;
    }
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010c0fc4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_4);
  puVar13 = auStack_f0;
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_4);
      }
      uVar2 = *(ulong *)(lVar19 * 8);
      if ((lVar16 == 0) || (func_0x00010c0720c0(), (uVar2 & 1) == 0)) {
        func_0x00010befa120(puVar4);
      }
      lVar19 = lVar19 + 1;
    } while (lVar3 != lVar19);
    puVar13 = auStack_f0;
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = *(code **)(param_6 + 0x10);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x50);
    func_0x000108c07a24(uVar2,1);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if ((uVar2 & 1) != 0) {
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(param_3);
      puVar7 = param_3;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar7 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(param_3);
          }
          lVar19 = *(long *)((long)puVar15 * 8);
          lVar8 = lVar19;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 == 0) {
LAB_106996a24:
            func_0x00010befa120(puVar17);
          }
          else {
            lVar9 = lVar19;
            func_0x00010c2923e0(lVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar5;
            func_0x00010bf4b900();
            _objc_release(lVar9);
            _objc_release(lVar8);
            if ((int)puVar10 == 0) goto LAB_106996a24;
            func_0x00010c2923e0(lVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(lVar19);
          }
          puVar15 = puVar15 + 1;
        } while (puVar7 != puVar15);
        puVar7 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      _objc_retain(puVar4);
      puVar13 = auStack_1f0;
      puVar7 = puVar4;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar7 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar4);
          }
          puVar11 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010befa120(puVar15);
            func_0x00010befa120(puVar10);
          }
          _objc_release(puVar11);
          puVar20 = puVar20 + 1;
        } while (puVar7 != puVar20);
        puVar13 = auStack_1f0;
        puVar7 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      func_0x00010befa160(puVar15);
      puVar7 = puVar15;
      puVar20 = puVar10;
      (**(code **)(param_6 + 0x10))(param_6,puVar15);
      _objc_release(puVar10);
      _objc_release(puVar15);
      _objc_release(puVar17);
      _objc_release(puVar6);
      goto LAB_106996bf0;
    }
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = *(code **)(param_6 + 0x10);
  }
  puVar7 = param_3;
  puVar20 = puVar5;
  (*pcVar14)(param_6,param_3);
LAB_106996bf0:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar16);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar20);
  _objc_retain(puVar13);
  uVar12 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bf51e00();
  _objc_retain();
  _objc_retain(puVar13);
  puVar6 = puVar20;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_3 + 0x40);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar18);
  _objc_release(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar20);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar20);
  puVar4 = puVar20;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar20);
      }
      lVar19 = *(long *)((long)puVar17 * 8);
      lVar8 = lVar19;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 != 0) {
        func_0x00010c2923e0(lVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(lVar19);
      }
      puVar17 = puVar17 + 1;
    } while (puVar4 != puVar17);
    puVar4 = puVar20;
    func_0x00010bf52a60();
  }
  _objc_release(puVar20);
  uVar18 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dd60();
  _objc_release(uVar18);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar12);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar5 = PTR_PTR_1126b4c28;
  _objc_alloc(PTR_PTR_1126b4c28);
  func_0x00010c040f20();
  uVar12 = *(undefined8 *)(puVar20 + 0x20);
  puVar4 = puVar7;
  func_0x00010c2923e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a57e0(puVar5);
  _objc_release(uVar12);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = puVar7;
  func_0x00010bfebe20(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfea820();
  func_0x00010c0df7c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab220(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = puVar7;
  func_0x00010bfebe20(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fc60();
  func_0x00010c0df7c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7560(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = *(undefined8 *)(puVar20 + 0x28);
  puVar6 = puVar7;
  func_0x00010c2923e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar12);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b34c0(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar4 = PTR_PTR_1126b1568;
  func_0x00010bfb9440();
  if ((int)puVar4 != 0) {
    uVar12 = *(undefined8 *)(puVar20 + 0x30);
    func_0x00010bec8a60(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf5e0(puVar5);
    _objc_release(uVar12);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106996c5c; end: 106996ecf; -[SCComposerPeopleIncomingFriendStore _publishIncomingFriendsWithSnapchatters:pinnedReminderUserIds:] */

void FUN_106996c5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00();
  _objc_retain();
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar11 = *(long *)(lVar9 * 8);
      lVar6 = lVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        func_0x00010c2923e0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar11);
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dd60();
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar7 = PTR_PTR_1126b4c28;
  _objc_alloc(PTR_PTR_1126b4c28);
  func_0x00010c040f20();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a57e0(puVar7);
  _objc_release(uVar10);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_2;
  func_0x00010bfebe20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfea820();
  func_0x00010c0df7c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab220(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_2;
  func_0x00010bfebe20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fc60();
  func_0x00010c0df7c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7560(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar10);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b34c0(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1568;
  func_0x00010bfb9440();
  if ((int)puVar4 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bec8a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf5e0(puVar7);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106996ed0; end: 1069970b7;  */

void FUN_106996ed0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b4c28;
  _objc_alloc(PTR_PTR_1126b4c28);
  func_0x00010c040f20();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a57e0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_2;
  func_0x00010bfebe20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfea820();
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab220(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_2;
  func_0x00010bfebe20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fc60();
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7560(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b34c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b1568;
  func_0x00010bfb9440();
  if ((int)puVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bec8a60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf5e0(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069970b8; end: 1069971b7; -[SCComposerPeopleIncomingFriendStore _observeActiveStoryInfo] */

void FUN_1069970b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1120();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069971b8; end: 1069971ff;  */

void FUN_1069971b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff1a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106997200; end: 106997397; -[SCComposerPeopleIncomingFriendStore _observeIncomingSnapchatters] */

void FUN_106997200(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfec000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106997398; end: 1069973df;  */

void FUN_106997398(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069973e0; end: 1069973e3; -[SCComposerPeopleIncomingFriendStore _didReceiveIncomingSnapchattersFromObservable:] */

void FUN_1069973e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchIncomingFriendsAndPublish_1125620d8);
  return;
}



/* Entry: 1069973e4; end: 10699743f; -[SCComposerPeopleIncomingFriendStore _didReceiveActiveStoryInfos:] */

void FUN_1069973e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071d00(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
    func_0x00010be11d00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106997440; end: 106997527; -[SCComposerPeopleIncomingFriendStore hideIncomingFriendWithRequest:] */

void FUN_106997440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfebea0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106997528; end: 10699756f;  */

void FUN_106997528(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106997570; end: 1069975d7; -[SCComposerPeopleIncomingFriendStore _hideIncomingFriend:] */

void FUN_106997570(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126ae5c0;
    func_0x00010bfe6900(PTR_PTR_1126ae5c0,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1069975d8; end: 1069976cf; -[SCComposerPeopleIncomingFriendStore viewedIncomingFriendsWithRequests:] */

void FUN_1069975d8(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069976d0; end: 106997703;  */

void FUN_1069976d0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106997704; end: 1069979cf; -[SCComposerPeopleIncomingFriendStore _viewedIncomingFriendsWithRequestsInPerformer:] */

void FUN_106997704(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_1069979d0;
  uStack_118 = 0x1069979e0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_110 = puVar2;
  _dispatch_group_create();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar7 = *plStack_170;
    do {
      lVar5 = 0;
      do {
        if (*plStack_170 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_178 + lVar5 * 8);
        _dispatch_group_enter(puVar2);
        func_0x00010c2923e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_1b0 = puVar1;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_1069979e8;
        puStack_198 = &UNK_11085ba88;
        puStack_188 = &uStack_138;
        _objc_retain(puVar2);
        puStack_190 = puVar2;
        func_0x00010bfebea0(param_1);
        _objc_release(uVar6);
        _objc_release(puStack_190);
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_1b8,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x106997a20;
  puStack_1d0 = &UNK_110850308;
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  puStack_1c8 = &uStack_138;
  func_0x000100bc0718(puVar2,uVar6,&puStack_1e8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(puStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1069979d0; end: 1069979e7;  */

void FUN_1069979d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069979e8; end: 106997a5b;  */

void FUN_1069979e8(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                        param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106997a5c; end: 106997ab3; -[SCComposerPeopleIncomingFriendStore _updateFriendRequestViewedWithSnapchatters:] */

void FUN_106997a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2860a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106997ab4; end: 106997bd3; -[SCComposerPeopleIncomingFriendStore incomingFriendWithUserId:completionBlock:] */

void FUN_106997ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106997bd4; end: 106997c07;  */

void FUN_106997bd4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be380a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106997c08; end: 106997d17; -[SCComposerPeopleIncomingFriendStore _incomingFriendForUserId:completionBlock:] */

void FUN_106997c08(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106997d18;
    puStack_50 = &UNK_11086d228;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010c2448c0(uVar2,param_2,param_3,uVar4,&puStack_68);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106997d18; end: 106997d2b;  */

void FUN_106997d18(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000106997d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 106997d2c; end: 106997d97; -[SCComposerPeopleIncomingFriendStore _subtextWithDebuggingInfo:incomingFriend:] */

void FUN_106997d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fc60();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110db2378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106997d98; end: 106997e8b; -[SCComposerPeopleIncomingFriendStore _createLazyPerformerWithPerformerProvider:] */

void FUN_106997d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106997e30;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106997e8c; end: 106997e8f; -[SCComposerPeopleIncomingFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_106997e8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchIncomingFriendsAndPublishI_1125620e0);
  return;
}



/* Entry: 106997e90; end: 106997e93; -[SCComposerPeopleIncomingFriendStore didStartSnapchattersUpdateDataRequest:] */

void FUN_106997e90(void)

{
  return;
}



/* Entry: 106997e94; end: 106997e97; -[SCComposerPeopleIncomingFriendStore getIncomingFriendsWithCompletion:] */

void FUN_106997e94(void)

{
  return;
}



/* Entry: 106997e98; end: 106997ea7; -[SCComposerPeopleIncomingFriendStore onIncomingFriendsUpdatedWithCallback:] */

undefined ** FUN_106997e98(void)

{
  return &PTR___NSConcreteGlobalBlock_11094f7d0;
}



/* Entry: 106997ea8; end: 106997eaf; -[SCComposerPeopleIncomingFriendStore incomingFriendsObservable] */

undefined8 FUN_106997ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106997eb0; end: 106997edf; -[SCComposerPeopleIncomingFriendStore setIncomingFriendsObservable:] */

void FUN_106997eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106997ee0; end: 106997fb7; -[SCComposerPeopleIncomingFriendStore .cxx_destruct] */

void FUN_106997ee0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 106997fb8; end: 1069981f3; -[SCComposerPeopleRecentFriendStore initWithSnapchattersDataFetcher:snapchattersDataTracker:hiddenSuggestionCoordinator:performerProvider:userInfoServices:circumstanceEngine:] */

undefined1 *
FUN_106997fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f3fd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdef1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    func_0x00010be3b360(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069981f4; end: 10699821f; -[SCComposerPeopleRecentFriendStore _initializeData] */

void FUN_1069981f4(undefined8 param_1)

{
  func_0x00010be13720();
  func_0x00010be13760(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be13750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchRecentlyHiddenSuggestionsA_112562770);
  return;
}



/* Entry: 106998220; end: 106998313; -[SCComposerPeopleRecentFriendStore _createLazyPerformerWithPerformerProvider:] */

void FUN_106998220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1069982b8;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106998314; end: 10699841f; -[SCComposerPeopleRecentFriendStore _fetchRecentlyIgnoredIncomingFriendsAndPublish] */

void FUN_106998314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf00220(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106998420; end: 106998487;  */

void FUN_106998420(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84340();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106998488; end: 10699856b; -[SCComposerPeopleRecentFriendStore _publishRecentlyIgnoredIncomingFriendsWithSnapchatters:error:] */

void FUN_106998488(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_4 == 0) {
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11094f7f0);
    puVar1 = param_3;
    func_0x00010901f4ac();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000100504554();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    param_3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10699856c; end: 10699866f;  */

undefined8 FUN_10699856c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfebe20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0737e0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106998670; end: 106998777; -[SCComposerPeopleRecentFriendStore _fetchRecentlyAddedFriendsAndPublish] */

void FUN_106998670(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0eea20(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106998778; end: 1069987df;  */

void FUN_106998778(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84300();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069987e0; end: 106998913; -[SCComposerPeopleRecentFriendStore _publishRecentlyAddedFriendsWithSnapchatters:error:] */

void FUN_1069987e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106998914;
  puStack_50 = &UNK_11085a548;
  lStack_48 = param_1;
  func_0x0001006372a4(param_3,&puStack_68);
  uVar3 = param_3;
  func_0x00010901f4ac();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000100504554();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106998914; end: 1069989bf;  */

uint FUN_106998914(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bec434();
  if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010901c54c(), (uVar1 & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = (uint)uVar3 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1069989c0; end: 106998a17;  */

void FUN_1069989c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef89e0();
  func_0x00010bf655e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106998a18; end: 106998af3;  */

void FUN_106998a18(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  puVar2 = PTR_PTR_1126cf6a0;
  _objc_alloc(PTR_PTR_1126cf6a0);
  func_0x00010c05a680();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bfb8280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef89e0(uVar3);
  func_0x00010c0df720(param_1 * 1000.0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165900(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106998af4; end: 106998bfb; -[SCComposerPeopleRecentFriendStore _fetchRecentlyHiddenSuggestionsAndPublish] */

void FUN_106998af4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa76e0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}


