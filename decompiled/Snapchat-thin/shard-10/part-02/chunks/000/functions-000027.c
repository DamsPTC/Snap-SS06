/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a21994; end: 107a21997; -[SCStoryManagementSnapViewersActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_107a21994(void)

{
  return;
}



/* Entry: 107a21998; end: 107a2199b; -[SCStoryManagementSnapViewersActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_107a21998(void)

{
  return;
}



/* Entry: 107a2199c; end: 107a219a3; -[SCStoryManagementSnapViewersActionHandler operaEventAnnouncer] */

undefined8 FUN_107a2199c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a219a4; end: 107a219d3; -[SCStoryManagementSnapViewersActionHandler setOperaEventAnnouncer:] */

void FUN_107a219a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a219d4; end: 107a21a4f; -[SCStoryManagementSnapViewersActionHandler .cxx_destruct] */

void FUN_107a219d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a21a50; end: 107a21b67; -[SCStoryManagementSnapchattersSectionDataProvider initWithSectionIdentifier:imageDownloader:customStoriesDataFetching:avatarFactory:] */

undefined1 *
FUN_107a21a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9548;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a21b68; end: 107a21b73; +[SCStoryManagementSnapchattersSectionDataProvider announcerIdentifier] */

undefined ** FUN_107a21b68(void)

{
  return &PTR____CFConstantStringClassReference_110ea9e18;
}



/* Entry: 107a21b74; end: 107a21b7b; -[SCStoryManagementSnapchattersSectionDataProvider addListener:] */

void FUN_107a21b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a21b7c; end: 107a21b83; -[SCStoryManagementSnapchattersSectionDataProvider removeListener:] */

void FUN_107a21b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a21b84; end: 107a21cbf; -[SCStoryManagementSnapchattersSectionDataProvider setSectionDataModel:] */

void FUN_107a21b84(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5ef0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107a21cc0; end: 107a21cf3;  */

void FUN_107a21cc0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a21cf4; end: 107a21cfb; -[SCStoryManagementSnapchattersSectionDataProvider dataLoadingStatus] */

undefined8 FUN_107a21cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a21cfc; end: 107a21d03; -[SCStoryManagementSnapchattersSectionDataProvider numberOfItemsInSection:] */

void FUN_107a21cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107a21d04; end: 107a21d57; -[SCStoryManagementSnapchattersSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107a21d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a21d58;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a21d58; end: 107a21d87;  */

void FUN_107a21d58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 107a21d88; end: 107a21e3f; -[SCStoryManagementSnapchattersSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_107a21d88(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_a0,puVar1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107a21f6c;
    puStack_b0 = &UNK_110845ae0;
    puVar5 = auStack_a0;
    _objc_copyWeak(auStack_a8,puVar5);
    ppuVar2 = &puStack_c8;
    _objc_retainBlock();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ea9db8;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_90 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_a8);
    puVar4 = auStack_a0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde5a80();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a21e40; end: 107a21f6b; -[SCStoryManagementSnapchattersSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_107a21e40(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a21f6c;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ea9db8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5a80();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107a21f6c; end: 107a21fb3;  */

void FUN_107a21f6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a21fb4; end: 107a22733; -[SCStoryManagementSnapchattersSectionDataProvider _updateWithSectionDataModel:] */

undefined ** FUN_107a21fb4(long param_1,undefined **param_2,undefined **param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x30) = 1;
  ppuVar16 = param_3;
  func_0x00010c23fca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar16;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar16);
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar16 = (undefined **)PTR_PTR_1126aea98;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d5f10;
    func_0x00010c09cea0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126d5f18;
    _objc_alloc();
    puVar3 = puVar14;
    func_0x000108f588f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ae80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bffd260();
    _objc_release(puVar14);
    ppuStack_78 = ppuVar16;
    goto LAB_107a222f4;
  }
  ppuVar16 = param_3;
  func_0x00010c23fca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar16;
  func_0x00010c105980();
  _objc_release(ppuVar16);
  if (((undefined *)((long)ppuVar13 + 7U) < (undefined *)0x7) &&
     ((1L << ((long)ppuVar13 + 7U & 0x3f) & 0x45U) != 0)) {
    ppuVar16 = (undefined **)PTR_PTR_1126aea98;
    _objc_alloc();
    ppuVar13 = param_3;
    func_0x00010c23fca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar13;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar14 = PTR_PTR_1126d5f20;
    _objc_alloc(PTR_PTR_1126d5f20);
    func_0x00010c050700();
    _objc_release(puVar2);
    func_0x00010bffd260();
    _objc_release(puVar14);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar13);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_80 = ppuVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar12);
    goto LAB_107a22318;
  }
  ppuVar16 = param_3;
  func_0x00010c23fca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar16;
  func_0x00010c105980();
  if (((undefined *)((long)ppuVar13 + 6U) < (undefined *)0x7) &&
     ((1L << ((long)ppuVar13 + 6U & 0x3f) & 0x45U) != 0)) {
    _objc_release(ppuVar16);
    ppuVar16 = (undefined **)PTR_PTR_1126aea98;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d5f10;
    func_0x00010c09cea0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126d5f18;
    _objc_alloc();
    ppuVar13 = &PTR____CFConstantStringClassReference_110ea9c78;
    param_2 = (undefined **)0x0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ae80();
    _objc_release(ppuVar13);
    _objc_release(puVar2);
    func_0x00010bffd260();
    _objc_release(puVar14);
    ppuStack_88 = ppuVar16;
LAB_107a222f4:
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = *(undefined ***)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
  }
  else {
    _objc_release(ppuVar16);
    ppuVar16 = param_3;
    func_0x00010c29f0a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar16;
    func_0x00010bf529e0();
    _objc_release(ppuVar16);
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar16 = (undefined **)PTR_PTR_1126aea98;
      _objc_alloc();
      puVar2 = PTR_PTR_1126d5f18;
      _objc_alloc();
      puVar14 = puVar2;
      func_0x000108f5890c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ae80();
      _objc_release(puVar14);
      func_0x00010bffd260();
      _objc_release(puVar2);
      ppuStack_90 = ppuVar16;
      goto LAB_107a222f4;
    }
    ppuVar13 = param_3;
    func_0x00010c29f0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010c0720c0();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    ppuVar16 = ppuVar13;
    if ((uVar4 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c0720c0();
      if (iVar1 != 0) goto LAB_107a223f8;
    }
    else {
LAB_107a223f8:
      ppuVar5 = param_3;
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = puVar2;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107a22734;
      puStack_a0 = &UNK_1109f54c0;
      ppuStack_98 = ppuVar5;
      _objc_retain();
      func_0x0001006372a4(ppuVar13,&puStack_b8);
      _objc_release(ppuVar13);
      _objc_release(ppuStack_98);
      _objc_release(ppuVar5);
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      lVar15 = 0;
    }
    else {
      ppuVar13 = param_3;
      func_0x00010c23fca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar13;
      func_0x00010c29c5c0();
      ppuVar6 = param_3;
      func_0x00010c23fca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bfb9220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010bf529e0();
      ppuVar9 = param_3;
      func_0x00010c23fca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c0edf80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010bf529e0();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      lVar15 = (long)ppuVar5 - (long)((long)ppuVar8 + (long)ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar13);
    }
    ppuVar13 = ppuVar16;
    func_0x00010bf529e0();
    if (0 < lVar15) {
      ppuVar13 = (undefined **)((long)ppuVar13 + 1);
    }
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_107a22854;
    puStack_d8 = &UNK_1109f54f0;
    puStack_f0 = puVar2;
    _objc_retain(param_3);
    param_2 = &puStack_f0;
    ppuVar5 = ppuVar16;
    ppuStack_d0 = param_3;
    lStack_c8 = param_1;
    ppuStack_c0 = ppuVar13;
    func_0x00010bd86420();
    ppuVar13 = ppuVar5;
    func_0x00010c0d3c80();
    _objc_release(ppuVar5);
    if (0 < lVar15) {
      puVar14 = PTR_PTR_1126aea98;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea9e78;
      param_2 = (undefined **)0x0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea9e78);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(ppuVar5);
      puVar3 = PTR_PTR_1126d5f28;
      _objc_alloc();
      func_0x00010bff62c0();
      _objc_release(puVar2);
      func_0x00010bffd260();
      _objc_release(puVar3);
      func_0x00010befa120(ppuVar13);
      _objc_release(puVar14);
    }
    ppuVar5 = ppuVar13;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(undefined ***)(param_1 + 0x28) = ppuVar5;
    _objc_release(uVar12);
    _objc_release(ppuVar13);
    ppuVar13 = ppuStack_d0;
  }
  _objc_release(ppuVar13);
LAB_107a22318:
  _objc_release(ppuVar16);
  *(undefined8 *)(param_1 + 0x30) = 2;
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_3[4];
  _objc_retain(puVar14);
  puVar2 = puVar14;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    ppuVar16 = (undefined **)0x1;
  }
  else {
    ppuVar16 = param_2;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar16;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
    ppuVar16 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar16;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
    puVar2 = puVar14;
    func_0x00010c0b5ac0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar13;
    func_0x00010bf4bb00();
    if (((ulong)ppuVar16 & 1) == 0) {
      ppuVar16 = ppuVar5;
      func_0x00010bf4bb00(ppuVar5);
    }
    else {
      ppuVar16 = (undefined **)0x1;
    }
    _objc_release(puVar2);
    _objc_release(ppuVar5);
    _objc_release(ppuVar13);
  }
  _objc_release(puVar14);
  _objc_release(param_2);
  return ppuVar16;
}



/* Entry: 107a22734; end: 107a22853;  */

ulong FUN_107a22734(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = param_2;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar1 = lVar4;
    func_0x00010c0b5ac0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf4bb00();
    if ((uVar5 & 1) == 0) {
      uVar5 = uVar3;
      func_0x00010bf4bb00(uVar3);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar4);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 107a22854; end: 107a22fe7;  */

void FUN_107a22854(long param_1,undefined *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puStack_100;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c23fca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c292660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  lVar25 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c23fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar19;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf0a600();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c23ac80();
  _objc_retain(param_2);
  _objc_retain(lVar25);
  _objc_retain(lVar4);
  _objc_retain(uVar8);
  puVar11 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar23);
  _objc_release(puVar11);
  puVar11 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar12);
  lVar13 = lVar12;
  func_0x00010c0ddc60();
  if (lVar13 == 0) {
LAB_107a22a48:
    puStack_100 = puVar11;
    FUN_107cf5384(puVar11,0,0x3a,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar13 = lVar12;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 == 0) goto LAB_107a22a48;
    lVar13 = lVar12;
    func_0x00010bfddf20();
    if ((int)lVar13 == 0) {
      lVar13 = lVar12;
      func_0x00010c259580();
      if (((uint)lVar13 >> 2 & 1) == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        puVar23 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c259580();
      if (((uint)lVar13 >> 2 & 1) == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        puVar23 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    puVar26 = puVar24;
    FUN_107a23164();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar23);
    lVar13 = lVar12;
    func_0x00010c26d760(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x000107d23490();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    puVar23 = PTR_PTR_1126b4860;
    func_0x00010c258dc0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126b45f8;
    func_0x00010bfe9200(PTR_PTR_1126b45f8);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR_PTR_1126b4608;
    _objc_alloc();
    func_0x00010bff7b20();
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(lVar14);
    _objc_release(puVar26);
  }
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar11);
  puVar11 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar11;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar24 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar24);
  lVar13 = lVar12;
  func_0x00010c0ddc60();
  if (lVar13 == 0) {
LAB_107a22d40:
    puVar24 = (undefined *)0x0;
  }
  else {
    lVar13 = lVar12;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 == 0) goto LAB_107a22d40;
    puVar24 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar24;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(puVar26);
    _objc_release(puVar24);
    puVar24 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(puVar22);
  }
  lVar13 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar13);
  if (lVar14 != 0) {
    lVar13 = lVar14;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar26;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c0720c0();
    _objc_release(puVar22);
    _objc_release(puVar26);
    _objc_release(lVar15);
    _objc_release(lVar13);
    if ((int)lVar16 != 0) {
      puVar26 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107a22e2c;
    }
  }
  puVar26 = (undefined *)0x0;
LAB_107a22e2c:
  puVar22 = param_2;
  func_0x00010c151b40();
  if ((int)puVar22 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((int)uVar10 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = param_2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar17 = PTR_PTR_1126d5f28;
  _objc_alloc(PTR_PTR_1126d5f28);
  func_0x00010bff62c0();
  _objc_release(puVar27);
  _objc_release(puVar22);
  _objc_release(puVar26);
  _objc_release(lVar14);
  _objc_release(puVar24);
  _objc_release(puVar11);
  _objc_release(puVar23);
  _objc_release(puStack_100);
  _objc_release(lVar12);
  _objc_release(lVar25);
  _objc_release(param_2);
  ppuVar20 = &PTR____CFConstantStringClassReference_110ea9db8;
  func_0x00010bffd260();
  _objc_release(puVar17);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar19);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar20);
  puVar2 = PTR_PTR_1126d5ef8;
  _objc_opt_class(PTR_PTR_1126d5ef8);
  ppuVar18 = ppuVar20;
  _objc_opt_isKindOfClass(ppuVar20,puVar2);
  ppuVar1 = ppuVar20;
  if (((ulong)ppuVar18 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(ppuVar1);
  _objc_release(uVar19);
  func_0x00010c16d9c0(ppuVar1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar20);
  return;
}



/* Entry: 107a22fe8; end: 107a2307f; -[SCStoryManagementSnapchattersSectionDataProvider _configureSnapchatterCollectionViewCell:] */

void FUN_107a22fe8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5ef8;
  _objc_opt_class(PTR_PTR_1126d5ef8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar4);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a23080; end: 107a23097; -[SCStoryManagementSnapchattersSectionDataProvider dataProviderDelegate] */

void FUN_107a23080(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a23098; end: 107a230a3; -[SCStoryManagementSnapchattersSectionDataProvider setDataProviderDelegate:] */

void FUN_107a23098(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107a230a4; end: 107a230ab; -[SCStoryManagementSnapchattersSectionDataProvider sectionDataModel] */

undefined8 FUN_107a230a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a230ac; end: 107a230b3; -[SCStoryManagementSnapchattersSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107a230ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107a230b4; end: 107a230e3; -[SCStoryManagementSnapchattersSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107a230b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a230e4; end: 107a23163; -[SCStoryManagementSnapchattersSectionDataProvider .cxx_destruct] */

void FUN_107a230e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a23164; end: 107a231df;  */

void FUN_107a23164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd8e0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a231e0; end: 107a2358b; -[SCStoryManagementSnapViewersCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a231e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9550;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b56b0;
    _objc_opt_new();
    func_0x00010c1a7ac0();
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127681d8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127681d8) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar3);
    func_0x00010c219b60(puVar3);
    func_0x00010c167740(puVar3);
    func_0x00010c16e440(puVar3);
    func_0x00010c2025c0(puVar3);
    func_0x00010c2026e0(puVar3);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_88 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    puStack_80 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    puStack_78 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar20;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar21;
    func_0x00010beef8c0(puVar22);
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
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar22 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127681dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127681dc) = puVar22;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar24 = (long)_DAT_1127681e0;
  if (*(long *)(puVar2 + lVar24) == 0) {
    puVar22 = PTR_PTR_1126d5f30;
    _objc_alloc();
    func_0x00010c03bf40();
    lVar23 = (long)_DAT_1127681fc;
    uVar4 = *(undefined8 *)(puVar2 + lVar23);
    *(undefined **)(puVar2 + lVar23) = puVar22;
    _objc_release(uVar4);
    puVar22 = PTR_PTR_1126b1150;
    _objc_alloc();
    func_0x00010c03fd60();
    uVar4 = *(undefined8 *)(puVar2 + lVar24);
    *(undefined **)(puVar2 + lVar24) = puVar22;
    _objc_release(uVar4);
    func_0x00010c17e720(*(undefined8 *)(puVar2 + lVar24));
  }
  else {
    lVar23 = (long)_DAT_1127681fc;
  }
  func_0x00010c189600(*(undefined8 *)(puVar2 + lVar23));
  puVar22 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  uVar4 = *(undefined8 *)(puVar2 + _DAT_112768204);
  func_0x00010c086f40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar22);
  func_0x00010c1e6360(*(undefined8 *)(puVar2 + lVar24));
  _objc_release(puVar22);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 107a2358c; end: 107a236e7; -[SCStoryManagementSnapViewersCell setDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2358c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127681e0;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126d5f30;
    _objc_alloc();
    func_0x00010c03bf40();
    lVar3 = (long)_DAT_1127681fc;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b1150;
    _objc_alloc();
    func_0x00010c03fd60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c17e720(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  }
  else {
    lVar3 = (long)_DAT_1127681fc;
  }
  func_0x00010c189600(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768204);
  func_0x00010c086f40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar1,param_2,0,uVar2,0,0,0);
  func_0x00010c1e6360(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a236e8; end: 107a23747; -[SCStoryManagementSnapViewersCell scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a236e8(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bf4cdc0(param_5);
  if (param_2 < -40.0) {
    param_3 = param_3 + _DAT_112768208;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf7c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107a23748; end: 107a2387f; -[SCStoryManagementSnapViewersCell setSearchEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a23880; end: 107a238c7;  */

void FUN_107a23880(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a238c8; end: 107a2398b; -[SCStoryManagementSnapViewersCell _onSearchEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a238c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768204);
  *(undefined8 *)(param_1 + _DAT_112768204) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  uVar2 = param_3;
  func_0x00010c086f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar1,param_2,0,uVar2,0,0,0);
  func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_1127681e0),param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a2398c; end: 107a2399b; -[SCStoryManagementSnapViewersCell sectionCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a2398c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768200);
}



/* Entry: 107a2399c; end: 107a239db; -[SCStoryManagementSnapViewersCell setSectionCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2399c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768200;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a239dc; end: 107a239eb; -[SCStoryManagementSnapViewersCell dataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a239dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276820c);
}



/* Entry: 107a239ec; end: 107a239fb; -[SCStoryManagementSnapViewersCell searchEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a239ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768210);
}



/* Entry: 107a239fc; end: 107a23a0b; -[SCStoryManagementSnapViewersCell storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a239fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127681e8);
}



/* Entry: 107a23a0c; end: 107a23a1b; -[SCStoryManagementSnapViewersCell setStoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127681e8) = param_3;
  return;
}



/* Entry: 107a23a1c; end: 107a23a2b; -[SCStoryManagementSnapViewersCell storyPrivacySettingObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a23a1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127681f0);
}



/* Entry: 107a23a2c; end: 107a23a6b; -[SCStoryManagementSnapViewersCell setStoryPrivacySettingObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127681f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a23a6c; end: 107a23a7b; -[SCStoryManagementSnapViewersCell userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a23a6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127681ec);
}



/* Entry: 107a23a7c; end: 107a23abb; -[SCStoryManagementSnapViewersCell setUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127681ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a23abc; end: 107a23acb; -[SCStoryManagementSnapViewersCell publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a23abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127681e4);
}



/* Entry: 107a23acc; end: 107a23b0b; -[SCStoryManagementSnapViewersCell setPublicationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127681e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a23b0c; end: 107a23b1b; -[SCStoryManagementSnapViewersCell customStoriesDataFetching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a23b0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127681f4);
}



/* Entry: 107a23b1c; end: 107a23b5b; -[SCStoryManagementSnapViewersCell setCustomStoriesDataFetching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127681f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a23b5c; end: 107a23b6b; -[SCStoryManagementSnapViewersCell circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a23b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127681f8);
}



/* Entry: 107a23b6c; end: 107a23bab; -[SCStoryManagementSnapViewersCell setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127681f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a23bac; end: 107a23bcb; -[SCStoryManagementSnapViewersCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23bac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112768208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a23bcc; end: 107a23bdf; -[SCStoryManagementSnapViewersCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112768208,param_3);
  return;
}



/* Entry: 107a23be0; end: 107a23cdb; -[SCStoryManagementSnapViewersCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a23be0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112768208);
  _objc_storeStrong(param_1 + _DAT_1127681f8,0);
  _objc_storeStrong(param_1 + _DAT_1127681f4,0);
  _objc_storeStrong(param_1 + _DAT_1127681e4,0);
  _objc_storeStrong(param_1 + _DAT_1127681ec,0);
  _objc_storeStrong(param_1 + _DAT_1127681f0,0);
  _objc_storeStrong(param_1 + _DAT_112768210,0);
  _objc_storeStrong(param_1 + _DAT_11276820c,0);
  _objc_storeStrong(param_1 + _DAT_112768200,0);
  _objc_storeStrong(param_1 + _DAT_112768204,0);
  _objc_storeStrong(param_1 + _DAT_1127681dc,0);
  _objc_storeStrong(param_1 + _DAT_1127681fc,0);
  _objc_storeStrong(param_1 + _DAT_1127681e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127681d8,0);
  return;
}



/* Entry: 107a23cdc; end: 107a24187; -[SCStoryManagementSnapViewersSectionController initWithCollectionView:dataSource:storyPrivacySettingManager:actionHandler:imageDownloader:collectionViewDelegate:delegate:customStoriesDataFetching:circumstanceEngine:avatarFactory:] */

undefined8 *
FUN_107a23cdc(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_1126f9558;
  puVar1 = &uStack_88;
  puVar5 = PTR_s_init_1125d9248;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar9 = param_4;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain();
    func_0x00010c189840(param_3);
    _objc_release(param_3);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c18b5e0();
    _objc_release(puVar2);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    _objc_opt_class(PTR_PTR_1126d5f38);
    func_0x00010c126000(puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c08cdc0();
    _objc_release(puVar2);
    _objc_retain(param_4);
    puVar2 = puVar1 + 2;
    uVar4 = *puVar2;
    *puVar2 = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 4,param_8);
    _objc_storeWeak(puVar1 + 5,param_9);
    _objc_retain(param_10);
    uVar4 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar4);
    uVar4 = puVar1[8];
    puVar1[8] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126d5f40;
    _objc_alloc();
    func_0x00010bff0480();
    uVar4 = puVar1[9];
    puVar1[9] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[10];
    puVar1[10] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126d5e88;
    _objc_alloc();
    func_0x00010c047060();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6b7e0(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_initWeak(auStack_90,puVar1);
    uVar7 = *puVar2;
    func_0x00010c23fce0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c0e0e80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107a24188;
    puStack_a0 = &UNK_110842c58;
    ppuVar9 = &puStack_b8;
    puVar5 = auStack_90;
    _objc_copyWeak(auStack_98,puVar5);
    uVar8 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010be6b7e0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 107a24188; end: 107a241d3;  */

void FUN_107a24188(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b7e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a241d4; end: 107a24277; -[SCStoryManagementSnapViewersSectionController setStoryBoostView:] */

void FUN_107a241d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x60);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    uVar2 = param_3;
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107a24264;
    }
    _objc_retain(param_3);
    uVar2 = *(ulong *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
  }
  _objc_release(uVar2);
LAB_107a24264:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24278; end: 107a24693; -[SCStoryManagementSnapViewersSectionController _onSnapDataModels:announceUpdate:] */

void FUN_107a24278(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf51e00();
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_110d622f0;
  lVar6 = lVar1;
  func_0x00010b813c80(lVar1,param_3,&PTR___NSConcreteGlobalBlock_110d622f0);
  _objc_release(&PTR___NSConcreteGlobalBlock_110d622f0);
  lVar7 = lVar6;
  func_0x00010c066900(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  ppuVar11 = (undefined **)&UNK_110866258;
  pcStack_118 = FUN_107a24694;
  puStack_110 = &UNK_110866258;
  _objc_retain(puVar3);
  puStack_108 = puVar3;
  func_0x00010bf97bc0(lVar7);
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x00010bf6c000(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x107a246e0;
  puStack_138 = &UNK_110866258;
  _objc_retain(puVar4);
  puStack_130 = puVar4;
  func_0x00010bf97bc0(lVar7);
  _objc_release(lVar7);
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  puStack_180 = (undefined8 *)0x0;
  lVar7 = lVar6;
  func_0x00010c286820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    ppuVar11 = (undefined **)*puStack_180;
    do {
      lVar12 = 0;
      do {
        if ((undefined **)*puStack_180 != ppuVar11) {
          _objc_enumerationMutation(lVar7);
        }
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010c0e1e60(*(undefined8 *)(lStack_188 + lVar12 * 8));
        func_0x00010bfed020(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(ppuVar9);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  puVar10 = puVar5;
  func_0x00010bf529e0();
  if ((puVar10 == (undefined *)0x0) &&
     (puVar10 = puVar4, func_0x00010bf529e0(), puVar10 == (undefined *)0x0)) {
    puVar10 = puVar3;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) goto LAB_107a245e8;
  }
  _objc_initWeak(auStack_198,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x107a2472c;
  puStack_1c0 = &UNK_110850cf8;
  ppuVar9 = &puStack_1d8;
  _objc_copyWeak(auStack_1a0,auStack_198);
  _objc_retain(puVar3);
  puStack_1b8 = puVar3;
  _objc_retain(puVar4);
  puStack_1b0 = puVar4;
  _objc_retain(puVar5);
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x107a24764;
  puStack_1f8 = &UNK_110853630;
  ppuVar11 = &puStack_210;
  uStack_1e0 = param_4;
  puStack_1a8 = puVar5;
  _objc_copyWeak(auStack_1e8,auStack_198);
  _objc_retain(param_3);
  lStack_1f0 = param_3;
  func_0x00010c0f8420(param_1);
  _objc_release(param_1);
  _objc_release(lStack_1f0);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1b8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
LAB_107a245e8:
  _objc_release(puStack_130);
  _objc_release(puStack_108);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 5);
  _objc_destroyWeak(ppuVar9 + 7);
  _objc_destroyWeak(auStack_198);
  __Unwind_Resume();
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a24694; end: 107a247a7;  */

void FUN_107a24694(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a247a8; end: 107a24883; -[SCStoryManagementSnapViewersSectionController _handleCollectionViewUpdateWithInsertIndexPaths:deleteIndexPaths:reloadIndexPaths:] */

void FUN_107a247a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c066a40();
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6c100();
    _objc_release(lVar1);
  }
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c128de0();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24884; end: 107a248cb; -[SCStoryManagementSnapViewersSectionController _onBatchUpdatesCompleteWithDataModels:] */

void FUN_107a24884(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c243e20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a248cc; end: 107a248d3; -[SCStoryManagementSnapViewersSectionController collectionView:numberOfItemsInSection:] */

void FUN_107a248cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107a248d4; end: 107a24a6f; -[SCStoryManagementSnapViewersSectionController collectionView:cellForItemAtIndexPath:] */

void FUN_107a248d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9e98,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25b720(uVar1);
  func_0x00010c20ddc0(param_3,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c259cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5a60(param_3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1f91e0(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25ab00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d7a0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c188a40(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c17c5e0(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar3 = param_4;
  func_0x00010c0840e0();
  uVar4 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (uVar3 < uVar4) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40(uVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189600(param_3,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010c1f83c0(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107a24a70; end: 107a24ae7; -[SCStoryManagementSnapViewersSectionController scrollViewDidScroll:] */

void FUN_107a24a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152b20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24ae8; end: 107a24b5f; -[SCStoryManagementSnapViewersSectionController scrollViewWillBeginDragging:] */

void FUN_107a24ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24b60; end: 107a24be7; -[SCStoryManagementSnapViewersSectionController scrollViewDidEndDragging:willDecelerate:] */

void FUN_107a24b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152aa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24be8; end: 107a24c5f; -[SCStoryManagementSnapViewersSectionController scrollViewDidEndDecelerating:] */

void FUN_107a24be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152a80();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24c60; end: 107a24cd7; -[SCStoryManagementSnapViewersSectionController scrollViewDidEndScrollingAnimation:] */

void FUN_107a24c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ae0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a24cd8; end: 107a24d93; -[SCStoryManagementSnapViewersSectionController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_107a24cd8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if (*(long *)(param_5 + 0x60) == 0) {
    dVar3 = 0.0;
  }
  else {
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar3 = param_1 + 16.0;
  }
  FUN_107a1a1dc();
  dVar3 = ((param_4 - param_1) - dVar3) + -8.0 + -180.0 + -8.0 + -38.0;
  dVar2 = dVar3 + -16.0;
  func_0x000107a1a204();
  auVar4._8_8_ = dVar2 - dVar3;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 107a24d94; end: 107a24d9b; -[SCStoryManagementSnapViewersSectionController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_107a24d94(void)

{
  return 0;
}



/* Entry: 107a24d9c; end: 107a24da3; -[SCStoryManagementSnapViewersSectionController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_107a24d9c(void)

{
  return 0;
}



/* Entry: 107a24da4; end: 107a24e63; -[SCStoryManagementSnapViewersSectionController textField:shouldChangeCharactersInRange:replacementString:] */

undefined8
FUN_107a24da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puVar2 = PTR_PTR_1126d5f48;
  _objc_alloc(PTR_PTR_1126d5f48);
  func_0x00010c021100();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 107a24e64; end: 107a24eaf; -[SCStoryManagementSnapViewersSectionController textFieldShouldClear:] */

undefined8 FUN_107a24e64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = PTR_PTR_1126d5f48;
  _objc_alloc(PTR_PTR_1126d5f48);
  func_0x00010c021100();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 107a24eb0; end: 107a24ecb; -[SCStoryManagementSnapViewersSectionController textFieldShouldReturn:] */

undefined8 FUN_107a24eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 1;
}



/* Entry: 107a24ecc; end: 107a24ef7; -[SCStoryManagementSnapViewersSectionController didSwipeDownFromTopOfViewersCell:] */

void FUN_107a24ecc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c243e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a24ef8; end: 107a24f93; -[SCStoryManagementSnapViewersSectionController .cxx_destruct] */

void FUN_107a24ef8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a24f94; end: 107a251cf; -[SCStoryManagementSnapViewersSectionCoordinator initWithPublicationId:storyType:userId:storyPrivacySettingObservable:customStoriesDataFetching:circumstanceEngine:] */

undefined8 *
FUN_107a24f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f9560;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[4] = param_4;
    puVar1[5] = 1;
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    if (puVar1[4] == 1) {
      _objc_initWeak(auStack_78,puVar1);
      puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_6;
      func_0x00010c0e0e80(param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_78);
      uVar4 = uVar2;
      func_0x00010c25ff60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a251d0; end: 107a25217;  */

void FUN_107a251d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a25218; end: 107a2523f; -[SCStoryManagementSnapViewersSectionCoordinator _onStoryPrivacy:] */

void FUN_107a25218(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067fc0();
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107a25240; end: 107a25247; -[SCStoryManagementSnapViewersSectionCoordinator canPerformQuery:] */

undefined8 FUN_107a25240(void)

{
  return 1;
}



/* Entry: 107a25248; end: 107a25257; -[SCStoryManagementSnapViewersSectionCoordinator resultsForQuery:updatingBlock:] */

void FUN_107a25248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSectionHeaderWithAccessor_112595688,0,param_3,param_4);
  return;
}



/* Entry: 107a25258; end: 107a25717; -[SCStoryManagementSnapViewersSectionCoordinator _updateSectionHeaderWithAccessoryViewModel:query:updatingBlock:] */

void FUN_107a25258(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126b16f0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_retain(param_5);
    _objc_alloc(puVar4);
    func_0x00010c042a40();
    (**(code **)(param_5 + 0x10))(param_5,puVar4,0);
    goto LAB_107a25668;
  }
  _objc_retain(param_5);
  _objc_opt_new();
  lVar2 = param_4;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  ppuVar3 = *(undefined ***)(param_1 + 0x50);
  func_0x00010bfb9220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010bf529e0();
  uVar10 = param_3;
  if (lVar6 == 0) {
    if (ppuVar9 == (undefined **)0x0) {
      lVar6 = *(long *)(param_1 + 0x50);
      func_0x00010bfb9220();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        _objc_release(lVar6);
        goto LAB_107a25520;
      }
      lVar8 = *(long *)(param_1 + 0x50);
      func_0x00010c0edf80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_release(ppuVar3);
      if (lVar2 == 0) goto LAB_107a253f8;
    }
    else {
      _objc_release(ppuVar3);
LAB_107a253f8:
      ppuVar9 = &PTR____CFConstantStringClassReference_110eaa098;
      func_0x000108f58924();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c11da20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      uVar5 = uVar11;
      func_0x00010bfb9220(uVar11);
      _objc_retainAutoreleasedReturnValue();
      FUN_107a25718(&PTR____CFConstantStringClassReference_110eaa098,ppuVar3,lVar2,uVar11,uVar5,
                    param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(ppuVar3);
      func_0x00010befa120(puVar1);
      ppuVar3 = ppuVar9;
LAB_107a25520:
      _objc_release(ppuVar3);
    }
    lVar6 = *(long *)(param_1 + 0x50);
    func_0x00010c0edf80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      puVar4 = puVar1;
      func_0x00010bf529e0();
      if (puVar4 != (undefined *)0x0) {
        uVar10 = 0;
      }
      ppuVar9 = &PTR____CFConstantStringClassReference_110eaa0d8;
      goto LAB_107a2556c;
    }
  }
  else {
    if (ppuVar9 == (undefined **)0x0) {
      lVar6 = *(long *)(param_1 + 0x50);
      func_0x00010bfb9220();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        _objc_release(lVar6);
        goto LAB_107a254b4;
      }
      lVar8 = *(long *)(param_1 + 0x50);
      func_0x00010c0edf80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_release(ppuVar3);
      if (lVar2 == 0) goto LAB_107a2530c;
    }
    else {
      _objc_release(ppuVar3);
LAB_107a2530c:
      ppuVar9 = &PTR____CFConstantStringClassReference_110eaa0b8;
      func_0x000108f58924();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c11da20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      uVar5 = uVar11;
      func_0x00010bfb9220(uVar11);
      _objc_retainAutoreleasedReturnValue();
      FUN_107a25718(&PTR____CFConstantStringClassReference_110eaa0b8,ppuVar3,lVar2,uVar11,uVar5,
                    param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(ppuVar3);
      func_0x00010befa120(puVar1);
      ppuVar3 = ppuVar9;
LAB_107a254b4:
      _objc_release(ppuVar3);
    }
    lVar6 = *(long *)(param_1 + 0x50);
    func_0x00010c0edf80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      puVar4 = puVar1;
      func_0x00010bf529e0();
      if (puVar4 != (undefined *)0x0) {
        uVar10 = 0;
      }
      ppuVar9 = &PTR____CFConstantStringClassReference_110eaa0f8;
LAB_107a2556c:
      uVar5 = uVar10;
      _objc_retain(uVar10);
      func_0x000108f5893c();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c11da20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      uVar11 = uVar12;
      func_0x00010c0edf80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      FUN_107a25718(ppuVar9,uVar5,lVar2,uVar12,uVar11,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar11);
      _objc_release(lVar2);
      _objc_release(uVar5);
      func_0x00010befa120(puVar1);
      _objc_release(ppuVar9);
    }
  }
  puVar4 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c042a40(puVar4);
  _objc_release(puVar7);
  (**(code **)(param_5 + 0x10))(param_5,puVar4,0);
  _objc_release(param_5);
  param_5 = puVar4;
  puVar4 = puVar1;
LAB_107a25668:
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a25718; end: 107a258e7;  */

void FUN_107a25718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b16f8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b55e0;
  _objc_alloc(PTR_PTR_1126b55e0);
  func_0x00010c019300();
  _objc_release(param_6);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126d5ef0;
  _objc_alloc(PTR_PTR_1126d5ef0);
  func_0x00010c043220();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0x3ff0000000000000,0,0x3ff0000000000000,0,PTR__OBJC_CLASS___NSValue_1126afdf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a258e8; end: 107a258ef; -[SCStoryManagementSnapViewersSectionCoordinator currentQuery] */

undefined8 FUN_107a258e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a258f0; end: 107a258f7; -[SCStoryManagementSnapViewersSectionCoordinator setCurrentQuery:] */

void FUN_107a258f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a258f8; end: 107a258ff; -[SCStoryManagementSnapViewersSectionCoordinator isLoading] */

undefined1 FUN_107a258f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 107a25900; end: 107a25907; -[SCStoryManagementSnapViewersSectionCoordinator dataModel] */

undefined8 FUN_107a25900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107a25908; end: 107a25937; -[SCStoryManagementSnapViewersSectionCoordinator setDataModel:] */

void FUN_107a25908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a25938; end: 107a259a3; -[SCStoryManagementSnapViewersSectionCoordinator .cxx_destruct] */

void FUN_107a25938(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a259a4; end: 107a25a9f; -[SCStoryManagementSnapViewersSectionCreator initWithActionHandler:imageDownloader:customStoriesDataFetching:avatarFactory:] */

undefined1 *
FUN_107a259a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9568;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a25aa0; end: 107a25c87; -[SCStoryManagementSnapViewersSectionCreator sectionForDescriptor:] */

void FUN_107a25aa0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) {
LAB_107a25b38:
      _objc_release(uVar2);
      goto LAB_107a25b40;
    }
    uVar3 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      _objc_release(uVar3);
      goto LAB_107a25b38;
    }
    uVar4 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar6 & 1) == 0) {
      param_1 = 0;
      goto LAB_107a25c18;
    }
  }
  else {
LAB_107a25b40:
    _objc_release(uVar1);
  }
  uVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar5);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126d5ef0;
  _objc_opt_class(PTR_PTR_1126d5ef0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar5);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd820(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_107a25c18:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a25c88; end: 107a25d7f; -[SCStoryManagementSnapViewersSectionCreator _snapchattersSectionWithSectionIdentifier:sectionDataModel:] */

void FUN_107a25c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d5f50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010bfe0280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c01a180(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 8));
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d5f58;
  _objc_alloc(PTR_PTR_1126d5f58);
  func_0x00010c043180();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar4,param_2,*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a25d80; end: 107a25dc7; -[SCStoryManagementSnapViewersSectionCreator .cxx_destruct] */

void FUN_107a25d80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a25dc8; end: 107a26043; -[SCStoryManagementSnapViewersCollectionViewSectionHeader setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a25dc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276827c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar5 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_107a26028;
    }
    puVar2 = PTR_PTR_1126b55e0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar1 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar2);
    func_0x00010bfcf7e0(uVar5);
    func_0x00010c20eaa0(param_1);
    uVar1 = uVar5;
    func_0x00010c2711a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c27f7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010beed3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c27f7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161640();
    }
    else {
      uVar1 = uVar5;
      func_0x00010beed3c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc600();
    }
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c2711a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
LAB_107a26028:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a26044; end: 107a260df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768280);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768280) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161640();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a260e0; end: 107a261bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a260e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768280);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768280) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174740(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a261c0; end: 107a261f7; +[SCStoryManagementSnapViewersCollectionViewSectionHeader sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_107a261c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bfe0a20(PTR_PTR_1126b78f0,param_3,0,1);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107a261f8; end: 107a26223; -[SCStoryManagementSnapViewersCollectionViewSectionHeader _handleAccessoryAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a261f8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112768280) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112768284),
               PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
               *(long *)(param_1 + _DAT_112768280),param_1);
    return;
  }
  return;
}



/* Entry: 107a26224; end: 107a26233; -[SCStoryManagementSnapViewersCollectionViewSectionHeader viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a26224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276827c);
}



/* Entry: 107a26234; end: 107a26243; -[SCStoryManagementSnapViewersCollectionViewSectionHeader actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a26234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768284);
}


