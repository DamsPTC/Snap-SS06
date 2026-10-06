/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085af734; end: 1085af86b; -[SCTCKCallManager provider:performSetMutedCallAction:] */

void FUN_1085af734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x50);
  uVar1 = param_4;
  func_0x00010bf28540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = lVar4;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf9fac0(param_4);
  }
  else {
    lVar2 = lVar4;
    func_0x00010c0d41c0();
    uVar1 = param_4;
    func_0x00010c078420();
    if ((int)lVar2 != (int)uVar1) {
      uVar1 = param_4;
      func_0x00010c078420(param_4);
      func_0x00010c1ca6a0(lVar4,param_2,uVar1);
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar2 = lVar4;
      func_0x00010c0c3fe0(lVar4);
      uVar1 = param_4;
      func_0x00010c078420(param_4);
      lVar3 = lVar4;
      func_0x00010c2688a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7e460(param_1,param_2,lVar2,uVar1,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
    }
    func_0x00010bfbb680(param_4);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085af86c; end: 1085af8df; -[SCTCKCallManager provider:didActivateAudioSession:] */

void FUN_1085af86c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdd8c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28000();
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(param_1 + 0x78) + 0x10))();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085af8e0; end: 1085af8e3; -[SCTCKCallManager provider:didDeactivateAudioSession:] */

void FUN_1085af8e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__releaseCallKit_1125802a0);
  return;
}



/* Entry: 1085af8e4; end: 1085afa03; -[SCTCKCallManager hasConnectedCall] */

undefined1 * FUN_1085af8e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf281a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf289e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar8 = auStack_c8;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  iVar7 = (int)puVar8;
  puVar9 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_108 + lVar11 * 8);
        func_0x00010bfd5960();
        iVar7 = (int)puVar8;
        if ((uVar4 & 1) != 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_1085af9c4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar8 = auStack_c8;
      lVar2 = lVar3;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
      iVar7 = (int)puVar8;
    } while (lVar2 != 0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_1085af9c4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    lVar2 = lVar3 + 0x40;
    _objc_loadWeakRetained();
    lVar10 = lVar2;
    func_0x00010c082700();
    _objc_release(lVar2);
    if ((int)lVar10 != 0) {
      lVar2 = lVar3;
      func_0x00010bdd8c00(lVar3,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar2;
      func_0x00010c2688a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 != 0) {
        uVar1 = 1;
        if (iVar7 != 0) {
          uVar1 = 2;
        }
        func_0x00010c1c4020(lVar2,param_2,uVar1);
        lVar3 = lVar3 + 0x20;
        _objc_loadWeakRetained(lVar3);
        lVar10 = lVar2;
        func_0x00010c0c3fe0(lVar2);
        lVar11 = lVar2;
        func_0x00010c0d41c0(lVar2);
        lVar5 = lVar2;
        func_0x00010c2688a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e460(lVar3,param_2,lVar10,lVar11,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return (undefined1 *)puVar6;
}



/* Entry: 1085afa04; end: 1085afb0f; -[SCTCKCallManager notifyMediaUpdateForConvoId:isVideo:] */

void FUN_1085afa04(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c082700();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010bdd8c00(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2688a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar1 = 1;
        if (param_4 != 0) {
          uVar1 = 2;
        }
        func_0x00010c1c4020(lVar2,param_2,uVar1);
        param_1 = param_1 + 0x20;
        _objc_loadWeakRetained(param_1);
        lVar3 = lVar2;
        func_0x00010c0c3fe0(lVar2);
        lVar4 = lVar2;
        func_0x00010c0d41c0(lVar2);
        lVar5 = lVar2;
        func_0x00010c2688a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e460(param_1,param_2,lVar3,lVar4,lVar5);
        _objc_release(lVar5);
        _objc_release(param_1);
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085afb10; end: 1085afba3; -[SCTCKCallManager reportOutgoingCallFromRecentsToConvoId:isVideo:sourceType:] */

void FUN_1085afb10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126da2f0;
    _objc_alloc(PTR_PTR_1126da2f0);
    func_0x00010c005a40();
    func_0x00010be8ff00(param_1,param_2,puVar2,0);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085afba4; end: 1085afc3b; -[SCTCKCallManager _onPublishedMediaOrMuteChanged:media:muted:] */

void FUN_1085afba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdd8c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1c4020(lVar1,param_2,param_4);
    lVar2 = lVar1;
    func_0x00010c0d41c0();
    if ((int)param_5 != (int)lVar2) {
      func_0x00010c1ca6a0(lVar1,param_2,param_5);
      lVar2 = lVar1;
      func_0x00010bf58d80(lVar1,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be713c0(param_1,param_2,lVar2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085afc3c; end: 1085afd77; -[SCTCKCallManager _updateConfigurationForConvoId:convoMetadata:isVideo:completion:] */

void FUN_1085afc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085afd78;
  puStack_70 = &UNK_11092c608;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  uStack_50 = param_5;
  _objc_retain(param_6);
  ppuVar1 = &puStack_88;
  uStack_60 = param_6;
  _objc_retainBlock(ppuVar1);
  func_0x00010bdd8e00(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085afd78; end: 1085afdfb;  */

void FUN_1085afd78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdeb9e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085afdfc; end: 1085affa3; -[SCTCKCallManager _callTitleForConvoId:convoMetadata:completion:] */

void FUN_1085afdfc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c074920();
  if ((int)lVar1 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1085affa4;
    puStack_68 = &UNK_110a59070;
    lStack_60 = param_1;
    uStack_48 = param_2;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_5);
    lStack_50 = param_5;
    _objc_retainBlock(&puStack_80);
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120();
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(lStack_50);
    param_1 = lStack_58;
    goto LAB_1085aff70;
  }
  lVar1 = param_4;
  func_0x00010c12a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar4 == 0) {
LAB_1085aff4c:
    func_0x000108ef5c94();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
  }
  else {
    lVar1 = param_4;
    func_0x00010c12a5a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebd6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_1 == 0) goto LAB_1085aff4c;
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1);
LAB_1085aff70:
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085affa4; end: 1085b0037;  */

void FUN_1085affa4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010be248e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085b0038; end: 1085b02af; -[SCTCKCallManager _groupNameBasedOnParticipantNamesForGroup:] */

void FUN_1085b0038(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = param_3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x10;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      lVar10 = *(long *)((long)puVar11 * 8);
      lVar5 = lVar10;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0720c0();
      _objc_release(lVar5);
      if ((int)lVar6 == 0) {
        func_0x00010c294420(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bebd6c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar5);
      }
      else {
        lVar6 = *(long *)(param_1 + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar5;
        func_0x00010bf51e00();
        _objc_release(lVar5);
        _objc_release(lVar6);
        lVar5 = lVar10;
        func_0x00010c08fa60();
        if (lVar5 != 0) {
          func_0x00010befa120(puVar2);
        }
      }
      _objc_release(lVar10);
      puVar11 = puVar11 + 1;
    } while (puVar4 != puVar11);
    uVar8 = 0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f80(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x00010bfb41a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar7 = 1;
  puVar11 = puVar2;
  func_0x000108ef620c(puVar2,puVar4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(uVar7);
    func_0x00010bfeb320(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeb9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    puVar11 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1085b02b0; end: 1085b032f; -[SCTCKCallManager _updateConfigurationForConvoId:isVideo:notification:] */

void FUN_1085b02b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010bfeb320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeb9e0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085b0330; end: 1085b0413; -[SCTCKCallManager _createCXCallUpdateForConvoId:isVideo:callerName:] */

void FUN_1085b0330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CXCallUpdate_1126da2f8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___CXHandle_1126da2c0;
  _objc_alloc(PTR__OBJC_CLASS___CXHandle_1126da2c0);
  func_0x00010c0563a0();
  _objc_release(param_3);
  func_0x00010c1ea2a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a7360(puVar1,param_2,param_4);
  func_0x00010c1bf500(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c210040(puVar1,param_2,0);
  func_0x00010c210020(puVar1,param_2,0);
  func_0x00010c210180(puVar1,param_2,0);
  func_0x00010c210000(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085b0414; end: 1085b041b; -[SCTCKCallManager _performAction:] */

void FUN_1085b0414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performAction_completion__112579e98,param_3,0);
  return;
}



/* Entry: 1085b041c; end: 1085b0553; -[SCTCKCallManager _performAction:completion:] */

void FUN_1085b041c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___CXTransaction_1126da300;
  _objc_alloc(PTR__OBJC_CLASS___CXTransaction_1126da300);
  func_0x00010bfeffa0();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c136d20(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085b0554; end: 1085b05e3;  */

void FUN_1085b0554(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1e00();
      _objc_release(uVar1);
    }
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085b05e4; end: 1085b079b; -[SCTCKCallManager _registerProviderIfNeeded] */

void FUN_1085b05e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSDataAsset_1126d91b0;
  _objc_alloc(PTR__OBJC_CLASS___NSDataAsset_1126d91b0);
  func_0x00010c02d480();
  puVar3 = puVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___CXProviderConfiguration_1126da308;
  _objc_alloc(PTR__OBJC_CLASS___CXProviderConfiguration_1126da308);
  func_0x00010c026b00();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 200);
  func_0x00010c0704e0();
  if (iVar1 != 0) {
    func_0x00010befa120(puVar4);
  }
  func_0x00010c20ff40(puVar2);
  func_0x00010c1c3a60(puVar2);
  func_0x00010c1c3a80(puVar2);
  func_0x00010c2101a0(puVar2);
  func_0x00010c1a9800(puVar2);
  puVar5 = PTR__OBJC_CLASS___CXProvider_1126da310;
  _objc_alloc();
  func_0x00010c001640();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar5;
  _objc_release(uVar6);
  func_0x00010c18b640(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085b079c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 1085b079c; end: 1085b07c7;  */

void FUN_1085b079c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b07c8; end: 1085b08bf; -[SCTCKCallManager _prepareCallKitForConvoId:customRingtoneId:] */

void FUN_1085b07c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010c16c1e0(param_1,param_2,0);
  }
  func_0x00010be89ce0(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be22320(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee520(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c180a40(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar3 = PTR__OBJC_CLASS___CXCallController_1126da318;
    _objc_alloc();
    func_0x00010c03c5c0();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b08c0; end: 1085b090b; -[SCTCKCallManager _releaseCallKit] */

void FUN_1085b08c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  return;
}



/* Entry: 1085b090c; end: 1085b0a97; -[SCTCKCallManager _dismissCallsWithReason:shouldNotifyListener:] */

void FUN_1085b090c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_130;
  lVar5 = lVar1;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        lVar11 = *(long *)(lStack_128 + lVar10 * 8);
        if (param_4 != 0) {
          lVar2 = lVar11;
          func_0x00010c2688a0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 != 0) {
            lVar3 = param_1 + 0x20;
            _objc_loadWeakRetained(lVar3);
            lVar4 = lVar11;
            func_0x00010c2688a0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf757c0(lVar3,param_2,lVar4);
            _objc_release(lVar4);
            _objc_release(lVar3);
          }
          _objc_release(lVar2);
        }
        func_0x00010be097e0(param_1,param_2,lVar11,param_3);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      puVar9 = &uStack_130;
      lVar5 = lVar1;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar1);
  func_0x00010be8a420(param_1);
  lVar5 = *(long *)(param_1 + 0x50);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  lVar1 = lVar5 + 0x48;
  _objc_loadWeakRetained(lVar1);
  puVar7 = PTR_PTR_1126b55c0;
  puVar6 = puVar9;
  func_0x00010c29afe0();
  uVar8 = 1;
  if ((int)puVar6 != 0) {
    uVar8 = 2;
  }
  puVar6 = puVar9;
  func_0x00010c247d20(puVar9);
  func_0x00010c24e1c0(puVar7,param_2,uVar8,puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  func_0x00010c2688a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c08b7e0(lVar1,param_2,puVar6,puVar7,0,0,0);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(lVar5 + 0x70) = 0;
  _objc_release(uVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085b0a98; end: 1085b0b77; -[SCTCKCallManager _launchCallPageForOutgoingCall:] */

void FUN_1085b0a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR_PTR_1126b55c0;
  uVar2 = param_3;
  func_0x00010c29afe0();
  uVar4 = 1;
  if ((int)uVar2 != 0) {
    uVar4 = 2;
  }
  uVar2 = param_3;
  func_0x00010c247d20(param_3);
  func_0x00010c24e1c0(puVar3,param_2,uVar4,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2688a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c08b7e0(lVar1,param_2,uVar4,puVar3,0,0,0);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085b0b78; end: 1085b0ccf; -[SCTCKCallManager _presentIncomingCall:] */

void FUN_1085b0b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    _objc_retain(param_3);
    uVar5 = *(ulong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_3;
    goto LAB_1085b0c10;
  }
  uVar5 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar5 == 0) {
LAB_1085b0bf8:
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_3;
  }
  else {
    puVar1 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c06c3c0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) goto LAB_1085b0bf8;
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c06dbe0(uVar5,param_2,uVar6);
    _objc_release(uVar6);
    if ((uVar3 & 1) != 0) goto LAB_1085b0c10;
    uVar6 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b55c0;
    uVar4 = param_3;
    func_0x00010c0c3fe0(param_3);
    func_0x00010c2364e0(puVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7e0(uVar5,param_2,uVar6,puVar1,0,0,0);
    _objc_release(puVar1);
  }
  _objc_release(uVar6);
LAB_1085b0c10:
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b0cd0; end: 1085b0e4b; -[SCTCKCallManager _endCall:reason:] */

void FUN_1085b0cd0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar4 = 2;
    if (param_4 < 3) {
      if (param_4 == 0) {
        lVar3 = param_3;
        func_0x00010bf56000(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be713c0(param_1,param_2,lVar3);
        _objc_release(lVar3);
        goto LAB_1085b0e08;
      }
      bVar1 = param_4 == 2;
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
      uVar4 = 4;
      if (param_4 != 4) {
        uVar4 = 2;
      }
      bVar1 = param_4 == 3;
    }
    if (!bVar1) {
      uVar5 = uVar4;
    }
    func_0x00010be92500(param_1,param_2,param_3);
    if (*(char *)(param_1 + 0x88) == '\x01') {
      puVar2 = PTR_PTR_1126da320;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar2;
      _objc_release(uVar4);
      lVar3 = param_3;
      func_0x00010c294d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175b40(*(undefined8 *)(param_1 + 0x90),param_2,lVar3);
      _objc_release(lVar3);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189a20(*(undefined8 *)(param_1 + 0x90),param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1e8080(*(undefined8 *)(param_1 + 0x90),param_2,uVar5);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = param_3;
      func_0x00010c294d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132840(uVar4,param_2,lVar3,0,uVar5);
      _objc_release(lVar3);
    }
    func_0x00010bdd8be0(param_1,param_2,param_3);
  }
LAB_1085b0e08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b0e4c; end: 1085b0f73; -[SCTCKCallManager _callDidEnd:] */

void FUN_1085b0e4c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c294d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c740(uVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf757c0(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  func_0x00010c142940(param_3,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  lVar3 = param_3;
  func_0x00010c294d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b0f74; end: 1085b0f7b; -[SCTCKCallManager _appStartComplete] */

void FUN_1085b0f74(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be95f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeTasksAfterAppStartOrActiv_112583160);
  return;
}



/* Entry: 1085b0f7c; end: 1085b0f8f; -[SCTCKCallManager _reportOutgoingCallIfPending] */

void FUN_1085b0f7c(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reportOutgoingCall_isFromButton_112581960,*(long *)(param_1 + 0x70),0)
    ;
    return;
  }
  return;
}



/* Entry: 1085b0f90; end: 1085b0fb3; -[SCTCKCallManager _resumeTasksAfterAppStartOrActivate] */

void FUN_1085b0f90(undefined8 param_1)

{
  func_0x00010be8ff20();
                    /* WARNING: Could not recover jumptable at 0x00010be7beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentIncomingCallIfNeeded_11257c948);
  return;
}



/* Entry: 1085b0fb4; end: 1085b0fc3; -[SCTCKCallManager _presentIncomingCallIfNeeded] */

void FUN_1085b0fb4(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentIncomingCall__11257c940);
    return;
  }
  return;
}



/* Entry: 1085b0fc4; end: 1085b101b; -[SCTCKCallManager _requestCallKitAudioSessionWithCompletion:] */

void FUN_1085b0fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x5a) = 1;
  _objc_retain(param_3);
  func_0x00010bdd8c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134d40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b101c; end: 1085b10b3; -[SCTCKCallManager _releaseCallKitAudioSession] */

void FUN_1085b101c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x5a) == '\x01') {
    lVar1 = param_1;
    func_0x00010bdd8c60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
    func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf28080(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bdd8c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128480();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  return;
}



/* Entry: 1085b10b4; end: 1085b1107; -[SCTCKCallManager _setIncludesCallsInRecentsIfPossible:] */

void FUN_1085b10b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf46560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abe00();
  func_0x00010c180a40(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b1108; end: 1085b1297; -[SCTCKCallManager _callForTalkContext:] */

void FUN_1085b1108(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  ulong uVar12;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long lVar13;
  long unaff_x28;
  long lVar14;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined1 *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
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
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x21 = lVar8;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        unaff_x23 = uVar12;
        func_0x00010c2688a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bf4e8a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_3;
        func_0x00010bf4e8a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x24;
        puVar7 = (undefined8 *)unaff_x25;
        func_0x00010c0720c0();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if ((unaff_x26 & 1) != 0) {
          _objc_retain(uVar12);
          goto LAB_1085b1248;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x21 != unaff_x28);
      unaff_x21 = lVar1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  uVar12 = 0;
LAB_1085b1248:
  _objc_release(lVar1);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1085b1298;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    uStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = uVar12;
    lStack_158 = unaff_x21;
    lStack_150 = lVar1;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar1 = *(long *)(puVar2 + 0x50);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar13 = *plStack_250;
      do {
        lVar14 = 0;
        do {
          if (*plStack_250 != lVar13) {
            _objc_enumerationMutation(lVar1);
          }
          uVar12 = *(ulong *)(lStack_258 + lVar14 * 8);
          uVar3 = uVar12;
          func_0x00010c2688a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf5e540();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf517c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          if ((uVar6 & 1) != 0) {
            _objc_retain(uVar12);
            goto LAB_1085b13d0;
          }
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        lVar8 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_260,auStack_220,0x10);
      } while (lVar8 != 0);
    }
    uVar12 = 0;
LAB_1085b13d0:
    _objc_release(lVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      lVar8 = *(long *)((long)puVar7 + 0x90);
      if (lVar8 == 0) {
        return;
      }
      uVar11 = *(undefined8 *)((long)puVar7 + 0x10);
      func_0x00010bf28540();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar7 + 0x90);
      func_0x00010bf64de0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)puVar7 + 0x90);
      func_0x00010c121ea0(uVar10);
      func_0x00010c132840(uVar11,param_2,lVar8,uVar9,uVar10);
      _objc_release(uVar9);
      _objc_release(lVar8);
      uVar9 = *(undefined8 *)((long)puVar7 + 0x90);
      *(undefined8 *)((long)puVar7 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar9);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 1085b1298; end: 1085b141f; -[SCTCKCallManager _callForConvoId:] */

void FUN_1085b1298(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        uVar10 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar2 = uVar10;
        func_0x00010c2688a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf5e540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf517c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar10);
          goto LAB_1085b13d0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  uVar10 = 0;
LAB_1085b13d0:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_3 + 0x90);
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bf28540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x90);
    func_0x00010bf64de0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x90);
    func_0x00010c121ea0(uVar8);
    func_0x00010c132840(uVar9,param_2,lVar6,uVar7,uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    uVar7 = *(undefined8 *)(param_3 + 0x90);
    *(undefined8 *)(param_3 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  return;
}



/* Entry: 1085b1420; end: 1085b14b7; -[SCTCKCallManager _reportEndCallIfPending] */

void FUN_1085b1420(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf28540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf64de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c121ea0(uVar3);
    func_0x00010c132840(uVar4,param_2,lVar1,uVar2,uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1085b14b8; end: 1085b158f; -[SCTCKCallManager _snapchatterNameToDisplayForUserId:] */

void FUN_1085b14b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = lVar1;
    func_0x00010bfebfc0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010901d7c4(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    lVar4 = lVar2;
    func_0x00010901d7c4(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1085b1590; end: 1085b166f; -[SCTCKCallManager _snapchatterNameToDisplayForUsername:] */

void FUN_1085b1590(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = lVar1;
    func_0x00010bfebfe0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_retain(param_3);
      lVar4 = param_3;
    }
    else {
      lVar4 = lVar3;
      func_0x00010901d7c4(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    lVar4 = lVar2;
    func_0x00010901d7c4(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1085b1670; end: 1085b177f; -[SCTCKCallManager _getRingtoneSoundNameWithConvoId:customRingtoneId:] */

void FUN_1085b1670(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfd5ce0();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c06d260();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b2a30;
    func_0x00010bf61b20(PTR_PTR_1126b2a30,param_2,param_4);
  }
  puVar4 = PTR_PTR_1126b2a30;
  func_0x00010c247040(PTR_PTR_1126b2a30,param_2,puVar5,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085b1780; end: 1085b18f7; -[SCTCKCallManager _subscribeToConversationUpdatesForCall:] */

void FUN_1085b1780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_3);
  uVar1 = param_3;
  func_0x00010c2688a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50700();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf86d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1085b18f8; end: 1085b1963;  */

void FUN_1085b18f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde8d80();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085b1964; end: 1085b1aaf; -[SCTCKCallManager _conversationUpdated:forCall:] */

void FUN_1085b1964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf517c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf51800(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdd8e00(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085b1ab0; end: 1085b1bf7;  */

void FUN_1085b1ab0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c074920();
    if ((int)uVar6 == 0) {
      _objc_release(uVar2);
    }
    else {
      lVar3 = param_2;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      if (lVar3 == 0) goto LAB_1085b1bd8;
    }
    func_0x00010c1759c0(*(undefined8 *)(param_1 + 0x28));
    puVar4 = PTR__OBJC_CLASS___CXCallUpdate_1126da2f8;
    _objc_alloc_init(PTR__OBJC_CLASS___CXCallUpdate_1126da2f8);
    puVar5 = PTR__OBJC_CLASS___CXHandle_1126da2c0;
    _objc_alloc(PTR__OBJC_CLASS___CXHandle_1126da2c0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf517c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0563a0(puVar5);
    func_0x00010c1ea2a0(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar6);
    func_0x00010c1bf500(puVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c294d60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132860(uVar2);
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
LAB_1085b1bd8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085b1bf8; end: 1085b1e0b; -[SCTCKCallManager _resetCallTitleAndHandleForCallIfNeeded:] */

void FUN_1085b1bf8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c2688a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c063ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    if ((int)uVar5 == 0) {
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar5 = param_3;
      func_0x00010bf283a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c063c20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0720c0(uVar5,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar7 & 1) != 0) goto LAB_1085b1dec;
    }
    puVar8 = PTR__OBJC_CLASS___CXCallUpdate_1126da2f8;
    _objc_alloc_init(PTR__OBJC_CLASS___CXCallUpdate_1126da2f8);
    puVar9 = PTR__OBJC_CLASS___CXHandle_1126da2c0;
    _objc_alloc(PTR__OBJC_CLASS___CXHandle_1126da2c0);
    uVar1 = param_3;
    func_0x00010c063ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0563a0(puVar9,param_2,1,uVar1);
    func_0x00010c1ea2a0(puVar8,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c063c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf500(puVar8,param_2,uVar1);
    _objc_release(uVar1);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010c294d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132860(uVar10,param_2,uVar1,puVar8);
    _objc_release(uVar1);
    _objc_release(puVar8);
  }
LAB_1085b1dec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b1e0c; end: 1085b1f07; -[SCTCKCallManager .cxx_destruct] */

void FUN_1085b1e0c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085b1f08; end: 1085b1fdf; -[SCTCKOutgoingCallInfo initWithConvoId:fromRecentList:videoRelated:sourceType:isHangout:completion:] */

undefined1 *
FUN_1085b1f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fcee8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 0x11) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x12) = param_7;
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085b1fe0; end: 1085b20b7; -[SCTCKOutgoingCallInfo initWithTalkContext:fromRecentList:videoRelated:sourceType:isHangout:completion:] */

undefined1 *
FUN_1085b1fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fcee8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 0x11) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x12) = param_7;
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085b20b8; end: 1085b2117; -[SCTCKOutgoingCallInfo convoId] */

void FUN_1085b20b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    _objc_retain(lVar2);
  }
  else {
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085b2118; end: 1085b216f; -[SCTCKOutgoingCallInfo setTalkContext:] */

void FUN_1085b2118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b2170; end: 1085b2177; -[SCTCKOutgoingCallInfo talkContext] */

undefined8 FUN_1085b2170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085b2178; end: 1085b217f; -[SCTCKOutgoingCallInfo fromRecentList] */

undefined1 FUN_1085b2178(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1085b2180; end: 1085b2187; -[SCTCKOutgoingCallInfo videoRelated] */

undefined1 FUN_1085b2180(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1085b2188; end: 1085b218f; -[SCTCKOutgoingCallInfo sourceType] */

undefined8 FUN_1085b2188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085b2190; end: 1085b2197; -[SCTCKOutgoingCallInfo isHangout] */

undefined1 FUN_1085b2190(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 1085b2198; end: 1085b219f; -[SCTCKOutgoingCallInfo completion] */

undefined8 FUN_1085b2198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085b21a0; end: 1085b21db; -[SCTCKOutgoingCallInfo .cxx_destruct] */

void FUN_1085b21a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085b21dc; end: 1085b22c7; -[SCTalkNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b21dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + _DAT_112776cf8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112776cfc;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c2689a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0dc760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0(lVar3,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085b22c8; end: 1085b23e3; -[SCTalkNotificationProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b22c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1 + _DAT_112776cf8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112776cfc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c2689a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0dc760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_58 = PTR_PTR_1126fcef0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085b23e4; end: 1085b2427; -[SCTalkNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b23e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112776cf8);
  _objc_destroyWeak(param_1 + _DAT_112776cfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112776d00);
  return;
}



/* Entry: 1085b2428; end: 1085b24bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b2428(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cf810;
    _objc_alloc(PTR_PTR_1126cf810);
    lVar1 = param_1 + _DAT_112776d10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0184a0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085b24c0; end: 1085b2903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b24c0(long param_1,undefined8 param_2)

{
  long lVar1;
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
  long lVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR_PTR_1126da330;
    _objc_alloc();
    uVar26 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112776d34;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112776d34;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c244b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112776d34;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c244da0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_112776d38;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bfcf8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112776d38;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112776d38;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bfcf900();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_112776d80;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_112776d3c;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_112776d3c;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + _DAT_112776d3c;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf1ad00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar1 + _DAT_112776d3c;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c2426c0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + 0x28);
    lVar24 = lVar1 + _DAT_112776d98;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05baa0(puVar27,param_2,uVar26,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,
                        lVar19,lVar21,lVar23,uVar28,lVar25);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
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
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1085b2904; end: 1085b2a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b2904(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126da340;
    _objc_alloc(PTR_PTR_1126da340);
    lVar1 = param_1 + _DAT_112776d84;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d820(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085b2a7c; end: 1085b2e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b2a7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puVar20;
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae720;
  if (lVar1 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_70,param_1 + 0x50);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126da358;
    _objc_alloc();
    lVar4 = lVar1 + _DAT_112776d30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0dc700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112776d30;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf07b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030180();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar20 = PTR_PTR_1126da360;
    _objc_alloc();
    lVar4 = lVar1 + _DAT_112776da0;
    _objc_loadWeakRetained();
    lVar8 = lVar4;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112776d34;
    _objc_loadWeakRetained();
    lVar9 = lVar6;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112776d38;
    _objc_loadWeakRetained();
    lVar10 = lVar5;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_112776d3c;
    _objc_loadWeakRetained();
    lVar11 = lVar7;
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112776d90;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_112776d5c;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_112776d94;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_112776da4;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bf69040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05bd00(puVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar7);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1085b2e24; end: 1085b2f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b2e24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126da348;
    _objc_alloc(PTR_PTR_1126da348);
    lVar1 = param_1 + _DAT_112776db4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2a2720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126da350;
    _objc_opt_new(PTR_PTR_1126da350);
    lVar5 = param_1 + _DAT_112776db8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c09dc80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112776d10;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062a60(puVar9,param_2,lVar3,puVar4,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1085b2f74; end: 1085b2f7b;  */

void FUN_1085b2f74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c268910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_talkContextMutableFactoryObjc_112677c68);
  return;
}



/* Entry: 1085b2f7c; end: 1085b30ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b2f7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + _DAT_112776d04) & 1) != 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126da368;
    _objc_alloc(PTR_PTR_1126da368);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + _DAT_112776da8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a300(puVar5,param_2,uVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085b3100; end: 1085b3173;  */

void FUN_1085b3100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf27fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1085b3174; end: 1085b3217;  */

void FUN_1085b3174(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_108610d90(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1085b3218; end: 1085b3233;  */

void FUN_1085b3218(void)

{
  _objc_opt_new(PTR_PTR_1126da388);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085b3234; end: 1085b3fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b3234(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + _DAT_112776d04) & 1) != 0)) {
    puVar49 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126da390;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = (long)_DAT_112776d28;
    lVar3 = lVar1 + lVar48;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c360(puVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126da398;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112776db0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006480();
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bef7ce0(puVar2);
    puVar7 = PTR_PTR_1126ae720;
    puVar25 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1085b4000;
    puStack_88 = &UNK_110861c28;
    _objc_copyWeak(auStack_80,param_1 + 0x70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ae720;
    puStack_c8 = puVar25;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1085b40c0;
    puStack_b0 = &UNK_11084d4a8;
    _objc_copyWeak(auStack_a8,param_1 + 0x70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126ae720;
    puStack_f0 = puVar25;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1085b4164;
    puStack_d8 = &UNK_11084d4a8;
    _objc_copyWeak(auStack_d0,param_1 + 0x70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126da3a0;
    _objc_alloc();
    func_0x00010c018080();
    puVar11 = PTR_PTR_1126da3a8;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112776db0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006480();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar12 = PTR_PTR_1126da3b0;
    func_0x00010bf852e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + _DAT_112776d4c;
    _objc_loadWeakRetained();
    lVar13 = lVar3;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112776d4c;
    _objc_loadWeakRetained();
    lVar14 = lVar4;
    func_0x00010bf30c00();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = lVar1 + _DAT_112776d4c;
    _objc_loadWeakRetained(lVar5);
    lVar15 = lVar5;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_112776d50;
    _objc_loadWeakRetained(lVar16);
    lVar17 = lVar16;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_112776d44;
    _objc_loadWeakRetained(lVar18);
    lVar19 = lVar18;
    func_0x00010c135640();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar13;
    FUN_108610cb4(lVar13,lVar14,uVar50,lVar15,lVar17,lVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar13);
    _objc_release(lVar3);
    puVar21 = PTR_PTR_1126da3b8;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112776d48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfefa00();
    _objc_release(lVar3);
    puVar22 = PTR_PTR_1126ae720;
    puVar25 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x1085b4208;
    puStack_108 = &UNK_110a59330;
    _objc_copyWeak(auStack_f8,param_1 + 0x70);
    puStack_100 = puVar7;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126ae720;
    puStack_158 = puVar25;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x1085b4290;
    puStack_140 = &UNK_110a59360;
    _objc_copyWeak(auStack_128,param_1 + 0x70);
    puStack_138 = puVar11;
    puStack_130 = puVar7;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126da3d0;
    _objc_alloc();
    func_0x00010c038840();
    puVar25 = PTR_PTR_1126da3d8;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112776d84;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112776d70;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c05bce0();
    uVar50 = *(undefined8 *)(lVar1 + _DAT_112776d1c);
    *(undefined **)(lVar1 + _DAT_112776d1c) = puVar25;
    _objc_release(uVar50);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    puVar25 = PTR_PTR_1126ae720;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_1085b4318;
    puStack_178 = &UNK_110a59390;
    _objc_copyWeak(auStack_160,param_1 + 0x70);
    uStack_170 = *(undefined8 *)(param_1 + 0x40);
    uStack_168 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_198,param_1 + 0x70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = PTR_PTR_1126da3f0;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112776d3c;
    _objc_loadWeakRetained();
    lVar27 = lVar3;
    func_0x00010bf1b5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112776da0;
    _objc_loadWeakRetained();
    lVar28 = lVar4;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112776d54;
    _objc_loadWeakRetained();
    lVar29 = lVar5;
    func_0x00010bf17600();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar29;
    func_0x000108610dd8();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_112776d58;
    _objc_loadWeakRetained();
    lVar31 = lVar16;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_112776d70;
    _objc_loadWeakRetained();
    lVar32 = lVar18;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + _DAT_112776d48;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + _DAT_112776d30;
    _objc_loadWeakRetained();
    lVar33 = lVar14;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar34 = lVar15;
    func_0x00010c1306c0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar35 = lVar17;
    func_0x00010c09da00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar36 = lVar19;
    func_0x00010c0ebd00();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar1 + _DAT_112776d94;
    _objc_loadWeakRetained();
    lVar37 = lVar47;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = lVar1 + _DAT_112776d94;
    _objc_loadWeakRetained();
    lVar39 = lVar38;
    func_0x00010bfa2520();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar1 + _DAT_112776d9c;
    _objc_loadWeakRetained();
    lVar41 = lVar1 + _DAT_112776da4;
    _objc_loadWeakRetained();
    lVar42 = lVar41;
    func_0x00010bf281e0();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = lVar1 + _DAT_112776da8;
    _objc_loadWeakRetained();
    lVar44 = lVar43;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = lVar1 + _DAT_112776db0;
    _objc_loadWeakRetained();
    lVar46 = lVar45;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050640();
    uVar50 = *(undefined8 *)(lVar1 + _DAT_112776d20);
    *(undefined **)(lVar1 + _DAT_112776d20) = puVar49;
    _objc_release(uVar50);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar47);
    _objc_release(lVar36);
    _objc_release(lVar19);
    _objc_release(lVar35);
    _objc_release(lVar17);
    _objc_release(lVar34);
    _objc_release(lVar15);
    _objc_release(lVar33);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar32);
    _objc_release(lVar18);
    _objc_release(lVar31);
    _objc_release(lVar16);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar5);
    _objc_release(lVar28);
    _objc_release(lVar4);
    _objc_release(lVar27);
    _objc_release(lVar3);
    puVar49 = PTR_PTR_1126da3f8;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar13 = lVar3;
    func_0x00010c09da00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar14 = lVar4;
    func_0x00010bfebdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar15 = lVar5;
    func_0x00010c0ebd00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_112776d24;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0dc5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_112776d6c;
    _objc_loadWeakRetained();
    lVar47 = lVar18;
    func_0x00010c1306c0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = lVar1 + lVar48;
    _objc_loadWeakRetained();
    lVar19 = lVar48;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ae40(puVar49);
    _objc_release(lVar19);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar13);
    _objc_release(lVar3);
    _objc_release(puVar26);
    _objc_destroyWeak(auStack_198);
    _objc_release(puVar25);
    _objc_destroyWeak(auStack_160);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_destroyWeak(auStack_128);
    _objc_release(puVar22);
    _objc_destroyWeak(auStack_f8);
    _objc_release(puVar21);
    _objc_release(lVar20);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar49);
  return;
}



/* Entry: 1085b4000; end: 1085b4317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b4000(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112776d8c;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bfb22a0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ee4ef8,1,0,0x30,
                        &PTR____CFConstantStringClassReference_110ee4f18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1085b4318; end: 1085b4427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b4318(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126da3e0;
    _objc_alloc(PTR_PTR_1126da3e0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + _DAT_112776d28;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0d3da0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    lVar5 = lVar1 + _DAT_112776d30;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5440(puVar8,param_2,uVar2,lVar4,uVar7,0,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1085b4428; end: 1085b44cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b4428(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126da3e8;
    _objc_alloc(PTR_PTR_1126da3e8);
    lVar2 = lVar1 + _DAT_112776dac;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c24e0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04b920(puVar4,param_2,lVar3,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085b44d0; end: 1085b44d7;  */

void FUN_1085b44d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c268910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_talkContextMutableFactoryObjc_112677c68);
  return;
}



/* Entry: 1085b44d8; end: 1085b45e7; -[SCTalkV3EntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b44d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  plVar4 = &lStack_50;
  *(undefined1 *)(param_1 + _DAT_112776d04) = 1;
  lVar5 = (long)_DAT_112776d18;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar2);
  func_0x00010c069d00(uVar1);
  lVar5 = (long)_DAT_112776d14;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_112776d20;
  func_0x00010bf86e40(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_112776d1c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar3);
  puStack_48 = PTR_PTR_1126fcef8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1085b45e8; end: 1085b461b; -[SCTalkV3EntryPoint dealloc] */

void FUN_1085b45e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fcef8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085b461c; end: 1085b488b; -[SCTalkV3EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085b461c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776dc0,0);
  _objc_storeStrong(param_1 + _DAT_112776dbc,0);
  _objc_destroyWeak(param_1 + _DAT_112776db8);
  _objc_destroyWeak(param_1 + _DAT_112776db4);
  _objc_destroyWeak(param_1 + _DAT_112776db0);
  _objc_destroyWeak(param_1 + _DAT_112776dac);
  _objc_destroyWeak(param_1 + _DAT_112776da8);
  _objc_destroyWeak(param_1 + _DAT_112776da4);
  _objc_destroyWeak(param_1 + _DAT_112776da0);
  _objc_destroyWeak(param_1 + _DAT_112776d9c);
  _objc_destroyWeak(param_1 + _DAT_112776d24);
  _objc_destroyWeak(param_1 + _DAT_112776d98);
  _objc_destroyWeak(param_1 + _DAT_112776d94);
  _objc_destroyWeak(param_1 + _DAT_112776d90);
  _objc_destroyWeak(param_1 + _DAT_112776d8c);
  _objc_destroyWeak(param_1 + _DAT_112776d88);
  _objc_destroyWeak(param_1 + _DAT_112776d84);
  _objc_destroyWeak(param_1 + _DAT_112776d80);
  _objc_destroyWeak(param_1 + _DAT_112776d7c);
  _objc_destroyWeak(param_1 + _DAT_112776d78);
  _objc_destroyWeak(param_1 + _DAT_112776d10);
  _objc_destroyWeak(param_1 + _DAT_112776d08);
  _objc_destroyWeak(param_1 + _DAT_112776d74);
  _objc_destroyWeak(param_1 + _DAT_112776d70);
  _objc_destroyWeak(param_1 + _DAT_112776d6c);
  _objc_destroyWeak(param_1 + _DAT_112776d68);
  _objc_destroyWeak(param_1 + _DAT_112776d64);
  _objc_destroyWeak(param_1 + _DAT_112776d60);
  _objc_destroyWeak(param_1 + _DAT_112776d5c);
  _objc_destroyWeak(param_1 + _DAT_112776d58);
  _objc_destroyWeak(param_1 + _DAT_112776d28);
  _objc_destroyWeak(param_1 + _DAT_112776d54);
  _objc_destroyWeak(param_1 + _DAT_112776d50);
  _objc_destroyWeak(param_1 + _DAT_112776d4c);
  _objc_destroyWeak(param_1 + _DAT_112776d48);
  _objc_destroyWeak(param_1 + _DAT_112776d44);
  _objc_destroyWeak(param_1 + _DAT_112776d40);
  _objc_destroyWeak(param_1 + _DAT_112776d3c);
  _objc_destroyWeak(param_1 + _DAT_112776d38);
  _objc_destroyWeak(param_1 + _DAT_112776d34);
  _objc_destroyWeak(param_1 + _DAT_112776d30);
  _objc_destroyWeak(param_1 + _DAT_112776d0c);
  _objc_storeStrong(param_1 + _DAT_112776d2c,0);
  _objc_storeStrong(param_1 + _DAT_112776d18,0);
  _objc_storeStrong(param_1 + _DAT_112776d1c,0);
  _objc_storeStrong(param_1 + _DAT_112776d20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776d14,0);
  return;
}



/* Entry: 1085b488c; end: 1085b4b6b; -[SCModularCallSession initWithSessionWrapper:audioManager:identityServices:callKitServices:talkManager:selectedLensInfoObservable:delegate:] */

undefined8 *
FUN_1085b488c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fcf00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    uVar2 = param_3;
    func_0x00010bf59a00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[10];
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0xb];
    puVar4 = puVar1 + 3;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf0ffc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(puVar1[0xd]);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    func_0x00010bef9980();
    _objc_release(puVar4);
    func_0x00010be884a0(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085b4b6c; end: 1085b4bab; -[SCModularCallSession lensToRestore] */

void FUN_1085b4b6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c097660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085b4bac; end: 1085b4bf3; -[SCModularCallSession setLensToRestore:] */

void FUN_1085b4bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1bd080();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b4bf4; end: 1085b4c2b; -[SCModularCallSession cameraType] */

long FUN_1085b4bf4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b540();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1085b4c2c; end: 1085b4c5f; -[SCModularCallSession setCameraType:] */

void FUN_1085b4c2c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c177420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b4c60; end: 1085b4c63; -[SCModularCallSession callingController] */

void FUN_1085b4c60(void)

{
  return;
}



/* Entry: 1085b4c64; end: 1085b4c8f; -[SCModularCallSession stopScreenCapture] */

void FUN_1085b4c64(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c256940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b4c90; end: 1085b50a3; -[SCModularCallSession callInfoObservable] */

void FUN_1085b4c90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar4 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar5 = puVar4;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar5;
    func_0x00010bf50700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar7 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar8 = puVar5;
    func_0x00010bf50700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1085b5100;
    puStack_88 = &UNK_110a59480;
    _objc_retain(lVar7);
    puVar9 = puVar8;
    lStack_80 = lVar7;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar5;
    func_0x00010bf50700();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1085b5158;
    puStack_b0 = &UNK_110a59480;
    _objc_retain(lVar7);
    puVar10 = puVar8;
    lStack_a8 = lVar7;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf870a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae750;
    uVar22 = *(undefined8 *)(param_1 + 0x40);
    lVar12 = param_1;
    func_0x00010c097660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2519e0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c09de20();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0x68);
    lVar15 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf281e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c0f4a20();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    FUN_1085b7854(puVar6,uVar1,puVar9,puVar10,uVar3,uVar2,uVar11,uVar22,lVar14,uVar23,lVar16,lVar18,
                  lVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar22);
    _objc_release(puVar4);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_initWeak(auStack_d0,param_1);
    puVar20 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar8;
    func_0x00010c0e0e60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d8,auStack_d0);
    puVar4 = puVar21;
    func_0x00010bf87460(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_d8);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar8);
    _objc_release(puVar10);
    _objc_release(lStack_a8);
    _objc_release(puVar9);
    _objc_release(lStack_80);
    _objc_release(lVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085b50a4; end: 1085b51d7;  */

void FUN_1085b50a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf51800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074920();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085b51d8; end: 1085b5257; -[SCModularCallSession hasLocalVideoPublishIntent] */

bool FUN_1085b51d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3 != 0;
}



/* Entry: 1085b5258; end: 1085b530f; -[SCModularCallSession activate] */

void FUN_1085b5258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c1b2500(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010c21b2e0(*(undefined8 *)(param_1 + 0x10),param_2,0);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb3300();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = PTR_PTR_1126da418;
  _objc_alloc(PTR_PTR_1126da418);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bde0(puVar2,param_2,lVar1);
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5310; end: 1085b5423; -[SCModularCallSession activateWithAction:completion:] */

void FUN_1085b5310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c21b2e0(uVar3,param_2,0);
  func_0x00010c1b2500(*(undefined8 *)(param_1 + 0x10),param_2,0);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfb3300();
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085b5424;
  puStack_58 = &UNK_110a594b0;
  lStack_50 = param_1;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1085b5434;
  puStack_88 = &UNK_1108a0020;
  lStack_80 = param_1;
  uStack_78 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c02a0(param_3,param_2,&puStack_70,&puStack_a0);
  _objc_release(param_3);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085b5424; end: 1085b5443;  */

void FUN_1085b5424(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updatePublishedMedia_completion__11267fe00,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085b5444; end: 1085b548f; -[SCModularCallSession background] */

void FUN_1085b5444(long param_1,undefined8 param_2)

{
  func_0x00010c21b2e0(*(undefined8 *)(param_1 + 0x10),param_2,3);
  func_0x00010c1b2500(*(undefined8 *)(param_1 + 0x10),param_2,0);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb3300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5490; end: 1085b54df; -[SCModularCallSession dispose] */

void FUN_1085b5490(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c06a220();
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b54e0; end: 1085b5527; -[SCModularCallSession selectAudioDevice:] */

void FUN_1085b54e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c158740();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5528; end: 1085b557b; -[SCModularCallSession createVideoFrameProvider] */

void FUN_1085b5528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da420;
  _objc_alloc(PTR_PTR_1126da420);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c03e220(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085b557c; end: 1085b55c3; -[SCModularCallSession onLensStarted:] */

void FUN_1085b557c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4dc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b55c4; end: 1085b55ef; -[SCModularCallSession onLensStopped] */

void FUN_1085b55c4(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b55f0; end: 1085b561b; -[SCModularCallSession notifyScreenShotTaken] */

void FUN_1085b55f0(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dd540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b561c; end: 1085b5647; -[SCModularCallSession notifyScreenRecorded] */

void FUN_1085b561c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dd500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5648; end: 1085b568f; -[SCModularCallSession reportCallingAddedParticipants:] */

void FUN_1085b5648(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c132880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5690; end: 1085b56cb; -[SCModularCallSession setNativeAudioSelectorOpened:] */

void FUN_1085b5690(long param_1)

{
  func_0x00010c1b2500(*(undefined8 *)(param_1 + 0x10));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb3300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


