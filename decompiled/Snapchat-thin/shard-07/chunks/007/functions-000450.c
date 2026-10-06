/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10584851c; end: 1058489ef;  */

void FUN_10584851c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf1c8;
  _objc_alloc_init(PTR_PTR_1126bf1c8);
  lVar8 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c0720c0();
  _objc_release(lVar8);
  if ((int)lVar2 == 0) {
    lVar8 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar8 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be04960(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar1);
    _objc_release(uVar9);
    _objc_release(lVar2);
    _objc_release(lVar8);
    lVar8 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170a80(puVar1);
    _objc_release(lVar2);
    _objc_release(lVar8);
    lVar8 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171480(puVar1);
    _objc_release(lVar2);
    _objc_release(lVar8);
    lVar8 = param_2;
    func_0x00010bf5b820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078f60();
    func_0x00010c1b47a0(puVar1);
    _objc_release(lVar8);
    if (lVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126bf1d0;
      _objc_alloc_init();
      func_0x00010c243560(lVar6);
      func_0x00010c20e2c0(puVar10);
      func_0x00010c06d240(lVar6);
      func_0x00010c1af880(puVar10);
    }
    puVar7 = puVar10;
    func_0x00010c06d240();
    if ((int)puVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lVar8 = param_2;
      func_0x00010bfb9b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd3fe0(uVar9);
      func_0x00010c16fe60(puVar10);
      _objc_release(lVar8);
    }
    lVar8 = lVar6;
    func_0x00010bf1a5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      puVar7 = PTR_PTR_1126bf1d8;
      _objc_alloc_init(PTR_PTR_1126bf1d8);
      lVar8 = lVar6;
      func_0x00010bf1a5c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65700();
      func_0x00010c1703a0(puVar7);
      _objc_release(lVar8);
      lVar8 = lVar6;
      func_0x00010bf1a5c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d0e40();
      func_0x00010c170400(puVar7);
      _objc_release(lVar8);
      func_0x00010c170380(puVar10);
      _objc_release(puVar7);
    }
    lVar8 = param_2;
    func_0x00010bfb8280(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07fc80();
    func_0x00010c1b12e0(puVar10);
    _objc_release(lVar8);
    func_0x00010c19fda0(puVar1);
    _objc_release(puVar10);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be04960(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar1);
    _objc_release(lVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170a80(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171480(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar5);
    lVar6 = param_2;
    func_0x00010bf5b820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078f60();
    func_0x00010c1b47a0(puVar1);
  }
  _objc_release(lVar6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058489f0; end: 105848a7b;  */

void FUN_1058489f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126bc310;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105848a7c;
  puStack_48 = &UNK_11084b9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010c2775c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e06e78,&puStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_40);
  return;
}



/* Entry: 105848a7c; end: 105848a8f;  */

void FUN_105848a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onFetchedPublicUserInfo__112616b28,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 105848a90; end: 105848b37; -[SCMapSDKPublicUserInfoProvider _displayNameFromDisplayName:username:isMutualFriend:] */

void FUN_105848a90(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  lVar1 = param_3;
  if ((lVar2 == 0) && (lVar2 = param_4, func_0x00010c08fa60(), lVar1 = param_4, lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
    if ((param_5 != 0) && (lVar1 != 0)) {
      func_0x00010901e6c8(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105848b38; end: 105848d57; -[SCMapSDKPublicUserInfoProvider _bestFriendTypeFromFriendmojis:] */

ulong FUN_105848b38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lVar9 * 8);
        func_0x00010bf33560(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar5 = puVar3;
    func_0x00010bf4b900();
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = puVar3;
      func_0x00010bf4b900();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = puVar3;
          func_0x00010bf4b900();
          if (((ulong)puVar5 & 1) == 0) {
            puVar5 = puVar3;
            func_0x00010bf4b900();
            if (((ulong)puVar5 & 1) == 0) {
              puVar5 = puVar3;
              func_0x00010bf4b900();
              uVar6 = 6;
              if ((int)puVar5 == 0) {
                uVar6 = 0;
              }
              uVar8 = (ulong)uVar6;
            }
            else {
              uVar8 = 5;
            }
          }
          else {
            uVar8 = 4;
          }
        }
        else {
          uVar8 = 3;
        }
      }
      else {
        uVar8 = 2;
      }
    }
    else {
      uVar8 = 1;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
  uVar8 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(uVar8,0);
  return uVar8;
}



/* Entry: 105848d58; end: 105848e0f; -[SCMapSDKPublicUserInfoProvider .cxx_destruct] */

void FUN_105848d58(long param_1)

{
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



/* Entry: 105848e10; end: 105849017; -[SCMapSDKServiceProvider _initializeSdk] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105848e10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  FUN_10584bf6c(*(undefined8 *)(param_1 + _DAT_11272ab60),1);
  param_1 = param_1 + _DAT_11272aba0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf164e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126bf1f0;
  func_0x00010bfd6320();
  if (((ulong)puVar3 & 1) == 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105849018;
    uStack_70 = 0x105849028;
    puStack_68 = (undefined *)0x0;
    func_0x00010c2775c0(PTR_PTR_1126bc310);
    func_0x00010c18b0a0(PTR_PTR_1126bf1f0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puStack_68);
  }
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105849018;
  uStack_70 = 0x105849028;
  puVar4 = PTR_PTR_1126bf1f0;
  func_0x00010bfc49e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc310;
  puStack_68 = puVar4;
  _objc_retain(lVar2);
  func_0x00010c2775c0(puVar3);
  uVar5 = puStack_88[5];
  _objc_retain(uVar5);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105849018; end: 10584902f;  */

void FUN_105849018(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105849030; end: 105849073;  */

void FUN_105849030(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bf1f0;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105849074; end: 1058497af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105849074(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bf1f8;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010bf05ba0(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf05420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168e60();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010bf066e0(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf05420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169460();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010be866e0(uVar5,param_4,*(undefined8 *)(param_3 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180a00(puVar1,param_4,uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdef920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf640(puVar1,param_4,uVar5);
  _objc_release(uVar5);
  if (*(long *)(param_3 + 0x20) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_3 + 0x20) + (long)_DAT_11272ab8c;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010c293780(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c07c8c0();
  func_0x00010c17c7c0(puVar1,param_4,(uint)lVar7 ^ 1);
  _objc_release(lVar6);
  _objc_release(lVar14);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdcf980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ab20(puVar1,param_4,uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdd7bc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175180(puVar1,param_4,uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010be05980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190ca0(puVar1,param_4,uVar5);
  _objc_release(uVar5);
  lVar14 = *(long *)(param_3 + 0x20) + (long)_DAT_11272ab64;
  _objc_loadWeakRetained(lVar14);
  lVar6 = lVar14;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c149a20();
  func_0x00010c1f54a0(puVar1,param_4,lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  lVar14 = *(long *)(param_3 + 0x20) + (long)_DAT_11272ab68;
  _objc_loadWeakRetained();
  lVar6 = lVar14;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  if (lVar8 != 0) {
    puVar2 = PTR_PTR_1126bf1b8;
    _objc_alloc_init(PTR_PTR_1126bf1b8);
    func_0x00010c18cb00(puVar1,param_4,puVar2);
    _objc_release(puVar2);
    func_0x00010bf51c80(lVar8);
    puVar2 = puVar1;
    func_0x00010bf709e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9120(param_1);
    _objc_release(puVar2);
    func_0x00010bf51c80(lVar8);
    puVar2 = puVar1;
    func_0x00010bf709e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be5e0(param_2);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf12300(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar1,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0160(puVar1,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  FUN_1058497b0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c127a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184ae0(puVar1,param_4,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar9);
  func_0x00010bcbeb30();
  func_0x00010c1f7920(puVar1,param_4,uVar9);
  if (*(long *)(param_3 + 0x20) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_3 + 0x20) + (long)_DAT_11272aba8;
    _objc_loadWeakRetained(lVar14);
  }
  func_0x00010c1233a0(lVar14);
  _objc_release(lVar14);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000106c1d6cc();
  func_0x00010c213a60(puVar1,param_4,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bf200;
  _objc_alloc();
  lVar14 = *(long *)(param_3 + 0x20) + (long)_DAT_11272ab6c;
  _objc_loadWeakRetained(lVar14);
  lVar6 = lVar14;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048900(puVar2,param_4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar14);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e07818;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_80,&ppuStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdf2180();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bf208;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdec6a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_3 + 0x20) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_3 + 0x20) + (long)_DAT_11272ab9c;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010bf1b520(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdf0100();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdec8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bdec0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064720(uVar13,param_4,puVar1,puVar3,uVar5,puVar4,uVar10,lVar7,uVar11,0,uVar9,uVar12,0
                     );
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (puVar1 != (undefined *)0x0) {
    _objc_loadWeakRetained(puVar1 + _DAT_11272ab94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058497b0; end: 1058497d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058497b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272ab94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058497d4; end: 1058498ab; -[SCMapSDKServiceProvider _createPublicUserInfoProvider] */

void FUN_1058497d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105849018;
  uStack_30 = 0x105849028;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1058498ac;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c2775c0(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e07898,
                      &puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058498ac; end: 105849ad3;  */

void FUN_1058498ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar19;
  
  puVar1 = PTR_PTR_1126bf210;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_105849ad4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_105849ad4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058497b0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058497b0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058497b0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058497b0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058497b0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105849af8();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0498c0(puVar1,param_2,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,uVar17);
  lVar19 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar18 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar1;
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105849ad4; end: 105849b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105849ad4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272ab90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105849b1c; end: 105849bf3; -[SCMapSDKServiceProvider _createContentObjectResolver] */

void FUN_105849b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105849018;
  uStack_30 = 0x105849028;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105849bf4;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c2775c0(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e078b8,
                      &puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105849bf4; end: 105849dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105849bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105849af8(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf1f440();
  _objc_release(uVar9);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20) + (long)_DAT_11272aba4;
    _objc_loadWeakRetained();
  }
  puVar3 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105849dc8;
  puStack_70 = &UNK_1108b77f0;
  lStack_68 = lVar11;
  _objc_retain(lVar11);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bf218;
  _objc_alloc();
  lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_11272ab70;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20) + (long)_DAT_11272ab74;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003500(puVar4,param_2,lVar6,puVar3,(uint)uVar2 ^ 1,lVar8);
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar4;
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(lStack_68);
  _objc_release(lVar11);
  return;
}



/* Entry: 105849dc8; end: 105849def;  */

void FUN_105849dc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105849df0; end: 105849ec7; -[SCMapSDKServiceProvider _createCrashLogger] */

void FUN_105849df0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105849018;
  uStack_30 = 0x105849028;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105849ec8;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c2775c0(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e078d8,
                      &puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105849ec8; end: 105849fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105849ec8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11272ab78;
  lVar1 = *(long *)(param_1 + 0x20) + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126bf220;
    _objc_alloc();
    lVar7 = *(long *)(param_1 + 0x20) + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar2 = lVar7;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11272ab7c;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf054a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0064a0(puVar3,param_2,lVar2,lVar4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar7);
    return;
  }
  return;
}



/* Entry: 105849fdc; end: 10584a0b3; -[SCMapSDKServiceProvider _createMemoryFetcher] */

void FUN_105849fdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105849018;
  uStack_30 = 0x105849028;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10584a0b4;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c2775c0(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e078f8,
                      &puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584a0b4; end: 10584a13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10584a0b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bf228;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11272ab80;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0c8ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a720(puVar1,param_2,lVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10584a140; end: 10584a217; -[SCMapSDKServiceProvider _createCofProvider] */

void FUN_10584a140(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105849018;
  uStack_30 = 0x105849028;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10584a218;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c2775c0(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e07918,
                      &puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10584a218; end: 10584a29f;  */

void FUN_10584a218(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bf230;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105849af8(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,uVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10584a2a0; end: 10584ad5f; -[SCMapSDKServiceProvider _createLocalizedStrings] */

void FUN_10584a2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined8 uVar59;
  long lVar60;
  undefined *puVar61;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e07938);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_400 = &PTR____CFConstantStringClassReference_110e06ed8;
  puVar2 = puVar1;
  func_0x00010b0aeaa4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3f8 = &PTR____CFConstantStringClassReference_110e06ef8;
  puVar3 = puVar2;
  puStack_238 = puVar2;
  FUN_10584ba2c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ddee18;
  puVar4 = puVar3;
  puStack_230 = puVar3;
  func_0x00010584ba44();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110e06f18;
  puVar61 = puVar4;
  puStack_228 = puVar4;
  func_0x00010584ba5c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110e06f38;
  puVar5 = puVar61;
  puStack_220 = puVar61;
  func_0x00010584ba74();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110e06f78;
  puVar6 = puVar5;
  puStack_218 = puVar5;
  func_0x00010584ba8c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110e06f98;
  puVar7 = puVar6;
  puStack_210 = puVar6;
  func_0x00010584baa4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e06f58;
  puVar8 = puVar7;
  puStack_208 = puVar7;
  func_0x00010584babc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110e06fb8;
  puVar9 = puVar8;
  puStack_200 = puVar8;
  func_0x00010584bad4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110e06fd8;
  puVar10 = puVar9;
  puStack_1f8 = puVar9;
  func_0x00010584baec();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110e06ff8;
  puVar11 = puVar10;
  puStack_1f0 = puVar10;
  func_0x00010584bb04();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110e07018;
  puVar12 = puVar11;
  puStack_1e8 = puVar11;
  func_0x00010584bb1c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e07038;
  puVar13 = puVar12;
  puStack_1e0 = puVar12;
  func_0x00010584bb34();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_398 = &PTR____CFConstantStringClassReference_110e07058;
  puVar14 = puVar13;
  puStack_1d8 = puVar13;
  func_0x00010584bb4c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_390 = &PTR____CFConstantStringClassReference_110e07078;
  puVar15 = puVar14;
  puStack_1d0 = puVar14;
  func_0x00010584bb64();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_388 = &PTR____CFConstantStringClassReference_110e07098;
  puVar16 = puVar15;
  puStack_1c8 = puVar15;
  func_0x00010584bb7c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_380 = &PTR____CFConstantStringClassReference_110e070b8;
  puVar17 = puVar16;
  puStack_1c0 = puVar16;
  func_0x00010584bb94();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_378 = &PTR____CFConstantStringClassReference_110e070d8;
  puVar18 = puVar17;
  puStack_1b8 = puVar17;
  func_0x00010584bbac();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_370 = &PTR____CFConstantStringClassReference_110e070f8;
  puVar19 = puVar18;
  puStack_1b0 = puVar18;
  func_0x00010584bbc4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_368 = &PTR____CFConstantStringClassReference_110e07118;
  puVar20 = puVar19;
  puStack_1a8 = puVar19;
  func_0x00010584bbdc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_360 = &PTR____CFConstantStringClassReference_110e07138;
  puVar21 = puVar20;
  puStack_1a0 = puVar20;
  func_0x00010584bbf4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_358 = &PTR____CFConstantStringClassReference_110e07158;
  puVar22 = puVar21;
  puStack_198 = puVar21;
  func_0x00010584bc0c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_350 = &PTR____CFConstantStringClassReference_110e07178;
  puVar23 = puVar22;
  puStack_190 = puVar22;
  func_0x00010584bc24();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_348 = &PTR____CFConstantStringClassReference_110e07198;
  puVar24 = puVar23;
  puStack_188 = puVar23;
  func_0x00010584bc3c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_340 = &PTR____CFConstantStringClassReference_110e071b8;
  puVar25 = puVar24;
  puStack_180 = puVar24;
  func_0x00010584bc54();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_338 = &PTR____CFConstantStringClassReference_110e071d8;
  puVar26 = puVar25;
  puStack_178 = puVar25;
  func_0x00010584bc6c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_330 = &PTR____CFConstantStringClassReference_110e071f8;
  puVar27 = puVar26;
  puStack_170 = puVar26;
  func_0x00010584bc84();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_328 = &PTR____CFConstantStringClassReference_110e07218;
  puVar28 = puVar27;
  puStack_168 = puVar27;
  func_0x00010584bc9c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_320 = &PTR____CFConstantStringClassReference_110e07238;
  puVar29 = puVar28;
  puStack_160 = puVar28;
  func_0x00010584bcb4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_318 = &PTR____CFConstantStringClassReference_110e07258;
  puVar30 = puVar29;
  puStack_158 = puVar29;
  func_0x00010584bccc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_310 = &PTR____CFConstantStringClassReference_110e07278;
  puVar31 = puVar30;
  puStack_150 = puVar30;
  func_0x00010584bce4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e07298;
  puVar32 = puVar31;
  puStack_148 = puVar31;
  func_0x00010584bcfc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_300 = &PTR____CFConstantStringClassReference_110e072b8;
  puVar33 = puVar32;
  puStack_140 = puVar32;
  func_0x00010584bd14();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110e072d8;
  puVar34 = puVar33;
  puStack_138 = puVar33;
  func_0x00010584bd2c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e072f8;
  puVar35 = puVar34;
  puStack_130 = puVar34;
  func_0x00010584bd44();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110e07318;
  puVar36 = puVar35;
  puStack_128 = puVar35;
  func_0x00010584bd5c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110e07358;
  puVar37 = puVar36;
  puStack_120 = puVar36;
  func_0x00010584bd74();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110e07378;
  puVar38 = puVar37;
  puStack_118 = puVar37;
  func_0x00010584bd8c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110e07338;
  puVar39 = puVar38;
  puStack_110 = puVar38;
  func_0x00010584bda4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e07398;
  puVar40 = puVar39;
  puStack_108 = puVar39;
  func_0x00010584bdbc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e073b8;
  puVar41 = puVar40;
  puStack_100 = puVar40;
  func_0x00010584bdd4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e073d8;
  puVar42 = puVar41;
  puStack_f8 = puVar41;
  func_0x00010584bdec();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110e073f8;
  puVar43 = puVar42;
  puStack_f0 = puVar42;
  func_0x00010584be04();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110e07418;
  puVar44 = puVar43;
  puStack_e8 = puVar43;
  func_0x00010584be1c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110e07438;
  puVar45 = puVar44;
  puStack_e0 = puVar44;
  func_0x00010584be34();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_298 = &PTR____CFConstantStringClassReference_110e07458;
  puVar46 = puVar45;
  puStack_d8 = puVar45;
  func_0x00010584be4c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_290 = &PTR____CFConstantStringClassReference_110e07478;
  puVar47 = puVar46;
  puStack_d0 = puVar46;
  func_0x00010584be64();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_288 = &PTR____CFConstantStringClassReference_110e07498;
  puVar48 = puVar47;
  puStack_c8 = puVar47;
  func_0x00010584be7c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_280 = &PTR____CFConstantStringClassReference_110dca058;
  puVar49 = puVar48;
  puStack_c0 = puVar48;
  func_0x00010584be94();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_278 = &PTR____CFConstantStringClassReference_110e074b8;
  puVar50 = puVar49;
  puStack_b8 = puVar49;
  func_0x00010584beac();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_270 = &PTR____CFConstantStringClassReference_110e074d8;
  puVar51 = puVar50;
  puStack_b0 = puVar50;
  func_0x00010584bec4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e074f8;
  puVar52 = puVar51;
  puStack_a8 = puVar51;
  func_0x00010584bedc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = &PTR____CFConstantStringClassReference_110e04f78;
  puVar53 = puVar52;
  puStack_a0 = puVar52;
  func_0x00010584bef4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_258 = &PTR____CFConstantStringClassReference_110db80d8;
  puVar54 = puVar53;
  puStack_98 = puVar53;
  func_0x00010584bf0c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e07518;
  puVar55 = puVar54;
  puStack_90 = puVar54;
  func_0x00010584bf24();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e07538;
  puVar56 = puVar55;
  puStack_88 = puVar55;
  func_0x00010584bf3c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e07558;
  puVar57 = puVar56;
  puStack_80 = puVar56;
  func_0x00010584bf54();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar57;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_238,&ppuStack_400,
                      0x39);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(puVar55);
  _objc_release(puVar54);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar61);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar3 = puVar58;
  func_0x00010bf529e0(puVar58);
  func_0x00010bffc4a0(puVar2,param_2,puVar3);
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar3 = puVar58;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar60 = *plStack_4b0;
    do {
      puVar61 = (undefined *)0x0;
      do {
        if (*plStack_4b0 != lVar60) {
          _objc_enumerationMutation(puVar3);
        }
        uVar59 = *(undefined8 *)(lStack_4b8 + (long)puVar61 * 8);
        puVar5 = PTR_PTR_1126bf238;
        _objc_alloc_init();
        func_0x00010c1b6b40();
        puVar6 = puVar58;
        func_0x00010c0e00e0(puVar58,param_2,uVar59);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160(puVar5,param_2,puVar6);
        _objc_release(puVar6);
        func_0x00010befa120(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        puVar61 = puVar61 + 1;
      } while (puVar4 != puVar61);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_4c0,auStack_480,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar58);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126bc310;
    func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e07958);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc_init(PTR_PTR_1126b1df0);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c13b4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar61 = puVar4;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar2,param_2,puVar61);
    _objc_release(puVar61);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10584ad60; end: 10584ae1f; -[SCMapSDKServiceProvider _assetPath] */

void FUN_10584ad60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e07958);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c13b4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10584ae20; end: 10584ae9f; -[SCMapSDKServiceProvider _documentsPath] */

void FUN_10584ae20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e07978);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  puVar3 = puVar2;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10584aea0; end: 10584af83; -[SCMapSDKServiceProvider _cachePath] */

void FUN_10584aea0(void)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105849018;
  uStack_30 = 0x105849028;
  uStack_28 = 0;
  func_0x00010c2775c0(PTR_PTR_1126bc310);
  func_0x00010c220160(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10584af84; end: 10584b137;  */

void FUN_10584af84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
  puVar1 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bdc2c60(puVar1,param_2,&PTR____CFConstantStringClassReference_110e06eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55da0();
  _objc_release(puVar1);
  func_0x00010c1ecdc0(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68,
                      *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18,0);
  puVar1 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,&PTR____CFConstantStringClassReference_110e06e98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10584b138; end: 10584b693; -[SCMapSDKServiceProvider _readSDKConfigsWithBasemapPersonalizationConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10584b138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e079b8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x000105849af8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e07598;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07598,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e07578;
  func_0x00010584b6f4(&PTR____CFConstantStringClassReference_110e07578,0x3c);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e075b8;
  func_0x00010584b754(&PTR____CFConstantStringClassReference_110e075b8,
                      &PTR____CFConstantStringClassReference_110dce818);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e075d8;
  func_0x00010584b754(&PTR____CFConstantStringClassReference_110e075d8,
                      &PTR____CFConstantStringClassReference_110dce818);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110e075f8;
  func_0x00010584b754(&PTR____CFConstantStringClassReference_110e075f8,
                      &PTR____CFConstantStringClassReference_110dce818);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR____CFConstantStringClassReference_110e07638;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07638,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf12300(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &PTR____CFConstantStringClassReference_110e077d8;
  func_0x00010584b754(&PTR____CFConstantStringClassReference_110e077d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  ppuVar14 = &PTR____CFConstantStringClassReference_110e07618;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07618,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR____CFConstantStringClassReference_110e07678;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07678,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = &PTR____CFConstantStringClassReference_110e07698;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07698,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR____CFConstantStringClassReference_110e076b8;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e076b8,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x000105849af8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000109021d24();
  ppuVar18 = &PTR____CFConstantStringClassReference_110e076d8;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e076d8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  ppuVar19 = &PTR____CFConstantStringClassReference_110e076f8;
  func_0x00010584b6f4(&PTR____CFConstantStringClassReference_110e076f8,0x708);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar19;
  func_0x000109021c38();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = &PTR____CFConstantStringClassReference_110e07718;
  func_0x00010584b754();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b9188;
  _objc_alloc(PTR_PTR_1126b9188);
  lVar2 = param_1 + _DAT_11272ab84;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3c40(puVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar12 = puVar11;
  func_0x00010bfc20a0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = &PTR____CFConstantStringClassReference_110e07738;
  func_0x00010584b754(&PTR____CFConstantStringClassReference_110e07738,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  ppuVar23 = &PTR____CFConstantStringClassReference_110e07778;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07778,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = &PTR____CFConstantStringClassReference_110e07798;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e07798,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = &PTR____CFConstantStringClassReference_110e077b8;
  FUN_10584b694(&PTR____CFConstantStringClassReference_110e077b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5d100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    ppuVar26 = &PTR____CFConstantStringClassReference_110e07758;
    func_0x00010584b754(&PTR____CFConstantStringClassReference_110e07758,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(ppuVar26);
  }
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(puVar11);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10584b694; end: 10584b7c7;  */

void FUN_10584b694(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf248;
  _objc_retain();
  _objc_alloc_init(puVar1);
  func_0x00010c1cafa0();
  _objc_release(param_1);
  func_0x00010c173040(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10584b7c8; end: 10584b923; -[SCMapSDKServiceProvider _mapsAdvertisingPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10584b7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126bf240;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010bfc20a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c164580(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8c98;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c189ee0(puVar1,param_2,puVar3);
  }
  puVar4 = PTR_PTR_1126b8c98;
  func_0x00010c117fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c18a0a0(puVar1,param_2,puVar4);
  }
  param_1 = param_1 + _DAT_11272ab88;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bef4940();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010befdde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  func_0x00010c164240(puVar1,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10584b924; end: 10584ba2b; -[SCMapSDKServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10584b924(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272aba8);
  _objc_destroyWeak(param_1 + _DAT_11272ab88);
  _objc_destroyWeak(param_1 + _DAT_11272ab84);
  _objc_destroyWeak(param_1 + _DAT_11272ab6c);
  _objc_destroyWeak(param_1 + _DAT_11272ab68);
  _objc_destroyWeak(param_1 + _DAT_11272ab64);
  _objc_destroyWeak(param_1 + _DAT_11272ab80);
  _objc_destroyWeak(param_1 + _DAT_11272aba4);
  _objc_destroyWeak(param_1 + _DAT_11272ab7c);
  _objc_destroyWeak(param_1 + _DAT_11272ab74);
  _objc_destroyWeak(param_1 + _DAT_11272aba0);
  _objc_destroyWeak(param_1 + _DAT_11272ab78);
  _objc_destroyWeak(param_1 + _DAT_11272ab9c);
  _objc_destroyWeak(param_1 + _DAT_11272ab98);
  _objc_destroyWeak(param_1 + _DAT_11272ab70);
  _objc_destroyWeak(param_1 + _DAT_11272ab94);
  _objc_destroyWeak(param_1 + _DAT_11272ab90);
  _objc_destroyWeak(param_1 + _DAT_11272ab8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ab60,0);
  return;
}



/* Entry: 10584ba2c; end: 10584bf6b;  */

void FUN_10584ba2c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e06ef8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e06ef8,
                      &PTR____CFConstantStringClassReference_110e079d8,0);
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



/* Entry: 10584bf6c; end: 10584bfe3;  */

void FUN_10584bf6c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7820,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10584bfe4; end: 10584c05f; +[SCMSTMapsAdvertisingPayload descriptor] */

undefined * FUN_10584bfe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a725f0,
                        &PTR____CFConstantStringClassReference_110e079f8,&PTR_DAT_113105938,
                        &PTR_DAT_113105950,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0c78 = puVar1;
  }
  return puRam00000001136c0c78;
}



/* Entry: 10584c060; end: 10584c0ab; -[SCMapUserPreferencesImpl dealloc] */

void FUN_10584c060(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ea9a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10584c0ac; end: 10584c0bb; -[SCMapUserPreferencesImpl alertRequiredBeforeLeavingGhostMode] */

void FUN_10584c0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07a18);
  return;
}



/* Entry: 10584c0bc; end: 10584c0cb; -[SCMapUserPreferencesImpl setAlertRequiredBeforeLeavingGhostMode:] */

void FUN_10584c0bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07a18);
  return;
}



/* Entry: 10584c0cc; end: 10584c0db; -[SCMapUserPreferencesImpl lastLocationSharingPreferencesWasValis] */

void FUN_10584c0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07b58);
  return;
}



/* Entry: 10584c0dc; end: 10584c0eb; -[SCMapUserPreferencesImpl setLastLocationSharingPreferencesWasValis:] */

void FUN_10584c0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07b58);
  return;
}



/* Entry: 10584c0ec; end: 10584c113; -[SCMapUserPreferencesImpl lastNotSharingLocationTooltipDisplayDate] */

void FUN_10584c0ec(long param_1,undefined8 param_2)

{
  func_0x00010bf88360(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e07a38);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10584c114; end: 10584c143; -[SCMapUserPreferencesImpl setLastNotSharingLocationTooltipDisplayDate:] */

void FUN_10584c114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26f320(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07a38);
  return;
}



/* Entry: 10584c144; end: 10584c153; -[SCMapUserPreferencesImpl numberOfTimesUserHasSeenNotSharingLocationTooltip] */

void FUN_10584c144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c282790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_unsignedIntegerForKey__11267e408,
             &PTR____CFConstantStringClassReference_110e07a58);
  return;
}



/* Entry: 10584c154; end: 10584c163; -[SCMapUserPreferencesImpl setNumberOfTimesUserHasSeenNotSharingLocationTooltip:] */

void FUN_10584c154(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setUnsignedInteger_forKey__112664a18,param_3,
             &PTR____CFConstantStringClassReference_110e07a58);
  return;
}



/* Entry: 10584c164; end: 10584c173; -[SCMapUserPreferencesImpl locationSharingNotificationDisplayCount] */

void FUN_10584c164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c282790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_unsignedIntegerForKey__11267e408,
             &PTR____CFConstantStringClassReference_110e07a78);
  return;
}



/* Entry: 10584c174; end: 10584c183; -[SCMapUserPreferencesImpl setLocationSharingNotificationDisplayCount:] */

void FUN_10584c174(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setUnsignedInteger_forKey__112664a18,param_3,
             &PTR____CFConstantStringClassReference_110e07a78);
  return;
}



/* Entry: 10584c184; end: 10584c193; -[SCMapUserPreferencesImpl lastLocationSharingNotificationDisplayTimeIntervalSince1970] */

void FUN_10584c184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_doubleForKey__1125bfa80,
             &PTR____CFConstantStringClassReference_110e07ab8);
  return;
}



/* Entry: 10584c194; end: 10584c1a3; -[SCMapUserPreferencesImpl setLastLocationSharingNotificationDisplayTimeIntervalSince1970:] */

void FUN_10584c194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07ab8);
  return;
}



/* Entry: 10584c1a4; end: 10584c203; -[SCMapUserPreferencesImpl userIdListToNotShowLocationCarouselPrompt] */

void FUN_10584c1a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0a000(uVar1,param_2,&PTR____CFConstantStringClassReference_110e07ad8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10584c204; end: 10584c24b; -[SCMapUserPreferencesImpl setUserIdListToNotShowLocationCarouselPrompt:] */

void FUN_10584c204(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,param_3,
                      &PTR____CFConstantStringClassReference_110e07ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10584c24c; end: 10584c273; -[SCMapUserPreferencesImpl dateWhenLocationSharingUpsellServiceWasChecked] */

void FUN_10584c24c(long param_1,undefined8 param_2)

{
  func_0x00010bf88360(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e07af8);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10584c274; end: 10584c2a3; -[SCMapUserPreferencesImpl setDateWhenLocationSharingUpsellServiceWasChecked:] */

void FUN_10584c274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26f320(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07af8);
  return;
}



/* Entry: 10584c2a4; end: 10584c2b3; -[SCMapUserPreferencesImpl ghostModeEnabledBecauseOfInsufficientLocationAccuracy] */

void FUN_10584c2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07b18);
  return;
}



/* Entry: 10584c2b4; end: 10584c2c3; -[SCMapUserPreferencesImpl setGhostModeEnabledBecauseOfInsufficientLocationAccuracy:] */

void FUN_10584c2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07b18);
  return;
}



/* Entry: 10584c2c4; end: 10584c2d3; -[SCMapUserPreferencesImpl displayedLocationAccuracyGhostModeAlert] */

void FUN_10584c2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07b38);
  return;
}



/* Entry: 10584c2d4; end: 10584c2e3; -[SCMapUserPreferencesImpl setDisplayedLocationAccuracyGhostModeAlert:] */

void FUN_10584c2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07b38);
  return;
}



/* Entry: 10584c2e4; end: 10584c303; -[SCMapUserPreferencesImpl lastLocationSharingAuthorizationStatus] */

void FUN_10584c2e4(long param_1,undefined8 param_2)

{
  func_0x00010c067f80(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e07b38);
  return;
}



/* Entry: 10584c304; end: 10584c317; -[SCMapUserPreferencesImpl setLastLocationSharingAuthorizationStatus:] */

void FUN_10584c304(long param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1add50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInteger_forKey__112649178,(long)param_3,
             &PTR____CFConstantStringClassReference_110e07b38);
  return;
}



/* Entry: 10584c318; end: 10584c327; -[SCMapUserPreferencesImpl setTimeIntervalSinceBootWhenGhostModeWasEntered:] */

void FUN_10584c318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07b78);
  return;
}



/* Entry: 10584c328; end: 10584c337; -[SCMapUserPreferencesImpl setDurationOfGhostMode:] */

void FUN_10584c328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07b98);
  return;
}



/* Entry: 10584c338; end: 10584c347; -[SCMapUserPreferencesImpl viewedExploreTimestampSecsByUniqueId] */

void FUN_10584c338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dictionaryForKey__1125ba158,
             &PTR____CFConstantStringClassReference_110e07bb8);
  return;
}



/* Entry: 10584c348; end: 10584c3e7; -[SCMapUserPreferencesImpl isViewedExploreTimestamp:uniqueId:] */

bool FUN_10584c348(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = false;
  if (param_4 != 0) {
    dVar3 = param_1;
    _objc_retain(param_4);
    func_0x00010c29ec20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bf885a0(uVar1);
    bVar2 = param_1 <= dVar3 + 2.220446049250313e-16;
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  return bVar2;
}



/* Entry: 10584c3e8; end: 10584c503; -[SCMapUserPreferencesImpl markViewedExploreTimestamp:uniqueId:] */

void FUN_10584c3e8(double param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = param_2;
    func_0x00010c29ec20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = puVar2;
    func_0x00010c0e00e0(puVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar1);
    if (dVar4 <= param_1) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_3,puVar1,param_4);
      _objc_release(puVar1);
      uVar3 = *(undefined8 *)(param_2 + 8);
      puVar1 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010c1d0560(uVar3,param_3,puVar1,&PTR____CFConstantStringClassReference_110e07bb8);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10584c504; end: 10584c567; -[SCMapUserPreferencesImpl clearViewedExploreTimestamps] */

void FUN_10584c504(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cd2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setNewestExploreTimestampInLastT_112650ed0)
  ;
  return;
}



/* Entry: 10584c568; end: 10584c577; -[SCMapUserPreferencesImpl setNewestExploreTimestampInLastTrayOpen:] */

void FUN_10584c568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07bd8);
  return;
}



/* Entry: 10584c578; end: 10584c587; -[SCMapUserPreferencesImpl newestExploreTimestampInLastTrayOpen] */

void FUN_10584c578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_doubleForKey__1125bfa80,
             &PTR____CFConstantStringClassReference_110e07bd8);
  return;
}



/* Entry: 10584c588; end: 10584c597; -[SCMapUserPreferencesImpl friendFinderUserIdsExpirationDate] */

void FUN_10584c588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dateForKey__1125b6d90,
             &PTR____CFConstantStringClassReference_110e07bf8);
  return;
}



/* Entry: 10584c598; end: 10584c5a7; -[SCMapUserPreferencesImpl setFriendFinderUserIdsExpirationDate:] */

void FUN_10584c598(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e07bf8);
  return;
}



/* Entry: 10584c5a8; end: 10584c5b7; -[SCMapUserPreferencesImpl friendFinderUserIds] */

void FUN_10584c5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_arrayForKey__1125a01a8,
             &PTR____CFConstantStringClassReference_110e07c18);
  return;
}



/* Entry: 10584c5b8; end: 10584c5c7; -[SCMapUserPreferencesImpl setFriendFinderUserIds:] */

void FUN_10584c5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e07c18);
  return;
}



/* Entry: 10584c5c8; end: 10584c5d7; -[SCMapUserPreferencesImpl _lastViewedNewSnapCalloutDateByUserIds] */

void FUN_10584c5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dictionaryForKey__1125ba158,
             &PTR____CFConstantStringClassReference_110e07c38);
  return;
}



/* Entry: 10584c5d8; end: 10584c6ef; -[SCMapUserPreferencesImpl markLastViewedNewSnapCalloutDateByUserId:date:] */

undefined *
FUN_10584c5d8(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010be47260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_58 = param_4;
    uStack_50 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
  }
  else {
    func_0x00010c220220(puVar2,param_3,param_5,param_4);
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110e07c38;
  puVar1 = puVar2;
  func_0x00010c1d0560(*(undefined8 *)(param_2 + 8),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110e07c38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  _objc_retain(ppuVar4);
  func_0x00010be47260();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c296f60(puVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c26f380(puVar3,param_3,ppuVar4);
      puVar5 = (undefined *)(ulong)(0.0 < param_1);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 10584c6f0; end: 10584c7af; -[SCMapUserPreferencesImpl isNewSnapCalloutViewedForUserId:date:] */

bool FUN_10584c6f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be47260();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = param_2;
    func_0x00010c296f60(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      bVar2 = false;
    }
    else {
      func_0x00010c26f380(lVar1,param_3,param_5);
      bVar2 = 0.0 < param_1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 10584c7b0; end: 10584c7ff; -[SCMapUserPreferencesImpl lastActivationDateForLayer:] */

void FUN_10584c7b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be76d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf64fa0(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10584c800; end: 10584c867; -[SCMapUserPreferencesImpl markActivationDateForLayer:date:] */

void FUN_10584c800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be76d60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,param_4,lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10584c868; end: 10584c89f; -[SCMapUserPreferencesImpl _preferenceKeyForLayerActivationDate:] */

void FUN_10584c868(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddd4f8);
  return;
}



/* Entry: 10584c8a0; end: 10584c8af; -[SCMapUserPreferencesImpl userDidTriggerHeatmapLayerSwitch] */

void FUN_10584c8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07c78);
  return;
}



/* Entry: 10584c8b0; end: 10584c8c3; -[SCMapUserPreferencesImpl markUserDidTriggerHeatmapLayerSwitch] */

void FUN_10584c8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,1,
             &PTR____CFConstantStringClassReference_110e07c78);
  return;
}



/* Entry: 10584c8c4; end: 10584c8d3; -[SCMapUserPreferencesImpl heatmapLayerSwitchUserSelectedValue] */

void FUN_10584c8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07c98);
  return;
}



/* Entry: 10584c8d4; end: 10584c8e3; -[SCMapUserPreferencesImpl setHeatmapLayerSwitchUserSelectedValue:] */

void FUN_10584c8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07c98);
  return;
}



/* Entry: 10584c8e4; end: 10584c8f3; -[SCMapUserPreferencesImpl satelliteLayerSwitchUserSelectedValue] */

void FUN_10584c8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07cb8);
  return;
}



/* Entry: 10584c8f4; end: 10584c903; -[SCMapUserPreferencesImpl setSatelliteLayerSwitchUserSelectedValue:] */

void FUN_10584c8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07cb8);
  return;
}



/* Entry: 10584c904; end: 10584c913; -[SCMapUserPreferencesImpl userDidTrigger3DSatelliteToggle] */

void FUN_10584c904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07cd8);
  return;
}



/* Entry: 10584c914; end: 10584c927; -[SCMapUserPreferencesImpl markUserDidTrigger3DSatelliteToggle] */

void FUN_10584c914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,1,
             &PTR____CFConstantStringClassReference_110e07cd8);
  return;
}



/* Entry: 10584c928; end: 10584c937; -[SCMapUserPreferencesImpl userSelected3DIn3DSatelliteToggle] */

void FUN_10584c928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07cf8);
  return;
}



/* Entry: 10584c938; end: 10584c947; -[SCMapUserPreferencesImpl setUserSelected3DIn3DSatelliteToggle:] */

void FUN_10584c938(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110e07cf8);
  return;
}



/* Entry: 10584c948; end: 10584c957; -[SCMapUserPreferencesImpl locationPrivacyReminderNextRequestTimeIntervalSince1970] */

void FUN_10584c948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_doubleForKey__1125bfa80,
             &PTR____CFConstantStringClassReference_110e07a98);
  return;
}



/* Entry: 10584c958; end: 10584c967; -[SCMapUserPreferencesImpl setLocationPrivacyReminderNextRequestTimeIntervalSince1970:] */

void FUN_10584c958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07a98);
  return;
}



/* Entry: 10584c968; end: 10584c977; -[SCMapUserPreferencesImpl permissionMismatchNotificationCount] */

void FUN_10584c968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_integerForKey__1125f79f0,
             &PTR____CFConstantStringClassReference_110e07d38);
  return;
}



/* Entry: 10584c978; end: 10584c9ab; -[SCMapUserPreferencesImpl incrementPermissionMismatchNotificationCount] */

void FUN_10584c978(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f9bc0();
                    /* WARNING: Could not recover jumptable at 0x00010c1add50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInteger_forKey__112649178,lVar1 + 1,
             &PTR____CFConstantStringClassReference_110e07d38);
  return;
}



/* Entry: 10584c9ac; end: 10584c9bf; -[SCMapUserPreferencesImpl resetPermissionMismatchNotificationCount] */

void FUN_10584c9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1add50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInteger_forKey__112649178,0,
             &PTR____CFConstantStringClassReference_110e07d38);
  return;
}



/* Entry: 10584c9c0; end: 10584c9e3; -[SCMapUserPreferencesImpl permissionMismatchNextRequestTimeIntervalSince1970] */

double FUN_10584c9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c067f80(lVar1,param_2,&PTR____CFConstantStringClassReference_110e07d18);
  return (double)lVar1;
}



/* Entry: 10584c9e4; end: 10584c9f3; -[SCMapUserPreferencesImpl setPermissionMismatchNextRequestTimeIntervalSince1970:] */

void FUN_10584c9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07d18);
  return;
}



/* Entry: 10584c9f4; end: 10584ca17; -[SCMapUserPreferencesImpl mapPermissionBannerNextRequestTimeIntervalSince1970] */

double FUN_10584c9f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c067f80(lVar1,param_2,&PTR____CFConstantStringClassReference_110e07d58);
  return (double)lVar1;
}



/* Entry: 10584ca18; end: 10584ca27; -[SCMapUserPreferencesImpl setMapPermissionBannerNextRequestTimeIntervalSince1970:] */

void FUN_10584ca18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDouble_forKey__112641e28,
             &PTR____CFConstantStringClassReference_110e07d58);
  return;
}



/* Entry: 10584ca28; end: 10584ca37; -[SCMapUserPreferencesImpl lastReactionEmojiPickerSelection] */

void FUN_10584ca28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringForKey__112674ee8,
             &PTR____CFConstantStringClassReference_110e07d78);
  return;
}



/* Entry: 10584ca38; end: 10584ca47; -[SCMapUserPreferencesImpl setLastReactionEmojiPickerSelection:] */

void FUN_10584ca38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e07d78);
  return;
}



/* Entry: 10584ca48; end: 10584ca57; -[SCMapUserPreferencesImpl recentReactionArray] */

void FUN_10584ca48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_arrayForKey__1125a01a8,
             &PTR____CFConstantStringClassReference_110e07d98);
  return;
}



/* Entry: 10584ca58; end: 10584ca67; -[SCMapUserPreferencesImpl setRecentReactionArray:] */

void FUN_10584ca58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e07d98);
  return;
}



/* Entry: 10584ca68; end: 10584ca77; -[SCMapUserPreferencesImpl hasSeenWidgetOnboarding] */

void FUN_10584ca68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670,
             &PTR____CFConstantStringClassReference_110e07db8);
  return;
}


