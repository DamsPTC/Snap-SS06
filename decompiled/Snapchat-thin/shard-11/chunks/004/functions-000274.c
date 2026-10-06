/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10853f69c; end: 10853f743; -[SCOurStoryMetadata isEqual:] */

long FUN_10853f69c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10853f71c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10853f728;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10853f728;
        }
        goto LAB_10853f71c;
      }
    }
    lVar3 = 0;
  }
LAB_10853f728:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10853f744; end: 10853f74b; -[SCOurStoryMetadata storyId] */

undefined8 FUN_10853f744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10853f74c; end: 10853f753; -[SCOurStoryMetadata displayName] */

undefined8 FUN_10853f74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10853f754; end: 10853f783; -[SCOurStoryMetadata .cxx_destruct] */

void FUN_10853f754(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10853f784; end: 10853f88b; +[SCCCreatePostAddSoundMusicInfo musicInfoWithTrackInfo:] */

void FUN_10853f784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c5058;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c278a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2191a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf0a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a540(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c278a40(param_3);
  func_0x00010c2191c0((double)(int)uVar2,puVar1);
  uVar2 = param_3;
  func_0x00010c278a40(param_3);
  func_0x00010c1b3160(puVar1,param_2,(int)uVar2 == 3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c081860(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5240(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10853f88c; end: 10853f8ab;  */

undefined4 FUN_10853f88c(ulong param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&UNK_10df35670 + param_1 * 4);
  }
  return 6;
}



/* Entry: 10853f8ac; end: 10853f90b;  */

bool FUN_10853f8ac(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c27dd80();
    if ((int)lVar2 == 6) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010c27dd80(param_1);
      bVar1 = (int)lVar2 == 4;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10853f90c; end: 10854013f;  */

void FUN_10853f90c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0fd2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c247520();
  uVar2 = param_1;
  func_0x00010c262020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4db8;
  _objc_alloc(PTR_PTR_1126c4db8);
  func_0x00010bffcaa0();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126c4dc0;
  _objc_alloc(PTR_PTR_1126c4dc0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(uVar2);
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0fd140(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c297e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0367c0(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c0e50;
  _objc_alloc(PTR_PTR_1126c0e50);
  uVar6 = uVar1;
  func_0x00010c297e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036540(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108540140; end: 10854021f;  */

void FUN_108540140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5cc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037e40();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108540220; end: 108540a0b;  */

ulong FUN_108540220(long param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar4;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar27 != 0) {
    uVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar4);
      }
      uVar26 = *(undefined8 *)(uVar25 * 8);
      puVar5 = PTR_PTR_1126c5070;
      _objc_alloc();
      uVar6 = uVar26;
      func_0x00010c11ac00(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(uVar26);
      func_0x00010c1143e0(uVar26);
      func_0x00010c075620(uVar26);
      func_0x00010bf85d80(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03bfc0();
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      _objc_release(uVar26);
      _objc_release(uVar6);
      uVar25 = uVar25 + 1;
    } while (uVar27 != uVar25);
    uVar27 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  uVar27 = (ulong)*(byte *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar26 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined1 *)(param_1 + 0x41);
  uVar2 = *(undefined1 *)(param_1 + 0x42);
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00();
  }
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    FUN_108540140(uVar27,uVar6,uVar26,uVar1,uVar2,uVar8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar3;
    func_0x00010bf51e00();
    FUN_108540140(uVar27,uVar6,uVar26,uVar1,uVar2,uVar8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  if (lVar7 != 0) {
    _objc_release(uVar8);
  }
  uVar4 = uVar27;
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  _objc_release(uVar27);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar4);
  if (param_2 == uVar4) {
    uVar27 = 0;
    goto LAB_1085405d0;
  }
  uVar27 = 1;
  if ((param_2 == 0) || (uVar4 == 0)) goto LAB_1085405d0;
  uVar25 = param_2;
  func_0x00010c07c240();
  uVar9 = uVar4;
  func_0x00010c07c240();
  if ((int)uVar25 != (int)uVar9) goto LAB_1085405d0;
  uVar25 = param_2;
  func_0x00010c22eae0();
  uVar9 = uVar4;
  func_0x00010c22eae0();
  if ((int)uVar25 != (int)uVar9) goto LAB_1085405d0;
  uVar25 = param_2;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar25);
  _objc_retain(uVar9);
  if (uVar25 == uVar9) {
LAB_10854068c:
    _objc_release(uVar9);
    _objc_release(uVar25);
    _objc_release(uVar9);
    _objc_release(uVar25);
LAB_1085406ac:
    uVar25 = param_2;
    func_0x00010c246fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar25;
    func_0x00010c0d2fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c246fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0d2fc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 == uVar13) {
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar9);
      _objc_release(uVar25);
    }
    else {
      uVar10 = uVar9;
      func_0x00010c071ae0();
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar9);
      _objc_release(uVar25);
      if ((uVar10 & 1) == 0) goto LAB_1085405d0;
    }
    uVar12 = param_2;
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar12 == uVar13) || (uVar25 = uVar12, func_0x00010c071ae0(), (int)uVar25 != 0)) {
      uVar25 = param_2;
      func_0x00010c134420();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c134420();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar25 == uVar9) || (uVar10 = uVar25, func_0x00010c071ae0(), (int)uVar10 != 0)) {
        uVar10 = param_2;
        func_0x00010c2759e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x00010c2759e0();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar10 == uVar11) || (uVar14 = uVar10, func_0x00010c071ae0(), (int)uVar14 != 0)) {
          uVar14 = param_2;
          func_0x00010c0fd640();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar4;
          func_0x00010c0fd640();
          _objc_retainAutoreleasedReturnValue();
          if ((uVar14 == uVar15) || (uVar27 = uVar14, func_0x00010c071ae0(), (int)uVar27 != 0)) {
            uVar16 = param_2;
            func_0x00010c0f29e0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar16;
            func_0x00010c15a0e0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar4;
            func_0x00010c0f29e0();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar18;
            func_0x00010c15a0e0();
            _objc_retainAutoreleasedReturnValue();
            if ((uVar17 == uVar19) || (uVar27 = uVar17, func_0x00010c071ae0(), (int)uVar27 != 0)) {
              uVar20 = param_2;
              func_0x00010c15a100();
              _objc_retainAutoreleasedReturnValue();
              uVar21 = uVar4;
              func_0x00010c15a100();
              _objc_retainAutoreleasedReturnValue();
              if ((uVar20 == uVar21) || (uVar27 = uVar20, func_0x00010c071ae0(), (int)uVar27 != 0))
              {
                uVar22 = param_2;
                func_0x00010bf8c580();
                _objc_retainAutoreleasedReturnValue();
                uVar23 = uVar4;
                func_0x00010bf8c580();
                _objc_retainAutoreleasedReturnValue();
                if (uVar22 == uVar23) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = uVar22;
                  func_0x00010c071ae0(uVar22);
                  uVar27 = (ulong)((uint)uVar27 ^ 1);
                }
                _objc_release(uVar23);
                _objc_release(uVar22);
              }
              else {
                uVar27 = 1;
              }
              _objc_release(uVar21);
              _objc_release(uVar20);
            }
            else {
              uVar27 = 1;
            }
            _objc_release(uVar19);
            _objc_release(uVar18);
            _objc_release(uVar17);
            _objc_release(uVar16);
          }
          else {
            uVar27 = 1;
          }
          _objc_release(uVar15);
          _objc_release(uVar14);
        }
        _objc_release(uVar11);
        _objc_release(uVar10);
      }
      goto LAB_1085409e8;
    }
  }
  else {
    uVar12 = uVar25;
    uVar13 = uVar9;
    if ((uVar25 != 0) && (uVar9 != 0)) {
      uVar10 = uVar25;
      func_0x00010c074e60();
      uVar11 = uVar9;
      func_0x00010c074e60();
      if ((int)uVar10 == (int)uVar11) {
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        if (uVar12 == uVar13) {
          _objc_release(uVar13);
          _objc_release(uVar12);
          goto LAB_10854068c;
        }
        uVar10 = uVar12;
        func_0x00010c071ae0();
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar9);
        _objc_release(uVar25);
        _objc_release(uVar9);
        _objc_release(uVar25);
        if ((uVar10 & 1) == 0) goto LAB_1085405d0;
        goto LAB_1085406ac;
      }
    }
LAB_1085409e8:
    _objc_release(uVar9);
    _objc_release(uVar25);
  }
  _objc_release(uVar13);
  _objc_release(uVar12);
LAB_1085405d0:
  _objc_release(uVar4);
  _objc_release(param_2);
  return uVar27;
}



/* Entry: 108540a0c; end: 108540a5b; -[SCUploadableLagunaChatImage initWithID:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108540a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcc00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithID__1125e4538);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776078) = param_4;
  }
  return;
}



/* Entry: 108540a5c; end: 108540aab; -[SCUploadableLagunaChatImage initWithID:key:iv:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108540a5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcc00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithID_key_iv__1125e4548);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776078) = in_x5;
  }
  return;
}



/* Entry: 108540aac; end: 108540b37; -[SCUploadableLagunaChatImage mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108540aac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112776078);
  if (uVar2 < 0x1b && (1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0) {
    uVar1 = uVar2;
    FUN_108544644();
    if ((int)uVar1 - 9U < 2) {
      return uVar2;
    }
    if ((uVar2 < 0x1b && (1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0) && ((int)uVar1 - 0xbU < 2)) {
      return uVar2;
    }
  }
  return 10;
}



/* Entry: 108540b38; end: 108540bb7; -[SCUploadableLagunaChatImage isRotationLocked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108540b38(long param_1)

{
  ulong uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112776078);
  if ((uVar1 < 0x1b && (1L << (uVar1 & 0x3f) & 0x7e7fc60U) != 0) &&
     (FUN_108544644(), 0xb < (uint)uVar1)) {
    puStack_28 = PTR_PTR_1126fcc00;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_isRotationLocked_1125fcd38);
  }
  return;
}



/* Entry: 108540bb8; end: 108540c9b; -[SCUploadableLagunaChatImage setImage:duration:screenOverlayImage:] */

void FUN_108540bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108540c9c;
  puStack_68 = &UNK_11084d788;
  uStack_60 = param_4;
  uStack_58 = param_2;
  uStack_50 = param_5;
  uStack_48 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000107c27d8c(uVar1,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108540c9c; end: 1085410eb;  */

void FUN_108540c9c(undefined8 param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = (double)func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  if ((dVar13 == 0.0) || (param_2 == 0.0)) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1085410ec;
    puStack_90 = &UNK_110842e18;
    uStack_88 = *(undefined8 *)(param_3 + 0x28);
    pcVar3 = "APPSTORE";
    func_0x000107c312d0("APPSTORE",&puStack_a8);
    goto LAB_1085410b0;
  }
  pcVar3 = *(char **)(param_3 + 0x20);
  _UIImageJPEGRepresentation(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_3 + 0x30);
  if (lVar4 == 0) {
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1085410f8;
    puStack_d0 = &UNK_11084d788;
    auVar14 = *(undefined1 (*) [16])(param_3 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x20));
    auVar14 = NEON_ext(auVar14,auVar14,8,1);
    ppuStack_c0 = auVar14._8_8_;
    uStack_c8 = auVar14._0_8_;
    uStack_b0 = *(undefined8 *)(param_3 + 0x38);
    _objc_retain(pcVar3);
    pcStack_b8 = pcVar3;
    func_0x000107c312d0("APPSTORE",&puStack_e8);
    _objc_release(pcStack_b8);
    ppuVar6 = ppuStack_c0;
LAB_10854105c:
    _objc_release(ppuVar6);
  }
  else {
    dVar13 = (double)func_0x00010c23d0a0();
    if ((dVar13 != 0.0) && (param_2 != 0.0)) {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110ed2d78;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      FUN_108541184();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(lVar4);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_70 = ppuVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      _objc_release(puVar7);
      lVar4 = *(long *)(param_3 + 0x30);
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar9 = lVar4;
        func_0x000107c31920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110ed2d98;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d98);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar5;
        FUN_108541184();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(lVar9);
        func_0x00010befa120(puVar8);
        _objc_release(ppuVar10);
      }
      puVar7 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b9fb0;
      _objc_alloc(PTR_PTR_1126b9fb0);
      ppuStack_80 = &PTR____CFConstantStringClassReference_110f769d8;
      puStack_78 = PTR____kCFBooleanTrue_11034ab68;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = 0;
      func_0x00010c008480(puVar11);
      uVar2 = uStack_118;
      _objc_retain(uStack_118);
      _objc_release(puVar12);
      uStack_120 = 0;
      func_0x00010c2858e0(puVar11);
      uVar1 = uStack_120;
      _objc_retain(uStack_120);
      _objc_release(uVar2);
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_108541230;
      puStack_150 = &UNK_110863fc8;
      uStack_148 = uVar1;
      auVar14 = *(undefined1 (*) [16])(param_3 + 0x20);
      _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x20));
      auVar14 = NEON_ext(auVar14,auVar14,8,1);
      uStack_138 = auVar14._8_8_;
      uStack_140 = auVar14._0_8_;
      uStack_128 = *(undefined8 *)(param_3 + 0x38);
      puStack_130 = puVar7;
      _objc_retain(puVar7);
      _objc_retain(uVar1);
      func_0x000107c312d0("APPSTORE",&puStack_168);
      _objc_release(puStack_130);
      _objc_release(uStack_138);
      _objc_release(uStack_148);
      _objc_release(puVar7);
      _objc_release(puVar11);
      _objc_release(uVar1);
      _objc_release(lVar4);
      _objc_release(puVar8);
      goto LAB_10854105c;
    }
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_108541178;
    puStack_f8 = &UNK_110842e18;
    uStack_f0 = *(undefined8 *)(param_3 + 0x28);
    func_0x000107c312d0("APPSTORE",&puStack_110);
  }
  _objc_release();
LAB_1085410b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(pcVar3 + 0x20),PTR_s_setDataToUpload__112640060,0);
  return;
}



/* Entry: 1085410ec; end: 1085410f7;  */

void FUN_1085410ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataToUpload__112640060,0);
  return;
}



/* Entry: 1085410f8; end: 108541177;  */

void FUN_1085410f8(long param_1)

{
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c14e120(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1c56e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c14e120(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1c4860(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1c4580(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataToUpload__112640060,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108541178; end: 108541183;  */

void FUN_108541178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataToUpload__112640060,0);
  return;
}



/* Entry: 108541184; end: 10854122f;  */

void FUN_108541184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b9fa8;
  _objc_retain(param_2);
  func_0x00010bf09600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108541230; end: 1085412f3;  */

/* WARNING: Possible PIC construction at 0x0001085412dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085412e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_108541230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c14e120(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1c56e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c14e120(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1c4860(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1c4580(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1b5c20(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51e00(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setDataToUpload__112640060,uVar2);
  return;
}



/* Entry: 1085412f4; end: 108541303; -[SCUploadableLagunaChatImage isZipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085412f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277607c);
}



/* Entry: 108541304; end: 108541313; -[SCUploadableLagunaChatImage setIsZipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108541304(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277607c) = param_3;
  return;
}



/* Entry: 108541314; end: 10854133b;  */

void FUN_108541314(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10854133c; end: 10854138b; -[SCUploadableLagunaChatVideo initWithID:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854133c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcc08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithID__1125e4538);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776080) = param_4;
  }
  return;
}



/* Entry: 10854138c; end: 1085413db; -[SCUploadableLagunaChatVideo initWithID:key:iv:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854138c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcc08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithID_key_iv__1125e4548);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776080) = in_x5;
  }
  return;
}



/* Entry: 1085413dc; end: 10854145b; -[SCUploadableLagunaChatVideo isRotationLocked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085413dc(long param_1)

{
  ulong uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112776080);
  if ((uVar1 < 0x1b && (1L << (uVar1 & 0x3f) & 0x7e7fc60U) != 0) &&
     (FUN_108544644(), 0xb < (uint)uVar1)) {
    puStack_28 = PTR_PTR_1126fcc08;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_isRotationLocked_1125fcd38);
  }
  return;
}



/* Entry: 10854145c; end: 1085414e7; -[SCUploadableLagunaChatVideo mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10854145c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112776080);
  if (uVar2 < 0x1b && (1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0) {
    uVar1 = uVar2;
    FUN_108544644();
    if ((int)uVar1 - 9U < 2) {
      return uVar2;
    }
    if ((uVar2 < 0x1b && (1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0) && ((int)uVar1 - 0xbU < 2)) {
      return uVar2;
    }
  }
  return 5;
}



/* Entry: 1085414e8; end: 108541617; -[SCBaseUploadableChatMedia initWithID:key:iv:] */

undefined1 *
FUN_1085414e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fcc10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x88) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x21) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108541618; end: 1085416bb; -[SCBaseUploadableChatMedia initWithID:] */

long FUN_108541618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  func_0x00010c156d80(puVar1,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ada0(param_1,param_2,param_3,puVar1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  return param_1;
}



/* Entry: 1085416bc; end: 108541757; -[SCBaseUploadableChatMedia setDataToUpload:] */

void FUN_1085416bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010be2c0c0(param_1);
  }
  else {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108541758;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108541758; end: 108541763;  */

void FUN_108541758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setMediaData__112586fa8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108541764; end: 1085417f3; -[SCBaseUploadableChatMedia prepareMedia:] */

void FUN_108541764(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c28e740();
  if (2 < uVar1 - 2) {
    if (uVar1 < 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      lVar2 = param_3;
      _objc_retainBlock(param_3);
      func_0x00010befa120(uVar3);
      _objc_release(lVar2);
      goto LAB_1085417e0;
    }
    if (uVar1 != 5) goto LAB_1085417e0;
  }
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8));
LAB_1085417e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085417f4; end: 1085418ff; -[SCBaseUploadableChatMedia _handleMediaDataLost] */

void FUN_1085417f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010becf280(param_1,param_2,5);
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      param_2 = 0;
      (**(code **)(*(long *)(lVar7 * 8) + 0x10))();
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar3);
  func_0x00010c28e740();
                    /* WARNING: Could not recover jumptable at 0x00010c21cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_setUploadState__112664e10,uVar4);
  return;
}



/* Entry: 108541900; end: 108541953; -[SCBaseUploadableChatMedia mediaType] */

void FUN_108541900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  func_0x00010c28e740();
                    /* WARNING: Could not recover jumptable at 0x00010c21cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setUploadState__112664e10,uVar2);
  return;
}



/* Entry: 108541954; end: 10854197f; -[SCBaseUploadableChatMedia _transitionToState:] */

void FUN_108541954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c28e740();
                    /* WARNING: Could not recover jumptable at 0x00010c21cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUploadState__112664e10,param_3);
  return;
}



/* Entry: 108541980; end: 108541abf; -[SCBaseUploadableChatMedia _setMediaData:] */

void FUN_108541980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  func_0x00010becf280(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        lVar3 = *(long *)(lStack_118 + lVar7 * 8);
        (**(code **)(lVar3 + 0x10))(lVar3,param_3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar4 = auStack_d8;
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108541ac0;
  lStack_140 = param_1;
  uStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x108541b48;
  puStack_158 = &UNK_11084aaa8;
  uStack_150 = uVar1;
  puStack_148 = puVar4;
  _objc_retain(puVar4);
  func_0x000107c312d0("APPSTORE",&puStack_170);
  _objc_release(puStack_148);
  _objc_release(puVar4);
  return;
}



/* Entry: 108541ac0; end: 108541bb7; -[SCBaseUploadableChatMedia prepareDataToUploadForMediaId:completionHandler:] */

void FUN_108541ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108541b48;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 108541bb8; end: 108541bcb;  */

void FUN_108541bb8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108541bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108541bcc; end: 108541be3; -[SCBaseUploadableChatMedia width] */

double FUN_108541bcc(long param_1)

{
  func_0x00010c0c7220();
  return (double)param_1;
}



/* Entry: 108541be4; end: 108541bfb; -[SCBaseUploadableChatMedia height] */

double FUN_108541be4(long param_1)

{
  func_0x00010c0c5120();
  return (double)param_1;
}



/* Entry: 108541bfc; end: 108541c03; -[SCBaseUploadableChatMedia isZipped] */

undefined8 FUN_108541bfc(void)

{
  return 0;
}



/* Entry: 108541c04; end: 108541c07; -[SCBaseUploadableChatMedia duration] */

void FUN_108541c04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaDuration_11260ed00);
  return;
}



/* Entry: 108541c08; end: 108541c0b; -[SCBaseUploadableChatMedia isInfiniteDuration] */

void FUN_108541c08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaInfiniteDuration_11260eee0);
  return;
}



/* Entry: 108541c0c; end: 108541c1f; -[SCBaseUploadableChatMedia mediaContentType] */

undefined8 FUN_108541c0c(long param_1)

{
  func_0x00010c0c6c20();
  if (param_1 + 1U < 0x1c) {
    return *(undefined8 *)(&UNK_10df35710 + (param_1 + 1U) * 8);
  }
  return 0;
}



/* Entry: 108541c20; end: 108541c23; -[SCBaseUploadableChatMedia chatKey] */

void FUN_108541c20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_key_1125ff368);
  return;
}



/* Entry: 108541c24; end: 108541c27; -[SCBaseUploadableChatMedia chatIV] */

void FUN_108541c24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_iv_1125feed0);
  return;
}



/* Entry: 108541c28; end: 108541c2f; -[SCBaseUploadableChatMedia mediaID] */

undefined8 FUN_108541c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108541c30; end: 108541c37; -[SCBaseUploadableChatMedia key] */

undefined8 FUN_108541c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108541c38; end: 108541c3f; -[SCBaseUploadableChatMedia iv] */

undefined8 FUN_108541c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108541c40; end: 108541c47; -[SCBaseUploadableChatMedia mediaDuration] */

undefined8 FUN_108541c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108541c48; end: 108541c4f; -[SCBaseUploadableChatMedia setMediaDuration:] */

void FUN_108541c48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 108541c50; end: 108541c5b; -[SCBaseUploadableChatMedia mediaInfiniteDuration] */

byte FUN_108541c50(long param_1)

{
  return *(byte *)(param_1 + 0x20) & 1;
}



/* Entry: 108541c5c; end: 108541c63; -[SCBaseUploadableChatMedia setMediaInfiniteDuration:] */

void FUN_108541c5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108541c64; end: 108541c6b; -[SCBaseUploadableChatMedia mediaWidth] */

undefined8 FUN_108541c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108541c6c; end: 108541c73; -[SCBaseUploadableChatMedia setMediaWidth:] */

void FUN_108541c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108541c74; end: 108541c7b; -[SCBaseUploadableChatMedia mediaHeight] */

undefined8 FUN_108541c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108541c7c; end: 108541c83; -[SCBaseUploadableChatMedia setMediaHeight:] */

void FUN_108541c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 108541c84; end: 108541c8f; -[SCBaseUploadableChatMedia snapAttachmentUrl] */

void FUN_108541c84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 108541c90; end: 108541c97; -[SCBaseUploadableChatMedia setSnapAttachmentUrl:] */

void FUN_108541c90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108541c98; end: 108541ca3; -[SCBaseUploadableChatMedia venueId] */

void FUN_108541c98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 108541ca4; end: 108541cab; -[SCBaseUploadableChatMedia setVenueId:] */

void FUN_108541ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108541cac; end: 108541cb7; -[SCBaseUploadableChatMedia miniThumbnailData] */

void FUN_108541cac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 108541cb8; end: 108541cbf; -[SCBaseUploadableChatMedia setMiniThumbnailData:] */

void FUN_108541cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108541cc0; end: 108541cc7; -[SCBaseUploadableChatMedia smartShareable] */

undefined1 FUN_108541cc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 108541cc8; end: 108541ccf; -[SCBaseUploadableChatMedia snapMetadata] */

undefined8 FUN_108541cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108541cd0; end: 108541cff; -[SCBaseUploadableChatMedia setSnapMetadata:] */

void FUN_108541cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108541d00; end: 108541d07; -[SCBaseUploadableChatMedia importedContentId] */

undefined8 FUN_108541d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108541d08; end: 108541d37; -[SCBaseUploadableChatMedia setImportedContentId:] */

void FUN_108541d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108541d38; end: 108541d3f; -[SCBaseUploadableChatMedia isRotationLocked] */

undefined1 FUN_108541d38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 108541d40; end: 108541d47; -[SCBaseUploadableChatMedia setRotationLocked:] */

void FUN_108541d40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 108541d48; end: 108541d4f; -[SCBaseUploadableChatMedia mediaOrigins] */

undefined8 FUN_108541d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108541d50; end: 108541d57; -[SCBaseUploadableChatMedia setMediaOrigins:] */

void FUN_108541d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108541d58; end: 108541d5f; -[SCBaseUploadableChatMedia uploadState] */

undefined8 FUN_108541d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108541d60; end: 108541d67; -[SCBaseUploadableChatMedia setUploadState:] */

void FUN_108541d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 108541d68; end: 108541e0f; -[SCBaseUploadableChatMedia .cxx_destruct] */

void FUN_108541d68(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108541e10; end: 108541e17; -[SCUploadableChatGif mediaType] */

undefined8 FUN_108541e10(void)

{
  return 7;
}



/* Entry: 108541e18; end: 108541e1f; -[SCUploadableChatGif isZipped] */

undefined8 FUN_108541e18(void)

{
  return 0;
}



/* Entry: 108541e20; end: 108541ea7; -[SCUploadableChatGif setGifData:] */

void FUN_108541e20(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4690;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010bff2e60();
  func_0x00010c23d0a0();
  func_0x00010c1c56e0(param_3,param_4,(long)param_1);
  func_0x00010c23d0a0(puVar1);
  func_0x00010c1c4860(param_3,param_4,(long)param_2);
  func_0x00010c189900(param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108541ea8; end: 108541f4f; -[SCUploadableChatImage initWithID:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108541ea8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c01ad60();
  if ((param_1 != 0) &&
     ((((0x1b < param_4 + 1U || ((1L << (param_4 + 1U & 0x3f) & 0xb4b5dbbU) == 0)) ||
       (0x1a < param_4 + 1U)) || ((1L << (param_4 + 1U & 0x3f) & 0x6c6bd77U) == 0)))) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127760d0);
    *(undefined **)(param_1 + _DAT_1127760d0) = puVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 108541f50; end: 108541f77; -[SCUploadableChatImage mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108541f50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127760d0);
  lVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010c067ec0();
    lVar2 = (long)(int)lVar1;
  }
  return lVar2;
}



/* Entry: 108541f78; end: 108541f7f; -[SCUploadableChatImage isZipped] */

undefined8 FUN_108541f78(void)

{
  return 0;
}



/* Entry: 108541f80; end: 10854202b; -[SCUploadableChatImage setImage:] */

void FUN_108541f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10854202c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10854202c; end: 1085420e3;  */

void FUN_10854202c(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _UIImageJPEGRepresentation(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1085420e4;
  puStack_40 = &UNK_110848ba8;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x20);
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  uStack_30 = auVar2._8_8_;
  uStack_38 = auVar2._0_8_;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085420e4; end: 108542157;  */

void FUN_1085420e4(long param_1)

{
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c14e120(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1c56e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c14e120(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1c4860(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataToUpload__112640060,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108542158; end: 1085421f3; -[SCUploadableChatImage setImageData:imageNativeSize:] */

void FUN_108542158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085421f4;
  puStack_58 = &UNK_110844fe0;
  uStack_50 = param_3;
  uStack_48 = param_5;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_5);
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1085421f4; end: 108542233;  */

void FUN_1085421f4(long param_1,undefined8 param_2)

{
  func_0x00010c1c56e0(*(undefined8 *)(param_1 + 0x20),param_2,(long)*(double *)(param_1 + 0x30));
  func_0x00010c1c4860(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataToUpload__112640060,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108542234; end: 108542247; -[SCUploadableChatImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108542234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127760d0,0);
  return;
}



/* Entry: 108542248; end: 108542343; -[SCUploadableChatPngImage setImage:] */

void FUN_108542248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  func_0x00010c1c56e0(param_1);
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  func_0x00010c1c4860(param_1);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108542344;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_3;
  uStack_48 = param_1;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_70);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 108542344; end: 1085423d3;  */

void FUN_108542344(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1085423d4;
  puStack_38 = &UNK_110841f80;
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = uVar1;
  _objc_retain();
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085423d4; end: 1085423df;  */

void FUN_1085423d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c189910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataToUpload__112640060,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085423e0; end: 108542487; -[SCUploadableChatVideo initWithID:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085423e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c01ad60();
  if ((param_1 != 0) &&
     ((((0x1b < param_4 + 1U || ((1L << (param_4 + 1U & 0x3f) & 0xb4b5dbbU) == 0)) ||
       (0x1a < param_4 + 1U)) || ((1L << (param_4 + 1U & 0x3f) & 0x6c6bd77U) == 0)))) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127760d4);
    *(undefined **)(param_1 + _DAT_1127760d4) = puVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 108542488; end: 1085424c7; -[SCUploadableChatVideo mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108542488(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127760d4);
  if (lVar1 == 0) {
    func_0x00010bfdc680();
    lVar1 = 1;
    if ((int)param_1 == 0) {
      lVar1 = 2;
    }
  }
  else {
    func_0x00010c067ec0(lVar1);
    lVar1 = (long)(int)lVar1;
  }
  return lVar1;
}



/* Entry: 1085424c8; end: 1085424cf; -[SCUploadableChatVideo isZipped] */

undefined8 FUN_1085424c8(void)

{
  return 1;
}



/* Entry: 1085424d0; end: 108542687; -[SCUploadableChatVideo setVideoURL:overlayImage:useWebP:webPQuality:completionQueue:completionBlock:] */

void FUN_1085424d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108542688;
    puStack_80 = &UNK_11084a9e8;
    uStack_78 = param_2;
    _objc_retain(param_7);
    lStack_70 = param_7;
    _objc_retain(param_8);
    uStack_68 = param_8;
    func_0x000107c312d0("APPSTORE",&puStack_98);
    _objc_release(uStack_68);
    lVar2 = lStack_70;
  }
  else {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1085426cc;
    puStack_d8 = &UNK_1108d5250;
    _objc_retain(param_4);
    lStack_d0 = param_4;
    uStack_c8 = param_2;
    _objc_retain(param_7);
    lStack_c0 = param_7;
    _objc_retain(param_8);
    uStack_b0 = param_8;
    uStack_a0 = param_6;
    _objc_retain(param_5);
    uStack_b8 = param_5;
    uStack_a8 = param_1;
    func_0x000107c27d8c(uVar1,&puStack_f0);
    _objc_release(uVar1);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(lStack_c0);
    lVar2 = lStack_d0;
  }
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108542688; end: 1085426cb;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_108542688(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c189900(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar1 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        pcVar2 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar2;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar2 = pcRam0000000113817cd0;
    func_0x00010002a3a8(lVar4);
    func_0x000107c61180();
    (*pcVar2)(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1085426cc; end: 108542ddb;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1085426cc(double param_1,double param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined *puVar19;
  undefined *puVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
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
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_4,*(undefined8 *)(param_3 + 0x20)
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar3;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar19;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  func_0x00010c0d5d20(puVar4);
  if (puVar4 == (undefined *)0x0) {
    dVar21 = 0.0;
    dVar18 = 0.0;
    dVar22 = 0.0;
    dVar17 = 0.0;
  }
  else {
    func_0x00010c106f40(&dStack_f0,puVar4);
    dVar17 = dStack_f0;
    dVar22 = dStack_e0;
    dVar18 = dStack_e8;
    dVar21 = dStack_d8;
  }
  dVar22 = param_2 * dVar22 + param_1 * dVar17;
  if (puVar3 == (undefined *)0x0) {
    dStack_f0 = 0.0;
    dStack_e8 = 0.0;
    dStack_e0 = 0.0;
  }
  else {
    func_0x00010bf8b160(&dStack_f0,puVar3);
  }
  _CMTimeGetSeconds(&dStack_f0);
  if ((dVar22 == 0.0) || (dVar18 = param_2 * dVar21 + param_1 * dVar18, dVar18 == 0.0)) {
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_108542ddc;
    puStack_110 = &UNK_11084a9e8;
    lVar5 = *(long *)(param_3 + 0x30);
    uVar15 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(*(undefined8 *)(param_3 + 0x30));
    uVar14 = *(undefined8 *)(param_3 + 0x40);
    uStack_108 = uVar15;
    lStack_100 = lVar5;
    _objc_retain(uVar14);
    uStack_f8 = uVar14;
    func_0x000107c312d0("APPSTORE",&puStack_128);
    _objc_release(uStack_f8);
    lVar5 = lStack_100;
  }
  else {
    dVar22 = ABS(dVar22);
    dVar18 = ABS(dVar18);
    lVar5 = *(long *)(param_3 + 0x28);
    func_0x00010becbb40(dVar22,dVar18);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      uStack_150 = 0x108542e20;
      puStack_148 = &UNK_11084a9e8;
      puVar19 = *(undefined **)(param_3 + 0x30);
      uVar15 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(*(undefined8 *)(param_3 + 0x30));
      uVar14 = *(undefined8 *)(param_3 + 0x40);
      uStack_140 = uVar15;
      puStack_138 = puVar19;
      _objc_retain(uVar14);
      uStack_130 = uVar14;
      func_0x000107c312d0("APPSTORE",&puStack_160);
      _objc_release(uStack_130);
      puVar19 = puStack_138;
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b9fa8;
      puVar20 = puVar19;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110ed2d78;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d78);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      uStack_178 = 0x108542e64;
      puStack_170 = &UNK_110891a60;
      _objc_retain(puVar19);
      puStack_168 = puVar19;
      func_0x00010bf09600();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b9fa8;
      puVar8 = puVar7;
      puStack_b0 = puVar7;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110ed2db8;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2db8);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = puVar12;
      uStack_1a8 = 0xc2000000;
      uStack_1a0 = 0x108542e8c;
      puStack_198 = &UNK_110891a60;
      _objc_retain(lVar5);
      lStack_190 = lVar5;
      func_0x00010bf09600();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar12;
      func_0x00010c0d3c80();
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(ppuVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      _objc_release(puVar20);
      if ((*(byte *)(param_3 + 0x50) & 1) == 0) {
        puVar12 = *(undefined **)(param_3 + 0x38);
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar12 = PTR_PTR_1126b9658;
        func_0x00010bf92f60(*(undefined8 *)(param_3 + 0x48));
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1126b9fa8;
      if (puVar12 != (undefined *)0x0) {
        puVar10 = puVar12;
        func_0x000107c31920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110ed2d98;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d98);
        _objc_retainAutoreleasedReturnValue();
        puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d0 = 0xc2000000;
        uStack_1c8 = 0x108542eb4;
        puStack_1c0 = &UNK_110891a60;
        _objc_retain(puVar12);
        puStack_1b8 = puVar12;
        func_0x00010bf09600(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(puVar7);
        _objc_release(ppuVar6);
        _objc_release(puVar10);
        _objc_release(puStack_1b8);
      }
      puVar7 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b9fb0;
      _objc_alloc();
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110f769d8;
      puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
      puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      uStack_1e0 = 0;
      func_0x00010c008480();
      uVar15 = uStack_1e0;
      _objc_retain(uStack_1e0);
      _objc_release(puVar20);
      uStack_1e8 = 0;
      puVar20 = puVar10;
      func_0x00010c2858e0();
      uVar14 = uStack_1e8;
      _objc_retain(uStack_1e8);
      _objc_release(uVar15);
      if ((int)puVar20 == 0) {
        puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_270 = 0xc2000000;
        pcStack_268 = FUN_108542f6c;
        puStack_260 = &UNK_11084a9e8;
        puVar20 = *(undefined **)(param_3 + 0x30);
        uVar16 = *(undefined8 *)(param_3 + 0x28);
        _objc_retain(*(undefined8 *)(param_3 + 0x30));
        uVar15 = *(undefined8 *)(param_3 + 0x40);
        uStack_258 = uVar16;
        puStack_250 = puVar20;
        _objc_retain(uVar15);
        uStack_248 = uVar15;
        func_0x000107c312d0("APPSTORE",&puStack_278);
        _objc_release(uStack_248);
        puVar20 = puStack_250;
      }
      else {
        puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_238 = 0xc2000000;
        pcStack_230 = FUN_108542edc;
        puStack_228 = &UNK_110a549b8;
        uStack_220 = *(undefined8 *)(param_3 + 0x28);
        dStack_200 = dVar22;
        dStack_1f8 = dVar18;
        dStack_1f0 = dVar17;
        _objc_retain(puVar7);
        uVar16 = *(undefined8 *)(param_3 + 0x30);
        puStack_218 = puVar7;
        _objc_retain(uVar16);
        uVar15 = *(undefined8 *)(param_3 + 0x40);
        uStack_210 = uVar16;
        _objc_retain(uVar15);
        uStack_208 = uVar15;
        func_0x000107c312d0("APPSTORE",&puStack_240);
        _objc_release(uStack_208);
        _objc_release(uStack_210);
        puVar20 = puStack_218;
      }
      _objc_release(puVar20);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(uVar14);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lStack_190);
      _objc_release(puStack_168);
    }
    _objc_release(puVar19);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    func_0x00010c189900(*(undefined8 *)(puVar3 + 0x20));
    lVar5 = *(long *)(puVar3 + 0x28);
    if ((lVar5 != 0) && (lVar13 = *(long *)(puVar3 + 0x30), lVar13 != 0)) {
      func_0x000107c61174();
      func_0x000107c61174(lVar13);
      if ((bRam0000000113817cd8 & 1) == 0) {
        iVar1 = 0x13817cd8;
        func_0x000107c60e48();
        if (iVar1 != 0) {
          pcVar2 = (code *)0xffffffffffffffff;
          func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
          pcRam0000000113817cd0 = pcVar2;
          func_0x000107c60e4c(0x113817cd8);
        }
      }
      pcVar2 = pcRam0000000113817cd0;
      func_0x00010002a3a8(lVar13);
      func_0x000107c61180();
      (*pcVar2)(lVar5,lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar13);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108542ddc; end: 108542edb;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_108542ddc(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c189900(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar1 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        pcVar2 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar2;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar2 = pcRam0000000113817cd0;
    func_0x00010002a3a8(lVar4);
    func_0x000107c61180();
    (*pcVar2)(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 108542edc; end: 108542f6b;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_108542edc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c1c56e0(*(undefined8 *)(param_1 + 0x20),param_2,(long)*(double *)(param_1 + 0x40));
  func_0x00010c1c4860(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1c4580(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar4);
  func_0x00010c189900(uVar1);
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  if ((lVar5 != 0) && (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar2 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar2 != 0) {
        pcVar3 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar3;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar3 = pcRam0000000113817cd0;
    func_0x00010002a3a8(lVar6);
    func_0x000107c61180();
    (*pcVar3)(lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 108542f6c; end: 108542faf;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_108542f6c(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c189900(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar1 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        pcVar2 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar2;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar2 = pcRam0000000113817cd0;
    func_0x00010002a3a8(lVar4);
    func_0x000107c61180();
    (*pcVar2)(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}


