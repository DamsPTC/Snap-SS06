/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050a79f0; end: 1050a7a1f;  */

void FUN_1050a79f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a7a20; end: 1050a7a27; -[SCGroupUnifiedProfileMembersSectionDataProvider tearDown] */

void FUN_1050a7a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1050a7a28; end: 1050a7d3b; -[SCGroupUnifiedProfileMembersSectionDataProvider setSectionDataModel:] */

void FUN_1050a7a28(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcee40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = uVar1;
  func_0x00010c246ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1050a7bf8;
  puStack_50 = &UNK_110865fe8;
  uVar1 = uVar3;
  lStack_48 = param_1;
  func_0x000100504554(uVar3,&puStack_68);
  func_0x00010befa160(puVar2);
  puVar4 = puVar2;
  func_0x00010bf529e0();
  if (*(long *)(param_1 + 0x38) < (long)puVar4) {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    func_0x00010bf529e0(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  func_0x00010c1ec5a0(uVar5);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar4;
  _objc_release(uVar5);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1050a7d3c; end: 1050a7d8f; -[SCGroupUnifiedProfileMembersSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1050a7d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050a7d90;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a7d90; end: 1050a7d9b;  */

void FUN_1050a7d90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerCellViewModelForIndexP_1125576a8,
             param_2);
  return;
}



/* Entry: 1050a7d9c; end: 1050a7e1f; -[SCGroupUnifiedProfileMembersSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_1050a7d9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar5 = *(undefined **)(puVar1 + 0x70);
  _objc_retain(puVar5);
  _objc_opt_class(puVar2);
  puVar3 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar2);
  puVar1 = puVar5;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar5);
  puVar2 = puVar1;
  func_0x00010bf529e0(puVar1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1050a7e20; end: 1050a7e8f; -[SCGroupUnifiedProfileMembersSectionDataProvider numberOfItemsInSection:] */

ulong FUN_1050a7e20(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = *(ulong *)(param_1 + 0x70);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1050a7e90; end: 1050a7fbf; -[SCGroupUnifiedProfileMembersSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1050a7e90(undefined8 param_1)

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
  pcStack_68 = FUN_1050a7fc0;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f11d18;
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
  func_0x00010bde53a0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1050a7fc0; end: 1050a8007;  */

void FUN_1050a7fc0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde53a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a8008; end: 1050a80ab; -[SCGroupUnifiedProfileMembersSectionDataProvider _configureMembersSectionCollectionViewCell:] */

void FUN_1050a8008(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4598;
  _objc_opt_class(PTR_PTR_1126b4598);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c14fc00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(uVar1);
  _objc_release(uVar4);
  func_0x00010c1aa200(uVar1);
  func_0x00010c1ac420(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050a80ac; end: 1050a823f; -[SCGroupUnifiedProfileMembersSectionDataProvider _containerCellViewModelForIndexPath:] */

void FUN_1050a80ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar5 = *(ulong *)(param_1 + 0x70);
  _objc_retain(uVar5);
  _objc_opt_class(puVar6);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar2 = param_3;
  func_0x00010c142240();
  if (-1 < (long)uVar2) {
    uVar2 = param_3;
    func_0x00010c142240();
    uVar5 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 < uVar5) {
      uVar2 = param_3;
      func_0x00010c142240();
      if (uVar2 == 0) {
        func_0x00010c142240(param_3);
        uVar2 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b2c10;
        _objc_opt_class(PTR_PTR_1126b2c10);
        uVar5 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar6);
        _objc_release(uVar2);
        if ((uVar5 & 1) == 0) goto LAB_1050a8214;
      }
      puVar6 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010c142240(param_3);
      uVar5 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b2c10;
      _objc_opt_class(PTR_PTR_1126b2c10);
      uVar4 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar2 = uVar5;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar5);
      func_0x00010bffd260(puVar6);
      _objc_release(uVar2);
      goto LAB_1050a8218;
    }
  }
LAB_1050a8214:
  puVar6 = (undefined *)0x0;
LAB_1050a8218:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1050a8240; end: 1050a831b; -[SCGroupUnifiedProfileMembersSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1050a8240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050a831c; end: 1050a834b;  */

void FUN_1050a831c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a834c; end: 1050a8363; -[SCGroupUnifiedProfileMembersSectionDataProvider dataProviderDelegate] */

void FUN_1050a834c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a8364; end: 1050a836f; -[SCGroupUnifiedProfileMembersSectionDataProvider setDataProviderDelegate:] */

void FUN_1050a8364(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1050a8370; end: 1050a8377; -[SCGroupUnifiedProfileMembersSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050a8370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1050a8378; end: 1050a83a7; -[SCGroupUnifiedProfileMembersSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050a8378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a83a8; end: 1050a83af; -[SCGroupUnifiedProfileMembersSectionDataProvider sectionDataModel] */

undefined8 FUN_1050a83a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1050a83b0; end: 1050a845f; -[SCGroupUnifiedProfileMembersSectionDataProvider .cxx_destruct] */

void FUN_1050a83b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 1050a8460; end: 1050a856b; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider initWithDataSource:currentUserId:announcer:ghostImageService:] */

undefined1 *
FUN_1050a8460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5f78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a856c; end: 1050a8577; +[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider announcerIdentifier] */

undefined ** FUN_1050a856c(void)

{
  return &PTR____CFConstantStringClassReference_110dc4938;
}



/* Entry: 1050a8578; end: 1050a857f; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider addListener:] */

void FUN_1050a8578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050a8580; end: 1050a8587; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider removeListener:] */

void FUN_1050a8580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050a8588; end: 1050a86a3; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider setSectionDataModel:] */

void FUN_1050a8588(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be46540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    ppuVar6 = *(undefined ***)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar3 & 1) == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc4978;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4978,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc4958;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4958,0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar4;
    _objc_release(uVar5);
  }
  _objc_release(ppuVar6);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a86a4; end: 1050a86f7; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1050a86a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050a86f8;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a86f8; end: 1050a87a3;  */

void FUN_1050a86f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar3 = PTR_PTR_1126b4778;
  _objc_alloc(PTR_PTR_1126b4778);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf96100(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051380(puVar3,param_2,uVar1,uVar4);
  func_0x00010bffd260(puVar2,param_2,&PTR____CFConstantStringClassReference_110f11c38,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050a87a4; end: 1050a8827; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1050a87a4(void)

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
    pcStack_98 = FUN_1050a8958;
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



/* Entry: 1050a8828; end: 1050a8957; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1050a8828(undefined8 param_1)

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
  pcStack_68 = FUN_1050a8958;
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



/* Entry: 1050a8958; end: 1050a899f;  */

void FUN_1050a8958(long param_1,undefined8 param_2)

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



/* Entry: 1050a89a0; end: 1050a89a7; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_1050a89a0(void)

{
  return 1;
}



/* Entry: 1050a89a8; end: 1050a8aa7; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider _joinGroupTime] */

void FUN_1050a89a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf366c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  lVar2 = lVar1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108ef3c74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c085b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c0b4ca0(lVar2);
    func_0x00010bf651a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c25d3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1050a8aa8; end: 1050a8b5b; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider _configureCell:] */

void FUN_1050a8aa8(undefined8 param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 1050a8b5c; end: 1050a8c37; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1050a8b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050a8c38; end: 1050a8c67;  */

void FUN_1050a8c38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a8c68; end: 1050a8c7f; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider dataProviderDelegate] */

void FUN_1050a8c68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a8c80; end: 1050a8c8b; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider setDataProviderDelegate:] */

void FUN_1050a8c80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1050a8c8c; end: 1050a8c93; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050a8c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1050a8c94; end: 1050a8cc3; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050a8c94(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050a8cc4; end: 1050a8ccb; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider sectionDataModel] */

undefined8 FUN_1050a8cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1050a8ccc; end: 1050a8d3f; -[SCGroupUnifiedProfilePrivacyAffirmationSectionDataProvider .cxx_destruct] */

void FUN_1050a8ccc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a8d40; end: 1050a8e0f; -[SCMyUnifiedProfileUsernameActionHandler initWithLegacySnapchatterServices:shareFriendScopeExposer:displayContentDelegate:] */

undefined1 *
FUN_1050a8d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5f80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a8e10; end: 1050a8e8b; -[SCMyUnifiedProfileUsernameActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1050a8e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    func_0x00010bea1100(param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf4dea0();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 1050a8e8c; end: 1050a8e97; -[SCMyUnifiedProfileUsernameActionHandler setPresentingViewController:] */

void FUN_1050a8e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050a8e98; end: 1050a8f7f; -[SCMyUnifiedProfileUsernameActionHandler _sendUsername] */

void FUN_1050a8e98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b40d0;
  _objc_alloc(PTR_PTR_1126b40d0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c048fa0(puVar1,param_2,uVar3,0,1,0,lVar4,param_1,0);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b40d8;
  func_0x00010c22b300(PTR_PTR_1126b40d8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050a8f80; end: 1050a8fe7; -[SCMyUnifiedProfileUsernameActionHandler shareFriendWorkflowCompleted] */

void FUN_1050a8f80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050a8fe8; end: 1050a8fff; -[SCMyUnifiedProfileUsernameActionHandler presentingViewController] */

void FUN_1050a8fe8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a9000; end: 1050a903f; -[SCMyUnifiedProfileUsernameActionHandler .cxx_destruct] */

void FUN_1050a9000(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a9040; end: 1050a9103; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler initWithLeaveCustomStoryLauncher:leaveCustomStoryScopeServices:delegate:] */

undefined1 *
FUN_1050a9040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a9104; end: 1050a924f; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1050a9104(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    uVar5 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar1 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((int)uVar1 == 0) {
      uVar4 = 0;
      goto LAB_1050a9230;
    }
    uVar5 = param_1 + 8;
    _objc_loadWeakRetained(uVar5);
    func_0x00010bf83c80();
LAB_1050a9210:
    uVar4 = 1;
  }
  else {
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126b47a0;
    _objc_opt_class(PTR_PTR_1126b47a0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 != 0) {
      func_0x00010be47a00(param_1);
      goto LAB_1050a9210;
    }
    uVar5 = 0;
    uVar4 = 0;
  }
  _objc_release(uVar5);
LAB_1050a9230:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1050a9250; end: 1050a936b; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler _launchLeavePrivateStoryAlertWithCustomStory:sender:] */

void FUN_1050a9250(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b47a8;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar6 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03bfa0(puVar2,param_2,uVar6,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c076220();
  if (iVar1 != 0) {
    func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x10));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf23600(uVar6,param_2,lVar5,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,uVar6,param_1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050a936c; end: 1050a93bf; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler didCompleteLeaveCustomStoryScopeWithLeaveOrBlock:] */

void FUN_1050a936c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf83c80();
    _objc_release(lVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 1050a93c0; end: 1050a93d7; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler presentingViewController] */

void FUN_1050a93c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a93d8; end: 1050a93e3; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler setPresentingViewController:] */

void FUN_1050a93d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050a93e4; end: 1050a9423; -[SCFriendUnifiedActionMenuCustomStoriesActionHandler .cxx_destruct] */

void FUN_1050a93e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1050a9424; end: 1050a94ef; -[SCUnifiedProfileNavigateToChatActionHandler initWithUserSession:blockedSnapchatterFetcher:snapchattersDataMutator:] */

undefined1 *
FUN_1050a9424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5f90;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a94f0; end: 1050a968b; -[SCUnifiedProfileNavigateToChatActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1050a94f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((int)uVar1 != 0) {
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b47b0;
    _objc_opt_class(PTR_PTR_1126b47b0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      uVar3 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      _objc_release(uVar5);
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar3 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126afdb8;
        _objc_opt_class(PTR_PTR_1126afdb8);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar5 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar3);
        uVar3 = uVar5;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar2 = PTR_PTR_1126b47b0;
        _objc_opt_class(PTR_PTR_1126b47b0);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar5 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar3);
      }
    }
    func_0x00010be62180(param_1);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 1050a968c; end: 1050a976f; -[SCUnifiedProfileNavigateToChatActionHandler _navigateToChat:] */

void FUN_1050a968c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf35d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1050a9770;
  puStack_68 = &UNK_110847310;
  uStack_60 = param_1;
  _objc_retain(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1050a9940;
  puStack_98 = &UNK_110847310;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c0c11e0(uVar2,param_2,&puStack_80,&puStack_b0);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050a9770; end: 1050a989b;  */

void FUN_1050a9770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bf1d780(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1050a989c; end: 1050a99a7;  */

void FUN_1050a989c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf35d60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf36380(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be621a0(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010beb78c0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050a99a8; end: 1050a9a9b; -[SCUnifiedProfileNavigateToChatActionHandler _navigateToChat:chatDeepLinkURLPath:] */

void FUN_1050a99a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc49f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(puVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d5f60();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050a9a9c; end: 1050a9d4b; -[SCUnifiedProfileNavigateToChatActionHandler _showAlertDialogForBlockedSnapchatter:] */

void FUN_1050a9a9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc4998;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4998,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc49b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc49b8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dc49d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc49d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae5c0;
  func_0x00010c27f540(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f500(uVar11);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 1050a9d4c; end: 1050a9dc3;  */

void FUN_1050a9d4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae5c0;
  func_0x00010c27f540(PTR_PTR_1126ae5c0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f500(uVar1,param_2,puVar2,PTR___dispatch_main_q_11034be20,
                      &PTR___NSConcreteGlobalBlock_110866018);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a9dc4; end: 1050a9dc7;  */

void FUN_1050a9dc4(void)

{
  return;
}



/* Entry: 1050a9dc8; end: 1050a9ddf; -[SCUnifiedProfileNavigateToChatActionHandler unifiedProfileViewController] */

void FUN_1050a9dc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a9de0; end: 1050a9deb; -[SCUnifiedProfileNavigateToChatActionHandler setUnifiedProfileViewController:] */

void FUN_1050a9de0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050a9dec; end: 1050a9e03; -[SCUnifiedProfileNavigateToChatActionHandler delegate] */

void FUN_1050a9dec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a9e04; end: 1050a9e0f; -[SCUnifiedProfileNavigateToChatActionHandler setDelegate:] */

void FUN_1050a9e04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050a9e10; end: 1050a9e5b; -[SCUnifiedProfileNavigateToChatActionHandler .cxx_destruct] */

void FUN_1050a9e10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a9e5c; end: 1050aa177; -[SCUnifiedProfileShowCameraActionHandler initWithUserSession:groupsDataFetcher:circumstanceEngine:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:chatCameraScopeLauncher:chatCameraScopeBuilder:memoriesQuickPostScopeExposer:creatorsSubmissionScopeExposerV2:creatorsSubmissionScopeServicesV2:businessProfileId:creatorInfoProvider:customStoriesDataFetcher:] */

undefined8 *
FUN_1050a9e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e5f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 0xb,param_11);
    _objc_retain(param_12);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 1050aa178; end: 1050aa183; +[SCUnifiedProfileShowCameraActionHandler announcerIdentifier] */

undefined ** FUN_1050aa178(void)

{
  return &PTR____CFConstantStringClassReference_110dc4a18;
}



/* Entry: 1050aa184; end: 1050aa18b; -[SCUnifiedProfileShowCameraActionHandler addListener:] */

void FUN_1050aa184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050aa18c; end: 1050aa193; -[SCUnifiedProfileShowCameraActionHandler removeListener:] */

void FUN_1050aa18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050aa194; end: 1050aa5f7; -[SCUnifiedProfileShowCameraActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1050aa194(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
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
      puVar3 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar2 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar5 = uVar1;
      func_0x00010c25b720();
      if (uVar5 == 4) {
        func_0x000108f3717c(*(undefined8 *)(param_1 + 0x50),
                            &PTR____CFConstantStringClassReference_110dc4a38,
                            &PTR____CFConstantStringClassReference_110dc0018,1);
      }
      uVar5 = uVar1;
      func_0x00010c259cc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b720(uVar1);
      func_0x00010be301e0(param_1);
      _objc_release(uVar5);
      goto LAB_1050aa320;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar5 != 0) {
      _objc_release(uVar1);
LAB_1050aa3c0:
      uVar5 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar2 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar5 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar1;
        func_0x00010c25b720();
        if (uVar5 == 4) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110dc4a38;
          goto LAB_1050aa454;
        }
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110dc4a58;
LAB_1050aa454:
        func_0x000108f3717c(*(undefined8 *)(param_1 + 0x50),ppuVar4,
                            &PTR____CFConstantStringClassReference_110dc4a78,1);
      }
      uVar5 = uVar1;
      func_0x00010c259cc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b720(uVar1);
      func_0x00010be25800(param_1);
      _objc_release(uVar5);
LAB_1050aa4ac:
      uVar5 = 1;
      _objc_release(uVar1);
      goto LAB_1050aa328;
    }
    uVar5 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((int)uVar2 != 0) goto LAB_1050aa3c0;
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
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
        puVar3 = PTR_PTR_1126b11d0;
        _objc_opt_class(PTR_PTR_1126b11d0);
        uVar2 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar3);
        uVar1 = uVar5;
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        func_0x00010beb7880(param_1);
        goto LAB_1050aa320;
      }
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar5 == 0) goto LAB_1050aa328;
      uVar5 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar2 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010beb7880(param_1);
      goto LAB_1050aa4ac;
    }
    func_0x00010be257c0(param_1);
  }
  else {
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b40c8;
    _objc_opt_class(PTR_PTR_1126b40c8);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    func_0x00010be30180(param_1);
LAB_1050aa320:
    _objc_release(uVar1);
  }
  uVar5 = 1;
LAB_1050aa328:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 1050aa5f8; end: 1050aa74b; -[SCUnifiedProfileShowCameraActionHandler _handleAddToStoryDirectFromMemoriesWithStoryId:storyType:shouldPreselectCameraRoll:allowCameraOption:] */

void FUN_1050aa5f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be8f060(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b47b8;
  _objc_alloc(PTR_PTR_1126b47b8);
  func_0x00010c05aa60();
  puVar4 = PTR_PTR_1126b47c0;
  _objc_alloc(PTR_PTR_1126b47c0);
  func_0x00010c00b040();
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110eb73b8,0,0);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050aa74c; end: 1050aa81b; -[SCUnifiedProfileShowCameraActionHandler _handleAddToSpotlight] */

void FUN_1050aa74c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1;
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf24240(uVar3,param_2,puVar1,param_1,*(undefined8 *)(param_1 + 0x68),9,0,0,0x71,1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050aa81c; end: 1050aaec3; -[SCUnifiedProfileShowCameraActionHandler _replyConfigurationForStoryId:storyType:] */

void FUN_1050aa81c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf625c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
  puVar10 = (undefined *)0x0;
  puVar5 = PTR_PTR_1126b47c8;
  lVar6 = lVar7;
  if (param_4 < 5) {
    puVar8 = PTR_PTR_1126ae6c0;
    if (param_4 < 2) {
      if (param_4 != 0) {
        puVar11 = (undefined *)0x0;
        puVar9 = (undefined *)0x0;
        puVar8 = (undefined *)0x0;
        if (param_4 != 1) goto LAB_1050aae68;
        _objc_alloc(PTR_PTR_1126b47c8);
        func_0x00010c01f260();
        puVar8 = PTR_PTR_1126ae6c0;
        func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126ae6c8;
        _objc_alloc(PTR_PTR_1126ae6c8);
        func_0x00010c08fa60();
        if (lVar6 != 0) goto LAB_1050aadb4;
        func_0x000108f5818c();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1050aade8;
      }
      func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8
                          ,0,0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae6c8;
      _objc_alloc(PTR_PTR_1126ae6c8);
      puVar5 = puVar9;
      func_0x000108f58144();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = 0;
    }
    else {
      if (param_4 != 2) {
        if (param_4 == 3) {
          func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,
                              &PTR____CFConstantStringClassReference_110daafd8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126ae6d0;
          _objc_alloc(PTR_PTR_1126ae6d0);
          func_0x00010c03e5a0();
          puVar11 = PTR_PTR_1126b1bb0;
          func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = (undefined *)0x0;
          goto LAB_1050aae68;
        }
        puVar11 = (undefined *)0x0;
        puVar9 = (undefined *)0x0;
        puVar8 = (undefined *)0x0;
        if (param_4 != 4) goto LAB_1050aae68;
        puVar5 = PTR_PTR_1126b47d0;
        _objc_alloc(PTR_PTR_1126b47d0);
        func_0x00010c03ca00();
        puVar8 = PTR_PTR_1126ae6c0;
        func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,
                            &PTR____CFConstantStringClassReference_110daafd8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x000108f5935c();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126ae6c8;
        _objc_alloc(PTR_PTR_1126ae6c8);
        func_0x00010c03e6c0();
        puVar10 = PTR_PTR_1126ae6d0;
        _objc_alloc(PTR_PTR_1126ae6d0);
        func_0x00010c03e5a0();
        puVar11 = PTR_PTR_1126b1bb0;
        func_0x00010bfea1a0(PTR_PTR_1126b1bb0,param_2,puVar10,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        goto LAB_1050aae64;
      }
      func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,param_3,0,1,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae6c8;
      _objc_alloc(PTR_PTR_1126ae6c8);
      puVar5 = puVar9;
      func_0x000108f5815c();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
    }
    func_0x00010c03e6c0(puVar9,param_2,0,0,lVar6,puVar5,0,0);
    _objc_release(puVar5);
    puVar10 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    func_0x00010c03e5a0();
    puVar11 = PTR_PTR_1126b1bb0;
    func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 - 6U < 3) {
      _objc_alloc(PTR_PTR_1126b47c8);
      func_0x00010c01f260();
      puVar8 = PTR_PTR_1126ae6c0;
      func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae6c8;
      _objc_alloc(PTR_PTR_1126ae6c8);
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        func_0x000108f581a4();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1050aade8;
      }
LAB_1050aadb4:
      func_0x00010c03e6c0(puVar9,param_2,0,0,param_3,lVar7,0,0);
    }
    else {
      if (param_4 != 5) {
        puVar11 = (undefined *)0x0;
        puVar9 = (undefined *)0x0;
        puVar8 = (undefined *)0x0;
        if (param_4 != 9) goto LAB_1050aae68;
        puVar5 = PTR_PTR_1126b47d0;
        _objc_alloc(PTR_PTR_1126b47d0);
        func_0x00010c03ca00();
        puVar8 = PTR_PTR_1126ae6c0;
        func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,
                            &PTR____CFConstantStringClassReference_110daafd8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c2608e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar3 = uVar2;
        func_0x000108f598cc();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar9 = PTR_PTR_1126ae6c8;
        _objc_alloc(PTR_PTR_1126ae6c8);
        func_0x00010c03e6c0();
        puVar10 = PTR_PTR_1126ae6d0;
        _objc_alloc(PTR_PTR_1126ae6d0);
        func_0x00010c03e5a0();
        puVar11 = PTR_PTR_1126b1bb0;
        func_0x00010bfea1a0(PTR_PTR_1126b1bb0,param_2,puVar10,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(uVar2);
        goto LAB_1050aae64;
      }
      _objc_alloc(PTR_PTR_1126b47c8);
      func_0x00010c01f260();
      puVar8 = PTR_PTR_1126ae6c0;
      func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae6c8;
      _objc_alloc(PTR_PTR_1126ae6c8);
      func_0x00010c08fa60();
      if (lVar6 != 0) goto LAB_1050aadb4;
      func_0x000108f581bc();
      _objc_retainAutoreleasedReturnValue();
LAB_1050aade8:
      func_0x00010c03e6c0(puVar9,param_2,0,0,param_3,lVar6,0,0);
      _objc_release(lVar6);
    }
    puVar10 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    func_0x00010c03e5a0();
    puVar11 = PTR_PTR_1126b1bb0;
    func_0x00010bf81d20(PTR_PTR_1126b1bb0,param_2,puVar10,puVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_1050aae64:
    _objc_release(puVar5);
  }
LAB_1050aae68:
  _objc_retain(puVar11);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1050aaec4; end: 1050aafbb; -[SCUnifiedProfileShowCameraActionHandler _replyConfigurationForSpotlight] */

void FUN_1050aaec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8,1,0
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  puVar3 = puVar2;
  func_0x000108f58174();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e6c0(puVar2,param_2,0,0,0,puVar3,0,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050aafbc; end: 1050aaff7; -[SCUnifiedProfileShowCameraActionHandler _handleShowCameraForStoryPosting:storyType:] */

void FUN_1050aafbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be8f060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30200(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050aaff8; end: 1050ab093; -[SCUnifiedProfileShowCameraActionHandler _handleShowCameraForStoryPostingWithReplyConfiguration:] */

void FUN_1050aaff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf237e0(uVar3,param_2,param_3,lVar2,param_1,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar3,param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ab094; end: 1050ab10b; -[SCUnifiedProfileShowCameraActionHandler _handleShowCameraForSnap:] */

void FUN_1050ab094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050ab10c;
  puStack_20 = &UNK_110862228;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1050ab118;
  puStack_48 = &UNK_1108450c8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdf00(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1050ab10c; end: 1050ab123;  */

void FUN_1050ab10c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be301d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleShowCameraForSnapForSnapc_112569a10,
             param_2);
  return;
}



/* Entry: 1050ab124; end: 1050ab313; -[SCUnifiedProfileShowCameraActionHandler _handleShowCameraForSnapForSnapchatter:] */

void FUN_1050ab124(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c236560();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      puVar4 = PTR_PTR_1126b1010;
      _objc_alloc(PTR_PTR_1126b1010);
      func_0x00010c02ec80();
      uVar6 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb2e0(puVar4);
      _objc_release(uVar6);
      uVar6 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb300(puVar4);
      _objc_release(uVar6);
      uVar6 = param_3;
      func_0x00010901d7c4(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb080(puVar4);
      _objc_release(uVar6);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010901cdb0(param_3,puVar5);
      func_0x00010c1af8a0(puVar4);
      _objc_release(puVar5);
      func_0x00010c1d86a0(puVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      lVar2 = param_1 + 0x80;
      _objc_loadWeakRetained(lVar2);
      puVar5 = puVar4;
      func_0x00010c271a20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23680(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar2);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar6);
    }
    else {
      puVar4 = (undefined *)(param_1 + 0x88);
      _objc_loadWeakRetained(puVar4);
      func_0x00010c2365a0();
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ab314; end: 1050ab4cf; -[SCUnifiedProfileShowCameraActionHandler _handleShowCameraForSnapForGroupId:] */

void FUN_1050ab314(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c236540();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bfc61a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar4 = PTR_PTR_1126b1010;
      _objc_alloc(PTR_PTR_1126b1010);
      func_0x00010c02ec80();
      func_0x00010c1d86a0();
      func_0x00010c1b2900(puVar4,param_2,1);
      func_0x00010c1eb300(puVar4,param_2,param_3);
      lVar3 = lVar2;
      func_0x00010bfcef60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb080(puVar4,param_2,lVar3);
      _objc_release(lVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      lVar3 = param_1 + 0x80;
      _objc_loadWeakRetained(lVar3);
      puVar5 = puVar4;
      func_0x00010c271a20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23680(uVar6,param_2,lVar3,puVar5,param_1,1,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar3);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30),param_2,uVar6,param_1);
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    else {
      lVar2 = param_1 + 0x88;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c236580();
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ab4d0; end: 1050ab913; -[SCUnifiedProfileShowCameraActionHandler _showAddToStoryActionSheetWithStoriesActionDataModel:shouldSplitMemoriesAndCameraRollAction:] */

void FUN_1050ab4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b10a0;
  puVar2 = puVar1;
  func_0x000108f5911c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e3c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1050ab914;
  puStack_98 = &UNK_110852d00;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  puVar4 = puVar3;
  uStack_90 = param_3;
  func_0x00010bf1d200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010befa120(puVar1);
  if ((param_4 & 1) == 0) {
    func_0x000108f59134();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar5;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1050abab4;
    puStack_c8 = &UNK_110852d00;
    puVar8 = auStack_b8;
    _objc_copyWeak(puVar8,auStack_80);
    _objc_retain(param_3);
    puVar5 = puVar3;
    uStack_c0 = param_3;
    func_0x0001050aba38(puVar3,&puStack_e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    uVar6 = uStack_c0;
  }
  else {
    func_0x000108f5914c();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar5;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1050abbe0;
    puStack_f8 = &UNK_110852d00;
    puVar8 = auStack_e8;
    _objc_copyWeak(puVar8,auStack_80);
    _objc_retain(param_3);
    puVar2 = puVar3;
    uStack_f0 = param_3;
    func_0x0001050aba38(puVar3,&puStack_110);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010befa120(puVar1);
    func_0x000108f59164();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar5;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_1050abd0c;
    puStack_128 = &UNK_110852d00;
    _objc_copyWeak(auStack_118,auStack_80);
    _objc_retain(param_3);
    puVar5 = puVar3;
    uStack_120 = param_3;
    func_0x0001050aba38(puVar3,&puStack_140);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(uStack_120);
    _objc_destroyWeak(auStack_118);
    _objc_release(puVar2);
    uVar6 = uStack_f0;
  }
  _objc_release(uVar6);
  _objc_destroyWeak(puVar8);
  puVar5 = PTR_PTR_1126b10a0;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar7);
  puVar5 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar2 = puVar5;
  func_0x000108f58144();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar5);
  _objc_release(puVar2);
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10af80();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 1050ab914; end: 1050ab9cf;  */

void FUN_1050ab914(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050ab9d0; end: 1050abab3;  */

void FUN_1050ab9d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25b720(uVar3);
  func_0x00010be301e0(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050abab4; end: 1050abb6f;  */

void FUN_1050abab4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050abb70; end: 1050abbdf;  */

void FUN_1050abb70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25b720(uVar3);
  func_0x00010be25800(lVar1,param_2,uVar2,uVar3,0,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050abbe0; end: 1050abc9b;  */

void FUN_1050abbe0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050abc9c; end: 1050abd0b;  */

void FUN_1050abc9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25b720(uVar3);
  func_0x00010be25800(lVar1,param_2,uVar2,uVar3,0,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050abd0c; end: 1050abdc7;  */

void FUN_1050abd0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050abdc8; end: 1050abe37;  */

void FUN_1050abdc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25b720(uVar3);
  func_0x00010be25800(lVar1,param_2,uVar2,uVar3,1,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050abe38; end: 1050abe43;  */

void FUN_1050abe38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheetWithCompletion_1125be5a8,0)
  ;
  return;
}



/* Entry: 1050abe44; end: 1050abec7; -[SCUnifiedProfileShowCameraActionHandler dismissCameraScope:] */

void FUN_1050abe44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  _objc_retain(param_3);
  plVar2 = (long *)(param_1 + 0x30);
  lVar1 = *plVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    plVar2 = (long *)(param_1 + 0x20);
    lVar1 = *plVar2;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != param_3) goto LAB_1050abeb4;
  }
  func_0x00010bf94c20(*plVar2);
LAB_1050abeb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050abec8; end: 1050abf5f; -[SCUnifiedProfileShowCameraActionHandler memoriesQuickPostDidFinishWithDidSend:] */

void FUN_1050abec8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110eb7398,0,0);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050abf60; end: 1050ac093; -[SCUnifiedProfileShowCameraActionHandler startCameraWorkflow] */

void FUN_1050abf60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c12e1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1050ac094;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    lStack_48 = lVar4;
    _objc_retain(lVar4);
    func_0x00010c2a4ae0(lVar2,param_2,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1050ac094; end: 1050ac09f;  */

void FUN_1050ac094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be30210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleShowCameraForStoryPosting_112569a20,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050ac0a0; end: 1050ac0a3; -[SCUnifiedProfileShowCameraActionHandler creatorsSpotlightSubmissionV2DidBegin] */

void FUN_1050ac0a0(void)

{
  return;
}



/* Entry: 1050ac0a4; end: 1050ac11f; -[SCUnifiedProfileShowCameraActionHandler creatorsSpotlightSubmissionV2DidComplete] */

void FUN_1050ac0a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050ac120; end: 1050ac137; -[SCUnifiedProfileShowCameraActionHandler unifiedProfileViewController] */

void FUN_1050ac120(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


