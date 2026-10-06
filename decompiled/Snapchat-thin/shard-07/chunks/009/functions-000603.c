/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b2eee0; end: 105b2eeeb; -[SCSelectionSortableSnapchatterSectionCreatorImpl .cxx_destruct] */

void FUN_105b2eee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2eeec; end: 105b2f16b; -[SCSelectionSortableSnapchatterSectionDataSourceImpl initWithPerformer:sectionIdentifierMapping:sortableSnapchatterObservableRepository:] */

undefined8 *
FUN_105b2eeec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126ebfa8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105b2f16c;
    puStack_a0 = &UNK_110897868;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(uVar2);
    uStack_90 = uVar2;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae720;
    puStack_e0 = puVar6;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105b2f1dc;
    puStack_c8 = &UNK_11089afa0;
    _objc_retain();
    puStack_c0 = puVar3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    _objc_retain(puVar4);
    uVar5 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_e8,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = puVar6;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_e8);
    _objc_release(puVar4);
    _objc_release(puStack_c0);
    _objc_release(puVar3);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b2f16c; end: 105b2f24b;  */

void FUN_105b2f16c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf000c0();
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



/* Entry: 105b2f24c; end: 105b2f253;  */

undefined ** FUN_105b2f24c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c246f60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar4 == (undefined **)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
        _objc_release(puVar5);
      }
      ppuVar4 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(ppuVar4);
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e2ca98;
}



/* Entry: 105b2f254; end: 105b2f293;  */

void FUN_105b2f254(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc9f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b2f294; end: 105b2f2e7; -[SCSelectionSortableSnapchatterSectionDataSourceImpl sortableSnapchatterObservableForSectionIdentifier:query:] */

void FUN_105b2f294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244560(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2f2e8; end: 105b2f3eb; -[SCSelectionSortableSnapchatterSectionDataSourceImpl snapchatterObservableForSectionType:] */

void FUN_105b2f2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105b2f3ec;
  uStack_30 = 0x105b2f3fc;
  uStack_28 = 0;
  func_0x00010c0bc7e0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b2f3ec; end: 105b2f403;  */

void FUN_105b2f3ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b2f404; end: 105b2f4b3;  */

void FUN_105b2f404(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0x28;
  if (param_2 == 0) {
    lVar3 = 0x18;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b2f4b4; end: 105b2f523; -[SCSelectionSortableSnapchatterSectionDataSourceImpl _allMutualFriendsObservable] */

void FUN_105b2f4b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 105b2f524; end: 105b2f543;  */

void FUN_105b2f524(undefined8 param_1,undefined8 param_2)

{
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108d6180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b2f544; end: 105b2f587;  */

undefined8 FUN_105b2f544(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000105b2f884();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105b2f588; end: 105b2f657; -[SCSelectionSortableSnapchatterSectionDataSourceImpl _friendsObservableForIndexKey:] */

void FUN_105b2f588(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b2f658;
  puStack_40 = &UNK_1108b2f88;
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



/* Entry: 105b2f658; end: 105b2f6ab;  */

void FUN_105b2f658(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b2f6ac; end: 105b2f77b; -[SCSelectionSortableSnapchatterSectionDataSourceImpl _mutualFriendsObservableForIndexKey:] */

void FUN_105b2f6ac(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b2f77c;
  puStack_40 = &UNK_1108b2f88;
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



/* Entry: 105b2f77c; end: 105b2f82f;  */

void FUN_105b2f77c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x0001006372a4(puVar1,&PTR___NSConcreteGlobalBlock_1108d61a0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b2f830; end: 105b2f8d3; -[SCSelectionSortableSnapchatterSectionDataSourceImpl .cxx_destruct] */

void FUN_105b2f830(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2f8d4; end: 105b2f97f; -[SCSelectionSortableSnapchatterSectionDescriptor initWithSectionIdentifierMapping:newUserExperienceEnabled:sendToExperimentConfiguration:] */

undefined1 *
FUN_105b2f8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ebfb0;
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



/* Entry: 105b2f980; end: 105b2fc1b; -[SCSelectionSortableSnapchatterSectionDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_105b2f980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105b2fc4c;
  uStack_80 = 0x105b2fc5c;
  uStack_78 = 0;
  func_0x00010c0bc7e0(uVar1);
  uVar6 = puStack_98[5];
  _objc_retain(uVar6);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar1);
  _objc_retain(uVar1);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105b2fc4c;
  uStack_80 = 0x105b2fc5c;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  func_0x00010c0bc7e0(uVar1);
  uVar7 = puStack_98[5];
  _objc_retain(uVar7);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar1);
  uVar2 = uVar6;
  func_0x000106c9d38c(uVar6,uVar7,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x000106c9c838();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c11da20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x000106c9c378(param_3,uVar3,uVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b2fc1c; end: 105b2fc4b; -[SCSelectionSortableSnapchatterSectionDescriptor .cxx_destruct] */

void FUN_105b2fc1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2fc4c; end: 105b2fc63;  */

void FUN_105b2fc4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b2fc64; end: 105b2fd3b;  */

void FUN_105b2fc64(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1ed38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ed38,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b2fd3c; end: 105b2fd3f;  */

void FUN_105b2fd3c(void)

{
  return;
}



/* Entry: 105b2fd40; end: 105b2fde3; -[SCSelectionSortableSnapchatterSectionRepository initWithSectionType:sectionDataSource:] */

undefined1 *
FUN_105b2fd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebfb8;
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



/* Entry: 105b2fde4; end: 105b2fe33; -[SCSelectionSortableSnapchatterSectionRepository sortedEntitiesObservable] */

void FUN_105b2fde4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c244560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b2fe34; end: 105b2fe63; -[SCSelectionSortableSnapchatterSectionRepository .cxx_destruct] */

void FUN_105b2fe34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b2fe64; end: 105b2ff07; -[SCSelectionSortableSnapchatterSectionIndexer initWithSectionIdentifierMapping:sectionDataSource:] */

undefined1 *
FUN_105b2fe64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebfc0;
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



/* Entry: 105b2ff08; end: 105b30037; -[SCSelectionSortableSnapchatterSectionIndexer indexingItemForSectionIdentifier:] */

void FUN_105b2ff08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105b30038;
  uStack_40 = 0x105b30048;
  uStack_38 = 0;
  func_0x00010c0bc7e0();
  func_0x00010bebe240(param_1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b30038; end: 105b3004f;  */

void FUN_105b30038(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b30050; end: 105b300db;  */

void FUN_105b30050(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c27a8;
  func_0x00010bf00120(PTR_PTR_1126c27a8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b300dc; end: 105b3015b; -[SCSelectionSortableSnapchatterSectionIndexer _sortableFriendsSectionIndexingItemForSectionType:] */

void FUN_105b300dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c27b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043760();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c25c8;
  func_0x00010c246c80(PTR_PTR_1126c25c8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b3015c; end: 105b3018b; -[SCSelectionSortableSnapchatterSectionIndexer .cxx_destruct] */

void FUN_105b3015c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b3018c; end: 105b302ff;  */

void FUN_105b3018c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c27a8;
      uVar3 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf01c60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar3 = param_1;
      func_0x00010bf529e0();
    } while (uVar5 < uVar3);
  }
  puVar4 = PTR_PTR_1126c27a8;
  func_0x00010bf01c60(PTR_PTR_1126c27a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c089820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b30300; end: 105b303f3; -[SCSelectionSortableSnapchatterSectionViewModelSourceImpl initWithFriendmojiPresenter:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105b30300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ebfc8;
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



/* Entry: 105b303f4; end: 105b304af; -[SCSelectionSortableSnapchatterSectionViewModelSourceImpl sortableSnapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105b303f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b304b0;
  puStack_50 = &UNK_1108d6210;
  uStack_48 = uVar2;
  uStack_40 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105b304b0; end: 105b30647;  */

void FUN_105b304b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf86580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010901e254();
  _objc_release(uVar1);
  uVar1 = 2;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  uVar5 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c246f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar5;
  func_0x000105e55ddc(*(undefined8 *)(param_1 + 0x30),uVar5,uVar1,0,0,uVar2,param_3,param_4,0,
                      param_5,uVar3,param_6,*(undefined8 *)(param_1 + 0x28),0xffffffffffffffff,0,1,
                      0x100);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105b30648; end: 105b30683; -[SCSelectionSortableSnapchatterSectionViewModelSourceImpl .cxx_destruct] */

void FUN_105b30648(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b30684; end: 105b306db; +[SCSelectionSortableSnapchatterSectionType allFriendsWithUseMutualFriends:] */

void FUN_105b30684(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c27a8;
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



/* Entry: 105b306dc; end: 105b3074f; +[SCSelectionSortableSnapchatterSectionType alphabeticalWithIndexKey:useMutualFriends:] */

void FUN_105b306dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c27a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
  puVar2[0x20] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b30750; end: 105b30773; -[SCSelectionSortableSnapchatterSectionType copyWithZone:] */

undefined8 FUN_105b30750(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b30774; end: 105b307eb; -[SCSelectionSortableSnapchatterSectionType hash] */

void FUN_105b30774(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x20);
  puVar2 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126ebfd0;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b307ec; end: 105b3082f; -[SCSelectionSortableSnapchatterSectionType internalInit] */

void FUN_105b307ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ebfd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b30830; end: 105b308ef; -[SCSelectionSortableSnapchatterSectionType isEqual:] */

long FUN_105b30830(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105b308d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))) ||
        (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_105b308d4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105b308d4;
    }
  }
  lVar3 = 1;
LAB_105b308d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105b308f0; end: 105b3097b; -[SCSelectionSortableSnapchatterSectionType matchAllFriends:alphabetical:] */

void FUN_105b308f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b3097c; end: 105b30987; -[SCSelectionSortableSnapchatterSectionType .cxx_destruct] */

void FUN_105b3097c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105b30988; end: 105b30b37; -[SCSelectionContactNonSnapchatterSectionCreator initWithActionHandler:contactNonSnapchattersDataSource:selectionTracker:imageDownloader:viewModelSource:enableSelectableContacts:circumstanceEngine:sendToExperimentConfiguration:renderingTracker:] */

undefined1 *
FUN_105b30988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ebfd8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b30b38; end: 105b30d9b; -[SCSelectionContactNonSnapchatterSectionCreator sectionForDescriptor:] */

void FUN_105b30b38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar9 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar1);
  uVar1 = uVar9;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar9 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar1);
  uVar1 = uVar9;
  func_0x00010c155ea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c155f60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar5 = uVar4;
  func_0x00010bf49dc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126c27b8;
  _objc_alloc(PTR_PTR_1126c27b8);
  func_0x00010c0023e0();
  puVar7 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar7);
  puVar8 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  func_0x00010c06ef40(uVar1);
  func_0x00010bfcf7e0(uVar1);
  func_0x00010c01edc0(puVar8);
  func_0x00010c222a60(puVar7);
  _objc_release(puVar8);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf79c60(uVar4);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105b30d9c; end: 105b30e13; -[SCSelectionContactNonSnapchatterSectionCreator .cxx_destruct] */

void FUN_105b30d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105b30e14; end: 105b31013; -[SCSelectionContactNonSnapchatterSectionDataProvider initWithContactNonSnapchatterSectionDataSource:selectionTracker:imageDownloader:viewModelGenerator:enableSelectableContacts:circumstanceEngine:sendToExperimentConfiguration:renderingTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105b30e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  puStack_68 = PTR_PTR_1126ebfe0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithSelectionTracker_selecti_11252c850,param_4,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,param_9);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127301cc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127301d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127301d4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127301d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127301d8) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127301dc) = param_7;
    lVar5 = (long)_DAT_1127301e0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127301e4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127301e8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127301ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127301ec) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b31014; end: 105b31093; -[SCSelectionContactNonSnapchatterSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b31014(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class();
  ppuVar10 = &puStack_20;
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
  _objc_retain(ppuVar10);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar4 = ppuVar10;
  _objc_opt_isKindOfClass(ppuVar10,puVar2);
  ppuVar1 = ppuVar10;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    lVar11 = (long)_DAT_1127301f0;
    _objc_retain(ppuVar10);
    uVar5 = *(undefined8 *)(puVar3 + lVar11);
    *(undefined ***)(puVar3 + lVar11) = ppuVar1;
    _objc_release(uVar5);
    ppuVar4 = ppuVar10;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar3 + _DAT_1127301f4);
    *(undefined ***)(puVar3 + _DAT_1127301f4) = ppuVar4;
    _objc_release(uVar5);
    _objc_initWeak(auStack_98,puVar3);
    uVar6 = *(undefined8 *)(puVar3 + _DAT_1127301cc);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar10;
    func_0x00010c155f60(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar10;
    func_0x00010c11d080(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c244a40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0e0680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(ppuVar10);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar9);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(uVar6);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 105b31094; end: 105b312ff; -[SCSelectionContactNonSnapchatterSectionDataProvider setSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b31094(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar9 = (long)_DAT_1127301f0;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar1;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127301f4);
    *(ulong *)(param_1 + _DAT_1127301f4) = uVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127301cc);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c244a40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c0e0680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar8);
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar9);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b31300; end: 105b31373;  */

void FUN_105b31300(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2de0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b31374; end: 105b3149f; -[SCSelectionContactNonSnapchatterSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105b31374(undefined8 param_1)

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
  pcStack_68 = FUN_105b314a0;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e1ed78;
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
  func_0x00010bde5680();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105b314a0; end: 105b314e7;  */

void FUN_105b314a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b314e8; end: 105b315cb; -[SCSelectionContactNonSnapchatterSectionDataProvider _setContactNonSnapchatters:sectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b314e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127301f8);
  *(undefined8 *)(param_1 + _DAT_1127301f8) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127301ec);
  puVar1 = PTR_PTR_1126b5628;
  _objc_alloc(PTR_PTR_1126b5628);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043280(puVar1);
  _objc_release(param_4);
  func_0x00010c0d9840(uVar3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bee3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModels_112596830);
  return;
}



/* Entry: 105b315cc; end: 105b31757; -[SCSelectionContactNonSnapchatterSectionDataProvider _updateViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b315cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010c1895e0(param_1,param_2,1);
  lVar4 = (long)_DAT_1127301f8;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108d6240);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127301d0);
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105b31760;
  puStack_60 = &UNK_1108d6260;
  uStack_58 = uVar3;
  lStack_50 = param_1;
  uStack_48 = uVar1;
  _objc_retain();
  func_0x00010bd86420(uVar5,&puStack_78);
  func_0x00010c181940(param_1);
  _objc_release(uVar5);
  func_0x00010c1895e0(param_1);
  lVar4 = param_1;
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
  _objc_release(lVar4);
  uVar1 = uVar2;
  func_0x0001084256c4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb8c0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127301e8);
  func_0x00010bf4abe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf790c0(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b31758; end: 105b3175f;  */

void FUN_105b31758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdc2600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d4e0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b31760; end: 105b3180f;  */

void FUN_105b31760(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000105e5c380(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bde73a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b31810; end: 105b31883; -[SCSelectionContactNonSnapchatterSectionDataProvider _containerCellViewModelForContactNonSnapchatter:isSelected:index:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b31810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127301d8);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3,*(undefined1 *)(param_1 + _DAT_1127301dc));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b31884; end: 105b318fb; -[SCSelectionContactNonSnapchatterSectionDataProvider _configureRecipientCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b31884(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b318fc; end: 105b3190b; -[SCSelectionContactNonSnapchatterSectionDataProvider sectionDataTrackerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b318fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127301ec);
}



/* Entry: 105b3190c; end: 105b3191b; -[SCSelectionContactNonSnapchatterSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b3190c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127301f0);
}



/* Entry: 105b3191c; end: 105b319eb; -[SCSelectionContactNonSnapchatterSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b3191c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127301f0,0);
  _objc_storeStrong(param_1 + _DAT_1127301f4,0);
  _objc_storeStrong(param_1 + _DAT_1127301e8,0);
  _objc_storeStrong(param_1 + _DAT_1127301e4,0);
  _objc_storeStrong(param_1 + _DAT_1127301e0,0);
  _objc_storeStrong(param_1 + _DAT_1127301f8,0);
  _objc_storeStrong(param_1 + _DAT_1127301ec,0);
  _objc_storeStrong(param_1 + _DAT_1127301d0,0);
  _objc_storeStrong(param_1 + _DAT_1127301d8,0);
  _objc_storeStrong(param_1 + _DAT_1127301d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127301cc,0);
  return;
}



/* Entry: 105b319ec; end: 105b32103; -[SCDeleteStorySnapScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b319ec(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined **ppuStack_130;
  undefined **ppuStack_120;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_1127301fc;
  lVar17 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar2 = lVar17;
  func_0x00010c245c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  lVar17 = lVar2;
  func_0x00010bf529e0();
  if (lVar17 != 0) {
    ppuVar19 = (undefined **)(param_1 + _DAT_112730200);
    _objc_loadWeakRetained();
    ppuVar3 = ppuVar19;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar19);
    lVar17 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar17);
    lVar4 = lVar17;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_2 = lVar4;
    _objc_storeWeak(param_1 + _DAT_112730204,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar17);
    lVar17 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar17;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0720c0();
    _objc_release(lVar4);
    _objc_release();
    if ((int)lVar5 == 0) {
      ppuVar19 = (undefined **)0x0;
      ppuStack_120 = (undefined **)0x0;
    }
    else {
      func_0x000108f580b4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar3;
      func_0x0001005929c0();
      ppuStack_120 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)ppuVar19 & 1) == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e1edb8;
        param_2 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1edb8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
      }
      else {
        ppuStack_120 = ppuVar19;
        func_0x000108f58084();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar17);
    }
    lVar17 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar17;
    func_0x00010c242920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    lVar17 = lVar4;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar17;
    func_0x00010c08fa60();
    _objc_release(lVar17);
    lVar17 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar17;
    func_0x00010c23e2c0();
    _objc_release(lVar17);
    if (((int)lVar7 == 0) || (lVar5 == 0)) {
      lVar17 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar17;
      func_0x00010c23e2c0();
      _objc_release(lVar17);
      if ((int)lVar7 == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e1edd8;
        if (lVar5 == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110db18b8;
        }
        func_0x00010bcbeaa8(ppuVar6,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_b8,param_1);
        puVar8 = PTR_PTR_1126aed70;
        puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e8 = 0xc2000000;
        pcStack_e0 = FUN_105b32104;
        puStack_d8 = &UNK_11086c9f0;
        uStack_c0 = lVar5 != 0;
        _objc_copyWeak(auStack_c8,auStack_b8);
        lStack_d0 = lVar2;
        func_0x00010beff480();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126aed70;
        ppuVar9 = &PTR____CFConstantStringClassReference_110daf8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_f8,auStack_b8);
        func_0x00010beff4c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        lVar17 = lVar2;
        func_0x00010bf529e0();
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1ee18;
        if (lVar17 != 1) {
          ppuVar9 = &PTR____CFConstantStringClassReference_110e1ee38;
        }
        param_2 = 0;
        func_0x00010bcbeaa8(ppuVar9,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_130 = ppuVar9;
        if (lVar5 != 0) {
          ppuStack_130 = &PTR____CFConstantStringClassReference_110e1ee58;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ee58,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          ppuVar9 = &PTR____CFConstantStringClassReference_110e1ee78;
          param_2 = 0;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ee78,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuStack_120);
          ppuStack_120 = ppuVar9;
        }
        if ((int)ppuVar19 == 0) {
          puVar15 = PTR_PTR_1126aed78;
          _objc_alloc();
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_b0 = puVar8;
          puStack_a8 = puVar10;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052ec0();
          lVar17 = (long)_DAT_112730208;
          uVar16 = *(undefined8 *)(param_1 + lVar17);
          *(undefined **)(param_1 + lVar17) = puVar15;
          _objc_release(uVar16);
        }
        else {
          puVar15 = PTR_PTR_1126aed78;
          _objc_alloc();
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_90 = puVar8;
          puStack_88 = puVar10;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar14;
          func_0x000108f5809c();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_98 = puVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_a0 = &PTR____CFConstantStringClassReference_110e1ed98;
          puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfefea0();
          lVar17 = (long)_DAT_112730208;
          uVar16 = *(undefined8 *)(param_1 + lVar17);
          *(undefined **)(param_1 + lVar17) = puVar15;
          _objc_release(uVar16);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar14);
          puVar14 = *(undefined **)(param_1 + lVar17);
          param_2 = *(long *)(param_1 + _DAT_11273020c);
          func_0x000108065d38(puVar14,param_2,param_1,0x13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bddc0(*(undefined8 *)(param_1 + lVar17));
        }
        _objc_release(puVar14);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17));
        param_1 = param_1 + lVar18;
        _objc_loadWeakRetained(param_1);
        lVar17 = param_1;
        func_0x00010c27ece0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0c980();
        _objc_release(lVar17);
        _objc_release(param_1);
        _objc_release(ppuStack_130);
        _objc_release(puVar10);
        _objc_destroyWeak(auStack_f8);
        _objc_release(puVar8);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_b8);
        _objc_release(ppuVar6);
      }
      else {
        lVar17 = lVar2;
        func_0x00010bfb1920(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e8be0();
        func_0x00010bdfa7c0(param_1);
        _objc_release(lVar17);
      }
    }
    else {
      func_0x00010bdfa6e0(param_1);
    }
    _objc_release(lVar4);
    _objc_release(ppuStack_120);
    _objc_release(ppuVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  cVar1 = *(char *)(lVar2 + 0x30);
  _objc_retain(param_2);
  lVar2 = lVar2 + 0x28;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 == '\x01') {
    func_0x00010bdfa6e0();
  }
  else {
    func_0x00010bdfa7c0();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105b32104; end: 105b3216f;  */

void FUN_105b32104(long param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x30);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (cVar1 == '\x01') {
    func_0x00010bdfa6e0();
  }
  else {
    func_0x00010bdfa7c0();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b32170; end: 105b32217;  */

void FUN_105b32170(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b32218; end: 105b32263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b32218(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112730204;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf72be0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b32264; end: 105b32683; -[SCDeleteStorySnapScopeEntryPoint _deleteSnapProSnap:dialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b32264(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined auStack_240 [128];
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
  undefined **ppuStack_138;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = param_4;
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c27c0;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010c242920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf096e0();
  puVar13 = puVar1;
  func_0x00010c242920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x000108f498a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3f40();
  puStack_128 = puVar2;
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_initWeak(auStack_90,param_1);
  puVar2 = param_1 + _DAT_112730210;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar3;
  _objc_release(puVar2);
  puVar15 = (undefined *)(long)_DAT_112730204;
  puVar2 = param_1 + (long)puVar15;
  _objc_loadWeakRetained();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105b32684;
  puStack_b0 = &UNK_110848ba8;
  puStack_118 = puVar2;
  _objc_retain(puVar1);
  puStack_a8 = puVar1;
  _objc_retain(param_3);
  puStack_98 = puStack_118;
  ppuVar5 = &puStack_c8;
  puStack_a0 = param_3;
  _objc_retainBlock();
  puVar13 = puStack_110;
  ppuStack_120 = ppuVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c1057a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c242920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f5e0();
  ppuStack_138 = ppuStack_120;
  uStack_140 = 0;
  func_0x00010bf6c880(puVar13);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar13);
  if (lStack_108 == 0) {
    puVar2 = param_1 + (long)puVar15;
    _objc_loadWeakRetained();
    puVar3 = puVar1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a900(puVar2);
    _objc_release(ppuVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_105b328b8;
    puStack_e8 = &UNK_110848218;
    ppuVar5 = &puStack_100;
    _objc_copyWeak(auStack_d0,auStack_90);
    _objc_retain(param_3);
    puStack_e0 = param_3;
    _objc_retain(puVar1);
    puStack_d8 = puVar1;
    func_0x00010bf84b00(lStack_108);
    _objc_release(puStack_d8);
    _objc_release(puStack_e0);
    _objc_destroyWeak(auStack_d0);
  }
  _objc_release(ppuStack_120);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_destroyWeak(auStack_90);
  _objc_release(puStack_128);
  _objc_release(puVar1);
  _objc_release(lStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 6);
  _objc_destroyWeak(auStack_90);
  puVar6 = param_3;
  __Unwind_Resume();
  pcStack_148 = FUN_105b32684;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e1ee98;
  uVar7 = *(undefined8 *)(puVar6 + 0x20);
  puStack_1a0 = puVar4;
  puStack_198 = puVar13;
  puStack_190 = puVar15;
  puStack_188 = param_1;
  puStack_180 = puVar14;
  puStack_178 = puVar3;
  puStack_170 = puVar2;
  puStack_168 = puVar1;
  ppuStack_160 = ppuVar5;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c242920();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_1b8 = uVar11;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar12 = *(long *)(puVar6 + 0x28);
  _objc_retain(lVar12);
  puVar2 = auStack_240;
  lVar8 = lVar12;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar16 = *plStack_270;
    do {
      lVar17 = 0;
      do {
        if (*plStack_270 != lVar16) {
          _objc_enumerationMutation(lVar12);
        }
        puVar14 = *(undefined **)(lStack_278 + lVar17 * 8);
        param_1 = puVar14;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_1;
        func_0x00010c08fa60();
        _objc_release(param_1);
        if (puVar15 != (undefined *)0x0) {
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar14);
        }
        lVar17 = lVar17 + 1;
      } while (lVar8 != lVar17);
      puVar2 = auStack_240;
      lVar8 = lVar12;
      func_0x00010bf52a60();
      puVar3 = (undefined *)0x0;
    } while (lVar8 != 0);
  }
  _objc_release(lVar12);
  uVar11 = *(undefined8 *)(puVar6 + 0x30);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  puVar10 = puVar4;
  func_0x00010bf74700(uVar11);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar6 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_105b328b8;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar6 + 0x30;
  puStack_2c0 = puVar14;
  puStack_2b8 = puVar3;
  puStack_2b0 = puVar4;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar13;
  uStack_298 = uVar11;
  ppuStack_290 = &puStack_150;
  _objc_loadWeakRetained();
  if (puVar9 != (undefined *)0x0) {
    puVar1 = puVar9 + _DAT_112730204;
    _objc_loadWeakRetained();
    puVar4 = *(undefined **)(puVar6 + 0x20);
    puVar6 = *(undefined **)(puVar6 + 0x28);
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2d0 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    puVar2 = puVar3;
    func_0x00010bf7a900(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
  puVar13 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_105b329a4;
  puStack_320 = puVar15;
  puStack_318 = param_1;
  puStack_310 = puVar14;
  puStack_308 = puVar3;
  puStack_300 = puVar4;
  puStack_2f8 = puVar1;
  puStack_2f0 = puVar6;
  puStack_2e8 = puVar9;
  ppuStack_2e0 = &ppuStack_290;
  _objc_retain(puVar10);
  _objc_retain(puVar2);
  puStack_348 = &uStack_350;
  uStack_350 = 0;
  uStack_340 = 0x3032000000;
  pcStack_338 = FUN_105b32b44;
  uStack_330 = 0x105b32b54;
  if (puVar13 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar13 + _DAT_112730214;
    _objc_loadWeakRetained();
  }
  puVar3 = puVar13;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_328 = puVar4;
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar13);
  uVar11 = puStack_348[5];
  _objc_retain(puVar10);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar11);
  _objc_release(puVar2);
  _objc_release(puVar10);
  __Block_object_dispose(&uStack_350,8);
  _objc_release(puStack_328);
  _objc_release(puVar2);
  _objc_release(puVar10);
  return;
}



/* Entry: 105b32684; end: 105b328b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b32684(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *unaff_x23;
  undefined *puVar11;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar12;
  long lVar13;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined auStack_100 [128];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e1ee98;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c242920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_78 = uVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  puVar2 = auStack_100;
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x24 = *(long *)(lStack_138 + lVar13 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c08fa60();
        _objc_release(unaff_x25);
        if (unaff_x26 != 0) {
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(unaff_x24);
        }
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      puVar2 = auStack_100;
      lVar4 = lVar10;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar10);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  puVar8 = puVar5;
  func_0x00010bf74700(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar6 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105b328b8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6 + 0x30;
  lStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar11;
  uStack_158 = uVar9;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar7 + _DAT_112730204;
    _objc_loadWeakRetained();
    puVar5 = *(undefined **)(puVar6 + 0x20);
    puVar6 = *(undefined **)(puVar6 + 0x28);
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_190 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    puVar2 = unaff_x23;
    func_0x00010bf7a900(puVar3);
    _objc_release(unaff_x23);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  puVar11 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_105b329a4;
  lStack_1e0 = unaff_x26;
  lStack_1d8 = unaff_x25;
  lStack_1d0 = unaff_x24;
  puStack_1c8 = unaff_x23;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar3;
  puStack_1b0 = puVar6;
  puStack_1a8 = puVar7;
  ppuStack_1a0 = &puStack_150;
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_105b32b44;
  uStack_1f0 = 0x105b32b54;
  if (puVar11 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = puVar11 + _DAT_112730214;
    _objc_loadWeakRetained();
  }
  puVar3 = puVar11;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar6;
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar11);
  uVar9 = puStack_208[5];
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar9);
  _objc_release(puVar2);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(puStack_1e8);
  _objc_release(puVar2);
  _objc_release(puVar8);
  return;
}



/* Entry: 105b328b8; end: 105b329a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b328b8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    lVar1 = lVar6 + _DAT_112730204;
    _objc_loadWeakRetained();
    param_3 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar2;
    func_0x00010bf7a900(lVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105b32b44;
  uStack_b0 = 0x105b32b54;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 + _DAT_112730214;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar6;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar3;
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar6);
  uVar5 = puStack_c8[5];
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(lStack_a8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b329a4; end: 105b32b43; -[SCDeleteStorySnapScopeEntryPoint _deleteSnaps:dialog:onlyShowFailureToast:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b329a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105b32b44;
  uStack_60 = 0x105b32b54;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112730214;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = lVar3;
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  uVar4 = puStack_78[5];
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(lStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b32b44; end: 105b32b5b;  */

void FUN_105b32b44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b32b5c; end: 105b32ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b32b5c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _dispatch_group_create();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar9 = *(long *)(param_1 + 0x20) + (long)_DAT_112730210;
  _objc_loadWeakRetained();
  lVar3 = lVar9;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar9);
  lStack_1e8 = lVar9;
  func_0x00010bf52a60();
  if (lStack_1e8 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar12 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        uVar13 = *(undefined8 *)(lStack_148 + lVar12 * 8);
        _dispatch_group_enter(lVar1);
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar13;
        func_0x00010bf3cf60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010c15f2e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010c1057a0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar13;
        func_0x00010c259cc0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_105b32ee4;
        puStack_170 = &UNK_110860b18;
        _objc_retain(puVar2);
        puStack_168 = puVar2;
        uStack_160 = uVar13;
        _objc_retain(lVar1);
        lStack_158 = lVar1;
        func_0x00010bf6cb40(lVar4);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(lVar4);
        _objc_release(lStack_158);
        _objc_release(puStack_168);
        lVar12 = lVar12 + 1;
      } while (lStack_1e8 != lVar12);
      lStack_1e8 = lVar9;
      func_0x00010bf52a60();
    } while (lStack_1e8 != 0);
  }
  _objc_release(lVar9);
  _objc_initWeak(auStack_190,*(undefined8 *)(param_1 + 0x20));
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_105b32f10;
  puStack_1c0 = &UNK_110857da0;
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uStack_1b8 = uVar10;
  puStack_1b0 = puVar2;
  _objc_retain(uVar11);
  uStack_1a8 = uVar11;
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_198,auStack_190);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x38);
  func_0x000100bc0718(lVar1,PTR___dispatch_main_q_11034be20,&puStack_1d8);
  _objc_destroyWeak(auStack_198);
  _objc_release(uStack_1a8);
  _objc_release(puStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_190);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010befa160(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 105b32ee4; end: 105b32f0f;  */

void FUN_105b32ee4(long param_1,undefined8 param_2)

{
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105b32f10; end: 105b33053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b32f10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      return;
    }
    lVar1 = lVar2 + _DAT_112730204;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    func_0x00010bf7a900(lVar1);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  else {
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    func_0x00010bf84b00(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar3);
  return;
}



/* Entry: 105b33054; end: 105b33087;  */

void FUN_105b33054(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b33088; end: 105b3327f; -[SCDeleteStorySnapScopeEntryPoint _onDeleteSnaps:clientIdsBeingDeleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b33088(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar3 = uVar5;
        func_0x00010c242920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07f5e0();
        _objc_release(uVar3);
        if ((int)uVar4 == 0) {
          func_0x00010c259cc0(uVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar1,param_2,uVar5);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  lVar6 = (long)_DAT_112730204;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf74700();
  _objc_release(lVar2);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  uVar3 = param_4;
  func_0x00010bf51e00(param_4);
  lVar2 = param_3;
  func_0x00010bf7a900(param_1,param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (lVar2 != *(long *)(param_3 + _DAT_112730208)) {
    return;
  }
  param_3 = param_3 + _DAT_112730204;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf72be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b33280; end: 105b332cb; -[SCDeleteStorySnapScopeEntryPoint dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b33280(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_112730208)) {
    return;
  }
  param_1 = param_1 + _DAT_112730204;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b332cc; end: 105b33323; -[SCDeleteStorySnapScopeEntryPoint webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b332cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273020c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b33324; end: 105b3339f; -[SCDeleteStorySnapScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b33324(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273020c,0);
  _objc_destroyWeak(param_1 + _DAT_112730200);
  _objc_destroyWeak(param_1 + _DAT_112730214);
  _objc_destroyWeak(param_1 + _DAT_112730210);
  _objc_destroyWeak(param_1 + _DAT_1127301fc);
  _objc_destroyWeak(param_1 + _DAT_112730204);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112730208,0);
  return;
}



/* Entry: 105b333a0; end: 105b3340b; -[SCCustomStoryActionMenuActionHandler initWithDelegate:] */

undefined1 * FUN_105b333a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebfe8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b3340c; end: 105b336d3; -[SCCustomStoryActionMenuActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105b3340c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b47a0;
    _objc_opt_class(PTR_PTR_1126b47a0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    if (uVar4 == 0) {
      uVar5 = 0;
LAB_105b334e0:
      uVar6 = 0;
      goto LAB_105b336a4;
    }
    uVar4 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = uVar1;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = uVar1;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            uVar4 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) {
              uVar4 = uVar1;
              func_0x00010c0720c0();
              if ((int)uVar4 == 0) {
                uVar4 = uVar1;
                func_0x00010c0720c0();
                if ((int)uVar4 == 0) {
                  uVar4 = uVar1;
                  func_0x00010c0720c0();
                  if ((int)uVar4 == 0) {
                    uVar4 = uVar1;
                    func_0x00010c0720c0();
                    if ((int)uVar4 == 0) {
                      uVar4 = uVar1;
                      func_0x00010c0720c0();
                      if ((int)uVar4 == 0) {
                        uVar4 = uVar1;
                        func_0x00010c0720c0();
                        if ((int)uVar4 == 0) {
                          uVar4 = uVar1;
                          func_0x00010c0720c0();
                          if ((int)uVar4 == 0) goto LAB_105b334e0;
                          param_1 = param_1 + 8;
                          _objc_loadWeakRetained(param_1);
                          func_0x00010bf7aa20();
                        }
                        else {
                          param_1 = param_1 + 8;
                          _objc_loadWeakRetained(param_1);
                          func_0x00010bf7a980();
                        }
                      }
                      else {
                        param_1 = param_1 + 8;
                        _objc_loadWeakRetained(param_1);
                        func_0x00010bf7b0c0();
                      }
                    }
                    else {
                      param_1 = param_1 + 8;
                      _objc_loadWeakRetained(param_1);
                      func_0x00010bf7b300();
                    }
                  }
                  else {
                    param_1 = param_1 + 8;
                    _objc_loadWeakRetained(param_1);
                    func_0x00010bf7b340();
                  }
                }
                else {
                  param_1 = param_1 + 8;
                  _objc_loadWeakRetained(param_1);
                  func_0x00010bf7ae80();
                }
              }
              else {
                param_1 = param_1 + 8;
                _objc_loadWeakRetained(param_1);
                func_0x00010bf7a6e0();
              }
            }
            else {
              param_1 = param_1 + 8;
              _objc_loadWeakRetained(param_1);
              func_0x00010bf7a620();
            }
          }
          else {
            param_1 = param_1 + 8;
            _objc_loadWeakRetained(param_1);
            func_0x00010bf7ac40();
          }
        }
        else {
          param_1 = param_1 + 8;
          _objc_loadWeakRetained(param_1);
          func_0x00010bf7ae20();
        }
      }
      else {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf7aae0();
      }
    }
    else {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf7a8e0();
    }
    _objc_release(param_1);
  }
  else {
    uVar5 = param_1 + 8;
    _objc_loadWeakRetained(uVar5);
    func_0x00010bf7a780();
  }
  uVar6 = 1;
LAB_105b336a4:
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 105b336d4; end: 105b336db; -[SCCustomStoryActionMenuActionHandler .cxx_destruct] */

void FUN_105b336d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105b336dc; end: 105b337d7;  */

void FUN_105b336dc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  uVar2 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  uVar3 = 0;
  if (uVar2 < 0xb) {
    if ((1L << (uVar2 & 0x3f) & 0x4c0U) == 0) {
      if ((1L << (uVar2 & 0x3f) & 0x24U) == 0) {
        if (uVar2 == 1) {
          func_0x000108f5896c();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_1;
        }
      }
      else {
        func_0x000108f58984();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
      }
    }
    else {
      func_0x000108f5899c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
    }
  }
  uVar2 = uVar3;
  func_0x000107d4bde8(uVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b337d8; end: 105b3394b; -[SCCustomStoryActionMenuDataProvider initWithPublicationId:options:viewProfileAvailable:customStoriesDataFetcher:customStoriesDataSyncer:currentUserId:snapchattersDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_105b337d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126ebff0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010806093c();
    *(char *)((long)puVar1 + 0x48) = (char)uVar2;
    uVar2 = param_10;
    func_0x000108060b08();
    *(char *)((long)puVar1 + 0x49) = (char)uVar2;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b3394c; end: 105b33a77; -[SCCustomStoryActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_105b3394c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf62500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b33a78; end: 105b33acb;  */

void FUN_105b33a78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b33acc; end: 105b33f63; -[SCCustomStoryActionMenuDataProvider _updateViewModelWithCustomStory:completionBlock:] */

void FUN_105b33acc(long param_1,undefined *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **unaff_x25;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [136];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80();
    lVar2 = param_3;
    func_0x00010c27dd80();
    if (lVar1 != 0) {
      if ((lVar2 == 6) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 10)) {
        _objc_initWeak(auStack_f8,param_1);
        puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        lVar1 = param_3;
        func_0x00010c0f4aa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x000100504554();
        func_0x00010befa160(puVar6);
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = param_3;
        func_0x00010c27dd80();
        if (lVar1 == 10) {
          lVar1 = param_3;
          func_0x00010bf5a820();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf5bbc0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c08fa60();
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar9 != 0) {
            lVar1 = param_3;
            func_0x00010bf5a820(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6);
            _objc_release(lVar2);
            _objc_release(lVar1);
          }
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          plStack_130 = (long *)0x0;
          lVar1 = param_3;
          func_0x00010c0d02e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            lVar9 = *plStack_130;
            do {
              lVar10 = 0;
              do {
                if (*plStack_130 != lVar9) {
                  _objc_enumerationMutation(lVar1);
                }
                lVar8 = *(long *)(lStack_138 + lVar10 * 8);
                func_0x00010c08fa60();
                if (lVar8 != 0) {
                  func_0x00010befa120(puVar6);
                }
                lVar10 = lVar10 + 1;
              } while (lVar2 != lVar10);
              lVar2 = lVar1;
              func_0x00010bf52a60();
            } while (lVar2 != 0);
          }
          _objc_release(lVar1);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bf00560(puVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 0x19;
        func_0x0001000819a8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_105b33f6c;
        puStack_160 = &UNK_1108b66b0;
        unaff_x25 = &puStack_178;
        param_2 = auStack_f8;
        _objc_copyWeak(auStack_148,param_2);
        _objc_retain(param_3);
        lStack_158 = param_3;
        _objc_retain(param_4);
        lStack_150 = param_4;
        func_0x00010c244e80(uVar3);
        _objc_release(uVar5);
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_release(lStack_150);
        _objc_release(lStack_158);
        _objc_destroyWeak(auStack_148);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_f8);
      }
      else {
        lVar1 = param_3;
        func_0x00010c1143e0();
        if (lVar1 == 3) {
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffff1 | 0x100;
        }
        func_0x00010bee3960(param_1);
      }
      goto LAB_105b33ea4;
    }
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = *(undefined8 *)(param_1 + 8);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265da0(uVar3);
      _objc_release(puVar6);
      _objc_release(uVar3);
    }
  }
  puVar6 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  ppuVar7 = &PTR____CFConstantStringClassReference_110e1f0f8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110e1f0f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar6);
  _objc_release(ppuVar7);
  param_2 = puVar6;
  (**(code **)(param_4 + 0x10))(param_4,puVar6);
  _objc_release(puVar6);
LAB_105b33ea4:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 6);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b33f64; end: 105b33f6b;  */

void FUN_105b33f64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b33f6c; end: 105b33fe3;  */

void FUN_105b33f6c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 == 0) {
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108d6330,
                        &PTR___NSConcreteGlobalBlock_1108d6350);
    puVar1 = param_2;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3960();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b33fe4; end: 105b33feb;  */

void FUN_105b33fe4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b33fec; end: 105b34013;  */

void FUN_105b33fec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b34014; end: 105b34d6b; -[SCCustomStoryActionMenuDataProvider _updateViewModelWithCustomStory:userIdToSnapchatter:completionBlock:] */

void FUN_105b34014(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  uint uStack_64;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(char *)(param_1 + 0x48) == '\x01') &&
     (ppuVar11 = param_3, func_0x00010c27dd80(), ppuVar11 == (undefined **)0x7)) {
    ppuVar11 = param_3;
    func_0x00010c1057e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x00010bf4b900();
    uStack_64 = (uint)ppuVar1;
    _objc_release(ppuVar11);
  }
  else {
    uStack_64 = 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = (uint)*(ulong *)(param_1 + 0x18);
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    _objc_retain(param_3);
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    if (((long)ppuVar11 - 1U < 10) &&
       ((0x273U >> (ulong)((uint)((long)ppuVar11 - 1U) & 0x1f) & 1) != 0)) {
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) goto LAB_105b34280;
      puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c14d100(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar5 = PTR_PTR_1126b4860;
      func_0x00010bfe94a0(PTR_PTR_1126b4860);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b45f8;
      puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9200(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar7 = PTR_PTR_1126b4608;
      _objc_alloc();
      uVar17 = 0;
      func_0x00010bff7b20();
      ppuVar11 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar7;
      func_0x000107d4cba0(puVar7,0,ppuVar11,0,0,0,0,0,uVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_3);
      if (puVar16 != (undefined *)0x0) {
        func_0x00010befa120(puVar2);
      }
    }
    else {
LAB_105b34280:
      _objc_release(param_3);
      puVar16 = (undefined *)0x0;
    }
    _objc_release(puVar16);
    uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar12 >> 1 & 1) != 0) {
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    iVar14 = (int)*(undefined8 *)(param_1 + 0x30);
    ppuVar1 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(ppuVar8);
    _objc_release(ppuVar1);
    puVar3 = PTR_PTR_1126b02a8;
    if (ppuVar11 == (undefined **)0xa) {
      if (iVar14 == 0) goto LAB_105b34338;
LAB_105b3430c:
      ppuVar1 = param_3;
      FUN_105b336dc(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar14 != 0) goto LAB_105b3430c;
      if (uStack_64 == 0) goto LAB_105b34338;
      _objc_retain(param_3);
      _objc_alloc(puVar3);
      func_0x00010c01b460();
      ppuVar1 = param_3;
      func_0x00010c27dd80();
      ppuVar11 = param_3;
      _objc_release(param_3);
      if (ppuVar1 == (undefined **)0x7) {
        func_0x000108f57acc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar11 = &PTR____CFConstantStringClassReference_110e1ef18;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ef18,0);
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar1 = ppuVar11;
      func_0x000107d4bde8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(puVar3);
    }
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
LAB_105b34338:
  if ((*(byte *)(param_1 + 0x19) >> 1 & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 0x30);
    _objc_retain(param_3);
    _objc_retain(uVar15);
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    if (((ppuVar11 == (undefined **)0xa) && (uVar9 = uVar15, func_0x00010c08fa60(), uVar9 != 0)) &&
       (ppuVar11 = param_3, func_0x00010bf60900(), ((ulong)ppuVar11 & 1) != 0)) {
      ppuVar11 = param_3;
      func_0x00010bf5a820(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar11;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar15;
      func_0x00010c0720c0();
      _objc_release(ppuVar1);
      _objc_release(ppuVar11);
      _objc_release(uVar15);
      _objc_release(param_3);
      puVar3 = PTR_PTR_1126b02a8;
      if ((uVar9 & 1) != 0) goto LAB_105b34468;
      _objc_retain(param_3);
      _objc_alloc(puVar3);
      func_0x00010c01b460();
      ppuVar1 = param_3;
      _objc_release(param_3);
      func_0x000108f59284();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar1;
      func_0x000107d4bde8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(puVar3);
      func_0x00010befa120(puVar2);
    }
    else {
      _objc_release(uVar15);
      ppuVar11 = param_3;
    }
    _objc_release(ppuVar11);
  }
LAB_105b34468:
  if ((*(char *)(param_1 + 0x49) == '\x01') &&
     (ppuVar11 = param_3, func_0x00010c27dd80(), puVar3 = PTR_PTR_1126b02a8,
     ppuVar11 == (undefined **)0x7)) {
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    _objc_release(param_3);
    ppuVar11 = &PTR____CFConstantStringClassReference_110db72b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72b8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x000107d4ba6c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
  if ((*(byte *)(param_1 + 0x18) >> 2 & 1) != 0) {
    iVar14 = (int)*(undefined8 *)(param_1 + 0x30);
    ppuVar11 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(ppuVar1);
    _objc_release(ppuVar11);
    puVar3 = PTR_PTR_1126b02a8;
    if (iVar14 != 0) {
      _objc_retain(param_3);
      _objc_alloc(puVar3);
      func_0x00010c01b460();
      ppuVar11 = param_3;
      _objc_release(param_3);
      func_0x000108f58a44();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar11;
      func_0x000107d4bc38();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(puVar3);
      func_0x00010befa120(puVar2);
      _objc_release(ppuVar1);
    }
  }
  if ((*(byte *)(param_1 + 0x18) >> 3 & 1) == 0) goto LAB_105b3494c;
  ppuVar11 = param_3;
  func_0x00010c27dd80();
  ppuVar1 = param_3;
  if (ppuVar11 == (undefined **)0x1) {
    iVar14 = (int)*(undefined8 *)(param_1 + 0x30);
    ppuVar11 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(ppuVar8);
    _objc_release(ppuVar11);
    puVar3 = PTR_PTR_1126b02a8;
    if (iVar14 == 0) goto LAB_105b34688;
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    _objc_release(param_3);
    func_0x000108f57cdc();
    _objc_retainAutoreleasedReturnValue();
LAB_105b346d4:
    ppuVar11 = ppuVar1;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
  }
  else {
LAB_105b34688:
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    puVar3 = PTR_PTR_1126b02a8;
    if (ppuVar11 == (undefined **)0x2) {
      _objc_retain(param_3);
      _objc_alloc(puVar3);
      func_0x00010c01b460();
      _objc_release(param_3);
      func_0x000108f57d3c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b346d4;
    }
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    if (ppuVar11 != (undefined **)0x6) goto LAB_105b3494c;
    iVar14 = (int)*(undefined8 *)(param_1 + 0x30);
    ppuVar11 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar14 == 0) {
      ppuVar8 = param_3;
      func_0x00010c0d02e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010bf4b900();
      _objc_release(ppuVar8);
      _objc_release(ppuVar1);
      _objc_release(ppuVar11);
      if ((int)ppuVar10 != 0) goto LAB_105b34818;
      func_0x000108f57dcc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_release(ppuVar1);
      _objc_release(ppuVar11);
LAB_105b34818:
      func_0x000108f57db4();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b02a8;
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_4);
    _objc_retain(uVar13);
    _objc_retain(param_3);
    _objc_retain(ppuVar11);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    ppuVar1 = param_3;
    func_0x000107d17020(param_3,uVar13,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar13);
    _objc_release(param_3);
    ppuVar8 = ppuVar11;
    func_0x000107d4bc38(ppuVar11,puVar3,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar1);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar11);
LAB_105b3494c:
  if (((*(byte *)(param_1 + 0x18) >> 6 & 1) != 0) &&
     ((ppuVar11 = param_3, func_0x00010c27dd80(), ppuVar11 == (undefined **)0x6 ||
      (ppuVar11 = param_3, func_0x00010c27dd80(), ppuVar11 == (undefined **)0xa)))) {
    puVar3 = PTR_PTR_1126b02a8;
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    _objc_release(param_3);
    ppuVar11 = &PTR____CFConstantStringClassReference_110db7318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
  ppuVar11 = param_3;
  func_0x00010c27dd80();
  if (ppuVar11 == (undefined **)0x6) {
    uVar12 = 1;
  }
  else {
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    uVar12 = (uint)(ppuVar11 == (undefined **)0x7);
  }
  puVar3 = PTR_PTR_1126b02a8;
  if (((uint)*(byte *)(param_1 + 0x10) & uVar12 & uStack_64) != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    ppuVar11 = param_3;
    _objc_release(param_3);
    func_0x000108f57de4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
  if (((*(byte *)(param_1 + 0x18) >> 5 & 1) != 0) &&
     (ppuVar11 = param_3, func_0x00010bf608e0(), (int)ppuVar11 != 0)) {
    _objc_retain(param_3);
    func_0x00010bf608c0(param_3);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    ppuVar11 = param_3;
    func_0x00010c27dd80();
    if ((ppuVar11 == (undefined **)0x6) ||
       (ppuVar11 = param_3, func_0x00010c27dd80(), ppuVar11 == (undefined **)0xa)) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1ef38;
    }
    else {
      ppuVar11 = &PTR____CFConstantStringClassReference_110db72f8;
    }
    func_0x00010bcbeaa8(ppuVar11,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x000107d4be64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    _objc_release(param_3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
  if ((((*(byte *)(param_1 + 0x18) >> 4 & 1) != 0) &&
      (ppuVar11 = param_3, func_0x00010bf60900(), (int)ppuVar11 != 0)) &&
     (ppuVar11 = param_3, func_0x00010c27dd80(), puVar3 = PTR_PTR_1126b02a8,
     ppuVar11 != (undefined **)0x0)) {
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    _objc_release(param_3);
    ppuVar11 = &PTR____CFConstantStringClassReference_110db72d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
  if (((*(byte *)(param_1 + 0x19) & 1) != 0) &&
     (ppuVar11 = param_3, func_0x00010c27dd80(), puVar3 = PTR_PTR_1126b02a8,
     ppuVar11 != (undefined **)0x0)) {
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    ppuVar11 = param_3;
    _objc_release(param_3);
    func_0x000108f57e2c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar1);
  }
  puVar3 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  puVar16 = puVar2;
  func_0x00010bf51e00(puVar2);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e1f0f8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110e1f0f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar3);
  _objc_release(ppuVar11);
  _objc_release(puVar16);
  (**(code **)(param_5 + 0x10))(param_5,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b34d6c; end: 105b34dbf; -[SCCustomStoryActionMenuDataProvider didUpdateCustomStoriesWithPublicationIds:] */

void FUN_105b34d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4b900(param_3,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)param_3 != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b34dc0; end: 105b34dc3; -[SCCustomStoryActionMenuDataProvider didUpdatePostableStories] */

void FUN_105b34dc0(void)

{
  return;
}



/* Entry: 105b34dc4; end: 105b34ddb; -[SCCustomStoryActionMenuDataProvider delegate] */

void FUN_105b34dc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b34ddc; end: 105b34de7; -[SCCustomStoryActionMenuDataProvider setDelegate:] */

void FUN_105b34ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105b34de8; end: 105b34e4f; -[SCCustomStoryActionMenuDataProvider .cxx_destruct] */

void FUN_105b34de8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b34e50; end: 105b352f3; -[SCCustomStoryActionMenuEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b34e50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  
  puVar1 = PTR_PTR_1126c27c8;
  _objc_alloc();
  lVar43 = (long)_DAT_112730248;
  lVar2 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112730250;
  uVar37 = *(undefined8 *)(param_1 + _DAT_11273024c);
  lVar42 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar6 = lVar42;
  func_0x00010c08e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08e1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0ec860();
  lVar41 = (long)_DAT_112730254;
  lVar13 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf620a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c247a20();
  lVar21 = param_1 + _DAT_112730258;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11273025c;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + _DAT_112730260);
  lVar26 = param_1 + _DAT_112730264;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + _DAT_112730268);
  lVar28 = param_1 + _DAT_11273026c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf42de0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + _DAT_112730270);
  lVar30 = param_1 + _DAT_112730274;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_112730278;
  _objc_loadWeakRetained();
  uVar44 = *(undefined8 *)(param_1 + _DAT_11273027c);
  lVar32 = param_1 + _DAT_112730280;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112730284;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0586c0(puVar1,param_2,lVar3,lVar5,uVar37,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,
                      lVar18,lVar20,lVar23,lVar25,uVar38,lVar27,uVar39,lVar29,uVar40,lVar30,lVar31,
                      uVar44,lVar33,lVar35);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar42);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar36 = PTR_PTR_1126c27d0;
  _objc_alloc();
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained(lVar43);
  lVar2 = lVar43;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + lVar41;
  _objc_loadWeakRetained(lVar41);
  lVar4 = lVar41;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0406a0(puVar36,param_2,puVar1,lVar2,lVar4);
  lVar42 = (long)_DAT_112730288;
  uVar37 = *(undefined8 *)(param_1 + lVar42);
  *(undefined **)(param_1 + lVar42) = puVar36;
  _objc_release(uVar37);
  _objc_release(lVar4);
  _objc_release(lVar41);
  _objc_release(lVar2);
  _objc_release(lVar43);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar42));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b352f4; end: 105b35407; -[SCCustomStoryActionMenuEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b352f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273026c);
  _objc_storeStrong(param_1 + _DAT_11273027c,0);
  _objc_storeStrong(param_1 + _DAT_112730270,0);
  _objc_storeStrong(param_1 + _DAT_11273028c,0);
  _objc_storeStrong(param_1 + _DAT_112730268,0);
  _objc_storeStrong(param_1 + _DAT_112730260,0);
  _objc_storeStrong(param_1 + _DAT_11273024c,0);
  _objc_destroyWeak(param_1 + _DAT_112730278);
  _objc_destroyWeak(param_1 + _DAT_112730284);
  _objc_destroyWeak(param_1 + _DAT_112730280);
  _objc_destroyWeak(param_1 + _DAT_112730274);
  _objc_destroyWeak(param_1 + _DAT_112730250);
  _objc_destroyWeak(param_1 + _DAT_11273025c);
  _objc_destroyWeak(param_1 + _DAT_112730264);
  _objc_destroyWeak(param_1 + _DAT_112730254);
  _objc_destroyWeak(param_1 + _DAT_112730258);
  _objc_destroyWeak(param_1 + _DAT_112730248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112730288,0);
  return;
}


