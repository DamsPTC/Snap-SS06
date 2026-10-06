/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068d621c; end: 1068d64fb;  */

void FUN_1068d621c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ced30;
  _objc_alloc();
  func_0x00010c0126a0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(uVar9);
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1068eaa54;
  puStack_110 = &UNK_1109488b0;
  uStack_108 = uVar9;
  _objc_retain(uVar9);
  lVar7 = lVar3;
  func_0x000100504554(lVar3,&puStack_128);
  _objc_release(uStack_108);
  _objc_release(uVar9);
  lVar4 = lVar7;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar13 = *plStack_160;
      do {
        lVar8 = 0;
        do {
          if (*plStack_160 != lVar13) {
            _objc_enumerationMutation(lVar7);
          }
          lVar12 = *(long *)(lStack_168 + lVar8 * 8);
          lVar5 = lVar12;
          func_0x00010c25b720();
          if (lVar5 == 3) {
            lVar5 = lVar12;
            func_0x00010c259560(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010afef4dc();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            lVar5 = lVar6;
            func_0x00010c15e620(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf454e0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar10);
            _objc_release(lVar12);
            _objc_release(lVar5);
            _objc_release(lVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar7;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar7);
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  }
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1068d64fc;
  puStack_190 = &UNK_11084a9e8;
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_1a8 = puVar11;
  _objc_retain(uVar1);
  uStack_180 = 0;
  puStack_188 = puVar10;
  uStack_178 = uVar1;
  _objc_retain(puVar10);
  func_0x00010007380c(uVar9,&puStack_1a8);
  _objc_release(uStack_180);
  _objc_release(puStack_188);
  _objc_release(uStack_178);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(puVar2 + 0x30);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068d6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x10))(lVar7,*(undefined8 *)(puVar2 + 0x20),*(undefined8 *)(puVar2 + 0x28))
    ;
    return;
  }
  return;
}



/* Entry: 1068d64fc; end: 1068d6517;  */

void FUN_1068d64fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068d6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1068d6518; end: 1068d6647; -[SCDiscoverFeedDataStore accessDataOnPerformer:completionQueue:completion:] */

void FUN_1068d6518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d6648; end: 1068d66cb;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1068d6648(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
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
    func_0x00010002a3a8(lVar3);
    func_0x000107c61180();
    (*pcVar2)(lVar4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001068d66c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3);
  return;
}



/* Entry: 1068d66cc; end: 1068d67fb; -[SCDiscoverFeedDataStore saveSectionsWithMutationBlock:completionQueue:completion:] */

void FUN_1068d66cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d67fc; end: 1068d688f;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1068d67fc(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = *(long *)(param_1 + 0x28);
  _objc_retain();
  (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99920(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
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
    (*pcVar2)(uVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1068d6890; end: 1068d69bf; -[SCDiscoverFeedDataStore appendSectionWithMutationBlock:completionQueue:completion:] */

void FUN_1068d6890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d69c0; end: 1068d6a53;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1068d69c0(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = *(long *)(param_1 + 0x28);
  _objc_retain();
  (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd440(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
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
    (*pcVar2)(uVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1068d6a54; end: 1068d6b83; -[SCDiscoverFeedDataStore amendUpNextDefaultPlaylist:completionQueue:completion:] */

void FUN_1068d6a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d6b84; end: 1068d6bd3;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1068d6b84(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bdca600();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
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
    (*pcVar2)(uVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1068d6bd4; end: 1068d6cb3; -[SCDiscoverFeedDataStore prependStories:forFeedType:] */

void FUN_1068d6bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d6cb4; end: 1068d6d07;  */

void FUN_1068d6cb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be799e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d6d08; end: 1068d6de7; -[SCDiscoverFeedDataStore appendStories:forFeedType:] */

void FUN_1068d6d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d6de8; end: 1068d6e3b;  */

void FUN_1068d6de8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcd520();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d6e3c; end: 1068d6f1b; -[SCDiscoverFeedDataStore saveStories:forFeedType:] */

void FUN_1068d6e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d6f1c; end: 1068d6f6f;  */

void FUN_1068d6f1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be99e00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d6f70; end: 1068d6f77; -[SCDiscoverFeedDataStore updateStories:] */

void FUN_1068d6f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStories_updateCreatorSetti_112680350,param_3,1);
  return;
}



/* Entry: 1068d6f78; end: 1068d7057; -[SCDiscoverFeedDataStore updateStories:updateCreatorSettings:] */

void FUN_1068d6f78(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d7058; end: 1068d70bf;  */

void FUN_1068d7058(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee0d40();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed6480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068d70c0; end: 1068d7197; -[SCDiscoverFeedDataStore removeStories:] */

void FUN_1068d70c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d7198; end: 1068d71cb;  */

void FUN_1068d7198(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d71cc; end: 1068d7223; -[SCDiscoverFeedDataStore deleteExpiredSnaps] */

void FUN_1068d71cc(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1068d7224;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_40);
  return;
}



/* Entry: 1068d7224; end: 1068d72b7;  */

void FUN_1068d7224(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068d79d4;
  puStack_48 = &UNK_1109486a0;
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  FUN_1068d72b8(uVar2,uVar1,puVar3,&puStack_60);
  _objc_release(puVar3);
  return;
}



/* Entry: 1068d72b8; end: 1068d79d3;  */

void FUN_1068d72b8(undefined *param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auStack_430 [8];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [8];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [8];
  long lStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined **ppuStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  long lStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  long lStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  long lStack_308;
  ulong uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lStack_338 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_1);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_310 = puVar1;
  lStack_308 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puStack_318 = puVar21;
  _objc_retain(param_1);
  puVar1 = param_1;
  func_0x00010bf52a60();
  uStack_300 = param_3;
  if (puVar1 != (undefined *)0x0) {
    lVar16 = *plStack_280;
    lStack_330 = lVar16;
    puStack_328 = param_1;
    do {
      puVar21 = (undefined *)0x0;
      puStack_320 = puVar1;
      do {
        if (*plStack_280 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        lVar23 = *(long *)(lStack_288 + (long)puVar21 * 8);
        puVar2 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar2;
        if (lVar23 != 0 && puVar2 != (undefined *)0x0) {
          puVar22 = puVar2;
          func_0x00010c25b720();
          if (puVar22 == (undefined *)0x3) {
            _objc_retain(puVar2);
            _objc_retain(param_3);
            puVar22 = puVar2;
            func_0x00010c25b720();
            if (puVar22 == (undefined *)0x3) {
              uStack_228 = 0;
              uStack_230 = 0;
              uStack_218 = 0;
              uStack_220 = 0;
              lStack_248 = 0;
              uStack_250 = 0;
              uStack_238 = 0;
              plStack_240 = (long *)0x0;
              puVar1 = puVar2;
              func_0x00010c259560();
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar1;
              func_0x00010afef4dc();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar22;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar22);
              _objc_release(puVar1);
              puVar1 = puVar3;
              func_0x00010bf52a60();
              if (puVar1 != (undefined *)0x0) {
                lVar16 = *plStack_240;
                do {
                  puVar22 = (undefined *)0x0;
                  do {
                    if (*plStack_240 != lVar16) {
                      _objc_enumerationMutation(puVar3);
                    }
                    uVar24 = *(ulong *)(lStack_248 + (long)puVar22 * 8);
                    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
                    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = uVar24;
                    func_0x00010c071ae0();
                    _objc_release(puVar4);
                    if ((uVar5 & 1) == 0) {
                      func_0x00010bf9c800(uVar24);
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uStack_300;
                      func_0x00010c06bb60();
                      _objc_release(uVar24);
                      if ((uVar5 & 1) != 0) {
                        _objc_release(puVar3);
                        param_3 = uStack_300;
                        _objc_release(uStack_300);
                        _objc_release(puVar2);
                        _objc_retain(puVar2);
                        puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
                        func_0x00010bf64de0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c259560();
                        _objc_retainAutoreleasedReturnValue();
                        puVar22 = puVar20;
                        func_0x00010afef4dc();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(puVar20);
                        puVar20 = puVar22;
                        func_0x00010c245680();
                        _objc_retainAutoreleasedReturnValue();
                        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_100 = 0xc2000000;
                        pcStack_f8 = FUN_1068eaa9c;
                        puStack_f0 = &UNK_110948db0;
                        _objc_retain(puVar1);
                        puVar3 = puVar20;
                        puStack_e8 = puVar1;
                        func_0x0001006372a4(puVar20,&puStack_108);
                        _objc_release(puVar20);
                        puVar20 = puVar3;
                        func_0x00010bf529e0();
                        if (puVar20 == (undefined *)0x0) {
                          puVar20 = (undefined *)0x0;
                        }
                        else {
                          puVar4 = PTR_PTR_1126c6d80;
                          func_0x00010bf81c20(PTR_PTR_1126c6d80);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c2b9a60();
                          _objc_unsafeClaimAutoreleasedReturnValue();
                          puVar6 = PTR_PTR_1126c6d78;
                          func_0x00010bf82080();
                          _objc_retainAutoreleasedReturnValue();
                          puVar20 = PTR_PTR_1126c6d88;
                          puVar7 = puVar4;
                          func_0x00010bf21f60(puVar4);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c11abc0(puVar20);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c2ba3c0(puVar6);
                          _objc_unsafeClaimAutoreleasedReturnValue();
                          _objc_release(puVar20);
                          _objc_release(puVar7);
                          puVar20 = puVar6;
                          func_0x00010bf21f60();
                          _objc_retainAutoreleasedReturnValue();
                          param_3 = uStack_300;
                          _objc_release(puVar6);
                          _objc_release(puVar4);
                        }
                        param_1 = puStack_328;
                        lVar16 = lStack_330;
                        _objc_release(puVar3);
                        _objc_release(puStack_e8);
                        _objc_release(puVar22);
                        _objc_release(puVar1);
                        _objc_release(puVar2);
                        _objc_release(puVar2);
                        goto LAB_1068d779c;
                      }
                    }
                    puVar22 = puVar22 + 1;
                  } while (puVar1 != puVar22);
                  puVar1 = puVar3;
                  func_0x00010bf52a60();
                } while (puVar1 != (undefined *)0x0);
              }
              _objc_release(puVar3);
              param_3 = uStack_300;
              _objc_release(uStack_300);
              _objc_release(puVar2);
              lVar16 = lStack_330;
              param_1 = puStack_328;
LAB_1068d779c:
              puVar1 = puStack_320;
              if (puVar20 == (undefined *)0x0) goto LAB_1068d77b4;
            }
            else {
              _objc_release(param_3);
              _objc_release(puVar2);
            }
          }
          else {
            puVar22 = puVar2;
            func_0x00010c25b720();
            if ((puVar22 == (undefined *)0x2) &&
               (puVar22 = puVar2, func_0x00010847310c(), (int)puVar22 != 0)) {
              _objc_release(puVar2);
              puVar20 = (undefined *)0x0;
              goto LAB_1068d77b4;
            }
          }
          func_0x00010c1d0640(puStack_310);
        }
LAB_1068d77b4:
        _objc_release(puVar20);
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar1);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_1);
  lVar16 = lStack_308;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  _objc_retain(lStack_308);
  func_0x00010bf52a60();
  uVar14 = (undefined1)param_6;
  iVar15 = (int)param_7;
  if (lVar16 != 0) {
    lVar23 = *plStack_2c0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_2c0 != lVar23) {
          _objc_enumerationMutation(lStack_308);
        }
        lVar8 = lStack_308;
        func_0x00010c0e00e0(lStack_308);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf51e00();
        puVar1 = puStack_310;
        puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2f0 = 0xc2000000;
        pcStack_2e8 = FUN_1068eaa60;
        puStack_2e0 = &UNK_110886d58;
        _objc_retain(puStack_310);
        puStack_2d8 = puVar1;
        lVar10 = lVar9;
        func_0x0001006372a4(lVar9,&puStack_2f8);
        func_0x00010c1d0640(puStack_318);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(puStack_2d8);
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = lStack_308;
      func_0x00010bf52a60();
      uVar14 = (undefined1)param_6;
      iVar15 = (int)param_7;
    } while (lVar16 != 0);
  }
  lVar23 = lStack_308;
  _objc_release(lStack_308);
  puVar21 = puStack_310;
  puVar2 = puStack_310;
  func_0x00010bf51e00();
  puVar1 = puStack_318;
  puVar20 = puStack_318;
  func_0x00010bf51e00();
  lVar16 = lStack_338;
  puVar22 = puVar2;
  puVar3 = puVar20;
  (**(code **)(lStack_338 + 0x10))(lStack_338);
  _objc_release(puVar20);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar21);
  _objc_release(lVar16);
  _objc_release(uStack_300);
  _objc_release(lVar23);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puStack_380 = puVar1;
  puStack_378 = puVar21;
  lStack_370 = lVar16;
  lStack_368 = lVar23;
  pcStack_348 = FUN_1068d79d4;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = puVar20;
  puStack_358 = puVar2;
  puStack_350 = &stack0xfffffffffffffff0;
  _objc_retain(puVar22);
  func_0x00010bf51e00();
  puVar21 = PTR____NSDictionary0__struct_11034ab58;
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar1);
  uVar11 = *(undefined8 *)(lVar16 + 0x30);
  *(undefined **)(lVar16 + 0x30) = puVar1;
  _objc_release(uVar11);
  _objc_release(puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = puVar22;
  func_0x00010bf51e00();
  _objc_release(puVar22);
  func_0x00010bee0da0(uVar11);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_398 = &PTR____CFConstantStringClassReference_110f48cf8;
  puStack_390 = PTR____kCFBooleanTrue_11034ab68;
  uVar13 = 1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  puVar20 = puVar2;
  func_0x00010be03d20(uVar17);
  uVar12 = SUB81(puVar20,0);
  puVar20 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  puStack_3d8 = puVar21;
  pcStack_3a8 = FUN_1068d7b0c;
  lStack_3e0 = lVar16;
  puStack_3d0 = puVar1;
  puStack_3c8 = param_1;
  puStack_3c0 = puVar2;
  uStack_3b8 = uVar17;
  ppuStack_3b0 = &puStack_350;
  _objc_retain(uVar11);
  _objc_initWeak(auStack_3e8,puVar20);
  if (iVar15 == 0) {
    uVar17 = *(undefined8 *)(puVar20 + 0x70);
    puVar18 = auStack_430;
    _objc_copyWeak(puVar18,auStack_3e8);
    _objc_retain(uVar11);
    uStack_428 = uVar12;
    uStack_427 = uVar13;
    uStack_426 = uVar14;
    func_0x00010c0f7fc0(uVar17);
    uVar17 = uVar11;
  }
  else {
    uVar17 = *(undefined8 *)(puVar20 + 0x70);
    puStack_420 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_418 = 0xc2000000;
    pcStack_410 = FUN_1068d7c7c;
    puStack_408 = &UNK_1108488f8;
    puVar18 = auStack_3f8;
    _objc_copyWeak(puVar18,auStack_3e8);
    _objc_retain(uVar11);
    uStack_400 = uVar11;
    uStack_3f0 = uVar12;
    func_0x00010c0f7fc0(uVar17);
    uVar17 = uStack_400;
  }
  _objc_release(uVar17);
  _objc_destroyWeak(puVar18);
  _objc_destroyWeak(auStack_3e8);
  _objc_release(uVar11);
  return;
}



/* Entry: 1068d79d4; end: 1068d7b0b;  */

void FUN_1068d79d4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,int param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_f0 [8];
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf51e00();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 != (undefined *)0x0) {
    puVar3 = param_3;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar3);
  uVar2 = *(undefined8 *)(lVar10 + 0x30);
  *(undefined **)(lVar10 + 0x30) = puVar3;
  _objc_release(uVar2);
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
  func_0x00010bee0da0(uVar7);
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f48cf8;
  puStack_50 = PTR____kCFBooleanTrue_11034ab68;
  uVar6 = 1;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  puVar4 = puVar3;
  func_0x00010be03d20(uVar8);
  uVar5 = SUB81(puVar4,0);
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_98 = puVar1;
  pcStack_68 = FUN_1068d7b0c;
  lStack_a0 = lVar10;
  uStack_90 = uVar2;
  lStack_88 = param_1;
  puStack_80 = puVar3;
  uStack_78 = uVar8;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(uVar7);
  _objc_initWeak(auStack_a8,puVar4);
  if (param_7 == 0) {
    uVar2 = *(undefined8 *)(puVar4 + 0x70);
    puVar9 = auStack_f0;
    _objc_copyWeak(puVar9,auStack_a8);
    _objc_retain(uVar7);
    uStack_e8 = uVar5;
    uStack_e7 = uVar6;
    uStack_e6 = param_6;
    func_0x00010c0f7fc0(uVar2);
    uVar2 = uVar7;
  }
  else {
    uVar2 = *(undefined8 *)(puVar4 + 0x70);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1068d7c7c;
    puStack_c8 = &UNK_1108488f8;
    puVar9 = auStack_b8;
    _objc_copyWeak(puVar9,auStack_a8);
    _objc_retain(uVar7);
    uStack_c0 = uVar7;
    uStack_b0 = uVar5;
    func_0x00010c0f7fc0(uVar2);
    uVar2 = uStack_c0;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar9);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar7);
  return;
}



/* Entry: 1068d7b0c; end: 1068d7c7b; -[SCDiscoverFeedDataStore updateStoryWithCreator:isPublisher:isSubscribed:isOptedInNotification:isHidden:] */

void FUN_1068d7b0c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,int param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  if (param_7 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puVar1 = auStack_90;
    _objc_copyWeak(puVar1,auStack_48);
    _objc_retain(param_3);
    uStack_88 = param_4;
    uStack_87 = param_5;
    uStack_86 = param_6;
    func_0x00010c0f7fc0(uVar2);
    uVar2 = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1068d7c7c;
    puStack_68 = &UNK_1108488f8;
    puVar1 = auStack_58;
    _objc_copyWeak(puVar1,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar2);
    uVar2 = uStack_60;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d7c7c; end: 1068d7cf3;  */

void FUN_1068d7c7c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d7cf4; end: 1068d7de3; -[SCDiscoverFeedDataStore removeStories:forFeedType:flushAllImpressions:] */

void FUN_1068d7cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d7de4; end: 1068d7e27;  */

void FUN_1068d7de4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d7e28; end: 1068d7eff; -[SCDiscoverFeedDataStore unsubscribeStories:] */

void FUN_1068d7e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d7f00; end: 1068d7f4f;  */

void FUN_1068d7f00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8d780();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d7f50; end: 1068d8087; -[SCDiscoverFeedDataStore removeStoriesByStoriesDedupFp:forFeedType:completionQueue:completion:] */

void FUN_1068d7f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d8088; end: 1068d80c7;  */

void FUN_1068d8088(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d80c8; end: 1068d81f7; -[SCDiscoverFeedDataStore removeStoriesByCreatorId:similarStoryIdFpsArray:feedTypes:] */

void FUN_1068d80c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
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



/* Entry: 1068d81f8; end: 1068d822f;  */

void FUN_1068d81f8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d8230; end: 1068d8343; -[SCDiscoverFeedDataStore removeSubfeedForFeedType:] */

void FUN_1068d8230(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 1068d8344; end: 1068d8377;  */

void FUN_1068d8344(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d8378; end: 1068d84e3; -[SCDiscoverFeedDataStore replaceStory:withNewStory:inFeedType:] */

void FUN_1068d8378(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_1068d84a0;
    }
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_50 = param_5;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
LAB_1068d84a0:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d84e4; end: 1068d851b;  */

void FUN_1068d84e4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8eca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d851c; end: 1068d88a3; -[SCDiscoverFeedDataStore _replaceStoryOnPerformer:withNewStory:inFeedType:] */

void FUN_1068d851c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_3;
  func_0x00010c259740();
  if ((lVar8 == 0) || (lVar8 = param_4, func_0x00010c259740(), lVar8 == 0)) goto LAB_1068d8844;
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc(PTR_PTR_1126ced30);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1);
  _objc_release(puVar3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0x7fffffffffffffff;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0x7fffffffffffffff;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf97e80(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puStack_78[3] != 0x7fffffffffffffff) {
    lVar8 = *(long *)(param_1 + 0x38);
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      lVar8 = puStack_98[3];
      _objc_release();
      _objc_release(puVar3);
      if (lVar8 != 0x7fffffffffffffff) goto LAB_1068d880c;
      puVar3 = *(undefined **)(param_1 + 0x30);
      func_0x00010c0d3c80();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d3c80();
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259740(param_4);
      func_0x00010c0df880(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130f40(uVar5);
      _objc_release(puVar6);
      uVar4 = uVar5;
      func_0x00010bf51e00(uVar5);
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar4);
      puVar6 = puVar3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar6;
      _objc_release(uVar4);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0d3c80(uVar7);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259740(param_4);
      func_0x00010c0df880(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(puVar6);
      uVar4 = uVar7;
      func_0x00010bf51e00(uVar7);
      func_0x00010bee0da0(param_1);
      _objc_release(uVar4);
      func_0x00010be03d20(param_1);
      _objc_release(uVar7);
      _objc_release(uVar5);
    }
    _objc_release(puVar3);
  }
LAB_1068d880c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar1);
LAB_1068d8844:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d88a4; end: 1068d892f;  */

void FUN_1068d88a4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c282800();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c259740();
  if (lVar1 == lVar2) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_3;
  }
  lVar1 = param_2;
  func_0x00010c282800();
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c259740();
  if (lVar1 == lVar2) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_3;
  }
  return;
}



/* Entry: 1068d8930; end: 1068d8957; -[SCDiscoverFeedDataStore storiesCache] */

void FUN_1068d8930(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d8958; end: 1068d89af; -[SCDiscoverFeedDataStore triggerLoadedStoriesFromDiskIfNecessary] */

void FUN_1068d8958(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1068d89b0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_38);
  return;
}



/* Entry: 1068d89b0; end: 1068d8a97;  */

void FUN_1068d89b0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf82c80();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__announceDatastoreLoadedFromDisk_1125507c8);
    return;
  }
  func_0x00010bf82c80();
  if (lVar2 != 1) {
    func_0x00010c18f2a0(*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c09c380(uVar3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1068d8a98; end: 1068d8ac3;  */

void FUN_1068d8a98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d8ac4; end: 1068d8bb3; -[SCDiscoverFeedDataStore loadStoriesFromDiskWithCompletion:] */

void FUN_1068d8ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  _CACurrentMediaTime();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010be4e8e0(param_1,param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1068d8bb4; end: 1068d8c5f;  */

void FUN_1068d8bb4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)param_2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    func_0x00010852dfe4(*(undefined8 *)(lVar2 + 0x100),param_4,ppuVar1,1);
    if ((param_2 & 1) == 0) {
      func_0x00010c18f2a0(lVar2);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068d8c60; end: 1068d8db3; -[SCDiscoverFeedDataStore _loadStoriesFromClientSQLWithStartTime:completion:] */

void FUN_1068d8c60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc2240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c297260(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1068d8db4; end: 1068d90e3;  */

void FUN_1068d8db4(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar9 = *(long *)(param_1 + 0x20);
    if (lVar9 != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9,0,0,&PTR____CFConstantStringClassReference_110e643f8);
    }
    goto LAB_1068d90ac;
  }
  uVar2 = param_2;
  func_0x00010bf529e0();
  if (uVar2 == 4) {
    uVar3 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar5 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar3 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar6 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar7 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar4);
    uVar6 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    uVar11 = *(undefined8 *)(lVar1 + 0x70);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
LAB_1068d9078:
    _objc_release(uVar2);
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
    uVar10 = *(undefined8 *)(lVar1 + 0x70);
    _objc_retain(param_3);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar11);
    func_0x00010c0f7fc0(uVar10);
    _objc_release(uVar11);
    uVar2 = param_3;
    goto LAB_1068d9078;
  }
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar4);
LAB_1068d90ac:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1068d90e4; end: 1068d9127;  */

void FUN_1068d90e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),
             PTR_s__loadDBRecordsIntoMemoryWithFeed_112570d98,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1068d9128; end: 1068d9f87; -[SCDiscoverFeedDataStore _loadDBRecordsIntoMemoryWithFeeds:cards:feedCardRanks:preservedStories:startTime:completion:] */

void FUN_1068d9128(undefined8 param_1,long param_2,undefined **param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  code *pcStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar3);
  lVar4 = param_5;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    if (param_8 != 0) {
      param_3 = (undefined **)0x0;
      (**(code **)(param_8 + 0x10))(param_8,0,0,&PTR____CFConstantStringClassReference_110e64458);
    }
    goto LAB_1068d9f20;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  _objc_retain(param_5);
  lVar4 = param_5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    bVar1 = 0;
    lVar25 = *plStack_3c0;
    do {
      lVar24 = 0;
      do {
        if (*plStack_3c0 != lVar25) {
          _objc_enumerationMutation(param_5);
        }
        lVar21 = *(long *)(lStack_3c8 + lVar24 * 8);
        puVar8 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
        if (lVar21 == 0) {
          uVar23 = 0;
        }
        else {
          uVar23 = *(undefined8 *)(lVar21 + 0x20);
        }
        _objc_retain(uVar23);
        lStack_3d8 = 0;
        func_0x00010bfeea60(puVar8);
        lVar21 = lStack_3d8;
        _objc_retain(lStack_3d8);
        _objc_release(uVar23);
        func_0x00010c1ec620(puVar8);
        puVar9 = puVar8;
        func_0x00010bf67000(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740();
        func_0x00010c0df880(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar10);
        if (!(bool)(lVar21 == 0 | bVar1)) {
          uVar23 = *(undefined8 *)(param_2 + 0x110);
          func_0x00010c269d40(uVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar21;
          func_0x00010c09e4e0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c132da0(uVar23);
          _objc_release(lVar22);
          _objc_release(uVar23);
          bVar1 = 1;
        }
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(lVar21);
        lVar24 = lVar24 + 1;
      } while (lVar4 != lVar24);
      lVar4 = param_5;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_5);
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  plStack_410 = (long *)0x0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar25 = *plStack_410;
    do {
      lVar24 = 0;
      do {
        if (*plStack_410 != lVar25) {
          _objc_enumerationMutation(param_4);
        }
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar8);
        lVar24 = lVar24 + 1;
      } while (lVar4 != lVar24);
      lVar4 = param_4;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  lVar25 = *(long *)(param_2 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar25;
  func_0x00010c10ff80();
  if ((int)lVar4 == 0) {
LAB_1068d98d0:
    _objc_release(lVar25);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2320;
    func_0x00010bf71740(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar11;
    func_0x00010bf1f320();
    _objc_release(puVar8);
    _objc_release(uVar11);
    _objc_release(lVar25);
    if (((int)uVar23 != 0) && (lVar4 = param_7, func_0x00010bf529e0(), lVar4 != 0)) {
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      lStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      plStack_450 = (long *)0x0;
      _objc_retain(param_7);
      lVar4 = param_7;
      func_0x00010bf52a60();
      lVar25 = param_7;
      if (lVar4 != 0) {
        bVar2 = false;
        lVar24 = *plStack_450;
        do {
          lVar21 = 0;
          do {
            if (*plStack_450 != lVar24) {
              _objc_enumerationMutation(param_7);
            }
            lVar22 = *(long *)(lStack_458 + lVar21 * 8);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            if (puVar10 != (undefined *)0x0) {
              if (lVar22 == 0) {
                lVar20 = 0;
              }
              else {
                lVar20 = *(long *)(lVar22 + 0x18);
              }
              _objc_retain(lVar20);
              lVar12 = lVar20;
              func_0x00010c08fa60();
              _objc_release(lVar20);
              if ((lVar12 != 0) && (*(long *)(puVar10 + 0x10) == 3)) {
                puVar8 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
                _objc_alloc();
                uVar23 = 0;
                if (lVar22 != 0) {
                  uVar23 = *(undefined8 *)(lVar22 + 0x18);
                }
                _objc_retain(uVar23);
                puStack_468 = (undefined *)0x0;
                func_0x00010bfeea60();
                puVar16 = puStack_468;
                _objc_retain(puStack_468);
                _objc_release(uVar23);
                func_0x00010c1ec620(puVar8);
                puVar13 = puVar8;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
                puVar15 = puVar13;
                _objc_opt_isKindOfClass(puVar13,puVar9);
                puVar9 = puVar13;
                if (((ulong)puVar15 & 1) == 0) {
                  puVar9 = (undefined *)0x0;
                }
                _objc_retain(puVar9);
                _objc_release(puVar13);
                if (puVar9 == (undefined *)0x0) {
                  if (puVar16 != (undefined *)0x0 && !bVar2) {
                    puVar15 = *(undefined **)(param_2 + 0x110);
                    func_0x00010c269d40(puVar15);
                    _objc_retainAutoreleasedReturnValue();
                    puVar13 = puVar16;
                    func_0x00010c09e4e0(puVar16);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c132da0(puVar15);
                    bVar2 = true;
                    goto LAB_1068d9854;
                  }
                }
                else {
                  puVar15 = PTR_PTR_1126ced38;
                  func_0x00010bf09fa0(PTR_PTR_1126ced38);
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = PTR_PTR_1126ced30;
                  _objc_alloc(PTR_PTR_1126ced30);
                  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0126a0(puVar13);
                  _objc_release(puVar14);
                  puVar14 = PTR_PTR_1126ced38;
                  _objc_alloc();
                  func_0x00010c0125e0();
                  uVar23 = *(undefined8 *)(param_2 + 0x50);
                  *(undefined **)(param_2 + 0x50) = puVar14;
                  _objc_release(uVar23);
LAB_1068d9854:
                  _objc_release(puVar13);
                  _objc_release(puVar15);
                }
                _objc_release(puVar9);
                _objc_release(puVar8);
                _objc_release(puVar16);
              }
            }
            _objc_release(puVar10);
            lVar21 = lVar21 + 1;
          } while (lVar4 != lVar21);
          lVar4 = param_7;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      goto LAB_1068d98d0;
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  plStack_4a0 = (long *)0x0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  _objc_retain(param_6);
  lVar4 = param_6;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar25 = *plStack_4a0;
    do {
      lVar24 = 0;
      do {
        if (*plStack_4a0 != lVar25) {
          _objc_enumerationMutation(param_6);
        }
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        if (puVar9 != (undefined *)0x0) {
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar10);
          if (puVar16 == (undefined *)0x0) {
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(puVar16);
            _objc_release(puVar10);
          }
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar8;
          func_0x00010c0e00e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar16);
          _objc_release(puVar10);
        }
        _objc_release(puVar9);
        lVar24 = lVar24 + 1;
      } while (lVar4 != lVar24);
      lVar4 = param_6;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_6);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_4d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_4d0 = 0xc2000000;
  pcStack_4c8 = FUN_1068d9f88;
  puStack_4c0 = &UNK_1109487c0;
  _objc_retain(puVar5);
  puStack_500 = puVar10;
  uStack_4f8 = 0xc2000000;
  pcStack_4f0 = FUN_1068da03c;
  puStack_4e8 = &UNK_110854bd0;
  puStack_4b8 = puVar5;
  _objc_retain(puVar6);
  puVar10 = puVar8;
  puStack_4e0 = puVar6;
  func_0x00010bd869d0(puVar8,&puStack_4d8,&puStack_500);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  plStack_530 = (long *)0x0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar25 = *plStack_530;
    do {
      lVar24 = 0;
      do {
        if (*plStack_530 != lVar25) {
          _objc_enumerationMutation(param_4);
        }
        lVar21 = *(long *)(lStack_538 + lVar24 * 8);
        puVar13 = PTR_PTR_1126ced30;
        _objc_alloc(PTR_PTR_1126ced30);
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0(puVar13);
        _objc_release(puVar15);
        puVar15 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
        uVar23 = 0;
        if (lVar21 != 0) {
          uVar23 = *(undefined8 *)(lVar21 + 0x28);
        }
        _objc_retain(uVar23);
        func_0x00010bfeea60(puVar15);
        _objc_release(uVar23);
        func_0x00010c1ec620(puVar15);
        puVar14 = puVar15;
        func_0x00010bf67000(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar14;
        func_0x00010c1559c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar17);
        puVar17 = puVar14;
        func_0x00010c156320(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar16);
        _objc_release(puVar17);
        _objc_release(puVar14);
        _objc_release(puVar15);
        _objc_release(puVar13);
        lVar24 = lVar24 + 1;
      } while (lVar4 != lVar24);
      lVar4 = param_4;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  param_3 = &PTR___NSConcreteGlobalBlock_110948840;
  lVar4 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110948840);
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  puVar15 = puVar10;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar15;
  func_0x00010bf52a60();
  if (puVar13 != (undefined *)0x0) {
    lVar25 = *plStack_570;
    do {
      if (*plStack_570 != lVar25) {
        _objc_enumerationMutation(puVar15);
      }
      puVar13 = puVar13 + -1;
    } while ((puVar13 != (undefined *)0x0) ||
            (puVar13 = puVar15, func_0x00010bf52a60(), puVar13 != (undefined *)0x0));
  }
  _objc_release(puVar15);
  puVar13 = PTR_PTR_1126ced40;
  _objc_alloc();
  lVar25 = lVar4;
  func_0x00010bf51e00(lVar4);
  puVar15 = puVar10;
  func_0x00010bf51e00(puVar10);
  puVar14 = puVar16;
  func_0x00010bf51e00(puVar16);
  puVar17 = puVar9;
  func_0x00010bf51e00(puVar9);
  puVar18 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c012620();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(lVar25);
  puStack_5a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_5a0 = 0xc2000000;
  pcStack_598 = FUN_1068da1f8;
  puStack_590 = &UNK_110948860;
  _objc_retain(param_8);
  ppuVar19 = &puStack_5a8;
  lStack_588 = param_8;
  _objc_retainBlock(ppuVar19);
  func_0x00010bee45e0(param_1,param_2);
  _objc_release(ppuVar19);
  _objc_release(lStack_588);
  _objc_release(puVar13);
  _objc_release(lVar4);
  _objc_release(puVar16);
  _objc_release(puVar9);
  _objc_release(puStack_4e0);
  _objc_release(puStack_4b8);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_1068d9f20:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126ced30;
  _objc_retain(param_3);
  _objc_alloc(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar23 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1068d9f88; end: 1068da03b;  */

void FUN_1068d9f88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068da03c; end: 1068da0b7;  */

void FUN_1068da03c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1068da0b8;
  puStack_30 = &UNK_1109487f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000100504554(param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068da0b8; end: 1068da1f7;  */

void FUN_1068da0b8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740();
  func_0x00010c0df880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068da1f8; end: 1068da26b;  */

void FUN_1068da1f8(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  code *pcVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    if (lVar1 == 0) goto LAB_1068da238;
    pcVar5 = *(code **)(lVar1 + 0x10);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e64478;
    uVar3 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_1068da238;
    pcVar5 = *(code **)(lVar1 + 0x10);
    uVar3 = 1;
    ppuVar4 = (undefined **)0x0;
  }
  (*pcVar5)(lVar1,uVar3,param_3,ppuVar4);
LAB_1068da238:
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068da26c; end: 1068da377; -[SCDiscoverFeedDataStore storyWithCompositeStoryId:] */

void FUN_1068da26c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1068d384c;
    uStack_40 = 0x1068d385c;
    uStack_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068da378; end: 1068da523;  */

void FUN_1068da378(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar6 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar6;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = *(long *)(param_1 + 0x28);
        _objc_retain();
        _objc_retain(lVar7);
        if (lVar3 == lVar7) {
          _objc_release(lVar7);
          _objc_release(lVar3);
          _objc_release(lVar3);
LAB_1068da4c4:
          param_1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          _objc_retain(lVar6);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar6;
          _objc_release(uVar5);
          goto LAB_1068da4e0;
        }
        if (lVar7 == 0) {
          _objc_release();
          _objc_release(lVar3);
        }
        else {
          lVar4 = lVar3;
          func_0x00010c071ae0();
          _objc_release(lVar7);
          _objc_release(lVar3);
          _objc_release(lVar3);
          if ((int)lVar4 != 0) goto LAB_1068da4c4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1068da4e0:
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1068da524;
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    pcStack_168 = FUN_1068d384c;
    uStack_160 = 0x1068d385c;
    uStack_158 = 0;
    lStack_150 = param_1;
    lStack_148 = lVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c0f8240(*(undefined8 *)(lVar2 + 0x70));
    uVar5 = puStack_178[5];
    _objc_retain(uVar5);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  return;
}



/* Entry: 1068da524; end: 1068da5f3; -[SCDiscoverFeedDataStore storyWithDedupeFp:] */

void FUN_1068da524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068da5f4;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068da5f4; end: 1068da66b;  */

void FUN_1068da5f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068da66c; end: 1068da66f; -[SCDiscoverFeedDataStore assertQueuePerformer] */

void FUN_1068da66c(void)

{
  return;
}



/* Entry: 1068da670; end: 1068da6c7; -[SCDiscoverFeedDataStore storyWithDedupeFpOnPerformer:] */

void FUN_1068da670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068da6c8; end: 1068da753; -[SCDiscoverFeedDataStore storiesWithStoryDedupeFpsOnPerformer:] */

void FUN_1068da6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1068eaa54;
  puStack_30 = &UNK_1109488b0;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x000100504554(param_3,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1068da754; end: 1068da86f; -[SCDiscoverFeedDataStore allStoriesForFeedTypeOnPerformer:] */

void FUN_1068da754(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc(PTR_PTR_1126ced30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068eaa54;
  puStack_50 = &UNK_1109488b0;
  uStack_48 = uVar6;
  _objc_retain(uVar6);
  uVar5 = uVar4;
  func_0x000100504554(uVar4,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1068da870; end: 1068daa73; -[SCDiscoverFeedDataStore allStoriesForFeedTypesOnPerformer:] */

void FUN_1068da870(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126ced30;
      _objc_alloc(PTR_PTR_1126ced30);
      func_0x00010c0126a0();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar9);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1068eaa54;
      puStack_110 = &UNK_1109488b0;
      uStack_108 = uVar9;
      _objc_retain(uVar9);
      uVar7 = uVar6;
      func_0x000100504554(uVar6,&puStack_128);
      _objc_release(uStack_108);
      _objc_release(uVar9);
      func_0x00010befa160(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 0x38),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 1068daa74; end: 1068daa7b; -[SCDiscoverFeedDataStore allStoriesOnPerformer] */

void FUN_1068daa74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 1068daa7c; end: 1068daad7; -[SCDiscoverFeedDataStore updateStoriesOnPerformer:feedType:isFromMetadataPrefetch:] */

void FUN_1068daa7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010bee0d40(param_1,param_2,param_3);
  func_0x00010be8eb40(param_1,param_2,param_4,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068daad8; end: 1068dab2b; -[SCDiscoverFeedDataStore appendStoriesOnPerformer:feedType:] */

void FUN_1068daad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bdcd520(param_1,param_2,param_3,param_4);
  func_0x00010bed6480(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068dab2c; end: 1068dabfb; -[SCDiscoverFeedDataStore storyWithDedupeFp:completionQueue:completion:] */

void FUN_1068dab2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1068dabfc;
    puStack_68 = &UNK_110845188;
    lStack_60 = param_1;
    uStack_48 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(param_5);
    lStack_50 = param_5;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1068dabfc; end: 1068dacd3;  */

void FUN_1068dabfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068dacd4;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_40 = uVar4;
  uStack_38 = uVar2;
  _objc_retain(uVar4);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar4);
  return;
}



/* Entry: 1068dacd4; end: 1068dace3;  */

void FUN_1068dacd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068dace0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068dace4; end: 1068dadcf; -[SCDiscoverFeedDataStore storiesWithDedupeFps:completionQueue:completion:] */

void FUN_1068dace4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1068dadd0;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_3);
    uStack_60 = param_3;
    lStack_58 = param_1;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068dadd0; end: 1068daea7;  */

void FUN_1068dadd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068daed0;
  puStack_50 = &UNK_1109488b0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010050471c(uVar4,&PTR___NSConcreteGlobalBlock_110948890,&puStack_68);
  puStack_98 = puVar3;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1068daee0;
  puStack_80 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_78 = uVar4;
  uStack_70 = uVar2;
  _objc_retain(uVar4);
  func_0x00010007380c(uVar1,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  return;
}



/* Entry: 1068daea8; end: 1068daecf;  */

void FUN_1068daea8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068daed0; end: 1068daedf;  */

void FUN_1068daed0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068daee0; end: 1068daf17;  */

void FUN_1068daee0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068daf18; end: 1068db003; -[SCDiscoverFeedDataStore allStoriesInCacheWithDedupeFps:completionQueue:completion:] */

void FUN_1068daf18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1068db004;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_3);
    uStack_60 = param_3;
    lStack_58 = param_1;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068db004; end: 1068db0db;  */

void FUN_1068db004(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068db104;
  puStack_50 = &UNK_1109488b0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010050471c(uVar4,&PTR___NSConcreteGlobalBlock_1109488e0,&puStack_68);
  puStack_98 = puVar3;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1068db114;
  puStack_80 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_78 = uVar4;
  uStack_70 = uVar2;
  _objc_retain(uVar4);
  func_0x00010007380c(uVar1,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  return;
}



/* Entry: 1068db0dc; end: 1068db103;  */

void FUN_1068db0dc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068db104; end: 1068db113;  */

void FUN_1068db104(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068db114; end: 1068db14b;  */

void FUN_1068db114(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068db14c; end: 1068db21b; -[SCDiscoverFeedDataStore storyWithPublisherId:] */

void FUN_1068db14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068db21c;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068db21c; end: 1068db443;  */

void FUN_1068db21c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
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
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &uStack_130;
  lStack_140 = lVar1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lStack_138 = *plStack_120;
    do {
      unaff_x19 = 0;
      do {
        if (*plStack_120 != lStack_138) {
          _objc_enumerationMutation(lStack_140);
        }
        lVar8 = *(long *)(lStack_128 + unaff_x19 * 8);
        lVar2 = lVar8;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar8;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010afefbe8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (lVar3 == 0) {
          if (lVar4 != 0) {
LAB_1068db354:
            lVar2 = lVar4;
            func_0x00010c11af80();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar2;
            func_0x00010c11b1e0();
            lVar9 = *(long *)(param_1 + 0x30);
            _objc_release(lVar2);
            if (lVar3 != 0) {
              _objc_release(unaff_x22);
            }
            if (lVar5 == lVar9) goto LAB_1068db3d4;
          }
        }
        else {
          unaff_x22 = lVar3;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = unaff_x22;
          func_0x00010c11b1e0();
          if (lVar2 == *(long *)(param_1 + 0x30)) {
            _objc_release(unaff_x22);
LAB_1068db3d4:
            unaff_x19 = *(long *)(*(long *)(param_1 + 0x28) + 8);
            _objc_retain(lVar8);
            uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
            *(long *)(unaff_x19 + 0x28) = lVar8;
            _objc_release(uVar7);
            _objc_release(lVar4);
            _objc_release(lVar3);
            unaff_x21 = lVar1;
            goto LAB_1068db400;
          }
          if (lVar4 != 0) goto LAB_1068db354;
          _objc_release(unaff_x22);
        }
        _objc_release(lVar4);
        _objc_release(lVar3);
        unaff_x19 = unaff_x19 + 1;
      } while (lVar1 != unaff_x19);
      puVar6 = &uStack_130;
      lVar1 = lStack_140;
      func_0x00010bf52a60();
      unaff_x21 = lVar1;
    } while (lVar1 != 0);
  }
LAB_1068db400:
  lVar1 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1068db444;
    lStack_170 = unaff_x22;
    lStack_168 = unaff_x21;
    lStack_160 = param_1;
    lStack_158 = unaff_x19;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      puStack_198 = &uStack_1a0;
      uStack_1a0 = 0;
      uStack_190 = 0x3032000000;
      pcStack_188 = FUN_1068d384c;
      uStack_180 = 0x1068d385c;
      uStack_178 = 0;
      uVar7 = *(undefined8 *)(lVar1 + 0x70);
      _objc_retain(puVar6);
      func_0x00010c0f8240(uVar7);
      uVar7 = puStack_198[5];
      _objc_retain(uVar7);
      _objc_release(puVar6);
      __Block_object_dispose(&uStack_1a0,8);
      _objc_release(uStack_178);
    }
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  return;
}



/* Entry: 1068db444; end: 1068db54f; -[SCDiscoverFeedDataStore storyWithUsername:] */

void FUN_1068db444(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1068d384c;
    uStack_40 = 0x1068d385c;
    uStack_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068db550; end: 1068db747;  */

void FUN_1068db550(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x21;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
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
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x22 = *(long *)(lStack_128 + lVar9 * 8);
        _objc_retain(unaff_x22);
        lVar3 = unaff_x22;
        func_0x00010c25b720();
        lVar4 = unaff_x22;
        if (lVar3 == 3) {
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar4;
          func_0x00010afef4dc();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c292e20();
          _objc_retainAutoreleasedReturnValue();
LAB_1068db678:
          _objc_release(lVar3);
          _objc_release(lVar4);
        }
        else {
          lVar3 = unaff_x22;
          func_0x00010c25b720();
          if (lVar3 == 0xe) {
            func_0x00010c259560();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar4;
            func_0x00010afefd10();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar3;
            func_0x00010c291e80();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068db678;
          }
          lVar7 = 0;
        }
        _objc_release(unaff_x22);
        puVar5 = *(undefined8 **)(param_1 + 0x28);
        lVar3 = lVar7;
        func_0x00010c0720c0();
        _objc_release(lVar7);
        if ((int)lVar3 != 0) {
          lVar8 = unaff_x22;
          func_0x00010bf51e00();
          lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar6 = *(undefined8 *)(lVar9 + 0x28);
          *(long *)(lVar9 + 0x28) = lVar8;
          _objc_release(uVar6);
          unaff_x21 = lVar2;
          goto LAB_1068db704;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = lVar2;
    } while (lVar2 != 0);
  }
LAB_1068db704:
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1068db748;
    lStack_160 = unaff_x22;
    lStack_158 = unaff_x21;
    lStack_150 = lVar1;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      puStack_188 = &uStack_190;
      uStack_190 = 0;
      uStack_180 = 0x3032000000;
      pcStack_178 = FUN_1068d384c;
      uStack_170 = 0x1068d385c;
      uStack_168 = 0;
      uVar6 = *(undefined8 *)(lVar2 + 0x70);
      _objc_retain(puVar5);
      func_0x00010c0f8240(uVar6);
      uVar6 = puStack_188[5];
      _objc_retain(uVar6);
      _objc_release(puVar5);
      __Block_object_dispose(&uStack_190,8);
      _objc_release(uStack_168);
    }
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  return;
}



/* Entry: 1068db748; end: 1068db857; -[SCDiscoverFeedDataStore storyWithUserId:] */

void FUN_1068db748(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1068d384c;
    uStack_40 = 0x1068d385c;
    uStack_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068db858; end: 1068db89b;  */

void FUN_1068db858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25bc80(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068db89c; end: 1068dba47; -[SCDiscoverFeedDataStore storyWithUserIdOnPerformer:] */

void FUN_1068db89c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
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
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar9 = param_3;
  func_0x00010c08fa60();
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          puVar9 = *(undefined1 **)(lStack_128 + lVar11 * 8);
          puVar3 = puVar9;
          func_0x00010c259560(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010afef4dc();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c2923e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_3;
          puVar8 = (undefined8 *)puVar3;
          func_0x00010c0720c0(param_3,param_2,puVar3);
          _objc_release(puVar3);
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain(puVar9);
            _objc_release(puVar4);
            goto LAB_1068db9f0;
          }
          _objc_release(puVar4);
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar1;
        puVar8 = &uStack_130;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    puVar9 = (undefined1 *)0x0;
LAB_1068db9f0:
    _objc_release(lVar1);
    puVar3 = (undefined1 *)puVar8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126ced30;
    _objc_alloc(PTR_PTR_1126ced30);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0126a0(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    lVar1 = *(long *)(param_3 + 0x30);
    func_0x00010c0e00e0(lVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = *(undefined1 **)(param_3 + 0x38);
      func_0x00010c0e00e0(puVar9,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1068dba48; end: 1068dbb1b; -[SCDiscoverFeedDataStore mostRecentStorySavedForFeedTypeOnPerformer:] */

void FUN_1068dba48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc(PTR_PTR_1126ced30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1068dbb1c; end: 1068dbde3; -[SCDiscoverFeedDataStore dedupeWithExistingStoriesForFeedTypeOnPerformer:newStories:] */

void FUN_1068dbb1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar8 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar1);
  puVar2 = *(undefined **)(param_1 + 0x30);
  puStack_1f8 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar2);
  puVar9 = puVar2;
  func_0x00010bf52a60();
  lVar7 = param_4;
  if (puVar9 != (undefined *)0x0) {
    lVar7 = *plStack_1a0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010befa120(puVar1);
        puVar8 = puVar8 + 1;
      } while (puVar9 != puVar8);
      puVar9 = puVar2;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_4);
  puVar6 = &uStack_1f0;
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    puVar8 = (undefined *)*puStack_1e0;
    do {
      lVar7 = 0;
      do {
        if ((undefined *)*puStack_1e0 != puVar8) {
          _objc_enumerationMutation(param_4);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_1e8 + lVar7 * 8));
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf4b900();
        _objc_release(puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(puVar9);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      puVar6 = &uStack_1f0;
      lVar3 = param_4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puStack_1f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_208 = FUN_1068dbde4;
    puStack_230 = puVar1;
    puStack_228 = puVar2;
    puStack_220 = puVar8;
    lStack_218 = lVar7;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puStack_258 = &uStack_260;
      uStack_260 = 0;
      uStack_250 = 0x3032000000;
      pcStack_248 = FUN_1068d384c;
      uStack_240 = 0x1068d385c;
      uStack_238 = 0;
      uVar10 = *(undefined8 *)(param_4 + 0x70);
      _objc_retain(puVar6);
      func_0x00010c0f8240(uVar10);
      puVar9 = (undefined *)puStack_258[5];
      _objc_retain(puVar9);
      _objc_release(puVar6);
      __Block_object_dispose(&uStack_260,8);
      _objc_release(uStack_238);
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1068dbde4; end: 1068dbeef; -[SCDiscoverFeedDataStore storyWithCompositeStoryIdVersionInsensitive:] */

void FUN_1068dbde4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1068d384c;
    uStack_40 = 0x1068d385c;
    uStack_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068dbef0; end: 1068dc0bb;  */

void FUN_1068dbef0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar10;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar11;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_130;
  lStack_138 = lVar1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x28 = *plStack_120;
    do {
      unaff_x19 = 0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x22 = *(long *)(lStack_128 + unaff_x19 * 8);
        unaff_x23 = unaff_x22;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bf52680();
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010bf52680();
        if (unaff_x24 == lVar2) {
          unaff_x24 = unaff_x22;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = *(undefined8 **)(param_1 + 0x28);
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x25;
          puVar8 = unaff_x26;
          func_0x00010c0720c0();
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if ((int)unaff_x27 != 0) {
            unaff_x19 = *(long *)(*(long *)(param_1 + 0x30) + 8);
            _objc_retain(unaff_x22);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
            *(long *)(unaff_x19 + 0x28) = unaff_x22;
            _objc_release(uVar9);
            unaff_x21 = lVar1;
            goto LAB_1068dc078;
          }
        }
        else {
          _objc_release(unaff_x23);
        }
        unaff_x19 = unaff_x19 + 1;
      } while (lVar1 != unaff_x19);
      puVar8 = &uStack_130;
      lVar1 = lStack_138;
      func_0x00010bf52a60();
      unaff_x21 = lVar1;
    } while (lVar1 != 0);
  }
LAB_1068dc078:
  lVar1 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1068dc0bc;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  lStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar8 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    lVar2 = *(long *)(lVar1 + 0x38);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lStack_278 = lVar2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar11 = *plStack_260;
      do {
        lVar1 = 0;
        do {
          if (*plStack_260 != lVar11) {
            _objc_enumerationMutation(lStack_278);
          }
          puVar10 = *(undefined8 **)(lStack_268 + lVar1 * 8);
          puVar3 = puVar10;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf52680();
          puVar5 = puVar8;
          func_0x00010bf52680();
          if (puVar4 == puVar5) {
            puVar4 = puVar10;
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar8;
            func_0x00010bfe5ec0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar3);
            if ((int)puVar7 != 0) {
              _objc_retain(puVar10);
              goto LAB_1068dc248;
            }
          }
          else {
            _objc_release(puVar3);
          }
          lVar1 = lVar1 + 1;
        } while (lVar2 != lVar1);
        lVar2 = lStack_278;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    puVar10 = (undefined8 *)0x0;
LAB_1068dc248:
    _objc_release(lStack_278);
  }
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    pcStack_288 = FUN_1068dc298;
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x3032000000;
    pcStack_2b8 = FUN_1068d384c;
    uStack_2b0 = 0x1068d385c;
    uStack_2a8 = 0;
    lStack_2a0 = lVar1;
    puStack_298 = puVar8;
    ppuStack_290 = &puStack_150;
    _objc_initWeak(auStack_2d8,puVar3);
    uVar9 = puVar3[0xe];
    _objc_copyWeak(auStack_2e0,auStack_2d8);
    func_0x00010c0f8240(uVar9);
    puVar10 = (undefined8 *)puStack_2c8[5];
    _objc_retain(puVar10);
    _objc_destroyWeak(auStack_2e0);
    _objc_destroyWeak(auStack_2d8);
    __Block_object_dispose(&uStack_2d0,8);
    _objc_release(uStack_2a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1068dc0bc; end: 1068dc297; -[SCDiscoverFeedDataStore storyWithCompositeStoryIdVersionInsensitiveOnPerformer:] */

void FUN_1068dc0bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = lVar1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        param_1 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lStack_138);
          }
          lVar8 = *(long *)(lStack_128 + param_1 * 8);
          lVar2 = lVar8;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf52680();
          lVar4 = param_3;
          func_0x00010bf52680();
          if (lVar3 == lVar4) {
            lVar3 = lVar8;
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_3;
            func_0x00010bfe5ec0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar4;
            func_0x00010c0720c0();
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(lVar2);
            if ((int)lVar6 != 0) {
              _objc_retain(lVar8);
              goto LAB_1068dc248;
            }
          }
          else {
            _objc_release(lVar2);
          }
          param_1 = param_1 + 1;
        } while (lVar1 != param_1);
        lVar1 = lStack_138;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    lVar8 = 0;
LAB_1068dc248:
    _objc_release(lStack_138);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1068dc298;
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_1068d384c;
    uStack_170 = 0x1068d385c;
    uStack_168 = 0;
    lStack_160 = param_1;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_198,lVar1);
    uVar7 = *(undefined8 *)(lVar1 + 0x70);
    _objc_copyWeak(auStack_1a0,auStack_198);
    func_0x00010c0f8240(uVar7);
    lVar8 = puStack_188[5];
    _objc_retain(lVar8);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1068dc298; end: 1068dc3a3; -[SCDiscoverFeedDataStore allStories] */

void FUN_1068dc298(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068dc3a4; end: 1068dc40b;  */

void FUN_1068dc3a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bdca0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068dc40c; end: 1068dc4db; -[SCDiscoverFeedDataStore allStoriesForFeedType:] */

void FUN_1068dc40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068dc4dc;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068dc4dc; end: 1068dc51f;  */

void FUN_1068dc4dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00a40(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068dc520; end: 1068dc5f7; -[SCDiscoverFeedDataStore cachedOrganicCompositeStoryIdsForFeedType:] */

void FUN_1068dc520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  puStack_28 = PTR____NSArray0__struct_11034ab48;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068dc5f8;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068dc5f8; end: 1068dc797;  */

long FUN_1068dc5f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
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
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf00a40(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(lVar1);
  func_0x00010bffc4a0();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(lVar1);
  puVar5 = auStack_d8;
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x23 = *(long *)(lStack_118 + lVar8 * 8);
        lVar3 = unaff_x23;
        func_0x00010c25b720();
        if (lVar3 != 5) {
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x23 != 0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(unaff_x23);
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      puVar5 = auStack_d8;
      lVar7 = lVar1;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar7 != 0);
  }
  _objc_release(lVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar2);
  lVar7 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar7;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1068dc798;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  puStack_148 = puVar2;
  lStack_140 = param_1;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  uVar6 = *(undefined8 *)(lVar7 + 0x70);
  _objc_retain(puVar5);
  func_0x00010c0f8240(uVar6);
  lVar7 = puStack_178[3];
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(puVar5);
  return lVar7;
}



/* Entry: 1068dc798; end: 1068dc883; -[SCDiscoverFeedDataStore cachedUnimpressedPromotedStoryCountForFeedType:impressedDedupeFps:] */

undefined8 FUN_1068dc798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[3];
  _objc_release(param_4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 1068dc884; end: 1068dca2f;  */

void FUN_1068dc884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 uVar10;
  undefined *unaff_x24;
  long lVar11;
  long lVar12;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c10ff40(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar8 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        unaff_x23 = *(ulong *)(param_1 + 0x28);
        func_0x00010c259740(uVar8);
        func_0x00010c0df880(unaff_x24,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(unaff_x23,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if ((unaff_x23 & 1) == 0) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
        }
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar4 = lVar3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130);
      unaff_x22 = 0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1068dca30;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  lStack_158 = lVar3;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  uVar10 = *(undefined8 *)(puVar2 + 0x70);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1068dcb50;
  puStack_198 = &UNK_1108465d0;
  puStack_190 = puVar2;
  puStack_188 = puVar1;
  puStack_180 = puVar7;
  uStack_178 = uVar8;
  _objc_retain(uVar8);
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar10,param_2,&puStack_1b0);
  _objc_release(uStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  return;
}


