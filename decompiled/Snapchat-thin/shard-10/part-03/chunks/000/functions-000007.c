/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d1be84; end: 107d1be8b; -[SCSpotlightEntrySection setRenameToReals:] */

void FUN_107d1be84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 107d1be8c; end: 107d1bedb; -[SCSpotlightEntrySection .cxx_destruct] */

void FUN_107d1be8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d1bedc; end: 107d1bf4f; -[SCUnifiedProfileStoriesBoxedExpandable initWithObservableSubject:] */

undefined1 * FUN_107d1bedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faa38;
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



/* Entry: 107d1bf50; end: 107d1bf7b; -[SCUnifiedProfileStoriesBoxedExpandable copyWithZone:] */

void FUN_107d1bf50(void)

{
  _objc_alloc(PTR_PTR_1126b1268);
                    /* WARNING: Could not recover jumptable at 0x00010c030bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107d1bf7c; end: 107d1bf83; -[SCUnifiedProfileStoriesBoxedExpandable observableSubject] */

undefined8 FUN_107d1bf7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d1bf84; end: 107d1bf8f; -[SCUnifiedProfileStoriesBoxedExpandable .cxx_destruct] */

void FUN_107d1bf84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d1bf90; end: 107d1bffb; -[SCUnifiedProfileStoriesHorizontalCreationSection init] */

undefined1 * FUN_107d1bf90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faa40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 1;
    FUN_107d1b6ec(1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d1bffc; end: 107d1c03b; -[SCUnifiedProfileStoriesHorizontalCreationSection setHideSharedStory:] */

void FUN_107d1bffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(char *)(param_1 + 0x20) = (char)param_3;
  uVar1 = 1;
  FUN_107d1b6ec(1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d1c03c; end: 107d1c18b; -[SCUnifiedProfileStoriesHorizontalCreationSection cellForItemAtIndexInSection:] */

void FUN_107d1c03c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d7908;
  _objc_opt_class(PTR_PTR_1126d7908);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c161980(uVar1);
  func_0x00010c21da20(uVar1);
  puVar3 = PTR_DAT_1126a5298;
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar2 = uVar1;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar1);
  func_0x00010c1ee980(uVar2);
  puVar3 = PTR_DAT_1126a52a0;
  _objc_retain(uVar1);
  uVar5 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar4 = uVar1;
  if ((int)uVar5 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  func_0x00010c1fce20(uVar4);
  func_0x00010c2226c0(uVar1);
  _objc_retain(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1c18c; end: 107d1c193; -[SCUnifiedProfileStoriesHorizontalCreationSection numberOfCellsInSection] */

undefined8 FUN_107d1c18c(void)

{
  return 1;
}



/* Entry: 107d1c194; end: 107d1c213; -[SCUnifiedProfileStoriesHorizontalCreationSection reuseCellClassesByIdentifiers] */

undefined1  [16]
FUN_107d1c194(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb9078;
  puVar1 = PTR_PTR_1126d7908;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + 0x30;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c156160();
  _objc_release(puVar2);
  auVar3._0_8_ = (param_1 - param_2) - param_4;
  auVar3._8_8_ = 0x4042000000000000;
  return auVar3;
}



/* Entry: 107d1c214; end: 107d1c277; -[SCUnifiedProfileStoriesHorizontalCreationSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16]
FUN_107d1c214(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined1 auVar1 [16];
  
  param_5 = param_5 + 0x30;
  _objc_loadWeakRetained(param_5);
  func_0x00010c156160();
  _objc_release(param_5);
  auVar1._0_8_ = (param_1 - param_2) - param_4;
  auVar1._8_8_ = 0x4042000000000000;
  return auVar1;
}



/* Entry: 107d1c278; end: 107d1c2a7; -[SCUnifiedProfileStoriesHorizontalCreationSection setSectionInfo:] */

void FUN_107d1c278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d1c2a8; end: 107d1c2cf; -[SCUnifiedProfileStoriesHorizontalCreationSection sectionInfo] */

void FUN_107d1c2a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1c2d0; end: 107d1c2eb; -[SCUnifiedProfileStoriesHorizontalCreationSection sectionInsets] */

void FUN_107d1c2d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc024000000000000,0x4030000000000000,0x4024000000000000,0x4030000000000000,
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 107d1c2ec; end: 107d1c2f3; -[SCUnifiedProfileStoriesHorizontalCreationSection minimumSectionLineSpacing] */

undefined8 FUN_107d1c2ec(void)

{
  return 0;
}



/* Entry: 107d1c2f4; end: 107d1c2fb; -[SCUnifiedProfileStoriesHorizontalCreationSection shouldClingsToPreviousSection] */

undefined8 FUN_107d1c2f4(void)

{
  return 1;
}



/* Entry: 107d1c2fc; end: 107d1c303; -[SCUnifiedProfileStoriesHorizontalCreationSection dataLoadingStatus] */

undefined8 FUN_107d1c2fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d1c304; end: 107d1c30b; -[SCUnifiedProfileStoriesHorizontalCreationSection setDataLoadingStatus:] */

void FUN_107d1c304(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107d1c30c; end: 107d1c323; -[SCUnifiedProfileStoriesHorizontalCreationSection delegate] */

void FUN_107d1c30c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d1c324; end: 107d1c32f; -[SCUnifiedProfileStoriesHorizontalCreationSection setDelegate:] */

void FUN_107d1c324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107d1c330; end: 107d1c337; -[SCUnifiedProfileStoriesHorizontalCreationSection sectionUpdateModel] */

undefined8 FUN_107d1c330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d1c338; end: 107d1c33f; -[SCUnifiedProfileStoriesHorizontalCreationSection setSectionUpdateModel:] */

void FUN_107d1c338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d1c340; end: 107d1c347; -[SCUnifiedProfileStoriesHorizontalCreationSection actionHandler] */

undefined8 FUN_107d1c340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d1c348; end: 107d1c377; -[SCUnifiedProfileStoriesHorizontalCreationSection setActionHandler:] */

void FUN_107d1c348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d1c378; end: 107d1c37f; -[SCUnifiedProfileStoriesHorizontalCreationSection hideSharedStory] */

undefined1 FUN_107d1c378(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 107d1c380; end: 107d1c3db; -[SCUnifiedProfileStoriesHorizontalCreationSection .cxx_destruct] */

void FUN_107d1c380(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d1c3dc; end: 107d1c5a3; -[SCUnifiedProfileStoriesListSection initWithSupplementaryViewProvider:actionHandler:] */

undefined1 *
FUN_107d1c3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126faa48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = param_4;
    _objc_release(uVar5);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb9098;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined ***)((long)puVar1 + 0x48) = ppuVar4;
    _objc_release(uVar6);
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb90b8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined ***)((long)puVar1 + 0x50) = ppuVar4;
    _objc_release(uVar6);
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb90d8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined ***)((long)puVar1 + 0x58) = ppuVar4;
    _objc_release(uVar6);
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb90f8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined ***)((long)puVar1 + 0x60) = ppuVar4;
    _objc_release(uVar6);
    *(undefined4 *)((long)puVar1 + 0xc0) = 0;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d1c5a4; end: 107d1c61b; +[SCUnifiedProfileStoriesListSection viewMoreOfGroupSectionWithActionHandler:storyGroupActionHandler:] */

void FUN_107d1c5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1240;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04f840();
  _objc_release(param_3);
  puVar1[0x98] = 1;
  uVar2 = *(undefined8 *)(puVar1 + 0xe8);
  *(undefined8 *)(puVar1 + 0xe8) = param_4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d1c61c; end: 107d1c62b; -[SCUnifiedProfileStoriesListSection storyGroupsEnabled] */

bool FUN_107d1c61c(long param_1)

{
  return *(long *)(param_1 + 0xa0) != 0;
}



/* Entry: 107d1c62c; end: 107d1c6e3; -[SCUnifiedProfileStoriesListSection setActionHandler:] */

void FUN_107d1c62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a4e90);
  uVar1 = uVar3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c161980(uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d1c6e4; end: 107d1c83f; -[SCUnifiedProfileStoriesListSection setSectionDataProvider:] */

void FUN_107d1c6e4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  if (*(long *)(param_1 + 0xe0) == param_3) {
    _os_unfair_lock_unlock(param_1 + 0xc0);
    uVar2 = 0;
  }
  else {
    func_0x00010c1896c0();
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0xe0));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar2);
    func_0x00010c1896c0(*(undefined8 *)(param_1 + 0xe0));
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0xe0));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    cVar1 = *(char *)(param_1 + 0x40);
    _os_unfair_lock_unlock(param_1 + 0xc0);
    if (cVar1 == '\x01') {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107d1c840; end: 107d1c86f;  */

void FUN_107d1c840(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1c870; end: 107d1c93b; -[SCUnifiedProfileStoriesListSection setUp] */

void FUN_107d1c870(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setUp_112664a70);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107d1c93c; end: 107d1c967;  */

void FUN_107d1c93c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea9940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1c968; end: 107d1c96f; -[SCUnifiedProfileStoriesListSection _setUpSectionDataProvider] */

void FUN_107d1c968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe0),PTR_s_setUp_112664a70);
  return;
}



/* Entry: 107d1c970; end: 107d1ca37; -[SCUnifiedProfileStoriesListSection tearDown] */

void FUN_107d1c970(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  _objc_opt_respondsToSelector(uVar1,PTR_s_tearDown_112678508);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 107d1ca38; end: 107d1ca63;  */

void FUN_107d1ca38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becae20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1ca64; end: 107d1ca6b; -[SCUnifiedProfileStoriesListSection _tearDownSectionDataProvider] */

void FUN_107d1ca64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe0),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 107d1ca6c; end: 107d1cb57; -[SCUnifiedProfileStoriesListSection reuseCellClassesByIdentifiers] */

undefined * FUN_107d1ca6c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  uVar2 = *(ulong *)(param_1 + 0xe0);
  _objc_opt_respondsToSelector(uVar2,PTR_s_storiesCellClass_112673b38);
  if ((uVar2 & 1) != 0) {
    func_0x00010c258440();
  }
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar4 = puVar3;
    func_0x00010c259be0();
    if (((int)puVar4 == 0) || ((puVar3[0x98] & 1) == 0)) {
      lVar5 = *(long *)(puVar3 + 0x10);
      func_0x00010bf529e0();
      if ((lVar5 != 0) && (puVar3[0x20] == '\x01')) {
        iVar1 = (int)*(undefined8 *)(puVar3 + 0x18);
        func_0x00010bfd9320();
        if (iVar1 != 0) {
          lVar5 = *(long *)(puVar3 + 0x18);
          func_0x00010c0ded00(lVar5);
          return (undefined *)(lVar5 + 2);
        }
        lVar5 = *(long *)(puVar3 + 0x10);
        func_0x00010bf529e0(lVar5);
        return (undefined *)(lVar5 + 1);
      }
    }
    return (undefined *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 107d1cb58; end: 107d1cbcb; -[SCUnifiedProfileStoriesListSection numberOfCellsInSection] */

long FUN_107d1cb58(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c259be0();
  if (((int)lVar2 == 0) || ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if ((lVar2 != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010bfd9320();
      if (iVar1 != 0) {
        lVar2 = *(long *)(param_1 + 0x18);
        func_0x00010c0ded00(lVar2);
        return lVar2 + 2;
      }
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010bf529e0(lVar2);
      return lVar2 + 1;
    }
  }
  return 1;
}



/* Entry: 107d1cbcc; end: 107d1cc57; -[SCUnifiedProfileStoriesListSection cellForItemAtIndexInSection:] */

void FUN_107d1cbcc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x98) == '\x01') {
      func_0x00010be77ec0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be77e20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010be45860();
    if ((int)lVar1 == 0) {
      func_0x00010be77e80(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be77ea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d1cc58; end: 107d1cd5f; -[SCUnifiedProfileStoriesListSection sizeForItemAtIndexInSection:withWidth:] */

/* WARNING: Possible PIC construction at 0x000107d1cd3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d1cd40) */

undefined1  [16]
FUN_107d1cc58(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar4;
  
  lVar1 = param_5 + 0xd0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c156160();
  _objc_release(lVar1);
  param_4 = (param_1 - param_2) - param_4;
  if (param_7 == 0) {
    if (*(char *)(param_5 + 0x98) == '\x01') {
      uVar3 = 0x4040000000000000;
      goto LAB_107d1cd04;
    }
    if (*(char *)(param_5 + 0x20) == '\x01') {
      func_0x00010b816670();
    }
    uVar3 = *(undefined8 *)(param_5 + 8);
    puVar2 = PTR_PTR_1126d7920;
  }
  else {
    func_0x00010be45860();
    if ((int)param_5 == 0) {
      uVar3 = 0x404c000000000000;
LAB_107d1cd04:
      auVar5._8_8_ = uVar3;
      auVar5._0_8_ = param_4;
      return auVar5;
    }
    uVar3 = 0;
    puVar2 = PTR_PTR_1126d7910;
  }
  uVar4 = 0x43e0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,0x43e0000000000000,puVar2,PTR_s_sizeWithViewModel_constrainedToS_11266cfe0,
             uVar3);
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 107d1cd60; end: 107d1d0eb; -[SCUnifiedProfileStoriesListSection applyConfiguration:] */

void FUN_107d1cd60(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1228;
  _objc_opt_class(PTR_PTR_1126b1228);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  if (uVar3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar3);
LAB_107d1ce4c:
    uVar5 = uVar1;
    func_0x00010c067640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(param_1 + 0x38);
    func_0x00010c067640();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    if (uVar5 == uVar6) {
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    else {
      if (uVar6 == 0) {
        _objc_release(uVar5);
        goto LAB_107d1cf24;
      }
      uVar7 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar7 & 1) == 0) goto LAB_107d1cf3c;
    }
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0xc0);
  }
  else {
    uVar5 = uVar3;
    if (uVar4 == 0) {
LAB_107d1cf24:
      _objc_release(uVar5);
    }
    else {
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)uVar5 != 0) goto LAB_107d1ce4c;
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
LAB_107d1cf3c:
    uVar3 = uVar1;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    _objc_retain(uVar10);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    _objc_retain();
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar2;
    _objc_release(uVar9);
    uVar3 = uVar1;
    func_0x00010bf20dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e0640();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xa0);
    *(ulong *)(param_1 + 0xa0) = uVar4;
    _objc_release(uVar9);
    _objc_release(uVar3);
    uVar11 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar11);
    lVar8 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar8);
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0xc0);
    func_0x00010bf86d80(uVar10);
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar9 = uVar11;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    func_0x00010bf40a00(lVar8);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(lVar8);
    _objc_release(uVar11);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d1d0ec; end: 107d1d14b;  */

void FUN_107d1d0ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be33840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1d14c; end: 107d1d223; -[SCUnifiedProfileStoriesListSection setShouldRemoveBottomCornerForLastCell:] */

void FUN_107d1d14c(ulong param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(byte *)(param_1 + 0xc5) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xc5) = (char)param_3;
  puVar1 = PTR_PTR_1126b48b0;
  func_0x00010c128f60(PTR_PTR_1126b48b0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar4);
  uVar5 = param_1;
  func_0x00010bedf480(param_1,param_2,puVar1,uVar2,uVar3,uVar4,*(undefined1 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    lVar6 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf40a00();
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d1d224; end: 107d1d2fb; -[SCUnifiedProfileStoriesListSection _handledExpandedObservableValue:] */

void FUN_107d1d224(ulong param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(byte *)(param_1 + 0xb0) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xb0) = (char)param_3;
  puVar1 = PTR_PTR_1126b48b0;
  func_0x00010c128f60(PTR_PTR_1126b48b0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar4);
  uVar5 = param_1;
  func_0x00010bedf480(param_1,param_2,puVar1,uVar2,uVar3,uVar4,*(undefined1 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    lVar6 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf40a00();
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d1d2fc; end: 107d1d303; -[SCUnifiedProfileStoriesListSection sectionInsets] */

void FUN_107d1d2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_insets_1125f77a0);
  return;
}



/* Entry: 107d1d304; end: 107d1d30b; -[SCUnifiedProfileStoriesListSection minimumSectionLineSpacing] */

undefined8 FUN_107d1d304(void)

{
  return 0;
}



/* Entry: 107d1d30c; end: 107d1d333; -[SCUnifiedProfileStoriesListSection supplementaryViewProvider] */

void FUN_107d1d30c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1d334; end: 107d1d3bb; -[SCUnifiedProfileStoriesListSection setSectionUpdateModel:] */

void FUN_107d1d334(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  if ((param_3 == 0) && (*(long *)(param_1 + 200) == 0)) {
    _os_unfair_lock_unlock(param_1 + 0xc0);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(long *)(param_1 + 200) = lVar1;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0xc0);
    func_0x00010be8a480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d1d3bc; end: 107d1d3f7; -[SCUnifiedProfileStoriesListSection sectionInfo] */

void FUN_107d1d3bc(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1d3f8; end: 107d1d437; -[SCUnifiedProfileStoriesListSection setSectionInfo:] */

void FUN_107d1d3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xc0);
  return;
}



/* Entry: 107d1d438; end: 107d1d4fb; -[SCUnifiedProfileStoriesListSection storiesSectionDataProviderDidUpdateViewModels:] */

void FUN_107d1d438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107d1d4fc; end: 107d1d52b;  */

void FUN_107d1d4fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1d52c; end: 107d1d5bf; -[SCUnifiedProfileStoriesListSection viewMoreCollectionViewCellDidTapViewMore:] */

void FUN_107d1d52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be59220(param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d1d5c0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 107d1d5c0; end: 107d1d683;  */

void FUN_107d1d5c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar4 = PTR_DAT_1126a5a00;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010010fab4(lVar6,puVar4);
  lVar1 = lVar6;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126d7910;
  if (lVar1 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    _objc_retain(uVar7);
    _objc_opt_class(puVar4);
    uVar5 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar4);
    uVar2 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar7);
    if (uVar2 != 0) {
      func_0x00010be31da0(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010be29180(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d1d684; end: 107d1d787; -[SCUnifiedProfileStoriesListSection _logStoriesViewMoreTapped:] */

void FUN_107d1d684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar2);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107d1d788;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = uVar2;
  lStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107d1d788; end: 107d1d797;  */

void FUN_107d1d788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleActionWithSender_actionMod_1125d19f8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107d1d798; end: 107d1d99f; -[SCUnifiedProfileStoriesListSection _handleExpandHeaderCell] */

void FUN_107d1d798(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    puVar5 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf51e00(uVar6);
    func_0x00010bef92c0(puVar5,param_2,0);
    uVar7 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0ded00();
    uVar8 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar7 < uVar8) {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010c0ded00();
      uVar7 = lVar2 + 1;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf529e0();
    }
    if (cVar1 == '\0') {
      if (uVar7 != 0) {
        uVar8 = 1;
        do {
          func_0x00010bef92c0(puVar3,param_2,uVar8);
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar7);
      }
    }
    else {
      if (uVar7 != 0) {
        uVar8 = 1;
        do {
          func_0x00010bef92c0(puVar4,param_2,uVar8);
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar7);
      }
      func_0x00010c1cfaa0(uVar6,param_2,0);
    }
    puVar12 = PTR_PTR_1126b48b0;
    puVar9 = puVar3;
    func_0x00010bf51e00(puVar3);
    puVar10 = puVar4;
    func_0x00010bf51e00(puVar4);
    puVar11 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010bf34220(puVar12,param_2,puVar9,puVar10,puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf51e00(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00(uVar14);
    func_0x00010bedf480(param_1,param_2,puVar12,uVar13,uVar14,uVar6,
                        (*(byte *)(param_1 + 0x20) ^ 0xff) & 1);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107d1d9a0; end: 107d1db0f; -[SCUnifiedProfileStoriesListSection _handleTapViewMore] */

void FUN_107d1d9a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ded00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25e980(uVar2,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ded80(uVar1,param_2,1);
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0ded40(uVar3,param_2,uVar1);
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (uVar3 < uVar4) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c25e980(uVar1,param_2,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00(uVar1);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar9);
  uVar5 = uVar9;
  func_0x00010bf51e00(uVar9);
  func_0x00010c1cfaa0();
  func_0x00010c1cfa80(uVar5,param_2,uVar3);
  lVar6 = param_1;
  func_0x00010be9d0c0(param_1,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),
                      uVar2,uVar1,uVar9,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar8);
  _objc_release(uVar9);
  func_0x00010bedf480(param_1,param_2,lVar6,uVar7,uVar8,uVar5,*(undefined1 *)(param_1 + 0x20));
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d1db10; end: 107d1dcc7; -[SCUnifiedProfileStoriesListSection _prepareAndReturnHeaderCell] */

void FUN_107d1db10(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a5a00);
  lVar2 = lVar3;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar3);
  func_0x00010c161980(lVar2);
  if ((*(byte *)(param_1 + 0xc5) & 1) == 0) {
    func_0x00010bf529e0();
  }
  puVar1 = PTR_DAT_1126a5298;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010010fab4(lVar2,puVar1);
  lVar3 = lVar2;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(lVar2);
  func_0x00010c1ee980(lVar3);
  puVar1 = PTR_DAT_1126a52a0;
  _objc_retain(lVar2);
  lVar5 = lVar2;
  func_0x00010010fab4(lVar2,puVar1);
  lVar4 = lVar2;
  if ((int)lVar5 == 0) {
    lVar4 = 0;
  }
  _objc_retain(lVar4);
  _objc_release(lVar2);
  func_0x00010c1fce20(lVar4);
  lVar5 = *(long *)(param_1 + 0xe0);
  func_0x00010bf465e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,lVar2);
  }
  func_0x00010c18b5e0(lVar2);
  func_0x00010c2226c0(lVar2);
  _objc_retain(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d1dcc8; end: 107d1df0f; -[SCUnifiedProfileStoriesListSection _prepareAndReturnViewMoreGroupCell] */

void FUN_107d1dcc8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d7918;
  _objc_opt_class(PTR_PTR_1126d7918);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_DAT_1126a5298;
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar2 = uVar1;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar1);
  func_0x00010c1ee980(uVar2);
  puVar3 = PTR_DAT_1126a52a0;
  _objc_retain(uVar1);
  uVar5 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar4 = uVar1;
  if ((int)uVar5 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  func_0x00010c1fce20(uVar4);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar6 = puVar3;
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    func_0x000108f589fc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f58a14();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126d7928;
  _objc_alloc(PTR_PTR_1126d7928);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053b20(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c2226c0(uVar1);
  func_0x00010c161980(uVar1);
  _objc_retain(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1df10; end: 107d1e103; -[SCUnifiedProfileStoriesListSection _prepareAndReturnViewMoreCellAtIndex:] */

void FUN_107d1df10(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  uVar1 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d7910;
  _objc_opt_class(PTR_PTR_1126d7910);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_DAT_1126a5298;
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar2 = uVar1;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar1);
  func_0x00010c1ee980(uVar2);
  puVar3 = PTR_DAT_1126a52a0;
  _objc_retain(uVar1);
  uVar5 = uVar1;
  func_0x00010010fab4(uVar1,puVar3);
  uVar4 = uVar1;
  if ((int)uVar5 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  func_0x00010c1fce20(uVar4);
  func_0x00010c18b5e0(uVar1);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar6 = PTR_PTR_1126d7930;
  _objc_alloc(PTR_PTR_1126d7930);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c60(puVar6);
  func_0x00010c2226c0(uVar1);
  _objc_release(puVar6);
  _objc_release(ppuVar7);
  func_0x00010c161980(uVar1);
  _objc_retain(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1e104; end: 107d1e357; -[SCUnifiedProfileStoriesListSection _prepareAndReturnSnapCellAtIndex:] */

void FUN_107d1e104(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (param_3 - 1U < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1 + 0xd0;
    _objc_loadWeakRetained();
    uVar3 = uVar1;
    func_0x00010bf40940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126cc250;
    _objc_retain(uVar3);
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    lVar6 = *(long *)(param_1 + 0xe0);
    func_0x00010bf46600();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,uVar1);
    }
    func_0x00010c2226c0(uVar1);
    puVar4 = PTR_DAT_1126a4e90;
    _objc_retain(uVar1);
    uVar7 = uVar1;
    func_0x00010010fab4(uVar1,puVar4);
    uVar5 = uVar1;
    if ((int)uVar7 == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
    func_0x00010c161980(uVar5);
    func_0x00010c0ded00();
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    puVar4 = PTR_DAT_1126a5298;
    _objc_retain(uVar1);
    uVar8 = uVar1;
    func_0x00010010fab4(uVar1,puVar4);
    uVar7 = uVar1;
    if ((int)uVar8 == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
    func_0x00010c1ee980(uVar7);
    puVar4 = PTR_DAT_1126a52a0;
    _objc_retain(uVar1);
    uVar9 = uVar1;
    func_0x00010010fab4(uVar1,puVar4);
    uVar8 = uVar1;
    if ((int)uVar9 == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar1);
    func_0x00010c1fce20(uVar8);
    _objc_retain(uVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1e358; end: 107d1e447; -[SCUnifiedProfileStoriesListSection _updateSectionWithShouldResetExpansion:] */

void FUN_107d1e358(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c258460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c25a100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c29de60();
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c29de40();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107d1e448;
  puStack_78 = &UNK_1108e7778;
  lStack_70 = param_1;
  uStack_68 = uVar1;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = param_3;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107d1e448; end: 107d1e45f;  */

void FUN_107d1e448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSectionWithShouldResetExp_1125956d8,
             *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 107d1e460; end: 107d1e68f; -[SCUnifiedProfileStoriesListSection _updateSectionWithShouldResetExpansion:newHeaderViewModel:newSnapViewModels:newExpansionThreshold:newExpansionIncrement:] */

void FUN_107d1e460(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_5);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar7);
  puVar8 = *(undefined **)(param_1 + 0x10);
  _objc_retain(puVar8);
  puVar9 = *(undefined **)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010bf51e00();
  puVar1 = PTR_PTR_1126d7938;
  _objc_alloc();
  func_0x00010c02c200();
  puVar2 = param_5;
  func_0x00010bf529e0(param_5);
  func_0x00010c1cf8a0(puVar1,param_2,puVar2,param_3);
  if (((param_3 & 1) == 0) && (puVar9 != (undefined *)0x0)) {
    puVar2 = puVar9;
    func_0x00010c0ded60(puVar9);
    func_0x00010c1cfaa0(puVar1,param_2,puVar2);
  }
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar3 = puVar9;
    func_0x00010c0ded00();
    puVar4 = puVar8;
    func_0x00010bf529e0();
    puVar2 = puVar8;
    if (puVar3 < puVar4) {
      puVar3 = puVar9;
      func_0x00010c0ded00(puVar9);
      func_0x00010c25e980(puVar8,param_2,0,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf51e00(puVar8);
    }
  }
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar4 = puVar1;
    func_0x00010c0ded00();
    puVar5 = param_5;
    func_0x00010bf529e0();
    puVar3 = param_5;
    if (puVar4 < puVar5) {
      puVar4 = puVar1;
      func_0x00010c0ded00(puVar1);
      func_0x00010c25e980(param_5,param_2,0,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf51e00(param_5);
    }
  }
  lVar6 = param_1;
  func_0x00010be9d0c0(param_1,param_2,uVar7,param_4,puVar2,puVar3,puVar9,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedf480(param_1,param_2,lVar6,param_4,param_5,puVar1,*(undefined1 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107d1e690; end: 107d1ec03; -[SCUnifiedProfileStoriesListSection _sectionUpdateModelWithOldHeaderViewModel:newHeaderViewModel:oldSnapViewModels:newSnapViewModels:oldExpansionTracker:newExpansionTracker:] */

void FUN_107d1e690(undefined *param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined *param_5,undefined *param_6,ulong param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) == (param_4 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    uVar4 = param_3;
    func_0x00010c071ae0();
    if ((uVar4 & 1) == 0) {
      puVar5 = param_1 + 0xd0;
      _objc_loadWeakRetained();
      puVar6 = puVar5;
      func_0x00010bf40920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(puVar5);
      puVar5 = PTR_DAT_1126a4fe8;
      _objc_retain(puVar6);
      puVar7 = puVar6;
      func_0x00010010fab4(puVar6,puVar5);
      _objc_release(0);
      puVar5 = puVar6;
      if ((int)puVar7 == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar6);
      if (puVar5 == (undefined *)0x0) {
        func_0x00010bef92c0(puVar1);
      }
      else {
        func_0x00010c2226c0(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    puVar5 = param_5;
    func_0x00010bf529e0();
    if (((puVar5 == (undefined *)0x0) &&
        (puVar5 = param_6, func_0x00010bf529e0(), puVar5 == (undefined *)0x0)) ||
       ((param_1[0x20] & 1) == 0)) {
      puVar5 = PTR_PTR_1126b48b0;
      puVar6 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar7 = puVar3;
      func_0x00010bf51e00(puVar3);
      puVar10 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010bf34220(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = param_5;
      func_0x00010b813c80(param_5,param_6,&PTR___NSConcreteGlobalBlock_110d622f0);
      _objc_release(&PTR___NSConcreteGlobalBlock_110d622f0);
      puVar5 = puVar6;
      func_0x00010c286820(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010be8aa00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010bef92e0(puVar1);
      puVar5 = puVar6;
      func_0x00010c066900(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      func_0x00010bf97bc0(puVar5);
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bf6c000(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      func_0x00010bf97bc0(puVar5);
      _objc_release(puVar5);
      puVar5 = param_5;
      func_0x00010bf529e0();
      if ((puVar5 != (undefined *)0x0) ||
         (puVar5 = param_6, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
        puVar10 = param_5;
        func_0x00010bf529e0();
        puVar8 = param_6;
        func_0x00010bf529e0();
        puVar5 = param_6;
        if (puVar10 <= puVar8) {
          puVar5 = param_5;
        }
        func_0x00010bf529e0(puVar5);
        puVar5 = param_1;
        func_0x00010be34560();
        func_0x00010be34560();
        puVar10 = puVar2;
        func_0x00010bf4b800();
        if (((((ulong)puVar10 & 1) == 0) &&
            (puVar10 = puVar3, func_0x00010bf4b800(), ((uint)puVar5 ^ (uint)param_1) == 1)) &&
           (((ulong)puVar10 & 1) == 0)) {
          func_0x00010bef92c0(puVar1);
        }
      }
      uVar4 = param_7;
      func_0x00010bfd9320();
      if ((((uVar4 & 1) == 0) &&
          (uVar4 = param_8, func_0x00010bfd9320(), puVar5 = param_6, puVar10 = puVar2,
          (uVar4 & 1) != 0)) ||
         ((uVar4 = param_7, func_0x00010bfd9320(), (int)uVar4 != 0 &&
          (uVar4 = param_8, func_0x00010bfd9320(), puVar5 = param_5, puVar10 = puVar3,
          (uVar4 & 1) == 0)))) {
        func_0x00010bf529e0(puVar5);
        func_0x00010bef92c0(puVar10);
      }
      puVar5 = PTR_PTR_1126b48b0;
      puVar10 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      puVar9 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010bf34220(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar3);
      puVar10 = puVar2;
    }
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar5 = PTR_PTR_1126b48b0;
    func_0x00010c128f60(PTR_PTR_1126b48b0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d1ec04; end: 107d1ec1b;  */

void FUN_107d1ec04(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addIndex__11259be58,param_2 + 1);
  return;
}



/* Entry: 107d1ec1c; end: 107d1ee73; -[SCUnifiedProfileStoriesListSection _updateSectionWithSectionUpdateModel:pendingHeaderViewModel:pendingSnapViewModels:pendingExpansionTracker:pendingExpanded:] */

byte FUN_107d1ec1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  bVar1 = *(byte *)(param_1 + 0xc4);
  uVar4 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = uVar4;
  _objc_release(uVar3);
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0bf8a0(param_3);
  param_7 = param_7 | bVar1;
  bVar1 = *(byte *)(puStack_68 + 3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    _objc_retain(param_4);
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_6;
    _objc_retain(param_6);
    _objc_release(uVar4);
    *(byte *)(param_1 + 0x20) = param_7 & 1;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_4);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x68) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = param_4;
    _objc_retain(param_4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_6;
    _objc_retain(param_6);
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_5;
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_4);
    *(byte *)(param_1 + 0x88) = param_7 & 1;
    lVar2 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf40a00();
    _objc_release(lVar2);
    func_0x00010bdfff80(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return bVar1 ^ 1;
}



/* Entry: 107d1ee74; end: 107d1efa3; -[SCUnifiedProfileStoriesListSection _didRequestUpdate] */

void FUN_107d1ee74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126d7940;
  _objc_alloc(PTR_PTR_1126d7940);
  func_0x00010c042cc0();
  puVar2 = PTR_PTR_1126d78d0;
  _objc_alloc(PTR_PTR_1126d78d0);
  func_0x00010bff95a0();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar4);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d1efa4;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = uVar4;
  lStack_50 = param_1;
  puStack_48 = puVar3;
  _objc_retain(puVar3);
  _objc_retain(uVar4);
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(puStack_48);
  _objc_release(uStack_58);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107d1efa4; end: 107d1efb7;  */

void FUN_107d1efa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleActionWithSender_actionMod_1125d19f8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 107d1efb8; end: 107d1f05b; -[SCUnifiedProfileStoriesListSection _releasePendingUpdates] */

void FUN_107d1efb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x88);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 107d1f05c; end: 107d1f0c3; -[SCUnifiedProfileStoriesListSection _hasRoundBottomForIndex:forViewModels:expansionTracker:] */

bool FUN_107d1f05c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010bfd9320();
  if ((param_5 & 1) == 0) {
    lVar2 = param_4;
    func_0x00010bf529e0(param_4);
    bVar1 = param_3 == lVar2 + -1;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107d1f0c4; end: 107d1f103; -[SCUnifiedProfileStoriesListSection _isViewMoreCellAtIndex:] */

void FUN_107d1f0c4(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bfd9320();
  if (iVar1 != 0) {
    func_0x00010c0ded00(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}



/* Entry: 107d1f104; end: 107d1f357; -[SCUnifiedProfileStoriesListSection _reloadIndexSetForUpdateIndices:newSnapViewModels:] */

void FUN_107d1f104(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined1 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
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
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_148 = puVar2;
  _objc_retain(param_3);
  uVar8 = SUB81(&uStack_130,0);
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lStack_140);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        func_0x00010c0d8ae0(uVar11);
        uVar3 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1 + 0xd0;
        _objc_loadWeakRetained();
        func_0x00010c0e1e60(uVar11);
        lStack_138 = 0;
        lVar5 = lVar4;
        func_0x00010bf40920();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lStack_138;
        _objc_retain(lStack_138);
        _objc_release(lVar4);
        puVar2 = PTR_DAT_1126a4fe8;
        if (lVar1 == 0) {
          _objc_retain(lVar5);
          lVar6 = lVar5;
          func_0x00010010fab4(lVar5,puVar2);
          lVar4 = lVar5;
          if ((int)lVar6 == 0) {
            lVar4 = 0;
          }
          _objc_retain(lVar4);
          _objc_release(lVar5);
          if (lVar4 == 0) goto LAB_107d1f290;
          func_0x00010c2226c0(lVar5);
          _objc_release(lVar5);
        }
        else {
          lVar4 = lVar1;
          func_0x00010bf3ec40();
          if (lVar4 != 0) {
LAB_107d1f290:
            func_0x00010c0e1e60(uVar11);
            func_0x00010bef92c0(puStack_148);
          }
        }
        _objc_release(lVar5);
        _objc_release(lVar1);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (param_3 != lVar10);
      uVar8 = SUB81(&uStack_130,0);
      param_3 = lStack_140;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar9 = lStack_140;
  _objc_release(lStack_140);
  puVar2 = puStack_148;
  puVar7 = puStack_148;
  func_0x00010bf51e00(puStack_148);
  _objc_release(puVar2);
  _objc_release(param_4);
  lVar10 = lVar9;
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_168 = lVar9;
    pcStack_158 = FUN_107d1f358;
    uStack_170 = param_4;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_178,lVar10);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_107d1f404;
    puStack_190 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_188,auStack_178);
    uStack_180 = uVar8;
    func_0x0001000d76cc("APPSTORE",&puStack_1a8);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_178);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107d1f358; end: 107d1f403; -[SCUnifiedProfileStoriesListSection setExpandedState:] */

void FUN_107d1f358(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107d1f404;
  puStack_40 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107d1f404; end: 107d1f437;  */

void FUN_107d1f404(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1f438; end: 107d1f44b; -[SCUnifiedProfileStoriesListSection _setExpandedState:] */

void FUN_107d1f438(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x20) == param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be29190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleExpandHeaderCell_112567e00);
  return;
}



/* Entry: 107d1f44c; end: 107d1f537; -[SCUnifiedProfileStoriesListSection snapViewModelForServerId:] */

void FUN_107d1f44c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x107d1f4f0;
    puStack_30 = &UNK_110a08f08;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bfb2040(uVar1,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1f538; end: 107d1f623; -[SCUnifiedProfileStoriesListSection collectionViewCellForClientId:] */

void FUN_107d1f538(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d1f624;
    puStack_40 = &UNK_110a08f38;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfece40(lVar1,param_2,&puStack_58);
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = 0;
    }
    else {
      param_1 = param_1 + 0xd0;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010bf40920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d1f624; end: 107d1f66b;  */

undefined8 FUN_107d1f624(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107d1f66c; end: 107d1f733; -[SCUnifiedProfileStoriesListSection scrollToCellForClientId:] */

void FUN_107d1f66c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d1f734;
    puStack_40 = &UNK_110a08f38;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfece40(lVar1,param_2,&puStack_58);
    if (lVar1 != 0x7fffffffffffffff) {
      param_1 = param_1 + 0xd0;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf409a0();
      _objc_release(param_1);
    }
    _objc_release(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d1f734; end: 107d1f77b;  */

undefined8 FUN_107d1f734(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107d1f77c; end: 107d1f783; -[SCUnifiedProfileStoriesListSection sectionUpdateModel] */

undefined8 FUN_107d1f77c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107d1f784; end: 107d1f79b; -[SCUnifiedProfileStoriesListSection delegate] */

void FUN_107d1f784(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d1f79c; end: 107d1f7a7; -[SCUnifiedProfileStoriesListSection setDelegate:] */

void FUN_107d1f79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 107d1f7a8; end: 107d1f7af; -[SCUnifiedProfileStoriesListSection dataLoadingStatus] */

undefined8 FUN_107d1f7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107d1f7b0; end: 107d1f7b7; -[SCUnifiedProfileStoriesListSection setDataLoadingStatus:] */

void FUN_107d1f7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 107d1f7b8; end: 107d1f7bf; -[SCUnifiedProfileStoriesListSection actionHandler] */

undefined8 FUN_107d1f7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107d1f7c0; end: 107d1f7c7; -[SCUnifiedProfileStoriesListSection sectionDataProvider] */

undefined8 FUN_107d1f7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107d1f7c8; end: 107d1f7cf; -[SCUnifiedProfileStoriesListSection forceExpanded] */

undefined1 FUN_107d1f7c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}



/* Entry: 107d1f7d0; end: 107d1f7d7; -[SCUnifiedProfileStoriesListSection setForceExpanded:] */

void FUN_107d1f7d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc4) = param_3;
  return;
}



/* Entry: 107d1f7d8; end: 107d1f7df; -[SCUnifiedProfileStoriesListSection storyGroupActionHandler] */

undefined8 FUN_107d1f7d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107d1f7e0; end: 107d1f7e7; -[SCUnifiedProfileStoriesListSection shouldRemoveBottomCornerForLastCell] */

undefined1 FUN_107d1f7e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc5);
}



/* Entry: 107d1f7e8; end: 107d1f8f7; -[SCUnifiedProfileStoriesListSection .cxx_destruct] */

void FUN_107d1f7e8(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 107d1f8f8; end: 107d1f903; -[SCUnifiedProfileStoriesSectionConfiguration initWithInsets:storyId:] */

void FUN_107d1f8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInsets_storyId_boxedStor_1125e52d8,param_3,param_4,0);
  return;
}



/* Entry: 107d1f904; end: 107d1f98b;  */

void FUN_107d1f904(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf529e0();
  if ((param_2 == 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = param_4;
    func_0x00010bf529e0();
    bVar1 = lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1;
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d1f98c; end: 107d1f9f7; -[SCUnifiedProfileStoriesListSectionBox initWithSection:] */

undefined1 * FUN_107d1f98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faa50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


