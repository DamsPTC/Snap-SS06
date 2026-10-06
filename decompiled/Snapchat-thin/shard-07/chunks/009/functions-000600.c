/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b20958; end: 105b20b0f;  */

ulong FUN_105b20958(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar8 = param_2;
    func_0x00010901ef14(param_2,param_3);
    goto LAB_105b20ae4;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c08fa60();
  uVar4 = param_2;
  if (uVar3 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar8);
  uVar8 = 0;
  if (uVar4 != 0) {
    func_0x00010c08fa60(uVar2);
    uVar5 = uVar2;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar6 = uVar5;
    func_0x00010c0720c0();
    uVar8 = uVar3;
    func_0x00010c08fa60();
    if ((int)uVar6 == 0) {
      if (uVar8 != 0) {
        uVar8 = 1;
        uVar4 = uVar3;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar7 & 1) != 0) goto LAB_105b20acc;
      }
LAB_105b20ac8:
      uVar8 = 0;
    }
    else {
      if ((uVar8 != 0) && (uVar8 = uVar3, func_0x00010bf35920(), (int)uVar8 - 0x41U < 0x1a))
      goto LAB_105b20ac8;
      uVar8 = 1;
    }
LAB_105b20acc:
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
LAB_105b20ae4:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 105b20b10; end: 105b20b93; -[SCCustomStoryMembersListSectionCreator .cxx_destruct] */

void FUN_105b20b10(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105b20b94; end: 105b20e3f; -[SCCustomStoryMembersListSectionDataProvider initWithDataSource:storyContext:imageDownloader:friendmojiPresenter:avatarProvider:displayFilter:isDiscloseCell:circumstanceEngine:avatarFactory:] */

undefined8 *
FUN_105b20b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126ebe70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 0xc) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b14b8;
    _objc_alloc();
    uVar4 = puVar1[2];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
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



/* Entry: 105b20e40; end: 105b20eb3; -[SCCustomStoryMembersListSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105b20e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x48),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b20eb4; end: 105b20ebf; +[SCCustomStoryMembersListSectionDataProvider announcerIdentifier] */

undefined ** FUN_105b20eb4(void)

{
  return &PTR____CFConstantStringClassReference_110e1e978;
}



/* Entry: 105b20ec0; end: 105b20ec7; -[SCCustomStoryMembersListSectionDataProvider addListener:] */

void FUN_105b20ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105b20ec8; end: 105b20ecf; -[SCCustomStoryMembersListSectionDataProvider removeListener:] */

void FUN_105b20ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105b20ed0; end: 105b20ed7; -[SCCustomStoryMembersListSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105b20ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105b20ed8; end: 105b20edf; -[SCCustomStoryMembersListSectionDataProvider numberOfItemsInSection:] */

void FUN_105b20ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105b20ee0; end: 105b20f97; -[SCCustomStoryMembersListSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105b20ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105b20f6c;
  puStack_30 = &UNK_110845ab0;
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



/* Entry: 105b20f98; end: 105b21017; -[SCCustomStoryMembersListSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105b20f98(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c2640;
  _objc_opt_class();
  ppuVar8 = &puStack_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(ppuVar8);
  _objc_opt_class(puVar2);
  ppuVar4 = ppuVar8;
  _objc_opt_isKindOfClass(ppuVar8,puVar2);
  ppuVar1 = ppuVar8;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar8);
  _objc_initWeak(auStack_88,puVar3);
  uVar5 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c25a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  uVar9 = *(undefined8 *)(puVar3 + 0x88);
  *(undefined ***)(puVar3 + 0x88) = ppuVar8;
  _objc_retain(ppuVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar1);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 105b21018; end: 105b211bb; -[SCCustomStoryMembersListSectionDataProvider setSectionDataModel:] */

void FUN_105b21018(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
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
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c25a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x88) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b211bc; end: 105b21203;  */

void FUN_105b211bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b21204; end: 105b2132f; -[SCCustomStoryMembersListSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105b21204(undefined8 param_1)

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
  pcStack_68 = FUN_105b21330;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e1e958;
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



/* Entry: 105b21330; end: 105b21377;  */

void FUN_105b21330(long param_1,undefined8 param_2)

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



/* Entry: 105b21378; end: 105b2150f; -[SCCustomStoryMembersListSectionDataProvider _setStoryMemberInfo:] */

void FUN_105b21378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126c2648;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c25a6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar4 = param_3;
  func_0x00010c25a580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf60940(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c25a4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf529e0();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15a060(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04db20(puVar1,param_2,uVar2,uVar3,puVar5,uVar6,uVar9,uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c25a4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea7bc0(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b21510; end: 105b21677; -[SCCustomStoryMembersListSectionDataProvider _setSnapchatters:] */

void FUN_105b21510(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x38) = 1;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = *(ulong *)(param_1 + 0x88);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = param_3;
  if (*(long *)(param_1 + 0x58) != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b21678;
    puStack_58 = &UNK_1108d5990;
    lStack_50 = param_1;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    func_0x0001006372a4(param_3,&puStack_70);
    _objc_release(param_3);
    _objc_release(uStack_48);
  }
  uVar6 = uVar4;
  func_0x00010bf529e0();
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105b21688;
  puStack_88 = &UNK_1108d59c0;
  uVar5 = uVar4;
  lStack_80 = param_1;
  uStack_78 = uVar6;
  func_0x00010bd86420(uVar4,&puStack_a0);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  _objc_release(uVar6);
  *(undefined8 *)(param_1 + 0x38) = 2;
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105b21678; end: 105b21687;  */

void FUN_105b21678(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000105b21684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105b21688; end: 105b21723;  */

void FUN_105b21688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010901d7c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010901f074();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde7500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b21724; end: 105b21927; -[SCCustomStoryMembersListSectionDataProvider _containerCellViewModelForSnapchatter:index:indexKey:count:] */

void FUN_105b21724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  uVar12 = uVar13;
  func_0x00010c25a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010c0720c0();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d5c0();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a580();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  uVar9 = param_3;
  FUN_105b24198(param_3,uVar13,uVar11,uVar2,param_4,param_5,param_6,uVar1,(char)uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar12);
  puVar10 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(uVar9);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105b21928; end: 105b219a3; -[SCCustomStoryMembersListSectionDataProvider _configureSnapchatterCollectionViewCell:] */

void FUN_105b21928(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2640;
  _objc_opt_class(PTR_PTR_1126c2640);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b219a4; end: 105b219bb; -[SCCustomStoryMembersListSectionDataProvider dataProviderDelegate] */

void FUN_105b219a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b219bc; end: 105b219c7; -[SCCustomStoryMembersListSectionDataProvider setDataProviderDelegate:] */

void FUN_105b219bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 105b219c8; end: 105b219cf; -[SCCustomStoryMembersListSectionDataProvider sectionDataModel] */

undefined8 FUN_105b219c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105b219d0; end: 105b219d7; -[SCCustomStoryMembersListSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105b219d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105b219d8; end: 105b21aab; -[SCCustomStoryMembersListSectionDataProvider .cxx_destruct] */

void FUN_105b219d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105b21aac; end: 105b21d03; -[SCCustomStoryMembersListBadgeView initWithIcon:text:backgroudColor:textColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105b21aac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ebe78;
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_80 = param_1;
  _objc_msgSendSuper2(uVar6,uVar7,uVar8,uVar9,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11272fedc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar3);
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar4 = (long)_DAT_11272fee0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    if (param_3 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar4 = (long)_DAT_11272fee4;
      uVar6 = *(undefined8 *)((long)puVar1 + lVar4);
      *(undefined **)((long)puVar1 + lVar4) = puVar2;
      _objc_release(uVar6);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
      func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    }
    func_0x00010be49800(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b21d04; end: 105b21d17; -[SCCustomStoryMembersListBadgeView initWithText:backgroudColor:textColor:] */

void FUN_105b21d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithIcon_text_backgroudColor_1125e4588,0,param_3,param_4,param_5);
  return;
}



/* Entry: 105b21d18; end: 105b22197; -[SCCustomStoryMembersListBadgeView _layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105b21d18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11272fedc;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11272fee0;
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08e400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0xc014000000000000,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf348e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c1408a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493c0(0x4014000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_11272fee4;
  lVar2 = *(long *)(param_1 + lVar13);
  if (lVar2 != 0) {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf348e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010bf493a0(lVar2,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar13);
    lStack_88 = lVar11;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c08e400(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf493c0(0xc000000000000000,uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(lVar2);
    lVar14 = *(long *)(param_1 + lVar12);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c08e400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010bf493c0(0xc014000000000000,lVar14,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar14);
    lVar4 = lVar2;
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  lStack_a8 = lVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_a0 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  uStack_98 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return *(long *)(lVar4 + _DAT_11272fee8);
  }
  return lVar4;
}



/* Entry: 105b22198; end: 105b221a7; -[SCCustomStoryMembersListBadgeView icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b22198(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272fee8);
}



/* Entry: 105b221a8; end: 105b221e7; -[SCCustomStoryMembersListBadgeView setIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b221a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272fee8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b221e8; end: 105b221f7; -[SCCustomStoryMembersListBadgeView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b221e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272feec);
}



/* Entry: 105b221f8; end: 105b22203; -[SCCustomStoryMembersListBadgeView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b221f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105b22204; end: 105b22273; -[SCCustomStoryMembersListBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b22204(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272feec,0);
  _objc_storeStrong(param_1 + _DAT_11272fee8,0);
  _objc_storeStrong(param_1 + _DAT_11272fedc,0);
  _objc_storeStrong(param_1 + _DAT_11272fee4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fee0,0);
  return;
}



/* Entry: 105b22274; end: 105b2228f; -[SCCustomStoryMembersListCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b22274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272fef0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 105b22290; end: 105b22477; -[SCCustomStoryMembersListCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b22290(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11272fef4;
  uVar1 = *(ulong *)(param_2 + lVar6);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126c2650;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar3 = uVar1;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    *(ulong *)(param_2 + lVar6) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c122ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR_PTR_1126ebe80;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_setViewModel__1126663d8,uVar3);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c122ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c279320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      puVar2 = PTR_PTR_1126c2658;
      _objc_opt_new();
      lVar6 = (long)_DAT_11272fef8;
      uVar5 = *(undefined8 *)(param_2 + lVar6);
      *(undefined **)(param_2 + lVar6) = puVar2;
      _objc_release(uVar5);
      uVar3 = uVar1;
      func_0x00010bf155c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar6));
      _objc_release(uVar3);
      func_0x00010c2a5100(*(undefined8 *)(param_2 + lVar6));
      func_0x00010bfb68e0(param_2);
      func_0x00010c19f0e0(0,0,param_1,*(undefined8 *)(param_2 + lVar6));
      func_0x00010c27f7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c27f7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2194c0();
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105b22478; end: 105b2253f; +[SCCustomStoryMembersListCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105b22478(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2650;
  _objc_opt_class(PTR_PTR_1126c2650);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar3 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c122ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf9e0a0();
  _objc_release(uVar2);
  dVar4 = 0.0;
  if ((uVar3 & 1) != 0) {
    dVar4 = 8.0;
  }
  if ((uVar3 & 4) != 0) {
    dVar4 = dVar4 + 8.0;
  }
  _objc_release(param_4);
  auVar5._8_8_ = dVar4 + 60.0;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 105b22540; end: 105b22573; -[SCCustomStoryMembersListCell setActionHandler:] */

void FUN_105b22540(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebe80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setActionHandler__112636080);
  return;
}



/* Entry: 105b22574; end: 105b22583; -[SCCustomStoryMembersListCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b22574(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272fef4);
}



/* Entry: 105b22584; end: 105b22593; -[SCCustomStoryMembersListCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b22584(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272fef0);
}



/* Entry: 105b22594; end: 105b225f3; -[SCCustomStoryMembersListCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b22594(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272fef0,0);
  _objc_storeStrong(param_1 + _DAT_11272fef4,0);
  _objc_storeStrong(param_1 + _DAT_11272fefc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fef8,0);
  return;
}



/* Entry: 105b225f4; end: 105b226b3;  */

void FUN_105b225f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf41560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b226b4; end: 105b226f7;  */

void FUN_105b226b4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c292b20();
  lVar1 = 0x20;
  if (param_2 != 2) {
    lVar1 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b226f8; end: 105b22853; -[SCCustomStoryMembersListCellTrailingAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b226f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11272ff00;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126c2660;
  if ((uVar1 & 1) == 0) {
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
    uVar3 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    uVar3 = uVar1;
    func_0x00010c238e60();
    lVar8 = (long)_DAT_11272ff04;
    *(char *)(param_1 + lVar8) = (char)uVar3;
    uVar3 = uVar1;
    func_0x00010c2362a0();
    lVar7 = (long)_DAT_11272ff08;
    *(char *)(param_1 + lVar7) = (char)uVar3;
    uVar3 = uVar1;
    func_0x00010c237f40();
    lVar6 = (long)_DAT_11272ff0c;
    *(char *)(param_1 + lVar6) = (char)uVar3;
    uVar3 = uVar1;
    func_0x00010c2388c0();
    _objc_release(uVar1);
    lVar5 = (long)_DAT_11272ff10;
    *(char *)(param_1 + lVar5) = (char)uVar3;
    if (*(char *)(param_1 + lVar8) == '\x01') {
      func_0x00010bdf0f40(param_1);
    }
    if (*(char *)(param_1 + lVar7) == '\x01') {
      func_0x00010bdeb600(param_1);
    }
    if (*(char *)(param_1 + lVar6) == '\x01') {
      func_0x00010bdeed80(param_1);
    }
    if (*(char *)(param_1 + lVar5) == '\x01') {
      func_0x00010bdf0300(param_1);
    }
    func_0x00010be499c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b22854; end: 105b231fb; -[SCCustomStoryMembersListCellTrailingAccessoryView _layoutViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b22854(undefined8 param_1,undefined *param_2,undefined8 param_3)

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
  long lVar24;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2[_DAT_11272ff04] == '\x01') {
    func_0x00010befa120(puVar1,param_3,*(undefined8 *)(param_2 + _DAT_11272ff14));
  }
  if (param_2[_DAT_11272ff08] == '\x01') {
    func_0x00010befa120(puVar1,param_3,*(undefined8 *)(param_2 + _DAT_11272ff18));
  }
  if (param_2[_DAT_11272ff10] == '\x01') {
    func_0x00010befa120(puVar1,param_3,*(undefined8 *)(param_2 + _DAT_11272ff1c));
  }
  if (param_2[_DAT_11272ff0c] == '\x01') {
    func_0x00010befa120(puVar1,param_3,*(undefined8 *)(param_2 + _DAT_11272ff20));
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    lVar24 = (long)_DAT_11272ff24;
    *(undefined8 *)(param_2 + lVar24) = 0x4050800000000000;
    puVar3 = puVar1;
    func_0x00010bf529e0();
    puVar4 = puVar1;
    func_0x00010c0dfd20(puVar1,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_2,param_3,puVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (puVar3 == (undefined *)0x1) {
      puVar3 = puVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf493a0(puVar3,param_3,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      puStack_90 = puVar7;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010bf493a0(puVar5,param_3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      puStack_88 = puVar9;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_2;
      func_0x00010bfe0660(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493a0(puVar10,param_3,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      puStack_80 = puVar12;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5060(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf493a0(puVar13,param_3,param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_90,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_3,puVar15);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(param_2);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    else {
      puVar3 = puVar1;
      func_0x00010c0dfd20(puVar1,param_3,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c08e400(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bf493a0(puVar2,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar2);
      puVar2 = puVar4;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c08e400(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bf493a0(puVar2,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar2);
      func_0x00010befbb60(param_2,param_3,puVar3);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = puVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010bf493a0(puVar5,param_3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      puStack_c0 = puVar9;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_2;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493a0(puVar10,param_3,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      puStack_b8 = puVar12;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      puStack_b0 = puVar14;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_2;
      func_0x00010bf348e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010bf493a0(puVar15,param_3,puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar3;
      puStack_a8 = puVar17;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_2;
      func_0x00010c1408a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010bf493a0(puVar18,param_3,puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar3;
      puStack_a0 = puVar20;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x4034000000000000;
      puVar22 = puVar21;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar22;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_c0,6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_3,puVar23);
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
      _objc_release(puVar5);
      puVar2 = puVar1;
      func_0x00010bf529e0();
      if ((undefined *)0x2 < puVar2) {
        puVar5 = puVar1;
        func_0x00010c0dfd20(puVar1,param_3,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_2,param_3,puVar5);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar8 = puVar5;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_2;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010bf493a0(puVar8,param_3,puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        puStack_e0 = puVar10;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_2;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x00010bf493a0(puVar11,param_3,puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar5;
        puStack_d8 = puVar13;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bf49420(0x4034000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
        puStack_d0 = puVar15;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = param_2;
        func_0x00010bf34860(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar16;
        func_0x00010bf493a0(puVar16,param_3,puVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_c8 = puVar18;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_e0,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2,param_3,puVar19);
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
        puVar2 = puVar3;
        func_0x00010c08e400(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010c1408a0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        param_1 = 0x4014000000000000;
        puVar9 = puVar2;
        func_0x00010bf493c0(0x4014000000000000,puVar2,param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_2;
        func_0x00010bf34860(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf493a0(puVar2,param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar2);
        puVar2 = puVar4;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_2;
        func_0x00010bf34860(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010bf493a0(puVar2,param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar8);
        _objc_release(puVar2);
        *(undefined8 *)(param_2 + lVar24) = 0x4060800000000000;
        _objc_release(puVar5);
        puVar7 = puVar9;
      }
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f0 = puVar7;
      puStack_e8 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_f0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_3,puVar5);
    }
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(undefined8 *)(puVar1 + _DAT_11272ff24);
  }
  return param_1;
}



/* Entry: 105b231fc; end: 105b2320b; -[SCCustomStoryMembersListCellTrailingAccessoryView widthForView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b231fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272ff24);
}



/* Entry: 105b2320c; end: 105b23393; -[SCCustomStoryMembersListCellTrailingAccessoryView _createOwnerBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b2320c(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126c2668;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f58dbc();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  FUN_105b225f4(puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  FUN_105b225f4(puVar7,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01aea0();
  lVar11 = (long)_DAT_11272ff14;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar11),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105b23394; end: 105b2351b; -[SCCustomStoryMembersListCellTrailingAccessoryView _createBlockedBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23394(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126c2668;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f58dec();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  FUN_105b225f4(puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  FUN_105b225f4(puVar7,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01aea0();
  lVar11 = (long)_DAT_11272ff18;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar11),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105b2351c; end: 105b23677; -[SCCustomStoryMembersListCellTrailingAccessoryView _createInviterBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b2351c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c2668;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108f58dd4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_105b225f4(puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  FUN_105b225f4(puVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051280();
  lVar10 = (long)_DAT_11272ff20;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar10),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105b23678; end: 105b237d3; -[SCCustomStoryMembersListCellTrailingAccessoryView _createModeratorBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23678(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c2668;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108f58e04();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_105b225f4(puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  FUN_105b225f4(puVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051280();
  lVar10 = (long)_DAT_11272ff1c;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar10),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 105b237d4; end: 105b237e3; -[SCCustomStoryMembersListCellTrailingAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b237d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272ff00);
}



/* Entry: 105b237e4; end: 105b23853; -[SCCustomStoryMembersListCellTrailingAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b237e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ff00,0);
  _objc_storeStrong(param_1 + _DAT_11272ff1c,0);
  _objc_storeStrong(param_1 + _DAT_11272ff20,0);
  _objc_storeStrong(param_1 + _DAT_11272ff18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ff14,0);
  return;
}



/* Entry: 105b23854; end: 105b23a9b; -[SCCustomStoryMembersListViewController initWithSectionCreator:delegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105b23854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126ebe88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_11272ff28;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272ff2c),param_4);
    func_0x00010c20eaa0(puVar1);
    func_0x00010c21e060(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216340();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202660();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1539c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1539c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x000108f57cf4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2163c0();
    _objc_release(puVar3);
    lVar5 = (long)_DAT_11272ff30;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    func_0x00010be39e00(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b23a9c; end: 105b23beb; -[SCCustomStoryMembersListViewController _initIndexView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23a9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108f83514();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar6 = (long)_DAT_11272ff34;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b78e8;
  _objc_alloc();
  func_0x00010c019120();
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9b40(puVar2,param_2,lVar4);
  _objc_release(lVar4);
  func_0x00010c18b5e0(puVar2,param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf09f00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2166c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272ff38);
  *(undefined **)(param_1 + _DAT_11272ff38) = puVar2;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b23bec; end: 105b23cdb; -[SCCustomStoryMembersListViewController indexView:userDidSelectTitleAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23bec(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11272ff3c;
  lVar1 = *(long *)(param_3 + lVar5);
  func_0x00010c0df2e0();
  if (lVar1 + -1 <= param_6) {
    param_6 = lVar1 + -1;
  }
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_3 + lVar5);
  func_0x00010c08c980(lVar1,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_3 + lVar5);
    func_0x00010c0deec0(lVar3,param_4,param_6);
    if (0 < lVar3) {
      func_0x00010c1525a0(*(undefined8 *)(param_3 + lVar5),param_4,puVar2,1,0);
      uVar4 = *(undefined8 *)(param_3 + lVar5);
      func_0x00010bf4cdc0(uVar4);
      func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar5));
      func_0x00010c1822e0(param_1,param_2 + -30.0,uVar4);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b23cdc; end: 105b23dd7; -[SCCustomStoryMembersListViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23cdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b56b0;
  _objc_opt_new(PTR_PTR_1126b56b0);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c167740();
  puVar3 = PTR_PTR_1126c2670;
  _objc_alloc(PTR_PTR_1126c2670);
  func_0x00010bffe1e0();
  puVar4 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar6 = (long)_DAT_11272ff40;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar4;
  _objc_release(uVar5);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  lVar6 = (long)_DAT_11272ff3c;
  _objc_retain(puVar2);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b23dd8; end: 105b23e6f; -[SCCustomStoryMembersListViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_105b23dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126ebe88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didSelectDismissalActionWithHead_1125bc3f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105b23e70; end: 105b23f5b; -[SCCustomStoryMembersListViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23e70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebe88;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR_PTR_1126b1730;
  _objc_alloc();
  lVar1 = (long)_DAT_11272ff40;
  func_0x00010c03c420();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272ff44);
  *(undefined **)(param_1 + _DAT_11272ff44) = puVar2;
  _objc_release(uVar4);
  lVar3 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  func_0x00010c1e6360(*(undefined8 *)(param_1 + lVar1));
  _objc_release(puVar2);
  return;
}



/* Entry: 105b23f5c; end: 105b23fc7; -[SCCustomStoryMembersListViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23f5c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebe88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_11272ff2c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74d20();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105b23fc8; end: 105b24057; -[SCCustomStoryMembersListViewController forceToRefreshPage] */

/* WARNING: Possible PIC construction at 0x000105b24014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b24018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b23fc8(undefined8 param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272ff3c;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bf4cdc0(uVar1);
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2 + 1.0,uVar1,PTR_s_setContentOffset_animated__11263e2e0,0);
  return;
}



/* Entry: 105b24058; end: 105b240f3; -[SCCustomStoryMembersListViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b24058(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ff30,0);
  _objc_storeStrong(param_1 + _DAT_11272ff34,0);
  _objc_storeStrong(param_1 + _DAT_11272ff38,0);
  _objc_storeStrong(param_1 + _DAT_11272ff3c,0);
  _objc_storeStrong(param_1 + _DAT_11272ff44,0);
  _objc_storeStrong(param_1 + _DAT_11272ff40,0);
  _objc_destroyWeak(param_1 + _DAT_11272ff2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ff28,0);
  return;
}



/* Entry: 105b240f4; end: 105b24197;  */

void FUN_105b240f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c25d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c0490c0();
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b24198; end: 105b247d3;  */

void FUN_105b24198(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 in_stack_fffffffffffffed0;
  
  ppuVar16 = &PTR____CFConstantStringClassReference_110e1ea78;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  FUN_105b240f4(&PTR____CFConstantStringClassReference_110e1ea78,param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2650;
  _objc_alloc();
  lVar1 = 0;
  if (((char)param_9 == '\0' && param_9._1_1_ == '\0') && param_9._2_1_ == '\0') {
    lVar1 = param_4;
  }
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(ppuVar16);
  _objc_retain(param_6);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1ea58;
  FUN_105b240f4(&PTR____CFConstantStringClassReference_110e1ea58,param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b52c0;
  _objc_alloc();
  _objc_retain(0);
  if (param_8 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126b53f0;
    func_0x00010bf811c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = param_2;
  func_0x00010bf60940();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_3);
  uVar6 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  if ((int)uVar7 == 0) {
    uVar6 = param_1;
    func_0x000107cf5384(param_1,0,0xffffffffffffffff,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010bf1c0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x000108feb5c8(uVar6,uVar7,uVar8,uVar9,uVar10,0,0,
                        &PTR__OBJC_CLASS___NSConstantArray_11117f2a0,0x24,
                        (int)(CONCAT35((int3)((ulong)in_stack_fffffffffffffed0 >> 0x28),0x100000000)
                             >> 0x20),0,1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = uVar11;
    func_0x000108fec9ec(uVar11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
  }
  puVar12 = PTR_PTR_1126c2678;
  _objc_alloc(PTR_PTR_1126c2678);
  func_0x00010bff62a0();
  puVar13 = PTR_PTR_1126b53d0;
  func_0x00010bf133a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_1);
  puVar12 = PTR_PTR_1126b53e0;
  _objc_retain(param_1);
  _objc_alloc(puVar12);
  uVar6 = param_1;
  func_0x00010901d7c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c053c00(puVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar14 = PTR_PTR_1126b53e8;
  func_0x00010bf16660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c2680;
  if (lVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_alloc(puVar12);
    func_0x00010c052bc0();
    _objc_release(param_4);
    puVar15 = PTR_PTR_1126c2688;
    func_0x00010bf8ea80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126b5678;
  _objc_alloc();
  uVar6 = param_1;
  func_0x000108ef82c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e00();
  _objc_release(param_6);
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0,puVar4);
  _objc_release(ppuVar16);
  _objc_release(puVar12);
  _objc_release(uVar6);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar5);
  if (param_8 != 0) {
    _objc_release(puVar17);
  }
  _objc_release(0);
  _objc_release(ppuVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar17 = PTR_PTR_1126c2660;
  _objc_alloc(PTR_PTR_1126c2660);
  func_0x00010c046460();
  func_0x00010c03d420(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(ppuVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b247d4; end: 105b24b27; -[SCCustomStoryMembersListRouterImpl initWithUiContainer:recipientPickerScopeExposer:recipientPickerScopeServices:publicationId:snapchattersDataFetcher:blockedSnapchatterFetcher:currentUserId:sectionDataSource:actionHandler:imageDownloader:friendmojiPresenter:avatarProvider:notificationPool:circumstanceEngine:avatarFactory:] */

undefined8 *
FUN_105b247d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126ebe90;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b24b28; end: 105b24b9f; -[SCCustomStoryMembersListRouterImpl presentEditMembersForCustomStory:delegate:] */

void FUN_105b24b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f57db4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b200(param_1,param_2,param_3,param_4,uVar1,0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b24ba0; end: 105b24c17; -[SCCustomStoryMembersListRouterImpl presentAddMembersForCustomStory:delegate:] */

void FUN_105b24ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f57dcc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b200(param_1,param_2,param_3,param_4,uVar1,1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b24c18; end: 105b24f4b; -[SCCustomStoryMembersListRouterImpl _presentEditMembersForCustomStory:delegate:sharedStoryTitle:disabledPreSelectedItem:] */

void FUN_105b24c18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined1 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 0x68,param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c27dd80();
  lVar5 = param_3;
  if (lVar2 == 1) {
    func_0x000108f57cac();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = lVar2;
    func_0x000108f57cc4();
    _objc_retainAutoreleasedReturnValue();
LAB_105b24cf0:
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c27dd80();
    if (lVar2 == 2) {
      func_0x000108f57cf4();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar4 = lVar2;
      func_0x000108f57d0c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b24cf0;
    }
    lVar2 = param_3;
    func_0x00010c27dd80();
    if ((lVar2 != 6) && (lVar2 = param_3, func_0x00010c27dd80(), lVar2 != 10)) {
      lVar2 = param_1 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf72c60();
      goto LAB_105b24e5c;
    }
    lVar4 = param_5;
    _objc_retain(param_5);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108f57d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar5 = param_1;
  func_0x00010be226e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(lVar2);
  _objc_retain(puVar6);
  _objc_retain(lVar5);
  _objc_retain(param_3);
  uStack_70 = param_6;
  func_0x00010c244e80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar5);
  _objc_release(puVar6);
LAB_105b24e5c:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b24f4c; end: 105b24fa7;  */

void FUN_105b24f4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b24fa8; end: 105b2540f; -[SCCustomStoryMembersListRouterImpl _presentEditMembersWithTitle:description:preSelectedIds:snapchatters:customStory:disabledPreSelectedItem:] */

void FUN_105b24fa8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_160;
    do {
      lVar12 = 0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(param_6);
        }
        uVar8 = *(undefined8 *)(lStack_168 + lVar12 * 8);
        uVar6 = uVar8;
        func_0x00010901d7c4(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2923e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar8);
        _objc_release(uVar6);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_6);
  puVar10 = PTR_PTR_1126b2890;
  _objc_alloc();
  func_0x00010c0539a0();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f488f8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f487d8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f48818;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f487b8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f489d8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar2 = param_7;
  func_0x00010c27dd80();
  if (lVar2 != 6) {
    func_0x00010c27dd80();
  }
  func_0x00010befa120(puVar4);
  lVar2 = param_7;
  func_0x00010c27dd80();
  if (lVar2 == 1) {
    func_0x00010befa120(puVar4);
  }
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105b25410;
  puStack_188 = &UNK_1108d5a50;
  lStack_180 = param_1;
  puStack_178 = puVar1;
  _objc_retain(puVar1);
  uVar6 = param_5;
  func_0x000100504554(param_5,&puStack_1a0);
  puStack_1c8 = puVar3;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_105b25504;
  puStack_1b0 = &UNK_110894890;
  uVar8 = param_5;
  lStack_1a8 = param_1;
  func_0x000100504554(param_5,&puStack_1c8);
  puVar3 = PTR_PTR_1126c24a0;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(puVar10);
  _objc_alloc();
  func_0x00010c00b9e0();
  uVar7 = *(ulong *)(param_1 + 0x38);
  lVar2 = param_7;
  FUN_105b2561c(param_7,uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar9);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(puStack_178);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  uVar5 = uVar7;
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    puVar1 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    puVar4 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar4);
    _objc_release(uVar6);
    puVar10 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105b25410; end: 105b25503;  */

void FUN_105b25410(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    puVar3 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar3);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b25504; end: 105b2561b;  */

void FUN_105b25504(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_2);
    uVar1 = param_2;
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b2561c; end: 105b257af;  */

void FUN_105b2561c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0d02e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 == 0) {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010c0d02e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c2648;
  _objc_alloc(PTR_PTR_1126c2648);
  lVar1 = param_1;
  func_0x00010c11ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf5a820(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0f4aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c04db20(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b257b0; end: 105b25913; -[SCCustomStoryMembersListRouterImpl didConfirmWithSelectedItems:title:uiContainer:] */

void FUN_105b257b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0d42c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b25914; end: 105b25973;  */

void FUN_105b25914(long param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108d5aa0);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c284e40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b25974; end: 105b2597b;  */

void FUN_105b25974(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b2597c; end: 105b25ccb; -[SCCustomStoryMembersListRouterImpl updateCustomStoryithSelectedItems:uiContainer:friendSnapchatterIds:] */

void FUN_105b2597c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 8));
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
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
      lVar11 = *(long *)(lVar8 * 8);
      lVar5 = lVar11;
      func_0x000108425a5c();
      if ((int)lVar5 == 0) {
        lVar5 = lVar11;
        func_0x000108425b30();
        if ((int)lVar5 != 0) {
          func_0x000108425f4c();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar11;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar5 != 0) {
            lVar9 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar11);
              }
              uVar10 = param_5;
              func_0x00010bf4b900();
              if ((int)uVar10 != 0) {
                func_0x00010befa120(puVar4);
              }
              lVar9 = lVar9 + 1;
            } while (lVar5 != lVar9);
            lVar5 = lVar11;
            func_0x00010bf52a60();
          }
          _objc_release(lVar11);
        }
      }
      else {
        func_0x000108425950(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar11);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar3);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar6 = puVar4;
  func_0x00010bf4b900();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010befa120(puVar4);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar10);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  puVar6 = puVar4;
  func_0x00010bf00560(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e4e0(param_1);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c2690,PTR_s_showStatusBarErrorMessageWithRes_11266c310,param_2,
               *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x60));
    return;
  }
  return;
}



/* Entry: 105b25ccc; end: 105b25ce7;  */

void FUN_105b25ccc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c2690,PTR_s_showStatusBarErrorMessageWithRes_11266c310,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  return;
}



/* Entry: 105b25ce8; end: 105b26037; -[SCCustomStoryMembersListRouterImpl updateCustomStoryWithSelectedItems:uiContainer:blockedSnapchatterIds:] */

void FUN_105b25ce8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 8));
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar12 = *(long *)(lVar9 * 8);
      lVar5 = lVar12;
      func_0x000108425a5c();
      if ((int)lVar5 == 0) {
        lVar5 = lVar12;
        func_0x000108425b30();
        if ((int)lVar5 != 0) {
          func_0x000108425f4c();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar12;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar5 != 0) {
            lVar10 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar12);
              }
              uVar6 = param_5;
              func_0x00010bf4b900();
              if ((uVar6 & 1) == 0) {
                func_0x00010befa120(puVar4);
              }
              lVar10 = lVar10 + 1;
            } while (lVar5 != lVar10);
            lVar5 = lVar12;
            func_0x00010bf52a60();
          }
          _objc_release(lVar12);
        }
      }
      else {
        func_0x000108425950(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar12);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar3);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar4;
  func_0x00010bf4b900();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x00010befa120(puVar4);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar11);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  puVar7 = puVar4;
  func_0x00010bf00560(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e4e0(param_1);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c2690,PTR_s_showStatusBarErrorMessageWithRes_11266c310,param_2,
               *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x60));
    return;
  }
  return;
}



/* Entry: 105b26038; end: 105b26053;  */

void FUN_105b26038(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c2690,PTR_s_showStatusBarErrorMessageWithRes_11266c310,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  return;
}



/* Entry: 105b26054; end: 105b260af; -[SCCustomStoryMembersListRouterImpl didDismissWithSelectedItems:title:] */

void FUN_105b26054(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b260b0; end: 105b2620f; -[SCCustomStoryMembersListRouterImpl presentSeeMembersForCustomStory:delegate:] */

void FUN_105b260b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be226e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c25e8;
  _objc_alloc(PTR_PTR_1126c25e8);
  uVar3 = param_3;
  FUN_105b2561c(param_3,*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c042f80(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c2608;
  _objc_alloc(PTR_PTR_1126c2608);
  func_0x00010c042f00();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c21b220(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x40));
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b26210; end: 105b262f7; -[SCCustomStoryMembersListRouterImpl _getSelectedSnapchatterIds:] */

void FUN_105b26210(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    param_1 = param_3;
    func_0x00010c29ef80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80();
    if (lVar1 == 2) {
      param_1 = param_3;
      func_0x00010c1057e0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_3;
      func_0x00010c27dd80();
      if ((lVar1 == 6) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 10)) {
        lVar1 = param_3;
        func_0x00010c1057e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be85cc0(param_1,param_2,lVar1,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
      }
      else {
        param_1 = 0;
      }
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b262f8; end: 105b26497; -[SCCustomStoryMembersListRouterImpl _rankPreselectedSnapchatterIds:customStoryMetaData:] */

void FUN_105b262f8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105b26498;
  puStack_68 = &UNK_1108a9ea0;
  lStack_60 = param_1;
  _objc_retain(param_4);
  lStack_58 = param_4;
  func_0x000100504554();
  uVar8 = *(ulong *)(param_1 + 0x38);
  lVar1 = param_4;
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = param_3;
  if ((uVar8 & 1) == 0) {
    lVar1 = param_4;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = puVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  _objc_release(lStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  puVar4 = (undefined *)ppuVar7;
  func_0x00010c0720c0();
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    func_0x00010bf5a820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)ppuVar7;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (((ulong)puVar4 & 1) != 0) goto LAB_105b26514;
    _objc_retain(ppuVar7);
    puVar4 = (undefined *)ppuVar7;
  }
  else {
LAB_105b26514:
    puVar4 = (undefined *)0x0;
  }
  _objc_release(ppuVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b26498; end: 105b26543;  */

void FUN_105b26498(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf5a820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_2);
      uVar1 = param_2;
      goto LAB_105b26528;
    }
  }
  uVar1 = 0;
LAB_105b26528:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b26544; end: 105b26623; -[SCCustomStoryMembersListRouterImpl .cxx_destruct] */

void FUN_105b26544(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 105b26624; end: 105b267a7; -[SCCustomStoryMembersListWorkflow initWithRouter:delegate:publicationId:currentUserId:customStoriesDataFetcher:customStoriesDataMutator:enableViewMode:circumstanceEngine:] */

undefined1 *
FUN_105b26624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ebe98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = param_9;
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b267a8; end: 105b2689f; -[SCCustomStoryMembersListWorkflow beginWorkflow] */

void FUN_105b267a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf62500(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b268a0; end: 105b268e7;  */

void FUN_105b268a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b268e8; end: 105b26af7; -[SCCustomStoryMembersListWorkflow _beginForCustomStory:] */

void FUN_105b268e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74d20();
  }
  else {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar1 = param_3;
      func_0x00010c27dd80();
      if (lVar1 == 1) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        lVar1 = param_3;
        func_0x00010bf5a820(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar6,param_2,lVar2);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if ((int)uVar6 == 0) goto LAB_105b269b4;
LAB_105b26abc:
        uVar5 = *(undefined8 *)(param_1 + 8);
      }
      else {
LAB_105b269b4:
        lVar1 = param_3;
        func_0x00010c27dd80();
        if (lVar1 != 2) {
          lVar1 = param_3;
          func_0x00010c27dd80();
          if ((lVar1 != 6) && (lVar1 = param_3, func_0x00010c27dd80(), lVar1 != 10))
          goto LAB_105b26acc;
          lVar1 = param_3;
          func_0x00010bf5a820();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf5bbc0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0720c0();
          if ((int)lVar3 == 0) {
            lVar3 = param_3;
            func_0x00010c0d02e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf4b900();
            _objc_release(lVar3);
            _objc_release(lVar2);
            _objc_release(lVar1);
            if ((int)lVar4 == 0) {
              func_0x00010c10b080(*(undefined8 *)(param_1 + 8),param_2,param_3,param_1);
              goto LAB_105b26acc;
            }
          }
          else {
            _objc_release(lVar2);
            _objc_release(lVar1);
          }
          goto LAB_105b26abc;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        lVar1 = param_3;
        func_0x00010bf5a820(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar6,param_2,lVar2);
        _objc_release(lVar2);
        _objc_release(lVar1);
        uVar5 = *(undefined8 *)(param_1 + 8);
        if ((int)uVar6 == 0) goto LAB_105b2691c;
      }
      func_0x00010c10bf60(uVar5,param_2,param_3,param_1);
      goto LAB_105b26acc;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
LAB_105b2691c:
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10e100(uVar5,param_2,param_3,param_1);
  }
  _objc_release(param_1);
LAB_105b26acc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b26af8; end: 105b26cfb; -[SCCustomStoryMembersListWorkflow didUpdateMembersForCustomStory:updatedMemberIds:numOfSnapchattersSelected:numOfGroupsSelected:failureBlock:] */

void FUN_105b26af8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c27dd80();
  lVar3 = param_3;
  lVar4 = param_3;
  if (lVar1 == 1) {
    puVar2 = PTR_PTR_1126c2698;
    _objc_alloc();
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(param_3);
    uVar6 = 8;
    uVar5 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80();
    if (((lVar1 != 2) && (lVar1 = param_3, func_0x00010c27dd80(), lVar1 != 6)) &&
       (lVar1 = param_3, func_0x00010c27dd80(), lVar1 != 10)) goto LAB_105b26cb0;
    puVar2 = PTR_PTR_1126c2698;
    _objc_alloc();
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(param_3);
    uVar6 = 0xc;
    uVar5 = param_4;
  }
  func_0x00010c03bfe0(puVar2,param_2,lVar3,lVar4,uVar6,0,0,param_4,uVar5);
  _objc_release(lVar3);
  if (puVar2 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105b26cfc;
    puStack_60 = &UNK_1108d5ac0;
    _objc_retain(param_7);
    uStack_58 = param_7;
    func_0x00010c284e20(uVar5,param_2,puVar2,param_5,param_6,PTR___dispatch_main_q_11034be20,0,
                        &puStack_78);
    _objc_release(uVar5);
    _objc_release(uStack_58);
    _objc_release(puVar2);
  }
LAB_105b26cb0:
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74d20();
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b26cfc; end: 105b26d13;  */

void FUN_105b26cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105b26d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105b26d14; end: 105b26d3f; -[SCCustomStoryMembersListWorkflow didCancelEditMembers] */

void FUN_105b26d14(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b26d40; end: 105b26da7; -[SCCustomStoryMembersListWorkflow .cxx_destruct] */

void FUN_105b26d40(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b26da8; end: 105b26e53; -[SCCustomStoryMembersListCellModel initWithRecipientCellViewModel:badgeViewModel:] */

undefined1 *
FUN_105b26da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebea0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b26e54; end: 105b26e77; -[SCCustomStoryMembersListCellModel copyWithZone:] */

undefined8 FUN_105b26e54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b26e78; end: 105b26eeb; -[SCCustomStoryMembersListCellModel hash] */

undefined8 * FUN_105b26e78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105b26f6c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105b26f78;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105b26f78;
        }
        goto LAB_105b26f6c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105b26f78:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105b26eec; end: 105b26f93; -[SCCustomStoryMembersListCellModel isEqual:] */

long FUN_105b26eec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105b26f6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105b26f78;
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
          goto LAB_105b26f78;
        }
        goto LAB_105b26f6c;
      }
    }
    lVar3 = 0;
  }
LAB_105b26f78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105b26f94; end: 105b26f9b; -[SCCustomStoryMembersListCellModel recipientCellViewModel] */

undefined8 FUN_105b26f94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b26f9c; end: 105b26fa3; -[SCCustomStoryMembersListCellModel badgeViewModel] */

undefined8 FUN_105b26f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b26fa4; end: 105b26fd3; -[SCCustomStoryMembersListCellModel .cxx_destruct] */

void FUN_105b26fa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


