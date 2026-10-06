/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c94e68; end: 107c9514b;  */

void FUN_107c94e68(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107c9514c;
    uStack_60 = 0x107c9515c;
    uStack_58 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107c95164;
    puStack_98 = &UNK_110853230;
    puStack_78 = puStack_88;
    _objc_retain(uVar2);
    uStack_90 = uVar2;
    func_0x00010c0c0800(uVar3);
    func_0x00010c08fa60();
    func_0x00010c1df6e0(*(undefined8 *)(param_1 + 0x40));
    _objc_initWeak(auStack_b8,*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar12);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar3);
    func_0x00010bf385c0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  return;
}



/* Entry: 107c9514c; end: 107c95163;  */

void FUN_107c9514c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107c95164; end: 107c952df;  */

void FUN_107c95164(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = (uint)param_2;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(uVar7);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  uVar8 = 0;
  if (lVar1 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar2 = uVar8;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          func_0x00010bfe44e0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107c95278;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar8 = 0;
  }
LAB_107c95278:
  _objc_release(uVar7);
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar8;
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if ((uVar4 & 1) == 0) {
    lVar6 = param_2 + 0x78;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be593a0();
    _objc_release(lVar6);
    param_2 = param_2 + 0x78;
    _objc_loadWeakRetained(param_2);
    func_0x00010be59320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107c952e0; end: 107c95377;  */

void FUN_107c952e0(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be593a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c95378; end: 107c9566f; -[SCStoriesBlizzardLogger _logStorySnapPostWithEvent:snap:loggingParams:sendMessageAttemptId:storyId:destinationMetadata:customStory:snapProAccountOwnerId:] */

void FUN_107c95378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c067fc0(lVar2);
    func_0x00010c206c40(param_3,param_2,lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  uVar4 = param_5;
  func_0x00010c254340(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c2553e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf31200(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c243340(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123a00(uVar3,param_2,3,uVar6,uVar7,uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010bf77ce0(*(undefined8 *)(param_1 + 0x70),param_2,param_5);
  _objc_retain(param_5);
  uVar6 = param_5;
  func_0x00010bfd76a0();
  if ((uVar6 & 1) == 0) {
    uVar6 = param_5;
    func_0x00010bfadd80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    if ((uVar7 != 0) || (uVar7 = param_5, func_0x00010bf1b840(), 0 < (long)uVar7)) {
LAB_107c95578:
      _objc_release(uVar6);
      goto LAB_107c95580;
    }
    uVar7 = param_5;
    func_0x00010c297de0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 != 0) {
      _objc_release();
      goto LAB_107c95578;
    }
    uVar7 = param_5;
    func_0x00010c281360();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_5);
    if (uVar8 == 0) goto LAB_107c955b8;
  }
  else {
LAB_107c95580:
    _objc_release(param_5);
  }
  func_0x00010be53fe0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
LAB_107c955b8:
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c95670; end: 107c96557; -[SCStoriesBlizzardLogger _logGeofilterStorySnapPostWithSnap:loggingParams:sendMessageAttemptId:storyId:destinationMetadata:customStory:snapProAccountOwnerId:] */

ulong FUN_107c95670(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  float fVar19;
  double dVar20;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar3 = param_4;
  func_0x00010bfadd80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if ((lVar4 == 0) && (lVar4 = param_4, func_0x00010bf1b840(), lVar4 < 1)) {
    lVar4 = param_4;
    func_0x00010c297de0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar11 = param_4;
      func_0x00010bfc1820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar11 == 0) {
        lVar12 = param_4;
        func_0x00010c281360();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf529e0();
        bVar1 = lVar13 != 0;
        _objc_release(lVar12);
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar11);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bfd76a0();
  if (((int)lVar3 == 0) || (bVar1)) {
    puVar5 = PTR_PTR_1126d7458;
    _objc_opt_new(PTR_PTR_1126d7458);
    lVar3 = param_4;
    func_0x00010bf31200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar5);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010c1fc200(puVar5);
    }
    lVar3 = param_4;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = param_4;
      func_0x00010c15d5c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcc00(puVar5);
      _objc_release(lVar3);
    }
    FUN_107c96558(param_4);
    func_0x00010c20d6c0(puVar5);
    func_0x00010bf70ea0(PTR_PTR_1126b2930);
    func_0x00010c18cd80(puVar5);
    FUN_107c96618(param_4);
    func_0x00010c176040(puVar5);
    uVar15 = param_3;
    func_0x00010bfda540();
    if ((int)uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar17 = uVar15;
    func_0x00010bfda560();
    if ((int)uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar15;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = uVar15;
    FUN_107c9667c();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0c4bc0();
    if ((int)uVar7 == 0) {
      uVar7 = uVar17;
      func_0x00010bf8b420(uVar17);
      dVar20 = (double)(uVar7 & 0xffffffff);
    }
    else {
      uVar7 = uVar6;
      func_0x00010c0c4bc0(uVar6);
      dVar20 = (double)(uVar7 & 0xffffffff) / 1000.0;
    }
    dVar20 = (double)(long)(dVar20 * 1000.0) / 1000.0;
    func_0x00010c205880(dVar20,puVar5);
    fVar19 = SUB84(dVar20,0);
    func_0x00010bfbbd00(param_4);
    dVar20 = (double)(long)(fVar19 * 1000.0) / 1000.0;
    func_0x00010c1a16c0(dVar20,puVar5);
    fVar19 = SUB84(dVar20,0);
    func_0x00010c158540(param_4);
    func_0x00010c1fab60((double)(long)(fVar19 * 1000.0) / 1000.0,puVar5);
    func_0x00010bf85640(uVar17);
    func_0x00010c205840(puVar5);
    FUN_107c96794(param_3);
    func_0x00010c226320(puVar5);
    uVar10 = 0;
    uVar7 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    fVar19 = (float)uVar10;
    while (uVar7 != 0) {
      uVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(uVar8);
        }
        uVar18 = *(undefined8 *)(uVar16 * 8);
        uVar9 = uVar18;
        func_0x00010bf0d0a0();
        if ((int)uVar9 == 3) {
          func_0x00010c2a3a80(uVar18);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar18;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          func_0x00010c225c80(puVar5);
          _objc_release(uVar9);
          _objc_release(uVar18);
        }
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
      uVar7 = uVar8;
      func_0x00010bf52a60();
      fVar19 = (float)uVar10;
    }
    _objc_release(uVar8);
    func_0x000108533750(param_7,param_8,0);
    uVar10 = param_7;
    func_0x00010bf6ece0();
    iVar2 = (int)uVar10;
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        func_0x00010c1df6e0(puVar5);
        func_0x00010c20ddc0(puVar5);
        func_0x00010c20de00(puVar5);
      }
      else if (iVar2 == 2) {
        func_0x00010c1df6e0(puVar5);
        func_0x00010c20ddc0(puVar5);
        func_0x00010c20de00(puVar5);
        uVar10 = param_6;
        func_0x0001085335b0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a4b00(puVar5);
        _objc_release(uVar10);
      }
    }
    else if (iVar2 == 3) {
      func_0x00010c1df700(puVar5);
      func_0x00010c20ddc0(puVar5);
      func_0x00010c20de00(puVar5);
      uVar10 = param_7;
      func_0x00010c0ee2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001085336a4();
      func_0x00010c17f8e0(puVar5);
      _objc_release(uVar10);
    }
    else if (iVar2 == 4) {
      func_0x00010c1df6e0(puVar5);
      func_0x00010c20ddc0(puVar5);
      func_0x00010c20de00(puVar5);
    }
    func_0x00010bf037a0(param_4);
    func_0x00010c167f20(puVar5);
    func_0x00010bf03500(param_4);
    func_0x00010c167e60(puVar5);
    func_0x00010c2a8340(param_4);
    func_0x00010c225be0(puVar5);
    func_0x00010c247520(param_4);
    func_0x00010c206c40(puVar5);
    lVar3 = param_4;
    func_0x00010c247a00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206f80(puVar5);
    _objc_release(lVar3);
    func_0x00010c0c6c20(param_4);
    func_0x000108532b74();
    func_0x00010c1c5440(puVar5);
    func_0x00010bf2fba0(param_4);
    func_0x00010c178460(puVar5);
    func_0x00010bf5c920(param_4);
    func_0x00010c226060(puVar5);
    func_0x00010bf89ea0(param_4);
    func_0x00010c191960(puVar5);
    func_0x00010bfb2540(param_4);
    func_0x00010c19daa0(puVar5);
    func_0x00010bfd3440(param_4);
    func_0x00010c1a5460(puVar5);
    func_0x00010c06f5c0(param_4);
    func_0x00010c1b0260(puVar5);
    lVar3 = param_4;
    func_0x00010c087d20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73e0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c087b00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7380(puVar5);
    _objc_release(lVar3);
    func_0x00010c2aea60(param_4);
    func_0x00010c226380(puVar5);
    func_0x00010bf30820(param_4);
    func_0x00010c178b80(puVar5);
    lVar3 = param_4;
    func_0x00010bf30440(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c178660(puVar5);
    _objc_release(lVar3);
    func_0x00010c253c00(param_4);
    func_0x00010c20abc0(puVar5);
    func_0x00010c2551a0(param_4);
    func_0x00010c20ba80(puVar5);
    func_0x00010bfae160(param_4);
    func_0x00010c19c2c0(puVar5);
    func_0x00010bfae340(param_4);
    func_0x00010c19c460(puVar5);
    func_0x00010c264640(param_4);
    func_0x00010c210580(puVar5);
    lVar3 = param_4;
    func_0x00010c243340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar5);
    _objc_release(lVar3);
    func_0x00010bf8e960(param_4);
    func_0x00010c20ae60(puVar5);
    func_0x00010bf1c3a0(param_4);
    func_0x00010c20a860(puVar5);
    func_0x00010bf1b840(param_4);
    func_0x00010c20afe0(puVar5);
    func_0x00010c2441e0(param_4);
    func_0x00010c20b8c0(puVar5);
    func_0x00010bf8e980(param_4);
    func_0x00010c20aea0(puVar5);
    func_0x00010bf1c3c0(param_4);
    func_0x00010c20a8a0(puVar5);
    func_0x00010bf1b860(param_4);
    func_0x00010c20b000(puVar5);
    func_0x00010c244200(param_4);
    func_0x00010c20b900(puVar5);
    lVar3 = param_4;
    func_0x00010bf8e9a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20aec0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bf1c420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a8c0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bf1b880(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b020(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c244220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b920(puVar5);
    _objc_release(lVar3);
    func_0x00010bf61f40(param_4);
    func_0x00010c20ac00(puVar5);
    func_0x00010bf61d60(param_4);
    func_0x00010c20ac20(puVar5);
    func_0x00010bf61d80(param_4);
    func_0x00010c20ac60(puVar5);
    func_0x00010bf61f60(param_4);
    func_0x00010c20acc0(puVar5);
    lVar3 = param_4;
    func_0x00010c254580(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b440(puVar5);
    _objc_release(lVar11);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c2453c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2060e0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bfadfa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_107c96830();
    func_0x00010c19c1c0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bfae8c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c968dc();
    func_0x00010c19c760(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bf0f140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c4e0(puVar5);
    _objc_release(lVar3);
    func_0x00010c2a0400(param_4);
    func_0x00010c223e80(puVar5);
    func_0x00010c122b20(param_4);
    func_0x00010c1e88a0(puVar5);
    lVar3 = param_4;
    func_0x00010bf93ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955e0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bfadd80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c040(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bfadda0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c060(puVar5);
    _objc_release(lVar3);
    func_0x00010bfadf40(param_4);
    func_0x00010c19c180(puVar5);
    func_0x00010bfadf60(param_4);
    func_0x00010c19c1a0(puVar5);
    func_0x00010bfae3c0(param_4);
    func_0x00010c19c4e0(puVar5);
    lVar3 = param_4;
    func_0x00010c096b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_4;
      func_0x00010c08fda0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208000(puVar5);
      _objc_release(lVar3);
      func_0x00010c096da0(param_4);
      func_0x00010c208420(puVar5);
    }
    lVar3 = param_4;
    func_0x00010c297de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_4;
      func_0x00010bfc1820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = param_4;
        func_0x00010bfc1820(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a2de0(puVar5);
        _objc_release(lVar3);
      }
      lVar3 = param_4;
      func_0x00010bfde3a0();
      if ((int)lVar3 != 0) {
        lVar3 = param_4;
        func_0x00010c297de0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19c6c0(puVar5);
        _objc_release(lVar3);
      }
      func_0x00010c298120(param_4);
      func_0x00010c220b20(puVar5);
      func_0x00010c297ea0(param_4);
      func_0x00010c220920(puVar5);
      func_0x00010c297b60(param_4);
      if (fVar19 != 0.0) {
        func_0x00010c297b60(param_4);
        func_0x00010c190a60(puVar5);
      }
    }
    func_0x00010c2b3080(param_4);
    func_0x00010c226420(puVar5);
    lVar3 = param_4;
    func_0x00010bfc11a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1930a0(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c275b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217b20(puVar5);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c275b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217ca0(puVar5);
    _objc_release(lVar3);
    func_0x00010bfd47c0(param_4);
    func_0x00010c226400(puVar5);
    func_0x00010c1413e0(param_4);
    func_0x00010c1ee5a0(puVar5);
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar10);
    func_0x00010bf77ca0(*(undefined8 *)(param_1 + 0x70));
    lVar3 = param_4;
    func_0x00010bfadd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    _objc_release(uVar6);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(puVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (param_3 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = param_3;
    func_0x00010c11e6e0();
    if (uVar15 == 1) {
      uVar15 = 2;
    }
    else {
      uVar15 = param_3;
      func_0x00010bfbaf40();
      if ((uVar15 & 1) == 0) {
        uVar15 = param_3;
        func_0x00010c11e6e0();
        if ((uVar15 == 0) || (uVar15 = param_3, func_0x00010c11e6e0(), uVar15 == 2)) {
          uVar15 = 1;
        }
        else {
          uVar15 = param_3;
          func_0x00010c15d5c0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar15;
          func_0x00010c08fa60();
          _objc_release(uVar15);
          uVar15 = 0;
          if (uVar17 != 0) {
            uVar15 = 3;
          }
        }
      }
      else {
        uVar15 = 3;
      }
    }
  }
  _objc_release(param_3);
  return uVar15;
}



/* Entry: 107c96558; end: 107c96617;  */

undefined8 FUN_107c96558(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c11e6e0();
    if (uVar1 == 1) {
      uVar3 = 2;
    }
    else {
      uVar1 = param_1;
      func_0x00010bfbaf40();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c11e6e0();
        if ((uVar1 == 0) || (uVar1 = param_1, func_0x00010c11e6e0(), uVar1 == 2)) {
          uVar3 = 1;
        }
        else {
          uVar1 = param_1;
          func_0x00010c15d5c0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c08fa60();
          _objc_release(uVar1);
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = 3;
          }
        }
      }
      else {
        uVar3 = 3;
      }
    }
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107c96618; end: 107c9667b;  */

ulong FUN_107c96618(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0c6c20();
  if ((uVar1 - 5 < 0x16) && ((0x3f3fe3U >> (ulong)((uint)(uVar1 - 5) & 0x1f) & 1) != 0)) {
    uVar1 = 2;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfbb160(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107c9667c; end: 107c96793;  */

undefined8 FUN_107c9667c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  uVar4 = 0;
  if (lVar3 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_108 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010c08c3a0();
        if ((int)uVar2 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107c96754;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
    uVar4 = 0;
  }
LAB_107c96754:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bfdabc0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = lVar3;
  func_0x00010bf05f80();
  uVar4 = 1;
  uVar1 = (uint)lVar5;
  if (((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 0x61U) != 0)) || (uVar1 == 0xfbadbeef)) {
    uVar4 = 0;
  }
  _objc_release(lVar3);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107c96794; end: 107c9682f;  */

undefined8 FUN_107c96794(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bfdabc0();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar3;
  func_0x00010bf05f80();
  uVar4 = 1;
  uVar1 = (uint)uVar2;
  if (((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 0x61U) != 0)) || (uVar1 == 0xfbadbeef)) {
    uVar4 = 0;
  }
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107c96830; end: 107c96987;  */

undefined8 FUN_107c96830(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e9f2d8,param_2,param_1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f276d8,param_2,param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f276f8,param_2,param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = 0x10dea4b8;
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dea4b8,param_2,param_1);
        uVar3 = 5;
        if (iVar1 == 0) {
          uVar3 = 0xffffffffffffffff;
        }
      }
      else {
        uVar3 = 6;
      }
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107c96988; end: 107c97763; -[SCStoriesBlizzardLogger logDirectSnapPreviewIfNeededForSnapDoc:loggingParams:storyIdToDestinationMetadata:] */

void FUN_107c96988(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
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
  uVar18 = param_4;
  func_0x00010c2b8240();
  if ((uVar18 & 1) != 0) goto LAB_107c9770c;
  uVar18 = param_3;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar18;
  func_0x00010bfdc300();
  _objc_release(uVar18);
  if ((uVar17 & 1) != 0) goto LAB_107c9770c;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar1 = param_5;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(lVar1);
        }
        uVar17 = *(ulong *)(lStack_138 + lVar15 * 8);
        uVar18 = uVar17;
        func_0x00010bf6ece0();
        if ((int)uVar18 == 3) {
          func_0x00010c0ee2a0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010bf6ef00();
          if (uVar18 != 0) {
            uVar18 = 0;
            do {
              uVar2 = uVar17;
              func_0x00010bf6eee0();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c296de0();
              _objc_release(uVar2);
              if ((int)uVar3 == 2) break;
              uVar18 = uVar18 + 1;
              uVar2 = uVar17;
              func_0x00010bf6ef00();
            } while (uVar18 < uVar2);
          }
          _objc_release(uVar17);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar9);
      lVar9 = lVar1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c4c30;
  _objc_opt_new();
  func_0x00010c227200();
  uVar18 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar4);
  _objc_release(uVar18);
  uVar18 = param_4;
  func_0x00010c243340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar4);
  _objc_release(uVar18);
  uVar18 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar4);
  _objc_release(uVar18);
  func_0x00010c2267c0(puVar4);
  func_0x00010c226460(puVar4);
  func_0x00010c226ec0(puVar4);
  func_0x00010c247520(param_4);
  func_0x00010c206c40(puVar4);
  func_0x00010bf29de0(param_4);
  func_0x00010c1769e0(puVar4);
  FUN_107c96618(param_4);
  func_0x00010c176040(puVar4);
  func_0x00010c1412c0(param_4);
  func_0x00010c178da0(puVar4);
  func_0x00010c124200(param_4);
  func_0x00010c1e9060(puVar4);
  func_0x00010bf4ca00(param_4);
  func_0x00010c182160(puVar4);
  uVar18 = param_4;
  func_0x00010c26a320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(puVar4);
  _objc_release(uVar18);
  uVar18 = param_3;
  func_0x00010bfda540();
  if ((int)uVar18 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = uVar18;
  func_0x00010bfda560();
  if ((int)uVar17 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = uVar18;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar18;
  FUN_107c9667c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c4bc0();
  if ((int)uVar3 == 0) {
    uVar3 = uVar17;
    func_0x00010bf8b420(uVar17);
    dVar20 = (double)(uVar3 & 0xffffffff);
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0c4bc0(uVar2);
    dVar20 = (double)(uVar3 & 0xffffffff) / 1000.0;
  }
  dVar20 = (double)(long)(dVar20 * 1000.0) / 1000.0;
  func_0x00010c205880(dVar20,puVar4);
  fVar19 = SUB84(dVar20,0);
  func_0x00010c0c6c20(param_4);
  func_0x000108532b74();
  func_0x00010c1c5440(puVar4);
  uVar3 = param_4;
  func_0x00010c0c6840(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52e0(puVar4);
  _objc_release(uVar3);
  func_0x00010c096ca0(param_4);
  func_0x00010c1bcca0(puVar4);
  func_0x00010c07e5e0(param_4);
  func_0x00010c1b4700(puVar4);
  func_0x00010bf30860(param_4);
  func_0x00010c178bc0(puVar4);
  func_0x00010bf30660(param_4);
  func_0x00010c178ae0(puVar4);
  uVar3 = param_4;
  func_0x00010bf30440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(puVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf304e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c226760(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126c4720;
  _objc_opt_new();
  func_0x00010c282c80(param_4);
  func_0x00010c1e9680(puVar6);
  func_0x00010c2681e0(param_4);
  func_0x00010c2117e0(puVar6);
  func_0x00010bf5bb60(param_4);
  func_0x00010c1e59c0(puVar6);
  func_0x00010bfb92e0(param_4);
  func_0x00010c170060(puVar6);
  func_0x00010c268220(param_4);
  func_0x00010c211800(puVar6);
  func_0x00010c21f5a0(puVar4);
  func_0x00010bf89ea0(param_4);
  func_0x00010c191960(puVar4);
  uVar3 = param_4;
  func_0x00010c0d3a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0d37c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(puVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0c1aa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar4);
  _objc_release(uVar3);
  func_0x00010c253c00(param_4);
  func_0x00010c20abc0(puVar4);
  func_0x00010c254000(param_4);
  func_0x00010c20af80(puVar4);
  uVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253f80();
  func_0x00010c20af60(puVar4);
  _objc_release(uVar3);
  func_0x00010bf1c3a0(param_4);
  func_0x00010c20a860(puVar4);
  func_0x00010c253980(param_4);
  func_0x00010c20a940(puVar4);
  func_0x00010bf61f40(param_4);
  func_0x00010c20ac00(puVar4);
  func_0x00010bfee060(param_4);
  func_0x00010c20b1a0(puVar4);
  func_0x00010c2441e0(param_4);
  func_0x00010c20b8c0(puVar4);
  func_0x00010bfccb60(param_4);
  func_0x00010c20b040(puVar4);
  uVar3 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bfae8c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c968dc();
  func_0x00010c19c760(puVar4);
  _objc_release(uVar3);
  func_0x00010bfae160(param_4);
  func_0x00010c19c2c0(puVar4);
  func_0x00010bfae340(param_4);
  func_0x00010c19c460(puVar4);
  func_0x00010bf5c920(param_4);
  func_0x00010c226060(puVar4);
  func_0x00010bf5c9e0(param_4);
  func_0x00010c226080(puVar4);
  uVar3 = param_4;
  func_0x00010befeb80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf0f140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar4);
  _objc_release(uVar3);
  func_0x00010c2a8860(param_4);
  func_0x00010c225c80(puVar4);
  func_0x00010bf11440(param_4);
  func_0x00010c16cc40(puVar4);
  func_0x00010c095f40(param_4);
  func_0x00010c1768c0((double)fVar19,puVar4);
  func_0x00010bf13940(param_4);
  func_0x00010c16e1e0(puVar4);
  puVar7 = PTR_PTR_1126c4730;
  _objc_opt_new(PTR_PTR_1126c4730);
  func_0x00010c0d2c80(param_4);
  func_0x00010c1c9c60(puVar7);
  func_0x00010c2a0a00(param_4);
  func_0x00010c224120(puVar7);
  uVar3 = param_4;
  func_0x00010c0d30c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar7);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c2a0ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar7);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf160e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar7);
  _objc_release(uVar3);
  func_0x00010c16bee0(puVar4);
  uVar3 = param_4;
  FUN_107c97764(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(puVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000108ee0cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c0976a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2260c0(puVar4);
  _objc_release(uVar3);
  func_0x00010bfd8c80(uVar5);
  func_0x00010c226620(puVar4);
  uVar3 = uVar5;
  func_0x00010c0976a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd0c0(puVar4);
  _objc_release(uVar3);
  func_0x00010c07a080(param_4);
  func_0x00010c1b34a0(puVar4);
  func_0x00010bfd6ec0(param_4);
  func_0x00010c226260(puVar4);
  uVar3 = param_4;
  func_0x00010bf9e300(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199680(puVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0b5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(puVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c247400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(puVar4);
  _objc_release(uVar3);
  func_0x00010c26b120(param_4);
  func_0x00010c212cc0(puVar4);
  func_0x00010c27c4a0(param_4);
  func_0x00010c21a480(puVar4);
  lVar9 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar1 != 0) {
    func_0x00010c067fc0(lVar1);
    func_0x00010c206c40(puVar4);
  }
  uVar3 = param_4;
  func_0x00010c247520();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_107c9787c;
  puStack_158 = &UNK_110841f80;
  _objc_retain();
  uStack_150 = uVar10;
  _objc_retain(puVar4);
  ppuVar11 = &puStack_170;
  puStack_148 = puVar4;
  _objc_retainBlock();
  uVar8 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010c08fa60();
  if ((((uint)(uVar3 - 0xc < 0x36) & (uint)(0x20000008000007 >> (uVar3 - 0xc & 0x3f))) == 1) &&
     (uVar12 != 0)) {
    uVar12 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010c095ce0();
    _objc_release(uVar12);
    _objc_release(uVar8);
    if ((uVar3 & 1) == 0) goto LAB_107c97694;
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c095300(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_retain(puVar4);
    _objc_retain(ppuVar11);
    _objc_retain(uVar13);
    func_0x00010c297260(uVar14);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(uVar13);
    _objc_release(uVar14);
  }
  else {
    _objc_release(uVar8);
LAB_107c97694:
    if (ppuVar11 != (undefined **)0x0) {
      (*(code *)ppuVar11[2])(ppuVar11);
    }
  }
  _objc_release(ppuVar11);
  _objc_release(puStack_148);
  _objc_release(uStack_150);
  _objc_release(uVar10);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uVar18);
  _objc_release(puVar4);
LAB_107c9770c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain();
    uVar18 = param_3;
    func_0x00010c0b6300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = (undefined *)0x0;
    if (uVar18 != 0) {
      puVar4 = PTR_PTR_1126d7518;
      _objc_opt_new(PTR_PTR_1126d7518);
      uVar18 = param_3;
      func_0x00010c0b6300(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2fbe0();
      func_0x00010c1c1660(puVar4);
      _objc_release(uVar18);
      uVar18 = param_3;
      func_0x00010c0b6300(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf30860();
      func_0x00010c1c1720(puVar4);
      _objc_release(uVar18);
      uVar18 = param_3;
      func_0x00010c0b6300(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar18;
      func_0x00010c068a80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar17;
      func_0x000100504554();
      func_0x00010c1ae300(puVar4);
      _objc_release(uVar2);
      _objc_release(uVar17);
      _objc_release(uVar18);
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 107c97764; end: 107c9787b;  */

void FUN_107c97764(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0b6300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d7518;
    _objc_opt_new(PTR_PTR_1126d7518);
    lVar1 = param_1;
    func_0x00010c0b6300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2fbe0();
    func_0x00010c1c1660(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0b6300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf30860();
    func_0x00010c1c1720(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0b6300(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c068a80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100504554();
    func_0x00010c1ae300(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c9787c; end: 107c97887;  */

void FUN_107c9787c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107c97888; end: 107c9794b;  */

void FUN_107c97888(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c076620(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1b22e0(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_opt_class(uVar1);
    func_0x00010c094e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc180(uVar1);
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c9794c; end: 107c97ddf; -[SCStoriesBlizzardLogger logStoryStoryView:loggingInfo:] */

void FUN_107c9794c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5138;
  _objc_alloc_init(PTR_PTR_1126d5138);
  func_0x00010c25b720(param_3);
  func_0x00010c20ddc0(puVar1);
  func_0x00010c25b7c0(param_3);
  func_0x00010c20de00(puVar1);
  lVar2 = param_3;
  func_0x00010c243a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2059e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c1057a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001085335b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4b00(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c25b660(param_3);
  func_0x00010c215700(puVar1);
  lVar2 = param_3;
  func_0x00010c077920();
  if ((int)lVar2 == 0) {
    func_0x00010c25b660(param_3);
    func_0x00010c24d6c0(param_3);
  }
  else {
    func_0x00010c0c71a0(param_3);
  }
  func_0x00010c215760(puVar1);
  func_0x00010c276d80(param_3);
  func_0x00010c205820(puVar1);
  func_0x00010bfbbf40(param_3);
  func_0x00010c1a16e0(puVar1);
  func_0x00010c0fe720(param_3);
  func_0x00010c1dd200(puVar1);
  func_0x00010c0de720(param_3);
  func_0x00010c1cf460(puVar1);
  func_0x00010c0de700(param_3);
  func_0x00010c1cf440(puVar1);
  func_0x00010c0de640(param_3);
  func_0x00010c203cc0(puVar1);
  func_0x00010c29d400(param_3);
  func_0x00010c222660(puVar1);
  func_0x00010c29e220(param_3);
  func_0x00010c222c00(puVar1);
  func_0x00010bf97740(param_3);
  func_0x00010c196820(puVar1);
  func_0x00010bf972a0(param_3);
  func_0x00010c196920(puVar1);
  func_0x00010bf9ba60(param_3);
  func_0x00010c198340(puVar1);
  func_0x00010bf9b860(param_3);
  func_0x00010c198400(puVar1);
  func_0x00010c258f80(param_3);
  func_0x00010c20cac0(puVar1);
  func_0x00010c25b040(param_4);
  func_0x00010c20d9e0(puVar1);
  func_0x00010c0b9ce0(param_4);
  func_0x00010c1c25a0(puVar1);
  func_0x00010c0bac20(param_4);
  func_0x00010c1c2900(puVar1);
  func_0x00010c0b9de0(param_4);
  func_0x00010c1c26e0(puVar1);
  func_0x00010c0ba060(param_4);
  func_0x00010c1c2780(puVar1);
  func_0x00010c0fd4a0(param_4);
  func_0x00010c1dc800(puVar1);
  func_0x00010c07b500(param_3);
  func_0x00010c1b39c0(puVar1);
  func_0x00010c0724e0(param_3);
  func_0x00010c1b0ca0(puVar1);
  func_0x00010c0ea860(param_3);
  func_0x00010c1d5500(puVar1);
  lVar2 = param_3;
  func_0x00010c25b960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar1);
  _objc_release(lVar2);
  func_0x00010bfd5060(param_3);
  func_0x00010c1a5b00(puVar1);
  func_0x00010c06dc80(param_3);
  func_0x00010c1afbe0(puVar1);
  lVar2 = param_3;
  func_0x00010c11b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b60(puVar1);
  _objc_release(lVar2);
  func_0x00010c073fa0(param_3);
  func_0x00010c1b1620(puVar1);
  lVar2 = param_3;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_4;
    func_0x00010bf81b80(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cbaff0(puVar1,param_3,lVar3,uVar5,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c97de0; end: 107c98f6b; -[SCStoriesBlizzardLogger logStorySnapView:loggingInfo:] */

void FUN_107c97de0(double param_1,long param_2,undefined8 param_3,long param_4,undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d5128;
  _objc_alloc_init();
  lVar2 = param_4;
  func_0x00010c2454a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c1057a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c11ac00(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001085335b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4b00(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c11ac00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7840(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf5b0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf5b0e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c185b40(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010c25b720(param_4);
  func_0x00010c20ddc0(puVar1);
  func_0x00010c25b7c0(param_4);
  func_0x00010c20de00(puVar1);
  lVar2 = param_4;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13a040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c13a040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec8a0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf4f180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c243400();
    _objc_release(lVar2);
    func_0x00010c206c40(puVar1);
  }
  func_0x00010c2436e0(param_4);
  func_0x00010c205820(puVar1);
  func_0x00010c243760(param_4);
  func_0x00010c215700(puVar1);
  lVar2 = param_4;
  func_0x00010c077920();
  if ((int)lVar2 == 0) {
    func_0x00010c243760(param_4);
    dVar15 = param_1;
    func_0x00010c24d6c0(param_4);
    param_1 = (param_1 * 1000.0 - dVar15) / 1000.0;
  }
  else {
    func_0x00010c0c71a0(param_4);
  }
  func_0x00010c215760(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c243760(param_4);
  func_0x00010bf65600(-param_1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar1);
  _objc_release(puVar5);
  func_0x00010c243700(param_4);
  func_0x00010c205840(puVar1);
  func_0x00010bfbbf40(param_4);
  func_0x00010c1a16e0(puVar1);
  func_0x00010c0fe720(param_4);
  func_0x00010c1dd200(puVar1);
  func_0x00010bf97740(param_4);
  func_0x00010c196820(puVar1);
  func_0x00010bf972a0(param_4);
  func_0x00010c196920(puVar1);
  func_0x00010bf9ba60(param_4);
  func_0x00010c198340(puVar1);
  func_0x00010bf9b860(param_4);
  func_0x00010c198400(puVar1);
  lVar2 = param_4;
  func_0x00010c0b1860();
  if ((int)lVar2 != 0) {
    func_0x00010c269280(param_4);
    func_0x00010c211ce0(puVar1);
    func_0x00010c2692c0(param_4);
    func_0x00010c211d20(puVar1);
    func_0x00010c2692a0(param_4);
    func_0x00010c211d00(puVar1);
    func_0x00010c2692e0(param_4);
    func_0x00010c211d40(puVar1);
  }
  func_0x00010c29d400(param_4);
  func_0x00010c222660(puVar1);
  func_0x00010c29e220(param_4);
  func_0x00010c222c00(puVar1);
  func_0x00010c0ea860(param_4);
  func_0x00010c1d5500(puVar1);
  func_0x00010c258f80(param_4);
  func_0x00010c20cac0(puVar1);
  func_0x00010c0c6c20(param_4);
  func_0x00010c1c5440(puVar1);
  func_0x00010c243400(param_4);
  func_0x00010c2056c0(puVar1);
  func_0x00010c2415c0(param_4);
  func_0x00010c204800(puVar1);
  func_0x00010c241600(param_4);
  func_0x00010c204840(puVar1);
  func_0x00010c0fef00(param_4);
  func_0x00010c1dd480(puVar1);
  func_0x00010c100660(param_4);
  func_0x00010c1dda00(puVar1);
  func_0x00010c25b040(param_5);
  func_0x00010c20d9e0(puVar1);
  func_0x00010c0b9ce0(param_5);
  func_0x00010c1c25a0(puVar1);
  func_0x00010c0bac20(param_5);
  func_0x00010c1c2900(puVar1);
  func_0x00010c247d20(param_5);
  func_0x00010c206c40(puVar1);
  func_0x00010c0b9de0(param_5);
  func_0x00010c1c26e0(puVar1);
  func_0x00010c0ba060(param_5);
  func_0x00010c1c2780(puVar1);
  func_0x00010c0fd4a0(param_5);
  func_0x00010c1dc800(puVar1);
  lVar2 = param_4;
  func_0x00010c297e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar1);
  _objc_release(lVar2);
  puVar5 = param_5;
  func_0x00010c0b97e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2400(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c4718;
  _objc_opt_new(PTR_PTR_1126c4718);
  lVar2 = param_4;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c095380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c096600(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(puVar5);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c1185e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4da0(puVar5);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf62d20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189040(puVar5);
  _objc_release(lVar2);
  func_0x00010c1bb300(puVar1);
  lVar2 = lVar3;
  func_0x00010c0b5c60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(puVar1);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c247400(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c0d3a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(puVar1);
  _objc_release(lVar2);
  func_0x00010c078340(param_4);
  func_0x00010c1ca420(puVar1);
  lVar2 = param_4;
  func_0x00010c0d3920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c1343c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010c19c240(puVar1);
  }
  else {
    func_0x00010c1eb7c0();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c1343c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb7e0(puVar1);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c26e8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d600(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c26e8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d5e0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c26e900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182e00(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0835a0();
  func_0x00010c223120(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1220();
  func_0x00010c182ea0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfd6ba0();
  _objc_release(lVar2);
  if ((int)lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dad20();
    func_0x00010c1cd9e0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27fd60();
    func_0x00010c21b5c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf19c00();
    func_0x00010c170040(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c07f020();
  if ((int)lVar2 != 0) {
    func_0x00010c176040(puVar1);
  }
  lVar2 = param_4;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfcebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar6 != 0) {
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfcebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeb20(puVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c259e20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar6 != 0) {
    lVar2 = param_4;
    func_0x00010bf4f180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c259e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d2c0(puVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  func_0x00010c073fa0(param_4);
  func_0x00010c1b1620(puVar1);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ddd60();
  func_0x00010c1ceb40(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf4f180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de6c0();
  func_0x00010c1cf400(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c26ab60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212a80(puVar1);
  _objc_release(lVar2);
  func_0x00010c07b500(param_4);
  func_0x00010c1b39c0(puVar1);
  func_0x00010c0724e0(param_4);
  func_0x00010c1b0ca0(puVar1);
  lVar2 = param_4;
  func_0x00010c23c320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205b60(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c24b220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010c24b220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1963e0(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010c07c440(param_4);
  func_0x00010c1b3dc0(puVar1);
  lVar2 = param_4;
  func_0x00010c0c5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ee0(puVar1);
  _objc_release(lVar2);
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c08a7a0(param_4);
  func_0x00010bf655e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b82e0(puVar1);
  _objc_release(puVar8);
  lVar2 = param_4;
  func_0x00010c25b960(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar1);
  _objc_release(lVar2);
  func_0x00010c06dc80(param_4);
  func_0x00010c1afbe0(puVar1);
  lVar2 = param_4;
  func_0x00010c241b20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    puVar8 = PTR_PTR_1126b5870;
    _objc_opt_new(PTR_PTR_1126b5870);
    lVar2 = param_4;
    func_0x00010c241b20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d03e0(puVar8);
    _objc_release(lVar2);
    func_0x00010c185860(puVar1);
    _objc_release(puVar8);
  }
  lVar2 = param_4;
  func_0x00010c0d2140();
  if (0 < lVar2) {
    func_0x00010c0d2140(param_4);
    func_0x00010c1c9740(puVar1);
    func_0x00010c0d2220(param_4);
    func_0x00010c1c9820(puVar1);
  }
  lVar2 = param_4;
  func_0x00010c156fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c156fa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9a80(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010bfdcf20(param_4);
  func_0x00010c1a6fa0(puVar1);
  func_0x00010c2a2960(param_4);
  func_0x00010c224a80(puVar1);
  lVar2 = param_4;
  func_0x00010c261260(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f820(puVar1);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c08bdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010c08bdc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9760(puVar1);
    _objc_release(lVar2);
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c0b2e60();
  _objc_release(uVar9);
  puVar8 = puVar1;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  FUN_107cb8194();
  _objc_release(puVar8);
  if ((int)puVar10 != 0) {
    puVar8 = param_5;
    func_0x00010bf81b80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + 0x48);
    uVar9 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x000107cbb2b8(puVar1,param_4,puVar8,uVar14,uVar9);
    _objc_release(uVar9);
    _objc_release(puVar8);
    lVar2 = param_4;
    func_0x00010c29e220();
    if (((lVar2 == 0x2b) || (lVar2 = param_4, func_0x00010c29e220(), lVar2 == 0x5e)) ||
       (lVar2 = param_4, func_0x00010c29e220(), lVar2 == 0x12)) {
      lVar2 = param_4;
      func_0x00010bf4f180();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0ddd60();
      if (lVar4 == 0) {
        lVar4 = param_4;
        func_0x00010bf4f180();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0de6c0();
        _objc_release(lVar4);
        _objc_release(lVar2);
        if (lVar6 == 0) goto LAB_107c98f04;
      }
      else {
        _objc_release(lVar2);
      }
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      _objc_opt_class();
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar2 = param_4;
      func_0x00010bf4f180(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ddd60();
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = param_4;
      func_0x00010bf4f180(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0de6c0();
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)0x0;
      func_0x00010bf7dbc0(uVar9);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar4);
      _objc_release(puVar8);
      _objc_release(lVar2);
      _objc_release(param_2);
    }
  }
LAB_107c98f04:
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d5130;
  _objc_retain(puVar12);
  _objc_opt_new(puVar1);
  puVar5 = puVar12;
  func_0x00010c25b200(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1);
  _objc_release(puVar5);
  puVar5 = puVar12;
  func_0x00010c1057a0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1);
  _objc_release(puVar5);
  func_0x00010c25b720(puVar12);
  func_0x00010c20ddc0(puVar1);
  func_0x00010c25b7c0(puVar12);
  func_0x00010c20de00(puVar1);
  func_0x00010c0c6c20(puVar12);
  func_0x00010c1c5440(puVar1);
  func_0x00010c29d400(puVar12);
  func_0x00010c222660(puVar1);
  func_0x00010c29e220(puVar12);
  func_0x00010c222c00(puVar1);
  func_0x00010c243760(puVar12);
  func_0x00010c215700(puVar1);
  func_0x00010c2436e0(puVar12);
  func_0x00010c205820(puVar1);
  puVar5 = puVar12;
  func_0x00010c07f020();
  _objc_release(puVar12);
  if ((int)puVar5 != 0) {
    func_0x00010c176040(puVar1);
  }
  uVar9 = *(undefined8 *)(param_4 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c98f6c; end: 107c990cf; -[SCStoriesBlizzardLogger logStorySnapScreenshot:] */

void FUN_107c98f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d5130;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1057a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c25b720(param_3);
  func_0x00010c20ddc0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c25b7c0(param_3);
  func_0x00010c20de00(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c1c5440(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c29d400(param_3);
  func_0x00010c222660(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010c222c00(puVar1,param_2,uVar2);
  func_0x00010c243760(param_3);
  func_0x00010c215700(puVar1);
  func_0x00010c2436e0(param_3);
  func_0x00010c205820(puVar1);
  uVar2 = param_3;
  func_0x00010c07f020();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    func_0x00010c176040(puVar1,param_2,2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c990d0; end: 107c991f7; -[SCStoriesBlizzardLogger logStoryStorySave:] */

void FUN_107c990d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7460;
  _objc_opt_new(PTR_PTR_1126d7460);
  lVar2 = param_3;
  func_0x00010c25b1a0(param_3);
  func_0x00010c203cc0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c14be20(param_3);
  func_0x00010c226380(puVar1,param_2,lVar2);
  func_0x00010c206c40(puVar1,param_2,5);
  lVar2 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c25b7c0(param_3);
    func_0x00010c20de00(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001085335b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4b00(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c991f8; end: 107c99377; -[SCStoriesBlizzardLogger logStorySnapSave:] */

void FUN_107c991f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7468;
  _objc_opt_new(PTR_PTR_1126d7468);
  lVar2 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c1057a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c1c5440(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c14be20(param_3);
  func_0x00010c226380(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c25b720(param_3);
  func_0x00010c20ddc0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c25b7c0(param_3);
    func_0x00010c20de00(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001085335b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4b00(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c99378; end: 107c994af; -[SCStoriesBlizzardLogger logStoryStorySession:loggingInfo:] */

void FUN_107c99378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d5140;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010c25b040(param_4);
  _objc_release(param_4);
  func_0x00010c20d9e0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c25b900(param_3);
  func_0x00010c20dfa0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c25b940(param_3);
  func_0x00010c20dfc0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c243be0(param_3);
  func_0x00010c205ae0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c243c20(param_3);
  func_0x00010c205b00(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf9ba60(param_3);
  func_0x00010c198340(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010c222c00(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0741a0(param_3);
  _objc_release(param_3);
  func_0x00010c1a16e0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c994b0; end: 107c99517; -[SCStoriesBlizzardLogger logFailedToCreateCustomStoryWithFailType:] */

void FUN_107c994b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7470;
  _objc_alloc_init(PTR_PTR_1126d7470);
  func_0x00010c19a060();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99518; end: 107c995e7; -[SCStoriesBlizzardLogger logDeleteCustomStoryWithPublicationId:storyTypeSpecific:leaveType:] */

void FUN_107c99518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7478;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x0001085335b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4b00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c20de00(puVar1,param_2,param_4);
  func_0x00010c1ba0c0(puVar1,param_2,param_5);
  func_0x00010c1e7840(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c995e8; end: 107c997a7; -[SCStoriesBlizzardLogger logCreateCustomStoryWithLogParameters:] */

void FUN_107c995e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7480;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar3 = param_3;
  func_0x00010c080320(param_3);
  func_0x00010c1b4d60(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bfd6660(param_3);
  func_0x00010c226160(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bfd4680(param_3);
  func_0x00010c225d40(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0de560(param_3);
  func_0x00010c1df6a0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0de920(param_3);
  func_0x00010c223040(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf626e0(param_3);
  func_0x00010c1853c0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf5aa80(param_3);
  func_0x00010c206c40(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x0001085335b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5a60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7840(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0de320(param_3);
  func_0x00010c1fb1e0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0de100(param_3);
  func_0x00010c1fb100(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c247a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c206f80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c997a8; end: 107c998a3; -[SCStoriesBlizzardLogger logSharedStoryProfileOpenWithPublicationId:sourcePage:sourcePageSessionId:pageEntryType:] */

void FUN_107c997a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7488;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e5a60();
  _objc_release(param_3);
  func_0x00010c20ddc0(puVar1,param_2,6);
  func_0x00010c20de00(puVar1,param_2,0x21);
  puVar2 = PTR_PTR_1126d7490;
  _objc_alloc_init(PTR_PTR_1126d7490);
  func_0x00010c196b80();
  func_0x00010c206f20(puVar2,param_2,param_4);
  func_0x00010c206f80(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1d80c0(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c998a4; end: 107c9997f; -[SCStoriesBlizzardLogger logSharedStoryProfileViewWithPublicationId:sourcePage:viewTimeSec:pageExitType:] */

void FUN_107c998a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7498;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1e5a60();
  _objc_release(param_4);
  func_0x00010c20ddc0(puVar1,param_3,6);
  func_0x00010c20de00(puVar1,param_3,0x21);
  puVar2 = PTR_PTR_1126d74a0;
  _objc_alloc_init(PTR_PTR_1126d74a0);
  func_0x00010c198620();
  func_0x00010c222d40(param_1,puVar2);
  func_0x00010c1d8120(puVar1,param_3,puVar2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99980; end: 107c99a3b; -[SCStoriesBlizzardLogger logSharedStoryProfileActionWithPublicationId:isCreator:actionName:] */

void FUN_107c99980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74a8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20ddc0();
  func_0x00010c20de00(puVar1,param_2,0x21);
  func_0x00010c1e5a60(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b0380(puVar1,param_2,param_4);
  func_0x00010c161c40(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99a3c; end: 107c99b37; -[SCStoriesBlizzardLogger logSharedStoryInviteWithLogParameters:] */

void FUN_107c99a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d74b0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x0001085335b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5a60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c06f8e0(param_3);
  func_0x00010c1b0380(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0de320(param_3);
  func_0x00010c1fb1e0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0de100(param_3);
  _objc_release(param_3);
  func_0x00010c1fb100(puVar1,param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99b38; end: 107c99bdb; -[SCStoriesBlizzardLogger logCustomStoryCreationOptionSelectWithCreateType:createSource:sourcePageSessionId:] */

void FUN_107c99b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74b8;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c1853c0();
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c206f80(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99bdc; end: 107c99c8f; -[SCStoriesBlizzardLogger logStoryPrivacyUpdateFrom:to:] */

void FUN_107c99bdc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  if (param_3 < 3) {
    ppuVar3 = (undefined **)(&PTR_PTR_110a01b90)[param_3];
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  if (param_4 < 3) {
    ppuVar4 = (undefined **)(&PTR_PTR_110a01b90)[param_4];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  puVar1 = PTR_PTR_1126b1768;
  _objc_opt_new(PTR_PTR_1126b1768);
  func_0x00010c1fe360();
  func_0x00010c1fe3a0(puVar1,param_2,ppuVar3);
  func_0x00010c1fe380(puVar1,param_2,ppuVar4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99c90; end: 107c99d57; -[SCStoriesBlizzardLogger logCustomStoryItemImpWithPublicationId:itemType:storyTypeSpecific:readyLatency:] */

void FUN_107c99c90(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74c0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1e5a60();
  _objc_release(param_4);
  func_0x00010c1b6340(puVar1,param_3,param_5);
  func_0x00010c20de00(puVar1,param_3,param_6);
  func_0x00010c1e7f60(puVar1,param_3,(long)param_1);
  func_0x00010c20ddc0(puVar1,param_3,6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99d58; end: 107c99e17; -[SCStoriesBlizzardLogger logCustomStoryItemActionWithPublicationId:itemType:storyTypeSpecific:actionName:] */

void FUN_107c99d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74c8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e5a60();
  _objc_release(param_3);
  func_0x00010c1b6340(puVar1,param_2,param_4);
  func_0x00010c20de00(puVar1,param_2,param_5);
  func_0x00010c161c40(puVar1,param_2,param_6);
  func_0x00010c20ddc0(puVar1,param_2,6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99e18; end: 107c99f6f; -[SCStoriesBlizzardLogger logDeleteStorySnapWithId:posterGuid:posted:viewCount:storyType:storyTypeSpecific:storyId:goLiveTimestamp:] */

void FUN_107c99e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d74d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c20db00();
  _objc_release(param_3);
  func_0x00010c1df6e0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c226a20(puVar1,param_2,param_5);
  func_0x00010c222500(puVar1,param_2,param_6);
  func_0x00010c20ddc0(puVar1,param_2,param_7);
  func_0x00010c20de00(puVar1,param_2,param_8);
  if (param_7 == 6) {
    uVar2 = param_9;
    func_0x0001085335b0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4b00(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1e7840(puVar1,param_2,param_9);
  }
  if (0 < param_10) {
    func_0x00010c1a3d60(puVar1,param_2,param_10);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 107c99f70; end: 107c99fef; -[SCStoriesBlizzardLogger logStoryManagementViewWithStoryType:timeViewed:] */

void FUN_107c99f70(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74d8;
  _objc_opt_new(PTR_PTR_1126d74d8);
  func_0x00010c20ddc0();
  func_0x00010c215700(param_1,puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c99ff0; end: 107c9a07b; -[SCStoriesBlizzardLogger logStoryViewerListPageViewWithViewerCount:timeViewed:] */

void FUN_107c99ff0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74e0;
  _objc_opt_new(PTR_PTR_1126d74e0);
  func_0x00010c218bc0();
  func_0x00010c222d20(param_1,puVar1);
  func_0x00010c206c40(puVar1,param_3,8);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9a07c; end: 107c9a11f; -[SCStoriesBlizzardLogger logStoryManagementSpotlightStatusActionWithActionType:snapId:spotlightSnapStatus:] */

void FUN_107c9a07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74e8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c161620();
  func_0x00010c204680(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c20a2c0(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9a120; end: 107c9a173; -[SCStoriesBlizzardLogger logWatchOnSpotlightCTATap] */

void FUN_107c9a120(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74f0;
  _objc_opt_new(PTR_PTR_1126d74f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9a174; end: 107c9a27f; -[SCStoriesBlizzardLogger logV2WatchOnSpotlightCTATapWithContextSessionId:reshareItemId:subitemId:contentSharerUserId:postingVersion:buttonType:] */

void FUN_107c9a174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74f0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1833c0();
  _objc_release(param_3);
  func_0x00010c1ec8a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c20efc0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1827a0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1df820(puVar1,param_2,param_7);
  func_0x00010c174ae0(puVar1,param_2,param_8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9a280; end: 107c9a333; -[SCStoriesBlizzardLogger logSnapTakedownWithId:liveTime:takeDownSessionId:] */

void FUN_107c9a280(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d74f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c204680();
  _objc_release(param_4);
  func_0x00010c1be580(param_1,puVar1);
  func_0x00010c2119c0(puVar1,param_3,param_5);
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9a334; end: 107c9a3d3; -[SCStoriesBlizzardLogger logCreatorSubscribeEntryPointImpressionWithCreatorId:] */

void FUN_107c9a334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7500;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c206ea0();
  _objc_release(param_3);
  func_0x00010c1d8800(puVar1,param_2,0xed);
  func_0x00010c206fa0(puVar1,param_2,0xf8);
  func_0x00010c207200(puVar1,param_2,5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9a3d4; end: 107c9a463; -[SCStoriesBlizzardLogger _segmentSourceFromCommonParams:] */

undefined8 FUN_107c9a3d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x00010c247520();
  uVar1 = 0;
  switch(param_3) {
  case 0:
  case 1:
  case 3:
  case 6:
  case 7:
  case 8:
  case 0x12:
  case 0x14:
  case 0x21:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x3c:
  case 0x3f:
  case 0x40:
    break;
  case 0xb:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x33:
  case 0x34:
  case 0x4d:
  case 0x4e:
LAB_107c9a448:
    uVar1 = 1;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x27:
  case 0x41:
  case 0x45:
    return 2;
  default:
    uVar2 = param_3 - 0x5a;
    if (uVar2 < 9) {
      if ((1L << (uVar2 & 0x3f) & 0x148U) != 0) goto LAB_107c9a448;
      if ((1L << (uVar2 & 0x3f) & 0x11U) != 0) {
        return 2;
      }
      if (uVar2 == 5) {
        return 0;
      }
    }
  case 2:
  case 4:
  case 5:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x37:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 107c9a464; end: 107c9a46b; -[SCStoriesBlizzardLogger listenerAnnouncer] */

undefined8 FUN_107c9a464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107c9a46c; end: 107c9a52b; -[SCStoriesBlizzardLogger .cxx_destruct] */

void FUN_107c9a46c(long param_1)

{
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



/* Entry: 107c9a52c; end: 107c9d59f;  */

void FUN_107c9a52c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined *param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined *puVar27;
  float fVar28;
  double dVar29;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010c08fa60();
  lVar11 = param_2;
  if (lVar24 != 0) {
    lVar11 = lVar2;
  }
  _objc_retain(lVar11);
  _objc_release(param_2);
  _objc_release(lVar2);
  func_0x00010c1df360(param_1);
  _objc_release(lVar11);
  func_0x00010c20db00(param_1);
  func_0x00010c1e99c0(param_1);
  func_0x00010c20db60(param_1);
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(param_1);
  func_0x00010c07e5e0(param_7);
  func_0x00010c1b4700(param_1);
  puVar3 = param_7;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108ee0cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010c0976a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2260c0(param_1);
  _objc_release(puVar3);
  func_0x00010bfd8c80(puVar5);
  func_0x00010c226620(param_1);
  puVar3 = puVar5;
  func_0x00010c0976a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd0c0(param_1);
  _objc_release(puVar3);
  uVar20 = param_6;
  func_0x00010bfda540();
  if ((int)uVar20 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = param_6;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar20);
  }
  uVar22 = uVar20;
  func_0x00010bfda560();
  if ((int)uVar22 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = uVar20;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar22);
  }
  uVar6 = uVar20;
  FUN_107c9667c();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c4bc0();
  if ((int)uVar7 == 0) {
    uVar7 = uVar22;
    func_0x00010bf8b420(uVar22);
    dVar29 = (double)(uVar7 & 0xffffffff);
  }
  else {
    uVar7 = uVar6;
    func_0x00010c0c4bc0(uVar6);
    dVar29 = (double)(uVar7 & 0xffffffff) / 1000.0;
  }
  dVar29 = (double)(long)(dVar29 * 1000.0) / 1000.0;
  func_0x00010c205820(dVar29,param_1);
  fVar28 = SUB84(dVar29,0);
  func_0x00010bfbbd00(param_7);
  dVar29 = (double)(long)(fVar28 * 1000.0) / 1000.0;
  func_0x00010c1a16c0(dVar29,param_1);
  fVar28 = SUB84(dVar29,0);
  func_0x00010c158540(param_7);
  func_0x00010c1fab60((double)(long)(fVar28 * 1000.0) / 1000.0,param_1);
  func_0x00010bf85640(uVar22);
  func_0x00010c205840(param_1);
  FUN_107c96794(param_6);
  func_0x00010c226320(param_1);
  uVar7 = param_6;
  func_0x00010bfd89e0();
  if ((int)uVar7 != 0) {
    uVar7 = param_6;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar7);
    if (uVar7 != 0) {
      func_0x00010c08b3c0(uVar7);
      func_0x00010c1b9520(param_1);
      func_0x00010c0b55a0(uVar7);
      func_0x00010c1c0e80(param_1);
      func_0x00010bfe4080(uVar7);
      func_0x00010c1a90e0(param_1);
      func_0x00010bf01f00(uVar7);
      func_0x00010c167960(param_1);
      _objc_release(uVar7);
    }
  }
  dVar29 = 0.0;
  uVar7 = param_6;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar8;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (uVar7 != 0) {
    uVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(uVar8);
      }
      lVar24 = *(long *)(uVar25 * 8);
      lVar2 = lVar24;
      func_0x00010bf0d0a0();
      if ((int)lVar2 == 1) {
        func_0x00010bf4e080();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar24;
        FUN_107c9d5a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar24);
        lVar24 = lVar2;
        func_0x00010bfcec40();
        if (lVar24 != 0) {
          lVar24 = lVar2;
          func_0x00010bfcec20(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar24;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar9;
          func_0x00010bfcebc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar24);
          lVar24 = lVar19;
          func_0x00010bfe2ee0(lVar19);
          lVar9 = lVar19;
          func_0x00010c0b5940(lVar19);
          func_0x000100c4a928(lVar24,lVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar24;
          func_0x00010bf64920();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bdc2560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1aeb20(param_1);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar24);
          _objc_release(lVar19);
        }
        lVar24 = lVar2;
        func_0x00010bf8a6a0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar24;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar9;
        func_0x00010c08fa60();
        _objc_release(lVar9);
        _objc_release(lVar24);
        if (lVar19 != 0) {
          lVar24 = lVar2;
          func_0x00010bf8a6a0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar24;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19c240(param_1);
          _objc_release(lVar9);
          _objc_release(lVar24);
        }
        _objc_release(lVar2);
      }
      else {
        lVar2 = lVar24;
        func_0x00010bf0d0a0();
        if ((int)lVar2 == 3) {
          func_0x00010c2a3a80(lVar24);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar24;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          func_0x00010c225c80(param_1);
          _objc_release(lVar2);
          _objc_release(lVar24);
          func_0x00010bf0d3a0(param_7);
          func_0x00010c225ce0(param_1);
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar7 != uVar25);
    uVar7 = uVar8;
    func_0x00010bf52a60();
  }
  _objc_release(uVar8);
  FUN_107c96618(param_7);
  func_0x00010c176040(param_1);
  func_0x00010bf037a0(param_7);
  func_0x00010c167f20(param_1);
  func_0x00010bf03500(param_7);
  func_0x00010c167e60(param_1);
  puVar3 = param_7;
  func_0x00010bf31200(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(param_1);
  _objc_release(puVar3);
  lVar11 = param_9;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    func_0x00010c1fc200(param_1);
  }
  puVar3 = param_7;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = param_7;
    func_0x00010c15d5c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcc00(param_1);
    _objc_release(puVar3);
  }
  FUN_107c96558(param_7);
  func_0x00010c20d6c0(param_1);
  func_0x00010c2a8340(param_7);
  func_0x00010c225be0(param_1);
  func_0x00010c0c6c20(param_7);
  func_0x000108532b74();
  func_0x00010c1c5440(param_1);
  puVar3 = param_7;
  func_0x00010c0c6840(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52e0(param_1);
  _objc_release(puVar3);
  puVar3 = param_7;
  func_0x00010c087d20(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b73e0(param_1);
  _objc_release(puVar3);
  puVar3 = param_7;
  func_0x00010c087b00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7380(param_1);
  _objc_release(puVar3);
  func_0x00010c240640(param_7);
  func_0x00010c204260(param_1);
  func_0x00010c2700c0(param_7);
  func_0x00010c2159a0(param_1);
  func_0x00010c270140(param_7);
  func_0x00010c215a20(param_1);
  puVar4 = PTR_PTR_1126d4560;
  _objc_opt_new();
  puVar3 = param_7;
  func_0x00010c0d20e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c96c0(puVar4);
  _objc_release(puVar3);
  func_0x00010c0d2360(param_7);
  func_0x00010c1c9920(puVar4);
  func_0x00010c0d2380(param_7);
  func_0x00010c1c9940(puVar4);
  func_0x00010c0d22c0(param_7);
  func_0x00010c1c98a0(puVar4);
  func_0x00010c0d22e0(param_7);
  func_0x00010c1c98c0(puVar4);
  func_0x00010c27c860(param_7);
  func_0x00010c21a560(puVar4);
  func_0x00010c1c9840(param_1);
  func_0x00010c0d2360(param_7);
  func_0x00010c1b5580(param_1);
  func_0x00010bf6cf80(param_7);
  func_0x00010c18b9e0(param_1);
  func_0x00010bf2fba0(param_7);
  func_0x00010c178460(param_1);
  func_0x00010bf5c920(param_7);
  func_0x00010c226060(param_1);
  func_0x00010bf5c9e0(param_7);
  func_0x00010c226080(param_1);
  puVar3 = param_7;
  func_0x00010befeb80(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(param_1);
  _objc_release(puVar21);
  _objc_release(puVar3);
  func_0x00010bf89ea0(param_7);
  func_0x00010c191960(param_1);
  func_0x00010bfb2540(param_7);
  func_0x00010c19daa0(param_1);
  func_0x00010bfb2520(param_7);
  func_0x00010c19db40(param_1);
  func_0x00010bfd3440(param_7);
  func_0x00010c1a5460(param_1);
  func_0x00010c06f5c0(param_7);
  func_0x00010c1b0260(param_1);
  puVar3 = PTR_PTR_1126c4750;
  _objc_retain(param_7);
  _objc_alloc_init(puVar3);
  func_0x00010c140fe0(param_7);
  func_0x00010c1ee380(puVar3);
  func_0x00010c141100(param_7);
  _objc_release(param_7);
  func_0x00010c1ee400(puVar3);
  func_0x00010c1ee3c0(param_1);
  _objc_release(puVar3);
  func_0x00010c140fc0(param_7);
  func_0x00010c1ee440(param_1);
  func_0x00010c140f80(param_7);
  func_0x00010c1ee340(param_1);
  _objc_retain(param_7);
  func_0x00010c273560(param_7);
  if (dVar29 == -1.0) {
    _objc_release(param_7);
    fVar28 = SUB84(dVar29,0);
  }
  else {
    puVar3 = PTR_PTR_1126c4758;
    _objc_alloc_init();
    fVar28 = SUB84(dVar29,0);
    func_0x00010c273500(param_7);
    func_0x00010c216d20(puVar3);
    func_0x00010c273520(param_7);
    func_0x00010c216d40(puVar3);
    func_0x00010c273560(param_7);
    func_0x00010c216dc0(puVar3);
    puVar21 = param_7;
    func_0x00010c273580(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216de0(puVar3);
    _objc_release(puVar21);
    _objc_release(param_7);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c216da0(param_1);
      _objc_release(puVar3);
    }
  }
  puVar3 = PTR_PTR_1126c4760;
  _objc_retain(param_7);
  _objc_alloc_init();
  func_0x00010c105cc0(param_7);
  func_0x00010c179400(puVar3);
  func_0x00010bf316a0(param_7);
  func_0x00010c179420(puVar3);
  puVar21 = param_7;
  func_0x00010c2bf140(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227ba0(puVar3);
  _objc_release(puVar21);
  func_0x00010c2bf240(param_7);
  _objc_release(param_7);
  func_0x00010c227c40(puVar3);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c227b80(param_1);
  }
  func_0x00010c123e80(param_7);
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
  func_0x00010c1e8fe0(param_1);
  _objc_release(puVar21);
  _objc_retain(param_7);
  puVar21 = param_7;
  func_0x00010c078000();
  if ((int)puVar21 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126c4768;
    _objc_opt_new(PTR_PTR_1126c4768);
    func_0x00010bfaf060(param_7);
    func_0x00010c1c9360(puVar21);
  }
  _objc_release(param_7);
  func_0x00010c1c9480(param_1);
  _objc_release(puVar21);
  func_0x00010bf29de0(param_7);
  func_0x00010c1769e0(param_1);
  func_0x00010c06c6a0(param_7);
  func_0x00010c1af380(param_1);
  puVar21 = param_7;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar21;
  func_0x00010bf529e0();
  _objc_release(puVar21);
  puVar21 = param_7;
  if (puVar27 == (undefined *)0x0) {
    puVar27 = param_7;
    func_0x00010c24b740(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_1);
    _objc_release(puVar27);
    func_0x00010bf6f7a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c600(param_1);
  }
  else {
    puVar27 = param_7;
    func_0x00010b070344();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_1);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010b0704c8(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c600(param_1);
    _objc_release(puVar27);
    func_0x00010c158420(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c18e4e0(param_1);
  }
  _objc_release(puVar21);
  func_0x00010c29e480(param_7);
  dVar29 = (double)(long)(fVar28 * 1000.0) / 1000.0;
  func_0x00010c222e40(dVar29,param_1);
  fVar28 = SUB84(dVar29,0);
  puVar21 = param_7;
  func_0x00010bf2ae80(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(param_1);
  _objc_release(puVar21);
  puVar21 = param_7;
  func_0x00010c250280(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203b40(param_1);
  _objc_release(puVar21);
  func_0x00010c247520(param_7);
  func_0x00010c206c40(param_1);
  puVar21 = param_7;
  func_0x00010c247a00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(param_1);
  _objc_release(puVar21);
  func_0x00010bf2afc0(param_7);
  func_0x00010c177180(param_1);
  func_0x00010c156900(param_7);
  func_0x00010c1f9160(param_1);
  func_0x00010c25a8c0(param_7);
  func_0x00010c20d640(param_1);
  func_0x00010c2aea60(param_7);
  func_0x00010c226380(param_1);
  puVar21 = param_7;
  func_0x00010bf3d2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cf60(param_1);
  _objc_release(puVar21);
  func_0x00010c2b9180(param_7);
  func_0x00010c226d60(param_1);
  puVar21 = param_7;
  func_0x00010bfadfa0(param_7);
  _objc_retainAutoreleasedReturnValue();
  FUN_107c96830();
  func_0x00010c19c1c0(param_1);
  _objc_release(puVar21);
  puVar21 = param_7;
  func_0x00010bfae8c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c968dc();
  func_0x00010c19c760(param_1);
  _objc_release(puVar21);
  func_0x00010c095f40(param_7);
  func_0x00010c1768c0((double)fVar28,param_1);
  func_0x00010bf13940(param_7);
  func_0x00010c16e1e0(param_1);
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar27 = param_7;
  func_0x00010c1343c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar12 = param_7;
  func_0x00010c094540(param_7);
  _objc_retainAutoreleasedReturnValue();
  if (puVar27 == (undefined *)0x0) {
    func_0x00010c19c240(param_1);
  }
  else {
    func_0x00010c1eb7c0();
  }
  _objc_release(puVar12);
  puVar27 = param_7;
  func_0x00010c1188c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar27 == (undefined *)0x0) {
    puVar27 = param_7;
    func_0x00010c095a20(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc480(param_1);
    _objc_release(puVar27);
    func_0x00010c096ca0(param_7);
    func_0x00010c1bcca0(param_1);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b06f648();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbee0(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c095800(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc3e0(param_1);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c096b60(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(param_1);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010bf09180(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcf40(param_1);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b06fac4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6700(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b06ffa4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6380(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b06fbfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6400(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b06fe6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f63c0(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b06fd34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f64e0(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010b0700dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f62c0(param_1);
    _objc_release(puVar12);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010c091c60(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b070214();
    func_0x00010c1f63e0(param_1);
    _objc_release(puVar27);
    puVar27 = param_7;
    func_0x00010bf5af60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010c08fa60();
    _objc_release(puVar27);
    if (puVar12 != (undefined *)0x0) {
      puVar27 = param_7;
      func_0x00010bf5af60(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185a80(param_1);
      _objc_release(puVar27);
    }
    puVar27 = param_7;
    func_0x00010bfb75c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010c08fa60();
    _objc_release(puVar27);
    if (puVar12 != (undefined *)0x0) {
      puVar27 = param_7;
      func_0x00010bfb75c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f820(param_1);
      _objc_release(puVar27);
    }
    puVar27 = param_7;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar27 != (undefined *)0x0) {
      func_0x00010bf9f120(param_7);
      func_0x00010c199b20(param_1);
      func_0x00010bf9f040(param_7);
      func_0x00010c199a40(param_1);
      func_0x00010c0947c0(param_7);
      func_0x00010c1bbe80(param_1);
      func_0x00010c094800(param_7);
      func_0x00010c1bbea0(param_1);
      puVar27 = param_7;
      func_0x00010c090320(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1baba0(param_1);
      _objc_release(puVar27);
      puVar27 = param_7;
      func_0x00010c0915a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb200(param_1);
      _objc_release(puVar27);
      puVar27 = param_7;
      func_0x00010c08fda0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208000(param_1);
      _objc_release(puVar27);
      func_0x00010c096da0(param_7);
      func_0x00010c208420(param_1);
      puVar27 = param_7;
      func_0x00010c26a320(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212740(param_1);
      _objc_release(puVar27);
      uVar7 = param_6;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar11 = 0;
      if (uVar7 != 0) {
        do {
          uVar25 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar8);
            }
            lVar24 = *(long *)(uVar25 * 8);
            lVar11 = lVar24;
            func_0x00010bf0d0a0();
            if ((int)lVar11 == 1) {
              func_0x00010bf4e080();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar24;
              FUN_107c9d5a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar24);
              lVar11 = lVar9;
              func_0x00010c091b80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar11 != 0) {
                lVar11 = lVar9;
                func_0x00010c091b80(lVar9);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar9);
                goto LAB_107c9bad8;
              }
              _objc_release(lVar9);
            }
            uVar25 = uVar25 + 1;
          } while (uVar7 != uVar25);
          uVar7 = uVar8;
          func_0x00010bf52a60();
        } while (uVar7 != 0);
        lVar11 = 0;
      }
LAB_107c9bad8:
      _objc_release(uVar8);
      puVar27 = PTR_PTR_1126c4718;
      _objc_opt_new(PTR_PTR_1126c4718);
      puVar12 = param_7;
      func_0x00010c094540(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(puVar27);
      _objc_release(puVar12);
      func_0x00010c095a80(param_7);
      func_0x00010c1bc4a0(puVar27);
      func_0x00010c096ca0(param_7);
      func_0x00010c1bccc0(puVar27);
      puVar12 = param_7;
      func_0x00010c095800(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc400(puVar27);
      _objc_release(puVar12);
      func_0x00010c094800(param_7);
      func_0x00010c1bbec0(puVar27);
      puVar12 = param_7;
      func_0x00010c11fae0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e74c0(puVar27);
      _objc_release(puVar12);
      puVar12 = param_7;
      func_0x00010c11fa40(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e74e0(puVar27);
      _objc_release(puVar12);
      puVar12 = param_7;
      func_0x00010c092b80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        puVar26 = param_7;
        func_0x00010bf09160(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17a100(puVar27);
        _objc_release(puVar26);
      }
      else {
        func_0x00010c17a100(puVar27);
      }
      _objc_release(puVar12);
      lVar2 = lVar11;
      func_0x00010c1185e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4da0(puVar27);
      _objc_release(lVar2);
      lVar2 = lVar11;
      func_0x00010bf62d40(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar2;
      func_0x00010bf62d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189040(puVar27);
      _objc_release(lVar24);
      _objc_release(lVar2);
      puVar12 = param_7;
      func_0x00010c0972c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bcec0(puVar27);
      _objc_release(puVar12);
      func_0x00010c1ce180(puVar27);
      func_0x00010c1bb300(param_1);
      func_0x00010befa120(puVar21);
      _objc_release(puVar27);
      _objc_release(lVar11);
    }
    puVar12 = param_7;
    func_0x00010c091c60();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar12;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar27 != (undefined *)0x0) {
      puVar26 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar12);
        }
        uVar25 = *(ulong *)((long)puVar26 * 8);
        uVar7 = uVar25;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = param_7;
        func_0x00010c094540(param_7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        _objc_release(puVar13);
        _objc_release(uVar7);
        if ((uVar8 & 1) == 0) {
          puVar13 = PTR_PTR_1126c4718;
          _objc_opt_new(PTR_PTR_1126c4718);
          uVar7 = uVar25;
          func_0x00010c094540(uVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(puVar13);
          _objc_release(uVar7);
          func_0x00010c096ca0(uVar25);
          func_0x00010c1bccc0(puVar13);
          func_0x00010c094800(uVar25);
          func_0x00010c1bbec0(puVar13);
          uVar7 = uVar25;
          func_0x00010c095800(uVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bc400(puVar13);
          _objc_release(uVar7);
          uVar7 = uVar25;
          func_0x00010c11fae0(uVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74c0(puVar13);
          _objc_release(uVar7);
          uVar7 = uVar25;
          func_0x00010c11fa40(uVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74e0(puVar13);
          _objc_release(uVar7);
          func_0x00010c0972c0(uVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bcec0(puVar13);
          _objc_release(uVar25);
          func_0x00010befa120(puVar21);
          _objc_release(puVar13);
        }
        puVar26 = puVar26 + 1;
      } while (puVar27 != puVar26);
      puVar27 = puVar12;
      func_0x00010bf52a60();
    }
  }
  else {
    puVar12 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    puVar27 = param_7;
    func_0x00010c1188c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4ea0(puVar12);
    _objc_release(puVar27);
    func_0x00010befa120(puVar21);
  }
  _objc_release(puVar12);
  puVar27 = puVar21;
  func_0x00010bf529e0();
  if (puVar27 != (undefined *)0x0) {
    puVar27 = puVar21;
    func_0x00010bf51e00(puVar21);
    func_0x00010c1bb320(param_1);
    _objc_release(puVar27);
  }
  puVar27 = param_7;
  func_0x00010c07b9c0();
  if ((int)puVar27 != 0) {
    func_0x00010c206c40(param_1);
  }
  func_0x00010c26b120(param_7);
  func_0x00010c212cc0(param_1);
  func_0x00010bf30820(param_7);
  func_0x00010c178b80(param_1);
  func_0x00010bf2fe80(param_7);
  func_0x00010c1785c0(param_1);
  func_0x00010bf2fbe0(param_7);
  func_0x00010c178480(param_1);
  func_0x00010bf30860(param_7);
  func_0x00010c178bc0(param_1);
  puVar27 = param_7;
  func_0x00010bf30440(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf304e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30160();
  func_0x00010c178740(param_1);
  _objc_release(puVar27);
  func_0x00010bf30660(param_7);
  func_0x00010c178ae0(param_1);
  puVar27 = param_7;
  func_0x00010bf304e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30420();
  func_0x00010c178680(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf304e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf300e0();
  func_0x00010c1786a0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf304e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar27;
  func_0x00010bf30180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178760(param_1);
  _objc_release(puVar12);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf304e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2fc00();
  func_0x00010c1784a0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf304e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar27;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c226760(param_1);
  _objc_release(puVar12);
  _objc_release(puVar27);
  func_0x00010bf11440(param_7);
  func_0x00010c16cc40(param_1);
  func_0x00010c2a09e0(param_7);
  func_0x00010c224100(param_1);
  puVar12 = PTR_PTR_1126c4720;
  _objc_opt_new();
  func_0x00010c282c80(param_7);
  func_0x00010c1e9680(puVar12);
  func_0x00010c2681e0(param_7);
  func_0x00010c2117e0(puVar12);
  func_0x00010bf5bb60(param_7);
  func_0x00010c1e59c0(puVar12);
  func_0x00010bfb92e0(param_7);
  func_0x00010c170060(puVar12);
  func_0x00010c268220(param_7);
  func_0x00010c211800(puVar12);
  func_0x00010c21f5a0(param_1);
  func_0x00010c253c00(param_7);
  func_0x00010c20abc0(param_1);
  func_0x00010c2551a0(param_7);
  func_0x00010c20ba80(param_1);
  func_0x00010c253de0(param_7);
  func_0x00010c20adc0(param_1);
  func_0x00010bfae160(param_7);
  func_0x00010c19c2c0(param_1);
  func_0x00010bfae340(param_7);
  func_0x00010c19c460(param_1);
  func_0x00010bfae500(param_7);
  func_0x00010c19c600(param_1);
  func_0x00010c264640(param_7);
  func_0x00010c210580(param_1);
  puVar27 = param_7;
  func_0x00010c243340(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_1);
  _objc_release(puVar27);
  func_0x00010bf8e960(param_7);
  func_0x00010c20ae60(param_1);
  func_0x00010bf1c3a0(param_7);
  func_0x00010c20a860(param_1);
  func_0x00010c2441e0(param_7);
  func_0x00010c20b8c0(param_1);
  func_0x00010bf8e980(param_7);
  func_0x00010c20aea0(param_1);
  func_0x00010bf1c3c0(param_7);
  func_0x00010c20a8a0(param_1);
  func_0x00010c244200(param_7);
  func_0x00010c20b900(param_1);
  func_0x00010c255260(param_7);
  func_0x00010c20bb60(param_1);
  func_0x00010c254000(param_7);
  func_0x00010c20af80(param_1);
  puVar27 = param_7;
  func_0x00010c2543a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253f80();
  func_0x00010c20af60(param_1);
  _objc_release(puVar27);
  func_0x00010bfbe140(param_7);
  func_0x00010c20afa0(param_1);
  puVar27 = param_7;
  func_0x00010c2543a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2543e0();
  func_0x00010c20b340(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c2543a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254c00();
  func_0x00010c20b5a0(param_1);
  _objc_release(puVar27);
  func_0x00010c255140(param_7);
  func_0x00010c20ba40(param_1);
  puVar27 = param_7;
  func_0x00010c2543a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a7c0();
  func_0x00010c20aaa0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c2543a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar27;
  func_0x00010bf2a960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aac0(param_1);
  _objc_release(puVar26);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c2543a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar27;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(param_1);
  _objc_release(puVar26);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c0b5c60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c247400(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c247500(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c00(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf8e9a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf1c420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c244220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_1);
  _objc_release(puVar27);
  func_0x00010c281340(param_7);
  func_0x00010c20bb20(param_1);
  puVar27 = param_7;
  func_0x00010c281380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(param_1);
  _objc_release(puVar27);
  func_0x00010bfccb60(param_7);
  func_0x00010c20b040(param_1);
  puVar27 = param_7;
  func_0x00010bfccbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bfbe160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20afc0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c254580();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar27;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar13;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b440(param_1);
  _objc_release(puVar26);
  _objc_release(puVar13);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf61e60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ace0(param_1);
  _objc_release(puVar27);
  func_0x00010bf61f40(param_7);
  func_0x00010c20ac00(param_1);
  func_0x00010bf61d60(param_7);
  func_0x00010c20ac20(param_1);
  func_0x00010bf61d80(param_7);
  func_0x00010c20ac60(param_1);
  func_0x00010bf61f60(param_7);
  func_0x00010c20acc0(param_1);
  func_0x00010bf61da0(param_7);
  func_0x00010c20ac40(param_1);
  func_0x00010bf61dc0(param_7);
  func_0x00010c20ac80(param_1);
  func_0x00010c2538c0(param_7);
  func_0x00010c20a840(param_1);
  puVar27 = param_7;
  func_0x00010c2453c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bfee080(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_1);
  _objc_release(puVar27);
  func_0x00010bfee060(param_7);
  func_0x00010c20b1a0(param_1);
  puVar27 = param_7;
  func_0x00010bf4f980(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(param_1);
  _objc_release(puVar27);
  func_0x00010bf4f960(param_7);
  func_0x00010c20ab80(param_1);
  func_0x00010bfedfe0(param_7);
  func_0x00010c20b1e0(param_1);
  puVar27 = param_7;
  func_0x00010c253a00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aae0(param_1);
  _objc_release(puVar27);
  func_0x00010c1101a0(param_7);
  func_0x00010c1e1760(param_1);
  func_0x00010c1084c0();
  func_0x00010c1e0780(param_1);
  func_0x00010bf219a0();
  func_0x00010c174020(param_1);
  puVar27 = param_7;
  func_0x00010bf219e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(param_1);
  _objc_release(puVar27);
  func_0x00010c29a680();
  func_0x00010c221b20(param_1);
  func_0x00010c2b6aa0();
  func_0x00010c226ba0(param_1);
  func_0x00010c124200();
  func_0x00010c1e9060(param_1);
  func_0x00010bf4ca00();
  func_0x00010c182160(param_1);
  func_0x00010c2a0400();
  func_0x00010c223e80(param_1);
  puVar26 = param_7;
  func_0x00010bf5ad40();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126b5870;
  if (puVar26 == (undefined *)0x0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar26);
    _objc_opt_new(puVar27);
    func_0x00010c07f460(puVar26);
    func_0x00010c1b49e0(puVar27);
    func_0x00010c087180(puVar26);
    func_0x00010c1b70c0(puVar27);
    puVar13 = puVar26;
    func_0x00010c0dfa00(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d03e0(puVar27);
    _objc_release(puVar13);
    puVar13 = puVar26;
    func_0x00010bf07940(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204980(puVar27);
    _objc_release(puVar13);
    puVar13 = puVar26;
    func_0x00010bf0d6a0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2049a0(puVar27);
    _objc_release(puVar13);
    func_0x00010c241940(puVar26);
    func_0x00010c2049e0(puVar27);
    puVar13 = puVar26;
    func_0x00010bf5ada0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204a00(puVar27);
    _objc_release(puVar13);
    func_0x00010bf74620(puVar26);
    func_0x00010c204a40(puVar27);
    func_0x00010bf74660(puVar26);
    func_0x00010c204a60(puVar27);
    func_0x00010bf74740(puVar26);
    func_0x00010c204a80(puVar27);
    func_0x00010c094540(puVar26);
    func_0x00010c204ac0(puVar27);
    puVar13 = puVar26;
    func_0x00010c14f760(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204b20(puVar27);
    _objc_release(puVar13);
    puVar13 = puVar26;
    func_0x00010c241bc0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204b40(puVar27);
    _objc_release(puVar13);
    func_0x00010bf5ad20(puVar26);
    func_0x00010c204b60(puVar27);
    func_0x00010bf5ad80(puVar26);
    func_0x00010c204bc0(puVar27);
    func_0x00010bfd4400(puVar26);
    func_0x00010c204c00(puVar27);
    func_0x00010bfd5180(puVar26);
    func_0x00010c204c20(puVar27);
    func_0x00010bfd84e0(puVar26);
    func_0x00010c204c40(puVar27);
    puVar13 = puVar26;
    func_0x00010c2752e0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217820(puVar27);
    _objc_release(puVar13);
    func_0x00010c0829c0(puVar26);
    func_0x00010c1b58c0(puVar27);
    func_0x00010c073d20(puVar26);
    func_0x00010c1b1500(puVar27);
    puVar13 = puVar26;
    func_0x00010bfe5f00(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9a00(puVar27);
    _objc_release(puVar13);
    puVar13 = puVar26;
    func_0x00010c06afe0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeee0(puVar27);
    _objc_release(puVar13);
    puVar13 = puVar26;
    func_0x00010c23f300(puVar26);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    func_0x00010c2038e0(puVar27);
    _objc_release(puVar13);
  }
  func_0x00010c185860(param_1);
  _objc_release(puVar27);
  _objc_release(puVar26);
  puVar27 = param_7;
  func_0x00010c297de0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c259e40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d2c0(param_1);
  _objc_release(puVar27);
  func_0x00010c253980(param_7);
  func_0x00010c20a940(param_1);
  puVar27 = param_7;
  func_0x00010c2539a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a960(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010bfba2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd00(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c0d3a20(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar27;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(param_1);
  _objc_release(puVar26);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c0d3300(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fe0(param_1);
  _objc_release(puVar27);
  func_0x00010c0d3840(param_7);
  func_0x00010c1ca4e0(param_1);
  puVar27 = param_7;
  func_0x00010bf4f080(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_1);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c0c1aa0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar27;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(param_1);
  _objc_release(puVar26);
  _objc_release(puVar27);
  puVar27 = param_7;
  func_0x00010c0d37c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(param_1);
  _objc_release(puVar27);
  uVar7 = param_6;
  func_0x00010c1197a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05f80();
  func_0x00010c185660(param_1);
  _objc_release(uVar7);
  uVar8 = uVar20;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar27 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar8);
  uVar7 = uVar8;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (uVar7 != 0) {
    uVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(uVar8);
      }
      lVar24 = *(long *)(uVar25 * 8);
      lVar2 = lVar24;
      func_0x00010c08c3a0();
      if ((int)lVar2 == 1) {
        lVar2 = lVar24;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar2;
        func_0x00010bf0b760();
        _objc_release(lVar2);
        if ((int)lVar9 == 5) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar24;
          func_0x00010853cd64();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar24);
          lVar2 = lVar9;
          func_0x00010bf52a60();
          lVar24 = lRam0000000000000000;
          while (lVar2 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar24) {
                _objc_enumerationMutation(lVar9);
              }
              uVar1 = (uint)*(undefined8 *)(lVar19 * 8);
              func_0x00010c0ed200();
              if (uVar1 < 9) {
                func_0x00010befa120(puVar27);
              }
              lVar19 = lVar19 + 1;
            } while (lVar2 != lVar19);
            lVar2 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar7);
    uVar7 = uVar8;
    func_0x00010bf52a60();
  }
  _objc_release(uVar8);
  puVar26 = puVar27;
  func_0x00010bf09f00(puVar27);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar27);
  _objc_release(uVar8);
  func_0x00010c1c4de0(param_1);
  _objc_release(puVar26);
  _objc_release(uVar8);
  func_0x00010c1295a0(param_7);
  func_0x00010c1e9e20(param_1);
  puVar27 = param_7;
  func_0x00010c1297e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar27;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(param_1);
  _objc_release(puVar26);
  _objc_release(puVar27);
  puVar27 = PTR_PTR_1126c4728;
  _objc_opt_new();
  puVar26 = param_7;
  func_0x00010c1297e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar26;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar27);
  _objc_release(puVar13);
  _objc_release(puVar26);
  func_0x00010c1e9e60(param_1);
  puVar26 = param_7;
  func_0x00010c1343c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(param_1);
  _objc_release(puVar26);
  uVar23 = param_14;
  func_0x00010c134560(param_14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb8c0(param_1);
  _objc_release(uVar23);
  uVar23 = param_14;
  func_0x00010c0ca740(param_14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a20(param_1);
  _objc_release(uVar23);
  func_0x00010c134320(param_14);
  func_0x00010c1eb7a0(param_1);
  uVar23 = param_14;
  func_0x00010c0ca800(param_14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6aa0(param_1);
  _objc_release(uVar23);
  uVar23 = param_14;
  func_0x00010c27b4a0(param_14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219e60(param_1);
  _objc_release(uVar23);
  puVar26 = param_7;
  func_0x00010c14f140(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(param_1);
  _objc_release(puVar26);
  func_0x00010c23ef00(param_7);
  func_0x00010c203740(param_1);
  func_0x00010c1a6860(param_1);
  func_0x00010c1e6d60(param_1);
  func_0x00010c1e6d40(param_1);
  puVar26 = PTR_PTR_1126c4730;
  _objc_opt_new(PTR_PTR_1126c4730);
  func_0x00010c0d2c80(param_7);
  func_0x00010c1c9c60(puVar26);
  func_0x00010c2a0a00(param_7);
  func_0x00010c224120(puVar26);
  puVar13 = param_7;
  func_0x00010c0d30c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar26);
  _objc_release(puVar13);
  puVar13 = param_7;
  func_0x00010c2a0ba0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar26);
  _objc_release(puVar13);
  puVar13 = param_7;
  func_0x00010bf160e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar26);
  _objc_release(puVar13);
  func_0x00010c16bee0(param_1);
  func_0x00010c26c920(param_7);
  func_0x00010c213840(param_1);
  puVar13 = param_7;
  FUN_107c97764(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(param_1);
  _objc_release(puVar13);
  func_0x00010c07a080(param_7);
  func_0x00010c1b34a0(param_1);
  puVar13 = param_7;
  func_0x00010bf5ca80(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186300(param_1);
  _objc_release(puVar13);
  if (0 < param_10) {
    func_0x00010c1a3d60(param_1);
  }
  puVar13 = param_7;
  func_0x00010c247520();
  if (puVar13 == (undefined *)0x67) {
    func_0x00010bf4d6a0(param_7);
  }
  func_0x00010c182800(param_1);
  puVar13 = param_7;
  func_0x00010c13a040(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec8a0(param_1);
  _objc_release(puVar13);
  puVar13 = param_7;
  func_0x00010bfea5e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1b60(param_1);
  _objc_release(puVar13);
  puVar13 = param_7;
  func_0x00010c102520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar13 != (undefined *)0x0) {
    puVar13 = PTR_PTR_1126c4740;
    _objc_opt_new();
    puVar14 = param_7;
    func_0x00010c102520(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfda0();
    func_0x00010c1c8cc0(puVar13);
    _objc_release(puVar14);
    puVar14 = param_7;
    func_0x00010c102520();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c29f900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar14);
    if (puVar15 != (undefined *)0x0) {
      puVar14 = param_7;
      func_0x00010c102520();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c29f900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c222600(puVar13);
      _objc_release(puVar15);
      _objc_release(puVar14);
    }
    func_0x00010c1de4e0(param_1);
    _objc_release(puVar13);
  }
  func_0x00010c27c4a0(param_7);
  func_0x00010c21a480(param_1);
  puVar13 = param_7;
  func_0x00010c11e6e0();
  if (puVar13 != (undefined *)0xffffffffffffffff) {
    func_0x00010c11e6e0(param_7);
    func_0x00010c1e6a80(param_1);
  }
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(puVar12);
  _objc_release(puVar21);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(puVar5);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar23 = param_1;
  func_0x00010bfd5c40();
  if ((int)uVar23 == 0) {
    uVar23 = param_1;
    func_0x00010bfd5c60();
    if ((int)uVar23 == 0) {
      uVar23 = 0;
    }
    else {
      uVar16 = param_1;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar17 = uVar16;
      func_0x00010bfd5c40();
      uVar23 = uVar16;
      if ((int)uVar17 == 0) {
        uVar17 = uVar16;
        func_0x00010bf3d0e0();
        if ((int)uVar17 == 0xc) {
          func_0x00010c27f9c0(uVar16);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar23 = 0;
        }
      }
      else {
        func_0x00010bf4e420(uVar16);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar16);
      _objc_release(uVar16);
    }
  }
  else {
    uVar23 = param_1;
    func_0x00010bf4e420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar23);
  return;
}



/* Entry: 107c9d5a0; end: 107c9d733;  */

void FUN_107c9d5a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bfd5c40();
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010bfd5c60();
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar2 = uVar1;
      func_0x00010bfd5c40();
      uVar3 = uVar1;
      if ((int)uVar2 == 0) {
        uVar2 = uVar1;
        func_0x00010bf3d0e0();
        if ((int)uVar2 == 0xc) {
          func_0x00010c27f9c0(uVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        func_0x00010bf4e420(uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar1);
      _objc_release(uVar1);
    }
  }
  else {
    uVar3 = param_1;
    func_0x00010bf4e420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107c9d734; end: 107c9d7ff; -[SCStoriesPostingLogger initWithPreferences:performer:grapheneMetricsEmitter:] */

undefined1 *
FUN_107c9d734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa5f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c9d800; end: 107c9d91f; -[SCStoriesPostingLogger checkStoryPostBeenLoggedForClientId:completion:] */

void FUN_107c9d800(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c9d920; end: 107c9d953;  */

void FUN_107c9d920(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c9d954; end: 107c9daa3; -[SCStoriesPostingLogger _checkStoryClientIdInPreferences:completion:] */

void FUN_107c9d954(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = *(undefined **)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010bf4b900();
  if ((int)puVar2 == 0) {
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    }
    else {
      func_0x00010c0d3c80(puVar3);
    }
    func_0x00010befa120();
    puVar2 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar2);
    func_0x00010c0b1160(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(param_4 + 0x10))(param_4,0);
    _objc_release(param_4);
  }
  else {
    func_0x00010c0b1160(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(param_4 + 0x10))(param_4,1);
    puVar3 = param_4;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c9daa4; end: 107c9db87; -[SCStoriesPostingLogger clearStoryClientIds:] */

void FUN_107c9daa4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107c9db88; end: 107c9dbbb;  */

void FUN_107c9db88(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c9dbbc; end: 107c9dcab; -[SCStoriesPostingLogger _clearStoryClientIdsFromPreferences:] */

void FUN_107c9dbbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = uVar1;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    uVar2 = uVar4;
    func_0x00010c072060();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar4;
      func_0x00010bf51e00(uVar4);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      _objc_release(uVar2);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c9dcac; end: 107c9dce7; -[SCStoriesPostingLogger .cxx_destruct] */

void FUN_107c9dcac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c9dce8; end: 107c9dd5b; -[SCStoriesTopicsBlizzardLogger initWithUserTrackedLogger:] */

undefined1 * FUN_107c9dce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa600;
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



/* Entry: 107c9dd5c; end: 107c9df2b; -[SCStoriesTopicsBlizzardLogger logTopicPageOpenWithTopic:sessionId:sourcePage:sourcePageSessionId:pageEntryType:storyType:extraParams:] */

void FUN_107c9dd5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d7528;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_1;
  func_0x00010be6f320(param_1,param_2,param_3,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1d8300(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d7490;
  _objc_alloc_init(PTR_PTR_1126d7490);
  func_0x00010c196b80();
  func_0x00010c206f20(puVar3,param_2,param_5);
  func_0x00010c206f80(puVar3,param_2,param_6);
  func_0x00010c1d80c0(puVar1,param_2,puVar3);
  if (param_8 - 3U < 2) {
    puVar4 = PTR_PTR_1126d7530;
    _objc_opt_new(PTR_PTR_1126d7530);
    func_0x00010c1833c0();
    puVar5 = PTR_PTR_1126d7538;
    func_0x00010c086340(PTR_PTR_1126d7538);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_9;
    func_0x00010c0e00e0(param_9,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1c2f20(puVar4,param_2,uVar6);
    func_0x00010c1ca280(puVar1,param_2,puVar4);
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107c9df2c; end: 107c9e123; -[SCStoriesTopicsBlizzardLogger logTopicPageViewWithTopic:sessionId:sourcePageSessionId:viewTimeSec:pageExitType:storyType:numSnaps:extraParams:] */

void FUN_107c9df2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126d7540;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  lVar2 = param_2;
  func_0x00010be6f320(param_2,param_3,param_4,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c1d8300(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d74a0;
  _objc_alloc_init(PTR_PTR_1126d74a0);
  func_0x00010c198620();
  func_0x00010c222d40(param_1,puVar3);
  func_0x00010c1d8120(puVar1,param_3,puVar3);
  if (param_9 != 0) {
    lVar2 = param_9;
    func_0x00010c0b4ca0(param_9);
    func_0x00010c1cf3c0(puVar1,param_3,lVar2);
  }
  if (param_8 - 3U < 2) {
    puVar4 = PTR_PTR_1126d7530;
    _objc_opt_new(PTR_PTR_1126d7530);
    func_0x00010c1833c0();
    puVar5 = PTR_PTR_1126d7538;
    func_0x00010c086340(PTR_PTR_1126d7538);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_10;
    func_0x00010c0e00e0(param_10,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1c2f20(puVar4,param_3,uVar6);
    func_0x00010c1ca280(puVar1,param_3,puVar4);
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107c9e124; end: 107c9e1e7; -[SCStoriesTopicsBlizzardLogger logFeedPageViewWithTopic:sessionId:hasJoinTheChatButton:hasSoundShareButton:] */

void FUN_107c9e124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7068;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2177e0();
  _objc_release(param_3);
  func_0x00010c1d8620(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a61a0(puVar1,param_2,param_5);
  func_0x00010c1a6e00(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9e1e8; end: 107c9e4c7; -[SCStoriesTopicsBlizzardLogger logTopicItemActionForTopic:sessionId:sourcePageSessionId:itemLogParameters:actionType:storyType:numSnaps:extraParams:] */

void FUN_107c9e1e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126d7548;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_1;
  func_0x00010be6f320(param_1,param_2,param_3,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1d8300(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d66d0;
  _objc_alloc_init(PTR_PTR_1126d66d0);
  uVar7 = param_6;
  func_0x00010c156900(param_6);
  func_0x00010c1f9620(puVar3,param_2,uVar7);
  uVar7 = param_6;
  func_0x00010c156400(param_6);
  func_0x00010c1f95a0(puVar3,param_2,uVar7);
  func_0x00010c1d8420(puVar3,param_2,0);
  uVar7 = param_6;
  func_0x00010c0f1f00(param_6);
  func_0x00010c1d8860(puVar3,param_2,uVar7);
  func_0x00010c1d85e0(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126d66c8;
  _objc_alloc_init(PTR_PTR_1126d66c8);
  func_0x00010c1b6340();
  uVar7 = param_6;
  func_0x00010c0844e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar4,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = param_6;
  func_0x00010c084960(param_6);
  func_0x00010c1b61a0(puVar4,param_2,uVar7);
  func_0x00010c1d8360(puVar1,param_2,puVar4);
  uVar7 = param_6;
  func_0x00010c0ed8c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1b62c0(puVar1,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c161fe0(puVar1,param_2,param_7);
  func_0x00010c1618e0(puVar1,param_2,0);
  if (param_9 != 0) {
    lVar2 = param_9;
    func_0x00010c0b4ca0(param_9);
    func_0x00010c1cf3c0(puVar1,param_2,lVar2);
  }
  if (param_8 - 3U < 2) {
    puVar5 = PTR_PTR_1126d7530;
    _objc_opt_new(PTR_PTR_1126d7530);
    func_0x00010c1833c0();
    puVar6 = PTR_PTR_1126d7538;
    func_0x00010c086340(PTR_PTR_1126d7538);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_10;
    func_0x00010c0e00e0(param_10,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c1c2f20(puVar5,param_2,uVar7);
    func_0x00010c1ca280(puVar1,param_2,puVar5);
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c9e4c8; end: 107c9e6b7; -[SCStoriesTopicsBlizzardLogger logTopicItemImpressionForTopic:sessionId:itemLogParameters:impressionType:storyType:] */

void FUN_107c9e4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d7550;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_1;
  func_0x00010be6f320(param_1,param_2,param_3,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1d8300(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d66d0;
  _objc_alloc_init(PTR_PTR_1126d66d0);
  uVar5 = param_5;
  func_0x00010c156900(param_5);
  func_0x00010c1f9620(puVar3,param_2,uVar5);
  uVar5 = param_5;
  func_0x00010c156400(param_5);
  func_0x00010c1f95a0(puVar3,param_2,uVar5);
  func_0x00010c1d8420(puVar3,param_2,0);
  uVar5 = param_5;
  func_0x00010c0f1f00(param_5);
  func_0x00010c1d8860(puVar3,param_2,uVar5);
  func_0x00010c1d85e0(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126d66c8;
  _objc_alloc_init(PTR_PTR_1126d66c8);
  func_0x00010c1b6340();
  uVar5 = param_5;
  func_0x00010c0844e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_5;
  func_0x00010c084960(param_5);
  func_0x00010c1b61a0(puVar4,param_2,uVar5);
  func_0x00010c1d8360(puVar1,param_2,puVar4);
  uVar5 = param_5;
  func_0x00010c0ed8c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1b62c0(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010c1ab4e0(puVar1,param_2,param_6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9e6b8; end: 107c9e793; -[SCStoriesTopicsBlizzardLogger logJoinTopicChatTappedWithTopic:sessionId:] */

void FUN_107c9e6b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce758;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c161620();
  func_0x00010c1a2e40(puVar1,param_2,5);
  func_0x00010c1d8800(puVar1,param_2,0x60);
  func_0x00010c1d8820(puVar1,param_2,&PTR____CFConstantStringClassReference_110e63c38);
  func_0x00010c2177e0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1d8620(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c21a480(puVar1,param_2,0x1c);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9e794; end: 107c9e7a3; -[SCStoriesTopicsBlizzardLogger logSoundFavoriteAction:trackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:] */

void FUN_107c9e794(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3c;
  if (param_3 == 0) {
    uVar1 = 0x3d;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be58d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSoundTopicItemActionWithActi_112573ce8,uVar1);
  return;
}



/* Entry: 107c9e7a4; end: 107c9e7df; -[SCStoriesTopicsBlizzardLogger logTrendingSoundsButtonTapWithTrackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:] */

void FUN_107c9e7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x00010be58d20(param_1,param_2,0xd2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 107c9e7e0; end: 107c9e81b; -[SCStoriesTopicsBlizzardLogger logShareSoundTapWithTrackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:] */

void FUN_107c9e7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x00010be58d20(param_1,param_2,0xd3,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 107c9e81c; end: 107c9e857; -[SCStoriesTopicsBlizzardLogger logShareSoundSubmitWithTrackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:] */

void FUN_107c9e81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x00010be58d20(param_1,param_2,0xd4,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 107c9e858; end: 107c9ea4b; -[SCStoriesTopicsBlizzardLogger _logSoundTopicItemActionWithActionType:trackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:] */

void FUN_107c9e858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d7548;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1618e0();
  func_0x00010c161fe0(puVar1,param_2,param_3);
  puVar2 = PTR_PTR_1126d66c8;
  _objc_alloc_init(PTR_PTR_1126d66c8);
  func_0x00010c1b6340();
  lVar3 = param_1;
  func_0x00010be6f320(param_1,param_2,param_4,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c1d8360(puVar1,param_2,puVar2);
  func_0x00010c1d8300(puVar1,param_2,lVar3);
  if (param_8 != 0) {
    lVar4 = param_8;
    func_0x00010c0b4ca0(param_8);
    func_0x00010c1cf3c0(puVar1,param_2,lVar4);
  }
  if (param_7 - 3U < 2) {
    puVar5 = PTR_PTR_1126d7530;
    _objc_opt_new(PTR_PTR_1126d7530);
    func_0x00010c1833c0();
    puVar6 = PTR_PTR_1126d7538;
    func_0x00010c086340(PTR_PTR_1126d7538);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_9;
    func_0x00010c0e00e0(param_9,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c1c2f20(puVar5,param_2,uVar7);
    func_0x00010c1ca280(puVar1,param_2,puVar5);
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107c9ea4c; end: 107c9eaf3; -[SCStoriesTopicsBlizzardLogger _pageInstanceInfoWithTopic:sessionId:storyType:] */

void FUN_107c9ea4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8408;
  if (param_5 < 9) {
    puVar2 = (&PTR_PTR_110a01bf0)[param_5];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d8800();
  func_0x00010c1d8820(puVar1,param_2,puVar2);
  func_0x00010c1d8220(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1d8620(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c9eaf4; end: 107c9eaff; -[SCStoriesTopicsBlizzardLogger .cxx_destruct] */

void FUN_107c9eaf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c9eb00; end: 107c9ec73;  */

void FUN_107c9eb00(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01c38;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01c38,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a01c88;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01c88,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a01cd8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01cd8,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a01d28;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d28,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110a01d78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d78,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar3 = &UNK_110a01dc8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01dc8,&uStack_300,puVar4);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar1 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_380,puVar6);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_400,(long)puVar4 * 10);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_480;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar1 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_480,puVar6);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_500;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_4e0,puVar2);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      puVar3 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_500,puVar4);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_580;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_560,puVar1);
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
      puVar1 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_580,(long)puVar6 * 10);
      puStack_568 = (undefined1 *)&uStack_580;
      func_0x00010007e5dc(&puStack_568);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_549 < '\0') {
        __ZdlPv(auStack_560[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_600;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_5e0,puVar2);
      uStack_600 = 0;
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      func_0x00010007e1e8(&uStack_600,auStack_5e0,&lStack_5c8,1);
      puVar3 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_600,puVar4);
      puStack_5e8 = (undefined1 *)&uStack_600;
      func_0x00010007e5dc(&puStack_5e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_5c9 < '\0') {
        __ZdlPv(auStack_5e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_680;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_660,puVar1);
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      func_0x00010007e1e8(&uStack_680,auStack_660,&lStack_648,1);
      puVar1 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_680,(long)puVar6 * 10);
      puStack_668 = (undefined1 *)&uStack_680;
      func_0x00010007e5dc(&puStack_668);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_649 < '\0') {
        __ZdlPv(auStack_660[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_6e0,puVar2);
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_6c8,1);
      puVar3 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_700,puVar4);
      puStack_6e8 = (undefined1 *)&uStack_700;
      func_0x00010007e5dc(&puStack_6e8);
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107c9ec74; end: 107c9ede7;  */

void FUN_107c9ec74(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01c88;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01c88,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a01cd8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01cd8,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a01d28;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d28,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a01d78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d78,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110a01dc8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01dc8,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar3 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_300,puVar4);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar1 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_380,(long)puVar6 * 10);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_400,puVar4);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_480;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar1 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_480,puVar6);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_500;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_4e0,puVar2);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      puVar3 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_500,(long)puVar4 * 10);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_580;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_560,puVar1);
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
      puVar1 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_580,puVar6);
      puStack_568 = (undefined1 *)&uStack_580;
      func_0x00010007e5dc(&puStack_568);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_549 < '\0') {
        __ZdlPv(auStack_560[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_600;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_5e0,puVar2);
      uStack_600 = 0;
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      func_0x00010007e1e8(&uStack_600,auStack_5e0,&lStack_5c8,1);
      puVar3 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_600,(long)puVar4 * 10);
      puStack_5e8 = (undefined1 *)&uStack_600;
      func_0x00010007e5dc(&puStack_5e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_5c9 < '\0') {
        __ZdlPv(auStack_5e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_660,puVar1);
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      func_0x00010007e1e8(&uStack_680,auStack_660,&lStack_648,1);
      puVar1 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_680,puVar6);
      puStack_668 = (undefined1 *)&uStack_680;
      func_0x00010007e5dc(&puStack_668);
      if (cStack_649 < '\0') {
        __ZdlPv(auStack_660[0]);
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9ede8; end: 107c9ef5b;  */

void FUN_107c9ede8(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01cd8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01cd8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a01d28;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d28,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a01d78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d78,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a01dc8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01dc8,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_2e0,puVar2);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar3 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_300,(long)puVar4 * 10);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar1 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_380,puVar6);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_400,puVar4);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_480;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar1 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_480,(long)puVar6 * 10);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_500;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_4e0,puVar2);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      puVar3 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_500,puVar4);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_580;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_560,puVar1);
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
      puVar1 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_580,(long)puVar6 * 10);
      puStack_568 = (undefined1 *)&uStack_580;
      func_0x00010007e5dc(&puStack_568);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_549 < '\0') {
        __ZdlPv(auStack_560[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_5e0,puVar2);
      uStack_600 = 0;
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      func_0x00010007e1e8(&uStack_600,auStack_5e0,&lStack_5c8,1);
      puVar3 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_600,puVar4);
      puStack_5e8 = (undefined1 *)&uStack_600;
      func_0x00010007e5dc(&puStack_5e8);
      if (cStack_5c9 < '\0') {
        __ZdlPv(auStack_5e0[0]);
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107c9ef5c; end: 107c9f0cf;  */

void FUN_107c9ef5c(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01d28;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d28,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a01d78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d78,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a01dc8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01dc8,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_280,(long)puVar6 * 10);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_2e0,puVar2);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar3 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_300,puVar4);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar1 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_380,puVar6);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_400,(long)puVar4 * 10);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_480;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar1 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_480,puVar6);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_500;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_4e0,puVar2);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      puVar3 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_500,(long)puVar4 * 10);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_560,puVar1);
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
      puVar1 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_580,puVar6);
      puStack_568 = (undefined1 *)&uStack_580;
      func_0x00010007e5dc(&puStack_568);
      if (cStack_549 < '\0') {
        __ZdlPv(auStack_560[0]);
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9f0d0; end: 107c9f243;  */

void FUN_107c9f0d0(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01d78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01d78,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a01dc8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01dc8,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar3 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_200,(long)puVar4 * 10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_280,puVar6);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_2e0,puVar2);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar3 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_300,puVar4);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar1 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_380,(long)puVar6 * 10);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_400,puVar4);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_480;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar1 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_480,(long)puVar6 * 10);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_4e0,puVar2);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      puVar3 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_500,puVar4);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107c9f244; end: 107c9f3b7;  */

void FUN_107c9f244(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01dc8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01dc8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f44f7d9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_160,puVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar1 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_180,(long)puVar6 * 10);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar3 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_280,puVar6);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_2e0,puVar2);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar3 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_300,(long)puVar4 * 10);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar1 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_380,puVar6);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_400;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_400,(long)puVar4 * 10);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar1 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_480,puVar6);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c9f3b8; end: 107c9f52b;  */

void FUN_107c9f3b8(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a01e18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e18,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01e68;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_e0,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar3 = &UNK_110a01e68;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01e68,&uStack_100,(long)puVar4 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01eb8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_160,puVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar1 = &UNK_110a01eb8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01eb8,&uStack_180,puVar6);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01f08;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar3 = &UNK_110a01f08;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f08,&uStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01f58;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_110a01f58;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01f58,&uStack_280,(long)puVar6 * 10);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a01fa8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_2e0,puVar2);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar3 = &UNK_110a01fa8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01fa8,&uStack_300,puVar4);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_380;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a01ff8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar1 = &UNK_110a01ff8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a01ff8,&uStack_380,(long)puVar6 * 10);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a02048;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02048);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_3e0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar3 = &UNK_110a02048;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02048,&uStack_400,puVar4);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107c9feb0(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107c9f52c; end: 107c9f6c3;  */

void FUN_107c9f52c(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a01e68;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a01e68;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01e68,&uStack_80,(long)param_4 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01eb8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a01eb8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01eb8,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a01f08;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a01f08;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f08,&uStack_180,puVar7);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01f58;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar4 = &UNK_110a01f58;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f58,&uStack_200,(long)puVar5 * 10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a01fa8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_260,puVar2);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar2 = &UNK_110a01fa8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01fa8,&uStack_280,puVar7);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar6 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01ff8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_2e0,puVar3);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar4 = &UNK_110a01ff8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01ff8,&uStack_300,(long)puVar5 * 10);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_360,puVar2);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar2 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_380,puVar7);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107c9f6c4; end: 107c9f857;  */

void FUN_107c9f6c4(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a01eb8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a01eb8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01eb8,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01f08;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a01f08;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f08,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a01f58;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a01f58;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f58,&uStack_180,(long)puVar7 * 10);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01fa8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar4 = &UNK_110a01fa8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01fa8,&uStack_200,puVar5);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a01ff8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_260,puVar2);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar2 = &UNK_110a01ff8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01ff8,&uStack_280,(long)puVar7 * 10);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_2e0,puVar3);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar4 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_300,puVar5);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107c9f858; end: 107c9f9eb;  */

void FUN_107c9f858(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a01f08;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a01f08;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f08,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01f58;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a01f58;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f58,&uStack_100,(long)puVar5 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a01fa8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a01fa8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01fa8,&uStack_180,puVar7);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01ff8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar4 = &UNK_110a01ff8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01ff8,&uStack_200,(long)puVar5 * 10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_260,puVar2);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar2 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_280,puVar7);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107c9f9ec; end: 107c9fb83;  */

void FUN_107c9f9ec(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a01f58;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a01f58;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01f58,&uStack_80,(long)param_4 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01fa8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a01fa8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01fa8,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a01ff8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a01ff8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01ff8,&uStack_180,(long)puVar7 * 10);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar4 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_200,puVar5);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107c9fb84; end: 107c9fd17;  */

void FUN_107c9fb84(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a01fa8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a01fa8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01fa8,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a01ff8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a01ff8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01ff8,&uStack_100,(long)puVar5 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_180,puVar7);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107c9fd18; end: 107c9feaf;  */

void FUN_107c9fd18(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a01ff8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a01ff8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a01ff8,&uStack_80,(long)param_4 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107c9feb0; end: 107ca0043;  */

void FUN_107c9feb0(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a02048;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02048);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a02048;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02048,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_107c9feb0(puVar3,puVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ca0044; end: 107ca00af;  */

void FUN_107ca0044(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_107c9feb0(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ca00b0; end: 107ca0247;  */

void FUN_107ca00b0(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a02098;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a02098;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02098,&uStack_80,(long)param_4 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f44f7d9;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110a020e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a020e8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a02138;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a02138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02138,&uStack_180,puVar7);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02188;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar4 = &UNK_110a02188;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02188,&uStack_200,(long)puVar5 * 10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a021d8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_260,puVar2);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar2 = &UNK_110a021d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a021d8,&uStack_280,(long)puVar7 * 10);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02228;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02228);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_2e0,puVar3);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      puVar4 = &UNK_110a02228;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02228,&uStack_300,puVar5);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    FUN_107ca0880(puVar3,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ca0248; end: 107ca03bb;  */

void FUN_107ca0248(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a020e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a020e8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a02138;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_e0,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar3 = &UNK_110a02138;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02138,&uStack_100,puVar4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a02188;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_160,puVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar1 = &UNK_110a02188;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02188,&uStack_180,(long)puVar6 * 10);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a021d8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar3 = &UNK_110a021d8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a021d8,&uStack_200,(long)puVar4 * 10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar6 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a02228;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110a02228);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f44f7d9;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_110a02228;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a02228,&uStack_280,puVar6);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107ca0880(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ca03bc; end: 107ca054f;  */

void FUN_107ca03bc(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a02138;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a02138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02138,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02188;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a02188;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02188,&uStack_100,(long)puVar5 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a021d8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a021d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a021d8,&uStack_180,(long)puVar7 * 10);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02228;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02228);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar4 = &UNK_110a02228;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02228,&uStack_200,puVar5);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    FUN_107ca0880(puVar3,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ca0550; end: 107ca06e7;  */

void FUN_107ca0550(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a02188;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a02188;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02188,&uStack_80,(long)param_4 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a021d8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a021d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a021d8,&uStack_100,(long)puVar5 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_110a02228;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02228);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_160,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      puVar2 = &UNK_110a02228;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02228,&uStack_180,puVar7);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_107ca0880(puVar3,puVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ca06e8; end: 107ca087f;  */

void FUN_107ca06e8(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a021d8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a021d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a021d8,&uStack_80,(long)param_4 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a02228;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02228);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a02228;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02228,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    FUN_107ca0880(puVar3,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ca0880; end: 107ca0a13;  */

void FUN_107ca0880(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110a02228;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a02228);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a02228;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a02228,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_107ca0880(puVar3,puVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ca0a14; end: 107ca0a7f;  */

void FUN_107ca0a14(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_107ca0880(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ca0a80; end: 107ca0bf3;  */

void FUN_107ca0a80(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a02278;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a02278,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107ca0a80(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ca0bf4; end: 107ca0c5f;  */

void FUN_107ca0bf4(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_107ca0a80(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ca0c60; end: 107ca0dd3;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca0c60(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 *puStack_818;
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  long *plStack_7e0;
  long **pplStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined8 ***pppuStack_7c0;
  code *pcStack_7b8;
  long alStack_7b0 [3];
  undefined1 *puStack_798;
  undefined8 auStack_790 [2];
  char cStack_779;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  long *plStack_760;
  long *plStack_758;
  long *plStack_750;
  long **pplStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  long alStack_730 [3];
  long *plStack_718;
  long **applStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  long alStack_6c0 [3];
  undefined1 *puStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  long *plStack_670;
  long *plStack_668;
  long *plStack_660;
  long *plStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  long alStack_640 [3];
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  long alStack_5c0 [3];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  long *plStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [3];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a022c8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = param_4;
    }
  }
  plVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_107ca0dd4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar11);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar11 = (long *)&UNK_110a02318;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_107ca0f48;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a02368;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  pcStack_188 = FUN_107ca10bc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_1e0,plVar11);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar11 = (long *)&UNK_110a023b8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_280;
  pcStack_208 = FUN_107ca1230;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_260,plVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    plVar13 = (long *)&UNK_110a02408;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_300;
  pcStack_288 = FUN_107ca13a4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_2e0,plVar11);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    plVar11 = (long *)&UNK_110a02458;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_308 = FUN_107ca1518;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_360,plVar13);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    plVar13 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_400;
  pcStack_388 = FUN_107ca168c;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_3e0,plVar11);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    plVar11 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_480;
  pcStack_408 = FUN_107ca1800;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_460,plVar13);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
    plVar13 = (long *)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_540;
  pcStack_488 = FUN_107ca1974;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_490 = &pppuStack_410;
  _objc_retain(plVar13);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_520,plVar11);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_508,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_4f0,puVar1);
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_4d8,3);
    plVar11 = (long *)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_540,param_6);
    puStack_528 = (undefined1 *)&uStack_540;
    func_0x00010007e5dc(&puStack_528);
    lVar15 = 0;
    puVar1 = (undefined *)puVar8;
    do {
      if ((&cStack_4d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_540;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar7);
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar8 = auStack_520;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(plVar13);
  plVar2 = plVar12;
  __Unwind_Resume();
  plVar6 = alStack_5c0;
  pcStack_548 = FUN_107ca1c34;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar11;
  puVar9 = puVar1;
  puStack_580 = unaff_x24;
  puStack_578 = puVar8;
  plStack_570 = plVar12;
  puStack_568 = param_5;
  puStack_560 = puVar7;
  plStack_558 = plVar13;
  pppuStack_550 = &pppuStack_490;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar13 = (long *)plVar2[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar8 = auStack_5a0;
    func_0x00010002b838(auStack_5a0,plVar12);
    alStack_5c0[0] = 0;
    alStack_5c0[1] = 0;
    alStack_5c0[2] = 0;
    func_0x00010007e1e8(alStack_5c0,auStack_5a0,&lStack_588,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a025e8,alStack_5c0,puVar1);
    puStack_5a8 = (undefined1 *)alStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    puVar9 = (undefined *)plVar6;
    plVar12 = alStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar9 = (undefined *)plVar6;
      plVar12 = alStack_5c0;
    }
  }
  plVar2 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_640;
  pcStack_5c8 = FUN_107ca1da8;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar7 = puVar9;
  puStack_600 = unaff_x24;
  puStack_5f8 = puVar8;
  plStack_5f0 = plVar12;
  plStack_5e8 = plVar13;
  plStack_5e0 = plVar2;
  plStack_5d8 = plVar11;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar8 = auStack_620;
    func_0x00010002b838(auStack_620,plVar12);
    alStack_640[0] = 0;
    alStack_640[1] = 0;
    alStack_640[2] = 0;
    func_0x00010007e1e8(alStack_640,auStack_620,&lStack_608,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_640,puVar9);
    puStack_628 = (undefined1 *)alStack_640;
    func_0x00010007e5dc(&puStack_628);
    puVar7 = (undefined *)plVar10;
    plVar12 = alStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      puVar7 = (undefined *)plVar10;
      plVar12 = alStack_640;
    }
  }
  plVar11 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
    ___stack_chk_fail();
    _objc_release(plVar4);
    _objc_release(plVar4);
    plVar3 = plVar11;
    __Unwind_Resume();
    plVar10 = alStack_6c0;
    pcStack_648 = FUN_107ca1f1c;
    lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = plVar6;
    puVar1 = puVar7;
    puStack_680 = unaff_x24;
    puStack_678 = puVar8;
    plStack_670 = plVar12;
    plStack_668 = plVar13;
    plStack_660 = plVar11;
    plStack_658 = plVar4;
    pppuStack_650 = &pppuStack_5d0;
    _objc_retain(plVar6);
    plVar13 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar13 = (long *)plVar3[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar12 = plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      puVar8 = auStack_6a0;
      func_0x00010002b838(auStack_6a0,plVar12);
      alStack_6c0[0] = 0;
      alStack_6c0[1] = 0;
      alStack_6c0[2] = 0;
      func_0x00010007e1e8(alStack_6c0,auStack_6a0,&lStack_688,1);
      plVar2 = (long *)&UNK_110a02688;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_6c0,puVar7);
      puStack_6a8 = (undefined1 *)alStack_6c0;
      func_0x00010007e5dc(&puStack_6a8);
      puVar1 = (undefined *)plVar10;
      plVar12 = alStack_6c0;
      if (cStack_689 < '\0') {
        __ZdlPv(auStack_6a0[0]);
        puVar1 = (undefined *)plVar10;
        plVar12 = alStack_6c0;
      }
    }
    plVar11 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar4 = plVar11;
    __Unwind_Resume();
    plVar3 = alStack_730;
    pcStack_6c8 = FUN_107ca2090;
    lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar5 = (long **)0x0;
    plStack_6f0 = plVar12;
    plStack_6e8 = plVar13;
    plStack_6e0 = plVar11;
    plStack_6d8 = plVar6;
    pppuStack_6d0 = &pppuStack_650;
    if (plVar4 != (long *)0x0) {
      plVar11 = (long *)plVar4[1];
      puVar7 = &UNK_10f44f9bb;
      if ((int)plVar2 == 0) {
        puVar7 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_710,puVar7);
      alStack_730[0] = 0;
      alStack_730[1] = 0;
      alStack_730[2] = 0;
      func_0x00010007e1e8(alStack_730,applStack_710,&lStack_6f8,1);
      plVar2 = (long *)&UNK_110a026d8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a026d8,alStack_730,puVar1);
      pplVar5 = &plStack_718;
      plStack_718 = alStack_730;
      func_0x00010007e5dc();
      puVar1 = (undefined *)plVar3;
      plVar13 = alStack_730;
      if (cStack_6f9 < '\0') {
        pplVar5 = applStack_710[0];
        __ZdlPv();
        puVar1 = (undefined *)plVar3;
        plVar13 = alStack_730;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6f8) {
      return;
    }
    ___stack_chk_fail();
    plStack_718 = plVar13;
    func_0x00010007e5dc(&plStack_718);
    if (cStack_6f9 < '\0') {
      __ZdlPv(applStack_710[0]);
    }
    pplVar14 = pplVar5;
    __Unwind_Resume();
    plVar6 = alStack_7b0;
    pcStack_738 = FUN_107ca21a8;
    lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar2;
    puVar7 = puVar1;
    puStack_770 = unaff_x24;
    puStack_768 = puVar8;
    plStack_760 = plVar12;
    plStack_758 = plVar13;
    plStack_750 = plVar11;
    pplStack_748 = pplVar5;
    pppuStack_740 = &pppuStack_6d0;
    _objc_retain(plVar2);
    if (pplVar14 != (long **)0x0) {
      plVar13 = pplVar14[1];
      plVar4 = (long *)&UNK_110a02728;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        pplVar14 = (long **)pplVar14[1];
        _objc_retain(plVar2);
        if (plVar2 == (long *)0x0) {
          plVar13 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar13 = plVar2;
          _objc_retainAutorelease(plVar2);
          func_0x00010bdc3520();
        }
        _objc_release(plVar2);
        puVar8 = auStack_790;
        func_0x00010002b838(auStack_790,plVar13);
        alStack_7b0[0] = 0;
        alStack_7b0[1] = 0;
        alStack_7b0[2] = 0;
        func_0x00010007e1e8(alStack_7b0,auStack_790,&lStack_778,1);
        plVar4 = (long *)&UNK_110a02728;
        (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_7b0,(long)puVar1 * 10);
        puStack_798 = (undefined1 *)alStack_7b0;
        func_0x00010007e5dc(&puStack_798);
        puVar7 = (undefined *)plVar6;
        plVar12 = alStack_7b0;
        if (cStack_779 < '\0') {
          __ZdlPv(auStack_790[0]);
          puVar7 = (undefined *)plVar6;
          plVar12 = alStack_7b0;
        }
      }
    }
    plVar13 = plVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_778) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar2);
    _objc_release(plVar2);
    plVar6 = plVar13;
    __Unwind_Resume();
    pcStack_7b8 = FUN_107ca2340;
    lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar4;
    puStack_7f0 = unaff_x24;
    puStack_7e8 = puVar8;
    plStack_7e0 = plVar12;
    pplStack_7d8 = pplVar14;
    plStack_7d0 = plVar13;
    plStack_7c8 = plVar2;
    pppuStack_7c0 = &pppuStack_740;
    _objc_retain(plVar4);
    if (plVar6 != (long *)0x0) {
      plVar13 = (long *)plVar6[1];
      plVar11 = (long *)&UNK_110a02778;
      (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
      if ((int)plVar13 != 0) {
        plVar13 = (long *)plVar6[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          plVar12 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar12 = plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_810,plVar12);
        uStack_830 = 0;
        uStack_828 = 0;
        uStack_820 = 0;
        func_0x00010007e1e8(&uStack_830,auStack_810,&lStack_7f8,1);
        plVar11 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_830,puVar7);
        puStack_818 = (undefined1 *)&uStack_830;
        func_0x00010007e5dc(&puStack_818);
        if (cStack_7f9 < '\0') {
          __ZdlPv(auStack_810[0]);
        }
      }
    }
    plVar13 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7f8) {
      ___stack_chk_fail();
      _objc_release(plVar4);
      _objc_release(plVar4);
      __Unwind_Resume();
      _objc_retain(plVar11);
      if (plVar13 != (long *)0x0) {
        FUN_107ca2340(plVar13,plVar11,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar11);
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca0dd4; end: 107ca0f47;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca0dd4(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 *puStack_798;
  undefined8 auStack_790 [2];
  char cStack_779;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  long *plStack_760;
  long **pplStack_758;
  long *plStack_750;
  long *plStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  long alStack_730 [3];
  undefined1 *puStack_718;
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  long *plStack_6d0;
  long **pplStack_6c8;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  long alStack_6b0 [3];
  long *plStack_698;
  long **applStack_690 [2];
  char cStack_679;
  long lStack_678;
  long *plStack_670;
  long *plStack_668;
  long *plStack_660;
  long *plStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  long alStack_640 [3];
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  long alStack_5c0 [3];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  long *plStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  long alStack_540 [3];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  long *plStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [3];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar1 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a02318;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar1 = (undefined *)puVar7;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = param_4;
    }
  }
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_107ca0f48;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar12);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar12 = (long *)&UNK_110a02368;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_107ca10bc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar12);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a023b8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar1 = (undefined *)puVar7;
    param_5 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = puVar8;
    }
  }
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  puVar7 = &uStack_200;
  pcStack_188 = FUN_107ca1230;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_1e0,plVar12);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar12 = (long *)&UNK_110a02408;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_280;
  pcStack_208 = FUN_107ca13a4;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar12);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_260,plVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    plVar13 = (long *)&UNK_110a02458;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar1 = (undefined *)puVar7;
    param_5 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = puVar8;
    }
  }
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  puVar7 = &uStack_300;
  pcStack_288 = FUN_107ca1518;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_2e0,plVar12);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    plVar12 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_380;
  pcStack_308 = FUN_107ca168c;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(plVar12);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_360,plVar13);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    plVar13 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar1 = (undefined *)puVar7;
    param_5 = puVar8;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = puVar8;
    }
  }
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  puVar7 = &uStack_400;
  pcStack_388 = FUN_107ca1800;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_3e0,plVar12);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    plVar12 = (long *)&UNK_110a02548;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_4c0;
  pcStack_408 = FUN_107ca1974;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(plVar12);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_4a0,plVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_488,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_470,puVar1);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_458,3);
    plVar13 = (long *)&UNK_110a02598;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a02598,&uStack_4c0,param_6);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    lVar15 = 0;
    puVar1 = (undefined *)puVar7;
    do {
      if ((&cStack_459)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_4c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar8);
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar7 = auStack_4a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar7);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(plVar12);
  plVar2 = plVar11;
  __Unwind_Resume();
  plVar6 = alStack_540;
  pcStack_4c8 = FUN_107ca1c34;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puVar9 = puVar1;
  puStack_500 = unaff_x24;
  puStack_4f8 = puVar7;
  plStack_4f0 = plVar11;
  puStack_4e8 = param_5;
  puStack_4e0 = puVar8;
  plStack_4d8 = plVar12;
  pppuStack_4d0 = &pppuStack_410;
  _objc_retain(plVar13);
  plVar12 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar12 = (long *)plVar2[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    puVar7 = auStack_520;
    func_0x00010002b838(auStack_520,plVar11);
    alStack_540[0] = 0;
    alStack_540[1] = 0;
    alStack_540[2] = 0;
    func_0x00010007e1e8(alStack_540,auStack_520,&lStack_508,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,alStack_540,puVar1);
    puStack_528 = (undefined1 *)alStack_540;
    func_0x00010007e5dc(&puStack_528);
    puVar9 = (undefined *)plVar6;
    plVar11 = alStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      puVar9 = (undefined *)plVar6;
      plVar11 = alStack_540;
    }
  }
  plVar2 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_5c0;
  pcStack_548 = FUN_107ca1da8;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar1 = puVar9;
  puStack_580 = unaff_x24;
  puStack_578 = puVar7;
  plStack_570 = plVar11;
  plStack_568 = plVar12;
  plStack_560 = plVar2;
  plStack_558 = plVar13;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar7 = auStack_5a0;
    func_0x00010002b838(auStack_5a0,plVar11);
    alStack_5c0[0] = 0;
    alStack_5c0[1] = 0;
    alStack_5c0[2] = 0;
    func_0x00010007e1e8(alStack_5c0,auStack_5a0,&lStack_588,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_5c0,puVar9);
    puStack_5a8 = (undefined1 *)alStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    puVar1 = (undefined *)plVar10;
    plVar11 = alStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar11 = alStack_5c0;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar10 = alStack_640;
  pcStack_5c8 = FUN_107ca1f1c;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar6;
  puVar8 = puVar1;
  puStack_600 = unaff_x24;
  puStack_5f8 = puVar7;
  plStack_5f0 = plVar11;
  plStack_5e8 = plVar13;
  plStack_5e0 = plVar12;
  plStack_5d8 = plVar4;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar7 = auStack_620;
    func_0x00010002b838(auStack_620,plVar11);
    alStack_640[0] = 0;
    alStack_640[1] = 0;
    alStack_640[2] = 0;
    func_0x00010007e1e8(alStack_640,auStack_620,&lStack_608,1);
    plVar2 = (long *)&UNK_110a02688;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_640,puVar1);
    puStack_628 = (undefined1 *)alStack_640;
    func_0x00010007e5dc(&puStack_628);
    puVar8 = (undefined *)plVar10;
    plVar11 = alStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      puVar8 = (undefined *)plVar10;
      plVar11 = alStack_640;
    }
  }
  plVar12 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar4 = plVar12;
  __Unwind_Resume();
  plVar3 = alStack_6b0;
  pcStack_648 = FUN_107ca2090;
  lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  plStack_670 = plVar11;
  plStack_668 = plVar13;
  plStack_660 = plVar12;
  plStack_658 = plVar6;
  pppuStack_650 = &pppuStack_5d0;
  if (plVar4 != (long *)0x0) {
    plVar12 = (long *)plVar4[1];
    puVar1 = &UNK_10f44f9bb;
    if ((int)plVar2 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_690,puVar1);
    alStack_6b0[0] = 0;
    alStack_6b0[1] = 0;
    alStack_6b0[2] = 0;
    func_0x00010007e1e8(alStack_6b0,applStack_690,&lStack_678,1);
    plVar2 = (long *)&UNK_110a026d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a026d8,alStack_6b0,puVar8);
    pplVar5 = &plStack_698;
    plStack_698 = alStack_6b0;
    func_0x00010007e5dc();
    puVar8 = (undefined *)plVar3;
    plVar13 = alStack_6b0;
    if (cStack_679 < '\0') {
      pplVar5 = applStack_690[0];
      __ZdlPv();
      puVar8 = (undefined *)plVar3;
      plVar13 = alStack_6b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
    return;
  }
  ___stack_chk_fail();
  plStack_698 = plVar13;
  func_0x00010007e5dc(&plStack_698);
  if (cStack_679 < '\0') {
    __ZdlPv(applStack_690[0]);
  }
  pplVar14 = pplVar5;
  __Unwind_Resume();
  plVar6 = alStack_730;
  pcStack_6b8 = FUN_107ca21a8;
  lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar1 = puVar8;
  puStack_6f0 = unaff_x24;
  puStack_6e8 = puVar7;
  plStack_6e0 = plVar11;
  plStack_6d8 = plVar13;
  plStack_6d0 = plVar12;
  pplStack_6c8 = pplVar5;
  pppuStack_6c0 = &pppuStack_650;
  _objc_retain(plVar2);
  if (pplVar14 != (long **)0x0) {
    plVar13 = pplVar14[1];
    plVar4 = (long *)&UNK_110a02728;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      pplVar14 = (long **)pplVar14[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar13 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      puVar7 = auStack_710;
      func_0x00010002b838(auStack_710,plVar13);
      alStack_730[0] = 0;
      alStack_730[1] = 0;
      alStack_730[2] = 0;
      func_0x00010007e1e8(alStack_730,auStack_710,&lStack_6f8,1);
      plVar4 = (long *)&UNK_110a02728;
      (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_730,(long)puVar8 * 10);
      puStack_718 = (undefined1 *)alStack_730;
      func_0x00010007e5dc(&puStack_718);
      puVar1 = (undefined *)plVar6;
      plVar11 = alStack_730;
      if (cStack_6f9 < '\0') {
        __ZdlPv(auStack_710[0]);
        puVar1 = (undefined *)plVar6;
        plVar11 = alStack_730;
      }
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar6 = plVar13;
  __Unwind_Resume();
  pcStack_738 = FUN_107ca2340;
  lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar4;
  puStack_770 = unaff_x24;
  puStack_768 = puVar7;
  plStack_760 = plVar11;
  pplStack_758 = pplVar14;
  plStack_750 = plVar13;
  plStack_748 = plVar2;
  pppuStack_740 = &pppuStack_6c0;
  _objc_retain(plVar4);
  if (plVar6 != (long *)0x0) {
    plVar13 = (long *)plVar6[1];
    plVar12 = (long *)&UNK_110a02778;
    (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
    if ((int)plVar13 != 0) {
      plVar13 = (long *)plVar6[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar11 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar11 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      func_0x00010002b838(auStack_790,plVar11);
      uStack_7b0 = 0;
      uStack_7a8 = 0;
      uStack_7a0 = 0;
      func_0x00010007e1e8(&uStack_7b0,auStack_790,&lStack_778,1);
      plVar12 = (long *)&UNK_110a02778;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_7b0,puVar1);
      puStack_798 = (undefined1 *)&uStack_7b0;
      func_0x00010007e5dc(&puStack_798);
      if (cStack_779 < '\0') {
        __ZdlPv(auStack_790[0]);
      }
    }
  }
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_778) {
    ___stack_chk_fail();
    _objc_release(plVar4);
    _objc_release(plVar4);
    __Unwind_Resume();
    _objc_retain(plVar12);
    if (plVar13 != (long *)0x0) {
      FUN_107ca2340(plVar13,plVar12,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(plVar12);
    return;
  }
  return;
}



/* Entry: 107ca0f48; end: 107ca10bb;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca0f48(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  long *plStack_6e0;
  long **pplStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  long alStack_6b0 [3];
  undefined1 *puStack_698;
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  long *plStack_660;
  long *plStack_658;
  long *plStack_650;
  long **pplStack_648;
  undefined8 ***pppuStack_640;
  code *pcStack_638;
  long alStack_630 [3];
  long *plStack_618;
  long **applStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  long alStack_5c0 [3];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  long *plStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  long alStack_540 [3];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  long alStack_4c0 [3];
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long *plStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [3];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a02368;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = param_4;
    }
  }
  plVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_107ca10bc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar11);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar11 = (long *)&UNK_110a023b8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_107ca1230;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a02408;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  pcStack_188 = FUN_107ca13a4;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_1e0,plVar11);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar11 = (long *)&UNK_110a02458;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_280;
  pcStack_208 = FUN_107ca1518;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_260,plVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    plVar13 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_300;
  pcStack_288 = FUN_107ca168c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_2e0,plVar11);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    plVar11 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_308 = FUN_107ca1800;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_360,plVar13);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    plVar13 = (long *)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_440;
  pcStack_388 = FUN_107ca1974;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(plVar13);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_420,plVar11);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_408,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_3f0,puVar1);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_3d8,3);
    plVar11 = (long *)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_440,param_6);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    lVar15 = 0;
    puVar1 = (undefined *)puVar8;
    do {
      if ((&cStack_3d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_440;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar7);
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puVar8 = auStack_420;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar8);
    _objc_release(param_5);
    _objc_release(puVar7);
    _objc_release(plVar13);
    plVar2 = plVar12;
    __Unwind_Resume();
    plVar6 = alStack_4c0;
    pcStack_448 = FUN_107ca1c34;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar11;
    puVar9 = puVar1;
    puStack_480 = unaff_x24;
    puStack_478 = puVar8;
    plStack_470 = plVar12;
    puStack_468 = param_5;
    puStack_460 = puVar7;
    plStack_458 = plVar13;
    pppuStack_450 = &pppuStack_390;
    _objc_retain(plVar11);
    plVar13 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar13 = (long *)plVar2[1];
      _objc_retain(plVar11);
      if (plVar11 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar12 = plVar11;
        _objc_retainAutorelease(plVar11);
        func_0x00010bdc3520();
      }
      _objc_release(plVar11);
      puVar8 = auStack_4a0;
      func_0x00010002b838(auStack_4a0,plVar12);
      alStack_4c0[0] = 0;
      alStack_4c0[1] = 0;
      alStack_4c0[2] = 0;
      func_0x00010007e1e8(alStack_4c0,auStack_4a0,&lStack_488,1);
      plVar4 = (long *)&UNK_110a025e8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a025e8,alStack_4c0,puVar1);
      puStack_4a8 = (undefined1 *)alStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      puVar9 = (undefined *)plVar6;
      plVar12 = alStack_4c0;
      if (cStack_489 < '\0') {
        __ZdlPv(auStack_4a0[0]);
        puVar9 = (undefined *)plVar6;
        plVar12 = alStack_4c0;
      }
    }
    plVar2 = plVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar11);
    _objc_release(plVar11);
    plVar3 = plVar2;
    __Unwind_Resume();
    plVar10 = alStack_540;
    pcStack_4c8 = FUN_107ca1da8;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar4;
    puVar7 = puVar9;
    puStack_500 = unaff_x24;
    puStack_4f8 = puVar8;
    plStack_4f0 = plVar12;
    plStack_4e8 = plVar13;
    plStack_4e0 = plVar2;
    plStack_4d8 = plVar11;
    pppuStack_4d0 = &pppuStack_450;
    _objc_retain(plVar4);
    plVar13 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar13 = (long *)plVar3[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar12 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      puVar8 = auStack_520;
      func_0x00010002b838(auStack_520,plVar12);
      alStack_540[0] = 0;
      alStack_540[1] = 0;
      alStack_540[2] = 0;
      func_0x00010007e1e8(alStack_540,auStack_520,&lStack_508,1);
      plVar6 = (long *)&UNK_110a02638;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_540,puVar9);
      puStack_528 = (undefined1 *)alStack_540;
      func_0x00010007e5dc(&puStack_528);
      puVar7 = (undefined *)plVar10;
      plVar12 = alStack_540;
      if (cStack_509 < '\0') {
        __ZdlPv(auStack_520[0]);
        puVar7 = (undefined *)plVar10;
        plVar12 = alStack_540;
      }
    }
    plVar11 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar4);
    _objc_release(plVar4);
    plVar3 = plVar11;
    __Unwind_Resume();
    plVar10 = alStack_5c0;
    pcStack_548 = FUN_107ca1f1c;
    lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = plVar6;
    puVar1 = puVar7;
    puStack_580 = unaff_x24;
    puStack_578 = puVar8;
    plStack_570 = plVar12;
    plStack_568 = plVar13;
    plStack_560 = plVar11;
    plStack_558 = plVar4;
    pppuStack_550 = &pppuStack_4d0;
    _objc_retain(plVar6);
    plVar13 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar13 = (long *)plVar3[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar12 = plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      puVar8 = auStack_5a0;
      func_0x00010002b838(auStack_5a0,plVar12);
      alStack_5c0[0] = 0;
      alStack_5c0[1] = 0;
      alStack_5c0[2] = 0;
      func_0x00010007e1e8(alStack_5c0,auStack_5a0,&lStack_588,1);
      plVar2 = (long *)&UNK_110a02688;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_5c0,puVar7);
      puStack_5a8 = (undefined1 *)alStack_5c0;
      func_0x00010007e5dc(&puStack_5a8);
      puVar1 = (undefined *)plVar10;
      plVar12 = alStack_5c0;
      if (cStack_589 < '\0') {
        __ZdlPv(auStack_5a0[0]);
        puVar1 = (undefined *)plVar10;
        plVar12 = alStack_5c0;
      }
    }
    plVar11 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar4 = plVar11;
    __Unwind_Resume();
    plVar3 = alStack_630;
    pcStack_5c8 = FUN_107ca2090;
    lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar5 = (long **)0x0;
    plStack_5f0 = plVar12;
    plStack_5e8 = plVar13;
    plStack_5e0 = plVar11;
    plStack_5d8 = plVar6;
    pppuStack_5d0 = &pppuStack_550;
    if (plVar4 != (long *)0x0) {
      plVar11 = (long *)plVar4[1];
      puVar7 = &UNK_10f44f9bb;
      if ((int)plVar2 == 0) {
        puVar7 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_610,puVar7);
      alStack_630[0] = 0;
      alStack_630[1] = 0;
      alStack_630[2] = 0;
      func_0x00010007e1e8(alStack_630,applStack_610,&lStack_5f8,1);
      plVar2 = (long *)&UNK_110a026d8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a026d8,alStack_630,puVar1);
      pplVar5 = &plStack_618;
      plStack_618 = alStack_630;
      func_0x00010007e5dc();
      puVar1 = (undefined *)plVar3;
      plVar13 = alStack_630;
      if (cStack_5f9 < '\0') {
        pplVar5 = applStack_610[0];
        __ZdlPv();
        puVar1 = (undefined *)plVar3;
        plVar13 = alStack_630;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
      return;
    }
    ___stack_chk_fail();
    plStack_618 = plVar13;
    func_0x00010007e5dc(&plStack_618);
    if (cStack_5f9 < '\0') {
      __ZdlPv(applStack_610[0]);
    }
    pplVar14 = pplVar5;
    __Unwind_Resume();
    plVar6 = alStack_6b0;
    pcStack_638 = FUN_107ca21a8;
    lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar2;
    puVar7 = puVar1;
    puStack_670 = unaff_x24;
    puStack_668 = puVar8;
    plStack_660 = plVar12;
    plStack_658 = plVar13;
    plStack_650 = plVar11;
    pplStack_648 = pplVar5;
    pppuStack_640 = &pppuStack_5d0;
    _objc_retain(plVar2);
    if (pplVar14 != (long **)0x0) {
      plVar13 = pplVar14[1];
      plVar4 = (long *)&UNK_110a02728;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        pplVar14 = (long **)pplVar14[1];
        _objc_retain(plVar2);
        if (plVar2 == (long *)0x0) {
          plVar13 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar13 = plVar2;
          _objc_retainAutorelease(plVar2);
          func_0x00010bdc3520();
        }
        _objc_release(plVar2);
        puVar8 = auStack_690;
        func_0x00010002b838(auStack_690,plVar13);
        alStack_6b0[0] = 0;
        alStack_6b0[1] = 0;
        alStack_6b0[2] = 0;
        func_0x00010007e1e8(alStack_6b0,auStack_690,&lStack_678,1);
        plVar4 = (long *)&UNK_110a02728;
        (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_6b0,(long)puVar1 * 10);
        puStack_698 = (undefined1 *)alStack_6b0;
        func_0x00010007e5dc(&puStack_698);
        puVar7 = (undefined *)plVar6;
        plVar12 = alStack_6b0;
        if (cStack_679 < '\0') {
          __ZdlPv(auStack_690[0]);
          puVar7 = (undefined *)plVar6;
          plVar12 = alStack_6b0;
        }
      }
    }
    plVar13 = plVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_678) {
      ___stack_chk_fail();
      _objc_release(plVar2);
      _objc_release(plVar2);
      plVar6 = plVar13;
      __Unwind_Resume();
      pcStack_6b8 = FUN_107ca2340;
      lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar11 = plVar4;
      puStack_6f0 = unaff_x24;
      puStack_6e8 = puVar8;
      plStack_6e0 = plVar12;
      pplStack_6d8 = pplVar14;
      plStack_6d0 = plVar13;
      plStack_6c8 = plVar2;
      pppuStack_6c0 = &pppuStack_640;
      _objc_retain(plVar4);
      if (plVar6 != (long *)0x0) {
        plVar13 = (long *)plVar6[1];
        plVar11 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
        if ((int)plVar13 != 0) {
          plVar13 = (long *)plVar6[1];
          _objc_retain(plVar4);
          if (plVar4 == (long *)0x0) {
            plVar12 = (long *)&UNK_10f44f7d9;
          }
          else {
            plVar12 = plVar4;
            _objc_retainAutorelease(plVar4);
            func_0x00010bdc3520();
          }
          _objc_release(plVar4);
          func_0x00010002b838(auStack_710,plVar12);
          uStack_730 = 0;
          uStack_728 = 0;
          uStack_720 = 0;
          func_0x00010007e1e8(&uStack_730,auStack_710,&lStack_6f8,1);
          plVar11 = (long *)&UNK_110a02778;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_730,puVar7);
          puStack_718 = (undefined1 *)&uStack_730;
          func_0x00010007e5dc(&puStack_718);
          if (cStack_6f9 < '\0') {
            __ZdlPv(auStack_710[0]);
          }
        }
      }
      plVar13 = plVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6f8) {
        ___stack_chk_fail();
        _objc_release(plVar4);
        _objc_release(plVar4);
        __Unwind_Resume();
        _objc_retain(plVar11);
        if (plVar13 != (long *)0x0) {
          FUN_107ca2340(plVar13,plVar11,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(plVar11);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca10bc; end: 107ca122f;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca10bc(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 *puStack_698;
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  long *plStack_660;
  long **pplStack_658;
  long *plStack_650;
  long *plStack_648;
  undefined8 ***pppuStack_640;
  code *pcStack_638;
  long alStack_630 [3];
  undefined1 *puStack_618;
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  long *plStack_5d0;
  long **pplStack_5c8;
  undefined8 ***pppuStack_5c0;
  code *pcStack_5b8;
  long alStack_5b0 [3];
  long *plStack_598;
  long **applStack_590 [2];
  char cStack_579;
  long lStack_578;
  long *plStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  long alStack_540 [3];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  long alStack_4c0 [3];
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  long alStack_440 [3];
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long *plStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [3];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar1 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a023b8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar1 = (undefined *)puVar7;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = param_4;
    }
  }
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_107ca1230;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar12);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar12 = (long *)&UNK_110a02408;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_107ca13a4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar12);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a02458;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar1 = (undefined *)puVar7;
    param_5 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = puVar8;
    }
  }
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  puVar7 = &uStack_200;
  pcStack_188 = FUN_107ca1518;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_1e0,plVar12);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar12 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_280;
  pcStack_208 = FUN_107ca168c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar12);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_260,plVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    plVar13 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar1 = (undefined *)puVar7;
    param_5 = puVar8;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = puVar8;
    }
  }
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  puVar7 = &uStack_300;
  pcStack_288 = FUN_107ca1800;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_2e0,plVar12);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    plVar12 = (long *)&UNK_110a02548;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_3c0;
  pcStack_308 = FUN_107ca1974;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(plVar12);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_3a0,plVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_388,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_370,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
    plVar13 = (long *)&UNK_110a02598;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a02598,&uStack_3c0,param_6);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar15 = 0;
    puVar1 = (undefined *)puVar7;
    do {
      if ((&cStack_359)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_3c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar8);
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar7 = auStack_3a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar7);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(plVar12);
  plVar2 = plVar11;
  __Unwind_Resume();
  plVar6 = alStack_440;
  pcStack_3c8 = FUN_107ca1c34;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puVar9 = puVar1;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar7;
  plStack_3f0 = plVar11;
  puStack_3e8 = param_5;
  puStack_3e0 = puVar8;
  plStack_3d8 = plVar12;
  pppuStack_3d0 = &pppuStack_310;
  _objc_retain(plVar13);
  plVar12 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar12 = (long *)plVar2[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    puVar7 = auStack_420;
    func_0x00010002b838(auStack_420,plVar11);
    alStack_440[0] = 0;
    alStack_440[1] = 0;
    alStack_440[2] = 0;
    func_0x00010007e1e8(alStack_440,auStack_420,&lStack_408,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,alStack_440,puVar1);
    puStack_428 = (undefined1 *)alStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar9 = (undefined *)plVar6;
    plVar11 = alStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar9 = (undefined *)plVar6;
      plVar11 = alStack_440;
    }
  }
  plVar2 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_4c0;
  pcStack_448 = FUN_107ca1da8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar1 = puVar9;
  puStack_480 = unaff_x24;
  puStack_478 = puVar7;
  plStack_470 = plVar11;
  plStack_468 = plVar12;
  plStack_460 = plVar2;
  plStack_458 = plVar13;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar7 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,plVar11);
    alStack_4c0[0] = 0;
    alStack_4c0[1] = 0;
    alStack_4c0[2] = 0;
    func_0x00010007e1e8(alStack_4c0,auStack_4a0,&lStack_488,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_4c0,puVar9);
    puStack_4a8 = (undefined1 *)alStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar1 = (undefined *)plVar10;
    plVar11 = alStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar11 = alStack_4c0;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar10 = alStack_540;
  pcStack_4c8 = FUN_107ca1f1c;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar6;
  puVar8 = puVar1;
  puStack_500 = unaff_x24;
  puStack_4f8 = puVar7;
  plStack_4f0 = plVar11;
  plStack_4e8 = plVar13;
  plStack_4e0 = plVar12;
  plStack_4d8 = plVar4;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar7 = auStack_520;
    func_0x00010002b838(auStack_520,plVar11);
    alStack_540[0] = 0;
    alStack_540[1] = 0;
    alStack_540[2] = 0;
    func_0x00010007e1e8(alStack_540,auStack_520,&lStack_508,1);
    plVar2 = (long *)&UNK_110a02688;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_540,puVar1);
    puStack_528 = (undefined1 *)alStack_540;
    func_0x00010007e5dc(&puStack_528);
    puVar8 = (undefined *)plVar10;
    plVar11 = alStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      puVar8 = (undefined *)plVar10;
      plVar11 = alStack_540;
    }
  }
  plVar12 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar4 = plVar12;
  __Unwind_Resume();
  plVar3 = alStack_5b0;
  pcStack_548 = FUN_107ca2090;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  plStack_570 = plVar11;
  plStack_568 = plVar13;
  plStack_560 = plVar12;
  plStack_558 = plVar6;
  pppuStack_550 = &pppuStack_4d0;
  if (plVar4 != (long *)0x0) {
    plVar12 = (long *)plVar4[1];
    puVar1 = &UNK_10f44f9bb;
    if ((int)plVar2 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_590,puVar1);
    alStack_5b0[0] = 0;
    alStack_5b0[1] = 0;
    alStack_5b0[2] = 0;
    func_0x00010007e1e8(alStack_5b0,applStack_590,&lStack_578,1);
    plVar2 = (long *)&UNK_110a026d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a026d8,alStack_5b0,puVar8);
    pplVar5 = &plStack_598;
    plStack_598 = alStack_5b0;
    func_0x00010007e5dc();
    puVar8 = (undefined *)plVar3;
    plVar13 = alStack_5b0;
    if (cStack_579 < '\0') {
      pplVar5 = applStack_590[0];
      __ZdlPv();
      puVar8 = (undefined *)plVar3;
      plVar13 = alStack_5b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return;
  }
  ___stack_chk_fail();
  plStack_598 = plVar13;
  func_0x00010007e5dc(&plStack_598);
  if (cStack_579 < '\0') {
    __ZdlPv(applStack_590[0]);
  }
  pplVar14 = pplVar5;
  __Unwind_Resume();
  plVar6 = alStack_630;
  pcStack_5b8 = FUN_107ca21a8;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar1 = puVar8;
  puStack_5f0 = unaff_x24;
  puStack_5e8 = puVar7;
  plStack_5e0 = plVar11;
  plStack_5d8 = plVar13;
  plStack_5d0 = plVar12;
  pplStack_5c8 = pplVar5;
  pppuStack_5c0 = &pppuStack_550;
  _objc_retain(plVar2);
  if (pplVar14 != (long **)0x0) {
    plVar13 = pplVar14[1];
    plVar4 = (long *)&UNK_110a02728;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      pplVar14 = (long **)pplVar14[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar13 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      puVar7 = auStack_610;
      func_0x00010002b838(auStack_610,plVar13);
      alStack_630[0] = 0;
      alStack_630[1] = 0;
      alStack_630[2] = 0;
      func_0x00010007e1e8(alStack_630,auStack_610,&lStack_5f8,1);
      plVar4 = (long *)&UNK_110a02728;
      (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_630,(long)puVar8 * 10);
      puStack_618 = (undefined1 *)alStack_630;
      func_0x00010007e5dc(&puStack_618);
      puVar1 = (undefined *)plVar6;
      plVar11 = alStack_630;
      if (cStack_5f9 < '\0') {
        __ZdlPv(auStack_610[0]);
        puVar1 = (undefined *)plVar6;
        plVar11 = alStack_630;
      }
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5f8) {
    ___stack_chk_fail();
    _objc_release(plVar2);
    _objc_release(plVar2);
    plVar6 = plVar13;
    __Unwind_Resume();
    pcStack_638 = FUN_107ca2340;
    lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar12 = plVar4;
    puStack_670 = unaff_x24;
    puStack_668 = puVar7;
    plStack_660 = plVar11;
    pplStack_658 = pplVar14;
    plStack_650 = plVar13;
    plStack_648 = plVar2;
    pppuStack_640 = &pppuStack_5c0;
    _objc_retain(plVar4);
    if (plVar6 != (long *)0x0) {
      plVar13 = (long *)plVar6[1];
      plVar12 = (long *)&UNK_110a02778;
      (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
      if ((int)plVar13 != 0) {
        plVar13 = (long *)plVar6[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          plVar11 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar11 = plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_690,plVar11);
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        func_0x00010007e1e8(&uStack_6b0,auStack_690,&lStack_678,1);
        plVar12 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_6b0,puVar1);
        puStack_698 = (undefined1 *)&uStack_6b0;
        func_0x00010007e5dc(&puStack_698);
        if (cStack_679 < '\0') {
          __ZdlPv(auStack_690[0]);
        }
      }
    }
    plVar13 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_678) {
      ___stack_chk_fail();
      _objc_release(plVar4);
      _objc_release(plVar4);
      __Unwind_Resume();
      _objc_retain(plVar12);
      if (plVar13 != (long *)0x0) {
        FUN_107ca2340(plVar13,plVar12,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar12);
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca1230; end: 107ca13a3;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca1230(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 *puStack_618;
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  long *plStack_5e0;
  long **pplStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  undefined8 ***pppuStack_5c0;
  code *pcStack_5b8;
  long alStack_5b0 [3];
  undefined1 *puStack_598;
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  long *plStack_560;
  long *plStack_558;
  long *plStack_550;
  long **pplStack_548;
  undefined8 ***pppuStack_540;
  code *pcStack_538;
  long alStack_530 [3];
  long *plStack_518;
  long **applStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  long alStack_4c0 [3];
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  long alStack_440 [3];
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  long alStack_3c0 [3];
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long *plStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a02408;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = param_4;
    }
  }
  plVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_107ca13a4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar11);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar11 = (long *)&UNK_110a02458;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_107ca1518;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  pcStack_188 = FUN_107ca168c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_1e0,plVar11);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar11 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_280;
  pcStack_208 = FUN_107ca1800;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_260,plVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    plVar13 = (long *)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_340;
  pcStack_288 = FUN_107ca1974;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar13);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_320,plVar11);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_308,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_2f0,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    plVar11 = (long *)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_340,param_6);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar15 = 0;
    puVar1 = (undefined *)puVar8;
    do {
      if ((&cStack_2d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_340;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar7);
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar8 = auStack_320;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(plVar13);
  plVar2 = plVar12;
  __Unwind_Resume();
  plVar6 = alStack_3c0;
  pcStack_348 = FUN_107ca1c34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar11;
  puVar9 = puVar1;
  puStack_380 = unaff_x24;
  puStack_378 = puVar8;
  plStack_370 = plVar12;
  puStack_368 = param_5;
  puStack_360 = puVar7;
  plStack_358 = plVar13;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar13 = (long *)plVar2[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar8 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,plVar12);
    alStack_3c0[0] = 0;
    alStack_3c0[1] = 0;
    alStack_3c0[2] = 0;
    func_0x00010007e1e8(alStack_3c0,auStack_3a0,&lStack_388,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a025e8,alStack_3c0,puVar1);
    puStack_3a8 = (undefined1 *)alStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar9 = (undefined *)plVar6;
    plVar12 = alStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar9 = (undefined *)plVar6;
      plVar12 = alStack_3c0;
    }
  }
  plVar2 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_440;
  pcStack_3c8 = FUN_107ca1da8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar7 = puVar9;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar8;
  plStack_3f0 = plVar12;
  plStack_3e8 = plVar13;
  plStack_3e0 = plVar2;
  plStack_3d8 = plVar11;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar8 = auStack_420;
    func_0x00010002b838(auStack_420,plVar12);
    alStack_440[0] = 0;
    alStack_440[1] = 0;
    alStack_440[2] = 0;
    func_0x00010007e1e8(alStack_440,auStack_420,&lStack_408,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_440,puVar9);
    puStack_428 = (undefined1 *)alStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar7 = (undefined *)plVar10;
    plVar12 = alStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar7 = (undefined *)plVar10;
      plVar12 = alStack_440;
    }
  }
  plVar11 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar11;
  __Unwind_Resume();
  plVar10 = alStack_4c0;
  pcStack_448 = FUN_107ca1f1c;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar6;
  puVar1 = puVar7;
  puStack_480 = unaff_x24;
  puStack_478 = puVar8;
  plStack_470 = plVar12;
  plStack_468 = plVar13;
  plStack_460 = plVar11;
  plStack_458 = plVar4;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar8 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,plVar12);
    alStack_4c0[0] = 0;
    alStack_4c0[1] = 0;
    alStack_4c0[2] = 0;
    func_0x00010007e1e8(alStack_4c0,auStack_4a0,&lStack_488,1);
    plVar2 = (long *)&UNK_110a02688;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_4c0,puVar7);
    puStack_4a8 = (undefined1 *)alStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar1 = (undefined *)plVar10;
    plVar12 = alStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar12 = alStack_4c0;
    }
  }
  plVar11 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar4 = plVar11;
  __Unwind_Resume();
  plVar3 = alStack_530;
  pcStack_4c8 = FUN_107ca2090;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  plStack_4f0 = plVar12;
  plStack_4e8 = plVar13;
  plStack_4e0 = plVar11;
  plStack_4d8 = plVar6;
  pppuStack_4d0 = &pppuStack_450;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    puVar7 = &UNK_10f44f9bb;
    if ((int)plVar2 == 0) {
      puVar7 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_510,puVar7);
    alStack_530[0] = 0;
    alStack_530[1] = 0;
    alStack_530[2] = 0;
    func_0x00010007e1e8(alStack_530,applStack_510,&lStack_4f8,1);
    plVar2 = (long *)&UNK_110a026d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a026d8,alStack_530,puVar1);
    pplVar5 = &plStack_518;
    plStack_518 = alStack_530;
    func_0x00010007e5dc();
    puVar1 = (undefined *)plVar3;
    plVar13 = alStack_530;
    if (cStack_4f9 < '\0') {
      pplVar5 = applStack_510[0];
      __ZdlPv();
      puVar1 = (undefined *)plVar3;
      plVar13 = alStack_530;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_518 = plVar13;
  func_0x00010007e5dc(&plStack_518);
  if (cStack_4f9 < '\0') {
    __ZdlPv(applStack_510[0]);
  }
  pplVar14 = pplVar5;
  __Unwind_Resume();
  plVar6 = alStack_5b0;
  pcStack_538 = FUN_107ca21a8;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar7 = puVar1;
  puStack_570 = unaff_x24;
  puStack_568 = puVar8;
  plStack_560 = plVar12;
  plStack_558 = plVar13;
  plStack_550 = plVar11;
  pplStack_548 = pplVar5;
  pppuStack_540 = &pppuStack_4d0;
  _objc_retain(plVar2);
  if (pplVar14 != (long **)0x0) {
    plVar13 = pplVar14[1];
    plVar4 = (long *)&UNK_110a02728;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      pplVar14 = (long **)pplVar14[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar13 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      puVar8 = auStack_590;
      func_0x00010002b838(auStack_590,plVar13);
      alStack_5b0[0] = 0;
      alStack_5b0[1] = 0;
      alStack_5b0[2] = 0;
      func_0x00010007e1e8(alStack_5b0,auStack_590,&lStack_578,1);
      plVar4 = (long *)&UNK_110a02728;
      (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_5b0,(long)puVar1 * 10);
      puStack_598 = (undefined1 *)alStack_5b0;
      func_0x00010007e5dc(&puStack_598);
      puVar7 = (undefined *)plVar6;
      plVar12 = alStack_5b0;
      if (cStack_579 < '\0') {
        __ZdlPv(auStack_590[0]);
        puVar7 = (undefined *)plVar6;
        plVar12 = alStack_5b0;
      }
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
    ___stack_chk_fail();
    _objc_release(plVar2);
    _objc_release(plVar2);
    plVar6 = plVar13;
    __Unwind_Resume();
    pcStack_5b8 = FUN_107ca2340;
    lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar4;
    puStack_5f0 = unaff_x24;
    puStack_5e8 = puVar8;
    plStack_5e0 = plVar12;
    pplStack_5d8 = pplVar14;
    plStack_5d0 = plVar13;
    plStack_5c8 = plVar2;
    pppuStack_5c0 = &pppuStack_540;
    _objc_retain(plVar4);
    if (plVar6 != (long *)0x0) {
      plVar13 = (long *)plVar6[1];
      plVar11 = (long *)&UNK_110a02778;
      (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
      if ((int)plVar13 != 0) {
        plVar13 = (long *)plVar6[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          plVar12 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar12 = plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_610,plVar12);
        uStack_630 = 0;
        uStack_628 = 0;
        uStack_620 = 0;
        func_0x00010007e1e8(&uStack_630,auStack_610,&lStack_5f8,1);
        plVar11 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_630,puVar7);
        puStack_618 = (undefined1 *)&uStack_630;
        func_0x00010007e5dc(&puStack_618);
        if (cStack_5f9 < '\0') {
          __ZdlPv(auStack_610[0]);
        }
      }
    }
    plVar13 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5f8) {
      ___stack_chk_fail();
      _objc_release(plVar4);
      _objc_release(plVar4);
      __Unwind_Resume();
      _objc_retain(plVar11);
      if (plVar13 != (long *)0x0) {
        FUN_107ca2340(plVar13,plVar11,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar11);
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca13a4; end: 107ca1517;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca13a4(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 *puStack_598;
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  long *plStack_560;
  long **pplStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined8 ***pppuStack_540;
  code *pcStack_538;
  long alStack_530 [3];
  undefined1 *puStack_518;
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  long **pplStack_4c8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  long alStack_4b0 [3];
  long *plStack_498;
  long **applStack_490 [2];
  char cStack_479;
  long lStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  long alStack_440 [3];
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  long alStack_3c0 [3];
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_340 [3];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long *plStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar1 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a02458;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar1 = (undefined *)puVar7;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = param_4;
    }
  }
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_107ca1518;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar12);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar12 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_107ca168c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar12);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar1 = (undefined *)puVar7;
    param_5 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = puVar8;
    }
  }
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  puVar7 = &uStack_200;
  pcStack_188 = FUN_107ca1800;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_1e0,plVar12);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar12 = (long *)&UNK_110a02548;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_2c0;
  pcStack_208 = FUN_107ca1974;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar12);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_2a0,plVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_288,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_270,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
    plVar13 = (long *)&UNK_110a02598;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a02598,&uStack_2c0,param_6);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar15 = 0;
    puVar1 = (undefined *)puVar7;
    do {
      if ((&cStack_259)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_2c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar8);
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar7 = auStack_2a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar7);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(plVar12);
  plVar2 = plVar11;
  __Unwind_Resume();
  plVar6 = alStack_340;
  pcStack_2c8 = FUN_107ca1c34;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puVar9 = puVar1;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar7;
  plStack_2f0 = plVar11;
  puStack_2e8 = param_5;
  puStack_2e0 = puVar8;
  plStack_2d8 = plVar12;
  pppuStack_2d0 = &pppuStack_210;
  _objc_retain(plVar13);
  plVar12 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar12 = (long *)plVar2[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    puVar7 = auStack_320;
    func_0x00010002b838(auStack_320,plVar11);
    alStack_340[0] = 0;
    alStack_340[1] = 0;
    alStack_340[2] = 0;
    func_0x00010007e1e8(alStack_340,auStack_320,&lStack_308,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,alStack_340,puVar1);
    puStack_328 = (undefined1 *)alStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar9 = (undefined *)plVar6;
    plVar11 = alStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar9 = (undefined *)plVar6;
      plVar11 = alStack_340;
    }
  }
  plVar2 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_3c0;
  pcStack_348 = FUN_107ca1da8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar1 = puVar9;
  puStack_380 = unaff_x24;
  puStack_378 = puVar7;
  plStack_370 = plVar11;
  plStack_368 = plVar12;
  plStack_360 = plVar2;
  plStack_358 = plVar13;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar7 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,plVar11);
    alStack_3c0[0] = 0;
    alStack_3c0[1] = 0;
    alStack_3c0[2] = 0;
    func_0x00010007e1e8(alStack_3c0,auStack_3a0,&lStack_388,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_3c0,puVar9);
    puStack_3a8 = (undefined1 *)alStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar1 = (undefined *)plVar10;
    plVar11 = alStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar11 = alStack_3c0;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar10 = alStack_440;
  pcStack_3c8 = FUN_107ca1f1c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar6;
  puVar8 = puVar1;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar7;
  plStack_3f0 = plVar11;
  plStack_3e8 = plVar13;
  plStack_3e0 = plVar12;
  plStack_3d8 = plVar4;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar7 = auStack_420;
    func_0x00010002b838(auStack_420,plVar11);
    alStack_440[0] = 0;
    alStack_440[1] = 0;
    alStack_440[2] = 0;
    func_0x00010007e1e8(alStack_440,auStack_420,&lStack_408,1);
    plVar2 = (long *)&UNK_110a02688;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_440,puVar1);
    puStack_428 = (undefined1 *)alStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar8 = (undefined *)plVar10;
    plVar11 = alStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar8 = (undefined *)plVar10;
      plVar11 = alStack_440;
    }
  }
  plVar12 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar4 = plVar12;
    __Unwind_Resume();
    plVar3 = alStack_4b0;
    pcStack_448 = FUN_107ca2090;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar5 = (long **)0x0;
    plStack_470 = plVar11;
    plStack_468 = plVar13;
    plStack_460 = plVar12;
    plStack_458 = plVar6;
    pppuStack_450 = &pppuStack_3d0;
    if (plVar4 != (long *)0x0) {
      plVar12 = (long *)plVar4[1];
      puVar1 = &UNK_10f44f9bb;
      if ((int)plVar2 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_490,puVar1);
      alStack_4b0[0] = 0;
      alStack_4b0[1] = 0;
      alStack_4b0[2] = 0;
      func_0x00010007e1e8(alStack_4b0,applStack_490,&lStack_478,1);
      plVar2 = (long *)&UNK_110a026d8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a026d8,alStack_4b0,puVar8);
      pplVar5 = &plStack_498;
      plStack_498 = alStack_4b0;
      func_0x00010007e5dc();
      puVar8 = (undefined *)plVar3;
      plVar13 = alStack_4b0;
      if (cStack_479 < '\0') {
        pplVar5 = applStack_490[0];
        __ZdlPv();
        puVar8 = (undefined *)plVar3;
        plVar13 = alStack_4b0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
      return;
    }
    ___stack_chk_fail();
    plStack_498 = plVar13;
    func_0x00010007e5dc(&plStack_498);
    if (cStack_479 < '\0') {
      __ZdlPv(applStack_490[0]);
    }
    pplVar14 = pplVar5;
    __Unwind_Resume();
    plVar6 = alStack_530;
    pcStack_4b8 = FUN_107ca21a8;
    lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar2;
    puVar1 = puVar8;
    puStack_4f0 = unaff_x24;
    puStack_4e8 = puVar7;
    plStack_4e0 = plVar11;
    plStack_4d8 = plVar13;
    plStack_4d0 = plVar12;
    pplStack_4c8 = pplVar5;
    pppuStack_4c0 = &pppuStack_450;
    _objc_retain(plVar2);
    if (pplVar14 != (long **)0x0) {
      plVar13 = pplVar14[1];
      plVar4 = (long *)&UNK_110a02728;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        pplVar14 = (long **)pplVar14[1];
        _objc_retain(plVar2);
        if (plVar2 == (long *)0x0) {
          plVar13 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar13 = plVar2;
          _objc_retainAutorelease(plVar2);
          func_0x00010bdc3520();
        }
        _objc_release(plVar2);
        puVar7 = auStack_510;
        func_0x00010002b838(auStack_510,plVar13);
        alStack_530[0] = 0;
        alStack_530[1] = 0;
        alStack_530[2] = 0;
        func_0x00010007e1e8(alStack_530,auStack_510,&lStack_4f8,1);
        plVar4 = (long *)&UNK_110a02728;
        (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_530,(long)puVar8 * 10);
        puStack_518 = (undefined1 *)alStack_530;
        func_0x00010007e5dc(&puStack_518);
        puVar1 = (undefined *)plVar6;
        plVar11 = alStack_530;
        if (cStack_4f9 < '\0') {
          __ZdlPv(auStack_510[0]);
          puVar1 = (undefined *)plVar6;
          plVar11 = alStack_530;
        }
      }
    }
    plVar13 = plVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
      ___stack_chk_fail();
      _objc_release(plVar2);
      _objc_release(plVar2);
      plVar6 = plVar13;
      __Unwind_Resume();
      pcStack_538 = FUN_107ca2340;
      lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar12 = plVar4;
      puStack_570 = unaff_x24;
      puStack_568 = puVar7;
      plStack_560 = plVar11;
      pplStack_558 = pplVar14;
      plStack_550 = plVar13;
      plStack_548 = plVar2;
      pppuStack_540 = &pppuStack_4c0;
      _objc_retain(plVar4);
      if (plVar6 != (long *)0x0) {
        plVar13 = (long *)plVar6[1];
        plVar12 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
        if ((int)plVar13 != 0) {
          plVar13 = (long *)plVar6[1];
          _objc_retain(plVar4);
          if (plVar4 == (long *)0x0) {
            plVar11 = (long *)&UNK_10f44f7d9;
          }
          else {
            plVar11 = plVar4;
            _objc_retainAutorelease(plVar4);
            func_0x00010bdc3520();
          }
          _objc_release(plVar4);
          func_0x00010002b838(auStack_590,plVar11);
          uStack_5b0 = 0;
          uStack_5a8 = 0;
          uStack_5a0 = 0;
          func_0x00010007e1e8(&uStack_5b0,auStack_590,&lStack_578,1);
          plVar12 = (long *)&UNK_110a02778;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_5b0,puVar1);
          puStack_598 = (undefined1 *)&uStack_5b0;
          func_0x00010007e5dc(&puStack_598);
          if (cStack_579 < '\0') {
            __ZdlPv(auStack_590[0]);
          }
        }
      }
      plVar13 = plVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
        ___stack_chk_fail();
        _objc_release(plVar4);
        _objc_release(plVar4);
        __Unwind_Resume();
        _objc_retain(plVar12);
        if (plVar13 != (long *)0x0) {
          FUN_107ca2340(plVar13,plVar12,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(plVar12);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca1518; end: 107ca168b;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca1518(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 *puStack_518;
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  long *plStack_4e0;
  long **pplStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  long alStack_4b0 [3];
  undefined1 *puStack_498;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  long **pplStack_448;
  undefined8 ***pppuStack_440;
  code *pcStack_438;
  long alStack_430 [3];
  long *plStack_418;
  long **applStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  long alStack_3c0 [3];
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_340 [3];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  long alStack_2c0 [3];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long *plStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a024a8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = param_4;
    }
  }
  plVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_107ca168c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar11);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar11 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar1 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar1 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_107ca1800;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_160,plVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar13 = (long *)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar1;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar1;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  puVar8 = &uStack_240;
  pcStack_188 = FUN_107ca1974;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar13);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_220,plVar11);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_208,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    plVar11 = (long *)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_240,param_6);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar15 = 0;
    puVar1 = (undefined *)puVar8;
    do {
      if ((&cStack_1d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar7);
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar8 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(plVar13);
  plVar2 = plVar12;
  __Unwind_Resume();
  plVar6 = alStack_2c0;
  pcStack_248 = FUN_107ca1c34;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar11;
  puVar9 = puVar1;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  plStack_270 = plVar12;
  puStack_268 = param_5;
  puStack_260 = puVar7;
  plStack_258 = plVar13;
  pppuStack_250 = &pppuStack_190;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar13 = (long *)plVar2[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar8 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,plVar12);
    alStack_2c0[0] = 0;
    alStack_2c0[1] = 0;
    alStack_2c0[2] = 0;
    func_0x00010007e1e8(alStack_2c0,auStack_2a0,&lStack_288,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a025e8,alStack_2c0,puVar1);
    puStack_2a8 = (undefined1 *)alStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar9 = (undefined *)plVar6;
    plVar12 = alStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar9 = (undefined *)plVar6;
      plVar12 = alStack_2c0;
    }
  }
  plVar2 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_340;
  pcStack_2c8 = FUN_107ca1da8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar7 = puVar9;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar8;
  plStack_2f0 = plVar12;
  plStack_2e8 = plVar13;
  plStack_2e0 = plVar2;
  plStack_2d8 = plVar11;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar8 = auStack_320;
    func_0x00010002b838(auStack_320,plVar12);
    alStack_340[0] = 0;
    alStack_340[1] = 0;
    alStack_340[2] = 0;
    func_0x00010007e1e8(alStack_340,auStack_320,&lStack_308,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_340,puVar9);
    puStack_328 = (undefined1 *)alStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar7 = (undefined *)plVar10;
    plVar12 = alStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar7 = (undefined *)plVar10;
      plVar12 = alStack_340;
    }
  }
  plVar11 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar11;
  __Unwind_Resume();
  plVar10 = alStack_3c0;
  pcStack_348 = FUN_107ca1f1c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar6;
  puVar1 = puVar7;
  puStack_380 = unaff_x24;
  puStack_378 = puVar8;
  plStack_370 = plVar12;
  plStack_368 = plVar13;
  plStack_360 = plVar11;
  plStack_358 = plVar4;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar8 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,plVar12);
    alStack_3c0[0] = 0;
    alStack_3c0[1] = 0;
    alStack_3c0[2] = 0;
    func_0x00010007e1e8(alStack_3c0,auStack_3a0,&lStack_388,1);
    plVar2 = (long *)&UNK_110a02688;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_3c0,puVar7);
    puStack_3a8 = (undefined1 *)alStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar1 = (undefined *)plVar10;
    plVar12 = alStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar12 = alStack_3c0;
    }
  }
  plVar11 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar4 = plVar11;
  __Unwind_Resume();
  plVar3 = alStack_430;
  pcStack_3c8 = FUN_107ca2090;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  plStack_3f0 = plVar12;
  plStack_3e8 = plVar13;
  plStack_3e0 = plVar11;
  plStack_3d8 = plVar6;
  pppuStack_3d0 = &pppuStack_350;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    puVar7 = &UNK_10f44f9bb;
    if ((int)plVar2 == 0) {
      puVar7 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_410,puVar7);
    alStack_430[0] = 0;
    alStack_430[1] = 0;
    alStack_430[2] = 0;
    func_0x00010007e1e8(alStack_430,applStack_410,&lStack_3f8,1);
    plVar2 = (long *)&UNK_110a026d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a026d8,alStack_430,puVar1);
    pplVar5 = &plStack_418;
    plStack_418 = alStack_430;
    func_0x00010007e5dc();
    puVar1 = (undefined *)plVar3;
    plVar13 = alStack_430;
    if (cStack_3f9 < '\0') {
      pplVar5 = applStack_410[0];
      __ZdlPv();
      puVar1 = (undefined *)plVar3;
      plVar13 = alStack_430;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_418 = plVar13;
  func_0x00010007e5dc(&plStack_418);
  if (cStack_3f9 < '\0') {
    __ZdlPv(applStack_410[0]);
  }
  pplVar14 = pplVar5;
  __Unwind_Resume();
  plVar6 = alStack_4b0;
  pcStack_438 = FUN_107ca21a8;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar7 = puVar1;
  puStack_470 = unaff_x24;
  puStack_468 = puVar8;
  plStack_460 = plVar12;
  plStack_458 = plVar13;
  plStack_450 = plVar11;
  pplStack_448 = pplVar5;
  pppuStack_440 = &pppuStack_3d0;
  _objc_retain(plVar2);
  if (pplVar14 != (long **)0x0) {
    plVar13 = pplVar14[1];
    plVar4 = (long *)&UNK_110a02728;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      pplVar14 = (long **)pplVar14[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar13 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      puVar8 = auStack_490;
      func_0x00010002b838(auStack_490,plVar13);
      alStack_4b0[0] = 0;
      alStack_4b0[1] = 0;
      alStack_4b0[2] = 0;
      func_0x00010007e1e8(alStack_4b0,auStack_490,&lStack_478,1);
      plVar4 = (long *)&UNK_110a02728;
      (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_4b0,(long)puVar1 * 10);
      puStack_498 = (undefined1 *)alStack_4b0;
      func_0x00010007e5dc(&puStack_498);
      puVar7 = (undefined *)plVar6;
      plVar12 = alStack_4b0;
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
        puVar7 = (undefined *)plVar6;
        plVar12 = alStack_4b0;
      }
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
    ___stack_chk_fail();
    _objc_release(plVar2);
    _objc_release(plVar2);
    plVar6 = plVar13;
    __Unwind_Resume();
    pcStack_4b8 = FUN_107ca2340;
    lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar4;
    puStack_4f0 = unaff_x24;
    puStack_4e8 = puVar8;
    plStack_4e0 = plVar12;
    pplStack_4d8 = pplVar14;
    plStack_4d0 = plVar13;
    plStack_4c8 = plVar2;
    pppuStack_4c0 = &pppuStack_440;
    _objc_retain(plVar4);
    if (plVar6 != (long *)0x0) {
      plVar13 = (long *)plVar6[1];
      plVar11 = (long *)&UNK_110a02778;
      (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
      if ((int)plVar13 != 0) {
        plVar13 = (long *)plVar6[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          plVar12 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar12 = plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_510,plVar12);
        uStack_530 = 0;
        uStack_528 = 0;
        uStack_520 = 0;
        func_0x00010007e1e8(&uStack_530,auStack_510,&lStack_4f8,1);
        plVar11 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_530,puVar7);
        puStack_518 = (undefined1 *)&uStack_530;
        func_0x00010007e5dc(&puStack_518);
        if (cStack_4f9 < '\0') {
          __ZdlPv(auStack_510[0]);
        }
      }
    }
    plVar13 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
      ___stack_chk_fail();
      _objc_release(plVar4);
      _objc_release(plVar4);
      __Unwind_Resume();
      _objc_retain(plVar11);
      if (plVar13 != (long *)0x0) {
        FUN_107ca2340(plVar13,plVar11,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar11);
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca168c; end: 107ca17ff;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca168c(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *puStack_498;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  long *plStack_460;
  long **pplStack_458;
  long *plStack_450;
  long *plStack_448;
  undefined8 ***pppuStack_440;
  code *pcStack_438;
  long alStack_430 [3];
  undefined1 *puStack_418;
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long **pplStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  long alStack_3b0 [3];
  long *plStack_398;
  long **applStack_390 [2];
  char cStack_379;
  long lStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_340 [3];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  long alStack_2c0 [3];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  long alStack_240 [3];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar1 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a024f8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar1 = (undefined *)puVar7;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar1 = (undefined *)puVar7;
      param_5 = param_4;
    }
  }
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_107ca1800;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  puVar8 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_e0,plVar12);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar12 = (long *)&UNK_110a02548;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined *)puVar7;
    param_5 = puVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined *)puVar7;
      param_5 = puVar1;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  puVar7 = &uStack_1c0;
  pcStack_108 = FUN_107ca1974;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar12;
  puVar1 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar12);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_1a0,plVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_188,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_170,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    plVar13 = (long *)&UNK_110a02598;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a02598,&uStack_1c0,param_6);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar15 = 0;
    puVar1 = (undefined *)puVar7;
    do {
      if ((&cStack_159)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_1c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar8);
  plVar11 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar7 = auStack_1a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar7);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(plVar12);
  plVar2 = plVar11;
  __Unwind_Resume();
  plVar6 = alStack_240;
  pcStack_1c8 = FUN_107ca1c34;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puVar9 = puVar1;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar7;
  plStack_1f0 = plVar11;
  puStack_1e8 = param_5;
  puStack_1e0 = puVar8;
  plStack_1d8 = plVar12;
  pppuStack_1d0 = &ppuStack_110;
  _objc_retain(plVar13);
  plVar12 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar12 = (long *)plVar2[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    puVar7 = auStack_220;
    func_0x00010002b838(auStack_220,plVar11);
    alStack_240[0] = 0;
    alStack_240[1] = 0;
    alStack_240[2] = 0;
    func_0x00010007e1e8(alStack_240,auStack_220,&lStack_208,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,alStack_240,puVar1);
    puStack_228 = (undefined1 *)alStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar9 = (undefined *)plVar6;
    plVar11 = alStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = (undefined *)plVar6;
      plVar11 = alStack_240;
    }
  }
  plVar2 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_2c0;
  pcStack_248 = FUN_107ca1da8;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar1 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = puVar7;
  plStack_270 = plVar11;
  plStack_268 = plVar12;
  plStack_260 = plVar2;
  plStack_258 = plVar13;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar7 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,plVar11);
    alStack_2c0[0] = 0;
    alStack_2c0[1] = 0;
    alStack_2c0[2] = 0;
    func_0x00010007e1e8(alStack_2c0,auStack_2a0,&lStack_288,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)alStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar1 = (undefined *)plVar10;
    plVar11 = alStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar11 = alStack_2c0;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    _objc_release(plVar4);
    _objc_release(plVar4);
    plVar3 = plVar12;
    __Unwind_Resume();
    plVar10 = alStack_340;
    pcStack_2c8 = FUN_107ca1f1c;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = plVar6;
    puVar8 = puVar1;
    puStack_300 = unaff_x24;
    puStack_2f8 = puVar7;
    plStack_2f0 = plVar11;
    plStack_2e8 = plVar13;
    plStack_2e0 = plVar12;
    plStack_2d8 = plVar4;
    pppuStack_2d0 = &pppuStack_250;
    _objc_retain(plVar6);
    plVar13 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar13 = (long *)plVar3[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        plVar11 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar11 = plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      puVar7 = auStack_320;
      func_0x00010002b838(auStack_320,plVar11);
      alStack_340[0] = 0;
      alStack_340[1] = 0;
      alStack_340[2] = 0;
      func_0x00010007e1e8(alStack_340,auStack_320,&lStack_308,1);
      plVar2 = (long *)&UNK_110a02688;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_340,puVar1);
      puStack_328 = (undefined1 *)alStack_340;
      func_0x00010007e5dc(&puStack_328);
      puVar8 = (undefined *)plVar10;
      plVar11 = alStack_340;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
        puVar8 = (undefined *)plVar10;
        plVar11 = alStack_340;
      }
    }
    plVar12 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar4 = plVar12;
    __Unwind_Resume();
    plVar3 = alStack_3b0;
    pcStack_348 = FUN_107ca2090;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar5 = (long **)0x0;
    plStack_370 = plVar11;
    plStack_368 = plVar13;
    plStack_360 = plVar12;
    plStack_358 = plVar6;
    pppuStack_350 = &pppuStack_2d0;
    if (plVar4 != (long *)0x0) {
      plVar12 = (long *)plVar4[1];
      puVar1 = &UNK_10f44f9bb;
      if ((int)plVar2 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_390,puVar1);
      alStack_3b0[0] = 0;
      alStack_3b0[1] = 0;
      alStack_3b0[2] = 0;
      func_0x00010007e1e8(alStack_3b0,applStack_390,&lStack_378,1);
      plVar2 = (long *)&UNK_110a026d8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a026d8,alStack_3b0,puVar8);
      pplVar5 = &plStack_398;
      plStack_398 = alStack_3b0;
      func_0x00010007e5dc();
      puVar8 = (undefined *)plVar3;
      plVar13 = alStack_3b0;
      if (cStack_379 < '\0') {
        pplVar5 = applStack_390[0];
        __ZdlPv();
        puVar8 = (undefined *)plVar3;
        plVar13 = alStack_3b0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
      ___stack_chk_fail();
      plStack_398 = plVar13;
      func_0x00010007e5dc(&plStack_398);
      if (cStack_379 < '\0') {
        __ZdlPv(applStack_390[0]);
      }
      pplVar14 = pplVar5;
      __Unwind_Resume();
      plVar6 = alStack_430;
      pcStack_3b8 = FUN_107ca21a8;
      lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar4 = plVar2;
      puVar1 = puVar8;
      puStack_3f0 = unaff_x24;
      puStack_3e8 = puVar7;
      plStack_3e0 = plVar11;
      plStack_3d8 = plVar13;
      plStack_3d0 = plVar12;
      pplStack_3c8 = pplVar5;
      pppuStack_3c0 = &pppuStack_350;
      _objc_retain(plVar2);
      if (pplVar14 != (long **)0x0) {
        plVar13 = pplVar14[1];
        plVar4 = (long *)&UNK_110a02728;
        (**(code **)(*plVar13 + 0x28))();
        if ((int)plVar13 != 0) {
          pplVar14 = (long **)pplVar14[1];
          _objc_retain(plVar2);
          if (plVar2 == (long *)0x0) {
            plVar13 = (long *)&UNK_10f44f7d9;
          }
          else {
            plVar13 = plVar2;
            _objc_retainAutorelease(plVar2);
            func_0x00010bdc3520();
          }
          _objc_release(plVar2);
          puVar7 = auStack_410;
          func_0x00010002b838(auStack_410,plVar13);
          alStack_430[0] = 0;
          alStack_430[1] = 0;
          alStack_430[2] = 0;
          func_0x00010007e1e8(alStack_430,auStack_410,&lStack_3f8,1);
          plVar4 = (long *)&UNK_110a02728;
          (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_430,(long)puVar8 * 10);
          puStack_418 = (undefined1 *)alStack_430;
          func_0x00010007e5dc(&puStack_418);
          puVar1 = (undefined *)plVar6;
          plVar11 = alStack_430;
          if (cStack_3f9 < '\0') {
            __ZdlPv(auStack_410[0]);
            puVar1 = (undefined *)plVar6;
            plVar11 = alStack_430;
          }
        }
      }
      plVar13 = plVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
        ___stack_chk_fail();
        _objc_release(plVar2);
        _objc_release(plVar2);
        plVar6 = plVar13;
        __Unwind_Resume();
        pcStack_438 = FUN_107ca2340;
        lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar12 = plVar4;
        puStack_470 = unaff_x24;
        puStack_468 = puVar7;
        plStack_460 = plVar11;
        pplStack_458 = pplVar14;
        plStack_450 = plVar13;
        plStack_448 = plVar2;
        pppuStack_440 = &pppuStack_3c0;
        _objc_retain(plVar4);
        if (plVar6 != (long *)0x0) {
          plVar13 = (long *)plVar6[1];
          plVar12 = (long *)&UNK_110a02778;
          (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
          if ((int)plVar13 != 0) {
            plVar13 = (long *)plVar6[1];
            _objc_retain(plVar4);
            if (plVar4 == (long *)0x0) {
              plVar11 = (long *)&UNK_10f44f7d9;
            }
            else {
              plVar11 = plVar4;
              _objc_retainAutorelease(plVar4);
              func_0x00010bdc3520();
            }
            _objc_release(plVar4);
            func_0x00010002b838(auStack_490,plVar11);
            uStack_4b0 = 0;
            uStack_4a8 = 0;
            uStack_4a0 = 0;
            func_0x00010007e1e8(&uStack_4b0,auStack_490,&lStack_478,1);
            plVar12 = (long *)&UNK_110a02778;
            (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_4b0,puVar1);
            puStack_498 = (undefined1 *)&uStack_4b0;
            func_0x00010007e5dc(&puStack_498);
            if (cStack_479 < '\0') {
              __ZdlPv(auStack_490[0]);
            }
          }
        }
        plVar13 = plVar4;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
          ___stack_chk_fail();
          _objc_release(plVar4);
          _objc_release(plVar4);
          __Unwind_Resume();
          _objc_retain(plVar12);
          if (plVar13 != (long *)0x0) {
            FUN_107ca2340(plVar13,plVar12,(long)(param_1 * 1000.0));
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(plVar12);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107ca1800; end: 107ca1973;  */

/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_107ca1800(double param_1,long param_2,long *param_3,undefined *param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 *puStack_418;
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  long *plStack_3e0;
  long **pplStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  long alStack_3b0 [3];
  undefined1 *puStack_398;
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long **pplStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  long alStack_330 [3];
  long *plStack_318;
  long **applStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  long alStack_2c0 [3];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  long alStack_240 [3];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  long alStack_1c0 [3];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar13 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = param_4;
    }
  }
  plVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_140;
  pcStack_88 = FUN_107ca1974;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  puVar1 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar11 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_120,plVar11);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_108,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_f0,puVar1);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    plVar11 = (long *)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_140,param_6);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar15 = 0;
    puVar1 = (undefined *)puVar8;
    do {
      if ((&cStack_d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar7);
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar8 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(plVar13);
  plVar2 = plVar12;
  __Unwind_Resume();
  plVar6 = alStack_1c0;
  pcStack_148 = FUN_107ca1c34;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar11;
  puVar9 = puVar1;
  puStack_180 = unaff_x24;
  puStack_178 = puVar8;
  plStack_170 = plVar12;
  puStack_168 = param_5;
  puStack_160 = puVar7;
  plStack_158 = plVar13;
  ppuStack_150 = &puStack_90;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar13 = (long *)plVar2[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    puVar8 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,plVar12);
    alStack_1c0[0] = 0;
    alStack_1c0[1] = 0;
    alStack_1c0[2] = 0;
    func_0x00010007e1e8(alStack_1c0,auStack_1a0,&lStack_188,1);
    plVar4 = (long *)&UNK_110a025e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a025e8,alStack_1c0,puVar1);
    puStack_1a8 = (undefined1 *)alStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = (undefined *)plVar6;
    plVar12 = alStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = (undefined *)plVar6;
      plVar12 = alStack_1c0;
    }
  }
  plVar2 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar3 = plVar2;
  __Unwind_Resume();
  plVar10 = alStack_240;
  pcStack_1c8 = FUN_107ca1da8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  puVar7 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar8;
  plStack_1f0 = plVar12;
  plStack_1e8 = plVar13;
  plStack_1e0 = plVar2;
  plStack_1d8 = plVar11;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(plVar4);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    puVar8 = auStack_220;
    func_0x00010002b838(auStack_220,plVar12);
    alStack_240[0] = 0;
    alStack_240[1] = 0;
    alStack_240[2] = 0;
    func_0x00010007e1e8(alStack_240,auStack_220,&lStack_208,1);
    plVar6 = (long *)&UNK_110a02638;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02638,alStack_240,puVar9);
    puStack_228 = (undefined1 *)alStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar7 = (undefined *)plVar10;
    plVar12 = alStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar7 = (undefined *)plVar10;
      plVar12 = alStack_240;
    }
  }
  plVar11 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar11;
  __Unwind_Resume();
  plVar10 = alStack_2c0;
  pcStack_248 = FUN_107ca1f1c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar6;
  puVar1 = puVar7;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  plStack_270 = plVar12;
  plStack_268 = plVar13;
  plStack_260 = plVar11;
  plStack_258 = plVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar12 = plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    puVar8 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,plVar12);
    alStack_2c0[0] = 0;
    alStack_2c0[1] = 0;
    alStack_2c0[2] = 0;
    func_0x00010007e1e8(alStack_2c0,auStack_2a0,&lStack_288,1);
    plVar2 = (long *)&UNK_110a02688;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02688,alStack_2c0,puVar7);
    puStack_2a8 = (undefined1 *)alStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar1 = (undefined *)plVar10;
    plVar12 = alStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar1 = (undefined *)plVar10;
      plVar12 = alStack_2c0;
    }
  }
  plVar11 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar4 = plVar11;
  __Unwind_Resume();
  plVar3 = alStack_330;
  pcStack_2c8 = FUN_107ca2090;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  plStack_2f0 = plVar12;
  plStack_2e8 = plVar13;
  plStack_2e0 = plVar11;
  plStack_2d8 = plVar6;
  pppuStack_2d0 = &pppuStack_250;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    puVar7 = &UNK_10f44f9bb;
    if ((int)plVar2 == 0) {
      puVar7 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_310,puVar7);
    alStack_330[0] = 0;
    alStack_330[1] = 0;
    alStack_330[2] = 0;
    func_0x00010007e1e8(alStack_330,applStack_310,&lStack_2f8,1);
    plVar2 = (long *)&UNK_110a026d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a026d8,alStack_330,puVar1);
    pplVar5 = &plStack_318;
    plStack_318 = alStack_330;
    func_0x00010007e5dc();
    puVar1 = (undefined *)plVar3;
    plVar13 = alStack_330;
    if (cStack_2f9 < '\0') {
      pplVar5 = applStack_310[0];
      __ZdlPv();
      puVar1 = (undefined *)plVar3;
      plVar13 = alStack_330;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_318 = plVar13;
  func_0x00010007e5dc(&plStack_318);
  if (cStack_2f9 < '\0') {
    __ZdlPv(applStack_310[0]);
  }
  pplVar14 = pplVar5;
  __Unwind_Resume();
  plVar6 = alStack_3b0;
  pcStack_338 = FUN_107ca21a8;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar7 = puVar1;
  puStack_370 = unaff_x24;
  puStack_368 = puVar8;
  plStack_360 = plVar12;
  plStack_358 = plVar13;
  plStack_350 = plVar11;
  pplStack_348 = pplVar5;
  pppuStack_340 = &pppuStack_2d0;
  _objc_retain(plVar2);
  if (pplVar14 != (long **)0x0) {
    plVar13 = pplVar14[1];
    plVar4 = (long *)&UNK_110a02728;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      pplVar14 = (long **)pplVar14[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar13 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      puVar8 = auStack_390;
      func_0x00010002b838(auStack_390,plVar13);
      alStack_3b0[0] = 0;
      alStack_3b0[1] = 0;
      alStack_3b0[2] = 0;
      func_0x00010007e1e8(alStack_3b0,auStack_390,&lStack_378,1);
      plVar4 = (long *)&UNK_110a02728;
      (*(code *)(*pplVar14)[3])(pplVar14,&UNK_110a02728,alStack_3b0,(long)puVar1 * 10);
      puStack_398 = (undefined1 *)alStack_3b0;
      func_0x00010007e5dc(&puStack_398);
      puVar7 = (undefined *)plVar6;
      plVar12 = alStack_3b0;
      if (cStack_379 < '\0') {
        __ZdlPv(auStack_390[0]);
        puVar7 = (undefined *)plVar6;
        plVar12 = alStack_3b0;
      }
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
    ___stack_chk_fail();
    _objc_release(plVar2);
    _objc_release(plVar2);
    plVar6 = plVar13;
    __Unwind_Resume();
    pcStack_3b8 = FUN_107ca2340;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar4;
    puStack_3f0 = unaff_x24;
    puStack_3e8 = puVar8;
    plStack_3e0 = plVar12;
    pplStack_3d8 = pplVar14;
    plStack_3d0 = plVar13;
    plStack_3c8 = plVar2;
    pppuStack_3c0 = &pppuStack_340;
    _objc_retain(plVar4);
    if (plVar6 != (long *)0x0) {
      plVar13 = (long *)plVar6[1];
      plVar11 = (long *)&UNK_110a02778;
      (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_110a02778);
      if ((int)plVar13 != 0) {
        plVar13 = (long *)plVar6[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          plVar12 = (long *)&UNK_10f44f7d9;
        }
        else {
          plVar12 = plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_410,plVar12);
        uStack_430 = 0;
        uStack_428 = 0;
        uStack_420 = 0;
        func_0x00010007e1e8(&uStack_430,auStack_410,&lStack_3f8,1);
        plVar11 = (long *)&UNK_110a02778;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a02778,&uStack_430,puVar7);
        puStack_418 = (undefined1 *)&uStack_430;
        func_0x00010007e5dc(&puStack_418);
        if (cStack_3f9 < '\0') {
          __ZdlPv(auStack_410[0]);
        }
      }
    }
    plVar13 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
      ___stack_chk_fail();
      _objc_release(plVar4);
      _objc_release(plVar4);
      __Unwind_Resume();
      _objc_retain(plVar11);
      if (plVar13 != (long *)0x0) {
        FUN_107ca2340(plVar13,plVar11,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar11);
      return;
    }
    return;
  }
  return;
}


