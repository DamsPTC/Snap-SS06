/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106049654; end: 106049817;  */

void FUN_106049654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_2);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106049818; end: 106049a57;  */

void FUN_106049818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(uVar2);
  func_0x00010bf64de0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf44660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2bedc0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  if ((long)puVar4 < 0x19) {
    func_0x00010bf436e0(param_2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar11);
    _objc_retain(param_2);
    func_0x00010bf37da0(uVar1);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106049a58; end: 106049ccf;  */

void FUN_106049a58(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b1100;
    _objc_alloc(PTR_PTR_1126b1100);
    puVar3 = puVar2;
    FUN_106053ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c74b0;
    _objc_alloc(PTR_PTR_1126c74b0);
    func_0x00010c0330a0();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2b48;
    _objc_alloc();
    func_0x00010c000700();
    puVar6 = PTR_PTR_1126afda8;
    _objc_alloc();
    puVar7 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032260();
    _objc_release(puVar7);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar10);
  }
  lVar8 = *(long *)(param_1 + 0x50);
  func_0x00010bf436e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(lVar8 + 0x20);
  _objc_retain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 106049cd0; end: 106049cf7;  */

void FUN_106049cd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106049cf8; end: 106049d93; -[SCBloopsProfileOnboardingSectionObservingAnalytics initWithOnboardingAnalyticsTracker:withObservableSection:] */

undefined1 *
FUN_106049cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef438;
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



/* Entry: 106049d94; end: 106049df3; -[SCBloopsProfileOnboardingSectionObservingAnalytics dealloc] */

void FUN_106049d94(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255780();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ef438;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106049df4; end: 106049e5b; -[SCBloopsProfileOnboardingSectionObservingAnalytics start] */

void FUN_106049df4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bef9980();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106049e5c; end: 106049eb3; -[SCBloopsProfileOnboardingSectionObservingAnalytics stop] */

void FUN_106049e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12cf80();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106049eb4; end: 106049ee7; -[SCBloopsProfileOnboardingSectionObservingAnalytics willDisplaySection] */

void FUN_106049eb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106049ee8; end: 106049f1b; -[SCBloopsProfileOnboardingSectionObservingAnalytics didEndDisplaySection] */

void FUN_106049ee8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106049f1c; end: 106049f83; -[SCBloopsProfileOnboardingSectionObservingAnalytics didFinishLoadingContentWithId:forSourceType:hasCameos:] */

void FUN_106049f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106049f84; end: 10604a197; -[SCBloopsProfileOnboardingSectionObservingAnalytics didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106049f84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puRam00000001136c2c58 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puRam00000001136c2c58;
    puRam00000001136c2c58 = puVar3;
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  puVar3 = puRam00000001136c2c58;
  func_0x00010bf4b900();
  if ((int)puVar3 != 0) {
    if (puRam00000001136c2c60 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puRam00000001136c2c60;
      puRam00000001136c2c60 = puVar4;
      _objc_release(puVar3);
    }
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if ((uVar1 != 0) && (func_0x00010bf433a0(), uVar5 == 0)) {
      lVar7 = param_3;
      func_0x00010c0720c0();
      if ((int)lVar7 == 0) {
        lVar7 = param_3;
        func_0x00010c0720c0();
        if ((int)lVar7 != 0) {
          func_0x00010bf75840(param_1);
        }
      }
      else {
        func_0x00010c2a6200(param_1);
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10604a198; end: 10604a1c3; -[SCBloopsProfileOnboardingSectionObservingAnalytics .cxx_destruct] */

void FUN_10604a198(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10604a1c4; end: 10604a2af; -[SCMyUnifiedProfileMySelfieIntroSectionCreator initWithOrder:actionHandler:circumstanceEngine:genAIIdentityService:featureSettingsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10604a1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef440;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithOrder_actionHandler_sect_1125ea290,param_3,param_4,0)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273d90c),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273d910),param_6);
    lVar3 = (long)_DAT_11273d914;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10604a2b0; end: 10604a447; -[SCMyUnifiedProfileMySelfieIntroSectionCreator section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604a2b0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11273d918;
  lVar7 = *(long *)(param_1 + lVar9);
  if (lVar7 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e39db8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e39db8,
                        &PTR____CFConstantStringClassReference_110dc98b8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1100;
    _objc_alloc(PTR_PTR_1126b1100);
    ppuVar3 = ppuVar1;
    func_0x000108f728c0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar2);
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126b4328;
    _objc_alloc();
    func_0x00010c04f820();
    func_0x00010c1f9620();
    puVar5 = PTR_PTR_1126c74b8;
    _objc_alloc(PTR_PTR_1126c74b8);
    lVar7 = param_1 + _DAT_11273d910;
    _objc_loadWeakRetained(lVar7);
    lVar6 = param_1 + _DAT_11273d90c;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c017540(puVar5);
    _objc_release(lVar6);
    _objc_release(lVar7);
    func_0x00010c1f9240(puVar4);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar8);
    lVar7 = *(long *)(param_1 + lVar9);
    _objc_retain(lVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  else {
    _objc_retain(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10604a448; end: 10604a49f; -[SCMyUnifiedProfileMySelfieIntroSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604a448(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d914,0);
  _objc_storeStrong(param_1 + _DAT_11273d918,0);
  _objc_destroyWeak(param_1 + _DAT_11273d910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273d90c);
  return;
}



/* Entry: 10604a4a0; end: 10604a543; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler initWithGenAIOnboardingPresenter:featureSettingsService:] */

undefined1 *
FUN_10604a4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef448;
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



/* Entry: 10604a544; end: 10604a64f; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10604a544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
LAB_10604a62c:
    uVar4 = 0;
    goto LAB_10604a630;
  }
  uVar4 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((int)uVar3 != 0) goto LAB_10604a5e4;
    uVar4 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar2 == 0) goto LAB_10604a62c;
    func_0x00010bedf9a0(param_1);
  }
  else {
    _objc_release(uVar4);
LAB_10604a5e4:
    func_0x00010bec0740(param_1);
  }
  uVar4 = 1;
LAB_10604a630:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 10604a650; end: 10604a6af; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler _updateSelfieSharingPolicyToFriends] */

void FUN_10604a650(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191c40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604a6b0; end: 10604a72f; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler _startMySelfieOnboarding] */

void FUN_10604a6b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  uVar2 = uVar1;
  func_0x00010c106960(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d4a0(uVar1,param_2,uVar2,0x13);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604a730; end: 10604a747; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler presentingViewController] */

void FUN_10604a730(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604a748; end: 10604a753; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler setPresentingViewController:] */

void FUN_10604a748(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10604a754; end: 10604a78b; -[SCMyUnifiedProfileMySelfieOnboardingSectionActionHandler .cxx_destruct] */

void FUN_10604a754(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10604a78c; end: 10604a7db; -[SCUnifiedProfileBloopsImageCollectionViewCell initWithFrame:] */

undefined1 * FUN_10604a78c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef450;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c229880(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10604a7dc; end: 10604a7e3; -[SCUnifiedProfileBloopsImageCollectionViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_10604a7dc(void)

{
  return 0;
}



/* Entry: 10604a7e4; end: 10604a8af; +[SCUnifiedProfileBloopsImageCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10604a7e4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar5 = param_1;
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126c74c0;
  _objc_opt_class(PTR_PTR_1126c74c0);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c23d0a0(uVar4);
  dVar6 = 0.0;
  bVar2 = false;
  if ((dVar5 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar2 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar2 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar2) {
    dVar6 = (param_1 * param_2) / dVar5 + 0.0;
  }
  _objc_release(uVar4);
  _objc_release(param_5);
  auVar7._8_8_ = (long)dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10604a8b0; end: 10604a9fb; -[SCUnifiedProfileBloopsImageCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604a8b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11273d928;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar5 = param_3;
  if (uVar4 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_10604a9e4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c74c0;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar4 = uVar5;
    func_0x00010beeecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273d92c);
    *(ulong *)(param_1 + _DAT_11273d92c) = uVar4;
    _objc_release(uVar2);
    uVar4 = uVar5;
    func_0x00010bfe6ac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11273d930));
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10604a9e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10604a9fc; end: 10604aa27; -[SCUnifiedProfileBloopsImageCollectionViewCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604a9fc(long param_1)

{
  if (*(long *)(param_1 + _DAT_11273d92c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11273d934),
               PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
               *(long *)(param_1 + _DAT_11273d92c),param_1);
    return;
  }
  return;
}



/* Entry: 10604aa28; end: 10604ad57; -[SCUnifiedProfileBloopsImageCollectionViewCell setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10604aa28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_opt_new();
  lVar18 = (long)_DAT_11273d930;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar18),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar18),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar18),param_2,puVar2);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + _DAT_11273d928);
}



/* Entry: 10604ad58; end: 10604ad67; -[SCUnifiedProfileBloopsImageCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604ad58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d928);
}



/* Entry: 10604ad68; end: 10604ad77; -[SCUnifiedProfileBloopsImageCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604ad68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d934);
}



/* Entry: 10604ad78; end: 10604adb7; -[SCUnifiedProfileBloopsImageCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604ad78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d934;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604adb8; end: 10604ae17; -[SCUnifiedProfileBloopsImageCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604adb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d934,0);
  _objc_storeStrong(param_1 + _DAT_11273d928,0);
  _objc_storeStrong(param_1 + _DAT_11273d92c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d930,0);
  return;
}



/* Entry: 10604ae18; end: 10604ae23; +[SCMyUnifiedProfileMySelfieSectionDataProvider announcerIdentifier] */

undefined ** FUN_10604ae18(void)

{
  return &PTR____CFConstantStringClassReference_110e39e38;
}



/* Entry: 10604ae24; end: 10604ae2b; -[SCMyUnifiedProfileMySelfieSectionDataProvider addListener:] */

void FUN_10604ae24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10604ae2c; end: 10604ae33; -[SCMyUnifiedProfileMySelfieSectionDataProvider removeListener:] */

void FUN_10604ae2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10604ae34; end: 10604af13; -[SCMyUnifiedProfileMySelfieSectionDataProvider initWithGenAIIdentityService:circumstanceEngine:featureSettingsService:] */

undefined1 *
FUN_10604ae34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef458;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604af14; end: 10604b0ef; -[SCMyUnifiedProfileMySelfieSectionDataProvider setUp] */

void FUN_10604af14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfbe880();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10604b0f0;
  puStack_78 = &UNK_110842a38;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf8a5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10604b0f0; end: 10604b157;  */

void FUN_10604b0f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be88940(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10604b158; end: 10604b267; -[SCMyUnifiedProfileMySelfieSectionDataProvider dealloc] */

void FUN_10604b158(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c281a60(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  puStack_118 = PTR_PTR_1126ef458;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be88950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10604b268; end: 10604b26b; -[SCMyUnifiedProfileMySelfieSectionDataProvider setSectionDataModel:] */

void FUN_10604b268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshSectionItems_11257fbf0);
  return;
}



/* Entry: 10604b26c; end: 10604b273; -[SCMyUnifiedProfileMySelfieSectionDataProvider numberOfItemsInSection:] */

void FUN_10604b26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10604b274; end: 10604b2d3; -[SCMyUnifiedProfileMySelfieSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10604b274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0744c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010be585a0(param_1);
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 10604b2d4; end: 10604b323; -[SCMyUnifiedProfileMySelfieSectionDataProvider _logSelfieLoadedOverrideOnce] */

void FUN_10604b2d4(long param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar1 = PTR_PTR_1126b0c28;
  _objc_opt_new(PTR_PTR_1126b0c28);
  func_0x000108c7a5d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10604b324; end: 10604b3bb; -[SCMyUnifiedProfileMySelfieSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10604b324(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e39df8;
  puVar1 = PTR_PTR_1126c74c8;
  _objc_opt_class();
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e39dd8;
  puVar2 = PTR_PTR_1126c74d0;
  puStack_28 = puVar1;
  _objc_opt_class();
  ppuVar3 = &puStack_28;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_48 = FUN_10604b3bc;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10604b410;
    puStack_60 = &UNK_110845ab0;
    puStack_58 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000100504554(ppuVar3,&puStack_78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604b3bc; end: 10604b40f; -[SCMyUnifiedProfileMySelfieSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10604b3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10604b410;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604b410; end: 10604b43b;  */

void FUN_10604b410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bde81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__contentViewModelForIndexPathIte_112557a08,param_2);
  return;
}



/* Entry: 10604b43c; end: 10604b443; -[SCMyUnifiedProfileMySelfieSectionDataProvider shouldRecalculateSectionHeightWithViewModelUpdates] */

undefined8 FUN_10604b43c(void)

{
  return 1;
}



/* Entry: 10604b444; end: 10604b513; -[SCMyUnifiedProfileMySelfieSectionDataProvider _refreshSectionItems] */

void FUN_10604b444(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0744c0();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117fe58;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf8a580();
    _objc_release(uVar1);
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117fe40;
    if ((int)uVar3 == 1) {
      func_0x00010bf09f60(&PTR__OBJC_CLASS___NSConstantArray_11117fe40,param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4528);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined ***)(param_1 + 0x18) = ppuVar2;
  _objc_release(uVar3);
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10604b514; end: 10604b743; -[SCMyUnifiedProfileMySelfieSectionDataProvider _contentViewModelForIndexPathItem:] */

void FUN_10604b514(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (param_3 < uVar2) {
      lVar1 = *(long *)(param_1 + 0x18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c2827c0();
      _objc_release(lVar1);
      if (lVar3 < 2) {
        if (lVar3 == 0) {
          func_0x00010be5e4e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_1;
          goto LAB_10604b72c;
        }
        if (lVar3 != 1) goto LAB_10604b72c;
        ppuVar5 = &PTR____CFConstantStringClassReference_110e39e58;
        func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e39e58,
                            &PTR____CFConstantStringClassReference_110dc98b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110e39e78;
        func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e39e78,
                            &PTR____CFConstantStringClassReference_110dc98b8,0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        func_0x00010c01b460();
        func_0x00010be36ac0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      else {
        if (lVar3 == 2) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e39eb8;
          func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e39eb8,
                              &PTR____CFConstantStringClassReference_110dc98b8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = (undefined **)PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
          func_0x00010c01b460();
        }
        else {
          if (lVar3 != 3) goto LAB_10604b72c;
          ppuVar5 = &PTR____CFConstantStringClassReference_110e39ed8;
          func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e39ed8,
                              &PTR____CFConstantStringClassReference_110dc98b8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = (undefined **)PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
          func_0x00010c01b460();
        }
        func_0x00010be36ac0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      lVar1 = param_1;
      goto LAB_10604b72c;
    }
  }
  lVar1 = 0;
LAB_10604b72c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10604b744; end: 10604b7db; -[SCMyUnifiedProfileMySelfieSectionDataProvider _mediaContainerCellViewModel] */

void FUN_10604b744(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126c74c0;
  _objc_alloc(PTR_PTR_1126c74c0);
  func_0x00010c0530c0();
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10604b7dc; end: 10604b993; -[SCMyUnifiedProfileMySelfieSectionDataProvider _iconTitleContainerCellViewModelWithTitle:subtitle:iconImageViewModel:actionModel:] */

void FUN_10604b7dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2c10;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x000108f62f68(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_4;
    func_0x000108f634a8(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126c74d8;
  _objc_alloc();
  func_0x00010c0220e0(0x4038000000000000,0x4038000000000000,0x4033000000000000,0x402e000000000000,
                      0x402e000000000000,0x4034000000000000,0x404c000000000000,0x4030000000000000);
  func_0x00010c053700(puVar1,param_2,lVar5,lVar6,param_5,0,0,param_6,0,0,0,puVar4,0,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar4);
  if (lVar3 != 0) {
    _objc_release(lVar6);
  }
  if (lVar2 != 0) {
    _objc_release(lVar5);
  }
  puVar4 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10604b994; end: 10604b9ab; -[SCMyUnifiedProfileMySelfieSectionDataProvider dataProviderDelegate] */

void FUN_10604b994(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604b9ac; end: 10604b9b7; -[SCMyUnifiedProfileMySelfieSectionDataProvider setDataProviderDelegate:] */

void FUN_10604b9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10604b9b8; end: 10604b9bf; -[SCMyUnifiedProfileMySelfieSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10604b9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10604b9c0; end: 10604b9ef; -[SCMyUnifiedProfileMySelfieSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10604b9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604b9f0; end: 10604b9f7; -[SCMyUnifiedProfileMySelfieSectionDataProvider sectionDataModel] */

undefined8 FUN_10604b9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10604b9f8; end: 10604ba7f; -[SCMyUnifiedProfileMySelfieSectionDataProvider .cxx_destruct] */

void FUN_10604b9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 10604ba80; end: 10604bb57; -[SCUnifiedProfileBloopsOnboardingViewModel initWithTitle:image:actionModel:] */

undefined1 *
FUN_10604ba80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef460;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604bb58; end: 10604bb7b; -[SCUnifiedProfileBloopsOnboardingViewModel copyWithZone:] */

undefined8 FUN_10604bb58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10604bb7c; end: 10604bbfb; -[SCUnifiedProfileBloopsOnboardingViewModel hash] */

undefined8 * FUN_10604bb7c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10604bc94:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10604bca0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10604bca0;
          }
          goto LAB_10604bc94;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10604bca0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10604bbfc; end: 10604bcbb; -[SCUnifiedProfileBloopsOnboardingViewModel isEqual:] */

long FUN_10604bbfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10604bc94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10604bca0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10604bca0;
          }
          goto LAB_10604bc94;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10604bca0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10604bcbc; end: 10604bcc3; -[SCUnifiedProfileBloopsOnboardingViewModel title] */

undefined8 FUN_10604bcbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10604bcc4; end: 10604bccb; -[SCUnifiedProfileBloopsOnboardingViewModel image] */

undefined8 FUN_10604bcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10604bccc; end: 10604bcd3; -[SCUnifiedProfileBloopsOnboardingViewModel actionModel] */

undefined8 FUN_10604bccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10604bcd4; end: 10604bd0f; -[SCUnifiedProfileBloopsOnboardingViewModel .cxx_destruct] */

void FUN_10604bcd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10604bd10; end: 10604c243; -[SCPayoutsProfileCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604bd10(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11273d970;
  uVar9 = *(ulong *)(param_1 + lVar10);
  _objc_retain(uVar9);
  _objc_retain(param_3);
  uVar11 = param_3;
  if (uVar9 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar9);
    }
    else {
      uVar11 = uVar9;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar9);
      if ((uVar11 & 1) != 0) goto LAB_10604c1f0;
    }
    puVar2 = PTR_PTR_1126c74e0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar11 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar9 = param_3;
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = param_3;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_11273d974;
    if (*(long *)(param_1 + lVar10) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(0,0,0x4044000000000000,0x4044000000000000);
      lVar12 = (long)_DAT_11273d978;
      uVar3 = *(undefined8 *)(param_1 + lVar12);
      *(undefined **)(param_1 + lVar12) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126ae568;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11273d97c);
      *(undefined **)(param_1 + (long)_DAT_11273d97c) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126b0648;
      _objc_alloc();
      func_0x00010c01cb60();
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      *(undefined **)(param_1 + lVar10) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126aebd8;
      func_0x00010c14e320(PTR_PTR_1126aebd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11273d980);
      puVar4 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      uVar11 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar4);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      func_0x00010bf88c20(uVar3);
      _objc_release(puVar4);
      _objc_release(uVar11);
      func_0x00010c19f0e0(0x4020000000000000,0x4020000000000000,0x4038000000000000,
                          0x4038000000000000,*(undefined8 *)(param_1 + lVar10));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar12));
      puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(param_1);
      _objc_release(puVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar2);
    }
    lVar10 = (long)_DAT_11273d984;
    if (*(long *)(param_1 + lVar10) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c013de0(0,0,0x4038000000000000,0x4038000000000000);
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      *(undefined **)(param_1 + lVar10) = puVar2;
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c182220(uVar5);
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf33840();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bfe77e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar10));
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar10));
      _objc_release(puVar2);
    }
    func_0x00010c20eaa0(param_1);
    uVar11 = uVar9;
    func_0x00010c2716a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(uVar8);
    _objc_release(uVar11);
    uVar11 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(uVar11);
    uVar11 = uVar9;
    func_0x00010c233d00();
    iVar1 = (int)uVar11;
    if (iVar1 == 0) {
      uVar11 = 0;
    }
    else {
      FUN_10604c698();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ed60();
    _objc_release(uVar8);
    if (iVar1 != 0) {
      _objc_release(uVar11);
    }
    uVar11 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(uVar11);
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    uVar11 = param_1;
  }
  _objc_release(uVar11);
  _objc_release(uVar9);
LAB_10604c1f0:
  _objc_release(param_3);
  return;
}



/* Entry: 10604c244; end: 10604c29f;  */

void FUN_10604c244(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedccc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10604c2a0; end: 10604c367; -[SCPayoutsProfileCollectionViewCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604c2a0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c74e0;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d970);
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
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273d988);
    func_0x00010beeecc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604c368; end: 10604c36f; -[SCPayoutsProfileCollectionViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_10604c368(void)

{
  return 0;
}



/* Entry: 10604c370; end: 10604c3ef; +[SCPayoutsProfileCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10604c370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c74e0;
  _objc_opt_class(PTR_PTR_1126c74e0);
  lVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  bVar1 = ((uint)(param_4 != 0) & (uint)lVar3) == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar4 = 0x4052800000000000;
  if (bVar1) {
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10604c3f0; end: 10604c4f7; -[SCPayoutsProfileCollectionViewCell _updatePayoutsIconWithImage:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604c3f0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(ulong *)(param_1 + _DAT_11273d970);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  if (uVar3 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar3);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar3);
      goto LAB_10604c4d8;
    }
    uVar1 = uVar3;
    func_0x00010c071ae0();
    _objc_release(param_4);
    _objc_release(uVar3);
    if ((int)uVar1 == 0) goto LAB_10604c4d8;
  }
  puVar2 = PTR_PTR_1126c74e0;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  _objc_release(param_4);
  if ((param_4 != 0) && ((uVar3 & 1) != 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273d97c));
  }
LAB_10604c4d8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10604c4f8; end: 10604c507; -[SCPayoutsProfileCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604c4f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d970);
}



/* Entry: 10604c508; end: 10604c517; -[SCPayoutsProfileCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604c508(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d988);
}



/* Entry: 10604c518; end: 10604c557; -[SCPayoutsProfileCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604c518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d988;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604c558; end: 10604c567; -[SCPayoutsProfileCollectionViewCell onDemandResourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604c558(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d980);
}



/* Entry: 10604c568; end: 10604c5a7; -[SCPayoutsProfileCollectionViewCell setOnDemandResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604c568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d980;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604c5a8; end: 10604c5b7; -[SCPayoutsProfileCollectionViewCell circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604c5a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d98c);
}



/* Entry: 10604c5b8; end: 10604c5f7; -[SCPayoutsProfileCollectionViewCell setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604c5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d98c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604c5f8; end: 10604c697; -[SCPayoutsProfileCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604c5f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d98c,0);
  _objc_storeStrong(param_1 + _DAT_11273d980,0);
  _objc_storeStrong(param_1 + _DAT_11273d988,0);
  _objc_storeStrong(param_1 + _DAT_11273d970,0);
  _objc_storeStrong(param_1 + _DAT_11273d984,0);
  _objc_storeStrong(param_1 + _DAT_11273d978,0);
  _objc_storeStrong(param_1 + _DAT_11273d97c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d974,0);
  return;
}



/* Entry: 10604c698; end: 10604c6df;  */

void FUN_10604c698(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e39f58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e39f58,
                      &PTR____CFConstantStringClassReference_110e39f38,0);
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



/* Entry: 10604c6e0; end: 10604c7a3; -[SCPayoutsCollectionViewCellViewModel initWithTitleText:actionModel:shouldShowNewBadge:forceUpdateState:] */

undefined1 *
FUN_10604c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef468;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604c7a4; end: 10604c7c7; -[SCPayoutsCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_10604c7a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10604c7c8; end: 10604c847; -[SCPayoutsCollectionViewCellViewModel hash] */

undefined8 * FUN_10604c7c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10604c8e8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10604c8f4;
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
          goto LAB_10604c8f4;
        }
        goto LAB_10604c8e8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10604c8f4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10604c848; end: 10604c90f; -[SCPayoutsCollectionViewCellViewModel isEqual:] */

long FUN_10604c848(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10604c8e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10604c8f4;
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
          goto LAB_10604c8f4;
        }
        goto LAB_10604c8e8;
      }
    }
    lVar3 = 0;
  }
LAB_10604c8f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10604c910; end: 10604c917; -[SCPayoutsCollectionViewCellViewModel titleText] */

undefined8 FUN_10604c910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10604c918; end: 10604c91f; -[SCPayoutsCollectionViewCellViewModel actionModel] */

undefined8 FUN_10604c918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10604c920; end: 10604c927; -[SCPayoutsCollectionViewCellViewModel shouldShowNewBadge] */

undefined1 FUN_10604c920(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10604c928; end: 10604c92f; -[SCPayoutsCollectionViewCellViewModel forceUpdateState] */

undefined1 FUN_10604c928(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10604c930; end: 10604c95f; -[SCPayoutsCollectionViewCellViewModel .cxx_destruct] */

void FUN_10604c930(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10604c960; end: 10604ca1b; -[SCMyUnifiedProfileSpectaclesActionHandler initWithSpectaclesAppStatusProvider:spectaclesHomeScopeExposer:homeScopeServices:] */

undefined1 *
FUN_10604c960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604ca1c; end: 10604cb23; -[SCMyUnifiedProfileSpectaclesActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10604ca1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
LAB_10604caf8:
    uVar4 = 0;
  }
  else {
    uVar4 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar3 == 0) {
      uVar4 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      if ((int)uVar3 == 0) goto LAB_10604caf8;
      func_0x00010be90820(param_1,param_2,lVar2);
    }
    else {
      func_0x00010bebb020(param_1,param_2,lVar2);
    }
    uVar4 = 1;
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 10604cb24; end: 10604cc13; -[SCMyUnifiedProfileSpectaclesActionHandler _showSpectaclesHomeWithDevice:] */

void FUN_10604cb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c071800();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar3,param_2,lVar1,1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf22e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10604cc14; end: 10604cc83; -[SCMyUnifiedProfileSpectaclesActionHandler _requestAbortFlight:] */

void FUN_10604cc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb2940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010c134740(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10604cc84; end: 10604cc87; -[SCMyUnifiedProfileSpectaclesActionHandler spectaclesHomeScopeWantsToDismiss:] */

void FUN_10604cc84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSpectaclesHomeScope_112580ec8);
  return;
}



/* Entry: 10604cc88; end: 10604cc8b; -[SCMyUnifiedProfileSpectaclesActionHandler spectaclesHomeScopeDidDismiss:] */

void FUN_10604cc88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSpectaclesHomeScope_112580ec8);
  return;
}



/* Entry: 10604cc8c; end: 10604cd23; -[SCMyUnifiedProfileSpectaclesActionHandler _removeSpectaclesHomeScope] */

void FUN_10604cc8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c071800();
  if ((int)lVar2 != 0) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      return;
    }
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10604cd24; end: 10604cd3b; -[SCMyUnifiedProfileSpectaclesActionHandler presentingViewController] */

void FUN_10604cd24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604cd3c; end: 10604cd47; -[SCMyUnifiedProfileSpectaclesActionHandler setPresentingViewController:] */

void FUN_10604cd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10604cd48; end: 10604cd83; -[SCMyUnifiedProfileSpectaclesActionHandler .cxx_destruct] */

void FUN_10604cd48(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


