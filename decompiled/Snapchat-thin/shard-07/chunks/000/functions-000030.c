/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105087ff8; end: 10508800b;  */

void FUN_105087ff8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40);
  return;
}



/* Entry: 10508800c; end: 1050880b3; -[SCProfileArroyoChatMediaDataCoordinator fetchMoreChatMedia] */

void FUN_10508800c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050880b4; end: 1050880df;  */

void FUN_1050880b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050880e0; end: 105088283; -[SCProfileArroyoChatMediaDataCoordinator _fetchMoreChatMedia] */

void FUN_1050880e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf51e00();
      _objc_initWeak(auStack_68,param_1);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105088284;
      puStack_88 = &UNK_110865038;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(uVar1);
      ppuVar3 = &puStack_a0;
      uStack_80 = uVar1;
      lStack_78 = param_1;
      _objc_retainBlock();
      func_0x00010c250800(*(undefined8 *)(param_1 + 0x30));
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar1);
      _objc_retain(uVar2);
      _objc_retain(ppuVar3);
      func_0x00010bfa5f20(uVar4);
      _objc_release(ppuVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(ppuVar3);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  return;
}



/* Entry: 105088284; end: 105088317;  */

void FUN_105088284(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        func_0x00010bedb4e0(param_1);
      }
    }
    _objc_release(param_1);
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x50) = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105088318; end: 1050883c7;  */

void FUN_105088318(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = param_2;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b9e0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050883c8; end: 105088a13; -[SCProfileArroyoChatMediaDataCoordinator _updateMediaFromAppendedMessages:nextPaginationCursor:] */

/* WARNING: Possible PIC construction at 0x000105088488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010508848c) */
/* WARNING: Removing unreachable block (ram,0x0001050884b8) */

void FUN_1050883c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
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
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0d3c80();
    uVar4 = uVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_105088a14;
    puStack_158 = &UNK_110865098;
    lStack_150 = param_3;
    lStack_148 = param_1;
    uStack_140 = uVar4;
    _objc_retain(param_4);
    lStack_138 = param_4;
    _objc_retain(uVar4);
    _objc_retain(param_3);
    _objc_retain(&puStack_170);
    _objc_release(&puStack_170);
    uVar3 = uVar4;
    func_0x00010bf51e00();
    uVar21 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    _objc_release(uVar21);
    *(bool *)(param_1 + 0x40) = param_4 != 0;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = param_4;
    _objc_retain(param_4);
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x50) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf529e0();
    func_0x00010bf529e0(puVar2);
    func_0x00010c1222a0(uVar3);
    func_0x00010bdcc700(param_1);
    _objc_release(lStack_138);
    _objc_release(uStack_140);
    _objc_release(lStack_150);
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*plStack_120 != *plStack_120) {
      _objc_enumerationMutation(param_3);
    }
    puVar2 = (undefined *)*plStack_128;
    param_2 = *(undefined8 *)(param_1 + 0x68);
  }
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = puVar2;
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar6);
      }
      lVar24 = *(long *)((long)puVar23 * 8);
      lVar8 = lVar24;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c08fa60();
      _objc_release(lVar8);
      if (lVar9 != 0) {
        puVar10 = puVar2;
        func_0x00010c07d100();
        puVar11 = puVar2;
        if (((ulong)puVar10 & 1) == 0) {
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c14bc80();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar12 = PTR_PTR_1126b4498;
        _objc_alloc(PTR_PTR_1126b4498);
        lVar8 = lVar24;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar2;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010bf490e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar2;
        func_0x00010bf026e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        puVar16 = puVar2;
        func_0x00010c0cb8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar2;
        func_0x00010c0cb9a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
        puVar18 = puVar2;
        func_0x00010c14ba60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar24;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c083520();
        func_0x00010c058fe0(puVar12);
        _objc_release(puVar20);
        _objc_release(lVar24);
        _objc_release(puVar19);
        _objc_release(lVar9);
        _objc_release(puVar10);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(lVar8);
        func_0x00010befa120(puVar5);
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      puVar23 = puVar23 + 1;
    } while (puVar7 != puVar23);
    puVar7 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar2);
  return;
}



/* Entry: 105088a14; end: 105088a93;  */

void FUN_105088a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc43d8);
  return;
}



/* Entry: 105088a94; end: 105088bbf; -[SCProfileArroyoChatMediaDataCoordinator didUpdateConversation:updatedMessages:removedMessageIds:] */

void FUN_105088a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105088bc0; end: 105088bf3;  */

void FUN_105088bc0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105088bf4; end: 1050890ff; -[SCProfileArroyoChatMediaDataCoordinator _updateMediaFromUpdatedMessages:removedMessageIds:] */

void FUN_105088bf4(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar14 = *(ulong *)(param_1 + 0x58);
  _objc_retain(uVar14);
  uVar2 = param_3;
  func_0x00010bf529e0();
  uVar12 = uVar14;
  if (uVar2 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    uVar1 = *(undefined1 *)(param_1 + 0x60);
    _objc_retain(param_3);
    _objc_retain(uVar10);
    uVar2 = uVar14;
    func_0x00010c0d3c80();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    uVar12 = param_3;
    func_0x00010bf52a60();
    if (uVar12 != 0) {
      lVar9 = *plStack_120;
      do {
        uVar13 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          puVar15 = *(undefined **)(lStack_128 + uVar13 * 8);
          puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
          _objc_opt_new();
          uVar11 = uVar2;
          func_0x00010bf529e0();
          if (uVar11 != 0) {
            uVar11 = 0;
            do {
              uVar4 = uVar2;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c0cb5a0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar15;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar5;
              func_0x00010c0720c0();
              _objc_release(puVar6);
              _objc_release(uVar5);
              _objc_release(uVar4);
              if ((int)uVar7 != 0) {
                func_0x00010bef92c0(puVar3);
              }
              uVar11 = uVar11 + 1;
              uVar4 = uVar2;
              func_0x00010bf529e0();
            } while (uVar11 < uVar4);
          }
          puVar6 = puVar3;
          func_0x00010bf529e0();
          if (puVar6 != (undefined *)0x0) {
            func_0x00010508864c(puVar15,uVar10,uVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf529e0();
            puVar8 = puVar15;
            func_0x00010bf529e0();
            if (puVar6 == puVar8) {
              func_0x00010c130f60(uVar2);
            }
            else {
              puVar6 = puVar15;
              func_0x00010bf529e0();
              if (puVar6 == (undefined *)0x0) {
                func_0x00010c12d480(uVar2);
              }
            }
            _objc_release(puVar15);
          }
          _objc_release(puVar3);
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar12);
        uVar12 = param_3;
        func_0x00010bf52a60();
      } while (uVar12 != 0);
    }
    _objc_release(param_3);
    uVar12 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(param_3);
    _objc_release(uVar14);
  }
  lVar9 = param_4;
  func_0x00010bf529e0();
  uVar2 = uVar12;
  if (lVar9 != 0) {
    _objc_retain(uVar12);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    uVar14 = uVar12;
    func_0x00010bf529e0();
    if (uVar14 != 0) {
      uVar14 = 0;
      do {
        uVar13 = uVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf4b900();
        _objc_release(uVar11);
        _objc_release(uVar13);
        if ((int)puVar6 != 0) {
          func_0x00010bef92c0(puVar15);
        }
        uVar14 = uVar14 + 1;
        uVar13 = uVar12;
        func_0x00010bf529e0();
      } while (uVar14 < uVar13);
    }
    puVar6 = puVar15;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      _objc_retain(uVar12);
    }
    else {
      uVar14 = uVar12;
      func_0x00010c0d3c80();
      func_0x00010c12d480();
      uVar2 = uVar14;
      func_0x00010bf51e00();
      _objc_release(uVar14);
    }
    _objc_release(puVar15);
    _objc_release(puVar3);
    _objc_release(uVar12);
    _objc_release(uVar12);
  }
  uVar12 = *(ulong *)(param_1 + 0x58);
  _objc_retain(uVar12);
  _objc_retain(uVar2);
  if (uVar12 == uVar2) {
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release(uVar12);
    }
    else {
      uVar14 = uVar12;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar12);
      if ((uVar14 & 1) != 0) goto LAB_1050890ac;
    }
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_105089100;
    puStack_158 = &UNK_110865098;
    _objc_retain(param_3);
    uStack_150 = param_3;
    _objc_retain(param_4);
    lStack_148 = param_4;
    lStack_140 = param_1;
    _objc_retain(uVar2);
    uStack_138 = uVar2;
    _objc_retain(&puStack_170);
    _objc_release(&puStack_170);
    uVar12 = uVar2;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar12;
    _objc_release(uVar10);
    func_0x00010bdcc700(param_1);
    _objc_release(uStack_138);
    _objc_release(lStack_148);
    uVar12 = uStack_150;
  }
  _objc_release(uVar12);
LAB_1050890ac:
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    func_0x00010c14de00(puVar3);
    return;
  }
  return;
}



/* Entry: 105089100; end: 105089183;  */

void FUN_105089100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc43f8);
  return;
}



/* Entry: 105089184; end: 10508927f; -[SCProfileArroyoChatMediaDataCoordinator didResetConversation:messages:] */

void FUN_105089184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105089280; end: 1050892b3;  */

void FUN_105089280(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be933c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050892b4; end: 1050894af; -[SCProfileArroyoChatMediaDataCoordinator _resetMediaFromMessages:] */

void FUN_1050892b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar1 = param_3;
  FUN_105098624();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar1;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010508864c(uVar4,*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0x60));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1050894b0;
  puStack_140 = &UNK_1108650c8;
  lStack_138 = param_3;
  lStack_130 = param_1;
  puStack_128 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(param_3);
  _objc_retain(&puStack_158);
  _objc_release(&puStack_158);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar3;
  _objc_release(uVar4);
  func_0x00010bdcc700(param_1);
  _objc_release(puStack_128);
  _objc_release(lStack_138);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar2);
  return;
}



/* Entry: 1050894b0; end: 10508951f;  */

void FUN_1050894b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4418);
  return;
}



/* Entry: 105089520; end: 10508952b; +[SCProfileArroyoChatMediaDataCoordinator announcerIdentifier] */

undefined ** FUN_105089520(void)

{
  return &PTR____CFConstantStringClassReference_110dc4438;
}



/* Entry: 10508952c; end: 105089533; -[SCProfileArroyoChatMediaDataCoordinator addUpdateListener:] */

void FUN_10508952c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105089534; end: 10508953b; -[SCProfileArroyoChatMediaDataCoordinator removeUpdateListener:] */

void FUN_105089534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10508953c; end: 1050895ff; -[SCProfileArroyoChatMediaDataCoordinator _announceUpdate] */

void FUN_10508953c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 105089600; end: 105089683; -[SCProfileArroyoChatMediaDataCoordinator .cxx_destruct] */

void FUN_105089600(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105089684; end: 105089a7b; -[SCProfileChatMediaDataSource initWithSessionUsername:sessionRequestManager:imageDownloader:chatRequestManager:ownerId:conversationId:conversationType:displayName:conversationParticipants:chatMediaDataStore:profileSavedMediaFetcher:profileChatMessagesUpdateTracker:chatMessageActionHandler:grapheneServices:contentDelivery:circumstanceEngine:chatMediaFetcher:] */

undefined8 *
FUN_105089684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e5e38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[1];
    puVar1[1] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[3];
    puVar1[3] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4688;
    _objc_alloc();
    func_0x00010c03f160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4680;
    _objc_alloc();
    uVar2 = param_17;
    func_0x00010bfcdfa0(param_17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004e20();
    uVar4 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010befc780(puVar1[5]);
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105089a7c; end: 105089ad3;  */

void FUN_105089a7c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010050471c(uVar1,&PTR___NSConcreteGlobalBlock_1108650f8,
                        &PTR___NSConcreteGlobalBlock_110865138);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105089ad4; end: 105089adb;  */

void FUN_105089ad4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105089adc; end: 105089b03;  */

void FUN_105089adc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105089b04; end: 105089b0b; -[SCProfileChatMediaDataSource addListener:] */

void FUN_105089b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105089b0c; end: 105089b13; -[SCProfileChatMediaDataSource removeListener:] */

void FUN_105089b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105089b14; end: 105089b1f; +[SCProfileChatMediaDataSource announcerIdentifier] */

undefined ** FUN_105089b14(void)

{
  return &PTR____CFConstantStringClassReference_110dc4458;
}



/* Entry: 105089b20; end: 105089b27; -[SCProfileChatMediaDataSource addUpdateListener:] */

void FUN_105089b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105089b28; end: 105089b2f; -[SCProfileChatMediaDataSource removeUpdateListener:] */

void FUN_105089b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105089b30; end: 105089b57; -[SCProfileChatMediaDataSource displayName] */

void FUN_105089b30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105089b58; end: 105089b7f; -[SCProfileChatMediaDataSource conversationParticipants] */

void FUN_105089b58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105089b80; end: 105089beb; -[SCProfileChatMediaDataSource conversationParticipantByUserId:] */

void FUN_105089b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105089bec; end: 105089bf3; -[SCProfileChatMediaDataSource chatMediaDataModels] */

void FUN_105089bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf36ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_chatMedia_1125ab450);
  return;
}



/* Entry: 105089bf4; end: 105089d4b; -[SCProfileChatMediaDataSource chatMediaDataModelsWithCompletionQueue:completionHandler:] */

void FUN_105089bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105089cac;
  puStack_48 = &UNK_110858190;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf36e20(uVar1,param_2,param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105089d4c; end: 105089d5b;  */

void FUN_105089d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105089d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105089d5c; end: 105089d63; -[SCProfileChatMediaDataSource hasUnloadedContent] */

void FUN_105089d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd92f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_hasMoreChatMedia_1125d3e60);
  return;
}



/* Entry: 105089d64; end: 105089d6b; -[SCProfileChatMediaDataSource fetchMoreSavedInChatMediaDataModels] */

void FUN_105089d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_fetchMoreChatMedia_1125c7c98);
  return;
}



/* Entry: 105089d6c; end: 105089e1f; -[SCProfileChatMediaDataSource getIntendedRecipientUserIdForOneonOne:currentUserId:] */

void FUN_105089d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0cb7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x000107d605f8(param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105089e20; end: 105089ee3; -[SCProfileChatMediaDataSource _dispatchSavedInChatCardsUpdate] */

void FUN_105089e20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 105089ee4; end: 105089f67; -[SCProfileChatMediaDataSource didUpdateWithAnnouncerIdentifier:] */

void FUN_105089ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4680;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchSavedInChatCardsUpdate_11255e980);
    return;
  }
  return;
}



/* Entry: 105089f68; end: 105089f6f; -[SCProfileChatMediaDataSource mediaDownloader] */

undefined8 FUN_105089f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105089f70; end: 105089f77; -[SCProfileChatMediaDataSource imageDownloader] */

undefined8 FUN_105089f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105089f78; end: 105089f7f; -[SCProfileChatMediaDataSource ownerId] */

undefined8 FUN_105089f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105089f80; end: 105089f87; -[SCProfileChatMediaDataSource conversationId] */

undefined8 FUN_105089f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105089f88; end: 10508a023; -[SCProfileChatMediaDataSource .cxx_destruct] */

void FUN_105089f88(long param_1)

{
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



/* Entry: 10508a024; end: 10508a183; -[SCProfileChatMediaDataStore initWithDocObjectContext:] */

undefined8 * FUN_10508a024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5e40;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_48,puVar1);
    uVar2 = puVar1[2];
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10508a184; end: 10508a1af;  */

void FUN_10508a184(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508a1b0; end: 10508a2df; -[SCProfileChatMediaDataStore chatMediaDataModelsForOwnerId:completionQueue:completionHandler:] */

void FUN_10508a1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508a2e0; end: 10508a317;  */

void FUN_10508a2e0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be104e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508a318; end: 10508a447; -[SCProfileChatMediaDataStore fetchMetadataForOwnerId:completionQueue:completionHandler:] */

void FUN_10508a318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508a448; end: 10508a47f;  */

void FUN_10508a448(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508a480; end: 10508a5af; -[SCProfileChatMediaDataStore updateChatMediaDataModelForOwnerId:chatMediaDataModels:fetchMetadata:] */

void FUN_10508a480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508a5b0; end: 10508a5e7;  */

void FUN_10508a5b0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508a5e8; end: 10508a6e7; -[SCProfileChatMediaDataStore updateFetchMetadataChecksumForOwner:checksum:] */

void FUN_10508a5e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
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



/* Entry: 10508a6e8; end: 10508a71b;  */

void FUN_10508a6e8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508a71c; end: 10508a73b; -[SCProfileChatMediaDataStore _deleteExpiredDataModels] */

void FUN_10508a71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_performChanges_completionQueue_c_11261bb60,
             &PTR___NSConcreteGlobalBlock_110865188,0,0);
  return;
}



/* Entry: 10508a73c; end: 10508a80f; -[SCProfileChatMediaDataStore _fetchChatMediaDataModelsForOwnerId:completionQueue:completionHandler:] */

void FUN_10508a73c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  FUN_10508e200(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10508a810;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_60);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10508a810; end: 10508a81f;  */

void FUN_10508a810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010508a81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10508a820; end: 10508a8f3; -[SCProfileChatMediaDataStore _fetchMetadataForOwnerId:completionQueue:completionHandler:] */

void FUN_10508a820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  FUN_10508f0a0(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10508a8f4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_60);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10508a8f4; end: 10508a903;  */

void FUN_10508a8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010508a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10508a904; end: 10508a9e7; -[SCProfileChatMediaDataStore _updateChatMediaDataModels:fetchMetadata:ownerId:] */

void FUN_10508a904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10508a9e8;
  puStack_50 = &UNK_110864a08;
  uStack_48 = param_5;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar1,param_2,&puStack_68,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 10508a9e8; end: 10508ab6f;  */

void FUN_10508a9e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  FUN_10508e45c(param_2,*(undefined8 *)(param_1 + 0x20));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar6);
  puVar5 = auStack_e8;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar2 = lVar8;
        func_0x00010c0f0700();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar8;
          func_0x00010bf36ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          if (lVar3 != 0) {
            FUN_10508e178(param_2,lVar8);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar5 = auStack_e8;
      lVar1 = lVar6;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_10508ee3c(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_10508ef20(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  uVar7 = *(undefined8 *)(param_2 + 8);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c0f8500(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 10508ab70; end: 10508ac2b; -[SCProfileChatMediaDataStore _updateFetchMetadataChecksumForOwner:checksum:] */

void FUN_10508ab70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10508ac2c;
  puStack_48 = &UNK_110864a38;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508ac2c; end: 10508ac3b;  */

void FUN_10508ac2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  lVar3 = param_2;
  FUN_10508f0a0(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b46c0;
    FUN_105091054(PTR_PTR_1126b46c0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar4);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10508ac3c; end: 10508ac6b; -[SCProfileChatMediaDataStore .cxx_destruct] */

void FUN_10508ac3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10508ac6c; end: 10508ae6b; -[SCProfileChatMediaContentDownloader initWithRequestManager:chatRequestManager:imageDownloader:contentDelivery:circumstanceEngine:chatMediaFetcher:eventAnnouncer:] */

undefined1 *
FUN_10508ac6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126e5e48;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10508ae6c; end: 10508b04f; -[SCProfileChatMediaContentDownloader loadItem:completion:failure:callbackQueue:] */

void FUN_10508ae6c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bdcbbc0(param_1);
  puVar3 = PTR_PTR_1126b4498;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b4568;
    _objc_alloc();
    func_0x00010c000420();
    func_0x00010c18b5e0();
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_retain(puVar3);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10508b050; end: 10508b0df;  */

void FUN_10508b050(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ebc0(lVar1,param_2,uVar4,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10508b0e0; end: 10508b0e7; -[SCProfileChatMediaContentDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:] */

undefined8 FUN_10508b0e0(void)

{
  return 0;
}



/* Entry: 10508b0e8; end: 10508b0eb; -[SCProfileChatMediaContentDownloader resetCache] */

void FUN_10508b0e8(void)

{
  return;
}



/* Entry: 10508b0ec; end: 10508b0ef; -[SCProfileChatMediaContentDownloader recordConsumptionOfTrackingId:] */

void FUN_10508b0ec(void)

{
  return;
}



/* Entry: 10508b0f0; end: 10508b1df; -[SCProfileChatMediaContentDownloader itemDownloaderHandler:didCancelWithKey:] */

void FUN_10508b0f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508b1e0; end: 10508b213;  */

void FUN_10508b1e0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508b214; end: 10508b217; -[SCProfileChatMediaContentDownloader itemDownloaderHandler:didCancelWithCancelableItem:] */

void FUN_10508b214(void)

{
  return;
}



/* Entry: 10508b218; end: 10508b287; -[SCProfileChatMediaContentDownloader _cancelWithKey:] */

void FUN_10508b218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) &&
     (lVar1 = param_1, func_0x00010bdc9e40(param_1,param_2,param_3), (int)lVar1 != 0)) {
    func_0x00010bf2ee60(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10508b288; end: 10508b3c7; -[SCProfileChatMediaContentDownloader _allHandlersCanceledWithKey:] */

undefined1 *
FUN_10508b288(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    puVar8 = (undefined1 *)0x1;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(uVar3);
    param_4 = auStack_c8;
    param_5 = 0x10;
    uVar2 = uVar3;
    func_0x00010bf52a60(uVar3,param_2,&uStack_110,param_4,0x10);
    if (uVar2 != 0) {
      lVar9 = *plStack_100;
      do {
        uVar10 = 0;
        do {
          if (*plStack_100 != lVar9) {
            _objc_enumerationMutation(uVar3);
          }
          iVar1 = (int)*(undefined8 *)(lStack_108 + uVar10 * 8);
          func_0x00010bf2f680();
          if (iVar1 == 0) {
            puVar8 = (undefined1 *)0x0;
            goto LAB_10508b378;
          }
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
        param_4 = auStack_c8;
        param_5 = 0x10;
        uVar2 = uVar3;
        puVar6 = &uStack_110;
        func_0x00010bf52a60(uVar3,param_2,&uStack_110,param_4,0x10);
      } while (uVar2 != 0);
    }
    puVar8 = (undefined1 *)0x1;
LAB_10508b378:
    _objc_release(uVar3);
    param_3 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = uVar3;
  func_0x00010beb35e0(uVar3,param_2,param_5);
  if ((uVar2 & 1) != 0) goto LAB_10508b4d8;
  puVar8 = param_4;
  func_0x00010c0c4680(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar5 = *(undefined8 *)(uVar3 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c07b440();
  _objc_release(uVar5);
  if ((int)uVar7 == 0) {
    uVar5 = *(undefined8 *)(uVar3 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf4b4c0();
    _objc_release(uVar5);
    if ((int)uVar7 != 0) {
      uVar7 = 0;
      goto LAB_10508b4cc;
    }
    uVar2 = uVar3;
    func_0x00010be14f20(uVar3,param_2,puVar4,param_4,param_4,param_5);
    if ((uVar2 & 1) == 0) {
      func_0x00010be14ec0(uVar3,param_2,puVar4,param_4,param_5);
    }
  }
  else {
    uVar7 = 1;
LAB_10508b4cc:
    func_0x00010be00a00(uVar3,param_2,puVar4,param_5,1,uVar7);
  }
  _objc_release(puVar4);
LAB_10508b4d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10508b3c8; end: 10508b537; -[SCProfileChatMediaContentDownloader _loadThumbnailImageForMedia:inDataMode:handler:] */

void FUN_10508b3c8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010beb35e0(param_1,param_2,param_5);
  if ((uVar1 & 1) != 0) goto LAB_10508b4d8;
  uVar4 = param_4;
  func_0x00010c0c4680(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07b440();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b4c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar4 = 0;
      goto LAB_10508b4cc;
    }
    uVar1 = param_1;
    func_0x00010be14f20(param_1,param_2,uVar2,param_4,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      func_0x00010be14ec0(param_1,param_2,uVar2,param_4,param_5);
    }
  }
  else {
    uVar4 = 1;
LAB_10508b4cc:
    func_0x00010be00a00(param_1,param_2,uVar2,param_5,1,uVar4);
  }
  _objc_release(uVar2);
LAB_10508b4d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10508b538; end: 10508b5e7; -[SCProfileChatMediaContentDownloader _fetchThumbnailImageForMedia:arroyoDataMode:dataMode:handler:] */

bool FUN_10508b538(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be14e80(param_1,param_2,param_3,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar2 != 0;
}



/* Entry: 10508b5e8; end: 10508b6c3; -[SCProfileChatMediaContentDownloader _fetchThumbnailForMedia:dataModel:handler:] */

void FUN_10508b5e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c117340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c26d980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be11b60(param_1,param_2,param_3,uVar1,uVar2,param_4,1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10508b6c4; end: 10508b77f; -[SCProfileChatMediaContentDownloader _fetchThumbnailFromRawImageForMedia:dataModel:handler:] */

void FUN_10508b6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4cce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be11b60(param_1,param_2,param_3,uVar1,uVar2,param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10508b780; end: 10508bb9b; -[SCProfileChatMediaContentDownloader _fetchImageForMedia:mediaId:contentObject:dataModel:downloadThumbnail:handler:] */

void FUN_10508b780(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfde980();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe00(param_8);
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      func_0x00010befa120(lVar3);
      _objc_release(lVar3);
      goto LAB_10508bb0c;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_release(lVar3);
    func_0x00010befa120(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
  }
  _objc_initWeak(auStack_80,param_1);
  lVar4 = param_6;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_6;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == 0) || (lVar4 == 0)) {
    _objc_initWeak(auStack_88,param_1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10508bb9c;
    puStack_a8 = &UNK_110848218;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(puVar1);
    puStack_a0 = puVar1;
    _objc_retain(param_8);
    uStack_98 = param_8;
    func_0x00010c0f7fc0(uVar7);
    _objc_release(uStack_98);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    lVar5 = param_6;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2a0();
    lVar6 = param_6;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_8);
    uStack_c8 = param_7;
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_8);
    _objc_retain(puVar1);
    func_0x00010c15c160(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar1);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_d0);
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_80);
LAB_10508bb0c:
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508bb9c; end: 10508bc0f;  */

void FUN_10508bb9c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf7b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508bc10; end: 10508bd2b;  */

void FUN_10508bc10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  uStack_40 = *(undefined1 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_48,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10508bd2c; end: 10508bddf;  */

void FUN_10508bd2c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x48);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = uVar5;
    func_0x00010c0c5180(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4cce0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be11b60(lVar2,param_2,uVar5,uVar3,uVar4,*(undefined8 *)(param_1 + 0x28),0,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bdf7b60(lVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x30),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10508bde0; end: 10508c0bf; -[SCProfileChatMediaContentDownloader _didSuccessFetchingChatMediaWithChatMediaContent:handler:isFromCache:isThumbnail:] */

void FUN_10508bde0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,int param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [8];
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = (undefined1)param_6;
  if (param_6 == 0) {
    lVar3 = param_3;
    func_0x00010c0c6c20();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    if (lVar3 == 3) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0c5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x10508c150;
      puStack_c0 = &UNK_110865238;
      puVar4 = auStack_a8;
      _objc_copyWeak(puVar4,auStack_58);
      _objc_retain(param_3);
      lStack_b8 = param_3;
      _objc_retain(param_4);
      uStack_b0 = param_4;
      uStack_a0 = param_5;
      uStack_9f = uVar1;
      func_0x00010bfcc8e0(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(uVar2);
      _objc_release(uStack_b0);
      lVar3 = lStack_b8;
    }
    else {
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_e8;
      _objc_copyWeak(puVar4,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_4);
      uStack_e0 = param_5;
      uStack_df = uVar1;
      func_0x00010c26de20(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(param_4);
      lVar3 = param_3;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10508c0c0;
    puStack_80 = &UNK_110865208;
    puVar4 = auStack_68;
    _objc_copyWeak(puVar4,auStack_58);
    _objc_retain(param_3);
    lStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    uStack_60 = param_5;
    uStack_5f = uVar1;
    func_0x00010c117360(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uStack_70);
    lVar3 = lStack_78;
  }
  _objc_release(lVar3);
  _objc_destroyWeak(puVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10508c0c0; end: 10508c2b7;  */

void FUN_10508c0c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be27160(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10508c2b8; end: 10508c3b3; -[SCProfileChatMediaContentDownloader _handleChatMediaFetchForChatMediaContent:errorKey:image:handler:isFromCache:isThumbnail:] */

void FUN_10508c2b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10508c3b4;
  puStack_80 = &UNK_110865268;
  uStack_78 = param_5;
  lStack_70 = param_1;
  uStack_68 = param_6;
  uStack_60 = param_4;
  uStack_58 = param_7;
  uStack_57 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10508c3b4; end: 10508c42f;  */

void FUN_10508c3b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c135a00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7da0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf7b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__dataFailedToLoadForKey_handler__11255b878,*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10508c430; end: 10508c73f; -[SCProfileChatMediaContentDownloader _dataLoadedForKey:image:handler:isFromCache:isThumbnail:] */

void FUN_10508c430(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) goto LAB_10508c6e8;
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_10508c4f4:
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_10508c4f4;
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar1 = *plStack_130;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        lVar9 = *(long *)(lStack_138 + (long)puVar10 * 8);
        lVar4 = lVar9;
        func_0x00010bf43fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar9;
        func_0x00010bf28660(lVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar9;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf86d40(lVar9);
        uVar7 = param_1;
        func_0x00010beb35e0();
        if (((uVar7 & 1) == 0) && (lVar4 != 0)) {
          _objc_initWeak(auStack_148,param_1);
          puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_10508c740;
          puStack_180 = &UNK_11084cb90;
          _objc_copyWeak(auStack_158,auStack_148);
          lStack_178 = lVar9;
          uStack_150 = param_6;
          uStack_14f = param_7;
          _objc_retain(lVar6);
          lStack_170 = lVar6;
          _objc_retain(lVar4);
          lStack_160 = lVar4;
          _objc_retain(param_4);
          lStack_168 = param_4;
          func_0x00010007380c(lVar5,&puStack_198);
          _objc_release(lStack_168);
          _objc_release(lStack_160);
          _objc_release(lStack_170);
          _objc_destroyWeak(auStack_158);
          _objc_destroyWeak(auStack_148);
        }
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(puVar3);
LAB_10508c6e8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = param_3 + 0x40;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010beb35e0();
  _objc_release(uVar7);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar1 = param_3 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcba20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010508c7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             *(undefined8 *)(param_3 + 0x30),0);
  return;
}



/* Entry: 10508c740; end: 10508c7cb;  */

void FUN_10508c740(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010beb35e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bdcba20();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010508c7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10508c7cc; end: 10508cac7; -[SCProfileChatMediaContentDownloader _dataFailedToLoadForKey:handler:error:] */

void FUN_10508c7cc(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = *(undefined **)(param_1 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar2);
      goto LAB_10508c8a4;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a100();
  _objc_retainAutoreleasedReturnValue();
LAB_10508c8a4:
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar1 = *plStack_130;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar10 = *(undefined8 *)(lStack_138 + (long)puVar9 * 8);
        uVar4 = uVar10;
        func_0x00010bf9ffa0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bf28660(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf86d40(uVar10);
        uVar7 = param_1;
        func_0x00010beb35e0();
        if ((uVar7 & 1) == 0) {
          _objc_initWeak(auStack_148,param_1);
          puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_10508cac8;
          puStack_178 = &UNK_11084cbf0;
          _objc_copyWeak(auStack_150,auStack_148);
          uStack_170 = uVar10;
          _objc_retain(uVar4);
          uStack_158 = uVar4;
          _objc_retain(uVar6);
          uStack_168 = uVar6;
          _objc_retain(param_5);
          uStack_160 = param_5;
          func_0x00010007380c(uVar5,&puStack_190);
          _objc_release(uStack_160);
          _objc_release(uStack_168);
          _objc_release(uStack_158);
          _objc_destroyWeak(auStack_150);
          _objc_destroyWeak(auStack_148);
        }
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = param_3 + 0x40;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010beb35e0();
  _objc_release(uVar7);
  if (((uVar8 & 1) == 0) && (*(long *)(param_3 + 0x38) != 0)) {
    lVar1 = param_3 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdcbbc0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010508cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
              (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
               *(undefined8 *)(param_3 + 0x30));
    return;
  }
  return;
}



/* Entry: 10508cac8; end: 10508cb5b;  */

void FUN_10508cac8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010beb35e0();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bdcbbc0();
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010508cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 10508cb5c; end: 10508cbe7; -[SCProfileChatMediaContentDownloader _shouldEarlyReturnForHandler:] */

undefined8 FUN_10508cb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf2f680();
  if ((int)uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbbc0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb72d8,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10508cbe8; end: 10508cc57; -[SCProfileChatMediaContentDownloader _announceDidLoadEventWithIsFromCache:isThumbnail:item:] */

void FUN_10508cbe8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = 0x10;
  if (param_4 == 0) {
    lVar1 = 0x18;
  }
  lVar2 = 8;
  if (param_3 == 0) {
    lVar2 = lVar1;
  }
  func_0x00010bdcbbc0(param_1,param_2,*(undefined8 *)((long)&PTR_PTR_110a076c0 + lVar2),param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10508cc58; end: 10508cdbb; -[SCProfileChatMediaContentDownloader _announceEvent:item:] */

void FUN_10508cc58(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar3 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0c5240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar4;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar6);
    _objc_release(puVar1);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
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



/* Entry: 10508cdbc; end: 10508ce3f; -[SCProfileChatMediaContentDownloader .cxx_destruct] */

void FUN_10508cdbc(long param_1)

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



/* Entry: 10508ce40; end: 10508cecf;  */

bool FUN_10508ce40(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0c4680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfece40();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 0x7fffffffffffffff;
}



/* Entry: 10508ced0; end: 10508cf43;  */

uint FUN_10508ced0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0c6c20();
  uVar1 = (uint)(0x15 < uVar2) | 0x94fU >> (ulong)((uint)uVar2 & 0x1f) & 1;
  *param_4 = (char)uVar1;
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10508cf44; end: 10508d21b;  */

void FUN_10508cf44(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined *puVar9;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c4680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uVar2 < 2) {
    uVar1 = param_2;
    func_0x00010c0c4680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c6c20();
    puVar9 = (undefined *)0x0;
    if ((uVar4 < 0x16) && ((1L << (uVar4 & 0x3f) & 0x363f36U) != 0)) {
      uVar4 = param_2;
      func_0x00010c0c4680(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf8b160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      if (param_1 == 0.0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        uVar8 = (uint)param_1;
        if ((int)uVar8 < 2) {
          uVar8 = 1;
        }
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (uVar8 / 0x3c + (uVar8 / 0xe10) * -0x3c == 0) {
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                              &PTR____CFConstantStringClassReference_110dc44d8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                              &PTR____CFConstantStringClassReference_110dc44b8);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  else {
    FUN_10508d6fc();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0c4680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c14de00(puVar9,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}


