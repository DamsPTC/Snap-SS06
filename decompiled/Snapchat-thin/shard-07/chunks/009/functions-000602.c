/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b2a59c; end: 105b2a643; -[SCSelectionRecipientSectionDataSourceImpl selectionRecipientObservableForSectionIdentifier:query:selectionTracker:] */

void FUN_105b2a59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  func_0x00010be9e360(param_1,param_2,uVar1 & 0xffffffff,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2a644; end: 105b2a7fb; -[SCSelectionRecipientSectionDataSourceImpl _selectionRecipientObservableForSectionType:query:selectionTracker:] */

void FUN_105b2a644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  switch(param_3) {
  case 0:
    lVar1 = *(long *)(param_1 + 0x28);
    break;
  case 1:
    lVar1 = *(long *)(param_1 + 0x30);
    break;
  case 2:
  case 4:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105b2a774;
  case 3:
    func_0x00010be9e000(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105b2a7d4;
  case 5:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105b2a774;
  case 6:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105b2a774;
  case 7:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
code_r0x000105b2a774:
    param_1 = lVar1;
    func_0x00010c1541e0();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105b2a7c8;
  case 8:
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  case 9:
    lVar1 = *(long *)(param_1 + 0x48);
    break;
  case 10:
    func_0x00010bec8da0(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  default:
    goto LAB_105b2a7d4;
  }
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
code_r0x000105b2a7c8:
  _objc_release(lVar1);
LAB_105b2a7d4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2a7fc; end: 105b2a897; -[SCSelectionRecipientSectionDataSourceImpl _selectedRecipientObservableWithSelectionTracker:] */

void FUN_105b2a7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0ecca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2a898; end: 105b2a89f;  */

void FUN_105b2a898(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b2a8a0; end: 105b2a92f; -[SCSelectionRecipientSectionDataSourceImpl _suggestedRecipientsObservableWithTracker:] */

void FUN_105b2a8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0ecca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2620c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2a930; end: 105b2a937;  */

void FUN_105b2a930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b2a938; end: 105b2a9bb; -[SCSelectionRecipientSectionDataSourceImpl .cxx_destruct] */

void FUN_105b2a938(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105b2a9bc; end: 105b2a9c3;  */

void FUN_105b2a9bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c122f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_recipients_1126265e0);
  return;
}



/* Entry: 105b2a9c4; end: 105b2aa67; -[SCSelectionRecipientSectionDescriptor initWithSectionIdentifierMapping:sendToExperimentConfiguration:] */

undefined1 *
FUN_105b2a9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf38;
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



/* Entry: 105b2aa68; end: 105b2acdb; -[SCSelectionRecipientSectionDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_105b2aa68(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c282760();
  _objc_release(uVar5);
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = puVar6;
  _objc_retain(puVar6);
  uVar4 = (uint)uVar1;
  if ((int)uVar4 < 5) {
    if ((int)uVar4 < 3) {
      if (uVar4 < 2) goto LAB_105b2ab30;
      if (uVar4 == 2) {
LAB_105b2ab14:
        FUN_105b2ba38();
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar2;
      }
    }
    else if (uVar4 == 3) {
      func_0x000105b2ba50();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar2;
    }
    else if (uVar4 == 4) {
      func_0x000105b2ba68();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar2;
    }
  }
  else if ((int)uVar4 < 8) {
    if (uVar4 == 5) {
      func_0x000105b2ba98();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar2;
    }
    else if (uVar4 == 6) {
      func_0x000105b2ba80();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar2;
    }
    else if (uVar4 == 7) goto LAB_105b2ab14;
  }
  else if (uVar4 - 8 < 2) {
LAB_105b2ab30:
    func_0x000105b2bac8();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
  }
  else if (uVar4 == 10) {
    func_0x000105b2bab0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
  }
  _objc_release(puVar6);
  puVar2 = param_1;
  func_0x000106c9d38c(param_1,0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x000106c9c838();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  if (uVar4 != 10) {
    if (uVar4 != 3) goto LAB_105b2ac38;
    func_0x000106c9c808();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  _objc_release(puVar3);
LAB_105b2ac38:
  uVar1 = param_4;
  func_0x00010c11da20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000106c9c378(param_3,uVar1,puVar2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b2acdc; end: 105b2ad0b; -[SCSelectionRecipientSectionDescriptor .cxx_destruct] */

void FUN_105b2acdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2ad0c; end: 105b2adaf; -[SCSelectionRecipientIndexableSectionRepository initWithSectionIdentifier:sectionDataSource:] */

undefined1 *
FUN_105b2ad0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf40;
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



/* Entry: 105b2adb0; end: 105b2ae2f; -[SCSelectionRecipientIndexableSectionRepository recipientNumberObservable] */

void FUN_105b2adb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a900();
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



/* Entry: 105b2ae30; end: 105b2ae5f;  */

void FUN_105b2ae30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105b2ae60; end: 105b2ae8f; -[SCSelectionRecipientIndexableSectionRepository .cxx_destruct] */

void FUN_105b2ae60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2ae90; end: 105b2af33; -[SCSelectionRecipientSectionIndexer initWithSectionIdentifierMapping:sectionDataSource:] */

undefined1 *
FUN_105b2ae90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf48;
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



/* Entry: 105b2af34; end: 105b2afb7; -[SCSelectionRecipientSectionIndexer indexingItemForSectionIdentifier:] */

void FUN_105b2af34(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  func_0x00010be39000(param_1,param_2,param_3,uVar1 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2afb8; end: 105b2b067; -[SCSelectionRecipientSectionIndexer _indexingItemForSectionIdentifier:sectionType:] */

void FUN_105b2afb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c25c8;
  puVar2 = (undefined *)0x0;
  if ((param_4 < 10) && ((1L << (param_4 & 0x3f) & 0x303U) != 0)) {
    func_0x00010be38fe0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed3c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f8a458,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar2 = puVar1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b2b068; end: 105b2b0c3; -[SCSelectionRecipientSectionIndexer _indexableSectionRepositoryForSectionIdentifier:] */

void FUN_105b2b068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2738;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b2b0c4; end: 105b2b0f3; -[SCSelectionRecipientSectionIndexer .cxx_destruct] */

void FUN_105b2b0c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2b0f4; end: 105b2b247; -[SCSelectionRecipientSectionViewModelSourceImpl initWithSectionIdentifierMapping:friendmojiPresenter:messagingExperimentService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:includeSelectableContacts:] */

undefined1 *
FUN_105b2b0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ebf50;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    func_0x000108faa718(param_7);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105b2b248; end: 105b2b3a7; -[SCSelectionRecipientSectionViewModelSourceImpl selectionRecipientViewModelGeneratorForSectionIdentifier:] */

void FUN_105b2b248(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282760();
  _objc_release(uVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (((uint)uVar2 < 10) && ((0x30bU >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0)) {
    ppuVar4 = *(undefined ***)(&PTR_PTR_1108d5e20)[uVar2 & 0xffffffff];
    _objc_retain(ppuVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b2b3a8;
  puStack_70 = &UNK_1108d5d60;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  ppuStack_60 = ppuVar4;
  uStack_58 = uVar5;
  _objc_retain(uVar5);
  _objc_retain(ppuVar4);
  _objc_retain(param_3);
  ppuVar3 = &puStack_88;
  _objc_retainBlock(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(ppuStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(ppuVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105b2b3a8; end: 105b2b44f;  */

void FUN_105b2b3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be86fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b2b450; end: 105b2b6d7; -[SCSelectionRecipientSectionViewModelSourceImpl _recipientCellViewModelForSelectionRecipient:isSelected:isDisabled:row:totalCount:sectionIdentifier:indexSymbol:friendmojiPresenter:] */

void FUN_105b2b450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x7;
  undefined8 uVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105b2b6d8;
  uStack_88 = 0x105b2b6e8;
  uStack_80 = 0;
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  func_0x00010c0c0060(param_3);
  uVar1 = puStack_a0[5];
  _objc_retain(uVar1);
  _objc_release(in_x7);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_stack_00000000);
  _objc_release(in_stack_00000008);
  _objc_release(in_x7);
  _objc_release(in_stack_00000000);
  _objc_release(in_stack_00000008);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b2b6d8; end: 105b2b6ef;  */

void FUN_105b2b6d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b2b6f0; end: 105b2b83b;  */

void FUN_105b2b6f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar2 = param_2;
  func_0x00010901e254(param_2,3);
  uVar4 = 2;
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  uVar2 = param_2;
  func_0x000105e55ddc(*(undefined8 *)(param_1 + 0x50),param_2,uVar4,param_3,param_5,uVar1,
                      *(undefined1 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x59),0,
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
                      0xffffffffffffffff,param_4,1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b2b83c; end: 105b2b97b;  */

void FUN_105b2b83c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bfb97a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar9);
  uVar3 = *(undefined1 *)(param_1 + 0x58);
  uVar4 = *(undefined1 *)(param_1 + 0x59);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c07be00();
  uVar6 = param_2;
  func_0x000105e54ea4(uVar10,param_2,uVar5,uVar3,uVar4,uVar7,uVar9,uVar1,uVar2,0x1b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105b2b97c; end: 105b2b9e3;  */

void FUN_105b2b97c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x49);
  }
  else {
    uVar1 = 0;
  }
  func_0x000105e53d54(param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                      *(char *)(param_1 + 0x48),uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b2b9e4; end: 105b2ba37; -[SCSelectionRecipientSectionViewModelSourceImpl .cxx_destruct] */

void FUN_105b2b9e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2ba38; end: 105b2badf;  */

void FUN_105b2ba38(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1eb78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1eb78,
                      &PTR____CFConstantStringClassReference_110e1eb58,0);
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



/* Entry: 105b2bae0; end: 105b2bb53; -[SCSelectionSnapchatterSectionFriendingActionHandler initWithSnapchattersDataMutator:] */

undefined1 * FUN_105b2bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebf58;
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



/* Entry: 105b2bb54; end: 105b2bc47; -[SCSelectionSnapchatterSectionFriendingActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_105b2bb54(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae5c0;
    _objc_opt_class(PTR_PTR_1126ae5c0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = (ulong)(uVar1 != 0);
    if (uVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960();
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 105b2bc48; end: 105b2bc53; -[SCSelectionSnapchatterSectionFriendingActionHandler .cxx_destruct] */

void FUN_105b2bc48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2bc54; end: 105b2c017; -[SCSelectionSnapchatterSectionExtension initWithActionHandler:friendmojiPresenter:imageDownloader:newUserExperienceEnabled:performer:sectionIdentifierMapping:selectionTracker:selfUserId:snapchatterObservableRepository:snapchattersDataTracker:snapchattersDataMutator:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:searchClient:avatarFactory:] */

undefined8 *
FUN_105b2bc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ebf60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_11);
    _objc_retain(param_10);
    _objc_retain(param_17);
    _objc_retain(param_14);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar5 = param_8;
    func_0x00010bf002e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2748;
    _objc_alloc();
    func_0x00010bff0400();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2750;
    _objc_alloc();
    func_0x00010c0432e0();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2758;
    _objc_alloc();
    func_0x00010c043300();
    uVar5 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(param_14);
    _objc_release(param_17);
    _objc_release(param_10);
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
  }
  _objc_release(param_18);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b2c018; end: 105b2c04f;  */

void FUN_105b2c018(void)

{
  _objc_alloc(PTR_PTR_1126c2740);
  func_0x00010c034fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2c050; end: 105b2c057; -[SCSelectionSnapchatterSectionExtension sectionIdentifiers] */

undefined8 FUN_105b2c050(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b2c058; end: 105b2c05f; -[SCSelectionSnapchatterSectionExtension sectionCreator] */

undefined8 FUN_105b2c058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b2c060; end: 105b2c067; -[SCSelectionSnapchatterSectionExtension sectionDescriptor] */

undefined8 FUN_105b2c060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b2c068; end: 105b2c06f; -[SCSelectionSnapchatterSectionExtension sectionIndexer] */

undefined8 FUN_105b2c068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b2c070; end: 105b2c0b7; -[SCSelectionSnapchatterSectionExtension .cxx_destruct] */

void FUN_105b2c070(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2c0b8; end: 105b2c45f; -[SCSelectionSnapchatterSectionCreatorImpl initWithActionHandler:friendmojiPresenter:imageDownloader:sectionIdentifierMapping:sectionDataSource:selectionTracker:snapchattersDataTracker:snapchattersDataMutator:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:] */

undefined8 *
FUN_105b2c0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_88 = PTR_PTR_1126ebf68;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2768;
    _objc_alloc();
    func_0x00010c049c20();
    puVar4 = PTR_PTR_1126c2518;
    _objc_alloc(PTR_PTR_1126c2518);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = param_3;
    puStack_78 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0760(puVar4);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126c25b0;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar7 = param_6;
    func_0x00010bf002e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043480();
    uVar8 = puVar1[1];
    puVar1[1] = puVar6;
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_4);
    _objc_release(param_6);
  }
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR_PTR_1126c2760;
  _objc_alloc(PTR_PTR_1126c2760);
  func_0x00010c0432a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 105b2c460; end: 105b2c497;  */

void FUN_105b2c460(void)

{
  _objc_alloc(PTR_PTR_1126c2760);
  func_0x00010c0432a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2c498; end: 105b2c49f; -[SCSelectionSnapchatterSectionCreatorImpl sectionForDescriptor:] */

void FUN_105b2c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 105b2c4a0; end: 105b2c4ab; -[SCSelectionSnapchatterSectionCreatorImpl .cxx_destruct] */

void FUN_105b2c4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2c4ac; end: 105b2c887; -[SCSelectionSnapchatterSectionDataSourceImpl initWithPerformer:sectionIdentifierMapping:snapchatterObservableRepository:selfUserId:searchClient:circumstanceEngine:] */

undefined8 *
FUN_105b2c4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126ebf70;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
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
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105b2c888;
    puStack_a0 = &UNK_110854530;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105b2c8c8;
    puStack_c8 = &UNK_110854530;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105b2c908;
    puStack_f0 = &UNK_110854530;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_130 = puVar4;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x105b2c948;
    puStack_118 = &UNK_110854530;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_138,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b2c888; end: 105b2c9c7;  */

void FUN_105b2c888(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be846c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b2c9c8; end: 105b2ca93; -[SCSelectionSnapchatterSectionDataSourceImpl selectionSnapchatterObservableForSectionIdentifier:query:includeStoriesSummaryInfo:includeLocation:selectionTracker:] */

void FUN_105b2c9c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c282760();
  _objc_release(uVar3);
  func_0x00010bebd6e0(param_1,param_2,uVar1 & 0xffffffff,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  lVar2 = param_1;
  func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108d5ed0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105b2ca94; end: 105b2cbe3;  */

void FUN_105b2ca94(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  puVar4 = auStack_d8;
  uVar5 = 0x10;
  puVar1 = param_2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        puVar2 = PTR_PTR_1126c25b8;
        _objc_alloc();
        func_0x00010c049120();
        func_0x00010befa120(puVar6);
        _objc_release(puVar2);
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar4 = auStack_d8;
      uVar5 = 0x10;
      puVar1 = param_2;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  puVar6 = (undefined *)0x0;
  if ((long)puVar3 < 3) {
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = *(undefined **)(param_2 + 0x30);
    }
    else {
      if (puVar3 != (undefined8 *)0x1) {
        if (puVar3 == (undefined8 *)0x2) {
          func_0x00010be9de80(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_2;
        }
        goto LAB_105b2ccd4;
      }
      puVar6 = *(undefined **)(param_2 + 0x38);
    }
LAB_105b2ccc4:
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((long)puVar3 < 5) {
    if (puVar3 == (undefined8 *)0x3) {
      puVar6 = *(undefined **)(param_2 + 0x40);
      goto LAB_105b2ccc4;
    }
    if (puVar3 == (undefined8 *)0x4) {
      func_0x00010be9c6a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
    }
  }
  else if (puVar3 == (undefined8 *)0x5) {
    func_0x00010be9c5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
  }
  else if (puVar3 == (undefined8 *)0x7) {
    puVar6 = *(undefined **)(param_2 + 0x48);
    goto LAB_105b2ccc4;
  }
LAB_105b2ccd4:
  _objc_release(uVar5);
  _objc_release(puVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b2cbe4; end: 105b2ccfb; -[SCSelectionSnapchatterSectionDataSourceImpl _snapchatterObservableForSectionType:query:selectionTracker:] */

void FUN_105b2cbe4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = 0;
  if (param_3 < 3) {
    if (param_3 == 0) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    else {
      if (param_3 != 1) {
        if (param_3 == 2) {
          func_0x00010be9de80(param_1,param_2,param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_1;
        }
        goto LAB_105b2ccd4;
      }
      lVar1 = *(long *)(param_1 + 0x38);
    }
  }
  else if (param_3 < 5) {
    if (param_3 != 3) {
      if (param_3 == 4) {
        func_0x00010be9c6a0(param_1,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
      }
      goto LAB_105b2ccd4;
    }
    lVar1 = *(long *)(param_1 + 0x40);
  }
  else {
    if (param_3 == 5) {
      func_0x00010be9c5a0(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      goto LAB_105b2ccd4;
    }
    if (param_3 != 7) goto LAB_105b2ccd4;
    lVar1 = *(long *)(param_1 + 0x48);
  }
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_105b2ccd4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b2ccfc; end: 105b2cd6b; -[SCSelectionSnapchatterSectionDataSourceImpl _snapStarSnapchatterObservable] */

void FUN_105b2ccfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2cd6c; end: 105b2cd8b;  */

void FUN_105b2cd6c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108d5f10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2cd8c; end: 105b2cd93;  */

long FUN_105b2cd8c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010901d2a0(param_2);
  }
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 105b2cd94; end: 105b2ce07; -[SCSelectionSnapchatterSectionDataSourceImpl _quickAddSnapchatterObservable] */

void FUN_105b2cd94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2ce08; end: 105b2ced3; -[SCSelectionSnapchatterSectionDataSourceImpl _selectedFriendsObservableWithSelectionTracker:] */

void FUN_105b2ce08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0ecca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108425d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2445e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105b2ced4; end: 105b2d11b; -[SCSelectionSnapchatterSectionDataSourceImpl _recentMutualFriendsObservable] */

void FUN_105b2ced4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105b2cfa4;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = uVar4;
  _objc_retain(uVar4);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2d11c; end: 105b2d18b;  */

void FUN_105b2d11c(void)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined **ppuStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105b2dbe0;
  puStack_30 = &UNK_1108cb068;
  ppuStack_28 = &PTR___NSConcreteGlobalBlock_1108d5ff0;
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(ppuStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105b2d18c; end: 105b2d3d3; -[SCSelectionSnapchatterSectionDataSourceImpl _recentMutualFriendsAndSelfObservable] */

void FUN_105b2d18c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105b2d25c;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = uVar4;
  _objc_retain(uVar4);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2d3d4; end: 105b2d4a3; -[SCSelectionSnapchatterSectionDataSourceImpl _searchFriendsObservableForQuery:] */

void FUN_105b2d3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b2d4a4;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2d4a4; end: 105b2d4b7;  */

void FUN_105b2d4a4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar5);
  puVar1 = param_2;
  func_0x00010bf529e0();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_106c8c2b8;
    puStack_68 = &UNK_11096dda0;
    uStack_58 = 0;
    _objc_retain(uVar5);
    puVar1 = param_2;
    uStack_60 = uVar5;
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_11096dd80,&puStack_80);
    puStack_a8 = puVar2;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_106c8c368;
    puStack_90 = &UNK_11085a548;
    puStack_88 = puVar1;
    _objc_retain();
    puVar2 = param_2;
    func_0x0001006372a4(param_2,&puStack_a8);
    puVar3 = puVar1;
    func_0x000106c8bfa8(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c246ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_88);
    _objc_release(puVar1);
    _objc_release(uStack_60);
  }
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b2d4b8; end: 105b2d5df; -[SCSelectionSnapchatterSectionDataSourceImpl _searchClientObservableForQuery:] */

void FUN_105b2d4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c154960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c2656e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2d5e0; end: 105b2d5ff;  */

void FUN_105b2d5e0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108d5f70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2d600; end: 105b2d647;  */

void FUN_105b2d600(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf431a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b2d648; end: 105b2d75b;  */

void FUN_105b2d648(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    puVar2 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b2d75c; end: 105b2d847;  */

void FUN_105b2d75c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108d5f90);
  uVar1 = param_2;
  func_0x00010050471c();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105b2d880;
  puStack_50 = &UNK_110856a28;
  uStack_48 = uVar1;
  func_0x0001006372a4(uVar2,&puStack_68);
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2d848; end: 105b2d857;  */

bool FUN_105b2d848(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c439a8(param_2);
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return lVar2 != 0;
}



/* Entry: 105b2d858; end: 105b2d8bb;  */

void FUN_105b2d858(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b2d8bc; end: 105b2d8c7;  */

void FUN_105b2d8bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKey__1126159e0,param_2);
  return;
}



/* Entry: 105b2d8c8; end: 105b2d937; -[SCSelectionSnapchatterSectionDataSourceImpl _publishedOutgoingSnapchatterObservable] */

void FUN_105b2d8c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2d938; end: 105b2d9d3; -[SCSelectionSnapchatterSectionDataSourceImpl .cxx_destruct] */

void FUN_105b2d938(long param_1)

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



/* Entry: 105b2d9d4; end: 105b2da67;  */

uint FUN_105b2d9d4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((((uVar2 & 1) == 0) && (uVar1 = param_2, func_0x00010901ca64(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_2, func_0x000100bf119c(), (int)uVar1 != 0)) {
    uVar1 = param_2;
    func_0x000100bec434(param_2);
    uVar3 = (uint)uVar1 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105b2da68; end: 105b2db77;  */

ulong FUN_105b2da68(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  FUN_105b2db78();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_105b2db78();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar5 = (ulong)(uVar2 != 0);
    if (uVar1 != 0) {
      uVar5 = 0xffffffffffffffff;
      goto LAB_105b2db3c;
    }
  }
  else {
    uVar5 = uVar2;
    func_0x00010bf433a0();
  }
  if (uVar5 == 0) {
    uVar3 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010901d7c4(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf32ee0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
LAB_105b2db3c:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 105b2db78; end: 105b2dc53;  */

void FUN_105b2db78(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010901dae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010901e0a4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010901e044(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b2dc54; end: 105b2dcef;  */

uint FUN_105b2dc54(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010901ca64();
    if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x000100bf119c(), (int)uVar1 != 0)) {
      uVar1 = param_2;
      func_0x000100bec434(param_2);
      uVar3 = (uint)uVar1 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105b2dcf0; end: 105b2dd9b; -[SCSelectionSnapchatterSectionDescriptor initWithSectionIdentifierMapping:newUserExperienceEnabled:sendToExperimentConfiguration:] */

undefined1 *
FUN_105b2dcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ebf78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b2dd9c; end: 105b2dfb7; -[SCSelectionSnapchatterSectionDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_105b2dd9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c282760();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar8;
  _objc_retain(uVar8);
  iVar7 = (int)uVar1;
  if (iVar7 < 4) {
    if (iVar7 < 2) {
      if (iVar7 == 0) {
        func_0x000105b2e7dc();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
      }
      else if (iVar7 == 1) {
        func_0x000105b2e7f4();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
      }
      goto LAB_105b2deb4;
    }
    if (iVar7 == 2) {
      func_0x000105b2e80c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      goto LAB_105b2deb4;
    }
    if (iVar7 != 3) goto LAB_105b2deb4;
  }
  else {
    if (iVar7 - 4U < 2) {
      func_0x000105b2e824();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      goto LAB_105b2deb4;
    }
    if (iVar7 == 6) {
      func_0x000105b2e83c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      goto LAB_105b2deb4;
    }
    if (iVar7 != 7) goto LAB_105b2deb4;
  }
  func_0x000105b2e86c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
LAB_105b2deb4:
  _objc_release(uVar8);
  uVar1 = 0;
  if ((iVar7 == 1) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    func_0x000105b2e854();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
  }
  uVar2 = uVar6;
  func_0x000106c9d38c(uVar6,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x000106c9c838();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c11da20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = param_3;
  func_0x000106c9c378(param_3,uVar3,uVar2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b2dfb8; end: 105b2dfe7; -[SCSelectionSnapchatterSectionDescriptor .cxx_destruct] */

void FUN_105b2dfb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2dfe8; end: 105b2e08b; -[SCSelectionSnapchatterIndexableSectionRepository initWithSectionIdentifier:sectionDataSource:] */

undefined1 *
FUN_105b2dfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf80;
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



/* Entry: 105b2e08c; end: 105b2e113; -[SCSelectionSnapchatterIndexableSectionRepository recipientNumberObservable] */

void FUN_105b2e08c(long param_1)

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



/* Entry: 105b2e114; end: 105b2e143;  */

void FUN_105b2e114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105b2e144; end: 105b2e173; -[SCSelectionSnapchatterIndexableSectionRepository .cxx_destruct] */

void FUN_105b2e144(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2e174; end: 105b2e217; -[SCSelectionSnapchatterSectionIndexer initWithSectionIdentifierMapping:sectionDataSource:] */

undefined1 *
FUN_105b2e174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf88;
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



/* Entry: 105b2e218; end: 105b2e29b; -[SCSelectionSnapchatterSectionIndexer indexingItemForSectionIdentifier:] */

void FUN_105b2e218(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  func_0x00010be39000(param_1,param_2,param_3,uVar1 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2e29c; end: 105b2e347; -[SCSelectionSnapchatterSectionIndexer _indexingItemForSectionIdentifier:sectionType:] */

void FUN_105b2e29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c25c8;
  puVar2 = (undefined *)0x0;
  if ((param_4 < 8) && ((0x8bU >> (ulong)((uint)param_4 & 0x1f) & 1) != 0)) {
    uVar3 = *(undefined8 *)(&PTR_PTR_1108d6030)[param_4];
    func_0x00010be38fe0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed3c0(puVar1,param_2,uVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar2 = puVar1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b2e348; end: 105b2e3a3; -[SCSelectionSnapchatterSectionIndexer _indexableSectionRepositoryForSectionIdentifier:] */

void FUN_105b2e348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2770;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b2e3a4; end: 105b2e3d3; -[SCSelectionSnapchatterSectionIndexer .cxx_destruct] */

void FUN_105b2e3a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2e3d4; end: 105b2e4ef; -[SCSelectionSnapchatterSectionViewModelSourceImpl initWithSectionIdentifierMapping:friendmojiPresenter:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105b2e3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126ebf90;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    func_0x000108faa718(param_6);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105b2e4f0; end: 105b2e623; -[SCSelectionSnapchatterSectionViewModelSourceImpl snapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105b2e4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_70;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282760();
  _objc_release(uVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (((uint)uVar2 < 8) && ((0xcbU >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0)) {
    ppuVar4 = *(undefined ***)(&PTR_PTR_1108d60a0)[uVar2 & 0xffffffff];
    _objc_retain(ppuVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105b2e624;
  puStack_58 = &UNK_1108d6070;
  uStack_50 = uVar5;
  ppuStack_48 = ppuVar4;
  uStack_40 = param_3;
  _objc_retain(param_3);
  _objc_retain(ppuVar4);
  _objc_retain(uVar5);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_40);
  _objc_release(ppuStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105b2e624; end: 105b2e793;  */

void FUN_105b2e624(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c25b500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = uVar2;
  func_0x00010901e254(uVar2,3);
  uVar4 = 2;
  if ((int)uVar6 == 0) {
    uVar4 = 0;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = param_2;
  func_0x00010c07be00();
  _objc_release(param_2);
  uVar8 = uVar2;
  func_0x000105e55ddc(uVar9,uVar2,uVar4,uVar3,0,uVar5,param_3,param_4,0,param_5,uVar6,param_6,uVar1,
                      0xffffffffffffffff,0,1,(char)uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105b2e794; end: 105b2e7db; -[SCSelectionSnapchatterSectionViewModelSourceImpl .cxx_destruct] */

void FUN_105b2e794(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2e7dc; end: 105b2e883;  */

void FUN_105b2e7dc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1ec58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1ec58,
                      &PTR____CFConstantStringClassReference_110e1ec78,0);
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



/* Entry: 105b2e884; end: 105b2eb8b; -[SCSelectionSortableSnapchatterSectionExtension initWithActionHandler:friendmojiPresenter:imageDownloader:performer:newUserExperienceEnabled:sectionIdentifierMapping:selectionTracker:sortableSnapchatterObservableRepository:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:] */

undefined8 *
FUN_105b2e884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_70 = PTR_PTR_1126ebf98;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar5 = param_8;
    func_0x00010bf002e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2780;
    _objc_alloc();
    func_0x00010bff03a0();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2788;
    _objc_alloc();
    func_0x00010c0432e0();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2790;
    _objc_alloc();
    func_0x00010c043300();
    uVar5 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_6);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b2eb8c; end: 105b2ebbf;  */

void FUN_105b2eb8c(void)

{
  _objc_alloc(PTR_PTR_1126c2778);
  func_0x00010c035000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2ebc0; end: 105b2ebc7; -[SCSelectionSortableSnapchatterSectionExtension sectionIdentifiers] */

undefined8 FUN_105b2ebc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b2ebc8; end: 105b2ebcf; -[SCSelectionSortableSnapchatterSectionExtension sectionCreator] */

undefined8 FUN_105b2ebc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b2ebd0; end: 105b2ebd7; -[SCSelectionSortableSnapchatterSectionExtension sectionDescriptor] */

undefined8 FUN_105b2ebd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b2ebd8; end: 105b2ebdf; -[SCSelectionSortableSnapchatterSectionExtension sectionIndexer] */

undefined8 FUN_105b2ebd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b2ebe0; end: 105b2ec27; -[SCSelectionSortableSnapchatterSectionExtension .cxx_destruct] */

void FUN_105b2ebe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2ec28; end: 105b2eea3; -[SCSelectionSortableSnapchatterSectionCreatorImpl initWithActionHandler:friendmojiPresenter:imageDownloader:sectionDataSource:sectionIdentifierMapping:selectionTracker:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:] */

undefined8 *
FUN_105b2ec28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  puStack_70 = PTR_PTR_1126ebfa0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c27a0;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar4 = param_7;
    func_0x00010bf002e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0434c0();
    uVar6 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_4);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b2eea4; end: 105b2eed7;  */

void FUN_105b2eea4(void)

{
  _objc_alloc(PTR_PTR_1126c2798);
  func_0x00010c0160a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2eed8; end: 105b2eedf; -[SCSelectionSortableSnapchatterSectionCreatorImpl sectionForDescriptor:] */

void FUN_105b2eed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}


