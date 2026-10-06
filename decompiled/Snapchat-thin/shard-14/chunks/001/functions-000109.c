/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afe4ff8; end: 10afe4fff; -[SCRecipientPickerUpdateGeneratorEvent confirmationModelGenerator] */

undefined8 FUN_10afe4ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe5000; end: 10afe5007; -[SCRecipientPickerUpdateGeneratorEvent headerModelGenerator] */

undefined8 FUN_10afe5000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe5008; end: 10afe5037; -[SCRecipientPickerUpdateGeneratorEvent .cxx_destruct] */

void FUN_10afe5008(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe5038; end: 10afe51d3;  */

void FUN_10afe5038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f48778;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f488f8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f48958;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f48918;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f48938;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f487d8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f48818;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f48838;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f48858;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f48878;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f48898;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f488b8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f488d8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_80,0xd);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    uStack_88 = 0x10afe50dc;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f487f8;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      uStack_a8 = 0x10afe514c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110f489b8;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110f489f8;
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110f48a18;
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110f48a38;
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110f48998;
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110f48978;
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110f48a58;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110f489d8;
      pppuVar4 = &ppuStack_f8;
      ppuStack_b0 = &puStack_90;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar4,8);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        _objc_retain(pppuVar4);
        puVar1 = PTR_PTR_1126b27e0;
        _objc_alloc();
        puVar2 = puVar1;
        func_0x00010c069400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        *(undefined8 *)(puVar2 + 8) = 10;
        uVar3 = *(undefined8 *)(puVar2 + 0x70);
        *(undefined ****)(puVar2 + 0x70) = pppuVar4;
        _objc_release(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe51d4; end: 10afe523f; +[SCRecipientPickerEvent availableSectionsLoadedWithSectionIdentifierToSelectionItemsMap:] */

void FUN_10afe51d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5240; end: 10afe530b; +[SCRecipientPickerEvent confirmWithSelectedItems:title:selectedItemAttributions:] */

void FUN_10afe5240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe530c; end: 10afe53d7; +[SCRecipientPickerEvent didDismissWithSelectedItems:title:selectedItemAttributions:] */

void FUN_10afe530c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe53d8; end: 10afe5423; +[SCRecipientPickerEvent didRender] */

void FUN_10afe53d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5424; end: 10afe546f; +[SCRecipientPickerEvent needsDismissal] */

void FUN_10afe5424(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5470; end: 10afe54bb; +[SCRecipientPickerEvent requestHeaderTextFieldFocus] */

void FUN_10afe5470(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe54bc; end: 10afe5527; +[SCRecipientPickerEvent scrollToSectionWithSectionIdentifier:] */

void FUN_10afe54bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5528; end: 10afe5593; +[SCRecipientPickerEvent searchWithKeyword:] */

void FUN_10afe5528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5594; end: 10afe55df; +[SCRecipientPickerEvent titleTextFieldDidBeginEditing] */

void FUN_10afe5594(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe55e0; end: 10afe562b; +[SCRecipientPickerEvent topButtonPressed] */

void FUN_10afe55e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe562c; end: 10afe5697; +[SCRecipientPickerEvent updateGeneratorsWithUpdateGenerators:] */

void FUN_10afe562c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5698; end: 10afe5703; +[SCRecipientPickerEvent userInputtedTitleWithTitle:] */

void FUN_10afe5698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe5704; end: 10afe575b; +[SCRecipientPickerEvent viewDidLoadWithSectionExtensionsLoaded:] */

void FUN_10afe5704(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe575c; end: 10afe57f3; +[SCRecipientPickerEvent violateWithSelectedItems:confirmationModel:] */

void FUN_10afe575c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b27e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe57f4; end: 10afe58f7; -[SCRecipientPickerEvent hash] */

void FUN_10afe57f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_c8 = PTR_PTR_112703f68;
  puStack_d0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe58f8; end: 10afe593b; -[SCRecipientPickerEvent internalInit] */

void FUN_10afe58f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703f68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe593c; end: 10afe5b0b; -[SCRecipientPickerEvent isEqual:] */

long FUN_10afe593c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe5ae4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe5af0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x78);
                              if (lVar3 != *(long *)(param_3 + 0x78)) {
                                func_0x00010c071ae0();
                                goto LAB_10afe5af0;
                              }
                              goto LAB_10afe5ae4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe5af0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe5b0c; end: 10afe5dc3; -[SCRecipientPickerEvent matchViewDidLoad:didDismiss:needsDismissal:confirm:search:violate:topButtonPressed:requestHeaderTextFieldFocus:updateGenerators:userInputtedTitle:availableSectionsLoaded:didRender:titleTextFieldDidBeginEditing:scrollToSection:] */

void FUN_10afe5b0c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
    }
    goto LAB_10afe5d38;
  case 1:
    if (param_4 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    pcVar5 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
    goto code_r0x00010afe5cc4;
  case 2:
    if (param_5 == 0) goto LAB_10afe5d38;
    pcVar5 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    break;
  case 3:
    if (param_6 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    pcVar5 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
code_r0x00010afe5cc4:
    (*pcVar5)(lVar1,uVar2,uVar3,uVar4);
    goto LAB_10afe5d38;
  case 4:
    if (param_7 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    pcVar5 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x00010afe5d34;
  case 5:
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))
                (param_8,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
    goto LAB_10afe5d38;
  case 6:
    if (param_9 == 0) goto LAB_10afe5d38;
    pcVar5 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_10afe5d38;
    pcVar5 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    pcVar5 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    goto code_r0x00010afe5d34;
  case 9:
    if (param_12 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    pcVar5 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    goto code_r0x00010afe5d34;
  case 10:
    if (param_13 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    pcVar5 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    goto code_r0x00010afe5d34;
  case 0xb:
    if (param_14 == 0) goto LAB_10afe5d38;
    pcVar5 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    break;
  case 0xc:
    if (param_15 == 0) goto LAB_10afe5d38;
    pcVar5 = *(code **)(param_15 + 0x10);
    lVar1 = param_15;
    break;
  case 0xd:
    if (param_16 == 0) goto LAB_10afe5d38;
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    pcVar5 = *(code **)(param_16 + 0x10);
    lVar1 = param_16;
code_r0x00010afe5d34:
    (*pcVar5)(lVar1,uVar2);
  default:
    goto LAB_10afe5d38;
  }
  (*pcVar5)(lVar1);
LAB_10afe5d38:
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe5dc4; end: 10afe5e77; -[SCRecipientPickerEvent .cxx_destruct] */

void FUN_10afe5dc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afe5e78; end: 10afe5f77; -[SCRecipientPickerHeaderModel initWithTitle:titlePlaceholder:isTitleEditable:topRightButtonImage:showPillsInSearch:focusSearchOnPresentation:] */

undefined1 *
FUN_10afe5e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112703f70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe5f78; end: 10afe5f9b; -[SCRecipientPickerHeaderModel copyWithZone:] */

undefined8 FUN_10afe5f78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe5f9c; end: 10afe602b; -[SCRecipientPickerHeaderModel hash] */

undefined8 * FUN_10afe5f9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_58;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe60f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe6100;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10afe6100;
          }
          goto LAB_10afe60f4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe6100:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe602c; end: 10afe611b; -[SCRecipientPickerHeaderModel isEqual:] */

long FUN_10afe602c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe60f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe6100;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10afe6100;
          }
          goto LAB_10afe60f4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe6100:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe611c; end: 10afe6123; -[SCRecipientPickerHeaderModel title] */

undefined8 FUN_10afe611c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe6124; end: 10afe612b; -[SCRecipientPickerHeaderModel titlePlaceholder] */

undefined8 FUN_10afe6124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe612c; end: 10afe6133; -[SCRecipientPickerHeaderModel isTitleEditable] */

undefined1 FUN_10afe612c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe6134; end: 10afe613b; -[SCRecipientPickerHeaderModel topRightButtonImage] */

undefined8 FUN_10afe6134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe613c; end: 10afe6143; -[SCRecipientPickerHeaderModel showPillsInSearch] */

undefined1 FUN_10afe613c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afe6144; end: 10afe614b; -[SCRecipientPickerHeaderModel focusSearchOnPresentation] */

undefined1 FUN_10afe6144(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afe614c; end: 10afe6187; -[SCRecipientPickerHeaderModel .cxx_destruct] */

void FUN_10afe614c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe6188; end: 10afe61a3; +[SCRecipientPickerHeaderModelBuilder recipientPickerHeaderModel] */

void FUN_10afe6188(void)

{
  _objc_alloc_init(PTR_PTR_1126df318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe61a4; end: 10afe634b; +[SCRecipientPickerHeaderModelBuilder recipientPickerHeaderModelFromExistingRecipientPickerHeaderModel:] */

void FUN_10afe61a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126df318;
  _objc_retain(param_3);
  func_0x00010c122ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb3c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2715a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2bb400(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c081280(param_3);
  puVar7 = puVar5;
  func_0x00010c2b1880(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c274840(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2bb4e0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c239160(param_3);
  puVar10 = puVar8;
  func_0x00010c2b8ec0(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bfb3680(param_3);
  _objc_release(param_3);
  puVar11 = puVar10;
  func_0x00010c2ae480(puVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10afe634c; end: 10afe638b; -[SCRecipientPickerHeaderModelBuilder build] */

void FUN_10afe634c(void)

{
  _objc_alloc(PTR_PTR_1126b2890);
  func_0x00010c0539a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe638c; end: 10afe63c3; -[SCRecipientPickerHeaderModelBuilder withTitle:] */

long FUN_10afe638c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe63c4; end: 10afe63fb; -[SCRecipientPickerHeaderModelBuilder withTitlePlaceholder:] */

long FUN_10afe63c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe63fc; end: 10afe6403; -[SCRecipientPickerHeaderModelBuilder withIsTitleEditable:] */

void FUN_10afe63fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10afe6404; end: 10afe643b; -[SCRecipientPickerHeaderModelBuilder withTopRightButtonImage:] */

long FUN_10afe6404(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe643c; end: 10afe6443; -[SCRecipientPickerHeaderModelBuilder withShowPillsInSearch:] */

void FUN_10afe643c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afe6444; end: 10afe644b; -[SCRecipientPickerHeaderModelBuilder withFocusSearchOnPresentation:] */

void FUN_10afe6444(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 10afe644c; end: 10afe6487; -[SCRecipientPickerHeaderModelBuilder .cxx_destruct] */

void FUN_10afe644c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe6488; end: 10afe654b; -[SCRecipientPickerConfirmationModel initWithTitle:isEnabled:violation:confirmationViolationOnly:] */

undefined1 *
FUN_10afe6488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112703f78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe654c; end: 10afe656f; -[SCRecipientPickerConfirmationModel copyWithZone:] */

undefined8 FUN_10afe654c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe6570; end: 10afe65eb; -[SCRecipientPickerConfirmationModel hash] */

undefined8 * FUN_10afe6570(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe668c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe6698;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10afe6698;
        }
        goto LAB_10afe668c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe6698:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe65ec; end: 10afe66b3; -[SCRecipientPickerConfirmationModel isEqual:] */

long FUN_10afe65ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe668c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe6698;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afe6698;
        }
        goto LAB_10afe668c;
      }
    }
    lVar3 = 0;
  }
LAB_10afe6698:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe66b4; end: 10afe66bb; -[SCRecipientPickerConfirmationModel title] */

undefined8 FUN_10afe66b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe66bc; end: 10afe66c3; -[SCRecipientPickerConfirmationModel isEnabled] */

undefined1 FUN_10afe66bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe66c4; end: 10afe66cb; -[SCRecipientPickerConfirmationModel violation] */

undefined8 FUN_10afe66c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe66cc; end: 10afe66d3; -[SCRecipientPickerConfirmationModel confirmationViolationOnly] */

undefined1 FUN_10afe66cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afe66d4; end: 10afe6703; -[SCRecipientPickerConfirmationModel .cxx_destruct] */

void FUN_10afe66d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe6704; end: 10afe671f; +[SCRecipientPickerConfirmationModelBuilder recipientPickerConfirmationModel] */

void FUN_10afe6704(void)

{
  _objc_alloc_init(PTR_PTR_1126b2898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe6720; end: 10afe684f; +[SCRecipientPickerConfirmationModelBuilder recipientPickerConfirmationModelFromExistingRecipientPickerConfirmationModel:] */

void FUN_10afe6720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain(param_3);
  func_0x00010c122c60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb3c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c071800(param_3);
  puVar5 = puVar3;
  func_0x00010c2b06a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29f8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2bca60(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf48140(param_3);
  _objc_release(param_3);
  puVar8 = puVar6;
  func_0x00010c2aac60(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10afe6850; end: 10afe688b; -[SCRecipientPickerConfirmationModelBuilder build] */

void FUN_10afe6850(void)

{
  _objc_alloc(PTR_PTR_1126b28a0);
  func_0x00010c053160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe688c; end: 10afe68c3; -[SCRecipientPickerConfirmationModelBuilder withTitle:] */

long FUN_10afe688c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe68c4; end: 10afe68cb; -[SCRecipientPickerConfirmationModelBuilder withIsEnabled:] */

void FUN_10afe68c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afe68cc; end: 10afe6903; -[SCRecipientPickerConfirmationModelBuilder withViolation:] */

long FUN_10afe68cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe6904; end: 10afe690b; -[SCRecipientPickerConfirmationModelBuilder withConfirmationViolationOnly:] */

void FUN_10afe6904(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10afe690c; end: 10afe693b; -[SCRecipientPickerConfirmationModelBuilder .cxx_destruct] */

void FUN_10afe690c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe693c; end: 10afe69b3; -[SCRecipientPickerDescriptionContext initWithDescriptionText:] */

undefined1 * FUN_10afe693c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe69b4; end: 10afe69d7; -[SCRecipientPickerDescriptionContext copyWithZone:] */

undefined8 FUN_10afe69b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe69d8; end: 10afe69df; -[SCRecipientPickerDescriptionContext hash] */

void FUN_10afe69d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afe69e0; end: 10afe6a6f; -[SCRecipientPickerDescriptionContext isEqual:] */

long FUN_10afe69e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe6a54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afe6a54;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afe6a54;
    }
  }
  lVar3 = 1;
LAB_10afe6a54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe6a70; end: 10afe6a77; -[SCRecipientPickerDescriptionContext descriptionText] */

undefined8 FUN_10afe6a70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe6a78; end: 10afe6a83; -[SCRecipientPickerDescriptionContext .cxx_destruct] */

void FUN_10afe6a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe6a84; end: 10afe6bcb; -[SCRecipientPickerStoryContext initWithStoryId:storyOwnersId:storyModeratorsId:currentUserId:participantsCount:selectedSnapchatterIds:] */

undefined1 *
FUN_10afe6a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112703f88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe6bcc; end: 10afe6bef; -[SCRecipientPickerStoryContext copyWithZone:] */

undefined8 FUN_10afe6bcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe6bf0; end: 10afe6c8b; -[SCRecipientPickerStoryContext hash] */

undefined8 * FUN_10afe6bf0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe6d64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe6d70;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[5] == param_3[5])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10afe6d70;
              }
              goto LAB_10afe6d64;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe6d70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe6c8c; end: 10afe6d8b; -[SCRecipientPickerStoryContext isEqual:] */

long FUN_10afe6c8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe6d64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe6d70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10afe6d70;
              }
              goto LAB_10afe6d64;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe6d70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe6d8c; end: 10afe6d93; -[SCRecipientPickerStoryContext storyId] */

undefined8 FUN_10afe6d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe6d94; end: 10afe6d9b; -[SCRecipientPickerStoryContext storyOwnersId] */

undefined8 FUN_10afe6d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe6d9c; end: 10afe6da3; -[SCRecipientPickerStoryContext storyModeratorsId] */

undefined8 FUN_10afe6d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe6da4; end: 10afe6dab; -[SCRecipientPickerStoryContext currentUserId] */

undefined8 FUN_10afe6da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe6dac; end: 10afe6db3; -[SCRecipientPickerStoryContext participantsCount] */

undefined8 FUN_10afe6dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe6db4; end: 10afe6dbb; -[SCRecipientPickerStoryContext selectedSnapchatterIds] */

undefined8 FUN_10afe6db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe6dbc; end: 10afe6e0f; -[SCRecipientPickerStoryContext .cxx_destruct] */

void FUN_10afe6dbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe6e10; end: 10afe6e73; +[SCCancelMenuActionSheetScopeRecipient conversationRecipientWithConversationId:] */

void FUN_10afe6e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2cd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe6e74; end: 10afe6f0b; +[SCCancelMenuActionSheetScopeRecipient messageRecipientWithMessageId:conversationId:] */

void FUN_10afe6e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2cd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe6f0c; end: 10afe6f77; +[SCCancelMenuActionSheetScopeRecipient multiRecipientWithConversationIds:] */

void FUN_10afe6f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2cd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe6f78; end: 10afe6f9b; -[SCCancelMenuActionSheetScopeRecipient copyWithZone:] */

undefined8 FUN_10afe6f78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe6f9c; end: 10afe702b; -[SCCancelMenuActionSheetScopeRecipient hash] */

void FUN_10afe6f9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112703f90;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe702c; end: 10afe706f; -[SCCancelMenuActionSheetScopeRecipient internalInit] */

void FUN_10afe702c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703f90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe7070; end: 10afe7157; -[SCCancelMenuActionSheetScopeRecipient isEqual:] */

long FUN_10afe7070(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe7130:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe713c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afe713c;
            }
            goto LAB_10afe7130;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe713c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe7158; end: 10afe720b; -[SCCancelMenuActionSheetScopeRecipient matchConversationRecipient:messageRecipient:multiRecipient:] */

void FUN_10afe7158(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10afe71e8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_10afe71e8;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10afe71e8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10afe71e8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe720c; end: 10afe7253; -[SCCancelMenuActionSheetScopeRecipient .cxx_destruct] */

void FUN_10afe720c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe7254; end: 10afe7387; -[SCFriendActionSheetScope initWithUiContainer:userId:sourcePageType:profilePageSourceType:sourceSessionId:hideRecursiveOptions:hideSendTo:nonFriendAddSourceType:nonFriendAddPlacementType:delegate:] */

undefined8 *
FUN_10afe7254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112703f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    puVar1[10] = param_11;
    puVar1[0xb] = param_12;
    _objc_storeWeak(puVar1 + 0xc,param_13);
  }
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afe7388; end: 10afe74ab; -[SCFriendActionSheetScope initWithUiContainer:userId:sourcePageType:sourceSessionId:hideRecursiveOptions:hideSendTo:nonFriendAddSourceType:nonFriendAddPlacementType:delegate:] */

undefined1 *
FUN_10afe7388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112703f98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    *(undefined8 *)((long)puVar1 + 0x58) = param_10;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x60),param_11);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe74ac; end: 10afe75cf; -[SCFriendActionSheetScope initWithUiContainer:userId:sourcePageType:sourceSessionId:hideRecursiveOptions:nonFriendAddSourceType:nonFriendAddPlacementType:delegate:] */

undefined1 *
FUN_10afe74ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112703f98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    *(undefined8 *)((long)puVar1 + 0x58) = param_9;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x60),param_10);
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe75d0; end: 10afe7743; -[SCFriendActionSheetScope initWithUiContainer:snapchatter:sourcePageType:sourceSessionId:hideRecursiveOptions:nonFriendAddSourceType:nonFriendAddPlacementType:delegate:] */

undefined8 *
FUN_10afe75d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112703f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = lVar3;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      _objc_retain(param_4);
      uVar2 = puVar1[4];
      puVar1[4] = param_4;
      _objc_release(uVar2);
    }
    puVar1[5] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    puVar1[10] = param_8;
    puVar1[0xb] = param_9;
    _objc_storeWeak(puVar1 + 0xc,param_10);
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afe7744; end: 10afe78c3; -[SCFriendActionSheetScope initWithUiContainer:snapchatter:sourcePageType:sourceSessionId:hideRecursiveOptions:showHideStorySuggestions:nonFriendAddSourceType:nonFriendAddPlacementType:delegate:] */

undefined8 *
FUN_10afe7744(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112703f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = lVar3;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      _objc_retain(param_4);
      uVar2 = puVar1[4];
      puVar1[4] = param_4;
      _objc_release(uVar2);
    }
    puVar1[5] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    puVar1[10] = param_9;
    puVar1[0xb] = param_10;
    _objc_storeWeak(puVar1 + 0xc,param_11);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afe78c4; end: 10afe7a43; -[SCFriendActionSheetScope initWithUiContainer:snapchatter:sourcePageType:sourceSessionId:hideRecursiveOptions:hideUserDetails:nonFriendAddSourceType:nonFriendAddPlacementType:delegate:] */

undefined8 *
FUN_10afe78c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112703f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = lVar3;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      _objc_retain(param_4);
      uVar2 = puVar1[4];
      puVar1[4] = param_4;
      _objc_release(uVar2);
    }
    puVar1[5] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    puVar1[10] = param_9;
    puVar1[0xb] = param_10;
    _objc_storeWeak(puVar1 + 0xc,param_11);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afe7a44; end: 10afe7a4b; -[SCFriendActionSheetScope uiContainer] */

undefined8 FUN_10afe7a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe7a4c; end: 10afe7a53; -[SCFriendActionSheetScope userId] */

undefined8 FUN_10afe7a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe7a54; end: 10afe7a5b; -[SCFriendActionSheetScope snapchatter] */

undefined8 FUN_10afe7a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe7a5c; end: 10afe7a63; -[SCFriendActionSheetScope setSnapchatter:] */

void FUN_10afe7a5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10afe7a64; end: 10afe7a6b; -[SCFriendActionSheetScope sourcePageType] */

undefined8 FUN_10afe7a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe7a6c; end: 10afe7a73; -[SCFriendActionSheetScope profilePageSourceType] */

undefined8 FUN_10afe7a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe7a74; end: 10afe7a7b; -[SCFriendActionSheetScope sourceSessionId] */

undefined8 FUN_10afe7a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


