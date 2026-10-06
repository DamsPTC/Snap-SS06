/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ce3dbc; end: 107ce3e0b; -[SCMyProfileFooterSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce3dbc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276d3e4);
  _objc_destroyWeak(param_1 + _DAT_11276d3dc);
  _objc_destroyWeak(param_1 + _DAT_11276d3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276d3e8);
  return;
}



/* Entry: 107ce3e0c; end: 107ce3ee7; -[SCMyUnifiedProfileFooterSectionDataProvider initWithAnnouncer:registrationInfoProvider:isDeduplicationForDidUpdateViewModelsEnabled:ghostImageService:] */

undefined1 *
FUN_107ce3e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fa820;
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
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce3ee8; end: 107ce3ef3; +[SCMyUnifiedProfileFooterSectionDataProvider announcerIdentifier] */

undefined ** FUN_107ce3ee8(void)

{
  return &PTR____CFConstantStringClassReference_110eb7038;
}



/* Entry: 107ce3ef4; end: 107ce3efb; -[SCMyUnifiedProfileFooterSectionDataProvider addListener:] */

void FUN_107ce3ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ce3efc; end: 107ce3f03; -[SCMyUnifiedProfileFooterSectionDataProvider removeListener:] */

void FUN_107ce3efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ce3f04; end: 107ce42bf; -[SCMyUnifiedProfileFooterSectionDataProvider setSectionDataModel:] */

void FUN_107ce3f04(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf446a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x0001000bb6d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf446a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar5);
    puVar3 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c12d3e0(puVar5);
    }
    else {
      func_0x00010c1d0640(puVar5);
    }
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c0b4aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  puVar7 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c09e240(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e2e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar8);
  puVar7 = puVar6;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = *(undefined **)(param_1 + 0x18);
  _objc_retain(puVar14);
  puVar3 = puVar14;
  if (puVar7 != (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar11 = &PTR____CFConstantStringClassReference_110eb7078;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7078,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(ppuVar11);
    _objc_release(puVar10);
  }
  puVar14 = *(undefined **)(param_1 + 0x18);
  _objc_retain(puVar14);
  _objc_retain(puVar3);
  if (puVar14 == puVar3) {
    iVar1 = 1;
  }
  else if (puVar3 == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    puVar10 = puVar14;
    func_0x00010c071ae0();
    iVar1 = (int)puVar10;
  }
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_retain(puVar3);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar12);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
      lVar13 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar13);
      func_0x00010c155aa0();
      _objc_release(lVar13);
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107ce42c0; end: 107ce4313; -[SCMyUnifiedProfileFooterSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107ce42c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107ce4314;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce4314; end: 107ce43c3;  */

void FUN_107ce4314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar2 = PTR_PTR_1126b4778;
  _objc_alloc(PTR_PTR_1126b4778);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf96100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051380(puVar2,param_2,uVar4,uVar3);
  func_0x00010bffd260(puVar1,param_2,&PTR____CFConstantStringClassReference_110f11c38,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ce43c4; end: 107ce4447; -[SCMyUnifiedProfileFooterSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_107ce43c4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107ce4578;
    puStack_90 = &UNK_110865f78;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f11c38;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
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



/* Entry: 107ce4448; end: 107ce4577; -[SCMyUnifiedProfileFooterSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_107ce4448(undefined8 param_1)

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
  pcStack_68 = FUN_107ce4578;
  puStack_60 = &UNK_110865f78;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f11c38;
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
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ce4578; end: 107ce45bf;  */

void FUN_107ce4578(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce45c0; end: 107ce45c7; -[SCMyUnifiedProfileFooterSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_107ce45c0(void)

{
  return 1;
}



/* Entry: 107ce45c8; end: 107ce467b; -[SCMyUnifiedProfileFooterSectionDataProvider _configureCell:] */

void FUN_107ce45c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4780;
  _objc_opt_class(PTR_PTR_1126b4780);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  puVar4 = puVar2;
  func_0x00010c14fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce467c; end: 107ce4693; -[SCMyUnifiedProfileFooterSectionDataProvider dataProviderDelegate] */

void FUN_107ce467c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce4694; end: 107ce469f; -[SCMyUnifiedProfileFooterSectionDataProvider setDataProviderDelegate:] */

void FUN_107ce4694(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107ce46a0; end: 107ce46a7; -[SCMyUnifiedProfileFooterSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107ce46a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ce46a8; end: 107ce46d7; -[SCMyUnifiedProfileFooterSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107ce46a8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107ce46d8; end: 107ce46df; -[SCMyUnifiedProfileFooterSectionDataProvider sectionDataModel] */

undefined8 FUN_107ce46d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ce46e0; end: 107ce4747; -[SCMyUnifiedProfileFooterSectionDataProvider .cxx_destruct] */

void FUN_107ce46e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ce4748; end: 107ce474b; -[SCMyProfileFriendsSectionEntryPoint begin] */

void FUN_107ce4748(void)

{
  return;
}



/* Entry: 107ce474c; end: 107ce4783; -[SCMyProfileFriendsSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce474c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276d414);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276d410);
  return;
}



/* Entry: 107ce4784; end: 107ce478b; -[SCUnifiedProfileNavigationController pageViewName] */

undefined8 FUN_107ce4784(void)

{
  return 0xd8;
}



/* Entry: 107ce478c; end: 107ce4793; -[SCUnifiedProfileNavigationController preferredStatusBarStyle] */

undefined8 FUN_107ce478c(void)

{
  return 0;
}



/* Entry: 107ce4794; end: 107ce4797; -[SCUnifiedProfileNavigationController childViewControllerForStatusBarStyle] */

void FUN_107ce4794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c275150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_topViewController_11267ae78);
  return;
}



/* Entry: 107ce4798; end: 107ce479b; -[SCUnifiedProfileNavigationController childViewControllerForStatusBarHidden] */

void FUN_107ce4798(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c275150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_topViewController_11267ae78);
  return;
}



/* Entry: 107ce479c; end: 107ce47a3; -[SCUnifiedProfileNavigationController prefersStatusBarHidden] */

undefined8 FUN_107ce479c(void)

{
  return 0;
}



/* Entry: 107ce47a4; end: 107ce47ab; -[SCUnifiedProfileNavigationController preferredStatusBarUpdateAnimation] */

undefined8 FUN_107ce47a4(void)

{
  return 1;
}



/* Entry: 107ce47ac; end: 107ce47b3; -[SCUnifiedProfileNavigationController sc_handlesStatusBarDuringModalDismissal] */

undefined8 FUN_107ce47ac(void)

{
  return 1;
}



/* Entry: 107ce47b4; end: 107ce47bb; -[SCUnifiedProfileNavigationController shouldStopCameraImmediately] */

undefined8 FUN_107ce47b4(void)

{
  return 1;
}



/* Entry: 107ce47bc; end: 107ce47c3; -[SCUnifiedProfileNavigationController sendChatScreenshotNotification] */

undefined8 FUN_107ce47bc(void)

{
  return 0;
}



/* Entry: 107ce47c4; end: 107ce4b2b; -[SCUnifiedProfilePrivacyExplainerViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ce47c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fa828;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_11276d418;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d7758;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276d41c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276d41c) = puVar2;
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b1a08;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276d420);
    *(undefined **)((long)puVar1 + (long)_DAT_11276d420) = puVar2;
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276d424;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _CGPathCreateMutable();
    _CGPathMoveToPoint(0,0);
    _CGPathAddLineToPoint(0x4020000000000000,0,uVar5,0);
    _CGPathAddLineToPoint(0,0x4020000000000000,uVar5,0);
    _CGPathAddLineToPoint(0,0,uVar5,0);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _CFRelease(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar2);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126d7760;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276d428;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    _objc_release(uVar5);
    func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                        *(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276d42c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276d42c) = puVar4;
    _objc_release(uVar5);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ce4b2c; end: 107ce4b7f; -[SCUnifiedProfilePrivacyExplainerViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce4b2c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa828;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276d430);
  *(undefined8 *)(param_1 + _DAT_11276d430) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce4b80; end: 107ce4ea3; -[SCUnifiedProfilePrivacyExplainerViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce4b80(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa828;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar7 = param_1;
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar11 = dVar7;
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d7768;
  uVar5 = *(ulong *)(param_5 + _DAT_11276d434);
  _objc_retain(uVar5);
  _objc_opt_class(puVar3);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar4 = uVar1;
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e740(uVar1);
  dVar12 = param_1 + -12.0;
  dVar8 = (dVar12 - dVar11) + -12.0 + -20.0 + -27.0 + -20.0;
  func_0x00010bf20bc0(dVar8,0x7fefffffffffffff,uVar4);
  _objc_release(uVar4);
  func_0x00010c08e740(uVar1);
  dVar8 = dVar7 - dVar8;
  dVar13 = dVar8 * 0.5;
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e740(uVar1);
  dVar11 = dVar8;
  func_0x00010c08e740(uVar1);
  uVar9 = 0x4028000000000000;
  func_0x00010b8166f8(0x4028000000000000,dVar13,dVar8,dVar11,lVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276d41c));
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e740(uVar1);
  uVar10 = uVar9;
  func_0x00010c08e740(uVar1);
  func_0x00010b8166f8(0x4028000000000000,dVar13,uVar9,uVar10,lVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276d420));
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = 10.0;
  func_0x00010b8166f8(0x4024000000000000,dVar13 + -2.0,0x4020000000000000,0x4020000000000000);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276d424));
  _objc_release(lVar2);
  func_0x00010c08e740(uVar1);
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8(dVar11 + 12.0 + 12.0,0x4028000000000000,dVar12,param_4);
  lVar6 = (long)_DAT_11276d418;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(lVar2);
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar6));
  lVar2 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8(param_1 + -20.0 + -27.0,(dVar7 + -27.0) * 0.5,0x403b000000000000,
                      0x403b000000000000);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276d428));
  _objc_release(uVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 107ce4ea4; end: 107ce512f; -[SCUnifiedProfilePrivacyExplainerViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce4ea4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d7768;
  _objc_opt_class(PTR_PTR_1126d7768);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11276d434;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
    goto LAB_107ce5110;
  }
  if (uVar1 == 0) {
    _objc_release(uVar5);
  }
  else {
    uVar3 = uVar5;
    func_0x00010c071ae0();
    _objc_release(param_3);
    _objc_release(uVar5);
    if ((uVar3 & 1) != 0) goto LAB_107ce5110;
  }
  uVar5 = uVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = uVar5;
  _objc_release(uVar4);
  uVar5 = uVar1;
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276d418));
  _objc_release(uVar5);
  func_0x00010c236aa0(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276d424));
  uVar5 = uVar1;
  func_0x00010c08e6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 == 0) {
    uVar5 = uVar1;
    func_0x00010c08e6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 != 0) {
      lVar6 = (long)_DAT_11276d420;
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
      uVar5 = uVar1;
      func_0x00010c08e6e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11276d41c;
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar5);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      goto LAB_107ce50ac;
    }
  }
  else {
    uVar5 = uVar1;
    func_0x00010c08e6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276d420;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    lVar6 = (long)_DAT_11276d41c;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
LAB_107ce50ac:
    func_0x00010c1a7f60(uVar4);
  }
  uVar5 = uVar1;
  func_0x00010c140c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11276d428;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c140b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar5);
  func_0x00010c1cbe20(param_1);
LAB_107ce5110:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce5130; end: 107ce523f; +[SCUnifiedProfilePrivacyExplainerViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107ce5130(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d7768;
  _objc_opt_class(PTR_PTR_1126d7768);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    dVar4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_7;
    func_0x00010c26b700(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e740(param_7);
    func_0x00010bf20bc0(((param_1 + -12.0) - dVar4) + -12.0 + -20.0 + -27.0 + -20.0,
                        0x7fefffffffffffff,uVar3);
    _objc_release(uVar3);
    dVar4 = param_4 + 12.0 + 12.0;
    if (param_2 <= dVar4) {
      dVar4 = param_2;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107ce5240; end: 107ce5383; -[SCUnifiedProfilePrivacyExplainerViewCell _handleRightIconTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce5240(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126d7768;
  uVar6 = *(ulong *)(param_1 + _DAT_11276d434);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010c140bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  lVar5 = *(long *)(param_1 + _DAT_11276d430);
  if (lVar5 != 0 && uVar3 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  }
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276d438);
  uVar6 = uVar1;
  func_0x00010c140bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce5384; end: 107ce538b; -[SCUnifiedProfilePrivacyExplainerViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_107ce5384(void)

{
  return 0;
}



/* Entry: 107ce538c; end: 107ce539b; -[SCUnifiedProfilePrivacyExplainerViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ce538c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276d438);
}



/* Entry: 107ce539c; end: 107ce53db; -[SCUnifiedProfilePrivacyExplainerViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce539c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276d438;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce53dc; end: 107ce53eb; -[SCUnifiedProfilePrivacyExplainerViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ce53dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276d434);
}



/* Entry: 107ce53ec; end: 107ce53fb; -[SCUnifiedProfilePrivacyExplainerViewCell onDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ce53ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276d430);
}



/* Entry: 107ce53fc; end: 107ce5407; -[SCUnifiedProfilePrivacyExplainerViewCell setOnDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce53fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ce5408; end: 107ce54b7; -[SCUnifiedProfilePrivacyExplainerViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce5408(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276d430,0);
  _objc_storeStrong(param_1 + _DAT_11276d434,0);
  _objc_storeStrong(param_1 + _DAT_11276d438,0);
  _objc_storeStrong(param_1 + _DAT_11276d42c,0);
  _objc_storeStrong(param_1 + _DAT_11276d428,0);
  _objc_storeStrong(param_1 + _DAT_11276d424,0);
  _objc_storeStrong(param_1 + _DAT_11276d420,0);
  _objc_storeStrong(param_1 + _DAT_11276d41c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276d418,0);
  return;
}



/* Entry: 107ce54b8; end: 107ce55a7;  */

void FUN_107ce54b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_107ce6bf8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107ce6c10();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000108f63a44(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d7770;
  _objc_alloc(PTR_PTR_1126d7770);
  func_0x00010c055880();
  puVar5 = PTR_PTR_1126d7768;
  _objc_alloc(PTR_PTR_1126d7768);
  func_0x00010c051500(0x404a000000000000);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ce55a8; end: 107ce57d7;  */

void FUN_107ce55a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar5 = param_1;
  _objc_retain();
  func_0x000107ce6c28();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x000107ce6c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000108f63a44(uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b45f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246860(0x4000000000000000,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x000108ffef38(0,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bd8e8;
  func_0x00010bfe9660(PTR_PTR_1126bd8e8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  func_0x00010bff7e80();
  puVar7 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  puVar8 = PTR_PTR_1126d7770;
  _objc_alloc(PTR_PTR_1126d7770);
  func_0x00010c055880();
  puVar9 = PTR_PTR_1126d7768;
  _objc_alloc(PTR_PTR_1126d7768);
  func_0x00010c051500(0x403a000000000000);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107ce57d8; end: 107ce584b; -[SCUnifiedProfileProminentActionsSectionCreator initWithSnapchatter:] */

undefined1 * FUN_107ce57d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa830;
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



/* Entry: 107ce584c; end: 107ce58cf; -[SCUnifiedProfileProminentActionsSectionCreator initWithGroupId:shouldHideCallActions:] */

undefined1 *
FUN_107ce584c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce58d0; end: 107ce58d7; -[SCUnifiedProfileProminentActionsSectionCreator order] */

undefined8 FUN_107ce58d0(void)

{
  return 6;
}



/* Entry: 107ce58d8; end: 107ce5a5f; -[SCUnifiedProfileProminentActionsSectionCreator section] */

void FUN_107ce58d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    _objc_retain(lVar3);
    goto LAB_107ce5a2c;
  }
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f12158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d7778;
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      _objc_alloc(PTR_PTR_1126d7778);
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bff3120(puVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x10),
                          *(undefined1 *)(param_1 + 0x18),1);
      goto LAB_107ce59f8;
    }
  }
  else {
    _objc_alloc(PTR_PTR_1126d7778);
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bff31a0(puVar2,param_2,lVar3,*(undefined8 *)(param_1 + 8));
LAB_107ce59f8:
    func_0x00010c1f9240(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_retain(puVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(lVar3);
LAB_107ce5a2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce5a60; end: 107ce5a77; -[SCUnifiedProfileProminentActionsSectionCreator lifecycleAnnouncer] */

void FUN_107ce5a60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce5a78; end: 107ce5a83; -[SCUnifiedProfileProminentActionsSectionCreator setLifecycleAnnouncer:] */

void FUN_107ce5a78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107ce5a84; end: 107ce5a8b; -[SCUnifiedProfileProminentActionsSectionCreator actionHandler] */

undefined8 FUN_107ce5a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ce5a8c; end: 107ce5adb; -[SCUnifiedProfileProminentActionsSectionCreator .cxx_destruct] */

void FUN_107ce5a8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ce5adc; end: 107ce5ae7; +[SCUnifiedProfileProminentActionsSectionDataProvider announcerIdentifier] */

undefined ** FUN_107ce5adc(void)

{
  return &PTR____CFConstantStringClassReference_110eb7118;
}



/* Entry: 107ce5ae8; end: 107ce5aef; -[SCUnifiedProfileProminentActionsSectionDataProvider addListener:] */

void FUN_107ce5ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ce5af0; end: 107ce5af7; -[SCUnifiedProfileProminentActionsSectionDataProvider removeListener:] */

void FUN_107ce5af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ce5af8; end: 107ce5b9b; -[SCUnifiedProfileProminentActionsSectionDataProvider initWithAnnouncer:snapchatter:] */

undefined1 *
FUN_107ce5af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fa838;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined ***)((long)puVar1 + 0x28) = &PTR__OBJC_CLASS___NSConstantArray_111181a48;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce5b9c; end: 107ce5c57; -[SCUnifiedProfileProminentActionsSectionDataProvider initWithAnnouncer:groupId:shouldHideCallActions:shouldAddTopPadding:] */

undefined1 *
FUN_107ce5b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 0x21) = param_6;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined ***)((long)puVar1 + 0x28) = &PTR__OBJC_CLASS___NSConstantArray_111181a60;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce5c58; end: 107ce5c8b; -[SCUnifiedProfileProminentActionsSectionDataProvider setSectionDataModel:] */

void FUN_107ce5c58(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce5c8c; end: 107ce5cef; -[SCUnifiedProfileProminentActionsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107ce5c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107ce5cf0;
    puStack_20 = &UNK_110845ab0;
    lStack_18 = param_1;
    func_0x000100504554(param_3,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce5cf0; end: 107ce5d9f;  */

void FUN_107ce5cf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar2 = PTR_PTR_1126d7780;
  _objc_alloc(PTR_PTR_1126d7780);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be83020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b500(puVar2,param_2,uVar3,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20),1);
  func_0x00010bffd260(puVar1,param_2,&PTR____CFConstantStringClassReference_110f11cf8,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ce5da0; end: 107ce5f03; -[SCUnifiedProfileProminentActionsSectionDataProvider _prominentActionViewModels] */

void FUN_107ce5da0(undefined *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *unaff_x21;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf529e0(uVar1);
    func_0x00010bffc4a0(puVar6,param_2,uVar1);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    unaff_x21 = *(undefined **)(param_1 + 0x28);
    _objc_retain(unaff_x21);
    puVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_110;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar1 = *(undefined8 *)(lStack_118 + (long)puVar8 * 8);
          func_0x00010c067fc0(uVar1);
          puVar3 = param_1;
          func_0x00010bee9940(param_1,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6,param_2,puVar3);
          _objc_release(puVar3);
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = unaff_x21;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    param_1 = unaff_x21;
    _objc_release(unaff_x21);
    param_3 = (undefined1 *)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = unaff_x21;
    if ((long)param_3 < 3) {
      if (param_3 == (undefined1 *)0x1) {
        puVar6 = PTR_PTR_1126b3fc8;
        _objc_alloc(PTR_PTR_1126b3fc8);
        func_0x00010be621c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf1d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc3598;
        uVar1 = 1;
        puVar2 = param_1;
      }
      else {
        if (param_3 != (undefined1 *)0x2) goto _objc_autoreleaseReturnValue;
        puVar6 = PTR_PTR_1126b3fc8;
        _objc_alloc(PTR_PTR_1126b3fc8);
        func_0x00010be62100(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc35d8;
        uVar1 = 2;
        puVar2 = param_1;
      }
      param_1 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      if (param_3 == (undefined1 *)0x3) {
        puVar6 = PTR_PTR_1126b3fc8;
        _objc_alloc(PTR_PTR_1126b3fc8);
        func_0x00010bdd8ae0(param_1,param_2,1,0x9b);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb3020(param_1);
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc3558;
        uVar1 = 3;
      }
      else {
        if (param_3 != (undefined1 *)0x4) goto _objc_autoreleaseReturnValue;
        puVar6 = PTR_PTR_1126b3fc8;
        _objc_alloc(PTR_PTR_1126b3fc8);
        func_0x00010bdd8ae0(param_1,param_2,2,0x9c);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb3020(param_1);
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc3618;
        uVar1 = 4;
      }
    }
    func_0x00010c03b4e0(puVar6,param_2,uVar1,puVar2,ppuVar5,param_1);
    _objc_release(puVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ce5f04; end: 107ce607f; -[SCUnifiedProfileProminentActionsSectionDataProvider _viewModelForProminentAction:] */

void FUN_107ce5f04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *unaff_x21;
  
  if (param_3 < 3) {
    if (param_3 == 1) {
      unaff_x21 = PTR_PTR_1126b3fc8;
      _objc_alloc(PTR_PTR_1126b3fc8);
      func_0x00010be621c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf1d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc3598;
      uVar2 = 1;
      uVar1 = param_1;
    }
    else {
      if (param_3 != 2) goto LAB_107ce606c;
      unaff_x21 = PTR_PTR_1126b3fc8;
      _objc_alloc(PTR_PTR_1126b3fc8);
      func_0x00010be62100(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc35d8;
      uVar2 = 2;
      uVar1 = param_1;
    }
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    if (param_3 == 3) {
      unaff_x21 = PTR_PTR_1126b3fc8;
      _objc_alloc(PTR_PTR_1126b3fc8);
      func_0x00010bdd8ae0(param_1,param_2,1,0x9b);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb3020(param_1);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc3558;
      uVar2 = 3;
    }
    else {
      if (param_3 != 4) goto LAB_107ce606c;
      unaff_x21 = PTR_PTR_1126b3fc8;
      _objc_alloc(PTR_PTR_1126b3fc8);
      func_0x00010bdd8ae0(param_1,param_2,2,0x9c);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb3020(param_1);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc3618;
      uVar2 = 4;
    }
  }
  func_0x00010c03b4e0(unaff_x21,param_2,uVar2,uVar1,ppuVar3,param_1);
  _objc_release(uVar1);
LAB_107ce606c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 107ce6080; end: 107ce60bb; -[SCUnifiedProfileProminentActionsSectionDataProvider _shouldDisableCallingButtons] */

undefined8 FUN_107ce6080(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 107ce60bc; end: 107ce61ef; -[SCUnifiedProfileProminentActionsSectionDataProvider _navigateToChatActionModelWithDeepLinkPath:actionNameForLogging:] */

void FUN_107ce60bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b01c0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_107ce616c;
    }
    func_0x00010bfcf680(PTR_PTR_1126b01c0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126b47b0;
  _objc_alloc(PTR_PTR_1126b47b0);
  func_0x00010bffd8e0();
  _objc_release(puVar2);
LAB_107ce616c:
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar3 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb78f8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ce61f0; end: 107ce630b; -[SCUnifiedProfileProminentActionsSectionDataProvider _callActionModelWithMedia:actionNameForLogging:] */

void FUN_107ce61f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b01c0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_107ce6294;
    }
    func_0x00010bfcf680(PTR_PTR_1126b01c0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126b40b0;
  _objc_alloc(PTR_PTR_1126b40b0);
  func_0x00010c03d3e0();
  _objc_release(puVar2);
LAB_107ce6294:
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar3 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110f125b8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ce630c; end: 107ce639b; -[SCUnifiedProfileProminentActionsSectionDataProvider _navigateToCameraActionModel] */

void FUN_107ce630c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b40c8;
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010bfcf600(PTR_PTR_1126b40c8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bfb9280(PTR_PTR_1126b40c8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ce639c; end: 107ce641f; -[SCUnifiedProfileProminentActionsSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_107ce639c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f11cf8;
  puVar1 = PTR_PTR_1126d7788;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x2;
}



/* Entry: 107ce6420; end: 107ce6427; -[SCUnifiedProfileProminentActionsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_107ce6420(void)

{
  return 2;
}



/* Entry: 107ce6428; end: 107ce642f; -[SCUnifiedProfileProminentActionsSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_107ce6428(void)

{
  return 1;
}



/* Entry: 107ce6430; end: 107ce6447; -[SCUnifiedProfileProminentActionsSectionDataProvider dataProviderDelegate] */

void FUN_107ce6430(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce6448; end: 107ce6453; -[SCUnifiedProfileProminentActionsSectionDataProvider setDataProviderDelegate:] */

void FUN_107ce6448(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107ce6454; end: 107ce645b; -[SCUnifiedProfileProminentActionsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107ce6454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ce645c; end: 107ce648b; -[SCUnifiedProfileProminentActionsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107ce645c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107ce648c; end: 107ce6493; -[SCUnifiedProfileProminentActionsSectionDataProvider sectionDataModel] */

undefined8 FUN_107ce648c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ce6494; end: 107ce64fb; -[SCUnifiedProfileProminentActionsSectionDataProvider .cxx_destruct] */

void FUN_107ce6494(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ce64fc; end: 107ce658f; -[SCUnifiedProfileSinglePromptSectionDataProvider initWithDataCoordinator:] */

undefined1 * FUN_107ce64fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa840;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce6590; end: 107ce659b; +[SCUnifiedProfileSinglePromptSectionDataProvider announcerIdentifier] */

undefined ** FUN_107ce6590(void)

{
  return &PTR____CFConstantStringClassReference_110eb7138;
}



/* Entry: 107ce659c; end: 107ce65a3; -[SCUnifiedProfileSinglePromptSectionDataProvider addListener:] */

void FUN_107ce659c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ce65a4; end: 107ce65ab; -[SCUnifiedProfileSinglePromptSectionDataProvider removeListener:] */

void FUN_107ce65a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ce65ac; end: 107ce65b7; -[SCUnifiedProfileSinglePromptSectionDataProvider setUp] */

void FUN_107ce65ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addUpdateListener__11259cb88,param_1);
  return;
}



/* Entry: 107ce65b8; end: 107ce65c3; -[SCUnifiedProfileSinglePromptSectionDataProvider tearDown] */

void FUN_107ce65b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeUpdateListener__1126295c8,param_1);
  return;
}



/* Entry: 107ce65c4; end: 107ce66a3; -[SCUnifiedProfileSinglePromptSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107ce65c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0840e0();
    _objc_release(lVar1);
    if ((lVar2 == 0) && (*(long *)(param_1 + 0x10) != 0)) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107ce6638;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_107ce6638:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 8),PTR_s_contentCellClassesByReuseIdentif_1125b0998);
  return;
}



/* Entry: 107ce66a4; end: 107ce66ab; -[SCUnifiedProfileSinglePromptSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_107ce66a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_contentCellClassesByReuseIdentif_1125b0998);
  return;
}



/* Entry: 107ce66ac; end: 107ce670f; -[SCUnifiedProfileSinglePromptSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_107ce66ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46640(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ce6710; end: 107ce671f; -[SCUnifiedProfileSinglePromptSectionDataProvider numberOfItemsInSection:] */

bool FUN_107ce6710(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 107ce6720; end: 107ce6757; -[SCUnifiedProfileSinglePromptSectionDataProvider setSectionDataModel:] */

void FUN_107ce6720(long param_1)

{
  func_0x00010bed66c0();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce6758; end: 107ce67df; -[SCUnifiedProfileSinglePromptSectionDataProvider _updateCurrentPromptItemViewModel] */

void FUN_107ce6758(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c118640();
  _objc_retainAutoreleasedReturnValue();
  if (*(ulong *)(param_1 + 0x10) == 0) {
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar3);
  }
  else if ((uVar1 != *(ulong *)(param_1 + 0x10)) &&
          (uVar2 = uVar1, func_0x00010c071ae0(), (uVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce67e0; end: 107ce68d3; -[SCUnifiedProfileSinglePromptSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_107ce67e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ce68d4; end: 107ce6903;  */

void FUN_107ce68d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce6904; end: 107ce691b; -[SCUnifiedProfileSinglePromptSectionDataProvider dataProviderDelegate] */

void FUN_107ce6904(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce691c; end: 107ce6927; -[SCUnifiedProfileSinglePromptSectionDataProvider setDataProviderDelegate:] */

void FUN_107ce691c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107ce6928; end: 107ce692f; -[SCUnifiedProfileSinglePromptSectionDataProvider sectionDataModel] */

undefined8 FUN_107ce6928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ce6930; end: 107ce6937; -[SCUnifiedProfileSinglePromptSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107ce6930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ce6938; end: 107ce6967; -[SCUnifiedProfileSinglePromptSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107ce6938(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107ce6968; end: 107ce69c3; -[SCUnifiedProfileSinglePromptSectionDataProvider .cxx_destruct] */

void FUN_107ce6968(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ce69c4; end: 107ce6a77; -[SCUnifiedProfileScreenCaptureMonitor startObservingScreenCapture] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107ce69c4(void)

{
  undefined *puVar1;
  
  func_0x00010c2564e0();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110a076a0);
  func_0x000107c4a02c();
  if ((int)puVar1 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR___NSConcreteGlobalBlock_110a076a0);
  return;
}



/* Entry: 107ce6a78; end: 107ce6a7b;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107ce6a78(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14fb00();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto SUB_1000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar4 = &PTR___NSConcreteGlobalBlock_110d5b250;
SUB_1000d76cc:
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar4);
  func_0x000107c4a02c();
  if ((int)puVar2 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 107ce6a7c; end: 107ce6abb; -[SCUnifiedProfileScreenCaptureMonitor stopObservingScreenCapture] */

void FUN_107ce6a7c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ce6abc; end: 107ce6b5b; -[SCUnifiedProfileScreenCaptureMonitor _didScreenshot] */

void FUN_107ce6abc(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = param_2 + 0x18;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x000108fab2e8();
    _objc_release(uVar3);
    _objc_release(lVar2);
    if ((uVar4 & 1) != 0) goto LAB_107ce6b28;
  }
  _CACurrentMediaTime();
  dVar5 = param_1 - *(double *)(param_2 + 8);
  bVar1 = false;
  if ((0.0 < *(double *)(param_2 + 8)) && (bVar1 = false, !NAN(dVar5))) {
    bVar1 = dVar5 < 0.5;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + 8) = param_1;
LAB_107ce6b28:
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf7a480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


