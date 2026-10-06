/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10669568c; end: 10669577f; -[SCLensExplorerSpectaclesLensActionHandler didViewLensFeedItem:autoPicked:] */

void FUN_10669568c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x18) = param_4;
  func_0x00010beba180(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdddda0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106695780; end: 1066957bb;  */

void FUN_106695780(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066957bc; end: 1066958db; -[SCLensExplorerSpectaclesLensActionHandler _checkLensDisplaySupport:completion:] */

void FUN_1066957bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0be960(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066958dc; end: 1066959df;  */

void FUN_1066958dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  uVar1 = param_2;
  func_0x00010c2810a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c08fb80(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1066959e0; end: 106695a4f;  */

void FUN_1066959e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_retain();
  _objc_release(lVar1);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20))) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106695a50; end: 106695a5f;  */

void FUN_106695a50(void)

{
  return;
}



/* Entry: 106695a60; end: 106695eab; -[SCLensExplorerSpectaclesLensActionHandler _showOnActionSheetWithLoading:canOpenInCamera:updateOnly:] */

void FUN_106695a60(long param_1,undefined *param_2,int param_3,int param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010670dfe8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfd59e0();
  if ((uVar3 & 1) == 0) {
    func_0x00010670e018();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010670e000();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b10a0;
  func_0x00010670e030();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c269d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar1);
  func_0x00010bfd59e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c195460(puVar5);
  puVar6 = *(undefined **)(param_1 + 0x20);
  func_0x00010bfd59e0();
  if (((ulong)puVar6 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar8 = puVar7;
    func_0x00010670e030();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar7);
    func_0x00010c16b7a0(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  puVar7 = PTR_PTR_1126b10a0;
  func_0x00010670e048();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c269d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar7 = PTR_PTR_1126b10a0;
  func_0x00010b75e3d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  if (param_4 != 0) {
    func_0x00010befa120(puVar7);
  }
  if (param_3 != 0) {
    puVar6 = PTR_PTR_1126b10a0;
    func_0x00010c09cc80(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar6);
  }
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if ((param_5 & 1) != 0) goto LAB_106695e48;
    puVar6 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    func_0x00010c019f40();
    param_2 = puVar6;
    _objc_storeWeak(param_1 + 0x38,puVar6);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10af80();
    _objc_release(param_1);
  }
  else {
    puVar6 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar6);
    func_0x00010c1312e0();
  }
  _objc_release(puVar6);
LAB_106695e48:
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 106695eac; end: 106695eb3;  */

void FUN_106695eac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 106695eb4; end: 106695f2b; -[SCLensExplorerSpectaclesLensActionHandler _openInCameraTapped:] */

void FUN_106695eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83000();
  _objc_release(param_3);
  return;
}



/* Entry: 106695f2c; end: 106695f33;  */

void FUN_106695f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee9d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__viewSupportedLensOnCamera_112598108);
  return;
}



/* Entry: 106695f34; end: 106695fd3; -[SCLensExplorerSpectaclesLensActionHandler _launchOnSpectaclesTapped:] */

void FUN_106695f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010beeee80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83000();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106695fd4; end: 106695fdb;  */

void FUN_106695fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee9c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__viewOnSpectacles_1125980b8);
  return;
}



/* Entry: 106695fdc; end: 10669608f; -[SCLensExplorerSpectaclesLensActionHandler _viewOnCameraIfSupported] */

void FUN_106695fdc(undefined8 param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdddda0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106696090; end: 1066960c3;  */

void FUN_106696090(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee9d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1066960c4; end: 1066960ff; -[SCLensExplorerSpectaclesLensActionHandler _viewSupportedLensOnCamera] */

void FUN_1066960c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf7eb60(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x10),
                      *(undefined1 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106696100; end: 106696177; -[SCLensExplorerSpectaclesLensActionHandler _viewOnSpectacles] */

void FUN_106696100(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106696178;
  puStack_20 = &UNK_110932e38;
  lStack_18 = param_1;
  func_0x00010c0be960(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_1109330e8,&PTR___NSConcreteGlobalBlock_110933108,
                      &PTR___NSConcreteGlobalBlock_110933128,&PTR___NSConcreteGlobalBlock_110933148)
  ;
  return;
}



/* Entry: 106696178; end: 1066961d7;  */

void FUN_106696178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c2810a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b980(uVar1);
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066961d8; end: 1066961e7;  */

void FUN_1066961d8(void)

{
  return;
}



/* Entry: 1066961e8; end: 106696233; -[SCLensExplorerSpectaclesLensActionHandler .cxx_destruct] */

void FUN_1066961e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106696234; end: 1066962cf; -[SCLensExplorerPresentStoryActionHandler initWithLensExplorerRouter:sectionId:] */

undefined1 *
FUN_106696234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2580;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066962d0; end: 106696337; -[SCLensExplorerPresentStoryActionHandler didViewCreatorStory:sourceView:] */

void FUN_1066962d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10e640();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106696338; end: 1066963cb; -[SCLensExplorerPresentStoryActionHandler didViewStoryItem:sourceView:] */

void FUN_106696338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10e660(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x10),param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066963cc; end: 1066963f7; -[SCLensExplorerPresentStoryActionHandler .cxx_destruct] */

void FUN_1066963cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066963f8; end: 1066964ff; -[SCLensExplorerFeedModelsPersistentStorage feedModelsBatchWithSelectedFeedId:] */

void FUN_1066963f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106696500; end: 106696593;  */

void FUN_106696500(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106696594; end: 10669669b; -[SCLensExplorerFeedModelsPersistentStorage feedModelsForFeedIdentifier:] */

void FUN_106696594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10669669c; end: 10669672f;  */

void FUN_10669669c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1f060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106696730; end: 106696837; -[SCLensExplorerFeedModelsPersistentStorage feedModelsForFeedId:] */

void FUN_106696730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106696838; end: 1066968cb;  */

void FUN_106696838(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1f040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066968cc; end: 1066969cf; -[SCLensExplorerFeedModelsPersistentStorage updateFeedModels:isBatchResponse:completionHandler:] */

void FUN_1066968cc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010c0f8500(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1066969d0; end: 106696a27;  */

void FUN_1066969d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be717c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106696a28; end: 106696a33; -[SCLensExplorerFeedModelsPersistentStorage _cacheFeedModelWithIdentifier:] */

void FUN_106696a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_30c;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (lVar1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar1);
  }
  puVar4 = &uStack_191;
  FUN_106729e70();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_SUB_110862958;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_110881e20;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_279;
  uStack_1d8 = uVar2;
  puStack_158 = puVar4;
  pppuStack_150 = &ppuStack_208;
  FUN_10672a0fc();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  _objc_retain(param_3);
  ppuStack_2f0 = &PTR_SUB_110862760;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar5[0x1a];
  bStack_25d = puVar5[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_110862700;
  pppuStack_e0 = &ppuStack_278;
  uStack_228 = 0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar6 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar5;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&puStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puStack_308 != (undefined8 *)0x0) {
    puStack_300 = puStack_308;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862700;
  plStack_210 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_308 = &uStack_230;
  func_0x000100105004(&puStack_308);
  plVar3 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_110862760;
  plStack_288 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_308 = &uStack_2a8;
  func_0x000100105004(&puStack_308);
  _objc_release(uStack_2c0);
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_SUB_110881e20;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862958;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106696a34; end: 106696a3f; -[SCLensExplorerFeedModelsPersistentStorage _cacheFeedModelsWithIdentifiers:] */

undefined8 * FUN_106696a34(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  byte bStack_3a2;
  byte bStack_3a1;
  undefined8 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_349;
  undefined **appuStack_348 [3];
  byte bStack_32e;
  byte bStack_32d;
  undefined8 auStack_300 [3];
  long *plStack_2e8;
  long *plStack_2e0;
  undefined **ppuStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2c0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_270;
  undefined1 uStack_261;
  undefined **ppuStack_260;
  undefined4 uStack_258;
  undefined2 uStack_248;
  byte bStack_246;
  byte bStack_245;
  undefined1 *puStack_228;
  undefined ***pppuStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1d8;
  byte bStack_1d6;
  byte bStack_1d5;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_78;
  
  lVar10 = *(long *)(param_1 + 8);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (lVar10 == 0) {
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_180,lVar10);
  }
  puVar5 = &uStack_261;
  FUN_106729e70();
  uStack_2d0 = 0xf;
  uStack_2c0 = 0x100;
  ppuStack_2d8 = &PTR_SUB_110862958;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  plStack_278 = (long *)0x0;
  uStack_280 = 0;
  plStack_270 = (long *)0x0;
  bVar2 = puVar5[0x1a];
  bVar3 = puVar5[0x1b];
  uStack_258 = 10;
  uStack_248 = 0x100;
  ppuStack_260 = &PTR_SUB_110881e20;
  pppuStack_220 = &ppuStack_2d8;
  lStack_210 = 0;
  lStack_218 = 0;
  plStack_200 = (long *)0x0;
  uStack_208 = 0;
  plStack_1f8 = (long *)0x0;
  puVar6 = &uStack_349;
  uStack_2a8 = uVar16;
  bStack_246 = bVar2;
  bStack_245 = bVar3;
  puStack_228 = puVar5;
  FUN_10672a0fc(puVar6);
  _objc_retain(param_3);
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_368 = 0;
  lVar7 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x0001004c2bb4(&uStack_368,lVar7);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar17 = *plStack_130;
    do {
      lVar18 = 0;
      do {
        if (*plStack_130 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar16 = *(undefined8 *)(lStack_138 + lVar18 * 8);
        _objc_retain(uVar16);
        uStack_100 = uVar16;
        func_0x0001004c2d3c(&uStack_368,&uStack_100);
        _objc_release(uStack_100);
        lVar18 = lVar18 + 1;
      } while (lVar7 != lVar18);
      lVar7 = param_3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x0001004c2e3c(appuStack_348,0xc,puVar6,&uStack_368);
  bStack_1d5 = bVar3 & bStack_32d;
  bStack_1d6 = (bVar2 | bStack_32e) & 1;
  uStack_1e8 = 4;
  uStack_1d8 = 0x100;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  pppuStack_1b8 = &ppuStack_260;
  uStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  puVar8 = &uStack_180;
  pppuVar12 = &ppuStack_1f0;
  ppuVar13 = &puStack_f8;
  pppuStack_1b0 = appuStack_348;
  func_0x0001000e77a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puStack_f8 != (undefined8 *)0x0) {
    puStack_f0 = puStack_f8;
    __ZdlPv();
  }
  plVar4 = plStack_188;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  plStack_188 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  plVar4 = plStack_2e0;
  appuStack_348[0] = &PTR_SUB_110862700;
  plStack_2e0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_2e8;
  plStack_2e8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_f8 = auStack_300;
  func_0x000100105004(&puStack_f8);
  puStack_f8 = &uStack_368;
  func_0x000100105004(&puStack_f8);
  plVar4 = plStack_1f8;
  ppuStack_260 = &PTR_SUB_110881e20;
  plStack_1f8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_200;
  plStack_200 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar4 = plStack_270;
  ppuStack_2d8 = &PTR_SUB_110862958;
  plStack_270 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_278;
  plStack_278 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_290 != 0) {
    lStack_288 = lStack_290;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_158);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(param_3);
  lVar7 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (puStack_f8 != (undefined8 *)0x0) {
    puStack_f0 = puStack_f8;
    __ZdlPv();
  }
  func_0x000105007830(&ppuStack_1f0);
  func_0x0001050048c0(appuStack_348);
  puStack_f8 = &uStack_368;
  func_0x000100105004(&puStack_f8);
  func_0x0001053b6b38(&ppuStack_260);
  func_0x0001050077c0(&ppuStack_2d8);
  func_0x000104d96620(&uStack_180);
  _objc_release(param_3);
  _objc_release(lVar10);
  __Unwind_Resume(lVar7);
  lVar17 = lVar7;
  func_0x000104bd46a0();
  pcStack_378 = FUN_10670de18;
  puStack_3a0 = puVar8;
  lStack_398 = lVar7;
  lStack_390 = param_3;
  lStack_388 = lVar10;
  puStack_380 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar12);
  lVar10 = lVar17;
  (*(code *)ppuVar13)(lVar17,&bStack_3a1);
  pppuVar11 = pppuVar12;
  (*(code *)ppuVar13)(pppuVar12,&bStack_3a2);
  uVar14 = 2;
  if (bStack_3a2 == 0) {
    uVar14 = 0;
  }
  if (bStack_3a1 == 0) {
    uVar14 = 1;
  }
  uVar15 = 1;
  if (lVar10 <= (long)pppuVar11) {
    uVar15 = 2;
  }
  uVar1 = 0;
  if ((long)pppuVar11 <= lVar10) {
    uVar1 = uVar15;
  }
  uVar15 = uVar14;
  if ((bStack_3a2 & 1) == 0) {
    uVar15 = uVar1;
  }
  if ((bStack_3a1 & 1) == 0) {
    uVar14 = uVar15;
  }
  _objc_release(pppuVar12);
  _objc_release(lVar17);
  return (undefined8 *)(ulong)uVar14;
}



/* Entry: 106696a40; end: 106696a4b; -[SCLensExplorerFeedModelsPersistentStorage _getCachedFeedModelsBatchWithPreselectedId:] */

void FUN_106696a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined ***pppuVar10;
  long *plVar11;
  undefined4 uStack_7bc;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 uStack_7a8;
  undefined **ppuStack_7a0;
  undefined4 uStack_798;
  undefined4 uStack_788;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined1 uStack_729;
  undefined **ppuStack_728;
  undefined4 uStack_720;
  undefined2 uStack_710;
  byte bStack_70e;
  byte bStack_70d;
  undefined1 *puStack_6f0;
  undefined ***pppuStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long *plStack_6c8;
  long *plStack_6c0;
  undefined **ppuStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6a0;
  undefined ***pppuStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long *plStack_658;
  long *plStack_650;
  undefined1 uStack_641;
  undefined **ppuStack_640;
  undefined4 uStack_638;
  undefined2 uStack_628;
  undefined2 uStack_626;
  undefined1 *puStack_608;
  undefined ***pppuStack_600;
  long lStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined **ppuStack_5d0;
  undefined4 uStack_5c8;
  undefined2 uStack_5b8;
  byte bStack_5b6;
  byte bStack_5b5;
  undefined ***pppuStack_598;
  undefined ***pppuStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined *puStack_510;
  undefined ***pppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 *puStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  long lStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_499;
  long lStack_498;
  long lStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  undefined **ppuStack_468;
  undefined4 uStack_460;
  undefined4 uStack_450;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  undefined1 uStack_3f1;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined2 uStack_3d8;
  byte bStack_3d6;
  byte bStack_3d5;
  undefined1 *puStack_3b8;
  undefined ***pppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  undefined2 uStack_2ee;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined ***pppuStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_210;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined1 *puStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined2 uStack_128;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  lStack_4a8 = lVar1;
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (lVar1 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_d0,lVar1);
  }
  puVar4 = &uStack_1b1;
  FUN_106729e70();
  uStack_220 = 0xf;
  uStack_210 = 0x100;
  ppuStack_228 = &PTR_SUB_110862958;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  plStack_1c8 = (long *)0x0;
  uStack_1d0 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_196 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_1a8 = 10;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_SUB_110881e20;
  pppuStack_170 = &ppuStack_228;
  lStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  puVar5 = &uStack_309;
  uStack_1f8 = uVar2;
  puStack_178 = puVar4;
  FUN_106729fb4();
  uStack_378 = 0xf;
  uStack_368 = 0x100;
  ppuStack_380 = &PTR_SUB_110862958;
  uStack_340 = 0;
  uStack_348 = 0;
  lStack_330 = 0;
  lStack_338 = 0;
  plStack_320 = (long *)0x0;
  uStack_328 = 0;
  uStack_350 = 0;
  plStack_318 = (long *)0x0;
  uStack_2ee = *(undefined2 *)(puVar5 + 0x1a);
  uStack_300 = 9;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_110881e20;
  pppuStack_2c8 = &ppuStack_380;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  puVar4 = &uStack_3f1;
  puStack_2d0 = puVar5;
  FUN_10672a0fc();
  uStack_460 = 0xf;
  uStack_450 = 0x100;
  _objc_retain(param_3);
  ppuStack_468 = &PTR_SUB_110862760;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  plStack_408 = (long *)0x0;
  uStack_410 = 0;
  plStack_400 = (long *)0x0;
  bStack_3d6 = puVar4[0x1a];
  bStack_3d5 = puVar4[0x1b];
  uStack_3e8 = 10;
  uStack_3d8 = 0x100;
  ppuStack_3f0 = &PTR_SUB_110862700;
  pppuStack_3b0 = &ppuStack_468;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  plStack_390 = (long *)0x0;
  uStack_398 = 0;
  plStack_388 = (long *)0x0;
  bStack_27e = (byte)uStack_2ee | bStack_3d6;
  bStack_27d = uStack_2ee._1_1_ | bStack_3d5;
  uStack_290 = 5;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_SUB_1108629c8;
  pppuStack_260 = &ppuStack_308;
  plStack_230 = (long *)0x0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  uStack_248 = 0;
  lStack_250 = 0;
  bStack_125 = bStack_27d & uStack_196._1_1_;
  bStack_126 = bStack_27e | (byte)uStack_196;
  uStack_138 = 4;
  uStack_128 = 0x100;
  ppuStack_140 = &PTR_SUB_1108629c8;
  pppuStack_108 = &ppuStack_1b0;
  pppuStack_100 = &ppuStack_298;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  puVar5 = &uStack_499;
  uStack_438 = param_3;
  puStack_3b8 = puVar4;
  pppuStack_258 = &ppuStack_3f0;
  FUN_106729fb4();
  puStack_98 = *(undefined8 **)(puVar5 + 0x10);
  uStack_90 = puVar5[0x19];
  uStack_8f = puVar5[0x18];
  uStack_80 = *(undefined8 *)(puVar5 + 0x28);
  uStack_8c = 0;
  pcStack_88 = FUN_10670de18;
  lStack_490 = 0;
  uStack_488 = 0;
  lStack_498 = 0;
  func_0x000100c435d0(&lStack_498,&puStack_98,alStack_78,1);
  func_0x000100c436b8(&lStack_480,&lStack_498);
  uStack_4a0 = 0;
  puVar6 = &uStack_d0;
  pppuVar10 = &ppuStack_140;
  plVar11 = &lStack_480;
  func_0x0001000e77a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar1 = lStack_4a8;
  if (lStack_480 != 0) {
    lStack_478 = lStack_480;
    __ZdlPv();
  }
  if (lStack_498 != 0) {
    lStack_490 = lStack_498;
    __ZdlPv();
  }
  plVar3 = plStack_d8;
  ppuStack_140 = &PTR_SUB_1108629c8;
  plStack_d8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_230;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_250 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_388;
  ppuStack_3f0 = &PTR_SUB_110862700;
  plStack_388 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_390;
  plStack_390 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_98 = &uStack_3a8;
  func_0x000100105004(&puStack_98);
  plVar3 = plStack_400;
  ppuStack_468 = &PTR_SUB_110862760;
  plStack_400 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_408;
  plStack_408 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_98 = &uStack_420;
  func_0x000100105004(&puStack_98);
  _objc_release(uStack_438);
  plVar3 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_110881e20;
  plStack_2a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar3 = plStack_318;
  ppuStack_380 = &PTR_SUB_110862958;
  plStack_318 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_320;
  plStack_320 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_338 != 0) {
    lStack_330 = lStack_338;
    __ZdlPv();
  }
  plVar3 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_110881e20;
  plStack_148 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  plVar3 = plStack_1c0;
  ppuStack_228 = &PTR_SUB_110862958;
  plStack_1c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1c8;
  plStack_1c8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_3);
  lVar8 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_78[0]) {
    ___stack_chk_fail();
    _objc_release(&uStack_3a8);
    if (lStack_480 != 0) {
      lStack_478 = lStack_480;
      __ZdlPv();
    }
    if (lStack_498 != 0) {
      lStack_490 = lStack_498;
      __ZdlPv();
    }
    func_0x000105007830(&ppuStack_140);
    func_0x000105007830(&ppuStack_298);
    func_0x0001050048c0(&ppuStack_3f0);
    func_0x000105004938(&ppuStack_468);
    func_0x0001053b6b38(&ppuStack_308);
    func_0x0001050077c0(&ppuStack_380);
    func_0x0001053b6b38(&ppuStack_1b0);
    func_0x0001050077c0(&ppuStack_228);
    func_0x000104d96620(&uStack_d0);
    _objc_release(param_3);
    _objc_release(lStack_4a8);
    lVar9 = lVar8;
    __Unwind_Resume();
    puStack_510 = &UNK_1108629b8;
    puStack_500 = &UNK_1108626f0;
    puStack_4f8 = &UNK_110862750;
    puStack_4f0 = &UNK_110881e10;
    puStack_4e8 = &UNK_110862948;
    lStack_4c8 = lVar1;
    pcStack_4b8 = FUN_10670d4d8;
    pppuStack_508 = &ppuStack_3f0;
    puStack_4e0 = &uStack_3a8;
    lStack_4d8 = lVar8;
    uStack_4d0 = param_3;
    puStack_4c0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(plVar11);
    _objc_opt_class(PTR_PTR_1126ccdf0);
    if (lVar9 == 0) {
      uStack_530 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_560,lVar9);
    }
    puVar4 = &uStack_641;
    FUN_106729e70();
    uStack_6b0 = 0xf;
    uStack_6a0 = 0x100;
    ppuStack_6b8 = &PTR_SUB_110862958;
    uStack_678 = 0;
    uStack_680 = 0;
    lStack_668 = 0;
    lStack_670 = 0;
    plStack_658 = (long *)0x0;
    uStack_660 = 0;
    plStack_650 = (long *)0x0;
    uStack_626 = *(undefined2 *)(puVar4 + 0x1a);
    uStack_638 = 10;
    uStack_628 = 0x100;
    ppuStack_640 = &PTR_SUB_110881e20;
    lStack_5f0 = 0;
    lStack_5f8 = 0;
    plStack_5e0 = (long *)0x0;
    uStack_5e8 = 0;
    plStack_5d8 = (long *)0x0;
    puVar5 = &uStack_729;
    pppuStack_688 = pppuVar10;
    puStack_608 = puVar4;
    pppuStack_600 = &ppuStack_6b8;
    FUN_10672a0fc();
    uStack_798 = 0xf;
    uStack_788 = 0x100;
    _objc_retain(plVar11);
    ppuStack_7a0 = &PTR_SUB_110862760;
    uStack_760 = 0;
    uStack_768 = 0;
    uStack_750 = 0;
    uStack_758 = 0;
    plStack_740 = (long *)0x0;
    uStack_748 = 0;
    plStack_738 = (long *)0x0;
    bStack_70e = puVar5[0x1a];
    bStack_70d = puVar5[0x1b];
    uStack_720 = 10;
    uStack_710 = 0x100;
    ppuStack_728 = &PTR_SUB_110862700;
    pppuStack_590 = &ppuStack_728;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    plStack_6c8 = (long *)0x0;
    uStack_6d0 = 0;
    plStack_6c0 = (long *)0x0;
    bStack_5b6 = (byte)uStack_626 | bStack_70e;
    bStack_5b5 = uStack_626._1_1_ & bStack_70d;
    uStack_5c8 = 4;
    uStack_5b8 = 0x100;
    ppuStack_5d0 = &PTR_SUB_1108629c8;
    pppuStack_598 = &ppuStack_640;
    plStack_568 = (long *)0x0;
    plStack_570 = (long *)0x0;
    uStack_578 = 0;
    uStack_580 = 0;
    lStack_588 = 0;
    puStack_7b8 = (undefined8 *)0x0;
    puStack_7b0 = (undefined8 *)0x0;
    uStack_7a8 = 0;
    uStack_7bc = 0;
    puVar6 = &uStack_560;
    plStack_770 = plVar11;
    puStack_6f0 = puVar5;
    pppuStack_6e8 = &ppuStack_7a0;
    func_0x0001000e77a0(puVar6,&ppuStack_5d0,&puStack_7b8,&uStack_7bc);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puStack_7b8 != (undefined8 *)0x0) {
      puStack_7b0 = puStack_7b8;
      __ZdlPv();
    }
    plVar3 = plStack_568;
    ppuStack_5d0 = &PTR_SUB_1108629c8;
    plStack_568 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_570;
    plStack_570 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_588 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_6c0;
    ppuStack_728 = &PTR_SUB_110862700;
    plStack_6c0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_6c8;
    plStack_6c8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    puStack_7b8 = &uStack_6e0;
    func_0x000100105004(&puStack_7b8);
    plVar3 = plStack_738;
    ppuStack_7a0 = &PTR_SUB_110862760;
    plStack_738 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_740;
    plStack_740 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    puStack_7b8 = &uStack_758;
    func_0x000100105004(&puStack_7b8);
    _objc_release(plStack_770);
    plVar3 = plStack_5d8;
    ppuStack_640 = &PTR_SUB_110881e20;
    plStack_5d8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_5e0;
    plStack_5e0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_5f8 != 0) {
      lStack_5f0 = lStack_5f8;
      __ZdlPv();
    }
    plVar3 = plStack_650;
    ppuStack_6b8 = &PTR_SUB_110862958;
    plStack_650 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_658;
    plStack_658 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_670 != 0) {
      lStack_668 = lStack_670;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_538);
    _objc_release(uStack_548);
    _objc_release(uStack_550);
    _objc_release(plVar11);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106696a4c; end: 106696bcb; -[SCLensExplorerFeedModelsPersistentStorage _getFeedModelsBatchWithSelectedFeedId:] */

void FUN_106696a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be1d7a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be77600(param_1,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106696b4c;
  puStack_48 = &UNK_110933198;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  uVar3 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0efa0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106696bcc; end: 106696bcf; -[SCLensExplorerFeedModelsPersistentStorage _getFeedModelsForFeedId:] */

void FUN_106696bcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1f070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getFeedModelsForFeedIdentifier__1125655b8);
  return;
}



/* Entry: 106696bd0; end: 106696c2f; -[SCLensExplorerFeedModelsPersistentStorage _getFeedModelsForFeedIdentifier:] */

void FUN_106696bd0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x00010bdd7760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    func_0x00010be232c0(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106696c30; end: 106696d7f; -[SCLensExplorerFeedModelsPersistentStorage _getSubFeedModelsForMainFeed:] */

void FUN_106696c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf0a100(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = param_1;
  func_0x00010bec5bc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c225c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bdd7780(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106696d80;
  puStack_50 = &UNK_1109331c8;
  puVar4 = puVar1;
  uStack_48 = param_1;
  func_0x00010c0b8600(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0efa0(param_1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106696d80; end: 106696d8f;  */

void FUN_106696d80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be951d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__responseFeedModelFromCacheFeed__112582e10,
             param_2,1);
  return;
}



/* Entry: 106696d90; end: 106697013; -[SCLensExplorerFeedModelsPersistentStorage _prefetchSectionIdsFromCacheFeeds:selectedFeedId:] */

undefined *
FUN_106696d90(undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar4 = puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      if (param_3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106696f98;
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      func_0x00010bfa3d80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar6);
      uVar6 = param_1;
      func_0x00010bec5bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(uVar6);
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
    puVar2 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar2 = puVar4;
LAB_106696f98:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010bfa3d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return puVar2;
}



/* Entry: 106697014; end: 10669705b;  */

undefined8 FUN_106697014(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfa3d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10669705c; end: 106697063;  */

void FUN_10669705c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isDefault_1125f9b30);
  return;
}



/* Entry: 106697064; end: 1066975a3; -[SCLensExplorerFeedModelsPersistentStorage _performChangesWithFeedModels:isBatchResponse:transactionContext:] */

/* WARNING: Possible PIC construction at 0x0001066971bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106697240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066971c0) */
/* WARNING: Removing unreachable block (ram,0x00010669720c) */
/* WARNING: Removing unreachable block (ram,0x000106697230) */
/* WARNING: Removing unreachable block (ram,0x000106697244) */
/* WARNING: Removing unreachable block (ram,0x000106697248) */
/* WARNING: Removing unreachable block (ram,0x000106697270) */
/* WARNING: Removing unreachable block (ram,0x000106697274) */
/* WARNING: Removing unreachable block (ram,0x0001066972a0) */
/* WARNING: Removing unreachable block (ram,0x0001066972d8) */
/* WARNING: Removing unreachable block (ram,0x0001066973c0) */
/* WARNING: Removing unreachable block (ram,0x0001066973cc) */
/* WARNING: Removing unreachable block (ram,0x0001066973d0) */
/* WARNING: Removing unreachable block (ram,0x0001066973e0) */
/* WARNING: Removing unreachable block (ram,0x0001066973e8) */
/* WARNING: Removing unreachable block (ram,0x00010669742c) */
/* WARNING: Removing unreachable block (ram,0x000106697448) */

void FUN_106697064(long param_1,undefined8 param_2,long param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_5;
  FUN_10670cbf0(param_5,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar4 = lVar1;
      func_0x00010bfa3d80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010bec5be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(lVar4);
    }
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if ((param_4 & 1) != 0) {
      _objc_retain(lVar2);
      lVar1 = lVar2;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(lVar2);
          }
          lVar6 = *(long *)(lVar7 * 8);
          func_0x00010c246a00();
          if (-1 < lVar6) {
            func_0x00010bdf9d60(param_1);
          }
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = lVar2;
        func_0x00010bf52a60();
      }
      _objc_release(lVar2);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(param_5);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c070490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066975a4; end: 1066975ab;  */

void FUN_1066975a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isDefault_1125f9b30);
  return;
}



/* Entry: 1066975ac; end: 106697697;  */

undefined8 FUN_1066975ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106697698; end: 10669772f; -[SCLensExplorerFeedModelsPersistentStorage _deleteCacheFeedModel:deleteFeedItems:transactionContext:] */

void FUN_106697698(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    func_0x00010bdfa080(param_1);
  }
  puVar1 = PTR_PTR_1126ccc70;
  FUN_10672b2ec(PTR_PTR_1126ccc70,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106697730; end: 1066978af; -[SCLensExplorerFeedModelsPersistentStorage _deleteFeedItemsForCacheFeedModel:transactionContext:] */

void FUN_106697730(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bfa3d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  FUN_10670c6f4(param_4,param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR_PTR_1126ccc78;
        FUN_106720c80(PTR_PTR_1126ccc78,*(undefined8 *)(lStack_118 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_4 + 8);
  FUN_10670c6f4(uVar4,puVar6,*(undefined8 *)(param_4 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1066978b0; end: 106697907; -[SCLensExplorerFeedModelsPersistentStorage _feedItemsFromCacheWithSectionId:] */

void FUN_1066978b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10670c6f4(uVar1,param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106697908; end: 106697917;  */

void FUN_106697908(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c093eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_lensFeedItemFromCache__1126029b8,param_2);
  return;
}



/* Entry: 106697918; end: 106697943; -[SCLensExplorerFeedModelsPersistentStorage _cachedFeedRemoteState] */

void FUN_106697918(void)

{
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106697944; end: 106697953; -[SCLensExplorerFeedModelsPersistentStorage _cacheFeedModelFrom:sortIndex:isDefaultFeed:] */

void FUN_106697944(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf266d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_cacheFeedModelWithContext_sortIn_1125a7358,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 106697954; end: 106697a23; -[SCLensExplorerFeedModelsPersistentStorage _responseFeedModelFromCacheFeed:fetchingFeedItems:] */

void FUN_106697954(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010bfa3d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010be0ec60(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126ccc88;
  func_0x00010bdd8000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3f60(puVar3,param_2,param_3,param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106697a24; end: 106697b37; -[SCLensExplorerFeedModelsPersistentStorage _subcategoriesForFeed:] */

void FUN_106697a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106697b38;
  uStack_40 = 0x106697b48;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  puStack_38 = puVar1;
  func_0x00010bf332e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf20();
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106697b38; end: 106697b4f;  */

void FUN_106697b38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106697b50; end: 106697b9b;  */

void FUN_106697b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110933368);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106697b9c; end: 106697ba3;  */

void FUN_106697b9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subcategoryIdentifier_1126754b8);
  return;
}



/* Entry: 106697ba4; end: 106697cb7; -[SCLensExplorerFeedModelsPersistentStorage _subcategoriesForCacheFeed:] */

void FUN_106697ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106697b38;
  uStack_40 = 0x106697b48;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  puStack_38 = puVar1;
  func_0x00010bf332e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf40();
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106697cb8; end: 106697d17;  */

void FUN_106697cb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c25e3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106697d18; end: 106697d1f;  */

void FUN_106697d18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subCategoryId_112675320);
  return;
}



/* Entry: 106697d20; end: 106697d6f; -[SCLensExplorerFeedModelsPersistentStorage _containerSubfeedIdsFromFeed:] */

void FUN_106697d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106697d70; end: 106697e5b;  */

void FUN_106697d70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106697b38;
  uStack_30 = 0x106697b48;
  uStack_28 = 0;
  func_0x00010c0be960(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106697e5c; end: 106697f1b;  */

void FUN_106697e5c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  if ((int)puVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar3 != 0) goto LAB_106697f04;
    lVar2 = param_2;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar4 = *(long *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar2;
  }
  _objc_release(lVar4);
LAB_106697f04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106697f1c; end: 10669805b; -[SCLensExplorerFeedModelsPersistentStorage _feedsWithContainerSubfeedsFromFeeds:] */

void FUN_106697f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10669805c;
  puStack_60 = &UNK_110933478;
  uStack_58 = param_1;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb2660(param_3,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bdd7780(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf09f80(param_3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10669805c; end: 106698077;  */

void FUN_10669805c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerSubfeedIdsFromFeed__112557778,param_2);
  return;
}



/* Entry: 106698078; end: 1066980a7; -[SCLensExplorerFeedModelsPersistentStorage .cxx_destruct] */

void FUN_106698078(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066980a8; end: 10669826f; +[SCLensExplorerLensFeedItem lensFeedItemFromCache:] */

void FUN_1066980a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106698270;
  uStack_50 = 0x106698280;
  uStack_48 = 0;
  uVar1 = param_3;
  func_0x00010c0cfdc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be940();
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106698270; end: 106698287;  */

void FUN_106698270(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106698288; end: 1066982fb;  */

void FUN_106698288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ccc20;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be4b2c0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066982fc; end: 1066982ff;  */

void FUN_1066982fc(void)

{
  return;
}



/* Entry: 106698300; end: 106698543;  */

void FUN_106698300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ccc20;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be4bf60(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25a040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106698544; end: 106698703; -[SCLensExplorerLensFeedItem cacheLensFeedItemWithSectionId:context:] */

void FUN_106698544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106698270;
  uStack_50 = 0x106698280;
  uStack_48 = 0;
  func_0x00010c0be960(param_1);
  puVar1 = PTR_PTR_1126ccc98;
  _objc_alloc(PTR_PTR_1126ccc98);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cae0(puVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106698704; end: 10669876b;  */

void FUN_106698704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd8140(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc90;
  func_0x00010c094c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669876c; end: 106698843;  */

void FUN_10669876c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bdd82c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bdd81e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      puVar2 = PTR_PTR_1126ccc90;
      func_0x00010c0976e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar2;
      _objc_release(uVar4);
    }
  }
  else {
    puVar2 = PTR_PTR_1126ccc90;
    func_0x00010c25a040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar5 = *(long *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106698844; end: 10669897b;  */

void FUN_106698844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd8120(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc90;
  func_0x00010c092160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669897c; end: 106698ac3; -[SCLensExplorerLensFeedItem _cachedCreatorWithCreator:] */

void FUN_10669897c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ccca0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c292e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf1ade0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e1aa0(param_3);
  uVar7 = param_3;
  func_0x00010c06d940(param_3);
  uVar8 = param_3;
  func_0x00010c2427a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c242800();
  _objc_release(param_3);
  func_0x00010c05c6e0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,(char)uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106698ac4; end: 106698bb7; -[SCLensExplorerLensFeedItem _cachedAnimationWithAnimation:] */

void FUN_106698ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe8fa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccca8;
  _objc_alloc(PTR_PTR_1126ccca8);
  uVar1 = param_4;
  func_0x00010c2810a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0c54a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6d40(param_4);
  _objc_release(param_4);
  func_0x00010c059200(param_1,puVar3,param_3,uVar1,uVar4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106698bb8; end: 106698bbf;  */

void FUN_106698bb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_absoluteString_112598bb0);
  return;
}



/* Entry: 106698bc0; end: 106698ce7; -[SCLensExplorerLensFeedItem _cachedLoggingInfoWithLoggingInfo:] */

void FUN_106698bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126cccb0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfec9e0(param_3);
  uVar3 = param_3;
  func_0x00010c11fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c11fc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c084c40(param_3);
  uVar7 = param_3;
  func_0x00010bf4ae20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c156040();
  _objc_release(param_3);
  func_0x00010c01d7a0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106698ce8; end: 106698f7b; -[SCLensExplorerLensFeedItem _cachedLensItemWithLensItem:] */

void FUN_106698ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = PTR_PTR_1126cccb8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bdd7f80(param_1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010bdd7e80(param_1,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bdd8200(param_1,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0900a0(param_3);
  func_0x00010bdd7ac0(param_1,param_2,uVar16);
  uVar16 = param_3;
  func_0x00010c07f200();
  uVar17 = param_3;
  func_0x00010c29c5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c067fc0();
  uVar19 = param_3;
  func_0x00010c07d340();
  _objc_release(param_3);
  func_0x00010c0591e0(puVar1,param_2,uVar2,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,(int)param_1
                      ,(char)uVar16,uVar18,(char)uVar19);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106698f7c; end: 106699283; -[SCLensExplorerLensFeedItem _cachedLensTopicItemWithStoryItem:] */

void FUN_106698f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_106698270;
  uStack_78 = 0x106698280;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_106698270;
  uStack_a8 = 0x106698280;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_106698270;
  uStack_d8 = 0x106698280;
  uStack_d0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_106698270;
  uStack_108 = 0x106698280;
  uStack_100 = 0;
  uVar1 = param_3;
  func_0x00010bf0cb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0540();
  _objc_release(uVar1);
  if (puStack_90[5] == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126cccc0;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c1121a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beec820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c5c0();
    uVar3 = puStack_f0[5];
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bdd7f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c111400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c1113e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054440(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106699284; end: 106699367;  */

void FUN_106699284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106699368; end: 106699577; -[SCLensExplorerLensFeedItem _cachedStoryItemWithStoryItem:] */

void FUN_106699368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106698270;
  uStack_70 = 0x106698280;
  uStack_68 = 0;
  uVar1 = param_3;
  func_0x00010bf0cb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0540();
  _objc_release(uVar1);
  if (puStack_88[5] == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126cccc8;
    _objc_alloc(PTR_PTR_1126cccc8);
    uVar1 = param_3;
    func_0x00010c1121a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c111400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c1113e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c5c0(param_3);
    uVar5 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d9e0(puVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106699578; end: 1066995af;  */

void FUN_106699578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066995b0; end: 106699833; -[SCLensExplorerLensFeedItem _cachedLensCreatorItemWithCreatorItem:] */

void FUN_1066995b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0960a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cccd0;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bf5b440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c080120();
  uVar8 = param_3;
  func_0x00010c0e1aa0();
  uVar9 = param_3;
  func_0x00010bf5b120();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf5b140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c1170a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bdd8200(param_1,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf5b880(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdd7f60(param_1,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006940(puVar3,param_2,uVar1,uVar4,uVar5,uVar6,uVar7 & 0xffffffff,uVar8 & 0xffffffff,
                      uVar9,uVar10,uVar12,uVar2,uVar14,param_1);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106699834; end: 10669983f;  */

void FUN_106699834(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cachedLensPreviewWithLensPrevie_112553a10,
             param_2);
  return;
}



/* Entry: 106699840; end: 106699933; -[SCLensExplorerLensFeedItem _cachedLensPreviewWithLensPreview:] */

void FUN_106699840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cccd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26e0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x00010beec820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar1,param_2,uVar2,uVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106699934; end: 106699a43; -[SCLensExplorerLensFeedItem _cachedCreatorStoryWithCreatorStory:] */

void FUN_106699934(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ccce0;
  puVar6 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf5b8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bdd82a0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c26e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8340(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c25b220(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c006a80(puVar1,param_2,uVar3,param_1,lVar5);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    puVar6 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106699a44; end: 106699b07; -[SCLensExplorerLensFeedItem _cachedStoryDataWithStoryData:] */

void FUN_106699a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ccce8;
  puVar6 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c078f60(param_3);
    lVar5 = param_3;
    func_0x00010c0e1a60(param_3);
    _objc_release(param_3);
    func_0x00010c006900(puVar1,param_2,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar6 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106699b08; end: 106699c9b; -[SCLensExplorerLensFeedItem _cachedThumbnailWithThumbnail:] */

void FUN_106699b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126cccf0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c085300(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0ed6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0880c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf4cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf4cd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c020be0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106699c9c; end: 106699e7b; -[SCLensExplorerLensFeedItem _cachedContainerItemWithContainerItem:] */

void FUN_106699c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7c40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cccf8;
  _objc_alloc(PTR_PTR_1126cccf8);
  uVar1 = param_3;
  func_0x00010bf4ae20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf4ada0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar7;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0027a0(puVar3,param_2,uVar1,uVar4,uVar2,param_1,uVar5,uVar6,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106699e7c; end: 106699e87;  */

void FUN_106699e7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cachedContainerContentItemWithC_112553968,
             param_2);
  return;
}



/* Entry: 106699e88; end: 106699fe7; -[SCLensExplorerLensFeedItem _cachedContainerContentItemWithContentItem:] */

void FUN_106699e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106698270;
  uStack_40 = 0x106698280;
  uStack_38 = 0;
  func_0x00010c0be980(param_3);
  puVar1 = PTR_PTR_1126ccd08;
  _objc_alloc(PTR_PTR_1126ccd08);
  func_0x00010c02c5c0();
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106699fe8; end: 10669a04f;  */

void FUN_106699fe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd8140(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd00;
  func_0x00010c094c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669a050; end: 10669a127;  */

void FUN_10669a050(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bdd82c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bdd81e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      puVar2 = PTR_PTR_1126ccd00;
      func_0x00010c0976e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar2;
      _objc_release(uVar4);
    }
  }
  else {
    puVar2 = PTR_PTR_1126ccd00;
    func_0x00010c25a040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar5 = *(long *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10669a128; end: 10669a1f7;  */

void FUN_10669a128(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd8120(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd00;
  func_0x00010c092160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669a1f8; end: 10669a33b; -[SCLensExplorerLensFeedItem _cacheRenderStrategyFrom:] */

void FUN_10669a1f8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar1 = PTR_PTR_1126ccd10;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c2480c0(param_4);
  uVar3 = param_4;
  func_0x00010c0ed100(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bdd7c80(param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf4dac0(param_4);
  uVar6 = param_2;
  func_0x00010bdd7c20(param_2,param_3,uVar5);
  func_0x00010c0852a0(param_4);
  fVar9 = (float)param_1;
  uVar5 = param_4;
  func_0x00010c2902c0(param_4);
  uVar7 = param_4;
  func_0x00010c2902e0(param_4);
  uVar8 = param_4;
  func_0x00010c097520(param_4);
  func_0x00010bdd7c60(param_2,param_3,uVar8);
  func_0x00010c097500(param_4);
  _objc_release(param_4);
  func_0x00010c04ad80(fVar9,(float)param_1,puVar1,param_3,uVar2,uVar4,uVar6,uVar5,uVar7,param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669a33c; end: 10669a353; -[SCLensExplorerLensFeedItem _cacheRenderStrategyLensTileLayoutFrom:] */

undefined4 FUN_10669a33c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = 0;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10669a354; end: 10669a453; -[SCLensExplorerLensFeedItem _cacheRenderStrategyOrientationFrom:] */

void FUN_10669a354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_106698270;
  uStack_30 = 0x106698280;
  uStack_28 = 0;
  func_0x00010c0be340(param_3);
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



/* Entry: 10669a454; end: 10669a4cb;  */

void FUN_10669a454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bdd7ca0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  puVar1 = PTR_PTR_1126ccd18;
  _objc_alloc(PTR_PTR_1126ccd18);
  func_0x00010c042840();
  puVar2 = PTR_PTR_1126ccd20;
  func_0x00010bfa4120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10669a4cc; end: 10669a537;  */

void FUN_10669a4cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ccd20;
  puVar1 = PTR_PTR_1126ccd28;
  _objc_opt_new(PTR_PTR_1126ccd28);
  func_0x00010bfa4140(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


