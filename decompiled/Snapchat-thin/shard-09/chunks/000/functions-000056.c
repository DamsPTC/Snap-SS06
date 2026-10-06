/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068dca30; end: 1068dcb4f; -[SCDiscoverFeedDataStore allStoriesForFeedType:completionQueue:completion:] */

void FUN_1068dca30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1068dcb50;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1068dcb50; end: 1068dccaf;  */

void FUN_1068dcb50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(uVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068eaa54;
  puStack_60 = &UNK_1109488b0;
  uStack_58 = uVar5;
  _objc_retain(uVar5);
  uVar4 = uVar3;
  func_0x000100504554(uVar3,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1068dccb0;
  puStack_98 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_90 = uVar4;
  uStack_88 = uVar5;
  uStack_80 = uVar2;
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  func_0x00010007380c(uVar3,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_80);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1068dccb0; end: 1068dccc3;  */

void FUN_1068dccb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068dccc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068dccc4; end: 1068dcddb; -[SCDiscoverFeedDataStore allStoriesForFeedType:waitForStoriesToLoad:completionQueue:completion:] */

void FUN_1068dccc4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1068dcddc; end: 1068dce17;  */

void FUN_1068dcddc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdca0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068dce18; end: 1068dcfbb; -[SCDiscoverFeedDataStore _allStoriesForFeedType:waitForStoriesToLoad:completionQueue:completion:] */

void FUN_1068dce18(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_4 == 0) || (lVar1 = param_1, func_0x00010bf82c80(), lVar1 == 2)) {
    func_0x00010bf00a00(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bfad7a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_3;
    _objc_retain(param_5);
    _objc_retain(param_6);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1068dcfbc; end: 1068dcfdb;  */

bool FUN_1068dcfbc(undefined8 param_1,long param_2)

{
  func_0x00010c067fc0(param_2);
  return param_2 == 2;
}



/* Entry: 1068dcfdc; end: 1068dd013;  */

void FUN_1068dcfdc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf00a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068dd014; end: 1068dd0ff; -[SCDiscoverFeedDataStore allStoriesForFeedTypes:completionQueue:completion:] */

void FUN_1068dd014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    pcStack_70 = FUN_1068dd100;
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



/* Entry: 1068dd100; end: 1068dd39b;  */

void FUN_1068dd100(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar4 = lVar9;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_160;
    do {
      lVar11 = 0;
      do {
        if (*plStack_160 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        puVar5 = PTR_PTR_1126ced30;
        _objc_alloc(PTR_PTR_1126ced30);
        func_0x00010c0126a0();
        iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
        func_0x00010bf4b900();
        if (iVar2 != 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf51e00();
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
          _objc_retain(uVar12);
          puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_1068eaa54;
          puStack_110 = &UNK_1109488b0;
          uStack_108 = uVar12;
          _objc_retain(uVar12);
          lVar8 = lVar7;
          func_0x000100504554(lVar7,&puStack_128);
          _objc_release(uStack_108);
          _objc_release(uVar12);
          _objc_release(lVar7);
          _objc_release(lVar6);
          lVar7 = lVar8;
          func_0x00010bf529e0();
          if (lVar7 != 0) {
            func_0x00010c1d0640(puVar3);
          }
          _objc_release(lVar8);
        }
        _objc_release(puVar5);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar9;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1068dd39c;
  puStack_188 = &UNK_11084aaa8;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  puStack_180 = puVar3;
  uStack_178 = uVar1;
  _objc_retain(puVar3);
  func_0x00010007380c(uVar12,&puStack_1a0);
  _objc_release(puStack_180);
  _objc_release(uStack_178);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(puVar3 + 0x20);
  lVar4 = *(long *)(puVar3 + 0x28);
  func_0x00010bf51e00(uVar12);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1068dd39c; end: 1068dd3d3;  */

void FUN_1068dd39c(long param_1)

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



/* Entry: 1068dd3d4; end: 1068dd50b; -[SCDiscoverFeedDataStore reorderStoriesLocallyForFeedTypesIfPossible:isDebouncedQuery:completion:] */

void FUN_1068dd3d4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010bfcac80(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1068dd50c; end: 1068dd57f;  */

void FUN_1068dd50c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
  }
  else {
    func_0x00010be8e9c0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068dd580; end: 1068dd6b7; -[SCDiscoverFeedDataStore _reorderStoriesForFeedTypesUnderBarrier:interactionHistoryArray:isDebouncedQuery:completion:] */

void FUN_1068dd580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068dd6b8; end: 1068dd6f3;  */

void FUN_1068dd6b8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068dd6f4; end: 1068dd7bf; -[SCDiscoverFeedDataStore saveStoriesToDiskOnAppResignActive:withNewData:] */

void FUN_1068dd6f4(long param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068dd7c0;
  puStack_48 = &UNK_110845ce0;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retainBlock(&puStack_60);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf64780();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010c130ac0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111180d10,0,ppuVar1);
      goto LAB_1068dd7a4;
    }
  }
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x70),param_2,ppuVar1);
LAB_1068dd7a4:
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1068dd7c0; end: 1068dda7f;  */

void FUN_1068dd7c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf51e00();
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c10ff80();
  if ((uVar7 & 1) == 0) {
    _objc_release(uVar6);
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c2320;
    func_0x00010bf71740(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf1f320();
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    if ((int)uVar10 != 0) {
      func_0x00010c11be00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
    }
  }
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf51e00();
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x128) != 2) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852dcfc(uVar8,puVar9,1);
    _objc_release(puVar9);
    lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c14a060();
    _objc_release(lVar11);
    if ((lVar12 == 1) || ((lVar12 == 2 && (lVar12 = lVar4, func_0x00010bf529e0(), lVar12 == 0))))
    goto LAB_1068dda30;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  _objc_retain(lVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  _objc_retain(uVar10);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar4);
LAB_1068dda30:
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1068dda80; end: 1068ddabb;  */

void FUN_1068dda80(long param_1,undefined8 param_2)

{
  func_0x00010be78040(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined1 *)(param_1 + 0x60));
  return;
}



/* Entry: 1068ddabc; end: 1068ddba3; -[SCDiscoverFeedDataStore clearStoriesCacheWithCompletion:] */

void FUN_1068ddabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010852de70(*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110e64498,1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf39ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c12aec0(uVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1068ddba4; end: 1068ddc17;  */

void FUN_1068ddba4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1068ddc18;
  puStack_30 = &UNK_110881a90;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010c297260(uVar1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1068ddc18; end: 1068ddc2b;  */

void FUN_1068ddc18(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068ddc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1068ddc2c; end: 1068ddd0b; -[SCDiscoverFeedDataStore updateStoriesForFeedType:mutationBlock:] */

void FUN_1068ddc2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1068ddd0c; end: 1068ddd43;  */

void FUN_1068ddd0c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068ddd44; end: 1068dde6b; -[SCDiscoverFeedDataStore _updateStoriesForFeedType:mutationBlock:] */

void FUN_1068ddd44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  lVar6 = param_4;
  (**(code **)(param_4 + 0x10))(param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0640(uVar3);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar5 = uVar3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068dde6c; end: 1068ddf7b; -[SCDiscoverFeedDataStore updateUnviewableSnapsByStoryDedupeFp:downloadDateByStoryDedupeFp:shouldTakedown:] */

void FUN_1068dde6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ddf7c; end: 1068ddfb3;  */

void FUN_1068ddf7c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068ddfb4; end: 1068de4eb; -[SCDiscoverFeedDataStore _updateUnviewableSnapsByStoryDedupeFp:downloadDateByStoryDedupeFp:shouldTakedown:] */

void FUN_1068ddfb4(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **unaff_x22;
  long lVar7;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar8;
  code *unaff_x28;
  undefined8 uVar9;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  code *pcStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  long lStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  lStack_388 = param_1;
  _objc_retain(param_3);
  ppuStack_370 = param_4;
  _objc_retain(param_4);
  ppuStack_368 = param_3;
  func_0x00010bf529e0();
  if (param_3 != (undefined **)0x0) {
    if ((int)param_5 == 0) {
      param_5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      puStack_310 = (undefined8 *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      ppuVar4 = ppuStack_368;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_380 = ppuVar4;
      func_0x00010bf52a60();
      if (ppuVar4 != (undefined **)0x0) {
        ppuStack_378 = (undefined **)*puStack_310;
        do {
          unaff_x22 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_310 != ppuStack_378) {
              _objc_enumerationMutation(ppuStack_380);
            }
            unaff_x25 = ppuStack_370;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            plStack_350 = (long *)0x0;
            unaff_x26 = ppuStack_368;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = unaff_x26;
            func_0x00010bf52a60();
            if (ppuVar2 != (undefined **)0x0) {
              unaff_x23 = *plStack_350;
              do {
                param_4 = (undefined **)0x0;
                do {
                  if (*plStack_350 != unaff_x23) {
                    _objc_enumerationMutation(unaff_x26);
                  }
                  unaff_x28 = (code *)PTR_PTR_1126ced48;
                  _objc_alloc();
                  func_0x00010c047b00();
                  func_0x00010befa120(param_5);
                  _objc_release(unaff_x28);
                  param_4 = (undefined **)((long)param_4 + 1);
                } while (ppuVar2 != param_4);
                ppuVar2 = unaff_x26;
                func_0x00010bf52a60();
              } while (ppuVar2 != (undefined **)0x0);
            }
            unaff_x27 = (undefined **)0x0;
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            unaff_x22 = (undefined **)((long)unaff_x22 + 1);
          } while (unaff_x22 != ppuVar4);
          ppuVar4 = ppuStack_380;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(ppuStack_380);
      ppuVar4 = param_5;
      func_0x00010be59a40(lStack_388);
    }
    else {
      param_5 = *(undefined ***)(lStack_388 + 0x38);
      func_0x00010c0d3c80();
      param_4 = &puStack_230;
      puStack_230 = (undefined *)0x0;
      unaff_x28 = FUN_1068d384c;
      uStack_220 = 0x3032000000;
      unaff_x23 = 0x1068d385c;
      pcStack_218 = FUN_1068d384c;
      uStack_210 = 0x1068d385c;
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      ppuStack_228 = param_4;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      unaff_x22 = ppuStack_368;
      puStack_208 = puVar1;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = unaff_x22;
      func_0x00010bf52a60();
      if (ppuVar4 != (undefined **)0x0) {
        lVar6 = *plStack_260;
        do {
          param_4 = (undefined **)0x0;
          ppuStack_378 = ppuVar4;
          do {
            if (*plStack_260 != lVar6) {
              _objc_enumerationMutation(unaff_x22);
            }
            unaff_x25 = *(undefined ***)(lStack_268 + (long)param_4 * 8);
            puStack_298 = &uStack_2a0;
            uStack_2a0 = 0;
            uStack_290 = 0x3032000000;
            pcStack_288 = FUN_1068d384c;
            uStack_280 = 0x1068d385c;
            ppuVar2 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_278 = ppuVar2;
            if (puStack_298[5] != 0) {
              unaff_x26 = ppuStack_368;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = unaff_x26;
              func_0x00010bf529e0();
              if (ppuVar2 != (undefined **)0x0) {
                unaff_x27 = ppuStack_370;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = puStack_298[5];
                puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_2d0 = 0xc2000000;
                pcStack_2c8 = FUN_1068de4ec;
                puStack_2c0 = &UNK_1109489b0;
                puStack_2b0 = &uStack_2a0;
                ppuStack_2a8 = &puStack_230;
                _objc_retain();
                ppuVar4 = ppuStack_378;
                ppuStack_2b8 = unaff_x27;
                func_0x000108483a7c(uVar9,unaff_x26,&puStack_2d8);
                if (puStack_298[5] == 0) {
                  func_0x00010c12d3e0(param_5);
                }
                else {
                  func_0x00010c1d0640(param_5);
                }
                _objc_release(ppuStack_2b8);
                _objc_release(unaff_x27);
              }
              _objc_release(unaff_x26);
            }
            __Block_object_dispose(&uStack_2a0,8);
            _objc_release(ppuStack_278);
            param_4 = (undefined **)((long)param_4 + 1);
          } while (ppuVar4 != param_4);
          ppuVar4 = unaff_x22;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(unaff_x22);
      func_0x00010be59a40(lStack_388);
      ppuVar4 = param_5;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(lStack_388 + 0x38);
      *(undefined ***)(lStack_388 + 0x38) = ppuVar4;
      _objc_release(uVar9);
      ppuVar4 = &PTR____CFConstantStringClassReference_110f48bb8;
      func_0x00010be03d20(lStack_388);
      __Block_object_dispose(&puStack_230,8);
      _objc_release(puStack_208);
    }
    unaff_x24 = 0;
    _objc_release(param_5);
  }
  _objc_release(ppuStack_370);
  ppuVar2 = ppuStack_368;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = 8;
  __Block_object_dispose(&puStack_230);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puVar5 = &uStack_4c0;
  pcStack_398 = FUN_1068de4ec;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  uStack_3d0 = unaff_x24;
  lStack_3c8 = unaff_x23;
  ppuStack_3c0 = unaff_x22;
  ppuStack_3b8 = param_5;
  ppuStack_3b0 = param_4;
  ppuStack_3a8 = ppuVar2;
  puStack_3a0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  _objc_retain(ppuVar4);
  lVar7 = *(long *)(ppuVar3[5] + 8);
  _objc_retain(lVar6);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  *(long *)(lVar7 + 0x28) = lVar6;
  _objc_release(uVar9);
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  _objc_retain(ppuVar4);
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar7 = *plStack_4b0;
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if (*plStack_4b0 != lVar7) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar9 = *(undefined8 *)(*(long *)(ppuVar3[6] + 8) + 0x28);
        puVar1 = PTR_PTR_1126ced48;
        _objc_alloc(PTR_PTR_1126ced48);
        func_0x00010c047b00();
        func_0x00010befa120(uVar9);
        _objc_release(puVar1);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar2 != ppuVar8);
      ppuVar2 = ppuVar4;
      puVar5 = &uStack_4c0;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar9 = *(undefined8 *)(lVar6 + 0x78);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 1068de4ec; end: 1068de66b;  */

void FUN_1068de4ec(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = param_2;
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        puVar2 = PTR_PTR_1126ced48;
        _objc_alloc(PTR_PTR_1126ced48);
        func_0x00010c047b00();
        func_0x00010befa120(uVar1);
        _objc_release(puVar2);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = param_3;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar3);
  return;
}



/* Entry: 1068de66c; end: 1068de6fb; -[SCDiscoverFeedDataStore markDedupeFpIneligibleForPersistenceInMixedFeed:] */

void FUN_1068de66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068de6fc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068de6fc; end: 1068de707;  */

void FUN_1068de6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068de708; end: 1068de7df; -[SCDiscoverFeedDataStore cacheCurrentPlayingStoryInMixedFeed:] */

void FUN_1068de708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068de7e0; end: 1068de823;  */

void FUN_1068de7e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068de824; end: 1068de8db; -[SCDiscoverFeedDataStore prepareToFetchNewDataForQuery:] */

void FUN_1068de824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068de8dc; end: 1068de9c3;  */

void FUN_1068de8dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(puVar2);
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1068de9c4;
    puStack_40 = &UNK_1108434b0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010007380c(uVar3,&puStack_58);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1068de9c4; end: 1068de9ef;  */

void FUN_1068de9c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068de9f0; end: 1068deaa7; -[SCDiscoverFeedDataStore didFinishFetchingNewDataForQuery:] */

void FUN_1068de9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8240(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068deaa8; end: 1068deb13;  */

void FUN_1068deaa8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068deb14; end: 1068debdf; -[SCDiscoverFeedDataStore prepareForLogout:] */

void FUN_1068deb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e642d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1068debe0;
  puStack_40 = &UNK_110890070;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c12d400(uVar2,param_2,puVar1,&puStack_58);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068debe0; end: 1068debf3;  */

void FUN_1068debe0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068debec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1068debf4; end: 1068ded43; -[SCDiscoverFeedDataStore didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1068debf4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b4030;
  func_0x00010bf814e0(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1068ded44;
    puStack_60 = &UNK_110841fb0;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010007380c(uVar3,&puStack_78);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ded44; end: 1068dee87;  */

void FUN_1068ded44(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126b4038;
  func_0x00010bf5b6e0(PTR_PTR_1126b4038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4040;
  _objc_opt_class(PTR_PTR_1126b4040);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(ulong *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126b4038;
  func_0x00010bf7c180(PTR_PTR_1126b4038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  func_0x00010bf1f3c0(uVar3);
  _objc_release(uVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (uVar1 == 0) {
    func_0x00010bdf6080();
  }
  else {
    func_0x00010bdf60a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068dee88; end: 1068def83; -[SCDiscoverFeedDataStore didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_1068dee88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068def84;
  puStack_50 = &UNK_110845ce0;
  uStack_48 = param_1;
  uStack_40 = param_4;
  _objc_copyWeak(auStack_70,auStack_38);
  func_0x00010c0bc800(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068def84; end: 1068defe7;  */

void FUN_1068def84(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  lStack_20 = *(long *)(param_1 + 0x20);
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1068defe8;
  puStack_28 = &UNK_110845ce0;
  uStack_18 = *(undefined1 *)(param_1 + 0x28);
  func_0x00010c0f7fc0(*(undefined8 *)(lStack_20 + 0x70),param_2,&puStack_40);
  return;
}



/* Entry: 1068defe8; end: 1068defff;  */

void FUN_1068defe8(long param_1)

{
  *(byte *)(*(long *)(param_1 + 0x20) + 0xa0) = *(byte *)(param_1 + 0x28) ^ 1;
  return;
}



/* Entry: 1068df000; end: 1068df0bb;  */

void FUN_1068df000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uStack_48 = param_2;
  func_0x00010c0f8240(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 1068df0bc; end: 1068df0ef;  */

void FUN_1068df0bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068df0f0; end: 1068df61f; -[SCDiscoverFeedDataStore _correctStoriesViewedState] */

void FUN_1068df0f0(long param_1,undefined **param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar16 = *(long *)(lVar15 * 8);
      lVar6 = lVar16;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        lVar6 = lVar7;
        func_0x00010c245680(lVar7);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR___NSConcreteGlobalBlock_110948a30;
        lVar8 = lVar6;
        func_0x000100504554();
        _objc_release(lVar6);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(lVar8);
      }
      lVar6 = lVar16;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar8 != 0) {
        lVar6 = lVar8;
        func_0x00010c245680(lVar8);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR___NSConcreteGlobalBlock_110948a70;
        lVar10 = lVar6;
        func_0x000100504554();
        _objc_release(lVar6);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(lVar10);
      }
      lVar6 = lVar16;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010afef86c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar10 != 0) {
        lVar6 = lVar10;
        func_0x00010c245680(lVar10);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR___NSConcreteGlobalBlock_110948a90;
        lVar11 = lVar6;
        func_0x000100504554();
        _objc_release(lVar6);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(lVar11);
      }
      lVar6 = lVar16;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar11 != 0) {
        lVar6 = lVar11;
        func_0x00010c245680(lVar11);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR___NSConcreteGlobalBlock_110948ab0;
        lVar12 = lVar6;
        func_0x000100504554();
        _objc_release(lVar6);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(lVar16);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(lVar12);
      }
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      lVar15 = lVar15 + 1;
    } while (lVar5 != lVar15);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar9 = puVar2;
  func_0x00010bf51e00(puVar2);
  puVar13 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010bee3ea0(param_1);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1068df620; end: 1068df63f;  */

void FUN_1068df620(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1068df640; end: 1068dfca3; -[SCDiscoverFeedDataStore _updateStoryWatchStateByStoryDedupFp:] */

void FUN_1068df640(undefined *param_1,undefined **param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **unaff_x28;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
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
  puVar9 = param_1;
  if (param_3 != 0) {
    puVar9 = *(undefined **)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar9;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = puVar9;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar10 == (undefined *)0x0) {
        puVar1 = puVar9;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010afefbe8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar4 != (undefined *)0x0) {
          func_0x00010bf8c980(puVar4);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar1 = puVar10;
          func_0x00010c08fa60();
          if (puVar1 != (undefined *)0x0) {
            _objc_initWeak(&puStack_d0,param_1);
            uVar3 = *(undefined8 *)(param_1 + 200);
            func_0x00010c269d40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_a0 = puVar10;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0xc2000000;
            uStack_130 = 0x1068dfd14;
            puStack_128 = &UNK_1108942f0;
            unaff_x28 = &puStack_140;
            param_2 = &puStack_d0;
            _objc_copyWeak(auStack_110,param_2);
            _objc_retain(puVar10);
            puStack_120 = puVar10;
            _objc_retain(puVar9);
            puStack_118 = puVar9;
            func_0x00010c108ee0(uVar3);
            _objc_release(puVar1);
            _objc_release(uVar3);
            _objc_release(puStack_118);
            _objc_release(puStack_120);
            _objc_destroyWeak(auStack_110);
            _objc_destroyWeak(&puStack_d0);
          }
          _objc_release(puVar10);
        }
        puVar1 = puVar9;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_a8 = puVar9;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be5d3a0(param_1);
          _objc_release(puVar1);
        }
        puVar1 = puVar9;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = puVar5;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          param_2 = &PTR___NSConcreteGlobalBlock_110948af0;
          puVar6 = puVar1;
          func_0x000100504554();
          _objc_release(puVar1);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_b8 = puVar1;
          puStack_b0 = puVar6;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_c8 = puVar7;
          puStack_c0 = puVar9;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bee3ea0(param_1);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(unaff_x28);
          _objc_release(puVar1);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
        _objc_release(puVar10);
        puVar10 = (undefined *)0x0;
      }
      else {
        func_0x00010bf8c980(puVar10);
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = puVar4;
        func_0x00010c08fa60();
        if (puVar1 != (undefined *)0x0) {
          _objc_initWeak(&puStack_d0,param_1);
          uVar3 = *(undefined8 *)(param_1 + 200);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_98 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_1068dfcac;
          puStack_f0 = &UNK_1108942f0;
          _objc_retain(puVar4);
          param_2 = &puStack_d0;
          puStack_e8 = puVar4;
          _objc_copyWeak(auStack_d8,param_2);
          _objc_retain(puVar9);
          puStack_e0 = puVar9;
          func_0x00010c108ee0(uVar3);
          _objc_release(puVar1);
          _objc_release(uVar3);
          _objc_release(puStack_e0);
          _objc_destroyWeak(auStack_d8);
          _objc_release(puStack_e8);
          _objc_destroyWeak(&puStack_d0);
        }
      }
    }
    else {
      puVar1 = puVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      param_2 = &PTR___NSConcreteGlobalBlock_110948ad0;
      puVar10 = puVar1;
      func_0x000100504554();
      _objc_release(puVar1);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar4;
      puStack_78 = puVar10;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar5;
      puStack_88 = puVar9;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee3ea0(param_1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 6);
  _objc_destroyWeak(&puStack_d0);
  __Unwind_Resume(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1068dfca4; end: 1068dfcab;  */

void FUN_1068dfca4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1068dfcac; end: 1068dfdd7;  */

void FUN_1068dfcac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdcee80();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068dfdd8; end: 1068dfddf;  */

void FUN_1068dfdd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1068dfde0; end: 1068e051f; -[SCDiscoverFeedDataStore _applyWatchStateMap:forLongformShowStories:] */

void FUN_1068dfde0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x22;
  long lVar18;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  ulong uVar19;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar20;
  undefined *unaff_x28;
  long lVar21;
  undefined1 auStack_730 [8];
  undefined1 auStack_728 [8];
  undefined *puStack_720;
  undefined *puStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined1 *puStack_6f8;
  undefined1 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  long lStack_6d0;
  undefined *puStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long *plStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_510;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined1 **ppuStack_4b0;
  code *pcStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined1 auStack_470 [8];
  undefined1 auStack_468 [8];
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined1 *puStack_340;
  code *pcStack_338;
  undefined *puStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  puVar15 = param_4;
  _objc_retain(param_3);
  puStack_310 = param_4;
  _objc_retain(param_4);
  puStack_300 = param_3;
  func_0x00010bf529e0();
  if (param_3 != (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_328 = param_1;
    _objc_opt_new();
    puVar1 = puStack_300;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    puStack_318 = puVar15;
    _objc_retain(puStack_300);
    puVar15 = auStack_180;
    func_0x00010bf52a60();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_308 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      unaff_x23 = &uStack_1b0;
      lStack_320 = *plStack_2d0;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_2d0 != lStack_320) {
            _objc_enumerationMutation(puStack_300);
          }
          unaff_x24 = puStack_310;
          puStack_2f8 = puVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puStack_300;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(unaff_x24);
          _objc_retain(unaff_x25);
          puVar15 = unaff_x24;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar15;
          func_0x00010afefbe8();
          _objc_retainAutoreleasedReturnValue();
          puStack_2e8 = puVar1;
          _objc_release(puVar15);
          puVar15 = puStack_2e8;
          if (puStack_2e8 == (undefined *)0x0) {
            _objc_retain(unaff_x24);
            puVar1 = unaff_x24;
          }
          else {
            puVar15 = PTR_PTR_1126ced50;
            func_0x00010bf81a00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = PTR_PTR_1126c6d78;
            puStack_2f0 = puVar15;
            func_0x00010bf82080();
            _objc_retainAutoreleasedReturnValue();
            uStack_1b0 = 0;
            uStack_1a0 = 0x3032000000;
            pcStack_198 = FUN_1068d384c;
            uStack_190 = 0x1068d385c;
            puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puStack_1a8 = unaff_x23;
            _objc_opt_new();
            puStack_1d8 = &uStack_1e0;
            uStack_1e0 = 0;
            uStack_1d0 = 0x3032000000;
            pcStack_1c8 = FUN_1068d384c;
            uStack_1c0 = 0x1068d385c;
            puStack_188 = puVar15;
            if (unaff_x25 == (undefined *)0x0) {
              puStack_1b8 = (undefined *)0x0;
LAB_1068e0160:
              puStack_248 = (undefined *)0x0;
              puStack_250 = (undefined *)0x0;
              uStack_238 = 0;
              puStack_240 = (undefined *)0x0;
              lStack_268 = 0;
              puStack_270 = (undefined *)0x0;
              puStack_258 = (undefined *)0x0;
              pcStack_260 = (code *)0x0;
              puVar15 = puStack_2e8;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar15;
              func_0x00010bf52a60();
              if (puVar1 != (undefined *)0x0) {
                lVar16 = *(long *)pcStack_260;
                do {
                  unaff_x26 = (undefined *)0x0;
                  do {
                    if (*(long *)pcStack_260 != lVar16) {
                      _objc_enumerationMutation(puVar15);
                    }
                    unaff_x22 = *(undefined8 *)(lStack_268 + (long)unaff_x26 * 8);
                    puStack_220 = puVar6;
                    lStack_218 = 0xc2000000;
                    pcStack_210 = FUN_1068eaebc;
                    puStack_208 = &UNK_110948e40;
                    puStack_1f8 = unaff_x23;
                    _objc_retain(unaff_x24);
                    puStack_1f0 = &uStack_1e0;
                    puStack_2a0 = puVar6;
                    uStack_298 = 0xc2000000;
                    pcStack_290 = FUN_1068eaf8c;
                    puStack_288 = &UNK_110948e10;
                    uStack_280 = unaff_x22;
                    puStack_278 = unaff_x23;
                    puStack_200 = unaff_x24;
                    func_0x00010c0bebc0(unaff_x22);
                    _objc_release(puStack_200);
                    unaff_x26 = unaff_x26 + 1;
                  } while (puVar1 != unaff_x26);
                  puVar1 = puVar15;
                  func_0x00010bf52a60();
                } while (puVar1 != (undefined *)0x0);
              }
              _objc_release(puVar15);
              uVar5 = puStack_1d8[5];
              puStack_1d8[5] = 0;
              _objc_release(uVar5);
              func_0x00010c2b09e0(unaff_x28);
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar15 = PTR_PTR_1126c2140;
              puVar1 = unaff_x24;
              func_0x00010c25a160(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf82100(puVar15);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
              func_0x00010c2b09e0(puVar15);
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar1 = puVar15;
              func_0x00010bf21f60(puVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2ba4e0(unaff_x28);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar1);
            }
            else {
              puVar15 = puStack_2e8;
              func_0x00010c2a2900();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = unaff_x25;
              puStack_1b8 = puVar15;
              func_0x00010c25e5c0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar1;
              func_0x00010c08fa60();
              _objc_release(puVar1);
              if (puVar15 == (undefined *)0x0) goto LAB_1068e0160;
              puStack_1f8 = (undefined8 *)0x0;
              puStack_200 = (undefined *)0x0;
              uStack_1e8 = 0;
              puStack_1f0 = (undefined8 *)0x0;
              lStack_218 = 0;
              puStack_220 = (undefined *)0x0;
              puStack_208 = (undefined *)0x0;
              pcStack_210 = (code *)0x0;
              puVar15 = puStack_2e8;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar15;
              func_0x00010bf52a60();
              if (puVar1 != (undefined *)0x0) {
                lVar16 = *(long *)pcStack_210;
                do {
                  unaff_x26 = (undefined *)0x0;
                  do {
                    if (*(long *)pcStack_210 != lVar16) {
                      _objc_enumerationMutation(puVar15);
                    }
                    unaff_x22 = *(undefined8 *)(lStack_218 + (long)unaff_x26 * 8);
                    puStack_270 = puVar6;
                    lStack_268 = 0xc2000000;
                    pcStack_260 = FUN_1068eab48;
                    puStack_258 = &UNK_110948de0;
                    _objc_retain(unaff_x25);
                    puStack_230 = &uStack_1e0;
                    puStack_250 = unaff_x25;
                    puStack_228 = unaff_x23;
                    _objc_retain(unaff_x24);
                    puStack_248 = unaff_x24;
                    _objc_retain(unaff_x28);
                    puStack_2a0 = puVar6;
                    uStack_298 = 0xc2000000;
                    pcStack_290 = FUN_1068eaeac;
                    puStack_288 = &UNK_110948e10;
                    uStack_280 = unaff_x22;
                    puStack_278 = unaff_x23;
                    puStack_240 = unaff_x28;
                    uStack_238 = unaff_x22;
                    func_0x00010c0bebc0(unaff_x22);
                    _objc_release(puStack_240);
                    _objc_release(puStack_248);
                    _objc_release(puStack_250);
                    unaff_x26 = unaff_x26 + 1;
                  } while (puVar1 != unaff_x26);
                  puVar1 = puVar15;
                  func_0x00010bf52a60();
                } while (puVar1 != (undefined *)0x0);
              }
            }
            _objc_release(puVar15);
            func_0x00010c2b9a60(puStack_2f0);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2bcc20(puStack_2f0);
            _objc_unsafeClaimAutoreleasedReturnValue();
            param_1 = PTR_PTR_1126c6d88;
            puVar15 = puStack_2f0;
            func_0x00010bf21f60(puStack_2f0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b5340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ba3c0(unaff_x28);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar15);
            puVar1 = unaff_x28;
            func_0x00010bf21f60(unaff_x28);
            _objc_retainAutoreleasedReturnValue();
            __Block_object_dispose(&uStack_1e0,8);
            _objc_release(puStack_1b8);
            __Block_object_dispose(&uStack_1b0,8);
            _objc_release(puStack_188);
            _objc_release(unaff_x28);
            _objc_release(puStack_2f0);
            puVar15 = puStack_2e8;
          }
          _objc_release(puVar15);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          func_0x00010befa120(puStack_318);
          _objc_release(puVar1);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          puVar15 = puStack_2f8 + 1;
        } while (puVar15 != puStack_308);
        puVar15 = auStack_180;
        puVar1 = puStack_300;
        func_0x00010bf52a60();
        unaff_x27 = puVar6;
        puStack_308 = puVar1;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puStack_300);
    param_4 = puStack_318;
    func_0x00010bf51e00();
    puVar6 = param_4;
    func_0x00010c28a480(puStack_328);
    _objc_release(param_4);
    _objc_release(puStack_318);
  }
  _objc_release(puStack_310);
  puVar1 = puStack_300;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1b0,8);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_338 = FUN_1068e0520;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_390 = unaff_x28;
  puStack_388 = unaff_x27;
  puStack_380 = unaff_x26;
  puStack_378 = unaff_x25;
  puStack_370 = unaff_x24;
  puStack_368 = unaff_x23;
  uStack_360 = unaff_x22;
  puStack_358 = param_1;
  puStack_350 = param_4;
  puStack_348 = puVar1;
  puStack_340 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar15);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  puStack_450 = (undefined8 *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  puVar3 = puVar6;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_450;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_450 != unaff_x25) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010befa160(puVar1);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar4 != unaff_x26);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_initWeak(auStack_468,puVar2);
  uVar5 = *(undefined8 *)(puVar2 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00();
  puStack_4a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_498 = 0xc2000000;
  pcStack_490 = FUN_1068e0758;
  puStack_488 = &UNK_1108942f0;
  _objc_retain(puVar15);
  puStack_480 = puVar15;
  _objc_retain(puVar6);
  puVar13 = auStack_468;
  puStack_478 = puVar6;
  _objc_copyWeak(auStack_470);
  func_0x00010c121840(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_470);
  _objc_release(puStack_478);
  _objc_release(puStack_480);
  _objc_destroyWeak(auStack_468);
  _objc_release(puVar1);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_470);
  _objc_destroyWeak(auStack_468);
  puVar3 = puVar6;
  __Unwind_Resume();
  pcStack_4a8 = FUN_1068e0758;
  lStack_510 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_500 = unaff_x28;
  puStack_4f8 = unaff_x27;
  puStack_4f0 = unaff_x26;
  puStack_4e8 = unaff_x25;
  puStack_4e0 = (undefined1 *)&puStack_4a0;
  puStack_4d8 = puVar2;
  uStack_4d0 = uVar5;
  puStack_4c8 = puVar1;
  puStack_4c0 = puVar15;
  puStack_4b8 = puVar6;
  ppuStack_4b0 = &puStack_340;
  _objc_retain(puVar13);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_6e0 = puVar15;
  _objc_opt_new();
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  plStack_640 = (long *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  lVar16 = *(long *)(puVar3 + 0x20);
  puStack_6d8 = puVar6;
  _objc_retain(lVar16);
  lStack_6c0 = lVar16;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_640;
    lStack_6d0 = lVar18;
    puStack_6c8 = puVar3;
    do {
      lVar20 = 0;
      lStack_6a8 = lVar16;
      do {
        if (*plStack_640 != lVar18) {
          _objc_enumerationMutation(lStack_6c0);
        }
        lVar7 = *(long *)(puVar3 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar7;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar16;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        lVar16 = lVar7;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar16;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        lVar16 = lVar7;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar16;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        lStack_6a0 = lVar21;
        lStack_698 = lVar9;
        if ((lVar8 == 0 && lVar9 == 0) && lVar21 == 0) {
          lVar16 = lVar7;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar16;
          func_0x00010afef61c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar9 != 0) {
            func_0x00010bf8c980(lVar9);
            func_0x00010c0df7c0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar15;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_6d8);
            _objc_release(puVar6);
            _objc_release(puVar15);
          }
        }
        else {
          uStack_668 = 0;
          uStack_670 = 0;
          uStack_658 = 0;
          uStack_660 = 0;
          lStack_688 = 0;
          uStack_690 = 0;
          uStack_678 = 0;
          plStack_680 = (long *)0x0;
          lVar9 = *(long *)(puVar3 + 0x28);
          lStack_6b8 = lVar7;
          lStack_6b0 = lVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar9;
          func_0x00010bf52a60();
          if (lVar16 != 0) {
            lVar21 = *plStack_680;
            do {
              lVar17 = 0;
              do {
                if (*plStack_680 != lVar21) {
                  _objc_enumerationMutation(lVar9);
                }
                uVar19 = *(ulong *)(lStack_688 + lVar17 * 8);
                func_0x000108477bb0();
                if ((uVar19 & 1) == 0) {
                  puVar10 = puVar13;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = puStack_6c8;
                  lVar18 = lStack_6d0;
                  lVar7 = lStack_6b8;
                  lVar8 = lStack_6b0;
                  if (puVar10 == (undefined1 *)0x0) goto LAB_1068e0aac;
                  puVar11 = puVar13;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar12 = puVar11;
                  func_0x00010c29ea60();
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  puVar3 = puStack_6c8;
                  lVar18 = lStack_6d0;
                  lVar7 = lStack_6b8;
                  lVar8 = lStack_6b0;
                  if ((int)puVar12 == 0) goto LAB_1068e0aac;
                }
                lVar17 = lVar17 + 1;
              } while (lVar16 != lVar17);
              lVar16 = lVar9;
              func_0x00010bf52a60();
            } while (lVar16 != 0);
          }
          _objc_release(lVar9);
          puVar3 = puStack_6c8;
          lVar9 = *(long *)(puStack_6c8 + 0x20);
          func_0x00010c0e00e0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_6e0);
          lVar18 = lStack_6d0;
          lVar7 = lStack_6b8;
          lVar8 = lStack_6b0;
        }
LAB_1068e0aac:
        lVar16 = lStack_6a8;
        _objc_release(lVar9);
        _objc_release(lStack_6a0);
        _objc_release(lStack_698);
        _objc_release(lVar8);
        _objc_release(lVar7);
        lVar20 = lVar20 + 1;
      } while (lVar20 != lVar16);
      lVar16 = lStack_6c0;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(lStack_6c0);
  puVar3 = puVar3 + 0x30;
  _objc_loadWeakRetained();
  puVar15 = puStack_6e0;
  puVar1 = puStack_6e0;
  func_0x00010bf51e00();
  puVar6 = puStack_6d8;
  puVar2 = puStack_6d8;
  func_0x00010bf51e00();
  puVar4 = puVar1;
  puVar14 = puVar2;
  puVar11 = puVar13;
  func_0x00010be5d3c0(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar15);
  puVar10 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_510) {
    return;
  }
  ___stack_chk_fail();
  puStack_720 = puVar6;
  puStack_718 = puVar15;
  pcStack_6e8 = FUN_1068e0bb0;
  puStack_710 = puVar2;
  puStack_708 = puVar1;
  puStack_700 = puVar3;
  puStack_6f8 = puVar13;
  pppuStack_6f0 = &ppuStack_4b0;
  _objc_retain(puVar4);
  _objc_retain(puVar14);
  _objc_retain(puVar11);
  func_0x00010be5d3a0(puVar10);
  puVar15 = puVar14;
  func_0x00010bf529e0();
  if (puVar15 != (undefined *)0x0) {
    _objc_initWeak(auStack_728,puVar10);
    uVar5 = *(undefined8 *)(puVar10 + 200);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf002e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_730,auStack_728);
    _objc_retain(puVar11);
    _objc_retain(puVar14);
    func_0x00010c108ee0(uVar5);
    _objc_release(puVar15);
    _objc_release(uVar5);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_730);
    _objc_destroyWeak(auStack_728);
  }
  _objc_release(puVar11);
  _objc_release(puVar14);
  _objc_release(puVar4);
  return;
}



/* Entry: 1068e0520; end: 1068e0757; -[SCDiscoverFeedDataStore _updateViewedStateForStoryDedupToSnapIdsDict:storyDedupToStoryDict:] */

void FUN_1068e0520(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_400 [8];
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  long lStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 **ppuStack_3c0;
  code *pcStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_1e0;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar14 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_120;
    do {
      lVar19 = 0;
      do {
        if (*plStack_120 != lVar18) {
          _objc_enumerationMutation(lVar14);
        }
        func_0x00010befa160(puVar1);
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = lVar14;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(lVar14);
  _objc_initWeak(auStack_138,param_1);
  uVar2 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf51e00();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1068e0758;
  puStack_158 = &UNK_1108942f0;
  _objc_retain(param_4);
  uStack_150 = param_4;
  _objc_retain(param_3);
  puVar11 = auStack_138;
  lStack_148 = param_3;
  _objc_copyWeak(auStack_140);
  func_0x00010c121840(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_140);
  _objc_release(lStack_148);
  _objc_release(uStack_150);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  pcStack_178 = FUN_1068e0758;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_3b0 = puVar1;
  _objc_opt_new();
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lVar14 = *(long *)(param_3 + 0x20);
  puStack_3a8 = puVar3;
  _objc_retain(lVar14);
  lStack_390 = lVar14;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar16 = *plStack_310;
    lStack_3a0 = lVar16;
    lStack_398 = param_3;
    do {
      lVar18 = 0;
      lStack_378 = lVar14;
      do {
        if (*plStack_310 != lVar16) {
          _objc_enumerationMutation(lStack_390);
        }
        lVar4 = *(long *)(param_3 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar4;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar14;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        lVar14 = lVar4;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar14;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        lVar14 = lVar4;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar14;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        lStack_370 = lVar20;
        lStack_368 = lVar5;
        if ((lVar19 == 0 && lVar5 == 0) && lVar20 == 0) {
          lVar14 = lVar4;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar14;
          func_0x00010afef61c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar5 != 0) {
            func_0x00010bf8c980(lVar5);
            func_0x00010c0df7c0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_3a8);
            _objc_release(puVar3);
            _objc_release(puVar1);
          }
        }
        else {
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          lStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          plStack_350 = (long *)0x0;
          lVar5 = *(long *)(param_3 + 0x28);
          lStack_388 = lVar4;
          lStack_380 = lVar19;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar5;
          func_0x00010bf52a60();
          if (lVar14 != 0) {
            lVar20 = *plStack_350;
            do {
              lVar15 = 0;
              do {
                if (*plStack_350 != lVar20) {
                  _objc_enumerationMutation(lVar5);
                }
                uVar17 = *(ulong *)(lStack_358 + lVar15 * 8);
                func_0x000108477bb0();
                if ((uVar17 & 1) == 0) {
                  puVar6 = puVar11;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  param_3 = lStack_398;
                  lVar16 = lStack_3a0;
                  lVar4 = lStack_388;
                  lVar19 = lStack_380;
                  if (puVar6 == (undefined1 *)0x0) goto LAB_1068e0aac;
                  puVar7 = puVar11;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  func_0x00010c29ea60();
                  _objc_release(puVar7);
                  _objc_release(puVar6);
                  param_3 = lStack_398;
                  lVar16 = lStack_3a0;
                  lVar4 = lStack_388;
                  lVar19 = lStack_380;
                  if ((int)puVar8 == 0) goto LAB_1068e0aac;
                }
                lVar15 = lVar15 + 1;
              } while (lVar14 != lVar15);
              lVar14 = lVar5;
              func_0x00010bf52a60();
            } while (lVar14 != 0);
          }
          _objc_release(lVar5);
          param_3 = lStack_398;
          lVar5 = *(long *)(lStack_398 + 0x20);
          func_0x00010c0e00e0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_3b0);
          lVar16 = lStack_3a0;
          lVar4 = lStack_388;
          lVar19 = lStack_380;
        }
LAB_1068e0aac:
        lVar14 = lStack_378;
        _objc_release(lVar5);
        _objc_release(lStack_370);
        _objc_release(lStack_368);
        _objc_release(lVar19);
        _objc_release(lVar4);
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar14);
      lVar14 = lStack_390;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lStack_390);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = puStack_3b0;
  puVar9 = puStack_3b0;
  func_0x00010bf51e00();
  puVar3 = puStack_3a8;
  puVar10 = puStack_3a8;
  func_0x00010bf51e00();
  puVar12 = puVar9;
  puVar13 = puVar10;
  puVar7 = puVar11;
  func_0x00010be5d3c0(param_3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar6 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return;
  }
  ___stack_chk_fail();
  puStack_3f0 = puVar3;
  puStack_3e8 = puVar1;
  pcStack_3b8 = FUN_1068e0bb0;
  puStack_3e0 = puVar10;
  puStack_3d8 = puVar9;
  lStack_3d0 = param_3;
  puStack_3c8 = puVar11;
  ppuStack_3c0 = &puStack_180;
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  _objc_retain(puVar7);
  func_0x00010be5d3a0(puVar6);
  puVar1 = puVar13;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_3f8,puVar6);
    uVar2 = *(undefined8 *)(puVar6 + 200);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010bf002e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_400,auStack_3f8);
    _objc_retain(puVar7);
    _objc_retain(puVar13);
    func_0x00010c108ee0(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_400);
    _objc_destroyWeak(auStack_3f8);
  }
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar12);
  return;
}



/* Entry: 1068e0758; end: 1068e0baf;  */

void FUN_1068e0758(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
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
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_240 = puVar1;
  _objc_opt_new();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  puStack_238 = puVar2;
  _objc_retain(lVar13);
  lStack_220 = lVar13;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar15 = *plStack_1a0;
    lStack_230 = lVar15;
    lStack_228 = param_1;
    do {
      lVar17 = 0;
      lStack_208 = lVar13;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(lStack_220);
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar3;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar13;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lVar13 = lVar3;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar13;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lVar13 = lVar3;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar13;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lStack_200 = lVar18;
        lStack_1f8 = lVar5;
        if ((lVar4 == 0 && lVar5 == 0) && lVar18 == 0) {
          lVar13 = lVar3;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar13;
          func_0x00010afef61c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar13);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar5 != 0) {
            func_0x00010bf8c980(lVar5);
            func_0x00010c0df7c0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_238);
            _objc_release(puVar2);
            _objc_release(puVar1);
          }
        }
        else {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          lVar5 = *(long *)(param_1 + 0x28);
          lStack_218 = lVar3;
          lStack_210 = lVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar5;
          func_0x00010bf52a60();
          if (lVar13 != 0) {
            lVar18 = *plStack_1e0;
            do {
              lVar14 = 0;
              do {
                if (*plStack_1e0 != lVar18) {
                  _objc_enumerationMutation(lVar5);
                }
                uVar16 = *(ulong *)(lStack_1e8 + lVar14 * 8);
                func_0x000108477bb0();
                if ((uVar16 & 1) == 0) {
                  lVar6 = param_2;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  param_1 = lStack_228;
                  lVar15 = lStack_230;
                  lVar3 = lStack_218;
                  lVar4 = lStack_210;
                  if (lVar6 == 0) goto LAB_1068e0aac;
                  lVar15 = param_2;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar7 = lVar15;
                  func_0x00010c29ea60();
                  _objc_release(lVar15);
                  _objc_release(lVar6);
                  param_1 = lStack_228;
                  lVar15 = lStack_230;
                  lVar3 = lStack_218;
                  lVar4 = lStack_210;
                  if ((int)lVar7 == 0) goto LAB_1068e0aac;
                }
                lVar14 = lVar14 + 1;
              } while (lVar13 != lVar14);
              lVar13 = lVar5;
              func_0x00010bf52a60();
            } while (lVar13 != 0);
          }
          _objc_release(lVar5);
          param_1 = lStack_228;
          lVar5 = *(long *)(lStack_228 + 0x20);
          func_0x00010c0e00e0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_240);
          lVar15 = lStack_230;
          lVar3 = lStack_218;
          lVar4 = lStack_210;
        }
LAB_1068e0aac:
        lVar13 = lStack_208;
        _objc_release(lVar5);
        _objc_release(lStack_200);
        _objc_release(lStack_1f8);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar13);
      lVar13 = lStack_220;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lStack_220);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = puStack_240;
  puVar8 = puStack_240;
  func_0x00010bf51e00();
  puVar2 = puStack_238;
  puVar9 = puStack_238;
  func_0x00010bf51e00();
  puVar11 = puVar8;
  puVar12 = puVar9;
  lVar15 = param_2;
  func_0x00010be5d3c0(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_280 = puVar2;
  puStack_278 = puVar1;
  pcStack_248 = FUN_1068e0bb0;
  puStack_270 = puVar9;
  puStack_268 = puVar8;
  lStack_260 = param_1;
  lStack_258 = param_2;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(lVar15);
  func_0x00010be5d3a0(lVar13);
  puVar1 = puVar12;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_288,lVar13);
    uVar10 = *(undefined8 *)(lVar13 + 200);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf002e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_290,auStack_288);
    _objc_retain(lVar15);
    _objc_retain(puVar12);
    func_0x00010c108ee0(uVar10);
    _objc_release(puVar1);
    _objc_release(uVar10);
    _objc_release(puVar12);
    _objc_release(lVar15);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_288);
  }
  _objc_release(lVar15);
  _objc_release(puVar12);
  _objc_release(puVar11);
  return;
}



/* Entry: 1068e0bb0; end: 1068e0d23; -[SCDiscoverFeedDataStore _markDiscoverStoriesAsViewed:publisherStoryIdToStoryDict:viewStatesMap:] */

void FUN_1068e0bb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be5d3a0(param_1);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf002e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c108ee0(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e0d24; end: 1068e0d77;  */

void FUN_1068e0d24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdceec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e0d78; end: 1068e0fa3; -[SCDiscoverFeedDataStore _applyWatchStates:viewStatesMap:forPublisherStories:] */

void FUN_1068e0d78(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  puVar2 = param_4;
  uStack_148 = param_1;
  _objc_retain(param_3);
  puStack_138 = param_4;
  _objc_retain(param_4);
  lStack_140 = param_5;
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar2 = auStack_f0;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      param_5 = *plStack_120;
      do {
        unaff_x22 = (undefined *)0x0;
        do {
          if (*plStack_120 != param_5) {
            _objc_enumerationMutation(param_3);
          }
          puVar2 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lStack_140;
          func_0x00010c0e00e0(lStack_140);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010afef61c();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uStack_148;
          func_0x00010be61040(uStack_148);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          _objc_release(lVar4);
          func_0x00010befa120(unaff_x23);
          _objc_release(uVar9);
          _objc_release(lVar3);
          _objc_release(puVar2);
          unaff_x22 = unaff_x22 + 1;
        } while (puVar1 != unaff_x22);
        puVar2 = auStack_f0;
        puVar1 = param_3;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_3);
    param_4 = unaff_x23;
    func_0x00010bf51e00();
    puVar10 = param_4;
    func_0x00010c28a480(uStack_148);
    _objc_release(param_4);
    _objc_release(unaff_x23);
  }
  _objc_release(lStack_140);
  _objc_release(puStack_138);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1068e0fa4;
  uStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  lStack_178 = param_5;
  puStack_170 = param_4;
  puStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar2);
  if (puVar10 != (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x00010c259560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010c245680(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x000100504554();
    _objc_release(puVar6);
    _objc_initWeak(auStack_198,puVar1);
    uVar9 = *(undefined8 *)(puVar1 + 200);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a0,auStack_198);
    _objc_retain(puVar10);
    _objc_retain(puVar2);
    func_0x00010c121840(uVar9);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release(puVar10);
  return;
}



/* Entry: 1068e0fa4; end: 1068e113b; -[SCDiscoverFeedDataStore _applyWatchState:forPublisherStory:] */

void FUN_1068e0fa4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar3 = param_4;
    func_0x00010c259560(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c245680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x000100504554();
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c121840(uVar3);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e113c; end: 1068e1143;  */

void FUN_1068e113c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1068e1144; end: 1068e1283;  */

void FUN_1068e1144(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  undefined8 uVar16;
  undefined *puVar17;
  undefined *in_x5;
  long lVar18;
  undefined *puStack_148;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  uVar16 = param_2;
  puVar17 = puVar5;
  func_0x00010bdceec0(lVar1);
  _objc_release(param_2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(uVar16);
  _objc_retain(puVar17);
  _objc_retain(in_x5);
  if (puVar15 == (undefined *)0x0) {
    puVar3 = in_x5;
    func_0x00010c2a2900();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08abc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = in_x5;
    func_0x00010c2a2900(in_x5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c242a00();
    _objc_release(puVar3);
    puVar3 = in_x5;
    func_0x00010c2a2900(in_x5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08ca0();
    _objc_release(puVar3);
  }
  else {
    puVar5 = puVar15;
    func_0x00010c25e5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(puVar15);
    func_0x00010bf08ca0(puVar15);
  }
  puVar3 = in_x5;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1068e1964;
  puStack_100 = &UNK_110948b30;
  _objc_retain(puVar15);
  puStack_f8 = puVar15;
  _objc_retain(uVar16);
  puVar6 = puVar3;
  uStack_f0 = uVar16;
  func_0x000100504554(puVar3,&puStack_118);
  _objc_release(puVar3);
  _objc_retain(puVar5);
  _objc_retain(in_x5);
  _objc_retain(puVar6);
  puVar3 = puVar5;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puStack_148 = (undefined *)0x0;
  }
  else {
    puStack_148 = PTR_PTR_1126ced60;
    _objc_alloc();
    func_0x00010c021960();
  }
  puVar7 = PTR_PTR_1126ced68;
  _objc_alloc();
  puVar3 = in_x5;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c980();
  func_0x00010c158300();
  puVar8 = in_x5;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = in_x5;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b6a0();
  func_0x00010c076ae0();
  puVar10 = in_x5;
  func_0x00010c2387e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd5fc0();
  func_0x00010c07dbe0();
  func_0x00010c2768e0();
  func_0x00010c0c2d60();
  func_0x00010c25b900();
  func_0x00010bfed580();
  puVar11 = in_x5;
  func_0x00010bf4d8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed800();
  _objc_release(in_x5);
  func_0x00010c03c020(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puStack_148);
  _objc_release(puVar5);
  puVar9 = puVar7;
  func_0x00010847bdd8(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2140;
  puVar8 = puVar17;
  func_0x00010c25a160(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126c22b0;
  puVar10 = puVar17;
  func_0x00010c25a160(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c26e920(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb160(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = puVar8;
  func_0x00010bf21f60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b67e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = in_x5;
  func_0x00010c245680(in_x5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000100504554();
  _objc_release(puVar10);
  func_0x00010c2b9440(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c6d88;
  func_0x00010c11b640(PTR_PTR_1126c6d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba3c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = puVar15;
  func_0x00010bf08ca0();
  if (99 < (int)puVar12) {
    func_0x00010c2b09e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b09e0(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar1 + 0xb8);
    puVar12 = puVar17;
    func_0x000107bfa524(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar17;
    func_0x00010bf454e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    func_0x000108483614(puVar17);
    puVar14 = puVar17;
    func_0x00010bf454e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a6c0(uVar2);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  puVar12 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = puVar10;
  func_0x00010bf21f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uStack_f0);
  _objc_release(puStack_f8);
  _objc_release(puVar5);
  _objc_release(in_x5);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1068e1284; end: 1068e1963; -[SCDiscoverFeedDataStore _modifiedStoryWithWatchState:viewStateMap:story:publisherStory:] */

void FUN_1068e1284(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

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
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_c8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    lVar1 = param_6;
    func_0x00010c2a2900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08abc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_6;
    func_0x00010c2a2900(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c242a00();
    _objc_release(lVar1);
    lVar1 = param_6;
    func_0x00010c2a2900(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08ca0();
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c25e5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(param_3);
    func_0x00010bf08ca0(param_3);
  }
  lVar1 = param_6;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1068e1964;
  puStack_80 = &UNK_110948b30;
  _objc_retain(param_3);
  lStack_78 = param_3;
  _objc_retain(param_4);
  lVar3 = lVar1;
  uStack_70 = param_4;
  func_0x000100504554(lVar1,&puStack_98);
  _objc_release(lVar1);
  _objc_retain(lVar2);
  _objc_retain(param_6);
  _objc_retain(lVar3);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_c8 = (undefined *)0x0;
  }
  else {
    puStack_c8 = PTR_PTR_1126ced60;
    _objc_alloc();
    func_0x00010c021960();
  }
  puVar4 = PTR_PTR_1126ced68;
  _objc_alloc();
  lVar1 = param_6;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c980();
  func_0x00010c158300();
  lVar5 = param_6;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b6a0();
  func_0x00010c076ae0();
  lVar7 = param_6;
  func_0x00010c2387e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd5fc0();
  func_0x00010c07dbe0();
  func_0x00010c2768e0();
  func_0x00010c0c2d60();
  func_0x00010c25b900();
  func_0x00010bfed580();
  lVar8 = param_6;
  func_0x00010bf4d8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed800();
  _objc_release(param_6);
  func_0x00010c03c020(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puStack_c8);
  _objc_release(lVar2);
  puVar9 = puVar4;
  func_0x00010847bdd8(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c2140;
  uVar10 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar13 = PTR_PTR_1126c22b0;
  uVar10 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar10);
  puVar14 = puVar9;
  func_0x00010c26e920(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb160(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar14);
  puVar14 = puVar13;
  func_0x00010bf21f60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b67e0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar14);
  lVar1 = param_6;
  func_0x00010c245680(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  func_0x00010c2b9440(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c6d88;
  func_0x00010c11b640(PTR_PTR_1126c6d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba3c0(puVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  lVar1 = param_3;
  func_0x00010bf08ca0();
  if (99 < (int)lVar1) {
    func_0x00010c2b09e0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b09e0(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0xb8);
    uVar10 = param_5;
    func_0x000107bfa524(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010bf454e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    func_0x000108483614(param_5);
    uVar16 = param_5;
    func_0x00010bf454e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a6c0(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar10);
  }
  puVar15 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = puVar14;
  func_0x00010bf21f60(puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(lVar5);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1068e1964; end: 1068e1a47;  */

void FUN_1068e1964(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c26e920(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c239600();
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf08ca0();
    lVar4 = (long)(int)lVar1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  lVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar3 = param_2;
    func_0x00010c29ea60(param_2);
  }
  else {
    lVar3 = 1;
  }
  lVar2 = param_2;
  func_0x00010847d8d4(param_2,lVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1068e1a48; end: 1068e1c23; -[SCDiscoverFeedDataStore _markDiscoverFeedStoriesAsViewed:] */

void FUN_1068e1a48(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    param_2 = &PTR___NSConcreteGlobalBlock_110948b80;
    lVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110948b80);
    _objc_release(param_3);
    func_0x00010c28a480(param_1);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(undefined8 *)(lVar11 * 8);
        uVar13 = *(undefined8 *)(param_1 + 0xb8);
        uVar4 = uVar12;
        func_0x000107bfa524(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar12;
        func_0x00010bf454e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        func_0x000108483614(uVar12);
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28a6c0(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar5);
        _objc_release(uVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    param_3 = lVar3;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c6d78;
  _objc_retain(param_2);
  func_0x00010bf82080(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c2140;
  ppuVar7 = param_2;
  func_0x00010c25a160(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf82100(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x00010c2b09e0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b09e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf21f60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1068e1c24; end: 1068e1d33;  */

void FUN_1068e1c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c6d78;
  _objc_retain(param_2);
  func_0x00010bf82080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2140;
  uVar2 = param_2;
  func_0x00010c25a160(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf82100(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2b09e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b09e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068e1d34; end: 1068e1dcb; -[SCDiscoverFeedDataStore setDiskCacheLoadingState:] */

void FUN_1068e1d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x128) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068e1dcc;
  puStack_48 = &UNK_110848c48;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  return;
}



/* Entry: 1068e1dcc; end: 1068e1e13;  */

void FUN_1068e1dcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068e1e14; end: 1068e1eff; -[SCDiscoverFeedDataStore _dispatchAnnounceRerankingUpdateWithExtraData:] */

void FUN_1068e1e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068e1f00;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068e1f00; end: 1068e1f33;  */

void FUN_1068e1f00(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e1f34; end: 1068e1fab; -[SCDiscoverFeedDataStore _announceRerankingUpdateWithExtraData:] */

void FUN_1068e1f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41678,param_1,param_3
                     );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e1fac; end: 1068e2cef; -[SCDiscoverFeedDataStore _prepareCachedStreamAndSaveToDiskWithStoryDedupeFpDictionary:sectionDataModels:sectionMetadata:feedIdentifiers:stories:preservedStoryStore:loadState:withNewData:] */

ulong FUN_1068e1fac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,ulong param_7,long param_8,long param_9)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_730;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar19 = *plStack_3b0;
    do {
      uVar23 = 0;
      do {
        if (*plStack_3b0 != lVar19) {
          _objc_enumerationMutation(param_7);
        }
        uVar3 = param_7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        uVar15 = uVar3;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar15;
        func_0x00010c25b480();
        if (uVar4 == 0x21) {
LAB_1068e2114:
          _objc_release(uVar15);
LAB_1068e211c:
          _objc_release(uVar3);
        }
        else {
          uVar4 = uVar3;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c25b480();
          if (uVar5 == 0x19) {
            _objc_release(uVar4);
            goto LAB_1068e2114;
          }
          uVar5 = uVar3;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c25b480();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar15);
          if (((uVar6 == 0x1a) || (uVar15 = uVar3, func_0x00010c25b720(), 0xf < uVar15)) ||
             ((1L << (uVar15 & 0x3f) & 0xe82eU) == 0)) goto LAB_1068e211c;
          _objc_release(uVar3);
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(uVar3);
        uVar23 = uVar23 + 1;
      } while (uVar2 != uVar23);
      uVar2 = param_7;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(param_7);
  lVar19 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_740 = param_3;
  if (lVar19 != 0) {
    puVar7 = PTR_PTR_1126ced30;
    _objc_alloc(PTR_PTR_1126ced30);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0126a0(puVar7);
    _objc_release(puVar8);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar2;
    func_0x00010bf529e0();
    if (uVar23 != 0) {
      puStack_3e8 = puVar10;
      uStack_3e0 = 0xc2000000;
      pcStack_3d8 = FUN_1068e2cf0;
      puStack_3d0 = &UNK_110886d58;
      uVar23 = uVar2;
      lStack_3c8 = param_1;
      func_0x0001006372a4(uVar2,&puStack_3e8);
      func_0x00010c14ca00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(uVar23);
    }
    _objc_release(uVar2);
    _objc_release(puVar7);
  }
  uVar2 = uStack_740;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar2);
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  puVar7 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf51e00();
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar19 = *plStack_420;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_420 != lVar19) {
          _objc_enumerationMutation(puVar8);
        }
        uVar2 = uVar23;
        func_0x00010bf4b900();
        if ((uVar2 & 1) == 0) {
          func_0x00010c12d3e0(puVar1);
        }
        puVar21 = puVar21 + 1;
      } while (puVar7 != puVar21);
      puVar7 = puVar8;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar8);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  _objc_retain(uStack_740);
  uStack_748 = uStack_740;
  func_0x00010bf52a60();
  if (uStack_748 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    lVar14 = *plStack_460;
    do {
      uStack_730 = 0;
      do {
        if (*plStack_460 != lVar14) {
          _objc_enumerationMutation(uStack_740);
        }
        uVar13 = *(undefined8 *)(lStack_468 + uStack_730 * 8);
        uVar2 = uStack_740;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar13;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar16;
        func_0x00010c071ae0();
        if ((int)uVar22 == 0) {
          uVar22 = uVar13;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar22;
          func_0x00010c071ae0();
          _objc_release(uVar22);
          _objc_release(uVar16);
          if ((int)uVar9 != 0) goto LAB_1068e2514;
        }
        else {
          _objc_release(uVar16);
LAB_1068e2514:
          puStack_498 = puVar10;
          uStack_490 = 0xc2000000;
          pcStack_488 = FUN_1068e2d4c;
          puStack_480 = &UNK_110948be0;
          _objc_retain(puVar1);
          uVar3 = uVar2;
          puStack_478 = puVar1;
          func_0x00010bf43280(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar13;
          func_0x00010bfa4340(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(uVar16);
          _objc_release(uVar3);
          _objc_release(puStack_478);
        }
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        plStack_4d0 = (long *)0x0;
        _objc_retain(uVar2);
        uVar3 = uVar2;
        func_0x00010bf52a60();
        lVar24 = 0;
        if (uVar3 != 0) {
          lVar18 = *plStack_4d0;
          do {
            uVar15 = 0;
            do {
              if (*plStack_4d0 != lVar18) {
                _objc_enumerationMutation(uVar2);
              }
              puVar21 = puVar1;
              func_0x00010c0e00e0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              uStack_500 = 0;
              uStack_4f0 = 0x2020000000;
              uStack_4e8 = 0;
              puVar20 = puVar21;
              puStack_4f8 = &uStack_500;
              func_0x00010c259560();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0bf680();
              _objc_release(puVar20);
              lVar17 = puStack_4f8[3];
              puVar20 = puVar8;
              func_0x00010bf4b900();
              if (((ulong)puVar20 & 1) == 0) {
                func_0x00010befa120(puVar8);
                lVar19 = puStack_4f8[3] + lVar19;
              }
              __Block_object_dispose(&uStack_500,8);
              _objc_release(puVar21);
              lVar24 = lVar17 + lVar24;
              uVar15 = uVar15 + 1;
            } while (uVar3 != uVar15);
            uVar3 = uVar2;
            func_0x00010bf52a60();
          } while (uVar3 != 0);
        }
        _objc_release(uVar2);
        puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar21);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        func_0x00010852e214(*(undefined8 *)(param_1 + 0x100),puVar21,lVar24);
        uVar16 = *(undefined8 *)(param_1 + 0x100);
        uVar3 = uVar2;
        func_0x00010bf529e0(uVar2);
        func_0x00010852e3a8(uVar16,puVar21,uVar3);
        _objc_release(puVar21);
        _objc_release(uVar2);
        uStack_730 = uStack_730 + 1;
      } while (uStack_730 != uStack_748);
      uStack_748 = uStack_740;
      func_0x00010bf52a60();
    } while (uStack_748 != 0);
  }
  _objc_release(uStack_740);
  func_0x00010852e53c(*(undefined8 *)(param_1 + 0x100),lVar19);
  uVar16 = *(undefined8 *)(param_1 + 0x100);
  puVar10 = puVar1;
  func_0x00010bf529e0(puVar1);
  func_0x00010852e5d4(uVar16,puVar10);
  if (param_9 == 2) {
    puVar10 = puVar7;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar10;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    if (puVar21 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    else {
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(puVar10);
          }
          uVar22 = *(undefined8 *)((long)puVar20 * 8);
          uVar16 = *(undefined8 *)(param_1 + 0x108);
          func_0x00010c269d40(uVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010c0e00e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0(uVar22);
          func_0x00010c287c80(uVar16);
          _objc_release(puVar11);
          _objc_release(uVar16);
          puVar20 = puVar20 + 1;
        } while (puVar21 != puVar20);
        puVar21 = puVar10;
        func_0x00010bf52a60();
      } while (puVar21 != (undefined *)0x0);
      _objc_release(puVar10);
    }
    if (lVar19 == 0) {
      uVar2 = uStack_740;
      func_0x00010bf529e0();
      if (uVar2 == 0) {
        ppuVar12 = &PTR____CFConstantStringClassReference_110e644d8;
      }
      else {
        puVar10 = puVar1;
        func_0x00010bf529e0();
        ppuVar12 = &PTR____CFConstantStringClassReference_110e644f8;
        if (puVar10 != (undefined *)0x0) {
          ppuVar12 = &PTR____CFConstantStringClassReference_110e64518;
        }
      }
LAB_1068e2a54:
      func_0x00010852de70(*(undefined8 *)(param_1 + 0x100),ppuVar12,1);
    }
  }
  else if (lVar19 == 0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110e644b8;
    goto LAB_1068e2a54;
  }
  uVar3 = uStack_740;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  while (uVar2 != 0) {
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(uVar3);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    uVar2 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar14 = *(long *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010c10ff80();
  if ((int)lVar19 != 0) {
    uVar22 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126c2320;
    func_0x00010bf71740(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar22;
    func_0x00010bf1f320();
    _objc_release(puVar21);
    _objc_release(uVar22);
    _objc_release(lVar14);
    if (((uint)(param_8 != 0) & (uint)uVar16) != 1) goto LAB_1068e2c00;
    lVar14 = param_8;
    func_0x00010bfa3d80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_8;
    func_0x00010c10ff40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar14 != 0) && (lVar24 = lVar19, func_0x00010bf529e0(), lVar24 != 0)) {
      func_0x00010c1d0640(puVar10);
      uVar16 = *(undefined8 *)(param_1 + 0x100);
      lVar24 = lVar19;
      func_0x00010bf529e0(lVar19);
      func_0x00010852e66c(uVar16,lVar24);
    }
    _objc_release(lVar19);
  }
  _objc_release(lVar14);
LAB_1068e2c00:
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a800();
  _objc_release(uVar16);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar23);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uStack_740;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_500,8);
  __Unwind_Resume();
  uVar16 = *(undefined8 *)(*(long *)(uStack_740 + 0x20) + 0x40);
  func_0x00010bf4b900(uVar16);
  return (ulong)((uint)uVar16 ^ 1);
}



/* Entry: 1068e2cf0; end: 1068e2d13;  */

uint FUN_1068e2cf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1068e2d14; end: 1068e2d4b;  */

void FUN_1068e2d14(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010befa160(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068e2d4c; end: 1068e2d57;  */

void FUN_1068e2d4c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068e2d58; end: 1068e2fbb;  */

void FUN_1068e2d58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068e2fbc; end: 1068e3223; -[SCDiscoverFeedDataStore _handleCachedData:startTime:completion:] */

void FUN_1068e2fbc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  puStack_68 = puVar3;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ced40;
  _objc_opt_class(PTR_PTR_1126ced40);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_initWeak(auStack_88,param_2);
  uVar4 = uVar1;
  func_0x00010c258200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  if (uVar5 == 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1068e3224;
    puStack_a8 = &UNK_1108493b0;
    puStack_98 = &uStack_80;
    puVar6 = auStack_90;
    _objc_copyWeak(puVar6,auStack_88);
    _objc_retain(param_5);
    uStack_a0 = param_5;
    func_0x00010c0f7fc0(uVar7);
    uVar4 = uStack_a0;
  }
  else {
    puVar6 = auStack_d0;
    _objc_copyWeak(puVar6,auStack_88);
    _objc_retain(uVar1);
    uStack_c8 = param_1;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_5);
    uVar4 = uVar1;
  }
  _objc_release(uVar4);
  _objc_destroyWeak(puVar6);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1068e3224; end: 1068e32ef;  */

void FUN_1068e3224(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e32f0; end: 1068e333f; -[SCDiscoverFeedDataStore _handleCachedFailureWithCompletion:] */

void FUN_1068e32f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f2a0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068e3340; end: 1068e344f; -[SCDiscoverFeedDataStore _dispatchAnnounceDataStoreStoriesUpdateWithEvent:extraData:] */

void FUN_1068e3340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1068e3450;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068e3450; end: 1068e3483;  */

void FUN_1068e3450(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e3484; end: 1068e35ab; -[SCDiscoverFeedDataStore _announceDataStoreUpdateWithEvent:extraData:] */

void FUN_1068e3484(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  lVar1 = param_1;
  func_0x00010be49fa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar3,param_2,lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107cb6048();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f41418,lVar1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar3,param_2,param_3,param_1,param_4);
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068e35ac; end: 1068e35eb; -[SCDiscoverFeedDataStore _announceDataLoadingUpdate] */

void FUN_1068e35ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e35ec; end: 1068e3647; -[SCDiscoverFeedDataStore _announceDatastoreLoadedFromDisk] */

void FUN_1068e35ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f48bd8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e3648; end: 1068e3687; -[SCDiscoverFeedDataStore _allStories] */

void FUN_1068e3648(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068e3688; end: 1068e3953; -[SCDiscoverFeedDataStore _setSections:] */

void FUN_1068e3688(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1068e3954;
  puStack_100 = &UNK_110948640;
  ppuVar8 = &puStack_118;
  lStack_f8 = param_1;
  func_0x000100504554(uVar2,ppuVar8);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
    }
    else {
      uVar3 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(param_3);
      if ((uVar3 & 1) != 0) goto LAB_1068e3908;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d3c80();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(uVar10 * 8);
        puVar6 = PTR_PTR_1126ced30;
        _objc_alloc(PTR_PTR_1126ced30);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(uVar11);
        func_0x00010c0df840(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0(puVar6);
        _objc_release(puVar7);
        func_0x00010bf51e00(uVar11);
        func_0x00010c1d0640(uVar4);
        _objc_release(uVar11);
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
      uVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar7 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010bea3e80(param_1);
    _objc_release(puVar7);
    uVar11 = uVar4;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    _objc_release(uVar9);
    func_0x00010be03d20(param_1);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
LAB_1068e3908:
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18),
             PTR_s_objectForKeyedSubscript__112615a50,ppuVar8);
  return;
}



/* Entry: 1068e3954; end: 1068e3963;  */

void FUN_1068e3954(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068e3964; end: 1068e3fb3; -[SCDiscoverFeedDataStore _appendSection:] */

/* WARNING: Possible PIC construction at 0x0001068e3bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068e3bd8) */
/* WARNING: Removing unreachable block (ram,0x0001068e3d88) */
/* WARNING: Removing unreachable block (ram,0x0001068e3d68) */

void FUN_1068e3964(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [8];
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_3);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  lVar12 = param_3;
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar12;
  func_0x00010bf51e00();
  puStack_158 = puVar1;
  uStack_148 = uVar3;
  func_0x00010c1d0640(uVar3);
  _objc_release(lVar10);
  _objc_release(lVar12);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_160 = uVar4;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_150 = param_3;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x28 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        func_0x00010c259740(unaff_x28);
        func_0x00010c0df880(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(unaff_x28);
        func_0x00010c0df880(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar1);
        lVar9 = lVar9 + 1;
      } while (lVar12 != lVar9);
      lVar12 = param_3;
      func_0x00010bf52a60();
      unaff_x27 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(param_3);
  puVar1 = puStack_158;
  puVar5 = *(undefined **)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = PTR____NSArray0__struct_11034ab48;
  if (puVar5 != (undefined *)0x0) {
    puStack_1c0 = puVar5;
  }
  _objc_retain(puStack_1c0);
  _objc_release(puVar5);
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_360;
  puStack_190 = puVar1;
  ppuStack_188 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  uStack_178 = 0x1068e3bd8;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d0 = unaff_x28;
  uStack_1c8 = unaff_x27;
  puStack_1b8 = puVar2;
  lStack_1b0 = lVar10;
  uStack_1a8 = uVar3;
  lStack_1a0 = lVar9;
  lStack_198 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar9);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  _objc_retain(lVar9);
  lVar12 = lVar9;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar10 = *plStack_310;
    do {
      lVar11 = 0;
      do {
        if (*plStack_310 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010befa120(puVar1);
        lVar11 = lVar11 + 1;
      } while (lVar12 != lVar11);
      lVar12 = lVar9;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar9);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  _objc_retain(puVar2);
  puVar6 = puVar2;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar12 = *plStack_350;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_350 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        puVar7 = puVar1;
        func_0x00010bf4b900();
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010befa120(puVar5);
          func_0x00010befa120(puVar1);
        }
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar2;
      puVar8 = &uStack_360;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar6 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar6 = PTR_PTR_1126ced30;
  _objc_alloc(PTR_PTR_1126ced30);
  func_0x00010c0126a0();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010befa160(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar13 = puVar5;
  func_0x00010bf00560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_3f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3f0 = 0xc2000000;
  pcStack_3e8 = FUN_1068e4204;
  puStack_3e0 = &UNK_110886d58;
  _objc_retain(puVar1);
  puVar7 = puVar13;
  puStack_3d8 = puVar1;
  func_0x0001006372a4(puVar13,&puStack_3f8);
  _objc_release(puVar13);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  func_0x00010c0d3c80();
  _objc_initWeak(auStack_400,puVar2);
  _objc_copyWeak(auStack_408,auStack_400);
  puVar13 = puVar7;
  func_0x00010c246ca0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar13);
  uVar4 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_408);
  _objc_destroyWeak(auStack_400);
  _objc_release(puVar7);
  _objc_release(puStack_3d8);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar8);
  return;
}



/* Entry: 1068e3fb4; end: 1068e4203; -[SCDiscoverFeedDataStore _amendUpNextDefaultPlaylist:] */

void FUN_1068e3fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc(PTR_PTR_1126ced30);
  func_0x00010c0126a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010befa160(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = puVar3;
  func_0x00010bf00560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1068e4204;
  puStack_80 = &UNK_110886d58;
  _objc_retain(puVar4);
  puVar6 = puVar5;
  puStack_78 = puVar4;
  func_0x0001006372a4(puVar5,&puStack_98);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  _objc_initWeak(auStack_a0,param_1);
  _objc_copyWeak(auStack_a8,auStack_a0);
  puVar5 = puVar6;
  func_0x00010c246ca0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar6);
  _objc_release(puStack_78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e4204; end: 1068e420f;  */

void FUN_1068e4204(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 1068e4210; end: 1068e432b;  */

undefined * FUN_1068e4210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c150c20();
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c150c20();
    func_0x00010c0df740(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf433a0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar5;
}



/* Entry: 1068e432c; end: 1068e46b7; -[SCDiscoverFeedDataStore _prependStories:forFeedType:] */

void FUN_1068e432c(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 uVar25;
  undefined **unaff_x28;
  undefined *puStack_c88;
  undefined8 uStack_c80;
  code *pcStack_c78;
  undefined *puStack_c70;
  undefined *puStack_c68;
  undefined **ppuStack_c60;
  undefined **ppuStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined **ppuStack_c30;
  undefined **ppuStack_c28;
  undefined8 ***pppuStack_c20;
  code *pcStack_c18;
  undefined **ppuStack_c10;
  long lStack_c08;
  undefined **ppuStack_c00;
  undefined **ppuStack_bf8;
  undefined **ppuStack_bf0;
  undefined **ppuStack_be8;
  undefined8 ***pppuStack_be0;
  code *pcStack_bd8;
  undefined **ppuStack_bd0;
  long lStack_bc8;
  undefined *puStack_bc0;
  long lStack_bb8;
  long *plStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_b00;
  undefined *puStack_af0;
  undefined *puStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined **ppuStack_ad0;
  undefined **ppuStack_ac8;
  undefined *puStack_ac0;
  undefined *puStack_ab8;
  undefined **ppuStack_ab0;
  undefined **ppuStack_aa8;
  undefined8 ***pppuStack_aa0;
  code *pcStack_a98;
  undefined *puStack_a88;
  undefined8 uStack_a80;
  long lStack_a78;
  long *plStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined *puStack_a38;
  undefined8 uStack_a30;
  code *pcStack_a28;
  undefined *puStack_a20;
  undefined *puStack_a18;
  long lStack_990;
  undefined8 ***pppuStack_920;
  code *pcStack_918;
  undefined **ppuStack_910;
  undefined *puStack_908;
  undefined *puStack_900;
  undefined **ppuStack_8f8;
  undefined8 uStack_8f0;
  long lStack_8e8;
  long *plStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  long lStack_8a8;
  long *plStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined *puStack_868;
  undefined8 uStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  undefined *puStack_848;
  long lStack_740;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined **ppuStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined **ppuStack_6a0;
  long lStack_698;
  undefined *puStack_690;
  undefined **ppuStack_688;
  undefined *puStack_680;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_4f0;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined **ppuStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined1 ***pppuStack_490;
  code *pcStack_488;
  undefined *puStack_478;
  undefined **ppuStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined **ppuStack_420;
  undefined *puStack_418;
  long lStack_390;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  uint uStack_314;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  long lStack_1d0;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_4;
  _objc_retain(param_3);
  ppuVar17 = (undefined **)PTR_PTR_1126ced30;
  _objc_alloc();
  ppuVar23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar4);
  lVar2 = *(long *)(param_1 + 0x30);
  ppuVar24 = ppuVar17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    ppuStack_150 = param_4;
    ppuStack_148 = ppuVar17;
    func_0x00010c0d3c80();
    puVar4 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0d3c80();
    unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_158 = puVar4;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    ppuVar17 = param_3;
    func_0x00010bf52a60();
    if (ppuVar17 != (undefined **)0x0) {
      lVar2 = *plStack_130;
      do {
        ppuVar23 = (undefined **)0x0;
        do {
          if (*plStack_130 != lVar2) {
            _objc_enumerationMutation(param_3);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar25 = *(undefined8 *)(lStack_138 + (long)ppuVar23 * 8);
          func_0x00010c259740(uVar25);
          func_0x00010c0df880(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar3);
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259740(uVar25);
          func_0x00010c0df880(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x25);
          _objc_release(puVar4);
          ppuVar23 = (undefined **)((long)ppuVar23 + 1);
        } while (ppuVar17 != ppuVar23);
        ppuVar17 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar17 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar17 = ppuStack_148;
    uVar25 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uStack_160 = uVar25;
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x25;
    func_0x0001068e3d8c(unaff_x25,uVar5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = puVar4;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
    unaff_x26 = puStack_158;
    func_0x00010c1d0640(puStack_158);
    uVar25 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010bee0da0(param_1);
    _objc_release(uVar25);
    puVar4 = unaff_x26;
    func_0x00010bf51e00(unaff_x26);
    func_0x00010bee0ec0(param_1);
    _objc_release(puVar4);
    param_4 = &PTR____CFConstantStringClassReference_110f48c58;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f48c98;
    unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_f8 = unaff_x28;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = param_4;
    ppuVar6 = ppuVar23;
    func_0x00010be03d20(param_1);
    _objc_release(ppuVar23);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(uStack_160);
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar17);
  ppuVar21 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1068e46b8;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar6;
  ppuStack_1c0 = unaff_x28;
  puStack_1b8 = unaff_x27;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  ppuStack_1a0 = ppuVar23;
  uStack_198 = uVar3;
  ppuStack_190 = param_4;
  lStack_188 = param_1;
  ppuStack_180 = ppuVar17;
  ppuStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar24);
  ppuVar23 = (undefined **)PTR_PTR_1126ced30;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar4);
  puVar4 = ppuVar21[6];
  ppuVar17 = ppuVar23;
  ppuStack_300 = ppuVar23;
  ppuStack_2f8 = ppuVar21;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuStack_310 = ppuVar6;
  if (puVar4 == (undefined *)0x0) {
    if (((undefined **)0x19 < ppuVar6 + -0x1e) ||
       ((0x2840001U >> (ulong)((uint)(ppuVar6 + -0x1e) & 0x1f) & 1) == 0)) {
      puVar4 = (undefined *)0x0;
      if (*(char *)((long)ppuStack_2f8 + 0xa1) != '\x01') goto LAB_1068e4a34;
      _objc_retain(ppuVar24);
      puStack_288 = &uStack_280;
      uStack_280 = 0;
      uStack_270 = 0x2020000000;
      uStack_268 = 1;
      puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a0 = 0xc2000000;
      pcStack_298 = FUN_1068eaf9c;
      puStack_290 = &UNK_110948e70;
      ppuVar17 = &puStack_2a8;
      puStack_278 = puStack_288;
      func_0x00010bf97e80(ppuVar24);
      bVar1 = *(byte *)(puStack_278 + 3);
      ppuVar23 = (undefined **)(ulong)bVar1;
      __Block_object_dispose(&uStack_280,8);
      _objc_release(ppuVar24);
      if (ppuStack_310 != (undefined **)0x0 || ((bVar1 ^ 0xff) & 1) != 0) goto LAB_1068e4a34;
      ppuVar23 = ppuStack_2f8 + 6;
      puVar7 = *ppuVar23;
      func_0x00010c0d3c80();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010bf51e00();
      puVar8 = *ppuVar23;
      *ppuVar23 = puVar4;
      _objc_release(puVar8);
      _objc_release(puVar7);
      goto LAB_1068e4768;
    }
    uStack_314 = 1;
  }
  else {
LAB_1068e4768:
    uStack_314 = 0;
  }
  ppuVar6 = (undefined **)ppuStack_2f8[7];
  func_0x00010c0d3c80();
  puVar4 = ppuStack_2f8[6];
  func_0x00010c0d3c80();
  unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_308 = puVar4;
  _objc_opt_new();
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  puStack_2e0 = (undefined8 *)0x0;
  _objc_retain(ppuVar24);
  ppuVar17 = ppuVar24;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    ppuVar23 = (undefined **)*puStack_2e0;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_2e0 != ppuVar23) {
          _objc_enumerationMutation(ppuVar24);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lStack_2e8 + (long)ppuVar21 * 8);
        func_0x00010c259740(uVar3);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar6);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar3);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(unaff_x25);
        _objc_release(puVar4);
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar17 != ppuVar21);
      ppuVar17 = ppuVar24;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar24);
  unaff_x26 = PTR____NSArray0__struct_11034ab48;
  if ((uStack_314 & 1) == 0) {
    unaff_x26 = ppuStack_2f8[6];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = ppuStack_2f8[6];
  func_0x00010c0e00e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = unaff_x25;
  func_0x0001068e3d8c(unaff_x25,puVar7);
  _objc_retainAutoreleasedReturnValue();
  unaff_x27 = unaff_x26;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar7);
  func_0x00010c1d0640(puStack_308);
  ppuVar17 = ppuVar6;
  func_0x00010bf51e00(ppuVar6);
  func_0x00010bee0da0(ppuStack_2f8);
  _objc_release(ppuVar17);
  puVar4 = puStack_308;
  func_0x00010bf51e00(puStack_308);
  func_0x00010bee0ec0(ppuStack_2f8);
  _objc_release(puVar4);
  ppuStack_260 = &PTR____CFConstantStringClassReference_110f48c98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_258 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR____CFConstantStringClassReference_110f48b98;
  ppuVar14 = unaff_x28;
  func_0x00010be03d20(ppuStack_2f8);
  _objc_release(unaff_x28);
  _objc_release(puVar4);
  _objc_release(unaff_x27);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(puStack_308);
  _objc_release(ppuVar6);
LAB_1068e4a34:
  _objc_release(ppuStack_300);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_280,8);
  ppuVar22 = ppuVar24;
  __Unwind_Resume();
  ppuStack_360 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_328 = FUN_1068e4ba4;
  lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_380 = unaff_x28;
  puStack_378 = unaff_x27;
  puStack_370 = unaff_x26;
  puStack_368 = unaff_x25;
  ppuStack_358 = ppuVar6;
  puStack_350 = puVar4;
  ppuStack_348 = ppuVar21;
  ppuStack_340 = ppuVar23;
  ppuStack_338 = ppuVar24;
  ppuStack_330 = &puStack_170;
  _objc_retain(ppuVar17);
  puVar4 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_470 = ppuVar14;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  puStack_468 = puVar4;
  _objc_release(puVar7);
  puVar7 = ppuVar22[7];
  func_0x00010c0d3c80();
  puVar8 = ppuVar22[6];
  func_0x00010c0d3c80();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_478 = puVar8;
  _objc_opt_new();
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  plStack_450 = (long *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  _objc_retain(ppuVar17);
  ppuVar23 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar23 != (undefined **)0x0) {
    lVar2 = *plStack_450;
    do {
      ppuVar24 = (undefined **)0x0;
      do {
        if (*plStack_450 != lVar2) {
          _objc_enumerationMutation(ppuVar17);
        }
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lStack_458 + (long)ppuVar24 * 8);
        func_0x00010c259740(uVar3);
        func_0x00010c0df880(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar8);
        unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar3);
        puVar8 = (undefined *)unaff_x28;
        func_0x00010c0df880(unaff_x28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar8);
        ppuVar24 = (undefined **)((long)ppuVar24 + 1);
      } while (ppuVar23 != ppuVar24);
      ppuVar23 = ppuVar17;
      func_0x00010bf52a60();
    } while (ppuVar23 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  puVar8 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar10 = puStack_468;
  puVar9 = puStack_478;
  func_0x00010c1d0640(puStack_478);
  _objc_release(puVar8);
  puVar8 = puVar9;
  func_0x00010bf51e00(puVar9);
  func_0x00010bee0ec0(ppuVar22);
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010bee0da0(ppuVar22);
  _objc_release(puVar8);
  ppuVar24 = &PTR____CFConstantStringClassReference_110f48bb8;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110f48c98;
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_418 = puVar20;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03d20(ppuVar22);
  _objc_release(puVar8);
  _objc_release(puVar20);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar10);
  ppuVar23 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_390) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_4d0 = &PTR____CFConstantStringClassReference_110f48bb8;
  puStack_4c0 = puVar9;
  puStack_4a8 = puVar10;
  pcStack_488 = FUN_1068e4ea4;
  lStack_4f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_4e0 = unaff_x28;
  puStack_4d8 = puVar8;
  puStack_4c8 = puVar4;
  puStack_4b8 = puVar20;
  puStack_4b0 = puVar7;
  ppuStack_4a0 = ppuVar22;
  ppuStack_498 = ppuVar17;
  pppuStack_490 = &ppuStack_330;
  _objc_retain(ppuVar24);
  puVar7 = ppuVar23[2];
  func_0x00010c0d3c80();
  puVar4 = ppuVar23[3];
  func_0x00010c0d3c80();
  puVar9 = ppuVar23[6];
  func_0x00010c0d3c80();
  puVar10 = ppuVar23[7];
  ppuStack_6b8 = ppuVar23;
  puStack_690 = puVar9;
  func_0x00010c0d3c80();
  lStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  plStack_620 = (long *)0x0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  _objc_retain(ppuVar24);
  ppuStack_6a0 = ppuVar24;
  func_0x00010bf52a60();
  ppuStack_688 = ppuVar24;
  if (ppuVar24 != (undefined **)0x0) {
    lStack_698 = *plStack_620;
    puStack_6b0 = puVar4;
    puStack_6a8 = puVar7;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_620 != lStack_698) {
          _objc_enumerationMutation(ppuStack_6a0);
        }
        puVar8 = *(undefined **)(lStack_628 + (long)ppuVar17 * 8);
        puVar20 = puVar8;
        ppuStack_678 = ppuVar17;
        func_0x00010c258040();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126ced30;
        _objc_alloc();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(puVar8);
        func_0x00010c0df840(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0();
        puStack_680 = puVar11;
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar11 = puVar8;
        func_0x00010c259780();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf529e0();
        _objc_release(puVar11);
        if (puVar12 == (undefined *)0x0) {
          uStack_648 = 0;
          uStack_650 = 0;
          uStack_638 = 0;
          uStack_640 = 0;
          lStack_668 = 0;
          uStack_670 = 0;
          uStack_658 = 0;
          plStack_660 = (long *)0x0;
          _objc_retain(puVar20);
          puVar11 = puVar20;
          func_0x00010bf52a60();
          puVar12 = puVar20;
          if (puVar11 != (undefined *)0x0) {
            lVar2 = *plStack_660;
            do {
              puVar4 = (undefined *)0x0;
              do {
                if (*plStack_660 != lVar2) {
                  _objc_enumerationMutation(puVar20);
                }
                puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                uVar3 = *(undefined8 *)(lStack_668 + (long)puVar4 * 8);
                func_0x00010c259740(uVar3);
                func_0x00010c0df880(puVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar9);
                _objc_release(puVar7);
                puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c259740(uVar3);
                func_0x00010c0df880(puVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar10);
                _objc_release(puVar7);
                puVar4 = puVar4 + 1;
              } while (puVar11 != puVar4);
              puVar11 = puVar20;
              func_0x00010bf52a60();
              puVar7 = puStack_6a8;
              puVar4 = puStack_6b0;
            } while (puVar11 != (undefined *)0x0);
          }
        }
        else {
          puVar12 = puVar8;
          func_0x00010c259780(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar9);
        }
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010bf51e00(puVar9);
        puVar11 = puStack_680;
        func_0x00010c1d0640(puStack_690);
        _objc_release(puVar12);
        puVar12 = puVar8;
        func_0x00010c1559c0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf51e00();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar13);
        _objc_release(puVar12);
        puVar12 = puVar8;
        func_0x00010c156320(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf51e00();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar9);
        _objc_release(puVar11);
        _objc_release(puVar20);
        ppuVar17 = (undefined **)((long)ppuStack_678 + 1);
      } while (ppuVar17 != ppuStack_688);
      ppuVar17 = ppuStack_6a0;
      func_0x00010bf52a60();
      ppuStack_688 = ppuVar17;
    } while (ppuVar17 != (undefined **)0x0);
  }
  ppuVar23 = ppuStack_6a0;
  _objc_release(ppuStack_6a0);
  puVar9 = puVar7;
  func_0x00010bf51e00();
  ppuVar17 = ppuStack_6b8;
  puVar20 = ppuStack_6b8[2];
  ppuStack_6b8[2] = puVar9;
  _objc_release(puVar20);
  puVar9 = puVar4;
  func_0x00010bf51e00();
  puVar20 = ppuVar17[3];
  ppuVar17[3] = puVar9;
  _objc_release(puVar20);
  puVar9 = puStack_690;
  puVar20 = puStack_690;
  func_0x00010bf51e00(puStack_690);
  func_0x00010bee0ec0(ppuVar17);
  _objc_release(puVar20);
  puVar20 = puVar10;
  func_0x00010bf51e00();
  func_0x00010bee0da0(ppuVar17);
  _objc_release(puVar20);
  func_0x00010beddbc0(ppuVar17);
  ppuVar24 = &PTR____CFConstantStringClassReference_110f48bb8;
  func_0x00010be03d20(ppuVar17);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_6c8 = FUN_1068e5344;
  lStack_740 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_6d0 = &pppuStack_490;
  _objc_retain(ppuVar24);
  puVar7 = ppuVar23[6];
  func_0x00010c0d3c80();
  ppuVar17 = (undefined **)ppuVar23[7];
  puStack_900 = puVar7;
  func_0x00010c0d3c80();
  lStack_8a8 = 0;
  uStack_8b0 = 0;
  uStack_898 = 0;
  plStack_8a0 = (long *)0x0;
  uStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  uStack_880 = 0;
  puVar7 = ppuVar23[6];
  ppuStack_910 = ppuVar17;
  ppuStack_8f8 = ppuVar23;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_908 = puVar7;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar2 = *plStack_8a0;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_8a0 != lVar2) {
          _objc_enumerationMutation(puStack_908);
        }
        puVar8 = *(undefined **)(lStack_8a8 + (long)puVar9 * 8);
        puVar20 = ppuStack_8f8[6];
        func_0x00010c0e00e0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar24);
        _objc_alloc();
        ppuVar17 = ppuVar24;
        func_0x000100504554(ppuVar24,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar24);
        func_0x00010bff4000();
        _objc_release(ppuVar17);
        puStack_868 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_860 = 0xc2000000;
        pcStack_858 = FUN_1068eb030;
        puStack_850 = &UNK_110886d58;
        puStack_848 = puVar4;
        _objc_retain(puVar4);
        puVar10 = puVar20;
        func_0x00010c14cca0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_848);
        _objc_release(puVar4);
        func_0x00010c1d0640(puStack_900);
        _objc_release(puVar10);
        _objc_release(puVar20);
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar7 = puStack_908;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puStack_908);
  uStack_8c8 = 0;
  uStack_8d0 = 0;
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  lStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_8d8 = 0;
  plStack_8e0 = (long *)0x0;
  _objc_retain(ppuVar24);
  ppuVar23 = ppuVar24;
  func_0x00010bf52a60();
  ppuVar17 = ppuStack_910;
  if (ppuVar23 != (undefined **)0x0) {
    lVar2 = *plStack_8e0;
    do {
      ppuVar6 = (undefined **)0x0;
      do {
        if (*plStack_8e0 != lVar2) {
          _objc_enumerationMutation(ppuVar24);
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_8e8 + (long)ppuVar6 * 8));
        func_0x00010c0df880(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(ppuVar17);
        _objc_release(puVar7);
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar23 != ppuVar6);
      ppuVar23 = ppuVar24;
      func_0x00010bf52a60();
    } while (ppuVar23 != (undefined **)0x0);
  }
  _objc_release(ppuVar24);
  puVar7 = puStack_900;
  puVar9 = puStack_900;
  func_0x00010bf51e00(puStack_900);
  ppuVar23 = ppuStack_8f8;
  func_0x00010bee0ec0(ppuStack_8f8);
  _objc_release(puVar9);
  ppuVar6 = ppuVar17;
  func_0x00010bf51e00(ppuVar17);
  func_0x00010bee0da0(ppuVar23);
  _objc_release(ppuVar6);
  puVar9 = ppuVar23[0x18];
  ppuVar6 = ppuVar23;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar9);
  _objc_release(uVar3);
  _objc_release(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f48c78;
  func_0x00010be03d20(ppuVar23);
  _objc_release(ppuVar17);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_740) {
    return;
  }
  ___stack_chk_fail();
  pcStack_918 = FUN_1068e5704;
  lStack_990 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_920 = &pppuStack_6d0;
  _objc_retain(ppuVar6);
  puVar9 = ppuVar24[6];
  func_0x00010c0d3c80();
  lStack_a78 = 0;
  uStack_a80 = 0;
  uStack_a68 = 0;
  plStack_a70 = (long *)0x0;
  uStack_a58 = 0;
  uStack_a60 = 0;
  uStack_a48 = 0;
  uStack_a50 = 0;
  puVar7 = ppuVar24[6];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a88 = puVar7;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar2 = *plStack_a70;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_a70 != lVar2) {
          _objc_enumerationMutation(puStack_a88);
        }
        ppuVar17 = *(undefined ***)(lStack_a78 + (long)puVar10 * 8);
        puVar20 = ppuVar24[6];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar6);
        _objc_alloc();
        ppuVar23 = ppuVar6;
        func_0x000100504554(ppuVar6,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar6);
        func_0x00010bff4000();
        _objc_release(ppuVar23);
        puStack_a38 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a30 = 0xc2000000;
        pcStack_a28 = FUN_1068eb030;
        puStack_a20 = &UNK_110886d58;
        puStack_a18 = puVar8;
        _objc_retain(puVar8);
        puVar4 = puVar20;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_a18);
        _objc_release(puVar8);
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar4);
        _objc_release(puVar20);
        puVar10 = puVar10 + 1;
      } while (puVar7 != puVar10);
      puVar7 = puStack_a88;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puStack_a88);
  puVar7 = puVar9;
  func_0x00010bf51e00(puVar9);
  func_0x00010bee0ec0(ppuVar24);
  _objc_release(puVar7);
  puVar7 = ppuVar24[0x18];
  ppuVar22 = &PTR____CFConstantStringClassReference_110f41678;
  ppuVar21 = ppuVar24;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = (undefined **)0x1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar7);
  _objc_release(ppuVar14);
  _objc_release(ppuVar21);
  ppuVar18 = (undefined **)0x0;
  ppuVar19 = (undefined **)0x0;
  func_0x00010be03d20(ppuVar24);
  _objc_release(puVar9);
  ppuVar23 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_ac8 = &PTR____CFConstantStringClassReference_110f41678;
  pcStack_a98 = FUN_1068e59b0;
  lStack_b00 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_af0 = puVar4;
  puStack_ae8 = puVar8;
  ppuStack_ae0 = ppuVar17;
  ppuStack_ad8 = ppuVar14;
  ppuStack_ad0 = ppuVar21;
  puStack_ac0 = puVar7;
  puStack_ab8 = puVar9;
  ppuStack_ab0 = ppuVar24;
  ppuStack_aa8 = ppuVar6;
  pppuStack_aa0 = &pppuStack_920;
  _objc_retain(ppuVar18);
  lStack_bb8 = 0;
  puStack_bc0 = (undefined *)0x0;
  uStack_ba8 = 0;
  plStack_bb0 = (long *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  ppuVar6 = (undefined **)ppuVar23[7];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = &puStack_bc0;
  ppuStack_bd0 = ppuVar6;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    lStack_bc8 = *plStack_bb0;
    ppuVar22 = ppuVar6;
    do {
      ppuVar23 = (undefined **)0x0;
      do {
        if (*plStack_bb0 != lStack_bc8) {
          _objc_enumerationMutation(ppuStack_bd0);
        }
        ppuVar6 = *(undefined ***)(lStack_bb8 + (long)ppuVar23 * 8);
        ppuVar17 = ppuVar6;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar17;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        if (((int)ppuVar19 != 0) && (ppuVar21 != (undefined **)0x0)) {
          ppuVar14 = ppuVar21;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar14;
          func_0x00010c11b1e0();
          ppuVar15 = ppuVar18;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(ppuVar14);
          if (ppuVar17 != ppuVar15) goto LAB_1068e5ad4;
          _objc_retain(ppuVar6);
LAB_1068e5c0c:
          _objc_release(ppuVar21);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        ppuVar17 = ppuVar6;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar17;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        if ((((ulong)ppuVar19 & 1) == 0) && (ppuVar14 != (undefined **)0x0)) {
          ppuVar17 = ppuVar14;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar17;
          ppuVar24 = ppuVar18;
          func_0x00010c0720c0();
          _objc_release(ppuVar17);
          if ((int)ppuVar15 == 0) goto LAB_1068e5b34;
          _objc_retain(ppuVar6);
LAB_1068e5c04:
          _objc_release(ppuVar14);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        ppuVar15 = ppuVar6;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar15;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        if ((((ulong)ppuVar19 & 1) == 0) && (ppuVar17 != (undefined **)0x0)) {
          ppuVar15 = ppuVar17;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar15;
          ppuVar24 = ppuVar18;
          func_0x00010c0720c0();
          _objc_release(ppuVar15);
          if ((int)ppuVar16 != 0) {
            _objc_retain(ppuVar6);
            _objc_release(ppuVar17);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(ppuVar17);
        _objc_release(ppuVar14);
        _objc_release(ppuVar21);
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar22 != ppuVar23);
      ppuVar24 = &puStack_bc0;
      ppuVar22 = ppuStack_bd0;
      func_0x00010bf52a60();
    } while (ppuVar22 != (undefined **)0x0);
  }
  ppuVar6 = (undefined **)0x0;
LAB_1068e5c14:
  _objc_release(ppuStack_bd0);
  ppuVar15 = ppuVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b00) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_1068e5c64;
  lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = ppuVar15;
  ppuStack_c00 = ppuVar6;
  ppuStack_bf8 = ppuVar19;
  ppuStack_bf0 = ppuVar23;
  ppuStack_be8 = ppuVar18;
  pppuStack_be0 = &pppuStack_aa0;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_c10 = ppuVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar19;
    func_0x00010be8d640(ppuVar15);
    _objc_release(ppuVar19);
  }
  ppuVar23 = ppuVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c08) {
    ___stack_chk_fail();
    pcStack_c18 = FUN_1068e5d10;
    puVar4 = ppuVar23[7];
    ppuStack_c60 = ppuVar17;
    ppuStack_c58 = ppuVar14;
    ppuStack_c50 = ppuVar21;
    ppuStack_c48 = ppuVar22;
    ppuStack_c40 = ppuVar6;
    ppuStack_c38 = ppuVar19;
    ppuStack_c30 = ppuVar15;
    ppuStack_c28 = ppuVar16;
    pppuStack_c20 = &pppuStack_be0;
    _objc_retain(puVar4);
    puStack_c88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c80 = 0xc2000000;
    pcStack_c78 = FUN_1068eaa54;
    puStack_c70 = &UNK_1109488b0;
    puStack_c68 = puVar4;
    _objc_retain(puVar4);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x000100504554(ppuVar24,&puStack_c88);
    _objc_release(puStack_c68);
    _objc_release(puVar4);
    func_0x00010be8d6a0(ppuVar23);
    _objc_release(param_7);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar24);
    return;
  }
  return;
}



/* Entry: 1068e46b8; end: 1068e4ba3; -[SCDiscoverFeedDataStore _appendStories:forFeedType:] */

void FUN_1068e46b8(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar26;
  undefined *unaff_x28;
  undefined *puStack_b28;
  undefined8 uStack_b20;
  code *pcStack_b18;
  undefined *puStack_b10;
  undefined *puStack_b08;
  undefined **ppuStack_b00;
  undefined **ppuStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined **ppuStack_ad0;
  undefined **ppuStack_ac8;
  undefined8 ***pppuStack_ac0;
  code *pcStack_ab8;
  undefined **ppuStack_ab0;
  long lStack_aa8;
  undefined **ppuStack_aa0;
  undefined **ppuStack_a98;
  undefined **ppuStack_a90;
  undefined **ppuStack_a88;
  undefined8 ***pppuStack_a80;
  code *pcStack_a78;
  undefined **ppuStack_a70;
  long lStack_a68;
  undefined *puStack_a60;
  long lStack_a58;
  long *plStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  long lStack_9a0;
  undefined *puStack_990;
  undefined *puStack_988;
  undefined **ppuStack_980;
  undefined **ppuStack_978;
  undefined **ppuStack_970;
  undefined **ppuStack_968;
  undefined *puStack_960;
  undefined *puStack_958;
  undefined **ppuStack_950;
  undefined **ppuStack_948;
  undefined8 ***pppuStack_940;
  code *pcStack_938;
  undefined *puStack_928;
  undefined8 uStack_920;
  long lStack_918;
  long *plStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined *puStack_8d8;
  undefined8 uStack_8d0;
  code *pcStack_8c8;
  undefined *puStack_8c0;
  undefined *puStack_8b8;
  long lStack_830;
  undefined8 ***pppuStack_7c0;
  code *pcStack_7b8;
  undefined **ppuStack_7b0;
  undefined *puStack_7a8;
  undefined *puStack_7a0;
  undefined **ppuStack_798;
  undefined8 uStack_790;
  long lStack_788;
  long *plStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  long lStack_748;
  long *plStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined *puStack_708;
  undefined8 uStack_700;
  code *pcStack_6f8;
  undefined *puStack_6f0;
  undefined *puStack_6e8;
  long lStack_5e0;
  undefined1 ***pppuStack_570;
  code *pcStack_568;
  undefined **ppuStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined **ppuStack_540;
  long lStack_538;
  undefined *puStack_530;
  undefined **ppuStack_528;
  undefined *puStack_520;
  undefined **ppuStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_390;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined **ppuStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  long lStack_230;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  uint uStack_1b4;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar26 = param_4;
  _objc_retain(param_3);
  ppuVar21 = (undefined **)PTR_PTR_1126ced30;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar7);
  lVar2 = *(long *)(param_1 + 0x30);
  ppuVar17 = ppuVar21;
  ppuStack_1a0 = ppuVar21;
  lStack_198 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_1b0 = param_4;
  if (lVar2 == 0) {
    if (((undefined *)0x19 < param_4 + -0xf0) ||
       ((0x2840001U >> (ulong)((uint)(param_4 + -0xf0) & 0x1f) & 1) == 0)) {
      puVar7 = (undefined *)0x0;
      if (*(char *)(lStack_198 + 0xa1) != '\x01') goto LAB_1068e4a34;
      _objc_retain(param_3);
      puStack_128 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 1;
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_1068eaf9c;
      puStack_130 = &UNK_110948e70;
      ppuVar17 = &puStack_148;
      puStack_118 = puStack_128;
      func_0x00010bf97e80(param_3);
      bVar1 = *(byte *)(puStack_118 + 3);
      ppuVar21 = (undefined **)(ulong)bVar1;
      __Block_object_dispose(&uStack_120,8);
      _objc_release(param_3);
      if (puStack_1b0 != (undefined *)0x0 || ((bVar1 ^ 0xff) & 1) != 0) goto LAB_1068e4a34;
      ppuVar21 = (undefined **)(lStack_198 + 0x30);
      puVar26 = *ppuVar21;
      func_0x00010c0d3c80();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar26);
      _objc_release(puVar7);
      puVar7 = puVar26;
      func_0x00010bf51e00();
      puVar6 = *ppuVar21;
      *ppuVar21 = puVar7;
      _objc_release(puVar6);
      _objc_release(puVar26);
      goto LAB_1068e4768;
    }
    uStack_1b4 = 1;
  }
  else {
LAB_1068e4768:
    uStack_1b4 = 0;
  }
  param_4 = *(undefined **)(lStack_198 + 0x38);
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(lStack_198 + 0x30);
  func_0x00010c0d3c80();
  unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_1a8 = uVar3;
  _objc_opt_new();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  puStack_180 = (undefined8 *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    ppuVar21 = (undefined **)*puStack_180;
    do {
      param_1 = 0;
      do {
        if ((undefined **)*puStack_180 != ppuVar21) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lStack_188 + param_1 * 8);
        func_0x00010c259740(uVar3);
        func_0x00010c0df880(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar3);
        func_0x00010c0df880(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(unaff_x25);
        _objc_release(puVar7);
        param_1 = param_1 + 1;
      } while (lVar2 != param_1);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  unaff_x26 = PTR____NSArray0__struct_11034ab48;
  if ((uStack_1b4 & 1) == 0) {
    unaff_x26 = *(undefined **)(lStack_198 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(lStack_198 + 0x30);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = unaff_x25;
  func_0x0001068e3d8c(unaff_x25,uVar3);
  _objc_retainAutoreleasedReturnValue();
  unaff_x27 = unaff_x26;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar3);
  func_0x00010c1d0640(uStack_1a8);
  puVar7 = param_4;
  func_0x00010bf51e00(param_4);
  func_0x00010bee0da0(lStack_198);
  _objc_release(puVar7);
  uVar3 = uStack_1a8;
  func_0x00010bf51e00(uStack_1a8);
  func_0x00010bee0ec0(lStack_198);
  _objc_release(uVar3);
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f48c98;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR____CFConstantStringClassReference_110f48b98;
  puVar26 = unaff_x28;
  func_0x00010be03d20(lStack_198);
  _objc_release(unaff_x28);
  _objc_release(puVar7);
  _objc_release(unaff_x27);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(uStack_1a8);
  _objc_release(param_4);
LAB_1068e4a34:
  _objc_release(ppuStack_1a0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  lVar2 = param_3;
  __Unwind_Resume();
  ppuStack_200 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_1c8 = FUN_1068e4ba4;
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x28;
  puStack_218 = unaff_x27;
  puStack_210 = unaff_x26;
  puStack_208 = unaff_x25;
  puStack_1f8 = param_4;
  puStack_1f0 = puVar7;
  lStack_1e8 = param_1;
  ppuStack_1e0 = ppuVar21;
  lStack_1d8 = param_3;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  puVar7 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_310 = puVar26;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  puStack_308 = puVar7;
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(lVar2 + 0x30);
  func_0x00010c0d3c80();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_318 = uVar4;
  _objc_opt_new();
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  _objc_retain(ppuVar17);
  ppuVar21 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar21 != (undefined **)0x0) {
    lVar22 = *plStack_2f0;
    do {
      ppuVar24 = (undefined **)0x0;
      do {
        if (*plStack_2f0 != lVar22) {
          _objc_enumerationMutation(ppuVar17);
        }
        puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar4 = *(undefined8 *)(lStack_2f8 + (long)ppuVar24 * 8);
        func_0x00010c259740(uVar4);
        func_0x00010c0df880(puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3);
        _objc_release(puVar26);
        unaff_x28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar4);
        puVar26 = unaff_x28;
        func_0x00010c0df880(unaff_x28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(puVar26);
        ppuVar24 = (undefined **)((long)ppuVar24 + 1);
      } while (ppuVar21 != ppuVar24);
      ppuVar21 = ppuVar17;
      func_0x00010bf52a60();
    } while (ppuVar21 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  puVar26 = puVar7;
  func_0x00010bf51e00(puVar7);
  puVar6 = puStack_308;
  uVar4 = uStack_318;
  func_0x00010c1d0640(uStack_318);
  _objc_release(puVar26);
  uVar5 = uVar4;
  func_0x00010bf51e00(uVar4);
  func_0x00010bee0ec0(lVar2);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf51e00(uVar3);
  func_0x00010bee0da0(lVar2);
  _objc_release(uVar5);
  ppuVar24 = &PTR____CFConstantStringClassReference_110f48bb8;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110f48c98;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2b8 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03d20(lVar2);
  _objc_release(puVar26);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar6);
  ppuVar21 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_370 = &PTR____CFConstantStringClassReference_110f48bb8;
  uStack_360 = uVar4;
  puStack_348 = puVar6;
  pcStack_328 = FUN_1068e4ea4;
  lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x28;
  puStack_378 = puVar26;
  puStack_368 = puVar7;
  puStack_358 = puVar8;
  uStack_350 = uVar3;
  lStack_340 = lVar2;
  ppuStack_338 = ppuVar17;
  ppuStack_330 = &puStack_1d0;
  _objc_retain(ppuVar24);
  puVar6 = ppuVar21[2];
  func_0x00010c0d3c80();
  puVar7 = ppuVar21[3];
  func_0x00010c0d3c80();
  puVar8 = ppuVar21[6];
  func_0x00010c0d3c80();
  puVar9 = ppuVar21[7];
  ppuStack_558 = ppuVar21;
  puStack_530 = puVar8;
  func_0x00010c0d3c80();
  lStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  _objc_retain(ppuVar24);
  ppuStack_540 = ppuVar24;
  func_0x00010bf52a60();
  ppuStack_528 = ppuVar24;
  if (ppuVar24 != (undefined **)0x0) {
    lStack_538 = *plStack_4c0;
    puStack_550 = puVar7;
    puStack_548 = puVar6;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_4c0 != lStack_538) {
          _objc_enumerationMutation(ppuStack_540);
        }
        puVar26 = *(undefined **)(lStack_4c8 + (long)ppuVar17 * 8);
        puVar20 = puVar26;
        ppuStack_518 = ppuVar17;
        func_0x00010c258040();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126ced30;
        _objc_alloc();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(puVar26);
        func_0x00010c0df840(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0();
        puStack_520 = puVar10;
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar10 = puVar26;
        func_0x00010c259780();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf529e0();
        _objc_release(puVar10);
        if (puVar11 == (undefined *)0x0) {
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          lStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          plStack_500 = (long *)0x0;
          _objc_retain(puVar20);
          puVar10 = puVar20;
          func_0x00010bf52a60();
          puVar11 = puVar20;
          if (puVar10 != (undefined *)0x0) {
            lVar2 = *plStack_500;
            do {
              puVar7 = (undefined *)0x0;
              do {
                if (*plStack_500 != lVar2) {
                  _objc_enumerationMutation(puVar20);
                }
                puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                uVar3 = *(undefined8 *)(lStack_508 + (long)puVar7 * 8);
                func_0x00010c259740(uVar3);
                func_0x00010c0df880(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar8);
                _objc_release(puVar6);
                puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c259740(uVar3);
                func_0x00010c0df880(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar9);
                _objc_release(puVar6);
                puVar7 = puVar7 + 1;
              } while (puVar10 != puVar7);
              puVar10 = puVar20;
              func_0x00010bf52a60();
              puVar6 = puStack_548;
              puVar7 = puStack_550;
            } while (puVar10 != (undefined *)0x0);
          }
        }
        else {
          puVar11 = puVar26;
          func_0x00010c259780(puVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar8);
        }
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf51e00(puVar8);
        puVar10 = puStack_520;
        func_0x00010c1d0640(puStack_530);
        _objc_release(puVar11);
        puVar11 = puVar26;
        func_0x00010c1559c0(puVar26);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf51e00();
        func_0x00010c1d0640(puVar6);
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar11 = puVar26;
        func_0x00010c156320(puVar26);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf51e00();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar8);
        _objc_release(puVar10);
        _objc_release(puVar20);
        ppuVar17 = (undefined **)((long)ppuStack_518 + 1);
      } while (ppuVar17 != ppuStack_528);
      ppuVar17 = ppuStack_540;
      func_0x00010bf52a60();
      ppuStack_528 = ppuVar17;
    } while (ppuVar17 != (undefined **)0x0);
  }
  ppuVar21 = ppuStack_540;
  _objc_release(ppuStack_540);
  puVar8 = puVar6;
  func_0x00010bf51e00();
  ppuVar17 = ppuStack_558;
  puVar20 = ppuStack_558[2];
  ppuStack_558[2] = puVar8;
  _objc_release(puVar20);
  puVar8 = puVar7;
  func_0x00010bf51e00();
  puVar20 = ppuVar17[3];
  ppuVar17[3] = puVar8;
  _objc_release(puVar20);
  puVar8 = puStack_530;
  puVar20 = puStack_530;
  func_0x00010bf51e00(puStack_530);
  func_0x00010bee0ec0(ppuVar17);
  _objc_release(puVar20);
  puVar20 = puVar9;
  func_0x00010bf51e00();
  func_0x00010bee0da0(ppuVar17);
  _objc_release(puVar20);
  func_0x00010beddbc0(ppuVar17);
  ppuVar24 = &PTR____CFConstantStringClassReference_110f48bb8;
  func_0x00010be03d20(ppuVar17);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_390) {
    return;
  }
  ___stack_chk_fail();
  pcStack_568 = FUN_1068e5344;
  lStack_5e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_570 = &ppuStack_330;
  _objc_retain(ppuVar24);
  puVar6 = ppuVar21[6];
  func_0x00010c0d3c80();
  ppuVar17 = (undefined **)ppuVar21[7];
  puStack_7a0 = puVar6;
  func_0x00010c0d3c80();
  lStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  plStack_740 = (long *)0x0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  puVar6 = ppuVar21[6];
  ppuStack_7b0 = ppuVar17;
  ppuStack_798 = ppuVar21;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_7a8 = puVar6;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar2 = *plStack_740;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_740 != lVar2) {
          _objc_enumerationMutation(puStack_7a8);
        }
        puVar26 = *(undefined **)(lStack_748 + (long)puVar8 * 8);
        puVar20 = ppuStack_798[6];
        func_0x00010c0e00e0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar24);
        _objc_alloc();
        ppuVar17 = ppuVar24;
        func_0x000100504554(ppuVar24,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar24);
        func_0x00010bff4000();
        _objc_release(ppuVar17);
        puStack_708 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_700 = 0xc2000000;
        pcStack_6f8 = FUN_1068eb030;
        puStack_6f0 = &UNK_110886d58;
        puStack_6e8 = puVar7;
        _objc_retain(puVar7);
        puVar9 = puVar20;
        func_0x00010c14cca0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_6e8);
        _objc_release(puVar7);
        func_0x00010c1d0640(puStack_7a0);
        _objc_release(puVar9);
        _objc_release(puVar20);
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar6 = puStack_7a8;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puStack_7a8);
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  lStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  plStack_780 = (long *)0x0;
  _objc_retain(ppuVar24);
  ppuVar21 = ppuVar24;
  func_0x00010bf52a60();
  ppuVar17 = ppuStack_7b0;
  if (ppuVar21 != (undefined **)0x0) {
    lVar2 = *plStack_780;
    do {
      ppuVar25 = (undefined **)0x0;
      do {
        if (*plStack_780 != lVar2) {
          _objc_enumerationMutation(ppuVar24);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_788 + (long)ppuVar25 * 8));
        func_0x00010c0df880(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(ppuVar17);
        _objc_release(puVar6);
        ppuVar25 = (undefined **)((long)ppuVar25 + 1);
      } while (ppuVar21 != ppuVar25);
      ppuVar21 = ppuVar24;
      func_0x00010bf52a60();
    } while (ppuVar21 != (undefined **)0x0);
  }
  _objc_release(ppuVar24);
  puVar6 = puStack_7a0;
  puVar8 = puStack_7a0;
  func_0x00010bf51e00(puStack_7a0);
  ppuVar21 = ppuStack_798;
  func_0x00010bee0ec0(ppuStack_798);
  _objc_release(puVar8);
  ppuVar25 = ppuVar17;
  func_0x00010bf51e00(ppuVar17);
  func_0x00010bee0da0(ppuVar21);
  _objc_release(ppuVar25);
  puVar8 = ppuVar21[0x18];
  ppuVar25 = ppuVar21;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar8);
  _objc_release(uVar3);
  _objc_release(ppuVar25);
  ppuVar25 = &PTR____CFConstantStringClassReference_110f48c78;
  func_0x00010be03d20(ppuVar21);
  _objc_release(ppuVar17);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_7b8 = FUN_1068e5704;
  lStack_830 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_7c0 = &pppuStack_570;
  _objc_retain(ppuVar25);
  puVar8 = ppuVar24[6];
  func_0x00010c0d3c80();
  lStack_918 = 0;
  uStack_920 = 0;
  uStack_908 = 0;
  plStack_910 = (long *)0x0;
  uStack_8f8 = 0;
  uStack_900 = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  puVar6 = ppuVar24[6];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_928 = puVar6;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar2 = *plStack_910;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_910 != lVar2) {
          _objc_enumerationMutation(puStack_928);
        }
        ppuVar17 = *(undefined ***)(lStack_918 + (long)puVar9 * 8);
        puVar20 = ppuVar24[6];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar25);
        _objc_alloc();
        ppuVar21 = ppuVar25;
        func_0x000100504554(ppuVar25,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar25);
        func_0x00010bff4000();
        _objc_release(ppuVar21);
        puStack_8d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_8d0 = 0xc2000000;
        pcStack_8c8 = FUN_1068eb030;
        puStack_8c0 = &UNK_110886d58;
        puStack_8b8 = puVar26;
        _objc_retain(puVar26);
        puVar7 = puVar20;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_8b8);
        _objc_release(puVar26);
        func_0x00010c1d0640(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar20);
        puVar9 = puVar9 + 1;
      } while (puVar6 != puVar9);
      puVar6 = puStack_928;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puStack_928);
  puVar6 = puVar8;
  func_0x00010bf51e00(puVar8);
  func_0x00010bee0ec0(ppuVar24);
  _objc_release(puVar6);
  puVar6 = ppuVar24[0x18];
  ppuVar23 = &PTR____CFConstantStringClassReference_110f41678;
  ppuVar13 = ppuVar24;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = (undefined **)0x1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar6);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar18 = (undefined **)0x0;
  ppuVar19 = (undefined **)0x0;
  func_0x00010be03d20(ppuVar24);
  _objc_release(puVar8);
  ppuVar21 = ppuVar25;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_830) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_968 = &PTR____CFConstantStringClassReference_110f41678;
  pcStack_938 = FUN_1068e59b0;
  lStack_9a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_990 = puVar7;
  puStack_988 = puVar26;
  ppuStack_980 = ppuVar17;
  ppuStack_978 = ppuVar14;
  ppuStack_970 = ppuVar13;
  puStack_960 = puVar6;
  puStack_958 = puVar8;
  ppuStack_950 = ppuVar24;
  ppuStack_948 = ppuVar25;
  pppuStack_940 = &pppuStack_7c0;
  _objc_retain(ppuVar18);
  lStack_a58 = 0;
  puStack_a60 = (undefined *)0x0;
  uStack_a48 = 0;
  plStack_a50 = (long *)0x0;
  uStack_a38 = 0;
  uStack_a40 = 0;
  uStack_a28 = 0;
  uStack_a30 = 0;
  ppuVar25 = (undefined **)ppuVar21[7];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = &puStack_a60;
  ppuStack_a70 = ppuVar25;
  func_0x00010bf52a60();
  if (ppuVar25 != (undefined **)0x0) {
    lStack_a68 = *plStack_a50;
    ppuVar23 = ppuVar25;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_a50 != lStack_a68) {
          _objc_enumerationMutation(ppuStack_a70);
        }
        ppuVar25 = *(undefined ***)(lStack_a58 + (long)ppuVar21 * 8);
        ppuVar17 = ppuVar25;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar17;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        if (((int)ppuVar19 != 0) && (ppuVar13 != (undefined **)0x0)) {
          ppuVar14 = ppuVar13;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar14;
          func_0x00010c11b1e0();
          ppuVar15 = ppuVar18;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(ppuVar14);
          if (ppuVar17 != ppuVar15) goto LAB_1068e5ad4;
          _objc_retain(ppuVar25);
LAB_1068e5c0c:
          _objc_release(ppuVar13);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        ppuVar17 = ppuVar25;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar17;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        if ((((ulong)ppuVar19 & 1) == 0) && (ppuVar14 != (undefined **)0x0)) {
          ppuVar17 = ppuVar14;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar17;
          ppuVar24 = ppuVar18;
          func_0x00010c0720c0();
          _objc_release(ppuVar17);
          if ((int)ppuVar15 == 0) goto LAB_1068e5b34;
          _objc_retain(ppuVar25);
LAB_1068e5c04:
          _objc_release(ppuVar14);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        ppuVar15 = ppuVar25;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar15;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        if ((((ulong)ppuVar19 & 1) == 0) && (ppuVar17 != (undefined **)0x0)) {
          ppuVar15 = ppuVar17;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar15;
          ppuVar24 = ppuVar18;
          func_0x00010c0720c0();
          _objc_release(ppuVar15);
          if ((int)ppuVar16 != 0) {
            _objc_retain(ppuVar25);
            _objc_release(ppuVar17);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(ppuVar17);
        _objc_release(ppuVar14);
        _objc_release(ppuVar13);
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar23 != ppuVar21);
      ppuVar24 = &puStack_a60;
      ppuVar23 = ppuStack_a70;
      func_0x00010bf52a60();
    } while (ppuVar23 != (undefined **)0x0);
  }
  ppuVar25 = (undefined **)0x0;
LAB_1068e5c14:
  _objc_release(ppuStack_a70);
  ppuVar15 = ppuVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar25);
    return;
  }
  ___stack_chk_fail();
  pcStack_a78 = FUN_1068e5c64;
  lStack_aa8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = ppuVar15;
  ppuStack_aa0 = ppuVar25;
  ppuStack_a98 = ppuVar19;
  ppuStack_a90 = ppuVar21;
  ppuStack_a88 = ppuVar18;
  pppuStack_a80 = &pppuStack_940;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_ab0 = ppuVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar19;
    func_0x00010be8d640(ppuVar15);
    _objc_release(ppuVar19);
  }
  ppuVar21 = ppuVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_aa8) {
    ___stack_chk_fail();
    pcStack_ab8 = FUN_1068e5d10;
    puVar7 = ppuVar21[7];
    ppuStack_b00 = ppuVar17;
    ppuStack_af8 = ppuVar14;
    ppuStack_af0 = ppuVar13;
    ppuStack_ae8 = ppuVar23;
    ppuStack_ae0 = ppuVar25;
    ppuStack_ad8 = ppuVar19;
    ppuStack_ad0 = ppuVar15;
    ppuStack_ac8 = ppuVar16;
    pppuStack_ac0 = &pppuStack_a80;
    _objc_retain(puVar7);
    puStack_b28 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b20 = 0xc2000000;
    pcStack_b18 = FUN_1068eaa54;
    puStack_b10 = &UNK_1109488b0;
    puStack_b08 = puVar7;
    _objc_retain(puVar7);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x000100504554(ppuVar24,&puStack_b28);
    _objc_release(puStack_b08);
    _objc_release(puVar7);
    func_0x00010be8d6a0(ppuVar21);
    _objc_release(param_7);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar24);
    return;
  }
  return;
}



/* Entry: 1068e4ba4; end: 1068e4ea3; -[SCDiscoverFeedDataStore _saveStories:forFeedType:] */

void FUN_1068e4ba4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *unaff_x28;
  undefined *puStack_968;
  undefined8 uStack_960;
  code *pcStack_958;
  undefined *puStack_950;
  undefined *puStack_948;
  undefined **ppuStack_940;
  undefined **ppuStack_938;
  undefined **ppuStack_930;
  undefined **ppuStack_928;
  undefined **ppuStack_920;
  undefined **ppuStack_918;
  undefined **ppuStack_910;
  undefined **ppuStack_908;
  undefined8 ***pppuStack_900;
  code *pcStack_8f8;
  undefined **ppuStack_8f0;
  long lStack_8e8;
  undefined **ppuStack_8e0;
  undefined **ppuStack_8d8;
  undefined **ppuStack_8d0;
  undefined **ppuStack_8c8;
  undefined8 ***pppuStack_8c0;
  code *pcStack_8b8;
  undefined **ppuStack_8b0;
  long lStack_8a8;
  undefined *puStack_8a0;
  long lStack_898;
  long *plStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7e0;
  undefined *puStack_7d0;
  undefined *puStack_7c8;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined8 ***pppuStack_780;
  code *pcStack_778;
  undefined *puStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *puStack_718;
  undefined8 uStack_710;
  code *pcStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  long lStack_670;
  undefined1 ***pppuStack_600;
  code *pcStack_5f8;
  undefined **ppuStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined **ppuStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined *puStack_548;
  undefined8 uStack_540;
  code *pcStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  long lStack_420;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  long lStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined **ppuStack_368;
  undefined *puStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_1d0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
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
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_150 = param_4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  puStack_148 = puVar3;
  _objc_release(puVar25);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_158 = uVar2;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar17 = param_3;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar18 = *plStack_130;
    do {
      lVar21 = 0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(param_3);
        }
        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = *(undefined8 *)(lStack_138 + lVar21 * 8);
        func_0x00010c259740(uVar2);
        func_0x00010c0df880(puVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar1);
        _objc_release(puVar25);
        unaff_x28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar2);
        puVar25 = unaff_x28;
        func_0x00010c0df880(unaff_x28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar25);
        lVar21 = lVar21 + 1;
      } while (lVar17 != lVar21);
      lVar17 = param_3;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(param_3);
  puVar25 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar6 = puStack_148;
  uVar2 = uStack_158;
  func_0x00010c1d0640(uStack_158);
  _objc_release(puVar25);
  uVar4 = uVar2;
  func_0x00010bf51e00(uVar2);
  func_0x00010bee0ec0(param_1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010bee0da0(param_1);
  _objc_release(uVar4);
  ppuVar24 = &PTR____CFConstantStringClassReference_110f48bb8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f48c98;
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar22;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03d20(param_1);
  _objc_release(puVar25);
  _objc_release(puVar22);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar6);
  lVar17 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f48bb8;
  uStack_1a0 = uVar2;
  puStack_188 = puVar6;
  pcStack_168 = FUN_1068e4ea4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = unaff_x28;
  puStack_1b8 = puVar25;
  puStack_1a8 = puVar3;
  puStack_198 = puVar22;
  uStack_190 = uVar1;
  lStack_180 = param_1;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar24);
  uVar1 = *(undefined8 *)(lVar17 + 0x10);
  func_0x00010c0d3c80();
  puVar3 = *(undefined **)(lVar17 + 0x18);
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(lVar17 + 0x30);
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(lVar17 + 0x38);
  lStack_398 = lVar17;
  uStack_370 = uVar2;
  func_0x00010c0d3c80();
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  _objc_retain(ppuVar24);
  ppuStack_380 = ppuVar24;
  func_0x00010bf52a60();
  ppuStack_368 = ppuVar24;
  if (ppuVar24 != (undefined **)0x0) {
    lStack_378 = *plStack_300;
    puStack_390 = puVar3;
    uStack_388 = uVar1;
    do {
      ppuVar24 = (undefined **)0x0;
      do {
        if (*plStack_300 != lStack_378) {
          _objc_enumerationMutation(ppuStack_380);
        }
        puVar25 = *(undefined **)(lStack_308 + (long)ppuVar24 * 8);
        puVar22 = puVar25;
        ppuStack_358 = ppuVar24;
        func_0x00010c258040();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126ced30;
        _objc_alloc();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(puVar25);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0();
        puStack_360 = puVar19;
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar19 = puVar25;
        func_0x00010c259780();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar19;
        func_0x00010bf529e0();
        _objc_release(puVar19);
        if (puVar8 == (undefined *)0x0) {
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          lStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          plStack_340 = (long *)0x0;
          _objc_retain(puVar22);
          puVar19 = puVar22;
          func_0x00010bf52a60();
          puVar8 = puVar22;
          if (puVar19 != (undefined *)0x0) {
            lVar17 = *plStack_340;
            do {
              puVar3 = (undefined *)0x0;
              do {
                if (*plStack_340 != lVar17) {
                  _objc_enumerationMutation(puVar22);
                }
                puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                uVar1 = *(undefined8 *)(lStack_348 + (long)puVar3 * 8);
                func_0x00010c259740(uVar1);
                func_0x00010c0df880(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6);
                _objc_release(puVar5);
                puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c259740(uVar1);
                func_0x00010c0df880(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar4);
                _objc_release(puVar5);
                puVar3 = puVar3 + 1;
              } while (puVar19 != puVar3);
              puVar19 = puVar22;
              func_0x00010bf52a60();
              uVar1 = uStack_388;
              puVar3 = puStack_390;
            } while (puVar19 != (undefined *)0x0);
          }
        }
        else {
          puVar8 = puVar25;
          func_0x00010c259780(puVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar6);
        }
        _objc_release(puVar8);
        puVar8 = puVar6;
        func_0x00010bf51e00(puVar6);
        puVar19 = puStack_360;
        func_0x00010c1d0640(uStack_370);
        _objc_release(puVar8);
        puVar8 = puVar25;
        func_0x00010c1559c0(puVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x00010bf51e00();
        func_0x00010c1d0640(uVar1);
        _objc_release(puVar5);
        _objc_release(puVar8);
        puVar8 = puVar25;
        func_0x00010c156320(puVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x00010bf51e00();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar19);
        _objc_release(puVar22);
        ppuVar24 = (undefined **)((long)ppuStack_358 + 1);
      } while (ppuVar24 != ppuStack_368);
      ppuVar24 = ppuStack_380;
      func_0x00010bf52a60();
      ppuStack_368 = ppuVar24;
    } while (ppuVar24 != (undefined **)0x0);
  }
  ppuVar24 = ppuStack_380;
  _objc_release(ppuStack_380);
  uVar2 = uVar1;
  func_0x00010bf51e00();
  lVar17 = lStack_398;
  uVar16 = *(undefined8 *)(lStack_398 + 0x10);
  *(undefined8 *)(lStack_398 + 0x10) = uVar2;
  _objc_release(uVar16);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(lVar17 + 0x18);
  *(undefined **)(lVar17 + 0x18) = puVar6;
  _objc_release(uVar2);
  uVar2 = uStack_370;
  uVar16 = uStack_370;
  func_0x00010bf51e00(uStack_370);
  func_0x00010bee0ec0(lVar17);
  _objc_release(uVar16);
  uVar16 = uVar4;
  func_0x00010bf51e00();
  func_0x00010bee0da0(lVar17);
  _objc_release(uVar16);
  func_0x00010beddbc0(lVar17);
  ppuVar13 = &PTR____CFConstantStringClassReference_110f48bb8;
  func_0x00010be03d20(lVar17);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_1068e5344;
  lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3b0 = &puStack_170;
  _objc_retain(ppuVar13);
  puVar6 = ppuVar24[6];
  func_0x00010c0d3c80();
  ppuVar7 = (undefined **)ppuVar24[7];
  puStack_5e0 = puVar6;
  func_0x00010c0d3c80();
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  plStack_580 = (long *)0x0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  puVar6 = ppuVar24[6];
  ppuStack_5f0 = ppuVar7;
  ppuStack_5d8 = ppuVar24;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_5e8 = puVar6;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar17 = *plStack_580;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_580 != lVar17) {
          _objc_enumerationMutation(puStack_5e8);
        }
        puVar25 = *(undefined **)(lStack_588 + (long)puVar22 * 8);
        puVar8 = ppuStack_5d8[6];
        func_0x00010c0e00e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar13);
        _objc_alloc();
        ppuVar24 = ppuVar13;
        func_0x000100504554(ppuVar13,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar13);
        func_0x00010bff4000();
        _objc_release(ppuVar24);
        puStack_548 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_540 = 0xc2000000;
        pcStack_538 = FUN_1068eb030;
        puStack_530 = &UNK_110886d58;
        puStack_528 = puVar3;
        _objc_retain(puVar3);
        puVar19 = puVar8;
        func_0x00010c14cca0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_528);
        _objc_release(puVar3);
        func_0x00010c1d0640(puStack_5e0);
        _objc_release(puVar19);
        _objc_release(puVar8);
        puVar22 = puVar22 + 1;
      } while (puVar6 != puVar22);
      puVar6 = puStack_5e8;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puStack_5e8);
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  lStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  plStack_5c0 = (long *)0x0;
  _objc_retain(ppuVar13);
  ppuVar7 = ppuVar13;
  func_0x00010bf52a60();
  ppuVar24 = ppuStack_5f0;
  if (ppuVar7 != (undefined **)0x0) {
    lVar17 = *plStack_5c0;
    do {
      ppuVar23 = (undefined **)0x0;
      do {
        if (*plStack_5c0 != lVar17) {
          _objc_enumerationMutation(ppuVar13);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_5c8 + (long)ppuVar23 * 8));
        func_0x00010c0df880(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(ppuVar24);
        _objc_release(puVar6);
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar7 != ppuVar23);
      ppuVar7 = ppuVar13;
      func_0x00010bf52a60();
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(ppuVar13);
  puVar6 = puStack_5e0;
  puVar22 = puStack_5e0;
  func_0x00010bf51e00(puStack_5e0);
  ppuVar7 = ppuStack_5d8;
  func_0x00010bee0ec0(ppuStack_5d8);
  _objc_release(puVar22);
  ppuVar23 = ppuVar24;
  func_0x00010bf51e00(ppuVar24);
  func_0x00010bee0da0(ppuVar7);
  _objc_release(ppuVar23);
  puVar22 = ppuVar7[0x18];
  ppuVar23 = ppuVar7;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar22);
  _objc_release(uVar1);
  _objc_release(ppuVar23);
  ppuVar23 = &PTR____CFConstantStringClassReference_110f48c78;
  func_0x00010be03d20(ppuVar7);
  _objc_release(ppuVar24);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
    return;
  }
  ___stack_chk_fail();
  pcStack_5f8 = FUN_1068e5704;
  lStack_670 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_600 = &ppuStack_3b0;
  _objc_retain(ppuVar23);
  puVar22 = ppuVar13[6];
  func_0x00010c0d3c80();
  lStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  plStack_750 = (long *)0x0;
  uStack_738 = 0;
  uStack_740 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  puVar6 = ppuVar13[6];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_768 = puVar6;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar17 = *plStack_750;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_750 != lVar17) {
          _objc_enumerationMutation(puStack_768);
        }
        ppuVar24 = *(undefined ***)(lStack_758 + (long)puVar19 * 8);
        puVar8 = ppuVar13[6];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar23);
        _objc_alloc();
        ppuVar7 = ppuVar23;
        func_0x000100504554(ppuVar23,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar23);
        func_0x00010bff4000();
        _objc_release(ppuVar7);
        puStack_718 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_710 = 0xc2000000;
        pcStack_708 = FUN_1068eb030;
        puStack_700 = &UNK_110886d58;
        puStack_6f8 = puVar25;
        _objc_retain(puVar25);
        puVar3 = puVar8;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_6f8);
        _objc_release(puVar25);
        func_0x00010c1d0640(puVar22);
        _objc_release(puVar3);
        _objc_release(puVar8);
        puVar19 = puVar19 + 1;
      } while (puVar6 != puVar19);
      puVar6 = puStack_768;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puStack_768);
  puVar6 = puVar22;
  func_0x00010bf51e00(puVar22);
  func_0x00010bee0ec0(ppuVar13);
  _objc_release(puVar6);
  puVar6 = ppuVar13[0x18];
  ppuVar20 = &PTR____CFConstantStringClassReference_110f41678;
  ppuVar9 = ppuVar13;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined **)0x1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar6);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  ppuVar14 = (undefined **)0x0;
  ppuVar15 = (undefined **)0x0;
  func_0x00010be03d20(ppuVar13);
  _objc_release(puVar22);
  ppuVar7 = ppuVar23;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_670) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_7a8 = &PTR____CFConstantStringClassReference_110f41678;
  pcStack_778 = FUN_1068e59b0;
  lStack_7e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_7d0 = puVar3;
  puStack_7c8 = puVar25;
  ppuStack_7c0 = ppuVar24;
  ppuStack_7b8 = ppuVar10;
  ppuStack_7b0 = ppuVar9;
  puStack_7a0 = puVar6;
  puStack_798 = puVar22;
  ppuStack_790 = ppuVar13;
  ppuStack_788 = ppuVar23;
  pppuStack_780 = &pppuStack_600;
  _objc_retain(ppuVar14);
  lStack_898 = 0;
  puStack_8a0 = (undefined *)0x0;
  uStack_888 = 0;
  plStack_890 = (long *)0x0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  ppuVar23 = (undefined **)ppuVar7[7];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &puStack_8a0;
  ppuStack_8b0 = ppuVar23;
  func_0x00010bf52a60();
  if (ppuVar23 != (undefined **)0x0) {
    lStack_8a8 = *plStack_890;
    ppuVar20 = ppuVar23;
    do {
      ppuVar7 = (undefined **)0x0;
      do {
        if (*plStack_890 != lStack_8a8) {
          _objc_enumerationMutation(ppuStack_8b0);
        }
        ppuVar23 = *(undefined ***)(lStack_898 + (long)ppuVar7 * 8);
        ppuVar24 = ppuVar23;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar24;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar24);
        if (((int)ppuVar15 != 0) && (ppuVar9 != (undefined **)0x0)) {
          ppuVar10 = ppuVar9;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar24 = ppuVar10;
          func_0x00010c11b1e0();
          ppuVar11 = ppuVar14;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(ppuVar10);
          if (ppuVar24 != ppuVar11) goto LAB_1068e5ad4;
          _objc_retain(ppuVar23);
LAB_1068e5c0c:
          _objc_release(ppuVar9);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        ppuVar24 = ppuVar23;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar24;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar24);
        if ((((ulong)ppuVar15 & 1) == 0) && (ppuVar10 != (undefined **)0x0)) {
          ppuVar24 = ppuVar10;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar24;
          ppuVar13 = ppuVar14;
          func_0x00010c0720c0();
          _objc_release(ppuVar24);
          if ((int)ppuVar11 == 0) goto LAB_1068e5b34;
          _objc_retain(ppuVar23);
LAB_1068e5c04:
          _objc_release(ppuVar10);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        ppuVar11 = ppuVar23;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar11;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
        if ((((ulong)ppuVar15 & 1) == 0) && (ppuVar24 != (undefined **)0x0)) {
          ppuVar11 = ppuVar24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar11;
          ppuVar13 = ppuVar14;
          func_0x00010c0720c0();
          _objc_release(ppuVar11);
          if ((int)ppuVar12 != 0) {
            _objc_retain(ppuVar23);
            _objc_release(ppuVar24);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(ppuVar24);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar20 != ppuVar7);
      ppuVar13 = &puStack_8a0;
      ppuVar20 = ppuStack_8b0;
      func_0x00010bf52a60();
    } while (ppuVar20 != (undefined **)0x0);
  }
  ppuVar23 = (undefined **)0x0;
LAB_1068e5c14:
  _objc_release(ppuStack_8b0);
  ppuVar11 = ppuVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar23);
    return;
  }
  ___stack_chk_fail();
  pcStack_8b8 = FUN_1068e5c64;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = ppuVar11;
  ppuStack_8e0 = ppuVar23;
  ppuStack_8d8 = ppuVar15;
  ppuStack_8d0 = ppuVar7;
  ppuStack_8c8 = ppuVar14;
  pppuStack_8c0 = &pppuStack_780;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_8f0 = ppuVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar15;
    func_0x00010be8d640(ppuVar11);
    _objc_release(ppuVar15);
  }
  ppuVar7 = ppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8e8) {
    ___stack_chk_fail();
    pcStack_8f8 = FUN_1068e5d10;
    puVar3 = ppuVar7[7];
    ppuStack_940 = ppuVar24;
    ppuStack_938 = ppuVar10;
    ppuStack_930 = ppuVar9;
    ppuStack_928 = ppuVar20;
    ppuStack_920 = ppuVar23;
    ppuStack_918 = ppuVar15;
    ppuStack_910 = ppuVar11;
    ppuStack_908 = ppuVar12;
    pppuStack_900 = &pppuStack_8c0;
    _objc_retain(puVar3);
    puStack_968 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_960 = 0xc2000000;
    pcStack_958 = FUN_1068eaa54;
    puStack_950 = &UNK_1109488b0;
    puStack_948 = puVar3;
    _objc_retain(puVar3);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x000100504554(ppuVar13,&puStack_968);
    _objc_release(puStack_948);
    _objc_release(puVar3);
    func_0x00010be8d6a0(ppuVar7);
    _objc_release(param_7);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
    return;
  }
  return;
}



/* Entry: 1068e4ea4; end: 1068e5343; -[SCDiscoverFeedDataStore _saveSections:] */

void FUN_1068e4ea4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined *unaff_x27;
  undefined *puStack_808;
  undefined8 uStack_800;
  code *pcStack_7f8;
  undefined *puStack_7f0;
  undefined *puStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  undefined **ppuStack_7c8;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined8 ***pppuStack_7a0;
  code *pcStack_798;
  undefined **ppuStack_790;
  long lStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined8 ***pppuStack_760;
  code *pcStack_758;
  undefined **ppuStack_750;
  long lStack_748;
  undefined *puStack_740;
  long lStack_738;
  long *plStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_680;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined1 ***pppuStack_620;
  code *pcStack_618;
  undefined *puStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  code *pcStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  long lStack_510;
  undefined1 **ppuStack_4a0;
  code *pcStack_498;
  undefined **ppuStack_490;
  long lStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_2c0;
  undefined1 *puStack_250;
  code *pcStack_248;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  puVar2 = *(undefined **)(param_1 + 0x18);
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lStack_238 = param_1;
  uStack_210 = uVar3;
  func_0x00010c0d3c80();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lStack_220 = param_3;
  func_0x00010bf52a60();
  lStack_208 = param_3;
  if (param_3 != 0) {
    lStack_218 = *plStack_1a0;
    puStack_230 = puVar2;
    uStack_228 = uVar1;
    lStack_208 = param_3;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1a0 != lStack_218) {
          _objc_enumerationMutation(lStack_220);
        }
        unaff_x27 = *(undefined **)(lStack_1a8 + lVar19 * 8);
        puVar7 = unaff_x27;
        lStack_1f8 = lVar19;
        func_0x00010c258040();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR_PTR_1126ced30;
        _objc_alloc();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(unaff_x27);
        func_0x00010c0df840(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0();
        puStack_200 = puVar21;
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar21 = unaff_x27;
        func_0x00010c259780();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar21;
        func_0x00010bf529e0();
        _objc_release(puVar21);
        if (puVar9 == (undefined *)0x0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          _objc_retain(puVar7);
          puVar21 = puVar7;
          func_0x00010bf52a60();
          puVar9 = puVar7;
          if (puVar21 != (undefined *)0x0) {
            lVar19 = *plStack_1e0;
            do {
              puVar2 = (undefined *)0x0;
              do {
                if (*plStack_1e0 != lVar19) {
                  _objc_enumerationMutation(puVar7);
                }
                puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                uVar1 = *(undefined8 *)(lStack_1e8 + (long)puVar2 * 8);
                func_0x00010c259740(uVar1);
                func_0x00010c0df880(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar8);
                _objc_release(puVar5);
                puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c259740(uVar1);
                func_0x00010c0df880(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar4);
                _objc_release(puVar5);
                puVar2 = puVar2 + 1;
              } while (puVar21 != puVar2);
              puVar21 = puVar7;
              func_0x00010bf52a60();
              uVar1 = uStack_228;
              puVar2 = puStack_230;
            } while (puVar21 != (undefined *)0x0);
          }
        }
        else {
          puVar9 = unaff_x27;
          func_0x00010c259780(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar8);
        }
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bf51e00(puVar8);
        puVar21 = puStack_200;
        func_0x00010c1d0640(uStack_210);
        _objc_release(puVar9);
        puVar9 = unaff_x27;
        func_0x00010c1559c0(unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar9;
        func_0x00010bf51e00();
        func_0x00010c1d0640(uVar1);
        _objc_release(puVar5);
        _objc_release(puVar9);
        puVar9 = unaff_x27;
        func_0x00010c156320(unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar9;
        func_0x00010bf51e00();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar21);
        _objc_release(puVar7);
        lVar19 = lStack_1f8 + 1;
      } while (lVar19 != lStack_208);
      lVar19 = lStack_220;
      func_0x00010bf52a60();
      lStack_208 = lVar19;
    } while (lVar19 != 0);
  }
  lVar20 = lStack_220;
  _objc_release(lStack_220);
  uVar3 = uVar1;
  func_0x00010bf51e00();
  lVar19 = lStack_238;
  uVar18 = *(undefined8 *)(lStack_238 + 0x10);
  *(undefined8 *)(lStack_238 + 0x10) = uVar3;
  _objc_release(uVar18);
  puVar8 = puVar2;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(lVar19 + 0x18);
  *(undefined **)(lVar19 + 0x18) = puVar8;
  _objc_release(uVar3);
  uVar3 = uStack_210;
  uVar18 = uStack_210;
  func_0x00010bf51e00(uStack_210);
  func_0x00010bee0ec0(lVar19);
  _objc_release(uVar18);
  uVar18 = uVar4;
  func_0x00010bf51e00();
  func_0x00010bee0da0(lVar19);
  _objc_release(uVar18);
  func_0x00010beddbc0(lVar19);
  ppuVar14 = &PTR____CFConstantStringClassReference_110f48bb8;
  func_0x00010be03d20(lVar19);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_1068e5344;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  uVar1 = *(undefined8 *)(lVar20 + 0x30);
  func_0x00010c0d3c80();
  ppuVar6 = *(undefined ***)(lVar20 + 0x38);
  uStack_480 = uVar1;
  func_0x00010c0d3c80();
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lVar19 = *(long *)(lVar20 + 0x30);
  ppuStack_490 = ppuVar6;
  lStack_478 = lVar20;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_488 = lVar19;
  func_0x00010bf52a60();
  if (lVar19 != 0) {
    lVar20 = *plStack_420;
    do {
      lVar23 = 0;
      do {
        if (*plStack_420 != lVar20) {
          _objc_enumerationMutation(lStack_488);
        }
        unaff_x27 = *(undefined **)(lStack_428 + lVar23 * 8);
        uVar3 = *(undefined8 *)(lStack_478 + 0x30);
        func_0x00010c0e00e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar14);
        _objc_alloc();
        ppuVar6 = ppuVar14;
        func_0x000100504554(ppuVar14,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar14);
        func_0x00010bff4000();
        _objc_release(ppuVar6);
        puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3e0 = 0xc2000000;
        pcStack_3d8 = FUN_1068eb030;
        puStack_3d0 = &UNK_110886d58;
        puStack_3c8 = puVar2;
        _objc_retain(puVar2);
        uVar1 = uVar3;
        func_0x00010c14cca0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_3c8);
        _objc_release(puVar2);
        func_0x00010c1d0640(uStack_480);
        _objc_release(uVar1);
        _objc_release(uVar3);
        lVar23 = lVar23 + 1;
      } while (lVar19 != lVar23);
      lVar19 = lStack_488;
      func_0x00010bf52a60();
    } while (lVar19 != 0);
  }
  _objc_release(lStack_488);
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  _objc_retain(ppuVar14);
  ppuVar15 = ppuVar14;
  func_0x00010bf52a60();
  ppuVar6 = ppuStack_490;
  if (ppuVar15 != (undefined **)0x0) {
    lVar19 = *plStack_460;
    do {
      ppuVar24 = (undefined **)0x0;
      do {
        if (*plStack_460 != lVar19) {
          _objc_enumerationMutation(ppuVar14);
        }
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_468 + (long)ppuVar24 * 8));
        func_0x00010c0df880(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(ppuVar6);
        _objc_release(puVar8);
        ppuVar24 = (undefined **)((long)ppuVar24 + 1);
      } while (ppuVar15 != ppuVar24);
      ppuVar15 = ppuVar14;
      func_0x00010bf52a60();
    } while (ppuVar15 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  uVar1 = uStack_480;
  uVar3 = uStack_480;
  func_0x00010bf51e00(uStack_480);
  lVar19 = lStack_478;
  func_0x00010bee0ec0(lStack_478);
  _objc_release(uVar3);
  ppuVar15 = ppuVar6;
  func_0x00010bf51e00(ppuVar6);
  func_0x00010bee0da0(lVar19);
  _objc_release(ppuVar15);
  uVar4 = *(undefined8 *)(lVar19 + 0xc0);
  lVar20 = lVar19;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar20);
  ppuVar15 = &PTR____CFConstantStringClassReference_110f48c78;
  func_0x00010be03d20(lVar19);
  _objc_release(ppuVar6);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_498 = FUN_1068e5704;
  lStack_510 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_4a0 = &puStack_250;
  _objc_retain(ppuVar15);
  puVar7 = ppuVar14[6];
  func_0x00010c0d3c80();
  lStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5e8 = 0;
  plStack_5f0 = (long *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  puVar8 = ppuVar14[6];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_608 = puVar8;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar19 = *plStack_5f0;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_5f0 != lVar19) {
          _objc_enumerationMutation(puStack_608);
        }
        ppuVar6 = *(undefined ***)(lStack_5f8 + (long)puVar21 * 8);
        puVar9 = ppuVar14[6];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar15);
        _objc_alloc();
        ppuVar24 = ppuVar15;
        func_0x000100504554(ppuVar15,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar15);
        func_0x00010bff4000();
        _objc_release(ppuVar24);
        puStack_5b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_5b0 = 0xc2000000;
        pcStack_5a8 = FUN_1068eb030;
        puStack_5a0 = &UNK_110886d58;
        puStack_598 = unaff_x27;
        _objc_retain(unaff_x27);
        puVar2 = puVar9;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_598);
        _objc_release(unaff_x27);
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar9);
        puVar21 = puVar21 + 1;
      } while (puVar8 != puVar21);
      puVar8 = puStack_608;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puStack_608);
  puVar8 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010bee0ec0(ppuVar14);
  _objc_release(puVar8);
  puVar8 = ppuVar14[0x18];
  ppuVar22 = &PTR____CFConstantStringClassReference_110f41678;
  ppuVar10 = ppuVar14;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = (undefined **)0x1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar8);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  ppuVar16 = (undefined **)0x0;
  ppuVar17 = (undefined **)0x0;
  func_0x00010be03d20(ppuVar14);
  _objc_release(puVar7);
  ppuVar24 = ppuVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_510) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_648 = &PTR____CFConstantStringClassReference_110f41678;
  pcStack_618 = FUN_1068e59b0;
  lStack_680 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_670 = puVar2;
  puStack_668 = unaff_x27;
  ppuStack_660 = ppuVar6;
  ppuStack_658 = ppuVar11;
  ppuStack_650 = ppuVar10;
  puStack_640 = puVar8;
  puStack_638 = puVar7;
  ppuStack_630 = ppuVar14;
  ppuStack_628 = ppuVar15;
  pppuStack_620 = &ppuStack_4a0;
  _objc_retain(ppuVar16);
  lStack_738 = 0;
  puStack_740 = (undefined *)0x0;
  uStack_728 = 0;
  plStack_730 = (long *)0x0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  ppuVar15 = (undefined **)ppuVar24[7];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &puStack_740;
  ppuStack_750 = ppuVar15;
  func_0x00010bf52a60();
  if (ppuVar15 != (undefined **)0x0) {
    lStack_748 = *plStack_730;
    ppuVar22 = ppuVar15;
    do {
      ppuVar24 = (undefined **)0x0;
      do {
        if (*plStack_730 != lStack_748) {
          _objc_enumerationMutation(ppuStack_750);
        }
        ppuVar15 = *(undefined ***)(lStack_738 + (long)ppuVar24 * 8);
        ppuVar6 = ppuVar15;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar6;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        if (((int)ppuVar17 != 0) && (ppuVar10 != (undefined **)0x0)) {
          ppuVar11 = ppuVar10;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar11;
          func_0x00010c11b1e0();
          ppuVar12 = ppuVar16;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(ppuVar11);
          if (ppuVar6 != ppuVar12) goto LAB_1068e5ad4;
          _objc_retain(ppuVar15);
LAB_1068e5c0c:
          _objc_release(ppuVar10);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        ppuVar6 = ppuVar15;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar6;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        if ((((ulong)ppuVar17 & 1) == 0) && (ppuVar11 != (undefined **)0x0)) {
          ppuVar6 = ppuVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar6;
          ppuVar14 = ppuVar16;
          func_0x00010c0720c0();
          _objc_release(ppuVar6);
          if ((int)ppuVar12 == 0) goto LAB_1068e5b34;
          _objc_retain(ppuVar15);
LAB_1068e5c04:
          _objc_release(ppuVar11);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        ppuVar12 = ppuVar15;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar12;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        if ((((ulong)ppuVar17 & 1) == 0) && (ppuVar6 != (undefined **)0x0)) {
          ppuVar12 = ppuVar6;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar12;
          ppuVar14 = ppuVar16;
          func_0x00010c0720c0();
          _objc_release(ppuVar12);
          if ((int)ppuVar13 != 0) {
            _objc_retain(ppuVar15);
            _objc_release(ppuVar6);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
        ppuVar24 = (undefined **)((long)ppuVar24 + 1);
      } while (ppuVar22 != ppuVar24);
      ppuVar14 = &puStack_740;
      ppuVar22 = ppuStack_750;
      func_0x00010bf52a60();
    } while (ppuVar22 != (undefined **)0x0);
  }
  ppuVar15 = (undefined **)0x0;
LAB_1068e5c14:
  _objc_release(ppuStack_750);
  ppuVar12 = ppuVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_680) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
    return;
  }
  ___stack_chk_fail();
  pcStack_758 = FUN_1068e5c64;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = ppuVar12;
  ppuStack_780 = ppuVar15;
  ppuStack_778 = ppuVar17;
  ppuStack_770 = ppuVar24;
  ppuStack_768 = ppuVar16;
  pppuStack_760 = &pppuStack_620;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_790 = ppuVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar17;
    func_0x00010be8d640(ppuVar12);
    _objc_release(ppuVar17);
  }
  ppuVar24 = ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_788) {
    ___stack_chk_fail();
    pcStack_798 = FUN_1068e5d10;
    puVar2 = ppuVar24[7];
    ppuStack_7e0 = ppuVar6;
    ppuStack_7d8 = ppuVar11;
    ppuStack_7d0 = ppuVar10;
    ppuStack_7c8 = ppuVar22;
    ppuStack_7c0 = ppuVar15;
    ppuStack_7b8 = ppuVar17;
    ppuStack_7b0 = ppuVar12;
    ppuStack_7a8 = ppuVar13;
    pppuStack_7a0 = &pppuStack_760;
    _objc_retain(puVar2);
    puStack_808 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_800 = 0xc2000000;
    pcStack_7f8 = FUN_1068eaa54;
    puStack_7f0 = &UNK_1109488b0;
    puStack_7e8 = puVar2;
    _objc_retain(puVar2);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x000100504554(ppuVar14,&puStack_808);
    _objc_release(puStack_7e8);
    _objc_release(puVar2);
    func_0x00010be8d6a0(ppuVar24);
    _objc_release(param_7);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
    return;
  }
  return;
}



/* Entry: 1068e5344; end: 1068e5703; -[SCDiscoverFeedDataStore _removeStories:] */

void FUN_1068e5344(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  code *pcStack_5b8;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined **ppuStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  undefined8 *puStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined **ppuStack_530;
  undefined8 *puStack_528;
  undefined1 ***pppuStack_520;
  code *pcStack_518;
  undefined **ppuStack_510;
  long lStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_440;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined **ppuStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  long lStack_2d0;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  uStack_240 = uVar1;
  func_0x00010c0d3c80();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar3 = *(long *)(param_1 + 0x30);
  puStack_250 = puVar2;
  lStack_238 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = lVar3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_1e0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1e0 != lVar13) {
          _objc_enumerationMutation(lStack_248);
        }
        unaff_x27 = *(undefined **)(lStack_1e8 + lVar18 * 8);
        uVar4 = *(undefined8 *)(lStack_238 + 0x30);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(param_3);
        _objc_alloc();
        puVar2 = param_3;
        func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(param_3);
        func_0x00010bff4000();
        _objc_release(puVar2);
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_1068eb030;
        puStack_190 = &UNK_110886d58;
        puStack_188 = unaff_x28;
        _objc_retain(unaff_x28);
        uVar1 = uVar4;
        func_0x00010c14cca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_188);
        _objc_release(unaff_x28);
        func_0x00010c1d0640(uStack_240);
        _objc_release(uVar1);
        _objc_release(uVar4);
        lVar18 = lVar18 + 1;
      } while (lVar3 != lVar18);
      lVar3 = lStack_248;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lStack_248);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010bf52a60();
  puVar2 = puStack_250;
  if (puVar5 != (undefined8 *)0x0) {
    lVar3 = *plStack_220;
    do {
      puVar19 = (undefined8 *)0x0;
      do {
        if (*plStack_220 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_228 + (long)puVar19 * 8));
        func_0x00010c0df880(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(puVar2);
        _objc_release(puVar6);
        puVar19 = (undefined8 *)((long)puVar19 + 1);
      } while (puVar5 != puVar19);
      puVar5 = param_3;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(param_3);
  uVar1 = uStack_240;
  uVar4 = uStack_240;
  func_0x00010bf51e00(uStack_240);
  lVar3 = lStack_238;
  func_0x00010bee0ec0(lStack_238);
  _objc_release(uVar4);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010bee0da0(lVar3);
  _objc_release(puVar5);
  uVar15 = *(undefined8 *)(lVar3 + 0xc0);
  lVar13 = lVar3;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar15);
  _objc_release(uVar4);
  _objc_release(lVar13);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f48c78;
  func_0x00010be03d20(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_1068e5704;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  uVar1 = param_3[6];
  func_0x00010c0d3c80();
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  lVar3 = param_3[6];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3c8 = lVar3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_3b0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_3b0 != lVar13) {
          _objc_enumerationMutation(lStack_3c8);
        }
        puVar2 = *(undefined8 **)(lStack_3b8 + lVar18 * 8);
        puVar6 = (undefined *)param_3[6];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(ppuVar10);
        _objc_alloc();
        ppuVar14 = ppuVar10;
        func_0x000100504554(ppuVar10,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(ppuVar10);
        func_0x00010bff4000();
        _objc_release(ppuVar14);
        puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_370 = 0xc2000000;
        pcStack_368 = FUN_1068eb030;
        puStack_360 = &UNK_110886d58;
        puStack_358 = unaff_x27;
        _objc_retain(unaff_x27);
        unaff_x28 = puVar6;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_358);
        _objc_release(unaff_x27);
        func_0x00010c1d0640(uVar1);
        _objc_release(unaff_x28);
        _objc_release(puVar6);
        lVar18 = lVar18 + 1;
      } while (lVar3 != lVar18);
      lVar3 = lStack_3c8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lStack_3c8);
  uVar4 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010bee0ec0(param_3);
  _objc_release(uVar4);
  uVar4 = param_3[0x18];
  ppuVar17 = &PTR____CFConstantStringClassReference_110f41678;
  puVar5 = param_3;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined8 *)0x1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(puVar19);
  _objc_release(puVar5);
  puVar11 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)0x0;
  func_0x00010be03d20(param_3);
  _objc_release(uVar1);
  ppuVar14 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_408 = &PTR____CFConstantStringClassReference_110f41678;
  pcStack_3d8 = FUN_1068e59b0;
  lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_430 = unaff_x28;
  puStack_428 = unaff_x27;
  puStack_420 = puVar2;
  puStack_418 = puVar19;
  puStack_410 = puVar5;
  uStack_400 = uVar4;
  uStack_3f8 = uVar1;
  puStack_3f0 = param_3;
  ppuStack_3e8 = ppuVar10;
  ppuStack_3e0 = &puStack_260;
  _objc_retain(puVar11);
  lStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  plStack_4f0 = (long *)0x0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  ppuVar10 = (undefined **)ppuVar14[7];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_500;
  ppuStack_510 = ppuVar10;
  func_0x00010bf52a60();
  if (ppuVar10 != (undefined **)0x0) {
    lStack_508 = *plStack_4f0;
    ppuVar17 = ppuVar10;
    do {
      ppuVar14 = (undefined **)0x0;
      do {
        if (*plStack_4f0 != lStack_508) {
          _objc_enumerationMutation(ppuStack_510);
        }
        puVar16 = *(undefined8 **)(lStack_4f8 + (long)ppuVar14 * 8);
        puVar2 = puVar16;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        if (((int)puVar12 != 0) && (puVar5 != (undefined8 *)0x0)) {
          puVar19 = puVar5;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar19;
          func_0x00010c11b1e0();
          puVar7 = puVar11;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(puVar19);
          if (puVar2 != puVar7) goto LAB_1068e5ad4;
          _objc_retain(puVar16);
LAB_1068e5c0c:
          _objc_release(puVar5);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        puVar2 = puVar16;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar2;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        if ((((ulong)puVar12 & 1) == 0) && (puVar19 != (undefined8 *)0x0)) {
          puVar2 = puVar19;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          puVar9 = puVar11;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar7 == 0) goto LAB_1068e5b34;
          _objc_retain(puVar16);
LAB_1068e5c04:
          _objc_release(puVar19);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        puVar7 = puVar16;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        if ((((ulong)puVar12 & 1) == 0) && (puVar2 != (undefined8 *)0x0)) {
          puVar7 = puVar2;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          puVar9 = puVar11;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)puVar8 != 0) {
            _objc_retain(puVar16);
            _objc_release(puVar2);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(puVar2);
        _objc_release(puVar19);
        _objc_release(puVar5);
        ppuVar14 = (undefined **)((long)ppuVar14 + 1);
      } while (ppuVar17 != ppuVar14);
      puVar9 = &uStack_500;
      ppuVar17 = ppuStack_510;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  puVar16 = (undefined8 *)0x0;
LAB_1068e5c14:
  _objc_release(ppuStack_510);
  puVar7 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  pcStack_518 = FUN_1068e5c64;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puStack_540 = puVar16;
  puStack_538 = puVar12;
  ppuStack_530 = ppuVar14;
  puStack_528 = puVar11;
  pppuStack_520 = &ppuStack_3e0;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_550 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010be8d640(puVar7);
    _objc_release(puVar12);
  }
  puVar11 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_1068e5d10;
  uVar1 = puVar11[7];
  puStack_5a0 = puVar2;
  puStack_598 = puVar19;
  puStack_590 = puVar5;
  ppuStack_588 = ppuVar17;
  puStack_580 = puVar16;
  puStack_578 = puVar12;
  puStack_570 = puVar7;
  puStack_568 = puVar8;
  pppuStack_560 = &pppuStack_520;
  _objc_retain(uVar1);
  puStack_5c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_5c0 = 0xc2000000;
  pcStack_5b8 = FUN_1068eaa54;
  puStack_5b0 = &UNK_1109488b0;
  uStack_5a8 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000100504554(puVar9,&puStack_5c8);
  _objc_release(uStack_5a8);
  _objc_release(uVar1);
  func_0x00010be8d6a0(puVar11);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1068e5704; end: 1068e59af; -[SCDiscoverFeedDataStore _removeStoriesInFeedIdentifierMapping:] */

void FUN_1068e5704(undefined8 *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined **ppuStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  undefined8 *puStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 *puStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_178;
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
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1[6];
  func_0x00010c0d3c80();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar2 = param_1[6];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_160;
    do {
      lVar15 = 0;
      do {
        if (*plStack_160 != lVar13) {
          _objc_enumerationMutation(lStack_178);
        }
        unaff_x26 = *(undefined8 **)(lStack_168 + lVar15 * 8);
        uVar3 = param_1[6];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_retain(param_3);
        _objc_alloc();
        ppuVar12 = param_3;
        func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110948ea0);
        _objc_release(param_3);
        func_0x00010bff4000();
        _objc_release(ppuVar12);
        puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_120 = 0xc2000000;
        pcStack_118 = FUN_1068eb030;
        puStack_110 = &UNK_110886d58;
        puStack_108 = unaff_x27;
        _objc_retain(unaff_x27);
        unaff_x28 = uVar3;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_108);
        _objc_release(unaff_x27);
        func_0x00010c1d0640(uVar1);
        _objc_release(unaff_x28);
        _objc_release(uVar3);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lStack_178;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lStack_178);
  uVar3 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010bee0ec0(param_1);
  _objc_release(uVar3);
  uVar3 = param_1[0x18];
  ppuVar16 = &PTR____CFConstantStringClassReference_110f41678;
  puVar4 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined8 *)0x1;
  func_0x000107cb5e38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar10 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  func_0x00010be03d20(param_1);
  _objc_release(uVar1);
  ppuVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f41678;
  pcStack_188 = FUN_1068e59b0;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e0 = unaff_x28;
  puStack_1d8 = unaff_x27;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = puVar5;
  puStack_1c0 = puVar4;
  uStack_1b0 = uVar3;
  uStack_1a8 = uVar1;
  puStack_1a0 = param_1;
  ppuStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  ppuVar6 = (undefined **)ppuVar12[7];
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_2b0;
  ppuStack_2c0 = ppuVar6;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    lStack_2b8 = *plStack_2a0;
    ppuVar16 = ppuVar6;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_2a0 != lStack_2b8) {
          _objc_enumerationMutation(ppuStack_2c0);
        }
        puVar14 = *(undefined8 **)(lStack_2a8 + (long)ppuVar12 * 8);
        puVar5 = puVar14;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        if (((int)puVar11 != 0) && (puVar4 != (undefined8 *)0x0)) {
          puVar5 = puVar4;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar5;
          func_0x00010c11b1e0();
          puVar7 = puVar10;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(puVar5);
          if (unaff_x26 != puVar7) goto LAB_1068e5ad4;
          _objc_retain(puVar14);
LAB_1068e5c0c:
          _objc_release(puVar4);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        puVar7 = puVar14;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        if ((((ulong)puVar11 & 1) == 0) && (puVar5 != (undefined8 *)0x0)) {
          unaff_x26 = puVar5;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = unaff_x26;
          puVar9 = puVar10;
          func_0x00010c0720c0();
          _objc_release(unaff_x26);
          if ((int)puVar7 == 0) goto LAB_1068e5b34;
          _objc_retain(puVar14);
LAB_1068e5c04:
          _objc_release(puVar5);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        puVar7 = puVar14;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar7;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        if ((((ulong)puVar11 & 1) == 0) && (unaff_x26 != (undefined8 *)0x0)) {
          puVar7 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          puVar9 = puVar10;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)puVar8 != 0) {
            _objc_retain(puVar14);
            _objc_release(unaff_x26);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(unaff_x26);
        _objc_release(puVar5);
        _objc_release(puVar4);
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar16 != ppuVar12);
      puVar9 = &uStack_2b0;
      ppuVar16 = ppuStack_2c0;
      func_0x00010bf52a60();
    } while (ppuVar16 != (undefined **)0x0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_1068e5c14:
  _objc_release(ppuStack_2c0);
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_1068e5c64;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puStack_2f0 = puVar14;
  puStack_2e8 = puVar11;
  ppuStack_2e0 = ppuVar12;
  puStack_2d8 = puVar10;
  ppuStack_2d0 = &puStack_190;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_300 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010be8d640(puVar7);
    _objc_release(puVar11);
  }
  puVar10 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_308 = FUN_1068e5d10;
  uVar1 = puVar10[7];
  puStack_350 = unaff_x26;
  puStack_348 = puVar5;
  puStack_340 = puVar4;
  ppuStack_338 = ppuVar16;
  puStack_330 = puVar14;
  puStack_328 = puVar11;
  puStack_320 = puVar7;
  puStack_318 = puVar8;
  pppuStack_310 = &ppuStack_2d0;
  _objc_retain(uVar1);
  puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_370 = 0xc2000000;
  pcStack_368 = FUN_1068eaa54;
  puStack_360 = &UNK_1109488b0;
  uStack_358 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000100504554(puVar9,&puStack_378);
  _objc_release(uStack_358);
  _objc_release(uVar1);
  func_0x00010be8d6a0(puVar10);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1068e59b0; end: 1068e5c63; -[SCDiscoverFeedDataStore _storyForCreator:isPublisher:] */

void FUN_1068e59b0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar7;
  undefined8 *unaff_x26;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 *puStack_158;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_130;
  lStack_140 = lVar1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lStack_138 = *plStack_120;
    unaff_x23 = lVar1;
    do {
      param_1 = 0;
      do {
        if (*plStack_120 != lStack_138) {
          _objc_enumerationMutation(lStack_140);
        }
        puVar6 = *(undefined8 **)(lStack_128 + param_1 * 8);
        puVar2 = puVar6;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar2;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        if (((int)param_4 != 0) && (unaff_x24 != (undefined8 *)0x0)) {
          unaff_x25 = unaff_x24;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c11b1e0();
          puVar2 = param_3;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _atol();
          _objc_release(unaff_x25);
          if (unaff_x26 != puVar2) goto LAB_1068e5ad4;
          _objc_retain(puVar6);
LAB_1068e5c0c:
          _objc_release(unaff_x24);
          goto LAB_1068e5c14;
        }
LAB_1068e5ad4:
        puVar2 = puVar6;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = puVar2;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        if ((((ulong)param_4 & 1) == 0) && (unaff_x25 != (undefined8 *)0x0)) {
          unaff_x26 = unaff_x25;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x26;
          puVar5 = param_3;
          func_0x00010c0720c0();
          _objc_release(unaff_x26);
          if ((int)puVar2 == 0) goto LAB_1068e5b34;
          _objc_retain(puVar6);
LAB_1068e5c04:
          _objc_release(unaff_x25);
          goto LAB_1068e5c0c;
        }
LAB_1068e5b34:
        puVar2 = puVar6;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar2;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        if ((((ulong)param_4 & 1) == 0) && (unaff_x26 != (undefined8 *)0x0)) {
          puVar2 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          puVar5 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar3 != 0) {
            _objc_retain(puVar6);
            _objc_release(unaff_x26);
            goto LAB_1068e5c04;
          }
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        param_1 = param_1 + 1;
      } while (unaff_x23 != param_1);
      puVar5 = &uStack_130;
      unaff_x23 = lStack_140;
      func_0x00010bf52a60();
    } while (unaff_x23 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1068e5c14:
  _objc_release(lStack_140);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1068e5c64;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  puStack_170 = puVar6;
  puStack_168 = param_4;
  lStack_160 = param_1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined8 *)0x0) {
    param_4 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_180 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010be8d640(puVar2);
    _objc_release(param_4);
  }
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1068e5d10;
  uVar7 = puVar4[7];
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  lStack_1b8 = unaff_x23;
  puStack_1b0 = puVar6;
  puStack_1a8 = param_4;
  puStack_1a0 = puVar2;
  puStack_198 = puVar3;
  ppuStack_190 = &puStack_150;
  _objc_retain(uVar7);
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_1068eaa54;
  puStack_1e0 = &UNK_1109488b0;
  uStack_1d8 = uVar7;
  _objc_retain(uVar7);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000100504554(puVar5,&puStack_1f8);
  _objc_release(uStack_1d8);
  _objc_release(uVar7);
  func_0x00010be8d6a0(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1068e5c64; end: 1068e5d0f; -[SCDiscoverFeedDataStore _removeStoryByCreator:isPublisher:] */

void FUN_1068e5c64(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010be8d640(param_1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar1 + 0x38);
  _objc_retain(uVar4);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1068eaa54;
  puStack_a0 = &UNK_1109488b0;
  uStack_98 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000100504554(param_3,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uVar4);
  func_0x00010be8d6a0(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068e5d10; end: 1068e5e03; -[SCDiscoverFeedDataStore _removeStoriesByStoriesDedupFp:forFeedType:flushAllImpressions:completionQueue:completion:] */

void FUN_1068e5d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068eaa54;
  puStack_60 = &UNK_1109488b0;
  uStack_58 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000100504554(param_3,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  func_0x00010be8d6a0(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068e5e04; end: 1068e5e9b; -[SCDiscoverFeedDataStore _creatorIdByStory:] */

void FUN_1068e5e04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c03ddc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    lVar3 = lVar1;
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010c25a160(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


