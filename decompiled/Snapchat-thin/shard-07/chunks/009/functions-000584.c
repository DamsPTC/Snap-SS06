/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ad04b0; end: 105ad0553;  */

void FUN_105ad04b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15de20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ad0554; end: 105ad06e7; -[SCStoriesEverywhereNotificationHandler _mixedCarouselPlayFriendStory:allStories:itemSource:triggeringSection:triggerItemId:] */

void FUN_105ad0554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000108f4fe1c(param_3,0,2,param_7,0xffffffffffffffff,param_6,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2710);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2108;
  _objc_alloc(PTR_PTR_1126c2108);
  puVar3 = PTR_PTR_1126c2138;
  func_0x00010bfb8fe0(PTR_PTR_1126c2138);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01dd20(puVar2);
  _objc_release(param_4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ad06e8;
  puStack_70 = &UNK_110848ba8;
  uStack_68 = param_7;
  uStack_60 = param_1;
  puStack_58 = puVar3;
  _objc_retain();
  _objc_retain(param_7);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(puStack_58);
  _objc_release(uStack_68);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ad06e8; end: 105ad06f7;  */

void FUN_105ad06e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__sendActionModelToActionHandler__112585370,
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 105ad06f8; end: 105ad0847; -[SCStoriesEverywhereNotificationHandler _handleDiscoverFeedStoryNotificationPressed:] */

void FUN_105ad06f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107b01540();
  lVar1 = 0x10;
  if ((int)uVar2 == 0) {
    lVar1 = 8;
  }
  uVar6 = *(undefined8 *)((long)&PTR_PTR_110a08b80 + lVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf38cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c25baa0(uVar7,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b1118;
  _objc_alloc(PTR_PTR_1126b1118);
  _objc_retain(&PTR____CFConstantStringClassReference_110eb5658);
  func_0x00010c043160(puVar5,param_2,&PTR____CFConstantStringClassReference_110eb5658,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2710);
  _objc_release(&PTR____CFConstantStringClassReference_110eb5658);
  func_0x00010be5afc0(param_1,param_2,param_3,puVar5,uVar6,uVar4);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105ad0848; end: 105ad0a47; -[SCStoriesEverywhereNotificationHandler _lookupStory:sectionKey:identifier:cheetahStory:] */

void FUN_105ad0848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = param_3;
  func_0x00010bf38cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105ad0a48;
  puStack_98 = &UNK_1108d3de0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_6);
  uStack_78 = param_6;
  func_0x00010846f16c(uVar3,3,&PTR____CFConstantStringClassReference_110e1c6f8,uVar2,uVar1,uVar4,0,
                      PTR___dispatch_main_q_11034be20,&puStack_b0,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x90));
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad0a48; end: 105ad0a9f;  */

void FUN_105ad0a48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad0aa0; end: 105ad0d93; -[SCStoriesEverywhereNotificationHandler _handleStoryLookupSuccessResponseWithStory:sectionKey:identifier:notification:cheetahStory:] */

void FUN_105ad0aa0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  ppuVar6 = &puStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_6;
  func_0x00010c11c420();
  lVar2 = param_3;
  if (lVar1 == 0x98) {
    func_0x000107aff5c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_6;
    func_0x00010c11c420();
    if (lVar1 != 0x73) goto LAB_105ad0b68;
    func_0x000107aff608(param_3,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  param_3 = lVar2;
LAB_105ad0b68:
  lVar1 = param_7;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  _objc_retain(lVar1);
  puVar4 = PTR_PTR_1126afca8;
  if (lVar1 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1c718;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar4);
    _objc_release(ppuVar6);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a660(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_initWeak(auStack_78,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105ad0d94;
    puStack_98 = &UNK_110848218;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(lVar1);
    lStack_90 = lVar1;
    _objc_retain(param_6);
    lStack_88 = param_6;
    _objc_retainBlock(&puStack_b0);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(lVar1);
    func_0x00010c0df880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79a40(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar6);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010be609c0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ad0d94; end: 105ad0dcf;  */

void FUN_105ad0d94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be609c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ad0dd0; end: 105ad0f67; -[SCStoriesEverywhereNotificationHandler _mixedCarouselPlayLookupStory:notification:] */

void FUN_105ad0dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2138;
  func_0x00010bf822a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(lVar2);
  func_0x00010bfa8b60(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad0f68; end: 105ad0fbb;  */

void FUN_105ad0f68(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be609a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad0fbc; end: 105ad1087; -[SCStoriesEverywhereNotificationHandler _mixedCarouselPlayInitialNonfriendStory:loggingInfo:mixedCarouselStories:] */

void FUN_105ad0fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2108;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01dd20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be9e720(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ad1088; end: 105ad109b; -[SCStoriesEverywhereNotificationHandler _sendActionModelToActionHandler:fromSourceView:] */

void FUN_105ad1088(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_handleActionWithSender_actionMod_1125d19f8,
             param_1,param_3,0);
  return;
}



/* Entry: 105ad109c; end: 105ad11a7; -[SCStoriesEverywhereNotificationHandler _prependStoryToMixedCarouselRankedStoryIds:completion:] */

void FUN_105ad109c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ad11a8;
  puStack_50 = &UNK_11085adb8;
  _objc_retain(param_3);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105ad125c;
  puStack_80 = &UNK_110858070;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar2,param_2,&puStack_68,0,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad11a8; end: 105ad125b;  */

void FUN_105ad11a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084ec534(param_2,puVar1,1,2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ad1268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ad125c; end: 105ad126f;  */

void FUN_105ad125c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ad1268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ad1270; end: 105ad135b; -[SCStoriesEverywhereNotificationHandler _storyLoggingInfoForStory:notification:] */

void FUN_105ad1270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c2140;
  _objc_retain(param_4);
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c0dc140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbc20(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = param_4;
  func_0x000107b01540();
  _objc_release(param_4);
  uVar2 = 0x45;
  if ((int)uVar3 != 0) {
    uVar2 = 0x46;
  }
  func_0x00010c2bbc40(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ad135c; end: 105ad1373; -[SCStoriesEverywhereNotificationHandler presentingViewController] */

void FUN_105ad135c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ad1374; end: 105ad146b; -[SCStoriesEverywhereNotificationHandler .cxx_destruct] */

void FUN_105ad1374(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ad146c; end: 105ad1593; -[SCStoriesEverywherePaginationController initWithDataFetcher:queryResultController:] */

undefined1 *
FUN_105ad146c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebc88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ad1594; end: 105ad166b; -[SCStoriesEverywherePaginationController startPaginationWithPageSessionId:] */

void FUN_105ad1594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad166c; end: 105ad169f;  */

void FUN_105ad166c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad16a0; end: 105ad16a3; -[SCStoriesEverywherePaginationController endPaginationIfNeededForQuery:] */

void FUN_105ad16a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performRemovalOfPendingPaginati_11257a2f8);
  return;
}



/* Entry: 105ad16a4; end: 105ad1807; -[SCStoriesEverywherePaginationController _performPaginationWithPageSessionId:] */

void FUN_105ad16a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar5 = *(ulong *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x106);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar5,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar5 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c1559e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bfd9420();
    _objc_release(uVar6);
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x106);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b1158;
      _objc_alloc(PTR_PTR_1126b1158);
      puVar4 = PTR_PTR_1126c2130;
      _objc_alloc(PTR_PTR_1126c2130);
      func_0x00010c012700();
      func_0x00010c03c440(puVar1,param_2,&PTR____CFConstantStringClassReference_110e655d8,0,0,0,
                          puVar4);
      func_0x00010c1e6360(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ad1808; end: 105ad1967; -[SCStoriesEverywherePaginationController _performRemovalOfPendingPaginationWithQuery:] */

void FUN_105ad1808(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010bfa4340();
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = uVar2;
      func_0x00010c0f7fc0(uVar6);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad1968; end: 105ad199b;  */

void FUN_105ad1968(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad199c; end: 105ad1a43; -[SCStoriesEverywherePaginationController _removePendingPagination:] */

void FUN_105ad199c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105ad1a44; end: 105ad1a8b; -[SCStoriesEverywherePaginationController .cxx_destruct] */

void FUN_105ad1a44(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ad1a8c; end: 105ad2637; -[SCStoriesEverywhereScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad1a8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
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
  undefined *puVar37;
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
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  undefined8 uVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar1 = param_1;
  FUN_105ad2638();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = param_1;
  func_0x00010be8ee20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdc4380();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2148;
  _objc_alloc();
  lVar54 = (long)_DAT_11272f098;
  lVar1 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar59 = lVar8;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272f09c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_11272f0a0;
  lVar11 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11272f0a4;
  _objc_loadWeakRetained();
  lVar56 = lVar13;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272f0a8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11272f0ac;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272f0b0;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11272f0b4;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11272f0b8;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11272f0bc;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11272f0c0;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272f0c4;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11272f0c8;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c2585c0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11272f0cc;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bf4cbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11272f0d0;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cd40();
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
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar56);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar59);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar36 = param_1;
  func_0x00010be852c0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126c2150;
  _objc_alloc();
  lVar56 = (long)_DAT_11272f0d4;
  lVar1 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar38 = lVar1;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar39 = lVar55;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272f0d8;
  _objc_loadWeakRetained();
  lVar40 = lVar8;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar41 = lVar9;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272f0dc;
  _objc_loadWeakRetained();
  lVar42 = lVar11;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11272f0e0;
  _objc_loadWeakRetained();
  lVar43 = lVar13;
  func_0x00010c107680();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  FUN_105ad2638();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar44;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  FUN_105ad2638();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar31;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = (long)_DAT_11272f0e4;
  lVar14 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar27 = lVar14;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar25 = lVar16;
  func_0x00010bf41d20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272f0e8;
  _objc_loadWeakRetained();
  lVar15 = lVar18;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11272f0ec;
  _objc_loadWeakRetained();
  lVar19 = lVar20;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar21 = lVar22;
  func_0x00010bf99fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11272f0f0;
  _objc_loadWeakRetained();
  lVar23 = lVar24;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11272f0f4;
  _objc_loadWeakRetained();
  lVar17 = lVar26;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar45 = lVar54;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272f0f8;
  _objc_loadWeakRetained();
  lVar46 = lVar28;
  func_0x00010c258ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11272f0fc;
  _objc_loadWeakRetained();
  lVar47 = lVar30;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11272f100;
  _objc_loadWeakRetained();
  lVar48 = lVar32;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11272f104;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar49 = lVar7;
  func_0x00010bf9a540();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar50 = lVar59;
  func_0x00010bf82700();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11272f108;
  _objc_loadWeakRetained();
  lVar51 = lVar10;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272f10c;
  _objc_loadWeakRetained();
  lVar52 = lVar12;
  func_0x00010bfba200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar60 = 0;
  }
  else {
    lVar60 = param_1 + _DAT_11272f18c;
    _objc_loadWeakRetained();
  }
  lVar53 = lVar60;
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f80();
  lVar58 = (long)_DAT_11272f110;
  uVar57 = *(undefined8 *)(param_1 + lVar58);
  *(undefined **)(param_1 + lVar58) = puVar37;
  _objc_release(uVar57);
  _objc_release(lVar53);
  _objc_release(lVar60);
  _objc_release(lVar52);
  _objc_release(lVar12);
  _objc_release(lVar51);
  _objc_release(lVar10);
  _objc_release(lVar50);
  _objc_release(lVar59);
  _objc_release(lVar49);
  _objc_release(lVar7);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar48);
  _objc_release(lVar32);
  _objc_release(lVar47);
  _objc_release(lVar30);
  _objc_release(lVar46);
  _objc_release(lVar28);
  _objc_release(lVar45);
  _objc_release(lVar54);
  _objc_release(lVar17);
  _objc_release(lVar26);
  _objc_release(lVar23);
  _objc_release(lVar24);
  _objc_release(lVar21);
  _objc_release(lVar22);
  _objc_release(lVar19);
  _objc_release(lVar20);
  _objc_release(lVar15);
  _objc_release(lVar18);
  _objc_release(lVar25);
  _objc_release(lVar16);
  _objc_release(lVar27);
  _objc_release(lVar14);
  _objc_release(lVar29);
  _objc_release(lVar31);
  _objc_release(lVar33);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar13);
  _objc_release(lVar42);
  _objc_release(lVar11);
  _objc_release(lVar41);
  _objc_release(lVar9);
  _objc_release(lVar40);
  _objc_release(lVar8);
  _objc_release(lVar39);
  _objc_release(lVar55);
  _objc_release(lVar38);
  _objc_release(lVar1);
  lVar56 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar1 = lVar56;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c09c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar56);
  lVar1 = lVar8;
  func_0x00010c09c780();
  if ((int)lVar1 != 0) {
    uVar57 = *(undefined8 *)(param_1 + lVar58);
    func_0x00010bfaa7a0(lVar8);
    lVar1 = lVar8;
    func_0x00010bfaa7e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c7e0(uVar57);
    _objc_release(lVar1);
  }
  func_0x00010be4c700(param_1);
  func_0x00010be39220(param_1);
  _objc_release(lVar8);
  _objc_release(lVar36);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105ad2638; end: 105ad265b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad2638(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272f0d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ad265c; end: 105ad26a3;  */

void FUN_105ad265c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ad26a4; end: 105ad30db; -[SCStoriesEverywhereScopeEntryPoint _createActionHandlerForPageType:actionHandlersFuture:replayManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad26a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + _DAT_11272f0a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c2158;
  _objc_alloc();
  lVar70 = (long)_DAT_11272f098;
  lVar1 = param_1 + lVar70;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272f114;
  _objc_loadWeakRetained(lVar5);
  lVar65 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar65;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cd60();
  _objc_release(lVar6);
  _objc_release(lVar65);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11272f118;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126b1170;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272f11c;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480();
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126c2160;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272f120;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272f0dc;
  _objc_loadWeakRetained();
  lVar12 = lVar5;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = (long)_DAT_11272f0f8;
  lVar4 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar13 = lVar4;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar14 = lVar65;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_11272f0f0;
  lVar6 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar15 = lVar6;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11272f0f4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272f0e4;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar22 = lVar70;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar23 = lVar66;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = (long)_DAT_11272f0e0;
  lVar24 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar26 = lVar67;
  func_0x00010bf40000();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272f128;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11272f0ac;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11272f0d8;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_11272f12c;
  lVar34 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c2527c0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar36 = lVar68;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_11272f0c4;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = (long)_DAT_11272f0b0;
  lVar39 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_11272f130;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_11272f0a4;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_11272f0a8;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar47 = lVar69;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11272f09c;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_11272f134;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11272f0c0;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_11272f138;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_11272f140;
  _objc_loadWeakRetained();
  lVar56 = param_1 + _DAT_11272f144;
  _objc_loadWeakRetained();
  lVar57 = lVar56;
  func_0x00010c11a360();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_11272f0ec;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_11272f0b4;
  _objc_loadWeakRetained();
  lVar61 = lVar60;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_11272f14c;
  _objc_loadWeakRetained();
  lVar63 = param_1 + _DAT_11272f154;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11272f158;
  _objc_loadWeakRetained();
  lVar64 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e580(puVar10);
  _objc_release(lVar64);
  _objc_release(param_1);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar69);
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
  _objc_release(lVar36);
  _objc_release(lVar68);
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
  _objc_release(lVar67);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar66);
  _objc_release(lVar22);
  _objc_release(lVar70);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar65);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105ad30dc; end: 105ad311b;  */

void FUN_105ad30dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ad311c; end: 105ad3223; -[SCStoriesEverywhereScopeEntryPoint _listenToCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad311c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272f0d4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf41d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  lVar3 = lVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f15c);
  *(long *)(param_1 + _DAT_11272f15c) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ad3224; end: 105ad326b;  */

void FUN_105ad3224(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad326c; end: 105ad3327; -[SCStoriesEverywhereScopeEntryPoint _onCommand:] */

void FUN_105ad326c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_28 = FUN_105ad3330;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105ad33c8;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf700(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108d3e70,
                      &PTR___NSConcreteGlobalBlock_1108d3e90,&puStack_38,&puStack_60,
                      &PTR___NSConcreteGlobalBlock_1108d3eb0,&PTR___NSConcreteGlobalBlock_1108d3ed0,
                      &PTR___NSConcreteGlobalBlock_1108d3ef0,&PTR___NSConcreteGlobalBlock_1108d3f10,
                      &PTR___NSConcreteGlobalBlock_1108d3f30,&PTR___NSConcreteGlobalBlock_1108d3f50)
  ;
  return;
}



/* Entry: 105ad3328; end: 105ad332f;  */

void FUN_105ad3328(void)

{
  return;
}



/* Entry: 105ad3330; end: 105ad345f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1b3860(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f110),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105ad2638(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f160) = 1;
  return;
}



/* Entry: 105ad3460; end: 105ad3477;  */

void FUN_105ad3460(void)

{
  return;
}



/* Entry: 105ad3478; end: 105ad34df; -[SCStoriesEverywhereScopeEntryPoint _sectionDataProviderWithConfiguration:replayManager:] */

void FUN_105ad3478(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf32be0();
  if (uVar1 < 2) {
    func_0x00010bec4400(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105ad34e0; end: 105ad38ab; -[SCStoriesEverywhereScopeEntryPoint _storiesEverywhereSectionDataProviderWithReplayManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad34e0(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126c2168;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272f0c0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272f0a0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272f164;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272f0ec;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_11272f0d4;
  lVar10 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf41d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272f098;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272f0b0;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11272f168;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272f114;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_11272f0a4;
  lVar20 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar22 = lVar32;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11272f0b4;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11272f0cc;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf4cbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11272f16c;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar29 = lVar33;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c0f1e60();
  param_1 = param_1 + _DAT_11272f158;
  _objc_loadWeakRetained();
  lVar31 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015ca0(puVar1,param_2,lVar3,param_3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,
                      lVar19,lVar21,lVar22,lVar24,lVar26,lVar28,lVar30,lVar31);
  _objc_release(param_3);
  _objc_release(lVar31);
  _objc_release(param_1);
  _objc_release(lVar29);
  _objc_release(lVar33);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar32);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ad38ac; end: 105ad392f; -[SCStoriesEverywhereScopeEntryPoint _queryCoordinatorWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad38ac(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  func_0x00010bf32be0();
  if (param_3 == 1) {
    param_1 = param_1 + _DAT_11272f0c8;
    _objc_loadWeakRetained(param_1);
    unaff_x20 = param_1;
    func_0x00010c2585c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) goto LAB_105ad3920;
    param_1 = param_1 + _DAT_11272f0e0;
    _objc_loadWeakRetained(param_1);
    unaff_x20 = param_1;
    func_0x00010bf81c80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
LAB_105ad3920:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105ad3930; end: 105ad39b3; -[SCStoriesEverywhereScopeEntryPoint _replayManagerWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3930(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *unaff_x20;
  
  func_0x00010bf32be0();
  if (param_3 == 1) {
    unaff_x20 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108d3f90);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    puVar1 = (undefined *)(param_1 + _DAT_11272f0c0);
    _objc_loadWeakRetained(puVar1);
    unaff_x20 = puVar1;
    func_0x00010c131580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105ad39b4; end: 105ad39cf;  */

void FUN_105ad39b4(void)

{
  _objc_opt_new(PTR_PTR_1126c2170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ad39d0; end: 105ad3ac3; -[SCStoriesEverywhereScopeEntryPoint _actionHandlerWithConfiguration:replayManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad39d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x23;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf32be0();
  if (lVar1 == 1) {
    lVar2 = param_3;
    func_0x00010c0f1e60(param_3);
    lVar1 = param_1 + _DAT_11272f170;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010beee6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdea420(param_1,param_2,lVar2,lVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    if (lVar1 != 0) goto LAB_105ad3a9c;
    lVar1 = param_1 + _DAT_11272f170;
    _objc_loadWeakRetained(lVar1);
    param_1 = lVar1;
    func_0x00010bf81640();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  unaff_x23 = param_1;
LAB_105ad3a9c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
  return;
}



/* Entry: 105ad3ac4; end: 105ad3c17; -[SCStoriesEverywhereScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3ac4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_80;
  if ((*(byte *)(param_1 + _DAT_11272f160) & 1) == 0) {
    puStack_38 = PTR_PTR_1126ebc90;
    plVar3 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar3,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1 + _DAT_11272f0d4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105ad3c18;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf6f440(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puStack_78 = PTR_PTR_1126ebc90;
    lStack_80 = param_1;
    _objc_msgSendSuper2(&lStack_80,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 105ad3c18; end: 105ad3c43;  */

void FUN_105ad3c18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be39200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad3c44; end: 105ad3cf7; -[SCStoriesEverywhereScopeEntryPoint _informDelegateUIDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3c44(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11272f0d4;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75260();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ad3cf8; end: 105ad3dab; -[SCStoriesEverywhereScopeEntryPoint _informDelegateUIDidInitialize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3cf8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11272f0d4;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf775e0();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ad3dac; end: 105ad3df3; -[SCStoriesEverywhereScopeEntryPoint _creatorSubscriptionsInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3dac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11272f174;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c260aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ad3df4; end: 105ad3e13; -[SCStoriesEverywhereScopeEntryPoint bitmojiSelfieServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3df4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f16c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ad3e14; end: 105ad3e27; -[SCStoriesEverywhereScopeEntryPoint setBitmojiSelfieServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3e14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f16c,param_3);
  return;
}



/* Entry: 105ad3e28; end: 105ad414b; -[SCStoriesEverywhereScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad3e28(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272f154);
  _objc_storeStrong(param_1 + _DAT_11272f150,0);
  _objc_storeStrong(param_1 + _DAT_11272f148,0);
  _objc_destroyWeak(param_1 + _DAT_11272f14c);
  _objc_destroyWeak(param_1 + _DAT_11272f140);
  _objc_storeStrong(param_1 + _DAT_11272f13c,0);
  _objc_storeStrong(param_1 + _DAT_11272f124,0);
  _objc_destroyWeak(param_1 + _DAT_11272f138);
  _objc_destroyWeak(param_1 + _DAT_11272f174);
  _objc_destroyWeak(param_1 + _DAT_11272f158);
  _objc_destroyWeak(param_1 + _DAT_11272f18c);
  _objc_destroyWeak(param_1 + _DAT_11272f10c);
  _objc_destroyWeak(param_1 + _DAT_11272f108);
  _objc_destroyWeak(param_1 + _DAT_11272f16c);
  _objc_destroyWeak(param_1 + _DAT_11272f0d0);
  _objc_destroyWeak(param_1 + _DAT_11272f104);
  _objc_destroyWeak(param_1 + _DAT_11272f188);
  _objc_destroyWeak(param_1 + _DAT_11272f184);
  _objc_destroyWeak(param_1 + _DAT_11272f0cc);
  _objc_destroyWeak(param_1 + _DAT_11272f0fc);
  _objc_destroyWeak(param_1 + _DAT_11272f180);
  _objc_destroyWeak(param_1 + _DAT_11272f0b8);
  _objc_destroyWeak(param_1 + _DAT_11272f0b4);
  _objc_destroyWeak(param_1 + _DAT_11272f17c);
  _objc_destroyWeak(param_1 + _DAT_11272f100);
  _objc_destroyWeak(param_1 + _DAT_11272f0ec);
  _objc_destroyWeak(param_1 + _DAT_11272f168);
  _objc_destroyWeak(param_1 + _DAT_11272f0e8);
  _objc_destroyWeak(param_1 + _DAT_11272f11c);
  _objc_destroyWeak(param_1 + _DAT_11272f134);
  _objc_destroyWeak(param_1 + _DAT_11272f128);
  _objc_destroyWeak(param_1 + _DAT_11272f0c4);
  _objc_destroyWeak(param_1 + _DAT_11272f0e4);
  _objc_destroyWeak(param_1 + _DAT_11272f0f4);
  _objc_destroyWeak(param_1 + _DAT_11272f114);
  _objc_destroyWeak(param_1 + _DAT_11272f0f8);
  _objc_destroyWeak(param_1 + _DAT_11272f0bc);
  _objc_destroyWeak(param_1 + _DAT_11272f0c0);
  _objc_destroyWeak(param_1 + _DAT_11272f0e0);
  _objc_destroyWeak(param_1 + _DAT_11272f164);
  _objc_destroyWeak(param_1 + _DAT_11272f178);
  _objc_destroyWeak(param_1 + _DAT_11272f144);
  _objc_destroyWeak(param_1 + _DAT_11272f0ac);
  _objc_destroyWeak(param_1 + _DAT_11272f130);
  _objc_destroyWeak(param_1 + _DAT_11272f0a8);
  _objc_destroyWeak(param_1 + _DAT_11272f0a4);
  _objc_destroyWeak(param_1 + _DAT_11272f12c);
  _objc_destroyWeak(param_1 + _DAT_11272f0dc);
  _objc_destroyWeak(param_1 + _DAT_11272f0b0);
  _objc_destroyWeak(param_1 + _DAT_11272f170);
  _objc_destroyWeak(param_1 + _DAT_11272f0c8);
  _objc_destroyWeak(param_1 + _DAT_11272f098);
  _objc_destroyWeak(param_1 + _DAT_11272f0d8);
  _objc_destroyWeak(param_1 + _DAT_11272f120);
  _objc_destroyWeak(param_1 + _DAT_11272f0f0);
  _objc_destroyWeak(param_1 + _DAT_11272f0a0);
  _objc_destroyWeak(param_1 + _DAT_11272f09c);
  _objc_destroyWeak(param_1 + _DAT_11272f118);
  _objc_destroyWeak(param_1 + _DAT_11272f0d4);
  _objc_storeStrong(param_1 + _DAT_11272f190,0);
  _objc_storeStrong(param_1 + _DAT_11272f15c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272f110,0);
  return;
}



/* Entry: 105ad414c; end: 105ad42b3; -[SCStoriesEverywhereSectionCreator initWithActionHandler:circumstanceEngine:storiesConfigProvider:sectionDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ad414c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ebc98;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithActionHandler_discoverFe_11252c508,param_3,0,0,0,0,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272f194;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f198;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2178;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f19c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272f19c) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f1a0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f1a4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ad42b4; end: 105ad4513; -[SCStoriesEverywhereSectionCreator sectionForDescriptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad42b4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  plVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4890;
  _objc_opt_class(PTR_PTR_1126b4890);
  plVar4 = plVar2;
  _objc_opt_isKindOfClass(plVar2,puVar3);
  plVar1 = plVar2;
  if (((ulong)plVar4 & 1) == 0) {
    plVar1 = (long *)0x0;
  }
  _objc_retain(plVar1);
  _objc_release(plVar2);
  plVar2 = plVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar1);
  puVar3 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  plVar4 = plVar2;
  _objc_opt_isKindOfClass(plVar2,puVar3);
  plVar1 = plVar2;
  if (((ulong)plVar4 & 1) == 0) {
    plVar1 = (long *)0x0;
  }
  _objc_retain(plVar1);
  _objc_release(plVar2);
  plVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar2;
  func_0x00010c0720c0();
  _objc_release(plVar2);
  plVar2 = param_3;
  if ((int)plVar4 == 0) {
    plVar4 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar4;
    func_0x00010c0720c0();
    _objc_release(plVar4);
    if ((int)plVar5 != 0) {
      uVar7 = *(undefined8 *)(param_1 + _DAT_11272f1a8);
      uVar8 = *(undefined8 *)(param_1 + _DAT_11272f194);
      uVar9 = *(undefined8 *)(param_1 + _DAT_11272f1ac);
      uVar10 = *(undefined8 *)(param_1 + _DAT_11272f19c);
      uVar6 = *(undefined8 *)(param_1 + _DAT_11272f1a0);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001079a3b00(param_3,uVar7,uVar8,uVar9,uVar10,0,plVar1,uVar6,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      goto joined_r0x000105ad44b0;
    }
  }
  else {
    func_0x0001079a3b00(param_3,*(undefined8 *)(param_1 + _DAT_11272f1a8),
                        *(undefined8 *)(param_1 + _DAT_11272f194),
                        *(undefined8 *)(param_1 + _DAT_11272f1ac),
                        *(undefined8 *)(param_1 + _DAT_11272f19c),0,plVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
joined_r0x000105ad44b0:
    if (plVar2 != (long *)0x0) goto LAB_105ad44e0;
  }
  puStack_68 = PTR_PTR_1126ebc98;
  plVar2 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_sectionForDescriptor__112633158,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_105ad44e0:
  _objc_release(plVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 105ad4514; end: 105ad4523; -[SCStoriesEverywhereSectionCreator sectionExtensionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ad4514(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f1a8);
}



/* Entry: 105ad4524; end: 105ad4563; -[SCStoriesEverywhereSectionCreator setSectionExtensionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad4524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f1a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad4564; end: 105ad467b; -[SCStoriesEverywhereSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ad4564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272f1a8,0);
  _objc_storeStrong(param_1 + _DAT_11272f1a4,0);
  _objc_storeStrong(param_1 + _DAT_11272f1a0,0);
  _objc_storeStrong(param_1 + _DAT_11272f198,0);
  _objc_storeStrong(param_1 + _DAT_11272f1ac,0);
  _objc_storeStrong(param_1 + _DAT_11272f19c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272f194,0);
  return;
}



/* Entry: 105ad467c; end: 105ad475f;  */

void FUN_105ad467c(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar2 = param_1;
  func_0x000107c89dac();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)(ulong)(uint)*(float *)(param_1 + 0x20);
  if (*(float *)(param_1 + 0x20) <= 0.0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    puVar3 = PTR_PTR_1126c2188;
    _objc_alloc();
    func_0x00010bfe5ca0(puVar2);
    dVar5 = dVar4;
    func_0x00010bf85a80(puVar2);
    dVar6 = dVar5;
    func_0x00010bfe5ae0(puVar2);
    dVar8 = dVar6 * (double)*(float *)(param_1 + 0x20);
    func_0x00010bf85a40(puVar2);
    dVar7 = dVar6;
    func_0x00010bf859a0(puVar2);
    func_0x00010c01b0c0(dVar4,dVar5,dVar8,dVar6,dVar7);
  }
  uVar1 = puRam00000001136c1bd8;
  puRam00000001136c1bd8 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ad4760; end: 105ad476b; +[SCStoriesEverywhereSectionDataProvider announcerIdentifier] */

undefined ** FUN_105ad4760(void)

{
  return &PTR____CFConstantStringClassReference_110e1c738;
}



/* Entry: 105ad476c; end: 105ad4773; -[SCStoriesEverywhereSectionDataProvider addListener:] */

void FUN_105ad476c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ad4774; end: 105ad477b; -[SCStoriesEverywhereSectionDataProvider removeListener:] */

void FUN_105ad4774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ad477c; end: 105ad4bdf; -[SCStoriesEverywhereSectionDataProvider initWithFriendStoriesDataCoordinator:replayManager:circumstanceEngine:imageFetchingService:storiesConfigProvider:commandObservable:discoverFeedDataFetcher:snapchattersSynchronousDataFetcher:storiesSnapchatterFetcher:featureSettingsService:bitmojiImageFetcher:bitmojiAvatarProvider:networkConnectivityMonitor:mixedStoriesDataCoordinator:bitmojiSelfieFetcher:pageType:plusFeatureGating:] */

undefined8 *
FUN_105ad477c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ebca0;
  puVar1 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2190;
    _objc_alloc_init();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258300();
    *(undefined4 *)(puVar1 + 0x17) = param_1;
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9c20();
    *(undefined4 *)((long)puVar1 + 0xbc) = param_1;
    _objc_release(uVar2);
    puVar1[0x1d] = 0;
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c258340();
    *(char *)((long)puVar1 + 0xf1) = (char)uVar4;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258360();
    *(undefined4 *)((long)puVar1 + 0xf4) = param_1;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1e) = 0;
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
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
  return puVar1;
}



/* Entry: 105ad4be0; end: 105ad4be7;  */

void FUN_105ad4be0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_friendStoryCarouselPrefetchConfi_1125cbd18);
  return;
}



/* Entry: 105ad4be8; end: 105ad4e37; -[SCStoriesEverywhereSectionDataProvider setUp] */

void FUN_105ad4be8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001079d8f70(*(undefined4 *)(param_1 + 0xb8));
  uVar1 = 0;
  func_0x000107c142dc();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar5);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar1);
  func_0x00010bee9860(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99c0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_48;
  _objc_copyWeak(auStack_50,puVar4);
  uVar1 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010be12a20(param_1);
  func_0x00010bec8520(param_1);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  puVar3 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010be68540();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ad4e38; end: 105ad4e7f;  */

void FUN_105ad4e38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad4e80; end: 105ad4f27; -[SCStoriesEverywhereSectionDataProvider tearDown] */

void FUN_105ad4e80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cfa0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad4f28; end: 105ad4f2b; -[SCStoriesEverywhereSectionDataProvider setSectionDataModel:] */

void FUN_105ad4f28(void)

{
  return;
}



/* Entry: 105ad4f2c; end: 105ad4f33; -[SCStoriesEverywhereSectionDataProvider numberOfSections] */

undefined8 FUN_105ad4f2c(void)

{
  return 1;
}



/* Entry: 105ad4f34; end: 105ad4f3b; -[SCStoriesEverywhereSectionDataProvider numberOfItemsInSection:] */

void FUN_105ad4f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105ad4f3c; end: 105ad4fff; -[SCStoriesEverywhereSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105ad4f3c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_f0,puVar1);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105ad5184;
    puStack_100 = &UNK_110845ae0;
    puVar7 = auStack_f0;
    _objc_copyWeak(auStack_f8,puVar7);
    ppuVar2 = &puStack_118;
    _objc_retainBlock();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110eb4818;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110eb4858;
    ppuVar4 = ppuVar2;
    ppuStack_d0 = ppuVar3;
    _objc_retainBlock();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110eb48b8;
    ppuVar5 = ppuVar2;
    ppuStack_c8 = ppuVar4;
    _objc_retainBlock();
    ppuStack_c0 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_f8);
    puVar6 = auStack_f0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
      __Unwind_Resume(puVar6);
      _objc_retain(puVar7);
      puVar6 = puVar6 + 0x20;
      _objc_loadWeakRetained(puVar6);
      func_0x00010bde5ba0();
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ad5000; end: 105ad5183; -[SCStoriesEverywhereSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105ad5000(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105ad5184;
  puStack_a0 = &UNK_110845ae0;
  puVar7 = auStack_90;
  _objc_copyWeak(auStack_98,puVar7);
  ppuVar1 = &puStack_b8;
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eb4818;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110eb4858;
  ppuVar3 = ppuVar1;
  ppuStack_70 = ppuVar2;
  _objc_retainBlock();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb48b8;
  ppuVar4 = ppuVar1;
  ppuStack_68 = ppuVar3;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_60 = ppuVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_98);
  puVar6 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar6);
  _objc_retain(puVar7);
  puVar6 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar6);
  func_0x00010bde5ba0();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105ad5184; end: 105ad51cb;  */

void FUN_105ad5184(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad51cc; end: 105ad528f; -[SCStoriesEverywhereSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105ad51cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(puVar1);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ad5290;
  puStack_40 = &UNK_110845ab0;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  uVar3 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ad5290; end: 105ad52bb;  */

void FUN_105ad5290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 105ad52bc; end: 105ad52c3; -[SCStoriesEverywhereSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105ad52bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105ad52c4; end: 105ad52cb; -[SCStoriesEverywhereSectionDataProvider supplementaryViewModels] */

undefined8 FUN_105ad52c4(void)

{
  return 0;
}



/* Entry: 105ad52cc; end: 105ad52d7; -[SCStoriesEverywhereSectionDataProvider minimumInteritemSpacing] */

double FUN_105ad52cc(void)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.01600000075995922;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = dVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return dVar2 * 0.01600000075995922;
}



/* Entry: 105ad52d8; end: 105ad52db; -[SCStoriesEverywhereSectionDataProvider startToDisplayStoryWithStoryId:] */

void FUN_105ad52d8(void)

{
  return;
}



/* Entry: 105ad52dc; end: 105ad5333; -[SCStoriesEverywhereSectionDataProvider clearAllWithReason:] */

void FUN_105ad52dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105ad5334;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x108),param_2,&puStack_40);
  return;
}



/* Entry: 105ad5334; end: 105ad5363;  */

void FUN_105ad5334(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0 || lVar2 == 3) {
    uVar1 = 0;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be27330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleCollapseStoriesFromPullTo_112567668,uVar1)
  ;
  return;
}



/* Entry: 105ad5364; end: 105ad53bb; -[SCStoriesEverywhereSectionDataProvider expandAllStories] */

void FUN_105ad5364(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ad53bc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x108),param_2,&puStack_38);
  return;
}



/* Entry: 105ad53bc; end: 105ad53c3;  */

void FUN_105ad53bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be29170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleExpandAllStories_112567df8);
  return;
}



/* Entry: 105ad53c4; end: 105ad54d7; -[SCStoriesEverywhereSectionDataProvider didUpdateWithFriendStoriesReplayRequest:] */

void FUN_105ad53c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105ad54d8;
    puStack_60 = &UNK_1108d3ff0;
    uStack_58 = param_1;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_80,auStack_48);
    func_0x00010c0c0300(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ad54d8; end: 105ad5583;  */

void FUN_105ad54d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ad5584; end: 105ad55b3;  */

void FUN_105ad5584(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad55b4; end: 105ad5643;  */

void FUN_105ad55b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ad5644; end: 105ad5673;  */

void FUN_105ad5644(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad5674; end: 105ad5827; -[SCStoriesEverywhereSectionDataProvider didUpdateWithDiscoverFeedFriendStoryDataRequest:] */

void FUN_105ad5674(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2582c0();
    _objc_release(uVar1);
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105ad582c;
    puStack_88 = &UNK_1108d4070;
    puStack_d0 = &uStack_70;
    uStack_78 = (undefined1)uVar2;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x105ad58fc;
    puStack_b0 = &UNK_110847658;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x105ad5910;
    puStack_d8 = &UNK_110847658;
    puStack_a8 = puStack_d0;
    puStack_80 = puStack_d0;
    func_0x00010c0bea40(param_3);
    if ((*(byte *)(puStack_68 + 3) & 1) != 0) {
      _objc_initWeak(auStack_f8,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      _objc_copyWeak(auStack_100,auStack_f8);
      func_0x00010c0f7fc0(uVar2);
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_f8);
    }
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ad5828; end: 105ad582b;  */

void FUN_105ad5828(void)

{
  return;
}



/* Entry: 105ad582c; end: 105ad58af;  */

void FUN_105ad582c(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105ad58b0;
  puStack_28 = &UNK_1108d4040;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_18 = *(undefined1 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105ad58e8;
  puStack_50 = &UNK_110847658;
  uStack_20 = uStack_48;
  func_0x00010c0bf7c0(param_2,param_2,&puStack_40,&puStack_68);
  return;
}



/* Entry: 105ad58b0; end: 105ad5923;  */

void FUN_105ad58b0(long param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == 2) {
    bVar1 = 1;
  }
  else if (param_2 == 1) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1 & 1;
  return;
}



/* Entry: 105ad5924; end: 105ad594f;  */

void FUN_105ad5924(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad5950; end: 105ad5a37; -[SCStoriesEverywhereSectionDataProvider _suspendDataRequestUpdateIfNecessary] */

void FUN_105ad5950(long param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ad5a38;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  if (*(char *)(param_1 + 0xd9) == '\x01') {
    puVar2 = (undefined1 *)ppuVar1;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined1 **)(param_1 + 0xe0) = puVar2;
    _objc_release(uVar3);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ad5a38; end: 105ad5a67;  */

void FUN_105ad5a38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad5a68; end: 105ad5a77; -[SCStoriesEverywhereSectionDataProvider _handleExpandAllStories] */

void FUN_105ad5a68(long param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be12a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMixedCarouselStoriesFromPu_112562428,0)
  ;
  return;
}



/* Entry: 105ad5a78; end: 105ad5b1f; -[SCStoriesEverywhereSectionDataProvider sectionCollapseCoordinatorDidUpdate] */

void FUN_105ad5a78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ad5b20; end: 105ad5b4f;  */

void FUN_105ad5b20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad5b50; end: 105ad5b57; -[SCStoriesEverywhereSectionDataProvider _handleCollapseStoriesFromPullToRefresh:] */

void FUN_105ad5b50(long param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be12a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMixedCarouselStoriesFromPu_112562428);
  return;
}



/* Entry: 105ad5b58; end: 105ad5c7b; -[SCStoriesEverywhereSectionDataProvider _fetchMixedCarouselStoriesFromPullToRefresh:] */

void FUN_105ad5b58(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(char *)(param_1 + 0xd8) = (char)param_3;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286ee0();
    _objc_release(uVar1);
  }
  *(undefined8 *)(param_1 + 0xa0) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfaa7c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ad5c7c; end: 105ad5ce3;  */

void FUN_105ad5c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be60a20();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


