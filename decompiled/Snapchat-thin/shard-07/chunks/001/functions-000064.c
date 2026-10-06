/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105130230; end: 105130247; -[SCSendToScheduleActionSheetController delegate] */

void FUN_105130230(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105130248; end: 105130253; -[SCSendToScheduleActionSheetController setDelegate:] */

void FUN_105130248(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105130254; end: 1051302bb; -[SCSendToScheduleActionSheetController .cxx_destruct] */

void FUN_105130254(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1051302bc; end: 10513043b; -[SCSendToScheduleActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051302bc(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126b5128;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271ce24;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c15aac0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11271ce28;
  lVar4 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c15d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271ce2c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271ce30;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e000(puVar1,param_2,lVar3,lVar5,lVar7,lVar9);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271ce34);
  *(undefined **)(param_1 + _DAT_11271ce34) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513043c; end: 10513049b; -[SCSendToScheduleActionSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513043c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ce30);
  _objc_destroyWeak(param_1 + _DAT_11271ce24);
  _objc_destroyWeak(param_1 + _DAT_11271ce2c);
  _objc_destroyWeak(param_1 + _DAT_11271ce28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ce34,0);
  return;
}



/* Entry: 10513049c; end: 105130543;  */

void FUN_10513049c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6db8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc6db8,
                      &PTR____CFConstantStringClassReference_110dc6dd8,0);
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



/* Entry: 105130544; end: 1051308f7; -[SCSendToSponsorActionSheetController initWithSpotlightRepository:sendToTracker:storyConfiguration:snapProServices:addPaidPartnershipScopeExposer:uiContainer:] */

undefined8 *
FUN_105130544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126e65a8;
  puVar2 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[2];
    puVar2[2] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[3];
    puVar2[3] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar2[6];
    puVar2[6] = puVar4;
    _objc_release(uVar3);
    *(undefined4 *)(puVar2 + 7) = 0;
    if (param_5 == 0) {
      uVar1 = 0;
    }
    else {
      lVar5 = param_5;
      func_0x00010c0782e0();
      uVar1 = (undefined1)lVar5;
    }
    *(undefined1 *)((long)puVar2 + 0x3c) = uVar1;
    *(undefined1 *)((long)puVar2 + 0x3d) = 0;
    _objc_initWeak(auStack_88,puVar2);
    func_0x00010be4dda0(puVar2);
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c24c500();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e0ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1051308f8;
    puStack_98 = &UNK_110842c58;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c15ab20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c159a20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e0ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1051308f8; end: 105130987;  */

void FUN_1051308f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105130988; end: 1051309b7; -[SCSendToSponsorActionSheetController actionSheetType] */

void FUN_105130988(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e2c478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e2c478);
  return;
}



/* Entry: 1051309b8; end: 1051309bb; -[SCSendToSponsorActionSheetController getNavigationOption] */

void FUN_1051309b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateV2Option_112564aa8);
  return;
}



/* Entry: 1051309bc; end: 105130ba3; -[SCSendToSponsorActionSheetController getActionSheet] */

void FUN_1051309bc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **unaff_x24;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c06b620();
  if ((int)puVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puVar5 = PTR_PTR_1126b10a0;
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbb618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105130ba4;
    puStack_68 = &UNK_110852cd0;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60,param_2);
    puVar3 = puVar5;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(ppuVar2);
    puVar5 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    func_0x00010be1c420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f40(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    puVar1 = auStack_58;
    _objc_destroyWeak();
    unaff_x24 = &puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar1);
  _objc_retain(param_2);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be02400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105130ba4; end: 105130bef;  */

void FUN_105130ba4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105130bf0; end: 105130c17; -[SCSendToSponsorActionSheetController actionSheetAvailabilityObservable] */

void FUN_105130bf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105130c18; end: 105130c1f; -[SCSendToSponsorActionSheetController isActionSheetAvailable] */

undefined1 FUN_105130c18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 105130c20; end: 105130c27; -[SCSendToSponsorActionSheetController closePage] */

void FUN_105130c20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closePageWithCompletion__112555f38,0);
  return;
}



/* Entry: 105130c28; end: 105130cc3; -[SCSendToSponsorActionSheetController selectSponsorWithStatus:profileId:displayName:sponsorableProfile:] */

void FUN_105130c28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  func_0x00010c159060(puVar1,param_2,param_4,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c207f40(*(undefined8 *)(param_1 + 8),param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105130cc4; end: 105130d07; -[SCSendToSponsorActionSheetController clearSelection] */

void FUN_105130cc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010bf3c140(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105130d08; end: 105130d57; -[SCSendToSponsorActionSheetController _loadManagedProfiles] */

void FUN_105130d08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c06b620();
  func_0x00010c0df6e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105130d58; end: 105130eab; -[SCSendToSponsorActionSheetController _setSpotlight:] */

void FUN_105130d58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar2 = &uStack_140;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c0bee40(*(undefined8 *)(lStack_138 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      puVar2 = &uStack_140;
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c08fa60();
  *(bool *)(*(long *)(param_3 + 0x20) + 0x3d) = puVar2 != (undefined8 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010bee0770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__updateSponsorToolEligibility_112595b80);
  return;
}



/* Entry: 105130eac; end: 105130ee3;  */

void FUN_105130eac(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60();
  *(bool *)(*(long *)(param_1 + 0x20) + 0x3d) = param_3 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee0770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSponsorToolEligibility_112595b80);
  return;
}



/* Entry: 105130ee4; end: 105130fe3; -[SCSendToSponsorActionSheetController _generateV2Option] */

void FUN_105130ee4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  FUN_105131a0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105130fe4; end: 10513109f;  */

void FUN_105130fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010be02400(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1051310a0; end: 1051310cb;  */

void FUN_1051310a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ce20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051310cc; end: 10513128b; -[SCSendToSponsorActionSheetController _updateSponsorToolEligibilityWithSelectionItems:] */

void FUN_1051310cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (uVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      uVar5 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_128 + uVar5 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar2);
        uVar6 = uVar3;
        func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f52d38);
        if ((int)uVar6 == 0) {
          uVar6 = uVar3;
          func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f52df8);
          if ((int)uVar6 == 0) {
            uVar6 = uVar3;
            func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f52d58);
            if ((int)uVar6 != 0) {
              *(undefined1 *)(param_1 + 0x3b) = 1;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x3a) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x39) = 1;
        }
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
      uVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar1 != 0);
  }
  func_0x00010bee0760(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = param_3;
  func_0x00010be1da20();
  *(char *)(param_3 + 0x38) = (char)uVar1;
  lVar7 = *(long *)(param_3 + 8);
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((((*(byte *)(param_3 + 0x3c) & 1) != 0) ||
       (uVar1 = param_3, func_0x00010be3e100(), (uVar1 & 1) != 0)) ||
      ((*(byte *)(param_3 + 0x38) & 1) == 0)) && (lVar7 != 0)) {
    func_0x00010bf3c040(param_3);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c06b620(param_3);
  func_0x00010c0df6e0(puVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10513128c; end: 105131333; -[SCSendToSponsorActionSheetController _updateSponsorToolEligibility] */

void FUN_10513128c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010be1da20();
  *(char *)(param_1 + 0x38) = (char)uVar1;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((((*(byte *)(param_1 + 0x3c) & 1) != 0) ||
       (uVar1 = param_1, func_0x00010be3e100(), (uVar1 & 1) != 0)) ||
      ((*(byte *)(param_1 + 0x38) & 1) == 0)) && (lVar2 != 0)) {
    func_0x00010bf3c040(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c06b620(param_1);
  func_0x00010c0df6e0(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105131334; end: 1051313cf; -[SCSendToSponsorActionSheetController _getCanUseSponsorTool] */

ulong FUN_105131334(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x3b) == '\x01') {
    if ((*(byte *)(param_1 + 0x3a) & 1) == 0) {
      uVar4 = 0;
      goto LAB_105131368;
    }
  }
  else if (*(byte *)(param_1 + 0x3a) == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x39);
    goto LAB_105131368;
  }
  if ((*(byte *)(param_1 + 0x3d) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c2932e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdac40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    return uVar3;
  }
  uVar4 = 1;
LAB_105131368:
  return (ulong)(uVar4 & 1);
}



/* Entry: 1051313d0; end: 10513145f; -[SCSendToSponsorActionSheetController _closePageWithCompletion:] */

void FUN_1051313d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      func_0x00010c2a4ae0(uVar2,param_2,param_3);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105131460; end: 1051314f7; -[SCSendToSponsorActionSheetController _dismissActionSheetWithSender:completion:] */

void FUN_105131460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf83000(param_3,param_2,param_4);
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84220();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051314f8; end: 1051316d7; -[SCSendToSponsorActionSheetController _openAddPaidPartnershipPage] */

void FUN_1051314f8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c071800();
  if (iVar2 != 0) {
    puVar3 = PTR_PTR_1126b5130;
    _objc_opt_new(PTR_PTR_1126b5130);
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c24a0a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c24a0e0();
      func_0x00010c0df760(puVar6,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a2c0(puVar3,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c24a0a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar3,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c24a0a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140(puVar3,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar5);
    }
    puVar6 = PTR_PTR_1126b5138;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    lVar4 = param_1;
    func_0x00010be3e100(param_1);
    func_0x00010c00b160(puVar6,param_2,param_1,uVar7,puVar3,uVar1,lVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1051316d8;
    puStack_58 = &UNK_110841f80;
    uStack_50 = uVar7;
    puStack_48 = puVar6;
    _objc_retain(uVar7);
    func_0x00010bde1660(param_1,param_2,&puStack_70);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 1051316d8; end: 1051316e3;  */

void FUN_1051316d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051316e4; end: 105131773; -[SCSendToSponsorActionSheetController _isAnonymously] */

uint FUN_1051316e4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c22a7a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3b) == '\x01') {
      lVar3 = lVar2;
      func_0x00010c241e00(lVar2);
      uVar4 = (uint)lVar3;
    }
    else {
      uVar4 = 0;
    }
    if (*(char *)(param_1 + 0x3a) == '\x01') {
      lVar3 = lVar2;
      func_0x00010c24ace0(lVar2);
      uVar1 = (uint)lVar3;
    }
    else {
      uVar1 = 0;
    }
    uVar4 = uVar4 | uVar1;
  }
  _objc_release(lVar2);
  return uVar4 & 1;
}



/* Entry: 105131774; end: 10513178b; -[SCSendToSponsorActionSheetController delegate] */

void FUN_105131774(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10513178c; end: 105131797; -[SCSendToSponsorActionSheetController setDelegate:] */

void FUN_10513178c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105131798; end: 1051317ff; -[SCSendToSponsorActionSheetController .cxx_destruct] */

void FUN_105131798(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105131800; end: 1051319a7; -[SCSendToSponsorActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105131800(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126b5140;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271ce6c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c15aa00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11271ce70;
  lVar4 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c15d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271ce74;
  _objc_loadWeakRetained(lVar8);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11271ce78);
  lVar9 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b540(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,uVar12,lVar10);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11271ce7c);
  *(undefined **)(param_1 + _DAT_11271ce7c) = puVar1;
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051319a8; end: 105131a0b; -[SCSendToSponsorActionSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051319a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ce78,0);
  _objc_destroyWeak(param_1 + _DAT_11271ce74);
  _objc_destroyWeak(param_1 + _DAT_11271ce6c);
  _objc_destroyWeak(param_1 + _DAT_11271ce70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ce7c,0);
  return;
}



/* Entry: 105131a0c; end: 105131a23;  */

void FUN_105131a0c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6ed8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc6ed8,
                      &PTR____CFConstantStringClassReference_110dc6eb8,0);
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



/* Entry: 105131a24; end: 105131aff; -[SCAddPaidPartnershipPageScope initWithDelegate:uiContainer:selectedSponsor:hasMusic:isAnonymous:] */

undefined1 *
FUN_105131a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e65b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105131b00; end: 105131b17; -[SCAddPaidPartnershipPageScope delegate] */

void FUN_105131b00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105131b18; end: 105131b1f; -[SCAddPaidPartnershipPageScope uiContainer] */

undefined8 FUN_105131b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105131b20; end: 105131b27; -[SCAddPaidPartnershipPageScope selectedSponsor] */

undefined8 FUN_105131b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105131b28; end: 105131b2f; -[SCAddPaidPartnershipPageScope hasMusic] */

undefined1 FUN_105131b28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105131b30; end: 105131b37; -[SCAddPaidPartnershipPageScope isAnonymous] */

undefined1 FUN_105131b30(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105131b38; end: 105131b6f; -[SCAddPaidPartnershipPageScope .cxx_destruct] */

void FUN_105131b38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105131b70; end: 105132387; -[SCStoryQuickPostEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105131b70(long param_1)

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
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  
  puVar1 = PTR_PTR_1126b5148;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271ce94;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_11271ce98;
  lVar4 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_11271ce9c;
  lVar6 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar8 = lVar56;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar11 = lVar53;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = (long)_DAT_11271cea0;
  lVar12 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271cea4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar18 = lVar58;
  func_0x00010c106840();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271cea8;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271ceac;
  _objc_loadWeakRetained();
  lVar49 = (long)_DAT_11271ceb0;
  lVar22 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_11271ceb4;
  lVar24 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_11271ceb8;
  lVar26 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11271cebc;
  _objc_loadWeakRetained();
  lVar29 = param_1 + _DAT_11271cec0;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_11271cec4;
  lVar31 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x000107d5e624();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11271cecc;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_11271ced0;
  lVar35 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c0ee260();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar37 = lVar55;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11271ced4;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_11271ced8;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c11e720();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_11271cee0;
  _objc_loadWeakRetained();
  lVar43 = param_1 + _DAT_11271cee4;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + lVar57;
  _objc_loadWeakRetained();
  func_0x00010c243400();
  lVar46 = param_1 + _DAT_11271cee8;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010bf62460();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11271ceec;
  _objc_loadWeakRetained();
  func_0x00010c05e020();
  uVar52 = *(undefined8 *)(param_1 + _DAT_11271cef0);
  *(undefined **)(param_1 + _DAT_11271cef0) = puVar1;
  _objc_release(uVar52);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar55);
  _objc_release(lVar36);
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
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar58);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar53);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar56);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b5150;
  _objc_alloc();
  lVar2 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar16 = lVar2;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar14 = lVar54;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar12 = lVar50;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271cef4;
  _objc_loadWeakRetained(lVar4);
  lVar49 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar53 = lVar49;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + lVar51;
  _objc_loadWeakRetained(lVar51);
  lVar9 = lVar51;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar56 = lVar6;
  func_0x000107d5e624();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cce0();
  lVar58 = (long)_DAT_11271cef8;
  uVar52 = *(undefined8 *)(param_1 + lVar58);
  *(undefined **)(param_1 + lVar58) = puVar1;
  _objc_release(uVar52);
  _objc_release(lVar56);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar51);
  _objc_release(lVar53);
  _objc_release(lVar49);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar50);
  _objc_release(lVar14);
  _objc_release(lVar54);
  _objc_release(lVar16);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6ac0(*(undefined8 *)(param_1 + lVar58));
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar57 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar2 = lVar57;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6aa0(*(undefined8 *)(param_1 + lVar58));
  _objc_release(lVar2);
  _objc_release(lVar57);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar58),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105132388; end: 1051324ef; -[SCStoryQuickPostEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105132388(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cee8);
  _objc_destroyWeak(param_1 + _DAT_11271cee0);
  _objc_destroyWeak(param_1 + _DAT_11271ceec);
  _objc_destroyWeak(param_1 + _DAT_11271ced8);
  _objc_destroyWeak(param_1 + _DAT_11271cea4);
  _objc_destroyWeak(param_1 + _DAT_11271cec0);
  _objc_destroyWeak(param_1 + _DAT_11271cee4);
  _objc_destroyWeak(param_1 + _DAT_11271cecc);
  _objc_destroyWeak(param_1 + _DAT_11271ced0);
  _objc_storeStrong(param_1 + _DAT_11271cedc,0);
  _objc_storeStrong(param_1 + _DAT_11271cec8,0);
  _objc_destroyWeak(param_1 + _DAT_11271cec4);
  _objc_destroyWeak(param_1 + _DAT_11271ced4);
  _objc_destroyWeak(param_1 + _DAT_11271cebc);
  _objc_destroyWeak(param_1 + _DAT_11271ceb8);
  _objc_destroyWeak(param_1 + _DAT_11271ceb0);
  _objc_destroyWeak(param_1 + _DAT_11271cef4);
  _objc_destroyWeak(param_1 + _DAT_11271ceb4);
  _objc_destroyWeak(param_1 + _DAT_11271cea8);
  _objc_destroyWeak(param_1 + _DAT_11271cea0);
  _objc_destroyWeak(param_1 + _DAT_11271ce9c);
  _objc_destroyWeak(param_1 + _DAT_11271ceac);
  _objc_destroyWeak(param_1 + _DAT_11271ce98);
  _objc_destroyWeak(param_1 + _DAT_11271ce94);
  _objc_storeStrong(param_1 + _DAT_11271cef0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cef8,0);
  return;
}



/* Entry: 1051324f0; end: 105132c0b; -[SCStoryQuickPostViewController initWithUserSession:onboardingManager:snapchattersDataFetcher:blockedSnapchattersFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:configuration:snapProPreferencesManager:circumstanceEngine:complianceEngine:featureSettingsService:myStoriesDataCoordinator:storyPrivacySettingManager:previewLegacyServices:imageDownloader:storyQuickPostScope:webBrowsingScopeExposer:previewTooltipsProvider:notificationManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:storiesBlizzardLogger:quickPostTooltipsService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:previewABProvider:snapSource:customStoryMenuScopeLauncher:customStoryMenuScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1051324f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain();
  _objc_retain(param_33);
  puStack_70 = PTR_PTR_1126e65b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271cefc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf00;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf04;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf08;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf0c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf10;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf14;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf18;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf1c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf20;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf24;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf28;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf2c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf30;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf34;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf38;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf3c;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf40;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_21;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf44;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271cf48);
    *(undefined **)((long)puVar1 + (long)_DAT_11271cf48) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf4c;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_23;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf50;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_24;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf54;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_25;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf58;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_26;
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010bf6b020(param_20);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271cf5c,uVar2);
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010bf643e0(param_20);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271cf60,uVar2);
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf64;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_27;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf68;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_28;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271cf6c,param_29);
    lVar4 = (long)_DAT_11271cf70;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271cf74;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_30;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271cf78) = param_31;
    lVar4 = (long)_DAT_11271cf7c;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_32;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271cf80,param_33);
    func_0x00010c128f20(puVar1);
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105132c0c; end: 105132ccb; -[SCStoryQuickPostViewController _viewFrame] */

undefined8 FUN_105132c0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  func_0x00010be9ed20(param_2);
  func_0x00010bec4d00(param_2);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105132ccc; end: 105132dfb; -[SCStoryQuickPostViewController _setupSendConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105132ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271cf84;
  if (*(long *)(param_5 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5158;
  _objc_alloc();
  func_0x00010be9ed20(param_5);
  lVar4 = (long)_DAT_11271cf60;
  lVar2 = param_5 + lVar4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c11e6c0();
  lVar4 = param_5 + lVar4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c11e6a0();
  func_0x00010c014d20(param_1,param_2,param_3,param_4);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c18e200(0,0,*(undefined8 *)(param_5 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar5),PTR_s_setDelegate__112640798,param_5);
  return;
}



/* Entry: 105132dfc; end: 105132eb7; -[SCStoryQuickPostViewController _sendConfirmationFrame] */

double FUN_105132dfc(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar1);
  func_0x00010bec4d00(param_3);
  return param_2 + param_1;
}



/* Entry: 105132eb8; end: 10513326f; -[SCStoryQuickPostViewController _setupStoryQuickPostView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105132eb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_70 [16];
  
  lVar7 = (long)_DAT_11271cf88;
  if (*(long *)(param_1 + lVar7) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5160;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271cefc);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007860();
  _objc_release(uVar2);
  lVar9 = (long)_DAT_11271cf60;
  uVar8 = param_1 + lVar9;
  _objc_loadWeakRetained();
  uVar3 = uVar8;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar9;
    _objc_loadWeakRetained();
    func_0x00010c11e660();
    _objc_release(lVar4);
  }
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126b5168;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11271cf6c;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11271cf80;
  _objc_loadWeakRetained();
  func_0x00010c05d5c0();
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  uVar8 = param_1 + lVar9;
  _objc_loadWeakRetained();
  uVar3 = uVar8;
  _objc_opt_respondsToSelector();
  _objc_release(uVar8);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c11e740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217ae0(*(undefined8 *)(param_1 + lVar7));
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  uVar8 = param_1 + lVar9;
  _objc_loadWeakRetained();
  uVar3 = uVar8;
  _objc_opt_respondsToSelector();
  _objc_release(uVar8);
  if ((uVar3 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + lVar7);
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar9);
    lVar4 = lVar9;
    func_0x00010c11e5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1588c0();
    _objc_release(lVar4);
    _objc_release(lVar9);
    if ((uVar8 & 1) != 0) goto LAB_1051331ec;
  }
  func_0x00010be79b60(param_1);
LAB_1051331ec:
  func_0x00010c1e1460(*(undefined8 *)(param_1 + lVar7));
  _objc_initWeak(auStack_70,param_1);
  _objc_retain();
  func_0x00010c20d820(*(undefined8 *)(param_1 + lVar7));
  _objc_release(param_1);
  func_0x00010bec4d00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar7));
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  return;
}



/* Entry: 105133270; end: 105133617; -[SCStoryQuickPostViewController _mostRecentCustomStorySelectionWithPostableCustomStories:lastMyStoryPostTimeInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133270(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  double dStack_58;
  
  dVar5 = param_1;
  func_0x00010c246ca0(param_4,param_3,&PTR___NSConcreteGlobalBlock_11086a948);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 < dVar5 + -2.0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    dVar6 = dVar5;
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3);
    iVar1 = (int)*(undefined8 *)(param_2 + _DAT_11271cf24);
    func_0x00010c067f00();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if ((long)(dVar6 / 60.0) <= (long)iVar1) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc0000000;
      pcStack_68 = FUN_105133618;
      puStack_60 = &UNK_11086a968;
      puVar2 = param_4;
      dStack_58 = dVar5;
      func_0x0001006372a4(param_4,&puStack_78);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105133618; end: 105133663;  */

bool FUN_105133618(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  
  func_0x00010c246f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  dVar1 = *(double *)(param_2 + 0x20);
  _objc_release(param_3);
  return param_1 == dVar1;
}



/* Entry: 105133664; end: 10513380f; -[SCStoryQuickPostViewController _preselectRecentlyPostedCustomStoriesIfNecessaryWithStoryQuickPostView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133664(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271cf2c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcace0();
  _objc_release();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105133810;
  uStack_60 = 0x105133820;
  uStack_58 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271cf0c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c1055a0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  func_0x00010c105f60(param_3);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105133810; end: 105133827;  */

void FUN_105133810(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105133828; end: 10513388f;  */

void FUN_105133828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be61240(*(undefined8 *)(param_1 + 0x38),uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105133890; end: 105133897;  */

void FUN_105133890(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 105133898; end: 105133953; -[SCStoryQuickPostViewController _storyQuickPostFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105133898(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  dVar2 = param_2 + param_1;
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 - param_2;
  _objc_release(lVar1);
  func_0x00010bf4c660(*(undefined8 *)(param_3 + _DAT_11271cf88));
  NEON_fminnm(param_1,0x4069000000000000);
  return dVar2;
}



/* Entry: 105133954; end: 105133a13; -[SCStoryQuickPostViewController didUpdateStoryQuickPostSelectionWithAddToMyStory:ourStorySelected:customStoriesSelected:businessProfilesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133954(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + _DAT_11271cf8c) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271cf90);
  *(undefined8 *)(param_1 + _DAT_11271cf90) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271cf94);
  *(undefined8 *)(param_1 + _DAT_11271cf94) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271cf98);
  *(undefined8 *)(param_1 + _DAT_11271cf98) = param_6;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bedfa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSendConfirmationView_112595828);
  return;
}



/* Entry: 105133a14; end: 105133a23; -[SCStoryQuickPostViewController didUpdateStoryQuickPostMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271cf84),PTR_s_forceUpdateRecipients_1125cae08);
  return;
}



/* Entry: 105133a24; end: 105133a6f; -[SCStoryQuickPostViewController didUpdateTotalStoriesCount] */

/* WARNING: Possible PIC construction at 0x000105133a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105133a58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133a24(long param_1)

{
  func_0x00010be8a8c0();
  func_0x00010bec9940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271cf88),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 105133a70; end: 105133a77; -[SCStoryQuickPostViewController didPressSend] */

void FUN_105133a70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didPressSendFromSource__1125bbc58,3);
  return;
}



/* Entry: 105133a78; end: 105133b4b; -[SCStoryQuickPostViewController didPressSendFromSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133a78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271cf60;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010c11e600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  param_1 = param_1 + _DAT_11271cf5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78aa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105133b4c; end: 105133b4f; -[SCStoryQuickPostViewController didPressSave] */

void FUN_105133b4c(void)

{
  return;
}



/* Entry: 105133b50; end: 105133b53; -[SCStoryQuickPostViewController didPressSendConfirmationBar:] */

void FUN_105133b50(void)

{
  return;
}



/* Entry: 105133b54; end: 105133b57; -[SCStoryQuickPostViewController didPressSuggestedFriend:] */

void FUN_105133b54(void)

{
  return;
}



/* Entry: 105133b58; end: 105133c83; -[SCStoryQuickPostViewController _reloadDestinationListIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010bec4d00();
  lVar4 = (long)_DAT_11271cf88;
  uVar1 = *(ulong *)(param_5 + lVar4);
  uVar3 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  func_0x00010bfb68e0();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar3,uVar5,uVar6,uVar7);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4));
  func_0x00010be9ed20(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11271cf84));
  func_0x00010bee9660(param_5);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c267f00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105133c84; end: 105133dab; -[SCStoryQuickPostViewController reloadQuickPost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271cf88;
  func_0x00010c12c960(*(undefined8 *)(param_5 + lVar4));
  lVar3 = (long)_DAT_11271cf84;
  func_0x00010c12c960(*(undefined8 *)(param_5 + lVar3));
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  *(undefined8 *)(param_5 + lVar4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  *(undefined8 *)(param_5 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010beb0000(param_5);
  func_0x00010beafac0(param_5);
  func_0x00010bee9660(param_5);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar4),param_6,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar3),param_6,1);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c237880(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105133dac; end: 105133e5b; -[SCStoryQuickPostViewController _syncDestinationSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133dac(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271cf88;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + lVar4);
  func_0x00010befc200();
  *(undefined1 *)(param_1 + _DAT_11271cf8c) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0ee420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271cf90);
  *(undefined8 *)(param_1 + _DAT_11271cf90) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf620e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271cf94);
  *(undefined8 *)(param_1 + _DAT_11271cf94) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271cf98);
  *(undefined8 *)(param_1 + _DAT_11271cf98) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bedfa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSendConfirmationView_112595828);
  return;
}



/* Entry: 105133e5c; end: 105133e7f; -[SCStoryQuickPostViewController _updateSendConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedfa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSendConfirmationViewWithA_112595830,
             *(undefined1 *)(param_1 + _DAT_11271cf8c),*(undefined8 *)(param_1 + _DAT_11271cf90),
             *(undefined8 *)(param_1 + _DAT_11271cf94),*(undefined8 *)(param_1 + _DAT_11271cf98));
  return;
}



/* Entry: 105133e80; end: 10513405f; -[SCStoryQuickPostViewController _updateSendConfirmationViewWithAddToMyStory:ourStorySelected:customStoriesSelected:businessProfilesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105133e80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar10 = (long)_DAT_11271cf88;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0ee420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105134060;
  puStack_70 = &UNK_11086aa58;
  uStack_68 = uVar1;
  _objc_retain(uVar1);
  uVar3 = uVar2;
  func_0x000100504554(uVar2,&puStack_88);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf620e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x000100504554();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf25220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000100504554();
  puVar7 = PTR_PTR_1126b5178;
  func_0x00010c15d0a0(PTR_PTR_1126b5178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7f20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8640(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aefa0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9b00(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271cf84);
  puVar8 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bf40(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105134060; end: 105134123;  */

void FUN_105134060(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c067fc0();
  puVar1 = PTR_PTR_1126b5170;
  _objc_alloc(PTR_PTR_1126b5170);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 2) {
    func_0x00010c24b1c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c020280(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105134124; end: 1051341ef;  */

void FUN_105134124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5170;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_release(param_2);
  func_0x000108438cec(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020280(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051341f0; end: 105134293;  */

void FUN_1051341f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5170;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c116a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c020280(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105134294; end: 1051342b3; -[SCStoryQuickPostViewController quickPostWorkFlowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105134294(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271cf5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051342b4; end: 1051342c7; -[SCStoryQuickPostViewController setQuickPostWorkFlowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051342b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271cf5c,param_3);
  return;
}



/* Entry: 1051342c8; end: 1051342e7; -[SCStoryQuickPostViewController quickPostWorkFlowDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051342c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271cf60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051342e8; end: 1051342fb; -[SCStoryQuickPostViewController setQuickPostWorkFlowDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051342e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271cf60,param_3);
  return;
}



/* Entry: 1051342fc; end: 10513430b; -[SCStoryQuickPostViewController sendConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051342fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cf84);
}



/* Entry: 10513430c; end: 10513434b; -[SCStoryQuickPostViewController setSendConfirmationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513430c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cf84;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513434c; end: 10513435b; -[SCStoryQuickPostViewController storyQuickPostView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10513434c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cf88);
}



/* Entry: 10513435c; end: 10513439b; -[SCStoryQuickPostViewController setStoryQuickPostView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513435c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cf88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513439c; end: 10513460b; -[SCStoryQuickPostViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513439c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271cf88,0);
  _objc_storeStrong(param_1 + _DAT_11271cf84,0);
  _objc_destroyWeak(param_1 + _DAT_11271cf60);
  _objc_destroyWeak(param_1 + _DAT_11271cf5c);
  _objc_destroyWeak(param_1 + _DAT_11271cf80);
  _objc_storeStrong(param_1 + _DAT_11271cf7c,0);
  _objc_storeStrong(param_1 + _DAT_11271cf74,0);
  _objc_storeStrong(param_1 + _DAT_11271cf70,0);
  _objc_storeStrong(param_1 + _DAT_11271cf64,0);
  _objc_storeStrong(param_1 + _DAT_11271cf98,0);
  _objc_storeStrong(param_1 + _DAT_11271cf94,0);
  _objc_storeStrong(param_1 + _DAT_11271cf90,0);
  _objc_storeStrong(param_1 + _DAT_11271cf1c,0);
  _objc_storeStrong(param_1 + _DAT_11271cf58,0);
  _objc_storeStrong(param_1 + _DAT_11271cf54,0);
  _objc_storeStrong(param_1 + _DAT_11271cf50,0);
  _objc_storeStrong(param_1 + _DAT_11271cf4c,0);
  _objc_storeStrong(param_1 + _DAT_11271cf48,0);
  _objc_storeStrong(param_1 + _DAT_11271cf44,0);
  _objc_storeStrong(param_1 + _DAT_11271cf40,0);
  _objc_storeStrong(param_1 + _DAT_11271cf3c,0);
  _objc_destroyWeak(param_1 + _DAT_11271cf6c);
  _objc_storeStrong(param_1 + _DAT_11271cf68,0);
  _objc_storeStrong(param_1 + _DAT_11271cf38,0);
  _objc_storeStrong(param_1 + _DAT_11271cf34,0);
  _objc_storeStrong(param_1 + _DAT_11271cf30,0);
  _objc_storeStrong(param_1 + _DAT_11271cf2c,0);
  _objc_storeStrong(param_1 + _DAT_11271cf28,0);
  _objc_storeStrong(param_1 + _DAT_11271cf24,0);
  _objc_storeStrong(param_1 + _DAT_11271cf18,0);
  _objc_storeStrong(param_1 + _DAT_11271cf20,0);
  _objc_storeStrong(param_1 + _DAT_11271cf14,0);
  _objc_storeStrong(param_1 + _DAT_11271cf10,0);
  _objc_storeStrong(param_1 + _DAT_11271cf0c,0);
  _objc_storeStrong(param_1 + _DAT_11271cf08,0);
  _objc_storeStrong(param_1 + _DAT_11271cf04,0);
  _objc_storeStrong(param_1 + _DAT_11271cf00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cefc,0);
  return;
}



/* Entry: 10513460c; end: 1051347f7; -[SCStoryQuickPostWorkflow initWithUserProfileIdProvider:snapProProfilesProvider:myStoriesDataCoordinator:userStorageServices:featureSettingsService:storyPrivacySettingManager:storyQuickPostScope:previewTooltipsProvider:storyQuickPostViewController:] */

undefined1 *
FUN_10513460c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e65c0;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051347f8; end: 1051347fb; -[SCStoryQuickPostWorkflow begin] */

void FUN_1051347f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec8650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToStoryQuickPostEvent_11258fb38);
  return;
}



/* Entry: 1051347fc; end: 1051348e7; -[SCStoryQuickPostWorkflow _subscribeToStoryQuickPostEvent] */

void FUN_1051347fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11e620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051348e8; end: 1051349d3;  */

void FUN_1051348e8(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051349d4;
  puStack_50 = &UNK_11086aa88;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bd600(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1051349d4; end: 105134a33;  */

void FUN_1051349d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79140();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105134a34; end: 105134a5f;  */

void FUN_105134a34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105134a60; end: 105134baf; -[SCStoryQuickPostWorkflow _prepareSendToStory:fromSource:confidentialFeatureDescription:] */

void FUN_105134a60(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdc480();
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_48);
    uStack_50 = (undefined1)uVar2;
    uStack_58 = param_4;
    _objc_retain(param_5);
    func_0x00010c11d780(uVar1);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bddd7e0(param_1);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105134bb0; end: 105134c5f;  */

void FUN_105134bb0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105134c60;
  puStack_58 = &UNK_11086aae8;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uStack_38 = *(undefined1 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_37 = param_2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105134c60; end: 105134cb7;  */

void FUN_105134c60(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x39) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  func_0x00010bddd7e0(lVar1,param_2,bVar2 & 1,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105134cb8; end: 105134dab; -[SCStoryQuickPostWorkflow _checkForConfidentialFeatureWithTryDirectlyPostToMyStory:fromSource:confidentialFeatureDescription:] */

void FUN_105134cb8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105134d10;
  puStack_30 = &UNK_11086ab48;
  uStack_28 = param_1;
  uStack_20 = param_4;
  uStack_18 = param_3;
  func_0x00010bf37ec0(param_1,param_2,param_5,&puStack_48);
  return;
}



/* Entry: 105134dac; end: 105134dcb;  */

void FUN_105134dac(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdd0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__attemptPostDirectlyToMyStory__112551cd0,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beba2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showOptionsForStoryPost_11258c260);
  return;
}



/* Entry: 105134dcc; end: 105134fb7; -[SCStoryQuickPostWorkflow checkForConfidentialFeatureWithDescription:completion:] */

void FUN_105134dcc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126af180;
  if (lVar5 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,1);
    }
  }
  else {
    _objc_retain(param_4);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af180;
    _objc_retain(param_4);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_3 + 0x20);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105134fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,1,0);
    return;
  }
  return;
}



/* Entry: 105134fb8; end: 105134fef;  */

void FUN_105134fb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105134fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
  return;
}



/* Entry: 105134ff0; end: 10513513f; -[SCStoryQuickPostWorkflow _attemptPostDirectlyToMyStory:] */

void FUN_105134ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_3;
  func_0x000108cb4a24();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be34a00();
  if ((int)uVar2 == 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105135140;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    _objc_copyWeak(auStack_98,auStack_58);
    uStack_90 = param_3;
    func_0x00010beba620(param_1);
    _objc_destroyWeak(auStack_98);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be768e0(param_1);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105135140; end: 105135207;  */

void FUN_105135140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190760();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e22a0();
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c1067a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c172fe0();
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    func_0x00010be768e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105135208; end: 10513528b;  */

void FUN_105135208(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190760();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e22a0();
      _objc_release(uVar2);
    }
    func_0x00010be7d680(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513528c; end: 1051353cb; -[SCStoryQuickPostWorkflow _showPostStoryPopUpDialog:cancelCompletion:] */

void FUN_10513528c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051353cc;
  puStack_60 = &UNK_1108498b0;
  uStack_58 = param_3;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be768c0(param_1,param_2,1,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1051353e0;
  puStack_88 = &UNK_1108498b0;
  uStack_80 = param_4;
  _objc_retain(param_4);
  uVar3 = param_1;
  func_0x00010be768c0(param_1,param_2,0,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108ede660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76920(param_1,param_2,uVar4,uVar2,uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


