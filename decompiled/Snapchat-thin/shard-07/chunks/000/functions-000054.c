/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105105174; end: 1051053c7; -[SCCommunityActionMenuRouteActionsImpl presentPendingCommunityActionMenuWithDelegate:] */

void FUN_105105174(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  lVar6 = param_3;
  _objc_storeWeak(lVar1,param_3);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108f57acc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108f57b2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar5);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c18b5e0(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  func_0x00010c10af80();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar8);
  func_0x00010bf83000(lVar6);
  _objc_release(uVar8);
  return;
}



/* Entry: 1051053c8; end: 10510543b;  */

void FUN_1051053c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10510543c; end: 105105443;  */

void FUN_10510543c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectLeaveCommunity_1125bc458);
  return;
}



/* Entry: 105105444; end: 1051054b7;  */

void FUN_105105444(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051054b8; end: 1051054bf;  */

void FUN_1051054b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didComplete_1125ba8c8);
  return;
}



/* Entry: 1051054c0; end: 105105713; -[SCCommunityActionMenuRouteActionsImpl presentFriendProfileCommunityActionMenuWithDelegate:] */

void FUN_1051054c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  lVar6 = param_3;
  _objc_storeWeak(lVar1,param_3);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108f57b14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108f57b2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar5);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c18b5e0(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  func_0x00010c10af80();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar8);
  func_0x00010bf83000(lVar6);
  _objc_release(uVar8);
  return;
}



/* Entry: 105105714; end: 105105787;  */

void FUN_105105714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105788; end: 10510578f;  */

void FUN_105105788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectAddCommunity_1125bc328);
  return;
}



/* Entry: 105105790; end: 105105803;  */

void FUN_105105790(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105804; end: 10510580b;  */

void FUN_105105804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didComplete_1125ba8c8);
  return;
}



/* Entry: 10510580c; end: 105105bab; -[SCCommunityActionMenuRouteActionsImpl presentCommunityProfileActionMenuWithDelegate:] */

void FUN_10510580c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_1 + 0x50;
  lVar7 = param_3;
  _objc_storeWeak(lVar5,param_3);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000108f57acc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000108f58d74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x0001080608cc();
  puVar4 = PTR_PTR_1126b10a0;
  if ((int)lVar5 != 0) {
    func_0x000108061d08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cfa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar6 = puVar4;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar5);
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
    lVar5 = param_3;
    _objc_release(param_3);
  }
  puVar4 = PTR_PTR_1126b10a0;
  func_0x000108f57b2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar6 = puVar4;
  func_0x00010bf1d200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  lVar5 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c18b5e0(puVar4);
  _objc_release(lVar5);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  func_0x00010c10af80();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf83000(lVar7);
  _objc_release(uVar9);
  return;
}



/* Entry: 105105bac; end: 105105c1f;  */

void FUN_105105bac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105c20; end: 105105c27;  */

void FUN_105105c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectLeaveCommunity_1125bc458);
  return;
}



/* Entry: 105105c28; end: 105105c9b;  */

void FUN_105105c28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105c9c; end: 105105ca3;  */

void FUN_105105c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectAddToStory_1125bc338);
  return;
}



/* Entry: 105105ca4; end: 105105d17;  */

void FUN_105105ca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105d18; end: 105105d1f;  */

void FUN_105105d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7aff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectShareCommunity_1125bc5a0);
  return;
}



/* Entry: 105105d20; end: 105105d93;  */

void FUN_105105d20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105d94; end: 105105d9b;  */

void FUN_105105d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didComplete_1125ba8c8);
  return;
}



/* Entry: 105105d9c; end: 105105e1f; -[SCCommunityActionMenuRouteActionsImpl presentLeaveCustomStoryAlertWithCustomStory:] */

void FUN_105105d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf23600(uVar2,param_2,lVar1,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105105e20; end: 105105f33; -[SCCommunityActionMenuRouteActionsImpl launchCommunitiesOnboardingFlow] */

void FUN_105105e20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar5 = 0x82;
    func_0x000100c6f294(0x82);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar4,param_2,puVar2,param_1,uVar5,uVar6,0,0,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar4);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105105f34; end: 105105fc3; -[SCCommunityActionMenuRouteActionsImpl presentAddToStoryWithReplyConfiguration:] */

void FUN_105105f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf237e0(uVar2,param_2,param_3,lVar1,param_1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x28),param_2,uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105105fc4; end: 1051060af; -[SCCommunityActionMenuRouteActionsImpl presentCommunityProfileWithGroupId:] */

void FUN_105105fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b1450;
    _objc_alloc(PTR_PTR_1126b1450);
    uVar5 = 9;
    func_0x00010bc9107c(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0190a0(puVar4,param_2,param_3,puVar2,param_1,uVar5,0);
    _objc_release(uVar5);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x38),param_2,puVar4,param_1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051060b0; end: 105106147; -[SCCommunityActionMenuRouteActionsImpl presentSendToWithShareSheetConfiguration:sourcePageViewName:delegate:] */

void FUN_1051060b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b3e58;
  _objc_alloc(PTR_PTR_1126b3e58);
  func_0x00010c00b1a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105106148; end: 10510620f; -[SCCommunityActionMenuRouteActionsImpl verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_105106148(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105106210; end: 10510623b;  */

void FUN_105106210(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510623c; end: 1051062e3; -[SCCommunityActionMenuRouteActionsImpl didCompleteLeaveCustomStoryScopeWithLeaveOrBlock:] */

void FUN_10510623c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf94c40(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1051062e4; end: 10510630f;  */

void FUN_1051062e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105106310; end: 1051063f3; -[SCCommunityActionMenuRouteActionsImpl dismissCameraScope:] */

void FUN_105106310(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_3) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf94c40(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051063f4; end: 10510641f;  */

void FUN_1051063f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105106420; end: 105106457; -[SCCommunityActionMenuRouteActionsImpl communitiesProfileDidDismissWithScope:] */

void FUN_105106420(long param_1)

{
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x38));
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105106458; end: 10510651f; -[SCCommunityActionMenuRouteActionsImpl didDismissCommunitySharingFlow] */

void FUN_105106458(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105106520; end: 10510654b;  */

void FUN_105106520(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510654c; end: 105106577; -[SCCommunityActionMenuRouteActionsImpl _completeActionMenuFlow] */

void FUN_10510654c(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105106578; end: 1051065a3; -[SCCommunityActionMenuRouteActionsImpl _completeActionMenuFlowWithLeaveCustomStory] */

void FUN_105106578(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051065a4; end: 1051065cf; -[SCCommunityActionMenuRouteActionsImpl dialogDidDismiss:] */

void FUN_1051065a4(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051065d0; end: 105106657; -[SCCommunityActionMenuRouteActionsImpl .cxx_destruct] */

void FUN_1051065d0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105106658; end: 1051067d7; -[SCCommunityActionMenuWorkflow initWithGroupId:performer:customStoriesDataFetcher:router:actionMenuScopeDelegate:launchSource:storiesBlizzardLogger:offPlatformLinkGenerationService:] */

undefined1 *
FUN_105106658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_1126e6300;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051067d8; end: 10510681b; -[SCCommunityActionMenuWorkflow beginWorkflow] */

void FUN_1051067d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (1 < lVar1) {
    if (lVar1 != 2) {
      if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be7ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__presentCommunityProfileActionMe_11257c470);
        return;
      }
      if (lVar1 != 4) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010be7b750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentFriendProfileCommunityLo_11257c770)
    ;
    return;
  }
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMyProfileCommunityLongPr_11257cc48)
    ;
    return;
  }
  if (lVar1 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPendingCommunityLongPres_11257ce68);
  return;
}



/* Entry: 10510681c; end: 10510690b; -[SCCommunityActionMenuWorkflow _presentFriendProfileCommunityLongPressActionMenuIfQualified] */

void FUN_10510681c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf625a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10510690c; end: 105106953;  */

void FUN_10510690c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105106954; end: 105106a6b; -[SCCommunityActionMenuWorkflow _presentFriendProfileCommunityLongPressActionMenuWithCustomStories:] */

void FUN_105106954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7480(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105106a6c; end: 105106abf;  */

void FUN_105106a6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105106ac0; end: 105106c93; -[SCCommunityActionMenuWorkflow _presentFriendProfileCommunityLongPressActionMenuWithCustomStories:pendingCustomStories:] */

void FUN_105106ac0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_190;
    do {
      lVar5 = 0;
      do {
        if (*plStack_190 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_198 + lVar5 * 8);
        func_0x00010c27dd80();
        if (lVar2 == 7) goto LAB_105106c4c;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  param_3 = param_4;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_1d0;
    do {
      lVar5 = 0;
      do {
        if (*plStack_1d0 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_1d8 + lVar5 * 8);
        func_0x00010c27dd80();
        if (lVar2 == 7) goto LAB_105106c4c;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  func_0x00010be7b720(param_1);
LAB_105106c54:
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_105106c94;
  uStack_200 = param_1;
  lStack_1f8 = param_4;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_208,lVar1);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  _objc_copyWeak(auStack_210,auStack_208);
  func_0x00010c1429e0(uVar3);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_208);
  return;
LAB_105106c4c:
  _objc_release(param_3);
  goto LAB_105106c54;
}



/* Entry: 105106c94; end: 105106d3b; -[SCCommunityActionMenuWorkflow _presentFriendProfileCommunityLongPressActionMenu] */

void FUN_105106c94(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105106d3c; end: 105106d8b;  */

void FUN_105106d3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10c280(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105106d8c; end: 105106e33; -[SCCommunityActionMenuWorkflow _presentMyProfileCommunityLongPressActionMenu] */

void FUN_105106d8c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105106e34; end: 105106e83;  */

void FUN_105106e34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10d2a0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105106e84; end: 105106f2b; -[SCCommunityActionMenuWorkflow _presentPendingCommunityLongPressActionMenu] */

void FUN_105106e84(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105106f2c; end: 105106f7b;  */

void FUN_105106f2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10d7c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105106f7c; end: 105107023; -[SCCommunityActionMenuWorkflow _presentCommunityProfileActionMenu] */

void FUN_105106f7c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105107024; end: 105107073;  */

void FUN_105107024(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10bb00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105107074; end: 105107097; -[SCCommunityActionMenuWorkflow didSelectLeaveCommunity] */

void FUN_105107074(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0 || lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be49ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__leaveVerifiedCommunity_112570158);
    return;
  }
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be49e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__leavePendingCommunity_112570130);
    return;
  }
  return;
}



/* Entry: 105107098; end: 10510718b; -[SCCommunityActionMenuWorkflow _leaveVerifiedCommunity] */

void FUN_105107098(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf62500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10510718c; end: 1051071d3;  */

void FUN_10510718c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be479e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051071d4; end: 1051072d3; -[SCCommunityActionMenuWorkflow _launchLeavePrivateStoryAlertWithCustomStory:] */

void FUN_1051071d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b47a8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03bfa0(puVar1,param_2,uVar2,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051072d4;
  puStack_50 = &UNK_110868098;
  puStack_48 = puVar1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 1051072d4; end: 1051072df;  */

void FUN_1051072d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentLeaveCustomStoryAlertWith_112620c88,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1051072e0; end: 1051073d3; -[SCCommunityActionMenuWorkflow _leavePendingCommunity] */

void FUN_1051072e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7420(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051073d4; end: 10510741b;  */

void FUN_1051073d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be479c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510741c; end: 10510751b; -[SCCommunityActionMenuWorkflow _launchLeavePendingPrivateStoryAlertWithCustomStory:] */

void FUN_10510741c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b47a8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03bfa0(puVar1,param_2,uVar2,uVar3,1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10510751c;
  puStack_50 = &UNK_110868098;
  puStack_48 = puVar1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 10510751c; end: 105107527;  */

void FUN_10510751c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentLeaveCustomStoryAlertWith_112620c88,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105107528; end: 10510753f; -[SCCommunityActionMenuWorkflow didSelectAddCommunity] */

void FUN_105107528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110868118);
  return;
}



/* Entry: 105107540; end: 1051076a3; -[SCCommunityActionMenuWorkflow didSelectAddToStory] */

void FUN_105107540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b47c8;
  _objc_alloc(PTR_PTR_1126b47c8);
  func_0x00010c01f260();
  puVar2 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  func_0x000108f581a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e6c0(puVar3,param_2,0,0,uVar6,puVar4,0,0);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar5 = PTR_PTR_1126b1bb0;
  func_0x00010bf81d20(PTR_PTR_1126b1bb0,param_2,puVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051076a4;
  puStack_50 = &UNK_110868098;
  puStack_48 = puVar5;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_68);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1051076a4; end: 1051076af;  */

void FUN_1051076a4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentAddToStoryWithReplyConfig_112620648,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1051076b0; end: 105107723; -[SCCommunityActionMenuWorkflow didSelectLaunchCommunityProfile] */

void FUN_1051076b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105107724;
  puStack_30 = &UNK_110868098;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c1429e0(uVar2,param_2,&puStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105107724; end: 10510772f;  */

void FUN_105107724(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentCommunityProfileWithGroup_1126208e8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105107730; end: 10510782f; -[SCCommunityActionMenuWorkflow didSelectShareCommunity] */

void FUN_105107730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105107830;
  puStack_50 = &UNK_110850038;
  puVar2 = PTR_PTR_1126ae720;
  lStack_48 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0808;
  _objc_alloc();
  func_0x00010c051820();
  uStack_70 = 0x36;
  if (*(long *)(param_1 + 0x30) != 3) {
    uStack_70 = 0xe3;
  }
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105107904;
  puStack_88 = &UNK_110868138;
  puStack_80 = puVar3;
  lStack_78 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_a0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105107830; end: 105107903;  */

void FUN_105107830(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar3,param_2,uVar1,uVar2,0,0x12,0,0);
  func_0x00010bfe9ca0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105107904; end: 105107913;  */

void FUN_105107904(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentSendToWithShareSheetConfi_112621278,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105107914; end: 105107943; -[SCCommunityActionMenuWorkflow didComplete] */

void FUN_105107914(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105107944; end: 10510798b; -[SCCommunityActionMenuWorkflow didCompleteWithLeaveCommunity] */

void FUN_105107944(long param_1,undefined8 param_2)

{
  func_0x00010c0af760(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),0,2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510798c; end: 10510798f; -[SCCommunityActionMenuWorkflow actionSheetDidDismiss:] */

void FUN_10510798c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didComplete_1125ba8c8);
  return;
}



/* Entry: 105107990; end: 1051079f7; -[SCCommunityActionMenuWorkflow .cxx_destruct] */

void FUN_105107990(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051079f8; end: 105107ac3; -[SCCommunityActionMenuScope initWithPresentingViewController:delegate:groupId:launchSource:] */

undefined1 *
FUN_1051079f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6308;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105107ac4; end: 105107adb; -[SCCommunityActionMenuScope presentingViewController] */

void FUN_105107ac4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105107adc; end: 105107ae3; -[SCCommunityActionMenuScope groupId] */

undefined8 FUN_105107adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105107ae4; end: 105107afb; -[SCCommunityActionMenuScope delegate] */

void FUN_105107ae4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105107afc; end: 105107b03; -[SCCommunityActionMenuScope launchSource] */

undefined8 FUN_105107afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105107b04; end: 105107b37; -[SCCommunityActionMenuScope .cxx_destruct] */

void FUN_105107b04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105107b38; end: 105107fa7; -[SCCommunityPillTapEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105107b38(long param_1)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126b4d88;
  _objc_alloc();
  lVar18 = (long)_DAT_11271c6f4;
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11271c6f8;
  lVar4 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c08e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar20);
  lVar6 = lVar20;
  func_0x00010c08e1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271c6fc;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf42de0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11271c704;
  lVar9 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0391c0();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar11 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  lVar2 = param_1 + _DAT_11271c708;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar20;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_initWeak(auStack_70,param_1);
  puVar12 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b4d90;
  _objc_alloc();
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c70c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar6 = lVar20;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar18);
  lVar8 = lVar18;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar10 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271c710;
  _objc_loadWeakRetained();
  lVar15 = lVar7;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040860();
  lVar21 = (long)_DAT_11271c714;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar13;
  _objc_release(uVar19);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar21));
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar9);
  _objc_release(puVar11);
  _objc_release(puVar1);
  return;
}



/* Entry: 105107fa8; end: 105107fef;  */

void FUN_105107fa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105107ff0; end: 105108113; -[SCCommunityPillTapEntryPoint _createCommunityOrgServiceWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105107ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271c718;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105108114; end: 1051081b3; -[SCCommunityPillTapEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105108114(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c6fc);
  _objc_destroyWeak(param_1 + _DAT_11271c6f8);
  _objc_storeStrong(param_1 + _DAT_11271c700,0);
  _objc_destroyWeak(param_1 + _DAT_11271c710);
  _objc_destroyWeak(param_1 + _DAT_11271c718);
  _objc_destroyWeak(param_1 + _DAT_11271c704);
  _objc_destroyWeak(param_1 + _DAT_11271c708);
  _objc_destroyWeak(param_1 + _DAT_11271c70c);
  _objc_destroyWeak(param_1 + _DAT_11271c6f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c714,0);
  return;
}



/* Entry: 1051081b4; end: 105108307; -[SCCommunityPillTapRouteActionImpl initWithPresentingViewController:leaveCustomStoryLauncher:leaveCustomStoryScopeServices:communitiesProfileScopeLauncher:communitySharingScopeExposer:circumstanceEngine:] */

undefined1 *
FUN_1051081b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e6310;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105108308; end: 10510848f; -[SCCommunityPillTapRouteActionImpl presentCommunityProfileWithGroupId:delegate:isViewingUserVerified:userId:ctaStatus:] */

void FUN_105108308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_storeWeak(param_1 + 0x38,param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b1450;
    _objc_alloc(PTR_PTR_1126b1450);
    uVar4 = 9;
    func_0x00010bc9107c(9);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      uVar5 = 0x82;
      func_0x000100c6f294(0x82);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0190c0(puVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      func_0x00010c0190a0(puVar3);
    }
    _objc_release(uVar4);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105108490; end: 10510887f; -[SCCommunityPillTapRouteActionImpl presentPendingCommunityPillTapOptionsWithDelegate:] */

void FUN_105108490(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_178 [8];
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x38,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = auStack_98;
  _objc_initWeak(puVar2,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108061d80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105108880;
  puStack_a8 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010befa120(puVar1);
  puVar5 = PTR_PTR_1126aed70;
  func_0x000108061cc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar8;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105108954;
  puStack_d0 = &UNK_1108482a8;
  puVar2 = auStack_98;
  _objc_copyWeak(auStack_c8,puVar2);
  func_0x00010beff4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = puVar1;
  func_0x00010befa120(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000108061d68();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar8;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105108a28;
  puStack_f8 = &UNK_110848c78;
  _objc_retain(param_3);
  lStack_f0 = param_3;
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = PTR_PTR_1126aed70;
  func_0x000108061ca8();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar8;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105108a58;
  puStack_120 = &UNK_110848c78;
  _objc_retain(param_3);
  lStack_118 = param_3;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar4;
  puStack_88 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar8;
  func_0x000108061d98();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x000108061db0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  func_0x00010c18b5e0(puVar8);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lStack_118);
  _objc_release(puVar4);
  _objc_release(lStack_f0);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  lVar10 = param_3;
  __Unwind_Resume(param_3);
  pcStack_148 = FUN_105108880;
  lStack_170 = param_1;
  puStack_168 = puVar3;
  puStack_160 = puVar1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_178,lVar10 + 0x20);
  func_0x00010bf84b00(puVar2);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar2);
  return;
}



/* Entry: 105108880; end: 105108927;  */

void FUN_105108880(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105108928; end: 105108953;  */

void FUN_105108928(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105108954; end: 1051089fb;  */

void FUN_105108954(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1051089fc; end: 105108a87;  */

void FUN_1051089fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105108a88; end: 105108ad7; -[SCCommunityPillTapRouteActionImpl presentLeaveCustomStoryAlertCustomStoryWithCustomStory:] */

void FUN_105108a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf23600(uVar1,param_2,*(undefined8 *)(param_1 + 8),param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105108ad8; end: 105108b4f; -[SCCommunityPillTapRouteActionImpl didSelectShareCommunityOnboarding] */

void FUN_105108ad8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b3e58;
  _objc_alloc(PTR_PTR_1126b3e58);
  func_0x00010c00b1a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105108b50; end: 105108b7b; -[SCCommunityPillTapRouteActionImpl didSelectViewCommunity] */

void FUN_105108b50(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08bbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105108b7c; end: 105108c23; -[SCCommunityPillTapRouteActionImpl didCompleteLeaveCustomStoryScopeWithLeaveOrBlock:] */

void FUN_105108b7c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf94c40(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105108c24; end: 105108c4f;  */

void FUN_105108c24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105108c50; end: 105108c77; -[SCCommunityPillTapRouteActionImpl communitiesProfileDidDismissWithScope:] */

void FUN_105108c50(long param_1)

{
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bde2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeFlow_1125564c8);
  return;
}



/* Entry: 105108c78; end: 105108d5b; -[SCCommunityPillTapRouteActionImpl didDismissCommunitySharingFlow] */

void FUN_105108c78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c2a4ae0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105108d5c; end: 105108d87;  */

void FUN_105108d5c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105108d88; end: 105108d8b; -[SCCommunityPillTapRouteActionImpl dialogDidDismiss:] */

void FUN_105108d88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeFlow_1125564c8);
  return;
}



/* Entry: 105108d8c; end: 105108db7; -[SCCommunityPillTapRouteActionImpl _completeFlow] */

void FUN_105108d8c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


