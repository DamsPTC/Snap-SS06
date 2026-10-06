/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10690aab8; end: 10690ac03;  */

void FUN_10690aab8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10690ac04; end: 10690af03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690ac04(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_1127537d8);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar9);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10690af04; end: 10690b053;  */

void FUN_10690af04(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10690b054; end: 10690b05f; +[SCSettingsStoryNotificationsSearchCell sizeWithViewModel:constrainedToSize:] */

void FUN_10690b054(void)

{
  return;
}



/* Entry: 10690b060; end: 10690b063; -[SCSettingsStoryNotificationsSearchCell setViewModel:] */

void FUN_10690b060(void)

{
  return;
}



/* Entry: 10690b064; end: 10690b073; -[SCSettingsStoryNotificationsSearchCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690b064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127537dc),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 10690b074; end: 10690b1af; -[SCSettingsStoryNotificationsSearchCell _configuredSearchBar] */

void FUN_10690b074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cef38;
  _objc_alloc(PTR_PTR_1126cef38);
  func_0x00010bf20c00(param_4);
  func_0x00010c013de0(0,0,param_3,0x4046000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cbee0(puVar1,param_5,1);
  func_0x00010c1cbcc0(puVar1,param_5,1);
  func_0x00010be36b20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227540(puVar1,param_5,param_4);
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c066000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10690b1b0; end: 10690b2b3; -[SCSettingsStoryNotificationsSearchCell _configuredCollectionHeaderLabel] */

void FUN_10690b1b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1);
  func_0x00010c1cfce0(puVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e64ab8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e64ab8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10690b2b4; end: 10690b32f; -[SCSettingsStoryNotificationsSearchCell _iconXSignFillImage] */

void FUN_10690b2b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4036000000000000,0x4036000000000000,0x4008000000000000,0x4008000000000000,
                      0x4008000000000000,0x4008000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10690b330; end: 10690b34f; -[SCSettingsStoryNotificationsSearchCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690b330(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127537e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690b350; end: 10690b3bb; -[SCSettingsStoryNotificationsSearchCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690b350(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127537e0);
  _objc_storeStrong(param_1 + _DAT_1127537dc,0);
  _objc_storeStrong(param_1 + _DAT_1127537d4,0);
  _objc_storeStrong(param_1 + _DAT_1127537d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127537d0,0);
  return;
}



/* Entry: 10690b3bc; end: 10690b457; -[SCSettingsStoryNotificationsSearchSection initWithSupplementaryViewProvider:searchBarDelegate:] */

undefined1 *
FUN_10690b3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3c98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690b458; end: 10690b4db; -[SCSettingsStoryNotificationsSearchSection reuseCellClassesByIdentifiers] */

undefined * FUN_10690b458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eae098;
  puVar1 = PTR_PTR_1126cef40;
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
  return (undefined *)0x0;
}



/* Entry: 10690b4dc; end: 10690b4e3; -[SCSettingsStoryNotificationsSearchSection sectionHeaderModel] */

undefined8 FUN_10690b4dc(void)

{
  return 0;
}



/* Entry: 10690b4e4; end: 10690b4eb; -[SCSettingsStoryNotificationsSearchSection numberOfCellsInSection] */

undefined8 FUN_10690b4e4(void)

{
  return 1;
}



/* Entry: 10690b4ec; end: 10690b5b7; -[SCSettingsStoryNotificationsSearchSection cellForItemAtIndexInSection:] */

void FUN_10690b4ec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cef40;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18b5e0(uVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10690b5b8; end: 10690b5c3; -[SCSettingsStoryNotificationsSearchSection sizeForItemAtIndexInSection:withWidth:] */

void FUN_10690b5b8(void)

{
  return;
}



/* Entry: 10690b5c4; end: 10690b5eb; -[SCSettingsStoryNotificationsSearchSection supplementaryViewProvider] */

void FUN_10690b5c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10690b5ec; end: 10690b5f3; -[SCSettingsStoryNotificationsSearchSection actionHandler] */

undefined8 FUN_10690b5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10690b5f4; end: 10690b623; -[SCSettingsStoryNotificationsSearchSection setActionHandler:] */

void FUN_10690b5f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10690b624; end: 10690b62b; -[SCSettingsStoryNotificationsSearchSection sectionUpdateModel] */

undefined8 FUN_10690b624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10690b62c; end: 10690b633; -[SCSettingsStoryNotificationsSearchSection setSectionUpdateModel:] */

void FUN_10690b62c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10690b634; end: 10690b64b; -[SCSettingsStoryNotificationsSearchSection delegate] */

void FUN_10690b634(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690b64c; end: 10690b657; -[SCSettingsStoryNotificationsSearchSection setDelegate:] */

void FUN_10690b64c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10690b658; end: 10690b65f; -[SCSettingsStoryNotificationsSearchSection dataLoadingStatus] */

undefined8 FUN_10690b658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10690b660; end: 10690b667; -[SCSettingsStoryNotificationsSearchSection setDataLoadingStatus:] */

void FUN_10690b660(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10690b668; end: 10690b6b3; -[SCSettingsStoryNotificationsSearchSection .cxx_destruct] */

void FUN_10690b668(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10690b6b4; end: 10690b7a7; -[SCSettingsStoryNotificationsSectionCreator initWithUserSession:actionHandler:dataStore:searchBarDelegate:] */

undefined1 *
FUN_10690b6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3ca0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690b7a8; end: 10690ba97; -[SCSettingsStoryNotificationsSectionCreator sectionForDescriptor:] */

void FUN_10690b7a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) goto LAB_10690b834;
    uVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar7 = PTR_PTR_1126cef60;
      _objc_alloc_init(PTR_PTR_1126cef60);
      goto LAB_10690b988;
    }
    uVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_10690b988;
    }
    puVar5 = PTR_PTR_1126cef48;
    _objc_alloc(PTR_PTR_1126cef48);
    func_0x00010c043680();
    puVar6 = PTR_PTR_1126cef50;
    _objc_alloc(PTR_PTR_1126cef50);
    func_0x00010c01a180();
    puVar7 = PTR_PTR_1126cef68;
    _objc_alloc(PTR_PTR_1126cef68);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c04f8c0(puVar7);
    _objc_release(param_1);
    func_0x00010c161980(puVar7);
  }
  else {
    _objc_release(uVar1);
LAB_10690b834:
    uVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar7);
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
    puVar7 = PTR_PTR_1126cef30;
    _objc_opt_class(PTR_PTR_1126cef30);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar7);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126cef48;
    _objc_alloc(PTR_PTR_1126cef48);
    uVar2 = uVar1;
    func_0x00010c156600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c043680(puVar5);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126cef50;
    _objc_alloc(PTR_PTR_1126cef50);
    func_0x00010c01a180();
    puVar7 = PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    puVar4 = PTR_PTR_1126cef58;
    _objc_alloc(PTR_PTR_1126cef58);
    func_0x00010c05d6c0();
    func_0x00010c1f9240(puVar7);
    func_0x00010c161980(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_10690b988:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10690ba98; end: 10690badb; -[SCSettingsStoryNotificationsSectionCreator .cxx_destruct] */

void FUN_10690ba98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10690badc; end: 10690bae7; +[SCSettingsStoryNotificationsSectionDataProvider announcerIdentifier] */

undefined ** FUN_10690badc(void)

{
  return &PTR____CFConstantStringClassReference_110e64ad8;
}



/* Entry: 10690bae8; end: 10690baef; -[SCSettingsStoryNotificationsSectionDataProvider addListener:] */

void FUN_10690bae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10690baf0; end: 10690baf7; -[SCSettingsStoryNotificationsSectionDataProvider removeListener:] */

void FUN_10690baf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10690baf8; end: 10690bbb7; -[SCSettingsStoryNotificationsSectionDataProvider initWithUserSession:dataStore:] */

undefined1 *
FUN_10690baf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3ca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690bbb8; end: 10690bc3b; -[SCSettingsStoryNotificationsSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_10690bbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cef70;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
    return;
  }
  return;
}



/* Entry: 10690bc3c; end: 10690bc47; -[SCSettingsStoryNotificationsSectionDataProvider setUp] */

void FUN_10690bc3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addUpdateListener__11259cb88,param_1);
  return;
}



/* Entry: 10690bc48; end: 10690bc53; -[SCSettingsStoryNotificationsSectionDataProvider tearDown] */

void FUN_10690bc48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeUpdateListener__1126295c8,param_1);
  return;
}



/* Entry: 10690bc54; end: 10690bc8b; -[SCSettingsStoryNotificationsSectionDataProvider setSectionDataModel:] */

void FUN_10690bc54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 10690bc8c; end: 10690bc93; -[SCSettingsStoryNotificationsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10690bc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10690bc94; end: 10690bc9b; -[SCSettingsStoryNotificationsSectionDataProvider numberOfSections] */

undefined8 FUN_10690bc94(void)

{
  return 1;
}



/* Entry: 10690bc9c; end: 10690bca3; -[SCSettingsStoryNotificationsSectionDataProvider numberOfItemsInSection:] */

void FUN_10690bc9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10690bca4; end: 10690bd47; -[SCSettingsStoryNotificationsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10690bca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10690bd48;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10690bd48; end: 10690bd73;  */

void FUN_10690bd48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 10690bd74; end: 10690bdf7; -[SCSettingsStoryNotificationsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10690bd74(void)

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
    pcStack_98 = FUN_10690bf28;
    puStack_90 = &UNK_110845ae0;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110eae0b8;
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
      func_0x00010bde5bc0();
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



/* Entry: 10690bdf8; end: 10690bf27; -[SCSettingsStoryNotificationsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10690bdf8(undefined8 param_1)

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
  pcStack_68 = FUN_10690bf28;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eae0b8;
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
  func_0x00010bde5bc0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10690bf28; end: 10690bf6f;  */

void FUN_10690bf28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10690bf70; end: 10690bf7b; -[SCSettingsStoryNotificationsSectionDataProvider modelCanUpdateComparator] */

undefined ** FUN_10690bf70(void)

{
  return &PTR___NSConcreteGlobalBlock_110949d70;
}



/* Entry: 10690bf7c; end: 10690c0e3;  */

ulong FUN_10690bf7c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cef20;
  _objc_opt_class(PTR_PTR_1126cef20);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126cef20;
  _objc_opt_class(PTR_PTR_1126cef20);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c071ae0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10690c0e4; end: 10690c0e7; -[SCSettingsStoryNotificationsSectionDataProvider _configureStoryNotificationsEntityCell:] */

void FUN_10690c0e4(void)

{
  return;
}



/* Entry: 10690c0e8; end: 10690c3f3; -[SCSettingsStoryNotificationsSectionDataProvider _reloadSection] */

undefined * FUN_10690c0e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x20) = 1;
  puVar1 = PTR_PTR_1126cef30;
  puVar11 = *(undefined **)(param_1 + 0x38);
  _objc_retain(puVar11);
  _objc_opt_class();
  puVar2 = puVar11;
  _objc_opt_isKindOfClass();
  puVar12 = puVar11;
  if (((ulong)puVar2 & 1) == 0) {
    puVar12 = (undefined *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar11);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar11 = puVar12;
  func_0x00010c156900();
  if (puVar11 == (undefined *)0x1) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c11da20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    puVar14 = PTR____NSArray0__struct_11034ab48;
    if (lVar4 == 0) {
      puVar14 = *(undefined **)(param_1 + 0x28);
      func_0x00010c0ebfc0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar14 = PTR____NSArray0__struct_11034ab48;
    if (puVar11 == (undefined *)0x0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      puVar14 = *(undefined **)(param_1 + 0x28);
      if (lVar4 == 0) {
        func_0x00010beffee0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar11 = puVar14;
        func_0x00010c11da20(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befff00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
      }
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar6 = puVar14;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar11 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar6);
      }
      puVar7 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      func_0x00010befa120(puVar2);
      _objc_release(puVar7);
      puVar15 = puVar15 + 1;
    } while (puVar11 != puVar15);
    puVar11 = puVar6;
    func_0x00010bf52a60();
  }
  puVar11 = puVar2;
  func_0x00010bf51e00();
  puVar15 = puVar11;
  func_0x00010be8ab80(param_1);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  _objc_retain(puVar15);
  puVar2 = puVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c08fa60();
  if (puVar11 == (undefined *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*(undefined8 *)(puVar12 + 0x20);
    puVar11 = puVar1;
    func_0x00010bf85d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35920();
    func_0x00010bf359c0();
    _objc_release(puVar11);
  }
  _objc_release(puVar2);
  puVar2 = puVar15;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c08fa60();
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar2);
    uVar13 = 0;
    uVar8 = 1;
LAB_10690c50c:
    if ((((uVar10 ^ 1) & 1) == 0) && (uVar13 == 0)) {
      puVar12 = (undefined *)0x1;
      goto LAB_10690c574;
    }
    if (((uVar10 | uVar8) & 1) == 0) {
      puVar12 = (undefined *)0xffffffffffffffff;
      goto LAB_10690c574;
    }
  }
  else {
    uVar13 = (uint)*(undefined8 *)(puVar12 + 0x20);
    puVar12 = puVar15;
    func_0x00010bf85d80(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35920();
    func_0x00010bf359c0();
    _objc_release(puVar12);
    _objc_release(puVar2);
    uVar8 = uVar13 ^ 1;
    if ((((uVar10 ^ 1) & 1) != 0) || (uVar8 != 0)) goto LAB_10690c50c;
  }
  puVar2 = puVar1;
  func_0x00010bf85d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010bf85d80(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf433a0(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar2);
LAB_10690c574:
  _objc_release(puVar15);
  _objc_release(puVar1);
  return puVar12;
}



/* Entry: 10690c3f4; end: 10690c59b;  */

long FUN_10690c3f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar5 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35920();
    func_0x00010bf359c0();
    _objc_release(lVar1);
  }
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_release(lVar5);
    uVar6 = 0;
    uVar3 = 1;
LAB_10690c50c:
    if ((((uVar4 ^ 1) & 1) == 0) && (uVar6 == 0)) {
      lVar5 = 1;
      goto LAB_10690c574;
    }
    if (((uVar4 | uVar3) & 1) == 0) {
      lVar5 = -1;
      goto LAB_10690c574;
    }
  }
  else {
    uVar6 = (uint)*(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35920();
    func_0x00010bf359c0();
    _objc_release(lVar1);
    _objc_release(lVar5);
    uVar3 = uVar6 ^ 1;
    if ((((uVar4 ^ 1) & 1) != 0) || (uVar3 != 0)) goto LAB_10690c50c;
  }
  lVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf433a0(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_10690c574:
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar5;
}



/* Entry: 10690c59c; end: 10690c783; -[SCSettingsStoryNotificationsSectionDataProvider _reloadSectionWithContainerViewModels:] */

void FUN_10690c59c(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x20) = 2;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c071b60(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = param_3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar8);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c155aa0();
    _objc_release(lVar3);
    uVar8 = *(undefined8 *)(param_1 + 8);
    lVar3 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f8a6f8;
    puVar4 = *(undefined **)(param_1 + 0x38);
    func_0x00010bf51e00();
    puVar2 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f8a718;
    puVar5 = param_3;
    puStack_78 = puVar2;
    func_0x00010bf51e00();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar8,param_2,&PTR____CFConstantStringClassReference_110f8a6d8,lVar3,puVar7)
    ;
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690c784; end: 10690c79b; -[SCSettingsStoryNotificationsSectionDataProvider dataProviderDelegate] */

void FUN_10690c784(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690c79c; end: 10690c7a7; -[SCSettingsStoryNotificationsSectionDataProvider setDataProviderDelegate:] */

void FUN_10690c79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10690c7a8; end: 10690c7af; -[SCSettingsStoryNotificationsSectionDataProvider sectionDataModel] */

undefined8 FUN_10690c7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10690c7b0; end: 10690c7b7; -[SCSettingsStoryNotificationsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10690c7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10690c7b8; end: 10690c7e7; -[SCSettingsStoryNotificationsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10690c7b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10690c7e8; end: 10690c84f; -[SCSettingsStoryNotificationsSectionDataProvider .cxx_destruct] */

void FUN_10690c7e8(long param_1)

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



/* Entry: 10690c850; end: 10690ca27; -[SCSettingsStoryNotificationsSectionHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10690c850(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f3cb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11275382c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c1a7d00(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_112753830;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10690ca28; end: 10690cad7; -[SCSettingsStoryNotificationsSectionHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690ca28(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3cb0;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar2 = param_3;
  func_0x00010bf20c00(param_5);
  func_0x00010b816528(0x402e000000000000,0x4024000000000000,dVar2 + -30.0,0x402c000000000000);
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112753830));
  lVar1 = (long)_DAT_11275382c;
  func_0x00010c2256c0(param_3,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c173440(param_4,*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 10690cad8; end: 10690cc53; -[SCSettingsStoryNotificationsSectionHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690cad8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112753834;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar3 = param_3;
  if (param_3 == uVar5) {
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10690cc3c;
    }
    puVar2 = PTR_PTR_1126cef48;
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
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_3;
      func_0x00010c156600(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c28eda0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112753830));
      _objc_release(uVar1);
      _objc_release(puVar2);
      _objc_release(uVar5);
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar3);
LAB_10690cc3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10690cc54; end: 10690cd03; +[SCSettingsStoryNotificationsSectionHeaderView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10690cc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126cef48;
  _objc_opt_class(PTR_PTR_1126cef48);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_4;
    func_0x00010c156600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar4 = 0x4041000000000000;
      goto LAB_10690ccd8;
    }
  }
  param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
LAB_10690ccd8:
  _objc_release(uVar1);
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10690cd04; end: 10690cd13; -[SCSettingsStoryNotificationsSectionHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10690cd04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112753834);
}



/* Entry: 10690cd14; end: 10690cd23; -[SCSettingsStoryNotificationsSectionHeaderView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10690cd14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112753838);
}



/* Entry: 10690cd24; end: 10690cd63; -[SCSettingsStoryNotificationsSectionHeaderView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690cd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112753838;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10690cd64; end: 10690cdc3; -[SCSettingsStoryNotificationsSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690cd64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112753838,0);
  _objc_storeStrong(param_1 + _DAT_112753834,0);
  _objc_storeStrong(param_1 + _DAT_11275382c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112753830,0);
  return;
}



/* Entry: 10690cdc4; end: 10690ce6b; -[SCSettingsStoryNotificationsSupplementaryViewProvider initWithHeaderViewModel:actionHandler:] */

undefined1 *
FUN_10690cdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3cb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690ce6c; end: 10690ce73; -[SCSettingsStoryNotificationsSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_10690ce6c(void)

{
  return 1;
}



/* Entry: 10690ce74; end: 10690cee7; -[SCSettingsStoryNotificationsSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined8 FUN_10690ce74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  else {
    func_0x00010c23d6e0(param_1,0x7fefffffffffffff,PTR_PTR_1126cef80,param_3,
                        *(undefined8 *)(param_2 + 8));
  }
  return param_1;
}



/* Entry: 10690cee8; end: 10690cfb3; -[SCSettingsStoryNotificationsSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_10690cee8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 0x18;
      _objc_loadWeakRetained();
      puVar3 = puVar1;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126cef80;
      _objc_opt_class(PTR_PTR_1126cef80);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar6);
      func_0x00010c161980(puVar6);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10690cfb4; end: 10690d09b; -[SCSettingsStoryNotificationsSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_10690cfb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126cef80;
    _objc_opt_class(PTR_PTR_1126cef80);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010c2226c0(uVar5);
    func_0x00010c161980(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10690d09c; end: 10690d0a3; -[SCSettingsStoryNotificationsSupplementaryViewProvider actionHandler] */

undefined8 FUN_10690d09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10690d0a4; end: 10690d0d3; -[SCSettingsStoryNotificationsSupplementaryViewProvider setActionHandler:] */

void FUN_10690d0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10690d0d4; end: 10690d0eb; -[SCSettingsStoryNotificationsSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_10690d0d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690d0ec; end: 10690d0f7; -[SCSettingsStoryNotificationsSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_10690d0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10690d0f8; end: 10690d0ff; -[SCSettingsStoryNotificationsSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_10690d0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10690d100; end: 10690d107; -[SCSettingsStoryNotificationsSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_10690d100(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10690d108; end: 10690d14b; -[SCSettingsStoryNotificationsSupplementaryViewProvider .cxx_destruct] */

void FUN_10690d108(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10690d14c; end: 10690d2ff; -[SCSettingsStoryNotificationsViewController initWithUserSession:notificationOptInRequestManager:creatorSettingsFetcher:creatorSettingsMutator:snapProServices:snapchattersDataFetcher:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10690d14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f3cc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11275384c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112753850;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112753854;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e64b18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e64b18,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112753858);
    *(undefined ***)((long)puVar1 + (long)_DAT_112753858) = ppuVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275385c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112753860;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112753864;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690d300; end: 10690d5cb; -[SCSettingsStoryNotificationsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690d300(undefined8 param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f3cc0;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  lVar6 = param_3;
  func_0x00010bde6060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112753868;
  uVar3 = *(undefined8 *)(param_3 + lVar5);
  *(long *)(param_3 + lVar5) = lVar6;
  _objc_release(uVar3);
  lVar6 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bde6040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275386c;
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  *(long *)(param_3 + lVar4) = lVar6;
  _objc_release(uVar3);
  func_0x00010c181fc0(*(undefined8 *)(param_3 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_3 + lVar5));
  lVar6 = param_3;
  func_0x00010bde6080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112753870;
  uVar3 = *(undefined8 *)(param_3 + lVar5);
  *(long *)(param_3 + lVar5) = lVar6;
  _objc_release(uVar3);
  lVar6 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar5));
  func_0x00010c181f80(0,0,param_2 + 40.0,0,*(undefined8 *)(param_3 + lVar4));
  puVar1 = PTR_PTR_1126cef70;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_3 + _DAT_112753874);
  *(undefined **)(param_3 + _DAT_112753874) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126cef88;
  _objc_alloc();
  func_0x00010c05d700();
  uVar3 = *(undefined8 *)(param_3 + _DAT_112753878);
  *(undefined **)(param_3 + _DAT_112753878) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126cef90;
  _objc_alloc();
  func_0x00010c05d6e0();
  uVar3 = *(undefined8 *)(param_3 + _DAT_11275387c);
  *(undefined **)(param_3 + _DAT_11275387c) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126cef98;
  _objc_alloc();
  func_0x00010c05ce60();
  uVar3 = *(undefined8 *)(param_3 + _DAT_112753880);
  *(undefined **)(param_3 + _DAT_112753880) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar6 = (long)_DAT_112753884;
  uVar3 = *(undefined8 *)(param_3 + lVar6);
  *(undefined **)(param_3 + lVar6) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar1);
  func_0x00010c1e6360(*(undefined8 *)(param_3 + lVar6));
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 10690d5cc; end: 10690d653; -[SCSettingsStoryNotificationsViewController _configuredContainerView] */

void FUN_10690d5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10690d654; end: 10690d7e3; -[SCSettingsStoryNotificationsViewController _configuredCollectionViewForContainer:] */

void FUN_10690d654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d3;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1f7ac0();
  func_0x00010bf20c00(param_3);
  func_0x00010c1b6260(in_d3,0x4046000000000000,puVar1);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  func_0x00010c1f93e0(0,0,0,0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x00010bf20c00(param_3);
  _objc_release(param_3);
  func_0x00010c014040(uVar4,uVar5,uVar6,uVar7,puVar2,param_2,puVar1);
  func_0x00010c167740();
  func_0x00010c167680(puVar2,param_2,1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1f7b20(puVar2,param_2,1);
  func_0x00010c1f7e20(puVar2,param_2,1);
  func_0x00010c2026e0(puVar2,param_2,0);
  puVar3 = PTR_PTR_1126cef78;
  _objc_opt_class(PTR_PTR_1126cef78);
  func_0x00010c126000(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110eae0b8);
  puVar3 = PTR_PTR_1126cef40;
  _objc_opt_class(PTR_PTR_1126cef40);
  func_0x00010c126000(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110eae098);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10690d7e4; end: 10690d87f; -[SCSettingsStoryNotificationsViewController _configuredDoneButton] */

void FUN_10690d7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1);
  _objc_release(ppuVar2);
  func_0x00010befbd60(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10690d880; end: 10690da93; -[SCSettingsStoryNotificationsViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690d880(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f3cc0;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewWillLayoutSubviews_112526958);
  lVar2 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5;
  dVar9 = param_4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar4 = param_5;
  dVar10 = dVar9;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar6 = (long)_DAT_112753868;
  func_0x00010c19f0e0(0,param_4,param_3,dVar9 - dVar10,*(undefined8 *)(param_5 + lVar6));
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  iVar1 = (int)*(undefined8 *)(param_5 + _DAT_11275386c);
  func_0x00010c19f0e0();
  func_0x0001008522a8();
  dVar9 = 20.0;
  if (iVar1 != 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  }
  dVar8 = *(double *)(param_5 + _DAT_112753888) + 20.0;
  dVar10 = dVar8;
  if (*(double *)(param_5 + _DAT_112753888) <= 0.0) {
    dVar10 = dVar9;
  }
  lVar5 = (long)_DAT_112753870;
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar5));
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar7 = 0;
  dVar11 = dVar8;
  func_0x00010c19f0e0(0,0,dVar9 * 0.6000000238418579,dVar8,*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c17a6a0(uVar7,(dVar11 + dVar8 * -0.5) - dVar10,*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10690da94; end: 10690dac7; -[SCSettingsStoryNotificationsViewController viewWillAppear:] */

void FUN_10690da94(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3cc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 10690dac8; end: 10690db8b; -[SCSettingsStoryNotificationsViewController viewDidAppear:] */

void FUN_10690dac8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3cc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0);
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
  return;
}



/* Entry: 10690db8c; end: 10690dbf3; -[SCSettingsStoryNotificationsViewController viewDidDisappear:] */

void FUN_10690db8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3cc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  return;
}



/* Entry: 10690dbf4; end: 10690dcb7; -[SCSettingsStoryNotificationsViewController _userDidTapDoneButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690dbf4(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112753874);
  func_0x00010c0f75a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112753878),param_2,param_1,puVar3,
                        *(undefined8 *)(param_1 + _DAT_11275386c));
    param_1 = puVar3;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10690dcb8; end: 10690dd13; -[SCSettingsStoryNotificationsViewController didReceiveOptInResponseWithSuccess:] */

void FUN_10690dcb8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10690dd14;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10690dd14; end: 10690ddcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690dd14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112753870;
  func_0x00010c195460(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),param_2,1);
  func_0x00010c1beb60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126afca8;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 10690ddcc; end: 10690de23; -[SCSettingsStoryNotificationsViewController didSendOptInRequest] */

void FUN_10690ddcc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10690de24;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10690de24; end: 10690de63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690de24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112753870;
  func_0x00010c195460(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),PTR_s_setLoading__11264d500,1);
  return;
}



/* Entry: 10690de64; end: 10690de7b; -[SCSettingsStoryNotificationsViewController didSelectEntity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690de64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112753874),PTR_s_setQueryText__112657368,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10690de7c; end: 10690de87; -[SCSettingsStoryNotificationsViewController supportedInterfaceOrientations] */

undefined8 FUN_10690de7c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 10690de88; end: 10690deb7; -[SCSettingsStoryNotificationsViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690de88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112753858);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10690deb8; end: 10690df73; -[SCSettingsStoryNotificationsViewController _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690deb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_d3;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar1);
  _objc_release(param_3);
  *(undefined8 *)(param_1 + _DAT_112753888) = in_d3;
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10690df74; end: 10690dfd3; -[SCSettingsStoryNotificationsViewController _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690df74(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + _DAT_112753888) = 0;
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10690dfd4; end: 10690dfe7; -[SCSettingsStoryNotificationsViewController searchBar:textDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690dfd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112753874),PTR_s_setQueryText__112657368,param_4);
  return;
}



/* Entry: 10690dfe8; end: 10690dfff; -[SCSettingsStoryNotificationsViewController xButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690dfe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112753874),PTR_s_setQueryText__112657368,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10690e000; end: 10690e01f; -[SCSettingsStoryNotificationsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690e000(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275388c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


