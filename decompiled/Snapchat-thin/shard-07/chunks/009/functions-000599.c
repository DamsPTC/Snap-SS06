/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b1ca60; end: 105b1cbeb; -[SCSelectionBestFriendSectionDataSource initWithPerformer:snapchattersObservableRepository:] */

undefined8 *
FUN_105b1ca60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebe00;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b1cbec; end: 105b1cc3b; -[SCSelectionBestFriendSectionDataSource selectionSnapchatterObservableForSectionIdentifier:query:includeStoriesSummaryInfo:includeLocation:selectionTracker:] */

void FUN_105b1cbec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b1cc3c; end: 105b1cd8b;  */

void FUN_105b1cc3c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar4 = PTR_PTR_1126c25b8;
      _objc_alloc(PTR_PTR_1126c25b8);
      func_0x00010c049120();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 105b1cd8c; end: 105b1cd97; -[SCSelectionBestFriendSectionDataSource .cxx_destruct] */

void FUN_105b1cd8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1cd98; end: 105b1ce0b; -[SCSelectionBestFriendSectionDescriptor initWithSendToExperimentConfiguration:] */

undefined1 * FUN_105b1cd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebe08;
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



/* Entry: 105b1ce0c; end: 105b1cf0f; -[SCSelectionBestFriendSectionDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_105b1ce0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_105b1d6c8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106c9d38c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106c9c838();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c11da20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = param_3;
  func_0x000106c9c378(param_3,uVar4,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b1cf10; end: 105b1cf1b; -[SCSelectionBestFriendSectionDescriptor .cxx_destruct] */

void FUN_105b1cf10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1cf1c; end: 105b1cfbf; -[SCSelectionBestFriendIndexableSectionRepository initWithSectionIdentifier:sectionDataSource:] */

undefined1 *
FUN_105b1cf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebe10;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b1cfc0; end: 105b1d047; -[SCSelectionBestFriendIndexableSectionRepository recipientNumberObservable] */

void FUN_105b1cfc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b1d048; end: 105b1d077;  */

void FUN_105b1d048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105b1d078; end: 105b1d0a7; -[SCSelectionBestFriendIndexableSectionRepository .cxx_destruct] */

void FUN_105b1d078(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1d0a8; end: 105b1d11b; -[SCSelectionBestFriendSectionIndexer initSectionDataSource:] */

undefined1 * FUN_105b1d0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebe18;
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



/* Entry: 105b1d11c; end: 105b1d1a7; -[SCSelectionBestFriendSectionIndexer indexingItemForSectionIdentifier:] */

void FUN_105b1d11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c25c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043260();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c25c8;
  func_0x00010bfed3c0(PTR_PTR_1126c25c8,param_2,&PTR____CFConstantStringClassReference_110f8a438,
                      puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b1d1a8; end: 105b1d1b3; -[SCSelectionBestFriendSectionIndexer .cxx_destruct] */

void FUN_105b1d1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1d1b4; end: 105b1d2a7; -[SCSelectionBestFriendSectionViewModelSource initWithFriendmojiPresenter:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105b1d1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ebe20;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    func_0x000108faa718(param_5);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105b1d2a8; end: 105b1d387; -[SCSelectionBestFriendSectionViewModelSource snapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105b1d2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105b1d388;
  puStack_58 = &UNK_1108d57d0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105b1d388; end: 105b1d46f;  */

void FUN_105b1d388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07be00();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010be87000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105b1d470; end: 105b1d487; -[SCSelectionBestFriendSectionViewModelSource sectionLayoutGeneratorForSectionIdentifier:] */

undefined ** FUN_105b1d470(void)

{
  return &PTR___NSConcreteGlobalBlock_1108d5820;
}



/* Entry: 105b1d488; end: 105b1d68b; -[SCSelectionBestFriendSectionViewModelSource _recipientCellViewModelForSnapchatter:isSelected:isDisabled:row:totalCount:sectionIdentifier:friendmojiPresenter:addActivityIndicator:enableAvatarBackground:] */

void FUN_105b1d488(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010c269d40(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_9;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar3 = param_3;
  func_0x00010901e254(param_3,3);
  uVar1 = 2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  puVar4 = PTR_PTR_1126c25d0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235360();
  func_0x00010c0462c0();
  _objc_release(uVar5);
  uVar5 = param_3;
  if (param_7 < 4) {
    func_0x000105e55ddc(*(undefined8 *)(param_1 + 0x10),param_3,uVar1,0,0,uVar2,param_4,param_5,0,
                        param_6,&PTR____CFConstantStringClassReference_110f8a438,param_7,param_8,
                        0xffffffffffffffff,0,1,(undefined1)param_10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105e5668c(param_3,uVar1,0,uVar2,param_4,param_5,0,param_6,
                        &PTR____CFConstantStringClassReference_110f8a438,param_7,param_8,
                        CONCAT71(CONCAT61(CONCAT51(CONCAT41(uVar6,(char)uVar3),param_10._1_1_),
                                          (undefined1)param_10),1),puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105b1d68c; end: 105b1d6c7; -[SCSelectionBestFriendSectionViewModelSource .cxx_destruct] */

void FUN_105b1d68c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1d6c8; end: 105b1d6df;  */

void FUN_105b1d6c8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1e8b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1e8b8,
                      &PTR____CFConstantStringClassReference_110e1e8d8,0);
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



/* Entry: 105b1d6e0; end: 105b1d9bf; -[SCSelectionCurrentMemberSectionActionHandler initWithsectionDataSource:selectionTracker:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105b1d6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar7 = &uStack_70;
  _objc_retain(param_4);
  uVar8 = param_5;
  _objc_retain();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdb40);
  uVar1 = uVar8;
  func_0x00010beecc40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdb40);
  uVar1 = uVar8;
  func_0x00010beecc40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdb40);
  uVar1 = uVar8;
  func_0x00010beecc40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126afea0);
  uVar1 = uVar8;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdb40);
  uVar1 = uVar8;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar8);
  puStack_68 = PTR_PTR_1126ebe28;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFriendProfileScopeLaunch_1125e3050,uVar2,uVar3,uVar4,
                      param_4,param_5);
  _objc_release(param_5);
  if (puVar7 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11272fdb4;
    _objc_retain(uVar5);
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined8 *)((long)puVar7 + lVar9) = uVar5;
    _objc_release(uVar8);
    lVar9 = (long)_DAT_11272fdb8;
    _objc_retain(uVar6);
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined8 *)((long)puVar7 + lVar9) = uVar6;
    _objc_release(uVar8);
    lVar9 = (long)_DAT_11272fdbc;
    _objc_retain(param_4);
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined8 *)((long)puVar7 + lVar9) = param_4;
    _objc_release(uVar8);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return (undefined1 *)puVar7;
}



/* Entry: 105b1d9c0; end: 105b1d9e7;  */

void FUN_105b1d9c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_friendProfileScopeLauncher_1125cbba8);
  return;
}



/* Entry: 105b1d9e8; end: 105b1db3f; -[SCSelectionCurrentMemberSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined1 *
FUN_105b1d9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar5 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puStack_48 = PTR_PTR_1126ebe28;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_handleActionWithSender_actionMod_1125d19f8,param_3,param_4,
                        param_5);
    _objc_release(param_4);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar3 = PTR_PTR_1126c25d8;
    _objc_opt_class(PTR_PTR_1126c25d8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c2595a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be7e820(param_1);
    _objc_release(uVar2);
    puVar5 = (undefined8 *)0x1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar5;
}



/* Entry: 105b1db40; end: 105b1dc07; -[SCSelectionCurrentMemberSectionActionHandler _presentSharedStoryAllCurrentMembers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1db40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + _DAT_11272fdb8);
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23f40(lVar3,param_2,lVar2,lVar1,param_1,
                          *(undefined8 *)(param_1 + _DAT_11272fdc0),1,
                          *(undefined8 *)(param_1 + _DAT_11272fdbc));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_11272fdb4),param_2,lVar3,param_1);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1dc08; end: 105b1dc17; -[SCSelectionCurrentMemberSectionActionHandler didDismissCustomStoryMembers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1dc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272fdb4),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 105b1dc18; end: 105b1dc77; -[SCSelectionCurrentMemberSectionActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1dc18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272fdbc,0);
  _objc_storeStrong(param_1 + _DAT_11272fdc0,0);
  _objc_storeStrong(param_1 + _DAT_11272fdb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fdb4,0);
  return;
}



/* Entry: 105b1dc78; end: 105b1dec7; -[SCSelectionCurrentMemberSectionExtension initWithSectionIdentifiers:actionHanlder:imageDownloader:performer:selectionRecipientObservableRepository:snapchatterObservableRepository:selectionTracker:sectionExpansionModel:sectionDataSource:storyContext:friendmojiPresenter:avatarProvider:circumstanceEngine:sendToExperimentConfiguration:avatarFactory:] */

undefined8 *
FUN_105b1dc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  puStack_68 = PTR_PTR_1126ebe30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = in_stack_00000010;
    func_0x00010c269d40(in_stack_00000010);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206920();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c25e0;
    _objc_alloc();
    func_0x00010c042f60();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2808;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000108f58a2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0537a0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b2810;
    _objc_alloc_init();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b1dec8; end: 105b1decf; -[SCSelectionCurrentMemberSectionExtension sectionIdentifiers] */

undefined8 FUN_105b1dec8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b1ded0; end: 105b1ded7; -[SCSelectionCurrentMemberSectionExtension sectionCreator] */

undefined8 FUN_105b1ded0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b1ded8; end: 105b1dedf; -[SCSelectionCurrentMemberSectionExtension sectionDescriptor] */

undefined8 FUN_105b1ded8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b1dee0; end: 105b1dee7; -[SCSelectionCurrentMemberSectionExtension sectionIndexer] */

undefined8 FUN_105b1dee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b1dee8; end: 105b1df2f; -[SCSelectionCurrentMemberSectionExtension .cxx_destruct] */

void FUN_105b1dee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1df30; end: 105b1e0df; -[SCSelectionCurrentMemberSectionCreatorImpl initWithSectionDataSource:storyContext:actionHandler:imageDownloader:friendmojiPresenter:avatarProvider:circumstanceEngine:avatarFactory:] */

undefined8 *
FUN_105b1df30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ebe38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c25e8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c25f0;
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c009180();
    _objc_release(param_4);
    _objc_release(param_3);
    func_0x00010c042f80();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
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



/* Entry: 105b1e0e0; end: 105b1e0e7; -[SCSelectionCurrentMemberSectionCreatorImpl sectionForDescriptor:] */

void FUN_105b1e0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 105b1e0e8; end: 105b1e13b; -[SCSelectionCurrentMemberSectionCreatorImpl setUiContainer:] */

void FUN_105b1e0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c21b220(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1e13c; end: 105b1e143; -[SCSelectionCurrentMemberSectionCreatorImpl setPresentingViewController:] */

void FUN_105b1e13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setPresentingViewController__112655f88);
  return;
}



/* Entry: 105b1e144; end: 105b1e14b; -[SCSelectionCurrentMemberSectionCreatorImpl uiContainer] */

undefined8 FUN_105b1e144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b1e14c; end: 105b1e187; -[SCSelectionCurrentMemberSectionCreatorImpl .cxx_destruct] */

void FUN_105b1e14c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1e188; end: 105b1e193; +[SCCurrentMemberSectionViewAllCell containerStyle] */

undefined1  [16] FUN_105b1e188(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = 1;
  return auVar1;
}



/* Entry: 105b1e194; end: 105b1e29b; -[SCCurrentMemberSectionViewAllCell initWithFrame:] */

undefined1 * FUN_105b1e194(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ebe40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a880();
    _objc_release(puVar2);
    func_0x00010c160fc0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010c1d0120(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b1e29c; end: 105b1e447; -[SCCurrentMemberSectionViewAllCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1e29c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11272fde0;
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126c25f8;
  if ((uVar1 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + lVar9);
    _objc_retain(uVar8);
    _objc_opt_class(puVar2);
    uVar3 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar1 = uVar8;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126c25f8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar8 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    func_0x00010bf4b000(PTR_PTR_1126c2600);
    func_0x00010c20eaa0(param_1);
    uVar8 = uVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2711a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar8);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar3;
      func_0x00010c2711a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216540();
      _objc_release(lVar6);
      _objc_release(uVar8);
    }
    uVar8 = uVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar8;
    _objc_release(uVar7);
    func_0x00010c1cbe20(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1e448; end: 105b1e493; +[SCCurrentMemberSectionViewAllCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_105b1e448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bf4b000(PTR_PTR_1126c2600);
  func_0x00010bfe0740(PTR_PTR_1126c2600);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 105b1e494; end: 105b1e497; -[SCCurrentMemberSectionViewAllCell setSelected:] */

void FUN_105b1e494(void)

{
  return;
}



/* Entry: 105b1e498; end: 105b1e4d7; -[SCCurrentMemberSectionViewAllCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_105b1e498(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105b1e4d8; end: 105b1e57f; -[SCCurrentMemberSectionViewAllCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1e4d8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c25f8;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272fde4);
  uVar5 = *(ulong *)(param_1 + _DAT_11272fde0);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105b1e580; end: 105b1e58f; -[SCCurrentMemberSectionViewAllCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b1e580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272fde0);
}



/* Entry: 105b1e590; end: 105b1e59f; -[SCCurrentMemberSectionViewAllCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b1e590(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272fde4);
}



/* Entry: 105b1e5a0; end: 105b1e5df; -[SCCurrentMemberSectionViewAllCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1e5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272fde4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1e5e0; end: 105b1e5ff; -[SCCurrentMemberSectionViewAllCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1e5e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272fde8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b1e600; end: 105b1e613; -[SCCurrentMemberSectionViewAllCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1e600(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272fde8,param_3);
  return;
}



/* Entry: 105b1e614; end: 105b1e65f; -[SCCurrentMemberSectionViewAllCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1e614(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272fde8);
  _objc_storeStrong(param_1 + _DAT_11272fde4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fde0,0);
  return;
}



/* Entry: 105b1e660; end: 105b1e857; -[SCCurrentMemberSectionViewAllProvider initWithDataSource:storyContext:] */

undefined8 *
FUN_105b1e660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126ebe48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release();
    func_0x000108f58d5c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c25a4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0e0e60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b1e858; end: 105b1e89f;  */

void FUN_105b1e858(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1e8a0; end: 105b1e8ab; +[SCCurrentMemberSectionViewAllProvider viewMoreCellClass] */

void FUN_105b1e8a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126c2600);
  return;
}



/* Entry: 105b1e8ac; end: 105b1e8c7; +[SCCurrentMemberSectionViewAllProvider viewMoreCellReuseIdentifier] */

void FUN_105b1e8ac(void)

{
  _objc_opt_class(PTR_PTR_1126c2600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 105b1e8c8; end: 105b1e95b; -[SCCurrentMemberSectionViewAllProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

void FUN_105b1e8c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c25d8;
  _objc_alloc(PTR_PTR_1126c25d8);
  func_0x00010c0490c0();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar3 = PTR_PTR_1126c25f8;
  _objc_alloc(PTR_PTR_1126c25f8);
  func_0x00010c053900();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b1e95c; end: 105b1e963; -[SCCurrentMemberSectionViewAllProvider shouldRoundLastCellInList] */

undefined8 FUN_105b1e95c(void)

{
  return 0;
}



/* Entry: 105b1e964; end: 105b1ea1f; -[SCCurrentMemberSectionViewAllProvider _updateViewAllTextWithMemberCount:] */

void FUN_105b1e964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f58d44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c29dea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29dec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1ea20; end: 105b1ea37; -[SCCurrentMemberSectionViewAllProvider viewMoreProviderDelegate] */

void FUN_105b1ea20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b1ea38; end: 105b1ea43; -[SCCurrentMemberSectionViewAllProvider setViewMoreProviderDelegate:] */

void FUN_105b1ea38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105b1ea44; end: 105b1ea87; -[SCCurrentMemberSectionViewAllProvider .cxx_destruct] */

void FUN_105b1ea44(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1ea88; end: 105b1eb33; -[SCCurrentMemberSectionViewAllCellModel initWithTitle:tapActionModel:] */

undefined1 *
FUN_105b1ea88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebe50;
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



/* Entry: 105b1eb34; end: 105b1eb57; -[SCCurrentMemberSectionViewAllCellModel copyWithZone:] */

undefined8 FUN_105b1eb34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b1eb58; end: 105b1ebcb; -[SCCurrentMemberSectionViewAllCellModel hash] */

undefined8 * FUN_105b1eb58(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_105b1ec4c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105b1ec58;
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
          goto LAB_105b1ec58;
        }
        goto LAB_105b1ec4c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105b1ec58:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105b1ebcc; end: 105b1ec73; -[SCCurrentMemberSectionViewAllCellModel isEqual:] */

long FUN_105b1ebcc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105b1ec4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105b1ec58;
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
          goto LAB_105b1ec58;
        }
        goto LAB_105b1ec4c;
      }
    }
    lVar3 = 0;
  }
LAB_105b1ec58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105b1ec74; end: 105b1ec7b; -[SCCurrentMemberSectionViewAllCellModel title] */

undefined8 FUN_105b1ec74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b1ec7c; end: 105b1ec83; -[SCCurrentMemberSectionViewAllCellModel tapActionModel] */

undefined8 FUN_105b1ec7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b1ec84; end: 105b1ecb3; -[SCCurrentMemberSectionViewAllCellModel .cxx_destruct] */

void FUN_105b1ec84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1ecb4; end: 105b1edd7; -[SCCustomStoryMembersListActionHandler initWithFriendProfileScopeLauncher:storyMemberActionSheetLauncher:memberActionSheetScopeServices:selectionTracker:circumstanceEngine:] */

undefined1 *
FUN_105b1ecb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ebe58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b1edd8; end: 105b1ee07; -[SCCustomStoryMembersListActionHandler setUiContainer:] */

void FUN_105b1edd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1ee08; end: 105b1ee13; -[SCCustomStoryMembersListActionHandler setPresentingViewController:] */

void FUN_105b1ee08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105b1ee14; end: 105b1efdb; -[SCCustomStoryMembersListActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105b1ee14(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar5 = 0;
      goto LAB_105b1efbc;
    }
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c25d8;
    _objc_opt_class(PTR_PTR_1126c25d8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c244280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c2595a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be7e840(param_1);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c25d8;
    _objc_opt_class(PTR_PTR_1126c25d8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c244280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c2595a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be7b7e0(param_1);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar5 = 1;
LAB_105b1efbc:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 105b1efdc; end: 105b1f103; -[SCCustomStoryMembersListActionHandler _presentFriendProfileForSnapchatter:storyContext:] */

void FUN_105b1efdc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (*(long *)(param_1 + 8) != 0)) {
    uVar1 = param_4;
    func_0x00010bf60940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR_PTR_1126b3fa0;
      _objc_alloc();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        func_0x00010c0159e0();
      }
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,param_1);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b1f104; end: 105b1f10b; -[SCCustomStoryMembersListActionHandler friendProfileDidDismiss:] */

void FUN_105b1f104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 105b1f10c; end: 105b1f30b; -[SCCustomStoryMembersListActionHandler _presentSharedStoryMemberSheetForSnapchatter:storyContext:] */

void FUN_105b1f10c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = param_4;
      func_0x00010c25a6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010bf60940(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c25a580();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010bf60940(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf4b900(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (((uVar5 & 1) != 0) || ((int)uVar6 != 0)) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c076220();
        if (iVar1 != 0) {
          func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x20));
        }
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = param_4;
        func_0x00010c259cc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c25a6c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_4;
        func_0x00010c25a580(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_4;
        func_0x00010bf60940(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf23a80(uVar7,param_2,uVar3,uVar4,uVar5,uVar6,lVar2,param_3,param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar7,param_1);
        _objc_release(uVar7);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f30c; end: 105b1f343; -[SCCustomStoryMembersListActionHandler customStoryMemberActionSheetScopeDelegateDidDismiss:] */

void FUN_105b1f30c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 105b1f344; end: 105b1f383; -[SCCustomStoryMembersListActionHandler customStoryActionSheetDidTransferOwnership:] */

void FUN_105b1f344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be884e0(param_1);
  func_0x00010bdf7920(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f384; end: 105b1f41f; -[SCCustomStoryMembersListActionHandler customStoryActionSheetDidRemoveMemberWithScope:] */

void FUN_105b1f384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be884e0(param_1);
  func_0x00010bf62340(param_1,param_2,param_3);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar1 = param_3;
    func_0x00010c244280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108ef82c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb940(lVar3,param_2,uVar2,0,&PTR____CFConstantStringClassReference_110e1e918);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f420; end: 105b1f45f; -[SCCustomStoryMembersListActionHandler customStoryActionSheetDidSetMemberAsModerator:] */

void FUN_105b1f420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be884e0(param_1);
  func_0x00010bdf7920(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f460; end: 105b1f49f; -[SCCustomStoryMembersListActionHandler customStoryActionSheetDidDemoteMemberAsModerator:] */

void FUN_105b1f460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be884e0(param_1);
  func_0x00010bdf7920(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f4a0; end: 105b1f4df; -[SCCustomStoryMembersListActionHandler customStoryActionSheetDidBanMember:] */

void FUN_105b1f4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be884e0(param_1);
  func_0x00010bdf7920(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f4e0; end: 105b1f51f; -[SCCustomStoryMembersListActionHandler _customStoryActionSheetDidUpdateStoryMemberMembership:] */

void FUN_105b1f4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be884e0(param_1);
  func_0x00010bf62340(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1f520; end: 105b1f583; -[SCCustomStoryMembersListActionHandler _refreshCustomStoryMemberListViewController] */

void FUN_105b1f520(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126c2608;
  _objc_opt_class(PTR_PTR_1126c2608);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010bfb50a0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1f584; end: 105b1f5eb; -[SCCustomStoryMembersListActionHandler .cxx_destruct] */

void FUN_105b1f584(long param_1)

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



/* Entry: 105b1f5ec; end: 105b1fbfb; -[SCCustomStoryMembersListEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1f5ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar25 = (long)_DAT_11272fe20;
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2610;
  _objc_alloc();
  func_0x00010c02ca60();
  puVar5 = PTR_PTR_1126b5350;
  _objc_alloc();
  func_0x00010c041f80();
  puVar6 = PTR_PTR_1126c2618;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272fe2c;
  _objc_loadWeakRetained(lVar1);
  lVar23 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar23);
  lVar7 = lVar23;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11272fe30;
  lVar8 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0159c0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar23);
  _objc_release(lVar1);
  lVar23 = (long)_DAT_11272fe34;
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar11 = lVar23;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272fe38;
  _objc_loadWeakRetained();
  lVar23 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar23;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272fe3c;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272fe40;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar16 = PTR_PTR_1126c2620;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272fe48;
  _objc_loadWeakRetained(lVar1);
  lVar23 = param_1 + _DAT_11272fe4c;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272fe50;
  _objc_loadWeakRetained();
  lVar17 = lVar8;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar18 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272fe54;
  _objc_loadWeakRetained();
  lVar19 = lVar9;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0587a0();
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar1);
  lVar23 = (long)_DAT_11272fe58;
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar7 = lVar23;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  puVar20 = PTR_PTR_1126c2628;
  _objc_alloc();
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  func_0x00010bf92480();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar23 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0407a0();
  lVar24 = (long)_DAT_11272fe5c;
  uVar22 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar20;
  _objc_release(uVar22);
  _objc_release(lVar23);
  _objc_release(lVar21);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar1);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar24));
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar2);
  return;
}



/* Entry: 105b1fbfc; end: 105b1fc3b;  */

void FUN_105b1fbfc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9ccc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b1fc3c; end: 105b1fe9b; -[SCCustomStoryMembersListEntryPoint _sectionDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1fc3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  
  lVar14 = (long)_DAT_11272fe20;
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar15 == 0) {
    puVar2 = PTR_PTR_1126c2630;
    _objc_alloc(PTR_PTR_1126c2630);
    puVar3 = (undefined *)(param_1 + lVar14);
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11272fe58;
    lVar1 = param_1 + lVar15;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + lVar15;
    _objc_loadWeakRetained();
    lVar6 = lVar15;
    func_0x00010bf620a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_11272fe34;
    lVar14 = param_1 + lVar16;
    _objc_loadWeakRetained();
    lVar7 = lVar14;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar16;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar16;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf1d740();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + lVar16;
    _objc_loadWeakRetained();
    lVar12 = lVar16;
    func_0x00010c244b40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_11272fe30;
    _objc_loadWeakRetained();
    lVar13 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03be20(puVar2,param_2,puVar4,lVar5,lVar6,lVar7,lVar9,lVar11,lVar12,lVar13);
    _objc_release(lVar13);
    _objc_release(param_1);
    _objc_release(lVar12);
    _objc_release(lVar16);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar6);
    _objc_release(lVar15);
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  else {
    puVar3 = (undefined *)(param_1 + lVar14);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b1fe9c; end: 105b1ff8b; -[SCCustomStoryMembersListEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1fe9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272fe48);
  _objc_storeStrong(param_1 + _DAT_11272fe28,0);
  _objc_storeStrong(param_1 + _DAT_11272fe24,0);
  _objc_storeStrong(param_1 + _DAT_11272fe44,0);
  _objc_destroyWeak(param_1 + _DAT_11272fe54);
  _objc_destroyWeak(param_1 + _DAT_11272fe50);
  _objc_destroyWeak(param_1 + _DAT_11272fe40);
  _objc_destroyWeak(param_1 + _DAT_11272fe30);
  _objc_destroyWeak(param_1 + _DAT_11272fe3c);
  _objc_destroyWeak(param_1 + _DAT_11272fe4c);
  _objc_destroyWeak(param_1 + _DAT_11272fe34);
  _objc_destroyWeak(param_1 + _DAT_11272fe58);
  _objc_destroyWeak(param_1 + _DAT_11272fe2c);
  _objc_destroyWeak(param_1 + _DAT_11272fe38);
  _objc_destroyWeak(param_1 + _DAT_11272fe20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fe5c,0);
  return;
}



/* Entry: 105b1ff8c; end: 105b1ffff; -[SCCustomStoryMembersListSectionCoordinator initWithCircumstanceEngine:] */

undefined1 * FUN_105b1ff8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebe60;
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



/* Entry: 105b20000; end: 105b20007; -[SCCustomStoryMembersListSectionCoordinator canPerformQuery:] */

undefined8 FUN_105b20000(void)

{
  return 1;
}



/* Entry: 105b20008; end: 105b2000b; -[SCCustomStoryMembersListSectionCoordinator resultsForQuery:updatingBlock:] */

void FUN_105b20008(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resultsWithIndexViewForQuery_upd_11262ce48);
  return;
}



/* Entry: 105b2000c; end: 105b20383; -[SCCustomStoryMembersListSectionCoordinator resultsWithIndexViewForQuery:updatingBlock:] */

void FUN_105b2000c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar7 = param_3;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  if (lVar2 == 0) {
    lVar7 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b16f8;
      _objc_retain(param_3);
      _objc_alloc(puVar4);
      func_0x00010c028e00();
      puVar5 = PTR_PTR_1126b1700;
      _objc_alloc(PTR_PTR_1126b1700);
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297340(0x4020000000000000,0,0x402c000000000000,0,
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c11da20(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      func_0x00010c043020(0,puVar5);
      _objc_release(lVar2);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b1260;
      _objc_alloc(PTR_PTR_1126b1260);
      func_0x00010c055bc0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010befa120(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x1b);
  }
  else {
    puVar3 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    puVar4 = PTR_PTR_1126b16f8;
    _objc_retain(param_3);
    _objc_alloc(puVar4);
    func_0x00010c028e00();
    puVar5 = PTR_PTR_1126b1700;
    _objc_alloc(PTR_PTR_1126b1700);
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(0x4020000000000000,0,0x402c000000000000,0,
                        PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c043020(0,puVar5);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010c055bc0(puVar3);
    _objc_release(puVar5);
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
  }
  puVar4 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c042a40(puVar4);
  (**(code **)(param_4 + 0x10))(param_4,puVar4,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b20384; end: 105b2038b; -[SCCustomStoryMembersListSectionCoordinator currentQuery] */

undefined8 FUN_105b20384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b2038c; end: 105b20393; -[SCCustomStoryMembersListSectionCoordinator setCurrentQuery:] */

void FUN_105b2038c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105b20394; end: 105b2039b; -[SCCustomStoryMembersListSectionCoordinator isLoading] */

undefined1 FUN_105b20394(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105b2039c; end: 105b203cb; -[SCCustomStoryMembersListSectionCoordinator .cxx_destruct] */

void FUN_105b2039c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b203cc; end: 105b205ab; -[SCCustomStoryMembersListSectionCreator initWithSectionDataSource:storyContext:actionHandler:imageDownloader:friendmojiPresenter:avatarProvider:circumstanceEngine:searchEnabled:viewMoreProvider:avatarFactory:] */

undefined8 *
FUN_105b203cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ebe68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b205ac; end: 105b2075b; -[SCCustomStoryMembersListSectionCreator sectionForDescriptor:] */

void FUN_105b205ac(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1[0x48] == '\x01') {
    func_0x00010c155d00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126b5240;
    _objc_opt_class(PTR_PTR_1126b5240);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c155ea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b5398;
      _objc_alloc(PTR_PTR_1126b5398);
      func_0x00010c01a160();
      _objc_release(uVar2);
    }
    puVar4 = PTR_PTR_1126c2638;
    _objc_alloc(PTR_PTR_1126c2638);
    func_0x00010c0091a0();
    param_1 = PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    func_0x00010c1f9240();
    func_0x00010c222a60(param_1);
    func_0x00010c161980(param_1);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2075c; end: 105b20957; -[SCCustomStoryMembersListSectionCreator sectionForDescriptorWithIndexView:] */

void FUN_105b2075c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if (((ulong)ppuVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b55e0;
    _objc_alloc(PTR_PTR_1126b55e0);
    ppuVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf4bb00();
    if ((int)ppuVar2 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar4 = ppuVar1;
      func_0x00010c08fa60(ppuVar1);
      ppuVar2 = ppuVar1;
      func_0x00010c260c00(ppuVar1,param_2,(long)ppuVar4 + -1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c019300(puVar3,param_2,2,ppuVar2,0,0,0);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    puVar6 = PTR_PTR_1126b5398;
    _objc_alloc(PTR_PTR_1126b5398);
    func_0x00010c01a160();
    _objc_release(puVar3);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b20958;
  puStack_50 = &UNK_1108d5930;
  ppuStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  puVar5 = PTR_PTR_1126c2638;
  _objc_alloc(PTR_PTR_1126c2638);
  func_0x00010c0091a0();
  func_0x00010c1f9240(puVar3,param_2,puVar5);
  func_0x00010c161980(puVar3,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  _objc_release(ppuStack_48);
  _objc_release(param_3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


