/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10634d534; end: 10634d53b; -[SCOperaPlaylistItemGroupImpl setForwardAutoAdvanceEnabled:] */

void FUN_10634d534(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10634d53c; end: 10634d543; -[SCOperaPlaylistItemGroupImpl backwardsAutoAdvanceEnabled] */

undefined1 FUN_10634d53c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10634d544; end: 10634d54b; -[SCOperaPlaylistItemGroupImpl items] */

undefined8 FUN_10634d544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10634d54c; end: 10634d553; -[SCOperaPlaylistItemGroupImpl currentItem] */

undefined8 FUN_10634d54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10634d554; end: 10634d583; -[SCOperaPlaylistItemGroupImpl setCurrentItem:] */

void FUN_10634d554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10634d584; end: 10634d58b; -[SCOperaPlaylistItemGroupImpl lockedForResolution] */

undefined1 FUN_10634d584(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10634d58c; end: 10634d593; -[SCOperaPlaylistItemGroupImpl setLockedForResolution:] */

void FUN_10634d58c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10634d594; end: 10634d5db; -[SCOperaPlaylistItemGroupImpl .cxx_destruct] */

void FUN_10634d594(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10634d5dc; end: 10634d68b; -[SCOperaPlaylistBatchedMutator initWithInitialGroups:] */

undefined1 * FUN_10634d5dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0f20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0d3c80();
    if (lVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar4;
    }
    else {
      _objc_retain(lVar2);
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      *(long *)((long)puVar1 + 8) = lVar2;
    }
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10634d68c; end: 10634d6b3; -[SCOperaPlaylistBatchedMutator groups] */

void FUN_10634d68c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10634d6b4; end: 10634d863; -[SCOperaPlaylistBatchedMutator prependGroupsWithModels:] */

void FUN_10634d6b4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          puVar3 = PTR_PTR_1126c9e10;
          func_0x00010c0d95e0(PTR_PTR_1126c9e10,param_2,
                              *(undefined8 *)(lStack_128 + (long)puVar6 * 8));
          func_0x00010befa120(puVar2,param_2,puVar3);
          _objc_release(puVar3);
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar1 = param_3;
    func_0x00010bf529e0(param_3);
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed320(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c066b20(*(undefined8 *)(param_1 + 8),param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (puVar6 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_3 + 8);
    puVar2 = PTR_PTR_1126c9e10;
    func_0x00010c0d95e0(PTR_PTR_1126c9e10);
    func_0x00010befa120(uVar4,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10634d864; end: 10634d8a7; -[SCOperaPlaylistBatchedMutator appendGroupWithModel:] */

void FUN_10634d864(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126c9e10;
    func_0x00010c0d95e0(PTR_PTR_1126c9e10);
    func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10634d8a8; end: 10634d9e7; -[SCOperaPlaylistBatchedMutator replaceGroupsWithModels:] */

void FUN_10634d8a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  long lVar6;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
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
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 8);
        puVar2 = PTR_PTR_1126c9e10;
        func_0x00010c0d95e0(PTR_PTR_1126c9e10,param_2,*(undefined8 *)(lStack_128 + lVar6 * 8));
        func_0x00010befa120(unaff_x22,param_2,puVar2);
        _objc_release(puVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10634d9e8;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(lVar1 + 8);
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_10634daa4;
    puStack_170 = &UNK_11091ccf8;
    _objc_retain(puVar3);
    puStack_168 = (undefined1 *)puVar3;
    func_0x00010c1063a0(puVar2,param_2,&puStack_188);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae5e0(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puStack_168);
  }
  _objc_release(puVar3);
  return;
}



/* Entry: 10634d9e8; end: 10634daa3; -[SCOperaPlaylistBatchedMutator filterGroupsWithBlock:] */

void FUN_10634d9e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10634daa4;
    puStack_40 = &UNK_11091ccf8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c1063a0(puVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae5e0(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10634daa4; end: 10634daaf;  */

void FUN_10634daa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010634daac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10634dab0; end: 10634dabb; -[SCOperaPlaylistBatchedMutator .cxx_destruct] */

void FUN_10634dab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10634dabc; end: 10634dbb7; -[SCOperaPlaylistItemConverter initWithMediaTypeConfigurations:builtInMediaResolver:extraPropertiesProviders:configProvider:] */

undefined1 *
FUN_10634dabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0f28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    func_0x00010bded7e0(puVar1);
    func_0x00010bde4560(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10634dbb8; end: 10634dc67; -[SCOperaPlaylistItemConverter prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_10634dbb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be5ea40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,0,0);
  }
  else {
    func_0x00010c109b20(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634dc68; end: 10634dcbb; -[SCOperaPlaylistItemConverter removeMediaForItem:] */

void FUN_10634dc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be5ea40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10634dcbc; end: 10634dd57; -[SCOperaPlaylistItemConverter loadMediaForPlaylistItemGroup:isFirstGroup:] */

void FUN_10634dcbc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010be5ea60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    _objc_opt_respondsToSelector(param_1,PTR_s_loadMediaForPlaylistItemGroup__112604860);
    if ((uVar1 & 1) != 0) {
      func_0x00010c09b940(param_1);
    }
  }
  else {
    func_0x00010c09b960(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634dd58; end: 10634ddbf; -[SCOperaPlaylistItemConverter loadMediaForPlaylistItemGroup:] */

void FUN_10634dd58(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010be5ea60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c09b940(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634ddc0; end: 10634de43; -[SCOperaPlaylistItemConverter isMediaLoadedForItem:] */

ulong FUN_10634ddc0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010be5ea40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0778a0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10634de44; end: 10634decb; -[SCOperaPlaylistItemConverter retrievePrefetchInfoForItem:completion:] */

void FUN_10634de44(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be5ea40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c13ee20(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634decc; end: 10634e117; -[SCOperaPlaylistItemConverter pagePropertiesForItem:completion:] */

void FUN_10634decc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_release();
  }
  lVar5 = *(long *)(param_1 + 8);
  lVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0d00c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf9b1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    _objc_retain(lVar1);
    _objc_release(lVar4);
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar5);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    _objc_retain(lVar2);
    _objc_retain(param_4);
    func_0x00010bdd2b00(lVar1);
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10634e118; end: 10634e3bb;  */

void FUN_10634e118(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10634e390;
  func_0x00010c0d00c0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_2;
  func_0x00010c0f1980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf0d180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_10634e210:
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c9e18;
    _objc_alloc();
    func_0x00010c00c560();
    puVar4 = puVar10;
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar10);
    if (puVar4 == (undefined *)0x0) goto LAB_10634e210;
    puVar10 = PTR_PTR_1126c9b98;
    _objc_alloc(PTR_PTR_1126c9b98);
    lVar5 = param_2;
    func_0x00010c0f1980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b740(puVar10);
    _objc_release(lVar5);
  }
  lVar5 = lVar2;
  func_0x00010c0d3c80(lVar2);
  lVar6 = lVar3;
  func_0x00010c0d3c80(lVar3);
  func_0x00010bed3f00(lVar1);
  puVar4 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar7 = puVar4;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if ((puVar7 != (undefined *)0x0) && (lVar8 = *(long *)(lVar1 + 0x38), lVar8 != 0)) {
    func_0x00010c0f1aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(lVar5);
    _objc_release(lVar8);
  }
  puVar4 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar9 = puVar4;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if ((puVar9 != (undefined *)0x0) && (lVar8 = *(long *)(lVar1 + 0x38), lVar8 != 0)) {
    func_0x00010c0f1aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(lVar6);
    _objc_release(lVar8);
  }
  func_0x00010bdc6840(lVar1);
  lVar8 = *(long *)(param_1 + 0x40);
  puVar4 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  func_0x00010c033240();
  (**(code **)(lVar8 + 0x10))(lVar8,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_10634e390:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10634e3bc; end: 10634e3ff; -[SCOperaPlaylistItemConverter _addDefaultPropertiesForPageProperties:attachmentPageProperties:] */

void FUN_10634e3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bef7f60(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634e400; end: 10634e62b; -[SCOperaPlaylistItemConverter _updateBasePageDataWithExtraPropertyProviders:pageProperties:attachmentProperties:item:dataModel:] */

void FUN_10634e400(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar7 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar7);
  puVar6 = &uStack_140;
  lVar4 = lVar7;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar5 = *(long *)(param_1 + 0x20);
        func_0x00010bf9b1c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        if (lVar5 != 0) {
          lVar1 = lVar5;
        }
        _objc_retain(lVar1);
        _objc_release(lVar5);
        _objc_retain(param_4);
        _objc_retain(param_3);
        _objc_retain(param_5);
        func_0x00010be0d9c0(lVar1);
        _objc_release(lVar1);
        _objc_release(param_5);
        _objc_release(param_3);
        _objc_release(param_4);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      puVar6 = &uStack_140;
      lVar4 = lVar7;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(puVar6);
  FUN_10634e698(uVar2,param_2,uVar3,uVar10);
  FUN_10634e698(*(undefined8 *)(param_3 + 0x38),puVar6,*(undefined8 *)(param_3 + 0x28),
                *(undefined8 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10634e62c; end: 10634e697;  */

void FUN_10634e62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  FUN_10634e698(uVar1,param_2,uVar2,uVar3);
  FUN_10634e698(*(undefined8 *)(param_1 + 0x38),param_3,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634e698; end: 10634e8fb;  */

void FUN_10634e698(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == 0) goto LAB_10634e8a4;
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  if (uVar4 == 0 || uVar3 == 0) {
LAB_10634e738:
    func_0x00010bef7f60(param_1);
  }
  else {
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    uVar4 = uVar2;
    func_0x00010bf529e0();
    uVar5 = uVar3;
    func_0x00010bf529e0();
    if (uVar5 < uVar4) {
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 1;
      _objc_retain(uVar3);
      func_0x00010bf97e80(uVar2);
      bVar1 = *(byte *)(puStack_78 + 3);
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((bVar1 & 1) != 0) goto LAB_10634e738;
    }
    uVar4 = uVar2;
    func_0x00010bf09f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_1);
    puVar7 = puVar6;
    func_0x00010bf09f00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_10634e8a4:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10634e8fc; end: 10634e98b; -[SCOperaPlaylistItemConverter _basePageDataFromDataConverter:dataModel:completion:] */

void FUN_10634e8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10634e98c;
  puStack_40 = &UNK_11091cd88;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c0f0e80(param_3,param_2,param_4,&puStack_58);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10634e98c; end: 10634e997;  */

void FUN_10634e98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010634e994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10634e998; end: 10634ea43; -[SCOperaPlaylistItemConverter _extraPropertiesFromProvider:dataModel:item:baseOperaPage:completion:] */

void FUN_10634e998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10634ea44;
  puStack_50 = &UNK_11091cdb8;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x00010bf9ea80(param_3,param_2,param_4,param_5,param_6,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_7);
  return;
}



/* Entry: 10634ea44; end: 10634ea4f;  */

void FUN_10634ea44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010634ea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10634ea50; end: 10634eafb; -[SCOperaPlaylistItemConverter resolvePlaylistItemGroupWithMutator:] */

void FUN_10634ea50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c101500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ac00();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10634eafc; end: 10634ec6b; -[SCOperaPlaylistItemConverter postResolvePlaylistItemGroupWithResolver:] */

void FUN_10634eafc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
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
  long lStack_70;
  
  puVar8 = &uStack_130;
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
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        uVar10 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar3 = uVar10;
        func_0x00010c101500();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        _objc_opt_respondsToSelector();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          func_0x00010c101500(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c104f80();
          _objc_release(uVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + 8);
  _objc_retain(puVar8);
  puVar5 = (undefined1 *)puVar8;
  func_0x00010c27dd80(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = uVar9;
  func_0x00010c0d0060(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10634ec6c; end: 10634ed13; -[SCOperaPlaylistItemConverter dataModelFor:] */

void FUN_10634ec6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0d0060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10634ed14; end: 10634edc7; -[SCOperaPlaylistItemConverter dataModelForGroup:] */

void FUN_10634ed14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = uVar3;
    func_0x00010c0d0060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf63e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10634edc8; end: 10634ef63; -[SCOperaPlaylistItemConverter playlistItemGroupForDataModel:] */

void FUN_10634edc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar7 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        puVar8 = *(undefined1 **)(lStack_128 + lVar10 * 8);
        puVar3 = puVar8;
        func_0x00010c101460();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf2d460();
        _objc_release(puVar3);
        if ((int)puVar4 != 0) {
          func_0x00010c101460();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar8;
          func_0x00010c1014e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          if (puVar3 != (undefined1 *)0x0) {
            puVar7 = PTR_PTR_1126c9e10;
            puVar5 = (undefined8 *)puVar3;
            func_0x00010c0d95e0(PTR_PTR_1126c9e10,param_2,puVar3);
            _objc_release(puVar3);
            goto LAB_10634ef14;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
    puVar7 = (undefined *)0x0;
  }
LAB_10634ef14:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(param_3 + 8);
    _objc_retain(puVar5);
    puVar3 = (undefined1 *)puVar5;
    func_0x00010c27dd80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar6,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar2 = param_3;
    func_0x00010bf24880(param_3,param_2,puVar5);
    _objc_release(puVar5);
    if ((int)lVar2 == 0) {
      puVar7 = puVar6;
      func_0x00010c0c6020(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = *(undefined **)(param_3 + 0x18);
      _objc_retain(puVar7);
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10634ef64; end: 10634f017; -[SCOperaPlaylistItemConverter _mediaPreparationControllerForItem:] */

void FUN_10634ef64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010bf24880(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((int)lVar1 == 0) {
    uVar3 = uVar2;
    func_0x00010c0c6020(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10634f018; end: 10634f0cb; -[SCOperaPlaylistItemConverter _mediaPreparationControllerForItemGroup:] */

void FUN_10634f018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010bdd6f80(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((int)lVar1 == 0) {
    uVar3 = uVar2;
    func_0x00010c0c6020(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10634f0cc; end: 10634f117; -[SCOperaPlaylistItemConverter _builtInMediaResolverEnabledForItemGroup:] */

undefined8 FUN_10634f0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf5f0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24880(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10634f118; end: 10634f11f; -[SCOperaPlaylistItemConverter builtInMediaResolverEnabledForItem:] */

void FUN_10634f118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isBuiltInMediaResolverEnabledFor_1125f9048);
  return;
}



/* Entry: 10634f120; end: 10634f1bb; -[SCOperaPlaylistItemConverter _configDefaultPageProperties] */

void FUN_10634f120(double param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **unaff_x24;
  undefined *puVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  double dStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar8 = &puStack_30;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar8);
  ppuVar4 = ppuVar8;
  func_0x00010c26fa00();
  ppuVar5 = ppuVar8;
  func_0x00010c26fa20();
  if (ppuVar4 != (undefined **)0x0 || ppuVar5 != (undefined **)0x0) {
    _objc_initWeak(auStack_98,lVar9);
    puVar11 = PTR_PTR_1126c9e20;
    _objc_alloc();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10634f394;
    puStack_b8 = &UNK_11091cde8;
    param_3 = auStack_98;
    _objc_copyWeak(auStack_b0,param_3);
    dStack_a0 = (double)ppuVar5 / 1000.0;
    dStack_a8 = (double)ppuVar4 / 1000.0;
    func_0x00010bffae20();
    puVar6 = PTR_PTR_1126c9e28;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010c050a60();
    uVar10 = *(undefined8 *)(lVar9 + 0x20);
    *(undefined **)(lVar9 + 0x20) = puVar6;
    _objc_release(uVar10);
    _objc_release(puVar7);
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_98);
    unaff_x24 = &puStack_d0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(param_3);
  ppuVar4 = ppuVar8 + 4;
  _objc_loadWeakRetained();
  if (ppuVar4 != (undefined **)0x0) {
    puVar11 = ppuVar8[6];
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (param_1 <= (double)ppuVar8[5]) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1) && !NAN((double)puVar11)) {
        bVar1 = param_1 < (double)puVar11;
        bVar2 = param_1 == (double)puVar11;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      func_0x00010be2bc40(param_1,ppuVar4);
    }
  }
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634f1bc; end: 10634f393; -[SCOperaPlaylistItemConverter _createExecutorControllerIfNeeded:] */

void FUN_10634f1bc(double param_1,long param_2,undefined1 *param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **unaff_x24;
  double dVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010c26fa00();
  uVar5 = param_4;
  func_0x00010c26fa20();
  if (uVar4 != 0 || uVar5 != 0) {
    _objc_initWeak(auStack_58,param_2);
    puVar6 = PTR_PTR_1126c9e20;
    _objc_alloc();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10634f394;
    puStack_78 = &UNK_11091cde8;
    param_3 = auStack_58;
    _objc_copyWeak(auStack_70,param_3);
    dStack_60 = (double)uVar5 / 1000.0;
    dStack_68 = (double)uVar4 / 1000.0;
    func_0x00010bffae20();
    puVar7 = PTR_PTR_1126c9e28;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010c050a60();
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar7;
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    unaff_x24 = &puStack_90;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(param_3);
  lVar9 = param_4 + 0x20;
  _objc_loadWeakRetained();
  if (lVar9 != 0) {
    dVar11 = *(double *)(param_4 + 0x30);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (param_1 <= *(double *)(param_4 + 0x28)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1) && !NAN(dVar11)) {
        bVar1 = param_1 < dVar11;
        bVar2 = param_1 == dVar11;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      func_0x00010be2bc40(param_1,lVar9);
    }
  }
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634f394; end: 10634f40b;  */

void FUN_10634f394(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_3);
  lVar4 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    dVar5 = *(double *)(param_2 + 0x30);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (param_1 <= *(double *)(param_2 + 0x28)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1) && !NAN(dVar5)) {
        bVar1 = param_1 < dVar5;
        bVar2 = param_1 == dVar5;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      func_0x00010be2bc40(param_1,lVar4);
    }
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634f40c; end: 10634f4f7; -[SCOperaPlaylistItemConverter _handleLongAPICalls:timeInterval:thresholdToAssert:timeThresholdToLog:] */

void FUN_10634f40c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  _objc_retain(param_6);
  func_0x00010bfc2740(param_6);
  lVar4 = param_4;
  func_0x00010be602e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < param_3) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(param_3)) {
      bVar1 = param_1 < param_3;
      bVar2 = param_1 == param_3;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    lVar7 = *(long *)(param_4 + 0x28);
    if (lVar7 == 0) {
      puVar5 = PTR_PTR_1126c99e8;
      _objc_alloc_init();
      uVar6 = *(undefined8 *)(param_4 + 0x28);
      *(undefined **)(param_4 + 0x28) = puVar5;
      _objc_release(uVar6);
      lVar7 = *(long *)(param_4 + 0x28);
    }
    _objc_opt_class(0);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    FUN_10636ec00(param_1,lVar7,uStack_48,lVar4);
    _objc_release(uStack_48);
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 10634f4f8; end: 10634f56f; -[SCOperaPlaylistItemConverter _methodTagForLongAPICall:] */

undefined ** FUN_10634f4f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c15ac20();
  _sel_isEqual();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c15ac20();
    iVar1 = (int)uVar2;
    _sel_isEqual();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e4ba78;
    if (iVar1 == 0) {
      ppuVar3 = (undefined **)0x0;
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e4ba58;
  }
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 10634f570; end: 10634f577; -[SCOperaPlaylistItemConverter pageFeatureDataProvider] */

undefined8 FUN_10634f570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10634f578; end: 10634f5a7; -[SCOperaPlaylistItemConverter setPageFeatureDataProvider:] */

void FUN_10634f578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10634f5a8; end: 10634f613; -[SCOperaPlaylistItemConverter .cxx_destruct] */

void FUN_10634f5a8(long param_1)

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



/* Entry: 10634f614; end: 10634f7a7;  */

void FUN_10634f614(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  return;
}



/* Entry: 10634f7a8; end: 10634fc8f; -[SCOperaPlaylistViewCoordinator initWithItemGroupDataModels:initialGroupDataModel:mediaTypeConfigurations:builtInMediaResolver:extraPropertiesProviders:eventAnnouncer:groupDisplaySquenceRule:preloadStrategy:configProvider:internalConfigProvider:itemLoadStateTracker:contentResolutionSignalCollector:] */

undefined8 *
FUN_10634f7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f0f30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = param_9;
    _objc_retain(param_14);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9e30;
    _objc_alloc();
    func_0x00010c02a0a0();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x12,param_8);
    _objc_retain();
    puVar4 = puVar1;
    func_0x00010c127820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_8);
    _objc_release(puVar4);
    _objc_release(param_8);
    uVar2 = param_12;
    func_0x00010c11ade0();
    if ((int)uVar2 == 0) {
      uVar2 = puVar1[0x14];
      puVar1[0x14] = 0;
    }
    else {
      puVar3 = PTR_PTR_1126ae568;
      _objc_alloc_init();
      uVar2 = puVar1[0x14];
      puVar1[0x14] = puVar3;
      _objc_release(uVar2);
      uVar2 = puVar1[0x14];
      func_0x00010bf870a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187900(param_6);
    }
    _objc_release(uVar2);
    func_0x00010bea9860(puVar1);
    uVar2 = param_12;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x1d) = (char)uVar2;
    _objc_storeWeak(puVar1 + 0x13,param_12);
    uVar2 = param_12;
    func_0x00010c29dd20();
    *(char *)(puVar1 + 0x23) = (char)uVar2;
    uVar2 = param_12;
    func_0x00010bfe6600();
    *(char *)(puVar1 + 0x27) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010bfe67a0();
    *(char *)((long)puVar1 + 0x139) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010bf67ae0();
    *(char *)((long)puVar1 + 0x13a) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010bf3a320();
    *(char *)((long)puVar1 + 0x13c) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010bf17080();
    *(char *)((long)puVar1 + 0x13e) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010c10fee0();
    *(char *)((long)puVar1 + 0x13d) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010c0c6000();
    *(char *)((long)puVar1 + 0xe9) = (char)uVar2;
    uVar2 = param_13;
    func_0x00010c0c5fe0();
    puVar1[0x1e] = uVar2;
    func_0x00010beaefe0(puVar1);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10634fc90; end: 10634fcd3; -[SCOperaPlaylistViewCoordinator setDelegate:] */

void FUN_10634fc90(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x108,param_3);
  _objc_storeWeak(param_1 + 0x110,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634fcd4; end: 10634fcdb; -[SCOperaPlaylistViewCoordinator setPageFeatureDataProvider:] */

void FUN_10634fcd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setPageFeatureDataProvider__112653a80);
  return;
}



/* Entry: 10634fcdc; end: 10634fd7f; -[SCOperaPlaylistViewCoordinator _setupPreloadConfigWithStrategy:forGroupDataModels:configProvider:] */

void FUN_10634fcdc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 1) {
    lVar2 = param_4;
    func_0x00010bf529e0();
  }
  else {
    if (param_3 != 0) goto LAB_10634fd44;
    uVar1 = param_5;
    func_0x00010c067f00(param_5,param_2,&PTR____CFConstantStringClassReference_110e4bab8,2,0);
    lVar2 = (long)(int)uVar1;
  }
  *(long *)(param_1 + 0xf8) = lVar2;
LAB_10634fd44:
  uVar1 = param_5;
  func_0x00010c067f00(param_5,param_2,&PTR____CFConstantStringClassReference_110e4bad8,1,0);
  *(long *)(param_1 + 0x100) = (long)(int)uVar1;
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10634fd80; end: 10634fe73; -[SCOperaPlaylistViewCoordinator _setUpPlaylistWithGroupDataModels:initialGroupDataModel:] */

void FUN_10634fd80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c98e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf18180(puVar1);
  lVar2 = param_1;
  func_0x00010be75280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2;
  _objc_release(uVar3);
  func_0x00010be571a0(param_1);
  func_0x00010bfcf800(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar1);
  return;
}



/* Entry: 10634fe74; end: 106350173; -[SCOperaPlaylistViewCoordinator createInitialViewModel] */

void FUN_10634fe74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar5);
  puVar1 = PTR_PTR_1126c9a10;
  func_0x00010c06d180(PTR_PTR_1126c9a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(lVar5);
  _objc_release(puVar1);
  _objc_release(lVar5);
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94be0(param_1);
  _objc_release(uVar2);
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4de40(param_1);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar5);
  puVar1 = PTR_PTR_1126c9a10;
  func_0x00010c063ee0(PTR_PTR_1126c9a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(lVar5);
  _objc_release(puVar1);
  _objc_release(lVar5);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106350174;
  uStack_50 = 0x106350184;
  uStack_48 = 0;
  _objc_initWeak(auStack_78,param_1);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bee9b40(param_1);
  if (*(char *)(param_1 + 8) == '\x01') {
    lVar5 = puStack_68[5];
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar2 = puStack_68[5];
      func_0x00010bf0cb60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106350108;
    }
  }
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
LAB_106350108:
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106350174; end: 10635018b;  */

void FUN_106350174(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10635018c; end: 106350233;  */

void FUN_10635018c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar3);
    puVar2 = PTR_PTR_1126c9a10;
    func_0x00010c101880(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106350234; end: 1063502d7; -[SCOperaPlaylistViewCoordinator updatePlaylistWithGroupDataModels:] */

void FUN_106350234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be75280(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfcf800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd740(param_1,param_2,uVar1,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063502d8; end: 1063503bf; -[SCOperaPlaylistViewCoordinator updatePlaylistWithGroupDataModels:initialGroup:] */

void FUN_1063502d8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 == 0) || (param_4 == 0)) ||
     (lVar1 = param_3, func_0x00010bfece20(param_3,param_2,param_4), lVar1 == 0x7fffffffffffffff)) {
    func_0x00010c2889e0(param_1,param_2,param_3);
  }
  else {
    uVar2 = param_1;
    func_0x00010be75280(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf5ee40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd740(param_1,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063503c0; end: 1063503c7; -[SCOperaPlaylistViewCoordinator isMediaLoadedForItem:] */

void FUN_1063503c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0778b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_isMediaLoadedForItem__1125fb838);
  return;
}



/* Entry: 1063503c8; end: 106350447; -[SCOperaPlaylistViewCoordinator retrievePrefetchInfoForItemId:completion:] */

void FUN_1063503c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x00010c13ee20(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106350448; end: 10635054b; -[SCOperaPlaylistViewCoordinator fetchMediaForItem:] */

void FUN_106350448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  puStack_40 = puVar1;
  func_0x00010c109b20(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10635054c; end: 10635058b;  */

void FUN_10635054c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10635058c; end: 106350717; -[SCOperaPlaylistViewCoordinator prepareMediaForGroup:] */

void FUN_10635058c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c9e10;
  _objc_opt_class(PTR_PTR_1126c9e10);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfecde0();
    _objc_release(lVar4);
    if (lVar5 != 0x7fffffffffffffff) {
      uVar3 = param_3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 == 0) {
        _objc_initWeak(auStack_48,param_1);
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_106350718;
        puStack_68 = &UNK_110848218;
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_3);
        uStack_60 = uVar1;
        _objc_retain(param_3);
        uStack_58 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_80);
        _objc_release(uStack_58);
        _objc_release(uStack_60);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      else {
        func_0x00010be4de40(param_1);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106350718; end: 10635076f;  */

void FUN_106350718(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be94be0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4de40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106350770; end: 1063507cb; -[SCOperaPlaylistViewCoordinator _loadMediaForPlaylistItemGroup:isFirstGroup:] */

void FUN_106350770(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  _objc_opt_respondsToSelector(uVar1,PTR_s_loadMediaForPlaylistItemGroup_is_112604868);
  if ((uVar1 & 1) != 0) {
    func_0x00010c09b960(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063507cc; end: 1063508a7; -[SCOperaPlaylistViewCoordinator teardown] */

void FUN_1063507cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x21) == '\x01') {
    lVar1 = param_1 + 0x110;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5ee40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf63e80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101800(lVar1);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setPageFeatureDataProvider__112653a80,0);
    return;
  }
  return;
}



/* Entry: 1063508a8; end: 1063509a3; -[SCOperaPlaylistViewCoordinator prepareFirstPlaylistItemWithCompletion:startWaitingForDownloadCallback:] */

void FUN_1063508a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c98e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf18180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4bb18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94be0(param_1,param_2,uVar2,0);
  _objc_release(uVar2);
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010be78aa0(param_1,param_2,uVar2,0,&PTR____CFConstantStringClassReference_110e4bb58,0,
                      param_4,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063509a4; end: 106350c63; -[SCOperaPlaylistViewCoordinator registeredEventsForOperaSession] */

void FUN_1063509a4(void)

{
  undefined **ppuVar1;
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
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined ***pppuVar30;
  undefined ***pppuVar31;
  undefined ***in_x4;
  undefined **ppuVar32;
  undefined **in_x5;
  undefined **in_x6;
  long lVar33;
  int iVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined ***pppuVar37;
  undefined **ppuStack_f8;
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
  ppuVar1 = (undefined **)PTR_PTR_1126c9a08;
  func_0x00010c0fc7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2330;
  ppuStack_f8 = ppuVar1;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2330;
  puStack_f0 = puVar16;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126b2330;
  puStack_e8 = puVar23;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2330;
  puStack_e0 = puVar36;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126b2338;
  puStack_d8 = puVar29;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_d0 = puVar35;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_c8 = puVar2;
  func_0x00010c29e020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_c0 = puVar3;
  func_0x00010c29e700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_b8 = puVar4;
  func_0x00010c29e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_b0 = puVar5;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_a8 = puVar6;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2638;
  puStack_a0 = puVar7;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9460;
  puStack_98 = puVar8;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2638;
  puStack_90 = puVar9;
  func_0x00010c2a67e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2638;
  puStack_88 = puVar10;
  func_0x00010bf75b40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2638;
  puStack_80 = puVar11;
  func_0x00010bfcd400();
  _objc_retainAutoreleasedReturnValue();
  pppuVar24 = &ppuStack_f8;
  pppuVar31 = (undefined ***)0x11;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar35);
  _objc_release(puVar29);
  _objc_release(puVar36);
  _objc_release(puVar23);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar30 = pppuVar31;
  ppuVar32 = (undefined **)in_x4;
  _objc_retain(pppuVar24);
  _objc_retain(pppuVar31);
  _objc_retain(in_x4);
  pppuVar37 = (undefined ***)ppuVar1[8];
  pppuVar14 = pppuVar31;
  func_0x00010be36bc0(pppuVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar14);
  pppuVar14 = pppuVar31;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2330;
  func_0x00010c29e3c0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  pppuVar25 = pppuVar24;
  func_0x00010c0720c0();
  if (((ulong)pppuVar25 & 1) == 0) {
    puVar23 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(pppuVar24);
    _objc_release(puVar23);
  }
  _objc_release(puVar16);
  ppuVar15 = ppuVar1;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = ppuVar1[3];
  func_0x00010bf5ee40(puVar16);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126b2638;
  func_0x00010c2a67e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppuVar25 = pppuVar24;
  func_0x00010c0720c0();
  _objc_release(puVar16);
  if ((int)pppuVar25 == 0) {
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      puVar16 = ppuVar1[0x26];
      ppuVar1[0x26] = (undefined *)0x0;
      _objc_release(puVar16);
      ppuVar32 = ppuVar1 + 0x21;
      _objc_loadWeakRetained(ppuVar32);
      func_0x00010c1017a0();
      goto LAB_106350f24;
    }
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      ppuVar32 = ppuVar1 + 0x21;
      _objc_loadWeakRetained(ppuVar32);
      func_0x00010c1017e0();
      _objc_release(ppuVar32);
      if (((ulong)ppuVar1[4] & 1) == 0) {
        *(undefined1 *)(ppuVar1 + 4) = 1;
        pppuVar25 = (undefined ***)(ppuVar1 + 0x22);
        _objc_loadWeakRetained(pppuVar25);
        func_0x00010c101780();
LAB_106351014:
        _objc_release(pppuVar25);
      }
      goto LAB_1063513a8;
    }
    pppuVar25 = (undefined ***)PTR_PTR_1126b2330;
    func_0x00010c29e020();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar24;
    pppuVar19 = pppuVar25;
    func_0x00010c0720c0();
    _objc_release(pppuVar25);
    if ((int)pppuVar18 != 0) {
      pppuVar25 = pppuVar37;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (pppuVar25 != (undefined ***)0x0) {
        iVar34 = (int)ppuVar1[0xc];
        pppuVar25 = pppuVar37;
        func_0x00010be36bc0(pppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(pppuVar25);
        if (iVar34 != 0) {
          pppuVar25 = pppuVar37;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = ppuVar1[0x10];
          ppuVar1[0x10] = (undefined *)pppuVar25;
          _objc_release(puVar16);
        }
        puVar16 = ppuVar1[0xc];
        pppuVar25 = pppuVar37;
        func_0x00010be36bc0(pppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar16);
        _objc_release(pppuVar25);
        iVar34 = (int)ppuVar1[0xd];
        pppuVar25 = pppuVar37;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(pppuVar25);
        if (iVar34 == 0) {
          ppuVar32 = ppuVar1;
          func_0x00010beb4d20();
          if ((int)ppuVar32 != 0) {
            func_0x00010be78aa0(ppuVar1);
          }
          goto LAB_1063513a8;
        }
        in_x5 = &PTR____CFConstantStringClassReference_110e4bb98;
        ppuVar32 = (undefined **)0x0;
        pppuVar19 = pppuVar37;
        pppuVar30 = pppuVar14;
        func_0x00010be083a0(ppuVar1);
      }
      goto LAB_1063513d8;
    }
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010c29e3c0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      pppuVar25 = pppuVar37;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar25 != (undefined ***)0x0) {
        pppuVar18 = pppuVar37;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar19 = pppuVar18;
        func_0x00010c0720c0();
        _objc_release(pppuVar18);
        _objc_release(pppuVar25);
        if (((ulong)pppuVar19 & 1) == 0) {
          puVar16 = PTR_PTR_1126c9a38;
          pppuVar19 = pppuVar31;
          func_0x00010c077160();
          if (((ulong)puVar16 & 1) == 0) {
            puVar16 = ppuVar1[0xc];
            pppuVar25 = pppuVar37;
            func_0x00010be36bc0(pppuVar37);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(puVar16);
            _objc_release(pppuVar25);
            puVar16 = ppuVar1[0xd];
            pppuVar25 = pppuVar37;
            func_0x00010be36bc0(pppuVar37);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(puVar16);
            _objc_release(pppuVar25);
            ppuVar32 = &PTR____CFConstantStringClassReference_110e4bbd8;
            pppuVar19 = pppuVar37;
            pppuVar30 = pppuVar14;
            func_0x00010be8c7e0(ppuVar1);
          }
          ppuVar26 = ppuVar1 + 0x28;
          _objc_loadWeakRetained();
          ppuVar27 = ppuVar26;
          func_0x00010c077fc0();
          if ((int)ppuVar27 == 0) {
            ppuVar27 = ppuVar1 + 0x28;
            _objc_loadWeakRetained();
            ppuVar28 = ppuVar27;
            func_0x00010c06d1a0();
            _objc_release(ppuVar27);
            _objc_release(ppuVar26);
            if (((ulong)ppuVar28 & 1) == 0) {
              pppuVar25 = pppuVar37;
              func_0x00010bfce400();
              _objc_retainAutoreleasedReturnValue();
              pppuVar30 = pppuVar25;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar18 = pppuVar30;
              func_0x00010bf4b900();
              _objc_release(pppuVar30);
              _objc_release(pppuVar25);
              if ((int)pppuVar18 != 0) {
                puVar35 = ppuVar1[10];
                pppuVar25 = pppuVar37;
                func_0x00010be36bc0(pppuVar37);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(pppuVar25);
                puVar16 = puVar35;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                puVar23 = puVar16;
                func_0x00010c0f0be0();
                _objc_retainAutoreleasedReturnValue();
                puVar36 = puVar23;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                pppuVar25 = pppuVar31;
                func_0x00010be36bc0(pppuVar31);
                _objc_retainAutoreleasedReturnValue();
                puVar29 = puVar36;
                func_0x00010c0720c0();
                _objc_release(pppuVar25);
                _objc_release(puVar36);
                _objc_release(puVar23);
                _objc_release(puVar16);
                if ((int)puVar29 != 0) {
                  pppuVar25 = pppuVar37;
                  func_0x00010be36bc0(pppuVar37);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010be88fe0(ppuVar1);
                  _objc_release(pppuVar25);
                }
                _objc_release(puVar35);
              }
              goto LAB_1063513a8;
            }
          }
          else {
            _objc_release(ppuVar26);
          }
          goto LAB_1063513d8;
        }
      }
      pppuVar25 = pppuVar37;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuVar25;
      func_0x00010c0720c0();
      _objc_release(pppuVar25);
      if ((int)pppuVar30 != 0) {
        pppuVar25 = (undefined ***)ppuVar1[0x10];
        ppuVar1[0x10] = (undefined *)0x0;
        goto LAB_106351014;
      }
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      *(undefined1 *)((long)ppuVar1 + 0x22) = 1;
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      *(undefined1 *)((long)ppuVar1 + 0x22) = 0;
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      ppuVar32 = ppuVar1 + 0x21;
      _objc_loadWeakRetained(ppuVar32);
      func_0x00010c1017c0();
LAB_106350f24:
      _objc_release(ppuVar32);
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      puVar29 = ppuVar1[3];
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar29;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = ppuVar1[3];
      func_0x00010bfcf800(puVar35);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar35;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar23;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(puVar36);
      _objc_release(puVar23);
      _objc_release(puVar35);
      _objc_release(puVar16);
      _objc_release(puVar29);
      puVar16 = PTR_PTR_1126c9a20;
      func_0x00010c09d1c0(PTR_PTR_1126c9a20);
      _objc_retainAutoreleasedReturnValue();
      pppuVar25 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(pppuVar25);
      _objc_release(puVar16);
      ppuVar32 = ppuVar1 + 0x12;
      _objc_loadWeakRetained(ppuVar32);
      puVar16 = PTR_PTR_1126c9a10;
      func_0x00010c071a00(PTR_PTR_1126c9a10);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR_PTR_1126c9e38;
      func_0x00010c2a2500();
      _objc_retainAutoreleasedReturnValue();
      puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR_PTR_1126c9e38;
      func_0x00010c2a2540();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(ppuVar32);
      _objc_release(puVar2);
      _objc_release(puVar35);
      _objc_release(puVar29);
      _objc_release(puVar36);
      _objc_release(puVar23);
      _objc_release(puVar16);
      _objc_release(ppuVar32);
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126b2638;
    func_0x00010c2a59e0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      if (*(char *)(ppuVar1 + 0x27) == '\x01') {
        pppuVar25 = pppuVar37;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        pppuVar30 = pppuVar25;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = ppuVar1[0x26];
        ppuVar1[0x26] = (undefined *)pppuVar30;
        _objc_release(puVar16);
        goto LAB_106351014;
      }
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      if (*(char *)(ppuVar1 + 0x27) == '\x01') {
        puVar16 = PTR_PTR_1126c9a28;
        func_0x00010bf6ed60(PTR_PTR_1126c9a28);
        _objc_retainAutoreleasedReturnValue();
        pppuVar30 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        puVar16 = PTR_PTR_1126c9b98;
        _objc_opt_class(PTR_PTR_1126c9b98);
        pppuVar18 = pppuVar30;
        _objc_opt_isKindOfClass(pppuVar30,puVar16);
        pppuVar25 = pppuVar30;
        if (((ulong)pppuVar18 & 1) == 0) {
          pppuVar25 = (undefined ***)0x0;
        }
        _objc_retain(pppuVar25);
        _objc_release(pppuVar30);
        pppuVar30 = pppuVar37;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        pppuVar18 = pppuVar30;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar30);
        pppuVar30 = pppuVar25;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        if (pppuVar30 == (undefined ***)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar36 = ppuVar1[8];
          pppuVar19 = pppuVar25;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar36;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar23;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar23);
          _objc_release(puVar36);
          _objc_release(pppuVar19);
        }
        _objc_release(pppuVar30);
        if ((pppuVar18 != (undefined ***)0x0) &&
           (puVar23 = puVar16, func_0x00010c0720c0(), ((ulong)puVar23 & 1) == 0)) {
          pppuVar30 = pppuVar18;
          func_0x00010bf51e00();
          puVar23 = ppuVar1[0x26];
          ppuVar1[0x26] = (undefined *)pppuVar30;
          _objc_release(puVar23);
        }
        _objc_release(puVar16);
        _objc_release(pppuVar18);
        _objc_release(pppuVar25);
      }
      goto LAB_1063513a8;
    }
    puVar16 = PTR_PTR_1126b2638;
    func_0x00010bf75b40(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar24;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar25 != 0) {
      ppuVar32 = (undefined **)ppuVar1[0x26];
      ppuVar1[0x26] = (undefined *)0x0;
      goto LAB_106350f24;
    }
    pppuVar25 = (undefined ***)PTR_PTR_1126b2638;
    func_0x00010bfcd400();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar24;
    pppuVar19 = pppuVar25;
    func_0x00010c0720c0();
    _objc_release(pppuVar25);
    if ((int)pppuVar18 == 0) goto LAB_1063513a8;
    puVar16 = ppuVar1[3];
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 != (undefined *)0x0) {
      puVar23 = puVar16;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      if (puVar36 != (undefined *)0x0) {
        puVar23 = puVar36;
        func_0x00010be36bc0(puVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddd40(ppuVar1);
        _objc_release(puVar23);
        _objc_release(puVar36);
        _objc_release(puVar16);
        goto LAB_1063513a8;
      }
      _objc_release(puVar16);
    }
  }
  else {
    *(undefined1 *)((long)ppuVar1 + 0x21) = 1;
    pppuVar18 = (undefined ***)ppuVar1[3];
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar37;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pppuVar18);
    pppuVar19 = (undefined ***)ppuVar1[3];
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar30 = pppuVar19;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pppuVar19);
    if ((pppuVar18 == pppuVar25) && (pppuVar30 == pppuVar37)) {
      ppuVar32 = ppuVar1;
      func_0x00010beb4d20();
      if ((int)ppuVar32 != 0) {
        puVar16 = ppuVar1[0xd];
        pppuVar25 = pppuVar37;
        func_0x00010be36bc0(pppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(pppuVar25);
        if (((ulong)puVar16 & 1) == 0) goto LAB_106351278;
      }
    }
    else {
      ppuVar32 = ppuVar1 + 0x28;
      _objc_loadWeakRetained();
      ppuVar26 = ppuVar32;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar27 = ppuVar26;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar28 = ppuVar27;
      func_0x00010c27dd80();
      if (ppuVar28 == (undefined **)0x8) {
        _objc_release(ppuVar27);
        _objc_release(ppuVar26);
        _objc_release(ppuVar32);
LAB_106351094:
        iVar34 = (int)ppuVar1[0x1b];
        puVar23 = ppuVar1[3];
        func_0x00010bf5ee40(puVar23);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar23;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar16);
        _objc_release(puVar23);
        if (iVar34 != 0) {
          pppuVar30 = pppuVar37;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          pppuVar19 = pppuVar30;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = ppuVar1[0x1b];
          ppuVar1[0x1b] = (undefined *)pppuVar19;
          _objc_release(puVar16);
          _objc_release(pppuVar30);
        }
      }
      else {
        ppuVar28 = ppuVar1 + 0x28;
        _objc_loadWeakRetained();
        ppuVar20 = ppuVar28;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar20;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar21;
        func_0x00010c27dd80();
        _objc_release(ppuVar21);
        _objc_release(ppuVar20);
        _objc_release(ppuVar28);
        _objc_release(ppuVar27);
        _objc_release(ppuVar26);
        _objc_release(ppuVar32);
        if (ppuVar22 == (undefined **)0x4) goto LAB_106351094;
      }
      puVar23 = ppuVar1[3];
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuVar37;
      func_0x00010bfceb80(pppuVar37);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar23;
      func_0x00010bfecde0();
      _objc_release(pppuVar30);
      _objc_release(puVar23);
      if ((puVar16 != (undefined *)0x7fffffffffffffff) && (ppuVar1[0x1c] < puVar16)) {
        ppuVar1[0x1c] = puVar16;
      }
      if (pppuVar18 != pppuVar25) {
        pppuVar25 = pppuVar37;
        func_0x00010bfce400(pppuVar37);
        _objc_retainAutoreleasedReturnValue();
        ppuVar26 = ppuVar1;
        func_0x00010bf63e80(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar25);
        ppuVar32 = ppuVar1 + 0x22;
        _objc_loadWeakRetained(ppuVar32);
        func_0x00010c101800();
        _objc_release(ppuVar32);
        ppuVar32 = ppuVar1 + 0x21;
        _objc_loadWeakRetained(ppuVar32);
        func_0x00010c101840();
        _objc_release(ppuVar32);
        pppuVar25 = pppuVar37;
        func_0x00010bfceb80(pppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c187400(ppuVar1[3]);
        _objc_release(pppuVar25);
        *(undefined1 *)(ppuVar1 + 4) = 0;
        _objc_release(ppuVar26);
      }
      puVar16 = ppuVar1[3];
      func_0x00010bf5ee40(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1874c0();
      _objc_release(puVar16);
      ppuVar32 = ppuVar1;
      func_0x00010beb4d20();
      if (((ulong)ppuVar32 & 1) != 0) {
LAB_106351278:
        func_0x00010be78aa0(ppuVar1);
      }
    }
    puVar35 = ppuVar1[10];
    pppuVar25 = pppuVar37;
    func_0x00010be36bc0(pppuVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar25);
    puVar16 = puVar35;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar16;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar23;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar31;
    func_0x00010be36bc0(pppuVar31);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar36;
    func_0x00010c0720c0();
    _objc_release(pppuVar25);
    _objc_release(puVar36);
    _objc_release(puVar23);
    _objc_release(puVar16);
    *(byte *)(ppuVar1 + 1) = (byte)puVar29 ^ 1;
    puVar16 = ppuVar1[0x14];
    if (puVar16 != (undefined *)0x0) {
      pppuVar25 = pppuVar37;
      func_0x00010be36bc0(pppuVar37);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(puVar16);
      _objc_release(pppuVar25);
    }
    _objc_release(puVar35);
LAB_1063513a8:
    in_x5 = ppuVar15;
    in_x6 = ppuVar17;
    func_0x00010becfb60(ppuVar1);
    pppuVar19 = pppuVar24;
    pppuVar30 = pppuVar31;
    ppuVar32 = (undefined **)pppuVar37;
    func_0x00010bee3bc0(ppuVar1);
  }
LAB_1063513d8:
  _objc_release(ppuVar17);
  _objc_release(ppuVar15);
  _objc_release(pppuVar14);
  _objc_release(pppuVar37);
  _objc_release(in_x4);
  _objc_release(pppuVar31);
  _objc_release(pppuVar24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar33) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar19);
  _objc_retain(pppuVar30);
  _objc_retain(ppuVar32);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  pppuVar31 = pppuVar30;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar14 = pppuVar31;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar25 = pppuVar14;
  func_0x00010bf1f3c0();
  _objc_release(pppuVar14);
  _objc_release(pppuVar31);
  puVar16 = PTR_PTR_1126b2340;
  if ((int)pppuVar25 == 0) {
    puVar16 = PTR_PTR_1126c9a08;
    func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
    _objc_retainAutoreleasedReturnValue();
    pppuVar31 = pppuVar19;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)pppuVar31 == 0) goto LAB_1063520a4;
    puVar16 = PTR_PTR_1126c9a68;
    func_0x00010c06b400(PTR_PTR_1126c9a68);
    _objc_retainAutoreleasedReturnValue();
    pppuVar31 = (undefined ***)ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010bf1f3c0();
    _objc_release(pppuVar31);
    _objc_release(puVar16);
    if (((ulong)pppuVar14 & 1) != 0) goto LAB_1063520a4;
  }
  else {
    pppuVar31 = pppuVar30;
    func_0x00010c118b40(pppuVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075040();
    _objc_release(pppuVar31);
    if ((int)puVar16 != 0) {
      pppuVar31 = (undefined ***)PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      pppuVar14 = pppuVar19;
      func_0x00010c0720c0();
      if ((int)pppuVar14 != 0) {
        _objc_release(pppuVar31);
        goto LAB_106352094;
      }
    }
    puVar23 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar19;
    func_0x00010c0720c0();
    _objc_release(puVar23);
    if ((int)puVar16 != 0) {
      _objc_release(pppuVar31);
    }
    if (((ulong)pppuVar14 & 1) == 0) goto LAB_1063520a4;
  }
LAB_106352094:
  func_0x00010becfb80(pppuVar24);
LAB_1063520a4:
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(ppuVar32);
  _objc_release(pppuVar30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar19);
  return;
}



/* Entry: 106350c64; end: 106351ebf; -[SCOperaPlaylistViewCoordinator operaViewDidSendEvent:page:params:] */

void FUN_106350c64(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_4;
  ppuVar16 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar21 = (undefined **)param_1[8];
  ppuVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c29e3c0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c0720c0();
  if (((ulong)ppuVar2 & 1) == 0) {
    puVar10 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(param_3);
    _objc_release(puVar10);
  }
  _objc_release(puVar3);
  ppuVar2 = param_1;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1[3];
  func_0x00010bf5ee40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c2a67e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)ppuVar5 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      puVar3 = param_1[0x26];
      param_1[0x26] = (undefined *)0x0;
      _objc_release(puVar3);
      ppuVar16 = param_1 + 0x21;
      _objc_loadWeakRetained(ppuVar16);
      func_0x00010c1017a0();
      goto LAB_106350f24;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      ppuVar16 = param_1 + 0x21;
      _objc_loadWeakRetained(ppuVar16);
      func_0x00010c1017e0();
      _objc_release(ppuVar16);
      if (((ulong)param_1[4] & 1) == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        ppuVar16 = param_1 + 0x22;
        _objc_loadWeakRetained(ppuVar16);
        func_0x00010c101780();
LAB_106351014:
        _objc_release(ppuVar16);
      }
      goto LAB_1063513a8;
    }
    ppuVar5 = (undefined **)PTR_PTR_1126b2330;
    func_0x00010c29e020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_3;
    ppuVar11 = ppuVar5;
    func_0x00010c0720c0();
    _objc_release(ppuVar5);
    if ((int)ppuVar6 != 0) {
      ppuVar5 = ppuVar21;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar5 != (undefined **)0x0) {
        iVar18 = (int)param_1[0xc];
        ppuVar16 = ppuVar21;
        func_0x00010be36bc0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(ppuVar16);
        if (iVar18 != 0) {
          ppuVar16 = ppuVar21;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_1[0x10];
          param_1[0x10] = (undefined *)ppuVar16;
          _objc_release(puVar3);
        }
        puVar3 = param_1[0xc];
        ppuVar16 = ppuVar21;
        func_0x00010be36bc0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(ppuVar16);
        iVar18 = (int)param_1[0xd];
        ppuVar16 = ppuVar21;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(ppuVar16);
        if (iVar18 == 0) {
          ppuVar16 = param_1;
          func_0x00010beb4d20();
          if ((int)ppuVar16 != 0) {
            func_0x00010be78aa0(param_1);
          }
          goto LAB_1063513a8;
        }
        param_6 = &PTR____CFConstantStringClassReference_110e4bb98;
        ppuVar16 = (undefined **)0x0;
        ppuVar11 = ppuVar21;
        ppuVar15 = ppuVar1;
        func_0x00010be083a0(param_1);
      }
      goto LAB_1063513d8;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c29e3c0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      ppuVar5 = ppuVar21;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar6 = ppuVar21;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar6;
        func_0x00010c0720c0();
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        if (((ulong)ppuVar11 & 1) == 0) {
          puVar3 = PTR_PTR_1126c9a38;
          ppuVar11 = param_4;
          func_0x00010c077160();
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = param_1[0xc];
            ppuVar16 = ppuVar21;
            func_0x00010be36bc0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(puVar3);
            _objc_release(ppuVar16);
            puVar3 = param_1[0xd];
            ppuVar16 = ppuVar21;
            func_0x00010be36bc0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(puVar3);
            _objc_release(ppuVar16);
            ppuVar16 = &PTR____CFConstantStringClassReference_110e4bbd8;
            ppuVar11 = ppuVar21;
            ppuVar15 = ppuVar1;
            func_0x00010be8c7e0(param_1);
          }
          ppuVar5 = param_1 + 0x28;
          _objc_loadWeakRetained();
          ppuVar6 = ppuVar5;
          func_0x00010c077fc0();
          if ((int)ppuVar6 == 0) {
            ppuVar6 = param_1 + 0x28;
            _objc_loadWeakRetained();
            ppuVar12 = ppuVar6;
            func_0x00010c06d1a0();
            _objc_release(ppuVar6);
            _objc_release(ppuVar5);
            if (((ulong)ppuVar12 & 1) == 0) {
              ppuVar16 = ppuVar21;
              func_0x00010bfce400();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar16;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar15;
              func_0x00010bf4b900();
              _objc_release(ppuVar15);
              _objc_release(ppuVar16);
              if ((int)ppuVar5 != 0) {
                puVar19 = param_1[10];
                ppuVar16 = ppuVar21;
                func_0x00010be36bc0(ppuVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar16);
                puVar3 = puVar19;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar3;
                func_0x00010c0f0be0();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar10;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar16 = param_4;
                func_0x00010be36bc0(param_4);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar20;
                func_0x00010c0720c0();
                _objc_release(ppuVar16);
                _objc_release(puVar20);
                _objc_release(puVar10);
                _objc_release(puVar3);
                if ((int)puVar13 != 0) {
                  ppuVar16 = ppuVar21;
                  func_0x00010be36bc0(ppuVar21);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010be88fe0(param_1);
                  _objc_release(ppuVar16);
                }
                _objc_release(puVar19);
              }
              goto LAB_1063513a8;
            }
          }
          else {
            _objc_release(ppuVar5);
          }
          goto LAB_1063513d8;
        }
      }
      ppuVar16 = ppuVar21;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar16;
      func_0x00010c0720c0();
      _objc_release(ppuVar16);
      if ((int)ppuVar15 != 0) {
        ppuVar16 = (undefined **)param_1[0x10];
        param_1[0x10] = (undefined *)0x0;
        goto LAB_106351014;
      }
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      *(undefined1 *)((long)param_1 + 0x22) = 1;
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      *(undefined1 *)((long)param_1 + 0x22) = 0;
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      ppuVar16 = param_1 + 0x21;
      _objc_loadWeakRetained(ppuVar16);
      func_0x00010c1017c0();
LAB_106350f24:
      _objc_release(ppuVar16);
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      puVar13 = param_1[3];
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar13;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_1[3];
      func_0x00010bfcf800(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar19;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar10;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(puVar20);
      _objc_release(puVar10);
      _objc_release(puVar19);
      _objc_release(puVar3);
      _objc_release(puVar13);
      puVar3 = PTR_PTR_1126c9a20;
      func_0x00010c09d1c0(PTR_PTR_1126c9a20);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(ppuVar16);
      _objc_release(puVar3);
      ppuVar16 = param_1 + 0x12;
      _objc_loadWeakRetained(ppuVar16);
      puVar3 = PTR_PTR_1126c9a10;
      func_0x00010c071a00(PTR_PTR_1126c9a10);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c9e38;
      func_0x00010c2a2500();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126c9e38;
      func_0x00010c2a2540();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(ppuVar16);
      _objc_release(puVar14);
      _objc_release(puVar19);
      _objc_release(puVar13);
      _objc_release(puVar20);
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(ppuVar16);
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c2a59e0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      if (*(char *)(param_1 + 0x27) == '\x01') {
        ppuVar16 = ppuVar21;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar16;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1[0x26];
        param_1[0x26] = (undefined *)ppuVar15;
        _objc_release(puVar3);
        goto LAB_106351014;
      }
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      if (*(char *)(param_1 + 0x27) == '\x01') {
        puVar3 = PTR_PTR_1126c9a28;
        func_0x00010bf6ed60(PTR_PTR_1126c9a28);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c9b98;
        _objc_opt_class(PTR_PTR_1126c9b98);
        ppuVar5 = ppuVar15;
        _objc_opt_isKindOfClass(ppuVar15,puVar3);
        ppuVar16 = ppuVar15;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar16 = (undefined **)0x0;
        }
        _objc_retain(ppuVar16);
        _objc_release(ppuVar15);
        ppuVar15 = ppuVar21;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar15;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        ppuVar15 = ppuVar16;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar15 == (undefined **)0x0) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar20 = param_1[8];
          ppuVar6 = ppuVar16;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar20;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar10;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar20);
          _objc_release(ppuVar6);
        }
        _objc_release(ppuVar15);
        if ((ppuVar5 != (undefined **)0x0) &&
           (puVar10 = puVar3, func_0x00010c0720c0(), ((ulong)puVar10 & 1) == 0)) {
          ppuVar15 = ppuVar5;
          func_0x00010bf51e00();
          puVar10 = param_1[0x26];
          param_1[0x26] = (undefined *)ppuVar15;
          _objc_release(puVar10);
        }
        _objc_release(puVar3);
        _objc_release(ppuVar5);
        _objc_release(ppuVar16);
      }
      goto LAB_1063513a8;
    }
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010bf75b40(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar5 != 0) {
      ppuVar16 = (undefined **)param_1[0x26];
      param_1[0x26] = (undefined *)0x0;
      goto LAB_106350f24;
    }
    ppuVar5 = (undefined **)PTR_PTR_1126b2638;
    func_0x00010bfcd400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_3;
    ppuVar11 = ppuVar5;
    func_0x00010c0720c0();
    _objc_release(ppuVar5);
    if ((int)ppuVar6 == 0) goto LAB_1063513a8;
    puVar3 = param_1[3];
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar10 = puVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (puVar20 != (undefined *)0x0) {
        puVar10 = puVar20;
        func_0x00010be36bc0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddd40(param_1);
        _objc_release(puVar10);
        _objc_release(puVar20);
        _objc_release(puVar3);
        goto LAB_1063513a8;
      }
      _objc_release(puVar3);
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x21) = 1;
    ppuVar5 = (undefined **)param_1[3];
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar21;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar5);
    ppuVar6 = (undefined **)param_1[3];
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar6;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar6);
    if ((ppuVar5 == ppuVar16) && (ppuVar15 == ppuVar21)) {
      ppuVar16 = param_1;
      func_0x00010beb4d20();
      if ((int)ppuVar16 != 0) {
        puVar3 = param_1[0xd];
        ppuVar16 = ppuVar21;
        func_0x00010be36bc0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(ppuVar16);
        if (((ulong)puVar3 & 1) == 0) goto LAB_106351278;
      }
    }
    else {
      ppuVar15 = param_1 + 0x28;
      _objc_loadWeakRetained();
      ppuVar6 = ppuVar15;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar6;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c27dd80();
      if (ppuVar12 == (undefined **)0x8) {
        _objc_release(ppuVar11);
        _objc_release(ppuVar6);
        _objc_release(ppuVar15);
LAB_106351094:
        iVar18 = (int)param_1[0x1b];
        puVar10 = param_1[3];
        func_0x00010bf5ee40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar10;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar10);
        if (iVar18 != 0) {
          ppuVar15 = ppuVar21;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar15;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_1[0x1b];
          param_1[0x1b] = (undefined *)ppuVar6;
          _objc_release(puVar3);
          _objc_release(ppuVar15);
        }
      }
      else {
        ppuVar12 = param_1 + 0x28;
        _objc_loadWeakRetained();
        ppuVar7 = ppuVar12;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c27dd80();
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        _objc_release(ppuVar6);
        _objc_release(ppuVar15);
        if (ppuVar9 == (undefined **)0x4) goto LAB_106351094;
      }
      puVar10 = param_1[3];
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar21;
      func_0x00010bfceb80(ppuVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010bfecde0();
      _objc_release(ppuVar15);
      _objc_release(puVar10);
      if ((puVar3 != (undefined *)0x7fffffffffffffff) && (param_1[0x1c] < puVar3)) {
        param_1[0x1c] = puVar3;
      }
      if (ppuVar5 != ppuVar16) {
        ppuVar16 = ppuVar21;
        func_0x00010bfce400(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = param_1;
        func_0x00010bf63e80(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        ppuVar16 = param_1 + 0x22;
        _objc_loadWeakRetained(ppuVar16);
        func_0x00010c101800();
        _objc_release(ppuVar16);
        ppuVar16 = param_1 + 0x21;
        _objc_loadWeakRetained(ppuVar16);
        func_0x00010c101840();
        _objc_release(ppuVar16);
        ppuVar16 = ppuVar21;
        func_0x00010bfceb80(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c187400(param_1[3]);
        _objc_release(ppuVar16);
        *(undefined1 *)(param_1 + 4) = 0;
        _objc_release(ppuVar15);
      }
      puVar3 = param_1[3];
      func_0x00010bf5ee40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1874c0();
      _objc_release(puVar3);
      ppuVar16 = param_1;
      func_0x00010beb4d20();
      if (((ulong)ppuVar16 & 1) != 0) {
LAB_106351278:
        func_0x00010be78aa0(param_1);
      }
    }
    puVar19 = param_1[10];
    ppuVar16 = ppuVar21;
    func_0x00010be36bc0(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
    puVar3 = puVar19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar10;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar20;
    func_0x00010c0720c0();
    _objc_release(ppuVar16);
    _objc_release(puVar20);
    _objc_release(puVar10);
    _objc_release(puVar3);
    *(byte *)(param_1 + 1) = (byte)puVar13 ^ 1;
    puVar3 = param_1[0x14];
    if (puVar3 != (undefined *)0x0) {
      ppuVar16 = ppuVar21;
      func_0x00010be36bc0(ppuVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(puVar3);
      _objc_release(ppuVar16);
    }
    _objc_release(puVar19);
LAB_1063513a8:
    param_6 = ppuVar2;
    param_7 = ppuVar4;
    func_0x00010becfb60(param_1);
    ppuVar11 = param_3;
    ppuVar15 = param_4;
    ppuVar16 = ppuVar21;
    func_0x00010bee3bc0(param_1);
  }
LAB_1063513d8:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar21);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar15);
  _objc_retain(ppuVar16);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar1 = ppuVar15;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar2;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126b2340;
  if ((int)ppuVar21 == 0) {
    puVar3 = PTR_PTR_1126c9a08;
    func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar1 == 0) goto LAB_1063520a4;
    puVar3 = PTR_PTR_1126c9a68;
    func_0x00010c06b400(PTR_PTR_1126c9a68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar16;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar1);
    _objc_release(puVar3);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_1063520a4;
  }
  else {
    ppuVar1 = ppuVar15;
    func_0x00010c118b40(ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075040();
    _objc_release(ppuVar1);
    if ((int)puVar3 != 0) {
      ppuVar1 = (undefined **)PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar11;
      func_0x00010c0720c0();
      if ((int)ppuVar2 != 0) {
        _objc_release(ppuVar1);
        goto LAB_106352094;
      }
    }
    puVar10 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if ((int)puVar3 != 0) {
      _objc_release(ppuVar1);
    }
    if (((ulong)ppuVar2 & 1) == 0) goto LAB_1063520a4;
  }
LAB_106352094:
  func_0x00010becfb80(param_3);
LAB_1063520a4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 106351ec0; end: 1063520e3; -[SCOperaPlaylistViewCoordinator _triggerDidStartPlayingDelegateIfNecessaryWithEvent:page:params:itemDataModel:groupDataModel:] */

void FUN_106351ec0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2340;
  if ((int)puVar3 == 0) {
    puVar1 = PTR_PTR_1126c9a08;
    func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar4 == 0) goto LAB_1063520a4;
    puVar1 = PTR_PTR_1126c9a68;
    func_0x00010c06b400(PTR_PTR_1126c9a68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(puVar1);
    if ((uVar5 & 1) != 0) goto LAB_1063520a4;
  }
  else {
    puVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075040(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar1 != 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar2);
      if ((int)uVar4 != 0) {
        _objc_release(puVar2);
        goto LAB_106352094;
      }
    }
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    if ((int)puVar1 != 0) {
      _objc_release(puVar2);
    }
    if ((uVar4 & 1) == 0) goto LAB_1063520a4;
  }
LAB_106352094:
  func_0x00010becfb80(param_1,param_2,param_6,param_7);
LAB_1063520a4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063520e4; end: 10635214f; -[SCOperaPlaylistViewCoordinator _triggerDidStartPlayingDelegateWithItemDataModel:groupDataModel:] */

void FUN_1063520e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x108;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101820();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106352150; end: 1063521bb; -[SCOperaPlaylistViewCoordinator _shouldPrepareMediaUponEvent:item:] */

undefined8 FUN_106352150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2330;
  _objc_retain(param_3);
  func_0x00010c29e020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1063521bc; end: 106352593; -[SCOperaPlaylistViewCoordinator _updateViewModelsIfNecessaryOnEvent:page:playlistItem:] */

void FUN_1063521bc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong uStack_68;
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106352594;
  puStack_78 = &UNK_110841f80;
  lStack_70 = param_1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c2a67e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2340;
  uVar10 = param_4;
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(puVar2);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x28);
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2340;
      if ((uVar9 & 1) == 0) {
        uVar5 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c083240(puVar2,param_2,uVar5);
        _objc_release(uVar5);
        if ((int)puVar2 != 0) {
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 == 0) {
            uVar4 = param_4;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar3 == 0) {
              _objc_release(uVar4);
              goto LAB_1063522a0;
            }
          }
          uVar9 = param_4;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf1f3c0();
          _objc_release(uVar6);
          _objc_release(uVar9);
          if (uVar5 == 0) {
            _objc_release(uVar3);
            uVar5 = uVar4;
          }
          _objc_release(uVar5);
          _objc_release(uVar10);
          if ((uVar7 & 1) == 0) goto LAB_106352548;
        }
        goto LAB_10635253c;
      }
    }
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(puVar2);
      goto LAB_106352548;
    }
    uVar9 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(puVar2);
    if ((uVar5 & 1) != 0) goto LAB_106352548;
  }
  else {
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60(puVar2,param_2,uVar10);
    puVar8 = PTR_PTR_1126b2340;
    if ((int)puVar2 == 0) {
      uVar3 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079440(puVar8,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar10);
      if ((int)puVar8 == 0) goto LAB_106352548;
    }
    else {
LAB_1063522a0:
      _objc_release(uVar10);
    }
  }
LAB_10635253c:
  (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
LAB_106352548:
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106352594; end: 106352693;  */

void FUN_106352594(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x13a) & 1) != 0) {
    if ((*(byte *)(lVar2 + 0x13b) & 1) != 0) goto LAB_106352654;
    *(undefined1 *)(lVar2 + 0x13b) = 1;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar2 = lVar2 + 0x140;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010c29d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c134d60(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_40);
LAB_106352654:
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106352694; end: 1063526cb;  */

void FUN_106352694(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x13b) = 0;
    func_0x00010bee3b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063526cc; end: 106352e97; -[SCOperaPlaylistViewCoordinator _updateViewModelsBasedOnPlaylist] */

undefined1  [16] FUN_1063526cc(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
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
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  long lStack_340;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  if ((*(byte *)(param_2 + 0x23) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x23) = 1;
    _CACurrentMediaTime();
    lVar4 = *(long *)(param_2 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    lVar30 = param_2;
    func_0x00010beace20();
    if (param_3 == 0) {
      lVar4 = *(long *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x28) = 0;
      _objc_release();
      *(undefined1 *)(param_2 + 0x23) = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x18);
      lVar15 = param_3;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bf5ee40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar4;
      func_0x00010bfecde0();
      _objc_release(uVar5);
      _objc_release(lVar4);
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      if (*(char *)(param_2 + 0x13e) == '\x01') {
        puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar7 = (undefined *)0x0;
      }
      lStack_340 = 0;
      lVar33 = 0;
      lVar27 = 0;
      lVar28 = 0;
      do {
        lVar4 = *(long *)(param_2 + 0x18);
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (*(long *)(param_2 + 0xa8) == 0) {
          lVar4 = *(long *)(param_2 + 0x18);
          func_0x00010bf5ee40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar8 == lVar4) {
            lVar4 = lVar8;
            func_0x00010bf5f0a0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_2 + 0xa8);
            *(long *)(param_2 + 0xa8) = lVar4;
            _objc_release(uVar5);
          }
        }
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010bf5ee40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010bdd6f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (*(char *)(param_2 + 0x13c) == '\x01') {
          lVar9 = lVar8;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar10 != 0) {
            lVar29 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar9);
              }
              lVar31 = *(long *)(lVar29 * 8);
              lVar11 = lVar31;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar11 != 0) {
                lVar11 = lVar31;
                func_0x00010be36bc0(lVar31);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6);
                _objc_release(lVar11);
              }
              func_0x00010c25e580();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar31;
              func_0x00010bf52a60();
              lVar2 = lRam0000000000000000;
              while (lVar11 != 0) {
                lVar36 = 0;
                do {
                  if (lRam0000000000000000 != lVar2) {
                    _objc_enumerationMutation(lVar31);
                  }
                  lVar34 = *(long *)(lVar36 * 8);
                  _objc_retain(lVar34);
                  lVar12 = lVar34;
                  func_0x00010bf52a60();
                  lVar3 = lRam0000000000000000;
                  while (lVar12 != 0) {
                    lVar32 = 0;
                    do {
                      if (lRam0000000000000000 != lVar3) {
                        _objc_enumerationMutation(lVar34);
                      }
                      lVar35 = *(long *)(lVar32 * 8);
                      lVar13 = lVar35;
                      func_0x00010be36bc0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (lVar13 != 0) {
                        func_0x00010be36bc0(lVar35);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar6);
                        _objc_release(lVar35);
                      }
                      lVar32 = lVar32 + 1;
                    } while (lVar12 != lVar32);
                    lVar12 = lVar34;
                    func_0x00010bf52a60();
                  }
                  _objc_release(lVar34);
                  lVar36 = lVar36 + 1;
                } while (lVar36 != lVar11);
                lVar11 = lVar31;
                func_0x00010bf52a60();
              }
              _objc_release(lVar31);
              lVar29 = lVar29 + 1;
            } while (lVar29 != lVar10);
            lVar10 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
        }
        if (lStack_340 == 0) {
          _objc_retain(lVar4);
          lStack_340 = lVar4;
        }
        if (lVar30 == lVar14) {
          lVar30 = lVar4;
          if (*(char *)(param_2 + 8) == '\x01') {
            lVar10 = lVar4;
            func_0x00010bf0cb60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 == 0) goto LAB_106352b98;
            func_0x00010bf0cb60();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
LAB_106352b98:
            _objc_retain(lVar4);
          }
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          *(long *)(param_2 + 0x28) = lVar30;
          _objc_release(uVar5);
        }
        func_0x00010bed5a40(param_2);
        _objc_release(lVar28);
        _objc_release(lVar27);
        lVar30 = param_2;
        func_0x00010be64000();
        lVar33 = lVar33 + 1;
        lVar27 = lVar8;
        lVar28 = lVar4;
      } while (lVar33 != param_3);
      func_0x00010bed5a40(param_2);
      lVar14 = *(long *)(param_2 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar14;
      func_0x00010bf529e0();
      if (lVar30 == 2) {
        lVar30 = *(long *)(param_2 + 0x10);
        _objc_release(lVar14);
        param_3 = lVar15;
        if (lVar30 == 1) {
          func_0x00010c1e25c0(lStack_340);
          param_3 = lVar15;
        }
      }
      else {
        _objc_release(lVar14);
        param_3 = lVar15;
      }
      if (puVar7 != (undefined *)0x0) {
        func_0x00010bee3c60(param_2);
      }
      if (*(char *)(param_2 + 0x13c) == '\x01') {
        func_0x00010bddf8e0(param_2);
      }
      lVar15 = *(long *)(param_2 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar15;
      func_0x00010bf529e0();
      _objc_release(lVar15);
      if (lVar22 != lVar30) {
        lVar22 = param_2 + 0x90;
        _objc_loadWeakRetained(lVar22);
        puVar16 = PTR_PTR_1126c9a10;
        func_0x00010bfcf920(PTR_PTR_1126c9a10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb780(lVar22);
        _objc_release(puVar16);
        _objc_release(lVar22);
      }
      lVar22 = param_2 + 0x90;
      _objc_loadWeakRetained();
      puVar17 = PTR_PTR_1126c9a10;
      func_0x00010c29dbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126c9898;
      func_0x00010c250a00();
      _objc_retainAutoreleasedReturnValue();
      dVar37 = param_1 * 1000.0;
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar37);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR_PTR_1126c9898;
      func_0x00010c2299a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _CACurrentMediaTime();
      func_0x00010c0df720((dVar37 - param_1) * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(lVar22);
      _objc_release(puVar21);
      _objc_release(puVar16);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(lVar22);
      *(undefined1 *)(param_2 + 0x23) = 0;
      func_0x00010be571a0(param_2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lStack_340);
      _objc_release(lVar8);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    auVar38._8_8_ = param_3;
    auVar38._0_8_ = lVar4;
    return auVar38;
  }
  ___stack_chk_fail();
  while( true ) {
    lVar22 = *(long *)(lVar4 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar22;
    func_0x00010bf529e0();
    _objc_release(lVar22);
    if (lVar25 == 0) {
      lVar25 = 0;
      lVar22 = 0;
      goto LAB_10635303c;
    }
    lVar25 = *(long *)(lVar4 + 0x18);
    func_0x00010bfcea60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar25 == 0) {
      uVar23 = *(undefined8 *)(lVar4 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(lVar4 + 0xd8);
      *(undefined8 *)(lVar4 + 0xd8) = uVar24;
      _objc_release(uVar26);
      _objc_release(uVar5);
      _objc_release(uVar23);
    }
    lVar15 = lVar4;
    func_0x00010be17d00();
    lVar30 = lVar4;
    func_0x00010be47020();
    lVar25 = *(long *)(lVar4 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    func_0x00010bf5ee40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar25;
    func_0x00010bfecde0();
    _objc_release(uVar5);
    _objc_release(lVar25);
    lVar22 = 0;
    if ((lVar15 == -1) || (lVar30 == -1)) break;
    lVar25 = 0;
    if (lVar14 == 0x7fffffffffffffff) goto LAB_10635303c;
    if (lVar30 < lVar15) {
      lVar22 = *(long *)(lVar4 + 0x18);
      func_0x00010bfcf800(lVar22);
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar22;
      func_0x00010bf529e0();
      lVar30 = lVar25 + lVar30;
      _objc_release(lVar22);
    }
    lVar25 = (lVar30 - lVar15) + 1;
    lVar30 = lVar4;
    func_0x00010be94ac0();
    lVar22 = lVar15;
    if ((int)lVar30 != 0) {
LAB_10635303c:
      auVar39._8_8_ = lVar25;
      auVar39._0_8_ = lVar22;
      return auVar39;
    }
  }
  lVar25 = 0;
  goto LAB_10635303c;
}



/* Entry: 106352e98; end: 106353057; -[SCOperaPlaylistViewCoordinator _setupGroupsToBuild] */

undefined1  [16] FUN_106352e98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  while( true ) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar2 = 0;
      lVar1 = 0;
      goto LAB_10635303c;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bfcea60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = uVar4;
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar3);
    }
    lVar5 = param_1;
    func_0x00010be17d00();
    lVar6 = param_1;
    func_0x00010be47020();
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5ee40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bfecde0();
    _objc_release(uVar7);
    _objc_release(lVar2);
    lVar1 = 0;
    if ((lVar5 == -1) || (lVar6 == -1)) break;
    lVar2 = 0;
    if (lVar8 == 0x7fffffffffffffff) goto LAB_10635303c;
    if (lVar6 < lVar5) {
      lVar1 = *(long *)(param_1 + 0x18);
      func_0x00010bfcf800(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf529e0();
      lVar6 = lVar2 + lVar6;
      _objc_release(lVar1);
    }
    lVar2 = (lVar6 - lVar5) + 1;
    lVar6 = param_1;
    func_0x00010be94ac0();
    lVar1 = lVar5;
    if ((int)lVar6 != 0) {
LAB_10635303c:
      auVar10._8_8_ = lVar2;
      auVar10._0_8_ = lVar1;
      return auVar10;
    }
  }
  lVar2 = 0;
  goto LAB_10635303c;
}



/* Entry: 106353058; end: 1063531bb; -[SCOperaPlaylistViewCoordinator _resolveGroupsInRange:mediaLoadRange:] */

undefined8
FUN_106353058(ulong param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
             ulong param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_4 == 0) {
    return 1;
  }
  while( true ) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be94be0(param_1,param_2,lVar2,0);
    if ((param_5 <= param_3) && (param_3 - param_5 < param_6)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf5ee40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4de40(param_1,param_2,uVar3,0);
      _objc_release(uVar3);
    }
    lVar1 = lVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar4 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = lVar2;
    func_0x00010be36bc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,lVar2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3 + 1;
    param_3 = param_1;
    func_0x00010be64000(param_1,param_2,lVar1);
    _objc_release(lVar2);
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      return 1;
    }
  }
  func_0x00010c12ca40(*(undefined8 *)(param_1 + 0x18),param_2,lVar2);
  _objc_release(lVar2);
  return 0;
}



/* Entry: 1063531bc; end: 1063532db; -[SCOperaPlaylistViewCoordinator _updateConnectionsForPreviousGroup:previousGroupViewModel:currentGroup:currentGroupViewModel:] */

void FUN_1063531bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    uVar1 = param_3;
    func_0x00010c264f20();
    if ((int)uVar1 == 0) {
      func_0x00010c1cd3a0(param_4,param_2,0);
      goto LAB_1063532ac;
    }
    puVar2 = PTR_PTR_1126c9ba0;
    func_0x00010bf84be0(PTR_PTR_1126c9ba0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd3a0(param_4,param_2,puVar2);
LAB_106353284:
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1cd3a0(param_4,param_2,param_6);
    lVar3 = param_4;
    if (param_4 == 0) {
      uVar1 = param_5;
      func_0x00010c264f20();
      if ((int)uVar1 != 0) {
        puVar2 = PTR_PTR_1126c9ba0;
        func_0x00010bf84be0(PTR_PTR_1126c9ba0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e25c0(param_6,param_2,puVar2);
        goto LAB_106353284;
      }
      lVar3 = 0;
    }
    func_0x00010c1e25c0(param_6,param_2,lVar3);
  }
LAB_1063532ac:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063532dc; end: 106353b8f; -[SCOperaPlaylistViewCoordinator _buildViewModelsForGroup:isCurrentViewingGroup:preloadAccumulator:] */

void FUN_1063532dc(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined *param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_190;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    uStack_1a8 = 0;
    goto LAB_106353b24;
  }
  func_0x00010c1c0160(param_3);
  uVar2 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5f0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_190;
  func_0x00010bfecde0();
  _objc_release(uVar2);
  if (uVar3 == 0x7fffffffffffffff) {
    uVar2 = param_3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar5 = param_3;
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uStack_190;
      func_0x00010bfecde0();
      bVar1 = uVar6 != 0x7fffffffffffffff;
      _objc_release(uVar12);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar7 = param_1 + 0x148;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf91ec0();
    _objc_release(lVar7);
    if (((int)lVar8 != 0) && (bVar1)) {
      uVar2 = param_3;
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c25e560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_190);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfecde0();
      _objc_release(uVar2);
      uVar2 = uVar4;
      uStack_190 = uVar5;
      if (param_4 != 0) goto LAB_106353430;
LAB_106353528:
      uVar12 = uVar2;
      if (param_5 != (undefined *)0x0) goto LAB_10635346c;
LAB_106353530:
      puStack_1a0 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106353548;
    }
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106350174;
    uStack_88 = 0x106350184;
    uStack_80 = 0;
    if (bVar1) {
      uVar2 = param_3;
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_106353b90;
      puStack_b8 = &UNK_11091cea8;
      puStack_b0 = &uStack_a8;
      func_0x00010bee9b40(param_1);
      _objc_release(uVar2);
    }
    func_0x00010c1c0160(param_3);
    uStack_1a8 = puStack_a0[5];
    _objc_retain(uStack_1a8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  else {
    uVar4 = uVar3;
    uVar2 = uVar3;
    if (param_4 == 0) goto LAB_106353528;
LAB_106353430:
    lVar7 = param_1;
    func_0x00010be65420();
    uVar12 = uVar4 - lVar7 & ((long)(uVar4 - lVar7) >> 0x3f ^ 0xffffffffffffffffU);
    lVar7 = param_1;
    func_0x00010be65440();
    uVar5 = uStack_190;
    func_0x00010bf529e0();
    uVar2 = lVar7 + uVar4;
    if (uVar5 - 1 <= lVar7 + uVar4) {
      uVar2 = uVar5 - 1;
    }
    if (param_5 == (undefined *)0x0) goto LAB_106353530;
LAB_10635346c:
    _objc_retain(param_5);
    puStack_1a0 = param_5;
LAB_106353548:
    if ((long)uVar2 < (long)uVar12) {
      uStack_1a8 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uStack_1a8 = 0;
      puVar11 = (undefined *)0x0;
      uVar4 = uVar12;
      do {
        uVar5 = uStack_190;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uStack_a8 = 0;
        uStack_98 = 0x3032000000;
        pcStack_90 = FUN_106350174;
        uStack_88 = 0x106350184;
        uStack_80 = 0;
        uStack_100 = 0;
        uStack_f0 = 0x3032000000;
        pcStack_e8 = FUN_106350174;
        uStack_e0 = 0x106350184;
        uStack_d8 = 0;
        puStack_f8 = &uStack_100;
        puStack_a0 = &uStack_a8;
        func_0x00010bee9b40(param_1);
        puVar14 = puVar11;
        if (puStack_a0[5] != 0) {
          uVar6 = param_3;
          func_0x00010bf5f0a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar5;
          func_0x00010c071ae0();
          _objc_release(uVar6);
          if ((int)uVar9 != 0) {
            uVar13 = puStack_a0[5];
            _objc_retain(uVar13);
            _objc_release(uStack_1a8);
            uStack_1a8 = uVar13;
          }
          func_0x00010c0d9820();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = (undefined *)puStack_a0[5];
          if (puVar14 == puVar10) {
            func_0x00010c1125e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar14);
            if (puVar10 != puVar11) goto LAB_106353738;
          }
          else {
            _objc_release(puVar14);
LAB_106353738:
            if ((uVar4 == 0) && (uVar6 = param_3, func_0x00010bf14f80(), (uVar6 & 1) == 0)) {
              uVar13 = puStack_a0[5];
            }
            else {
              puVar14 = puVar11;
              func_0x00010c0d9820(puVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1e24e0();
              _objc_release(puVar14);
              uVar13 = puStack_a0[5];
              func_0x00010c1125e0(uVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1cd2c0();
              _objc_release(uVar13);
              func_0x00010c1cd2c0(puVar11);
              uVar13 = puStack_a0[5];
            }
            func_0x00010c1e24e0(uVar13);
          }
          puVar14 = (undefined *)puStack_a0[5];
          _objc_retain(puVar14);
          _objc_release(puVar11);
          func_0x00010bdc8fe0(param_1);
        }
        __Block_object_dispose(&uStack_100,8);
        _objc_release(uStack_d8);
        __Block_object_dispose(&uStack_a8,8);
        _objc_release(uStack_80);
        _objc_release(uVar5);
        uVar4 = uVar4 + 1;
        puVar11 = puVar14;
      } while (uVar2 + 1 != uVar4);
    }
    uVar4 = uStack_190;
    func_0x00010bf529e0();
    if ((uVar2 == uVar4 - 1) && (uVar4 = param_3, func_0x00010bfb6280(), (uVar4 & 1) == 0)) {
      puVar11 = puVar14;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c9ba0;
      func_0x00010bf84be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      if (puVar11 != puVar10) {
        puVar11 = PTR_PTR_1126c9ba0;
        func_0x00010bf84be0(PTR_PTR_1126c9ba0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cd2c0(puVar14);
        _objc_release(puVar11);
      }
    }
    else {
      puVar11 = puVar14;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = puVar14;
        func_0x00010c0d9820(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e24e0();
        _objc_release(puVar11);
        func_0x00010c1cd2c0(puVar14);
      }
    }
    if (uVar3 == 0x7fffffffffffffff) {
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_106350174;
      uStack_88 = 0x106350184;
      uStack_80 = 0;
      uVar3 = param_3;
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee9b40(param_1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar12 == 0) {
        puStack_f8 = &uStack_100;
        uStack_100 = 0;
        uStack_f0 = 0x3032000000;
        pcStack_e8 = FUN_106350174;
        uStack_e0 = 0x106350184;
        uStack_d8 = 0;
        uVar3 = uStack_190;
        func_0x00010bfb1920(uStack_190);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee9b40(param_1);
        _objc_release(uVar3);
        func_0x00010c1e24e0(puStack_f8[5]);
        __Block_object_dispose(&uStack_100,8);
        _objc_release(uStack_d8);
      }
      uVar3 = uStack_190;
      func_0x00010bf529e0();
      if (uVar2 == uVar3 - 1) {
        func_0x00010c1cd2c0(puVar14);
      }
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
    }
    if (param_5 == (undefined *)0x0) {
      func_0x00010bee3c60(param_1);
    }
    func_0x00010c1c0160(param_3);
    func_0x00010be54820(param_1);
    _objc_release(puVar14);
    _objc_release(puStack_1a0);
  }
  _objc_release(uStack_190);
LAB_106353b24:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_1a8);
  return;
}



/* Entry: 106353b90; end: 106353bc7;  */

void FUN_106353b90(long param_1,undefined8 param_2)

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



/* Entry: 106353bc8; end: 106353c3b;  */

void FUN_106353bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106353c3c; end: 106353cab;  */

void FUN_106353c3c(long param_1,undefined8 param_2)

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



/* Entry: 106353cac; end: 1063540ff; -[SCOperaPlaylistViewCoordinator _viewModelsForPlaylistItem:completion:] */

void FUN_106353cac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
    goto LAB_1063540b8;
  }
  uVar5 = *(ulong *)(param_1 + 0x50);
  lVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = uVar5;
  func_0x00010bf529e0();
  uVar7 = uVar5;
  if (uVar2 == 0) {
LAB_106353fb8:
    _objc_initWeak(auStack_58,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f1a20(uVar8);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x58);
    lVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if (iVar6 != 0) {
      lVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be88fe0(param_1);
      _objc_release(lVar1);
      if (*(char *)(param_1 + 0x13c) == '\x01') {
        uVar7 = *(ulong *)(param_1 + 0x50);
        lVar1 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(lVar1);
      }
    }
    uVar2 = uVar7;
    func_0x00010bf529e0();
    if (uVar2 == 0) goto LAB_106353fb8;
    uVar2 = uVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x13c) == '\x01') goto LAB_106354074;
    }
    else {
      uVar5 = uVar2;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if (uVar3 == 0) {
LAB_106354074:
        (**(code **)(param_4 + 0x10))(param_4,0,0);
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        uVar5 = uVar2;
        func_0x00010c0f0be0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar5);
        uVar5 = uVar7;
        func_0x00010bf529e0();
        if (1 < uVar5) {
          uVar5 = uVar7;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar3);
          if (uVar4 != 0) {
            uVar8 = *(undefined8 *)(param_1 + 0x40);
            uVar3 = uVar5;
            func_0x00010c0f0be0(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar8);
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
          _objc_release(uVar5);
        }
        uVar5 = uVar7;
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x00010bf529e0();
        if (uVar3 < 2) {
          (**(code **)(param_4 + 0x10))(param_4,uVar5,0);
        }
        else {
          uVar3 = uVar7;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_4 + 0x10))(param_4,uVar5,uVar3);
          _objc_release(uVar3);
        }
        _objc_release(uVar5);
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar7);
LAB_1063540b8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106354100; end: 106354153;  */

void FUN_106354100(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee39a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106354154; end: 10635485b; -[SCOperaPlaylistViewCoordinator _updateViewModelWithPlaylistItem:pageLayers:completion:] */

void FUN_106354154(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **unaff_x25;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  code *pcStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [8];
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2c0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
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
  uVar12 = param_4;
  func_0x00010c0f1980();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010bf0d180();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar2 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar18 = puVar1;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar18 == (undefined *)0x0) {
LAB_1063542a0:
    puVar18 = (undefined *)0x0;
    puStack_1c0 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126c9e40;
    _objc_opt_new();
    puVar3 = puVar18;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar18);
    if (puStack_1c0 == (undefined *)0x0) goto LAB_1063542a0;
    puVar18 = PTR_PTR_1126c9ba0;
    func_0x00010c29db20();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c9e40;
    _objc_opt_new();
    puVar17 = puVar3;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar17;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar3);
    if (puStack_1b8 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c9ba0;
      func_0x00010c29db20();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106354334;
    }
  }
  puVar3 = (undefined *)0x0;
  puStack_1b8 = (undefined *)0x0;
LAB_106354334:
  func_0x00010c16b040(puVar18);
  func_0x00010c1d8fe0(puVar3);
  if (puVar18 != (undefined *)0x0) {
    puVar9 = param_1[8];
    puVar17 = puVar18;
    func_0x00010c0f0be0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar17;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar17);
  }
  if (puVar3 != (undefined *)0x0) {
    puVar9 = param_1[8];
    puVar17 = puVar3;
    func_0x00010c0f0be0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar17;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar17);
  }
  func_0x00010be56d80(param_1);
  func_0x00010be56d80(param_1);
  lVar15 = param_3;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar15;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar4 != 0) {
    _dispatch_group_create();
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar4 = param_3;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar16 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          ppuVar10 = *(undefined ***)(lStack_138 + lVar16 * 8);
          ppuVar13 = param_1;
          func_0x00010c0ea180();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar13;
          func_0x00010bf91ec0();
          _objc_release(ppuVar13);
          if ((int)ppuVar5 == 0) {
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _dispatch_group_enter(lVar15);
            _objc_initWeak(auStack_148,param_1);
            puVar11 = param_1[6];
            _objc_copyWeak(auStack_150,auStack_148);
            _objc_retain(puVar18);
            _objc_retain(ppuVar10);
            _objc_retain(puVar17);
            _objc_retain(lVar15);
            func_0x00010c0f1a20(puVar11);
            _objc_release(lVar15);
            _objc_release(puVar17);
            _objc_release(ppuVar10);
            _objc_release(puVar18);
            _objc_destroyWeak(auStack_150);
            _objc_destroyWeak(auStack_148);
          }
          else {
            ppuVar10 = param_1;
            func_0x00010bee9b80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar10;
            func_0x00010bf529e0();
            if (ppuVar13 != (undefined **)0x0) {
              ppuVar13 = (undefined **)0x0;
              do {
                ppuVar5 = ppuVar10;
                func_0x00010c0dfd40(ppuVar10);
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 == (undefined **)0x0) {
                  func_0x00010c1e24e0(ppuVar5);
                }
                else {
                  unaff_x25 = ppuVar10;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1e24e0(ppuVar5);
                  _objc_release(unaff_x25);
                }
                ppuVar6 = ppuVar10;
                func_0x00010bf529e0();
                if (ppuVar13 < (undefined **)((long)ppuVar6 + -1)) {
                  unaff_x25 = ppuVar10;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1cd2c0(ppuVar5);
                  _objc_release(unaff_x25);
                }
                else {
                  func_0x00010c1cd2c0(ppuVar5);
                }
                _objc_release(ppuVar5);
                ppuVar5 = ppuVar10;
                func_0x00010bf529e0();
                ppuVar13 = (undefined **)((long)ppuVar13 + 1);
              } while (ppuVar13 < ppuVar5);
            }
            ppuVar13 = ppuVar10;
            func_0x00010bf51e00(ppuVar10);
            func_0x00010befa120(puVar17);
            _objc_release(ppuVar13);
          }
          _objc_release(ppuVar10);
          lVar16 = lVar16 + 1;
        } while (lVar16 != lVar8);
        lVar8 = lVar4;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar4);
    func_0x00010c21a340(puVar18);
    _dispatch_group_wait(lVar15,0xffffffffffffffff);
    _objc_release(puVar17);
    _objc_release(lVar15);
  }
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1[10];
  lVar15 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(lVar15);
  _objc_release(puVar17);
  puVar17 = puVar18;
  (**(code **)(param_5 + 0x10))(param_5,puVar18,puVar3);
  _objc_release(puVar3);
  _objc_release(puStack_1b8);
  _objc_release(puVar18);
  _objc_release(puStack_1c0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar17;
  _objc_retain(puVar17);
  lVar15 = param_3 + 0x40;
  _objc_loadWeakRetained();
  lVar4 = lVar15;
  puVar2 = puVar17;
  func_0x00010be5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(lVar15);
  if (lVar4 != 0) {
    uVar12 = *(undefined8 *)(param_3 + 0x30);
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar18;
    func_0x00010befa120(uVar12);
    _objc_release(puVar18);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x38));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar15 = *plStack_370;
    unaff_x25 = &puStack_3c0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_370 != lVar15) {
          _objc_enumerationMutation(puVar2);
        }
        uVar12 = *(undefined8 *)(lStack_378 + (long)puVar17 * 8);
        _objc_initWeak(auStack_388,lVar4);
        uVar14 = *(undefined8 *)(lVar4 + 0x30);
        puStack_3c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3b8 = 0xc2000000;
        pcStack_3b0 = FUN_106354b30;
        puStack_3a8 = &UNK_11091cf68;
        puVar1 = auStack_388;
        _objc_copyWeak(auStack_390,puVar1);
        uStack_3a0 = uVar12;
        _objc_retain(puVar18);
        puStack_398 = puVar18;
        func_0x00010c0f1a20(uVar14);
        _objc_release(puStack_398);
        _objc_destroyWeak(auStack_390);
        _objc_destroyWeak(auStack_388);
        puVar17 = puVar17 + 1;
      } while (puVar3 != puVar17);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar3 = puVar18;
  func_0x00010bf51e00();
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c0) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x25 + 6);
    _objc_destroyWeak(auStack_388);
    __Unwind_Resume();
    _objc_retain(puVar1);
    puVar18 = puVar2 + 0x30;
    _objc_loadWeakRetained();
    puVar3 = puVar18;
    func_0x00010be5c7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar18);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(puVar2 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10635485c; end: 106354943;  */

void FUN_10635485c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **unaff_x25;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_c0;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain(param_2);
  lVar9 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  puVar4 = param_2;
  func_0x00010be5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar9);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010befa120(uVar7);
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar9 = *plStack_170;
    unaff_x25 = &puStack_1c0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar9) {
          _objc_enumerationMutation(puVar4);
        }
        uVar7 = *(undefined8 *)(lStack_178 + (long)puVar10 * 8);
        _objc_initWeak(auStack_188,lVar1);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_106354b30;
        puStack_1a8 = &UNK_11091cf68;
        puVar5 = auStack_188;
        _objc_copyWeak(auStack_190,puVar5);
        uStack_1a0 = uVar7;
        _objc_retain(puVar2);
        puStack_198 = puVar2;
        func_0x00010c0f1a20(uVar8);
        _objc_release(puStack_198);
        _objc_destroyWeak(auStack_190);
        _objc_destroyWeak(auStack_188);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 6);
  _objc_destroyWeak(auStack_188);
  __Unwind_Resume();
  _objc_retain(puVar5);
  puVar2 = puVar4 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010be5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010befa120(*(undefined8 *)(puVar4 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106354944; end: 106354b2f; -[SCOperaPlaylistViewCoordinator _viewModelsForSubItemArray:] */

void FUN_106354944(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **unaff_x25;
  long lVar6;
  long lVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_130;
    unaff_x25 = &puStack_180;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        _objc_initWeak(auStack_148,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_178 = 0xc2000000;
        pcStack_170 = FUN_106354b30;
        puStack_168 = &UNK_11091cf68;
        param_2 = auStack_148;
        _objc_copyWeak(auStack_150,param_2);
        uStack_160 = uVar4;
        _objc_retain(puVar1);
        puStack_158 = puVar1;
        func_0x00010c0f1a20(uVar5);
        _objc_release(puStack_158);
        _objc_destroyWeak(auStack_150);
        _objc_destroyWeak(auStack_148);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 6);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar2 = param_3 + 0x30;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010be5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  if (lVar6 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106354b30; end: 106354bab;  */

void FUN_106354b30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106354bac; end: 106354fcb; -[SCOperaPlaylistViewCoordinator _makeViewModelWithPageLayers:viewModel:item:] */

void FUN_106354bac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_106354fa0;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f1980(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf0d180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar4 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar9 = puVar3;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar9 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c9e40;
    _objc_opt_new();
    puVar5 = puVar9;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar9);
    if (puVar10 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126c9ba0;
      func_0x00010c29db20(PTR_PTR_1126c9ba0,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar5 = puVar4;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined *)0x0) {
LAB_106354d88:
    func_0x00010c16b040(puVar9,param_2,0);
  }
  else {
    puVar5 = PTR_PTR_1126c9e40;
    _objc_opt_new();
    puVar6 = puVar5;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar7 == (undefined *)0x0) goto LAB_106354d88;
    puVar5 = PTR_PTR_1126c9ba0;
    func_0x00010c29db20(PTR_PTR_1126c9ba0,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b040(puVar9,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
  puVar5 = puVar9;
  func_0x00010bf0cb60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fe0();
  _objc_release(puVar5);
  func_0x00010c1cd2c0(puVar9,param_2,param_4);
  func_0x00010c1e24e0(puVar9,param_2,param_4);
  _objc_release(param_4);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar6 = puVar9;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a120(puVar5,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar11,param_2,puVar5,uVar8);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = puVar9;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (puVar6 != (undefined *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    puVar5 = puVar9;
    func_0x00010c0f0be0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8,param_2,param_5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar5 = puVar9;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (puVar7 != (undefined *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    puVar5 = puVar9;
    func_0x00010bf0cb60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8,param_2,param_5,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_106354fa0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106354fcc; end: 1063551df; -[SCOperaPlaylistViewCoordinator _playlistBasedOnGroupDataModels:initialGroupDataModel:] */

void FUN_106354fcc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar3 = param_1;
        func_0x00010be24840(param_1,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010befa120(puVar1,param_2,puVar3);
          func_0x00010c071ae0(uVar6,param_2,param_4);
          if ((int)uVar6 != 0) {
            _objc_retain(puVar3);
            _objc_release(puVar5);
            puVar5 = puVar3;
          }
        }
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126c9e48;
    _objc_alloc(PTR_PTR_1126c9e48);
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c0070c0(puVar3,param_2,puVar5,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = *(undefined **)(param_3 + 0x30);
    func_0x00010c1014a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_3 + 0x38);
    puVar1 = puVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar4 == 0) {
      _objc_retain(puVar5);
      puVar3 = puVar5;
    }
    else {
      puVar3 = *(undefined **)(param_3 + 0x38);
      puVar1 = puVar5;
      func_0x00010be36bc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063551e0; end: 1063552a7; -[SCOperaPlaylistViewCoordinator _groupForDataModel:] */

void FUN_1063551e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1014a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x38);
  uVar3 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    _objc_retain(uVar1);
    uVar3 = uVar1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = uVar1;
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063552a8; end: 1063553fb; -[SCOperaPlaylistViewCoordinator asyncUpdatePlaylistItemGroupForID:completion:] */

void FUN_1063552a8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,0,puVar4);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x88));
    if (lVar3 != 0) goto LAB_1063553cc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1063553fc;
    puStack_58 = &UNK_11084aaa8;
    lStack_50 = param_1;
    _objc_retain(param_4);
    puStack_48 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_70);
    puVar4 = puStack_48;
  }
  _objc_release(puVar4);
LAB_1063553cc:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063553fc; end: 1063554f7;  */

void FUN_1063553fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20) + 0x140;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c134d60(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1063554f8; end: 106355547;  */

void FUN_1063554f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed8fe0(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106355548; end: 106355787; -[SCOperaPlaylistViewCoordinator _updateGroupsBasedOnGroupIdsToUpdate] */

void FUN_106355548(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        func_0x00010c12d360(*(undefined8 *)(param_1 + 0x88),param_2,uVar9);
        lVar4 = *(long *)(param_1 + 0x38);
        func_0x00010c0e00e0(lVar4,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010be94be0(param_1,param_2,lVar4,1);
          lVar5 = lVar4;
          func_0x00010bf5f0a0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            lVar5 = lVar4;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bf529e0();
            _objc_release(lVar5);
            if (lVar6 != 0) {
              lVar5 = lVar4;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1874c0(lVar4,param_2,lVar6);
              _objc_release(lVar6);
              _objc_release(lVar5);
              if (lVar4 == lVar1) {
                *(undefined1 *)(param_1 + 8) = 0;
                lVar5 = param_1;
                func_0x00010be63940(param_1,param_2,lVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c187400(*(undefined8 *)(param_1 + 0x18),param_2,lVar5);
                goto LAB_10635564c;
              }
            }
          }
          else {
LAB_10635564c:
            _objc_release(lVar5);
          }
        }
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = lVar8;
  lVar2 = lVar1;
  func_0x00010bedc7a0(param_1);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  _objc_retain(lVar2);
  lVar8 = *(long *)(lVar1 + 0x28);
  _objc_retain(lVar8);
  func_0x00010bee3b00(lVar1);
  if (lVar3 == 0) goto LAB_1063559c0;
  lVar10 = lVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010bf4b900();
  if ((int)lVar4 == 0) {
    lVar4 = lVar3;
    func_0x00010bfceb80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25e560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar10);
    if (lVar5 != 0) goto LAB_1063559c0;
    lVar4 = *(long *)(lVar1 + 0x50);
    lVar10 = lVar3;
    func_0x00010be36bc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar10);
    lVar10 = lVar11;
    if (lVar8 != 0) {
      lVar4 = lVar11;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 == lVar4) {
        func_0x00010bf0cb60(lVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
      }
    }
    lVar11 = *(long *)(lVar1 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == lVar2) {
      uVar9 = *(undefined8 *)(lVar1 + 0x28);
LAB_10635594c:
      func_0x00010c1cd2c0(lVar10,param_2,uVar9);
    }
    else {
      lVar11 = lVar2;
      func_0x00010bfb6280();
      func_0x00010c187400(*(undefined8 *)(lVar1 + 0x18),param_2,lVar2);
      if ((int)lVar11 != 0) {
        func_0x00010c1cd3a0(lVar10,param_2,*(undefined8 *)(lVar1 + 0x28));
        uVar9 = 0;
        goto LAB_10635594c;
      }
      puVar7 = PTR_PTR_1126c9ba0;
      func_0x00010bf84be0(PTR_PTR_1126c9ba0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd2c0(lVar10,param_2,puVar7);
      _objc_release(puVar7);
    }
    lVar11 = lVar1 + 0x140;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c2bf1c0();
    _objc_release(lVar11);
    func_0x00010be8cca0(lVar1,param_2,lVar10,lVar3,&PTR____CFConstantStringClassReference_110e4bc58)
    ;
  }
  else {
    _objc_release(lVar11);
  }
  _objc_release(lVar10);
LAB_1063559c0:
  _objc_release(lVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106355788; end: 1063559eb; -[SCOperaPlaylistViewCoordinator _updateOperaViewIfNecessaryWithRemovedItem:group:] */

void FUN_106355788(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar6);
  func_0x00010bee3b00(param_1);
  if (param_3 == 0) goto LAB_1063559c0;
  lVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf4b900();
  if ((int)lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010bfceb80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c25e560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_1063559c0;
    lVar7 = *(long *)(param_1 + 0x50);
    lVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar7,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar1);
    lVar1 = lVar3;
    if (lVar6 != 0) {
      lVar7 = lVar3;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == lVar7) {
        func_0x00010bf0cb60(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
    }
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == param_4) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
LAB_10635594c:
      func_0x00010c1cd2c0(lVar1,param_2,uVar5);
    }
    else {
      lVar3 = param_4;
      func_0x00010bfb6280();
      func_0x00010c187400(*(undefined8 *)(param_1 + 0x18),param_2,param_4);
      if ((int)lVar3 != 0) {
        func_0x00010c1cd3a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
        uVar5 = 0;
        goto LAB_10635594c;
      }
      puVar4 = PTR_PTR_1126c9ba0;
      func_0x00010bf84be0(PTR_PTR_1126c9ba0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd2c0(lVar1,param_2,puVar4);
      _objc_release(puVar4);
    }
    lVar3 = param_1 + 0x140;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2bf1c0();
    _objc_release(lVar3);
    func_0x00010be8cca0(param_1,param_2,lVar1,param_3,
                        &PTR____CFConstantStringClassReference_110e4bc58);
  }
  else {
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_1063559c0:
  _objc_release(lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


