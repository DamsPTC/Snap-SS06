/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107208cb0; end: 107208d5f; -[SCLegacyStoriesChromeInteractionSession _handleSubscribingActionSuccess:cheetahStory:] */

void FUN_107208cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b23b28(param_4,param_3,uVar1,*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar1);
  if ((int)param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe7580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000108e07094();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107aff838(param_4,uVar2,uVar1,*(undefined8 *)(param_1 + 0x88));
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107208d60; end: 107208dc3; -[SCLegacyStoriesChromeInteractionSession _handleSubscribingActionFailure:cheetahStory:] */

void FUN_107208d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b23b28(param_4,param_3,uVar1,*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107208dc4; end: 107208e6f; -[SCLegacyStoriesChromeInteractionSession _showMiniProfileWithFriendStories:] */

void FUN_107208dc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c105880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107208e70;
  puStack_40 = &UNK_110895bd8;
  lStack_38 = param_1;
  func_0x00010c244960(uVar1,param_2,uVar2,PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107208e70; end: 107208f83;  */

void FUN_107208e70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar6 = param_2;
  if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf0e960(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c22c0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c105880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf0e960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c22c0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x000109020298(lVar2,uVar3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bebba40(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107208f84; end: 107209293; -[SCLegacyStoriesChromeInteractionSession _presentPublicProfileForStory:] */

void FUN_107208f84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar9);
  if (lVar2 != 0) {
    lVar9 = param_3;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      lVar1 = param_3;
      func_0x00010bf25280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c116820();
      _objc_release(lVar1);
      _objc_release(lVar9);
      if ((int)lVar2 == 0) goto LAB_107209270;
    }
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar9);
    lVar1 = lVar9;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18eba0();
    _objc_release(lVar1);
    _objc_release(lVar9);
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar9);
    lVar1 = lVar9;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(lVar1,param_2,0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar9);
    puVar3 = PTR_PTR_1126b4158;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010bf25000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar9);
    lVar4 = lVar9;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f1880();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x11;
    func_0x00010bc9107c(0x11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 6;
    func_0x00010bb0584c(6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c105860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03bd00(puVar3,param_2,lVar2,param_1,lVar5,uVar6,uVar7,0,lVar8);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar9 = *(long *)(param_1 + 0x48);
    if (lVar9 == 0) {
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126afea0;
      _objc_opt_class(PTR_PTR_1126afea0);
      lVar1 = lVar9;
      func_0x00010beecc20(lVar9,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      lVar9 = lVar1;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = lVar9;
      _objc_release(uVar6);
      _objc_release(lVar1);
      lVar9 = *(long *)(param_1 + 0x48);
    }
    func_0x00010bf25200(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(lVar9);
    _objc_release(puVar3);
  }
LAB_107209270:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107209294; end: 107209497; -[SCLegacyStoriesChromeInteractionSession _logPublicStoryReplyActionWithPage:] */

void FUN_107209294(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x000108f484e8();
  if (iVar1 != 0) {
    ppuVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110dcab38;
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c23a020();
    _objc_release(ppuVar2);
    if ((int)ppuVar4 != 0) {
      ppuStack_98 = &PTR____CFConstantStringClassReference_110daf5b8;
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x76);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = &PTR____CFConstantStringClassReference_110ea1ad8;
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_78 = puVar10;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,5);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e02998;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_70 = puVar12;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_80 = &PTR____CFConstantStringClassReference_110ea30d8;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = uVar5;
      func_0x00010c105860();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_60 = uVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_98,
                          4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar12);
      _objc_release(puVar10);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110f41518;
      func_0x00010bf7dbc0();
      _objc_release(uVar5);
      _objc_release(puVar7);
    }
    _objc_release(ppuVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  ppuVar2 = param_3 + 3;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar3 = ppuVar2;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eba0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_3 + 3;
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(ppuVar3,param_2,0,ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release();
  if (param_3[9] == (undefined *)0x0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126afea0;
    _objc_opt_class(PTR_PTR_1126afea0);
    ppuVar3 = ppuVar2;
    func_0x00010beecc20(ppuVar2,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3[9];
    param_3[9] = (undefined *)ppuVar2;
    _objc_release(puVar10);
    _objc_release(ppuVar3);
  }
  puVar10 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  ppuVar2 = param_3 + 3;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar3 = ppuVar2;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar10,param_2,ppuVar4,1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010be1cd00();
  FUN_1072402a8();
  puVar12 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
  }
  puVar7 = param_3[10];
  if (puVar7 == (undefined *)0x0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126bdb40;
    _objc_opt_class(PTR_PTR_1126bdb40);
    puVar8 = puVar7;
    func_0x00010beecc20(puVar7,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar8;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3[10];
    param_3[10] = puVar7;
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar7 = param_3[10];
  }
  func_0x00010bfb8800(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 107209498; end: 107209753; -[SCLegacyStoriesChromeInteractionSession _showUnifiedProfileForSnapchatter:] */

void FUN_107209498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eba0();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar1,param_2,0,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)(param_1 + 0x48) == 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afea0;
    _objc_opt_class(PTR_PTR_1126afea0);
    lVar1 = lVar4;
    func_0x00010beecc20(lVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar3,param_2,lVar2,1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  func_0x00010be1cd00();
  FUN_1072402a8();
  puVar7 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bdb40;
    _objc_opt_class(PTR_PTR_1126bdb40);
    lVar1 = lVar4;
    func_0x00010beecc20(lVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar1);
    lVar4 = *(long *)(param_1 + 0x50);
  }
  func_0x00010bfb8800(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(lVar4);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107209754; end: 1072097e7; -[SCLegacyStoriesChromeInteractionSession didDismissMiniProfile] */

void FUN_107209754(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eba0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072097e8; end: 107209817; -[SCLegacyStoriesChromeInteractionSession _getAddSourceType] */

undefined4 FUN_1072097e8(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c074980();
  uVar1 = 0x9c0b737;
  if (iVar2 == 0) {
    uVar1 = 0x1b567ead;
  }
  return uVar1;
}



/* Entry: 107209818; end: 10720990b; -[SCLegacyStoriesChromeInteractionSession friendProfileDidDismiss:] */

void FUN_107209818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eba0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf74f00(param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfb8800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10720990c; end: 10720994f; -[SCLegacyStoriesChromeInteractionSession friendProfileWillAppear] */

void FUN_10720990c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfba0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107209950; end: 1072099d3; -[SCLegacyStoriesChromeInteractionSession dismissCameraScope:] */

void FUN_107209950(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bfe63a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1072099d4; end: 107209aa3; -[SCLegacyStoriesChromeInteractionSession .cxx_destruct] */

void FUN_1072099d4(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107209aa4; end: 107209aaf; +[SCLegacyStoriesReportSession announcerIdentifier] */

undefined ** FUN_107209aa4(void)

{
  return &PTR____CFConstantStringClassReference_110ea2c38;
}



/* Entry: 107209ab0; end: 107209ba3; -[SCLegacyStoriesReportSession initWithOperaControlling:operaPageProvider:userSession:viewLocation:safetyReportScopeExposer:] */

undefined1 *
FUN_107209ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8c58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107209ba4; end: 107209bd7; -[SCLegacyStoriesReportSession dealloc] */

void FUN_107209ba4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8c58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107209bd8; end: 107209c93; -[SCLegacyStoriesReportSession registeredEventsForOperaSession] */

void FUN_107209bd8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_48 = puVar2;
  func_0x00010bfc65c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  puVar3 = PTR_PTR_1126c9a58;
  uVar9 = uVar7;
  func_0x00010c118b40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00(puVar3,param_2,uVar9);
  if ((int)puVar3 == 0) {
    _objc_release(uVar9);
  }
  else {
    uVar5 = uVar7;
    func_0x00010c06b7e0();
    _objc_release(uVar9);
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar7;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar2 + 0x18);
      *(ulong *)(puVar2 + 0x18) = uVar5;
      _objc_release(uVar8);
      _objc_release(uVar9);
      uVar9 = *(long *)(puVar2 + 0x28) - 0x2c;
      if (((uVar9 < 0x28) && ((1L << (uVar9 & 0x3f) & 0x8000000003U) != 0)) ||
         (*(long *)(puVar2 + 0x28) == 5)) {
        iVar1 = (int)*(undefined8 *)(puVar2 + 0x18);
        func_0x00010c074980();
        if (iVar1 == 0) {
          iVar1 = (int)*(undefined8 *)(puVar2 + 0x18);
          func_0x00010c06d9a0();
          if (iVar1 != 0) {
            func_0x00010be8f920(puVar2);
          }
          goto LAB_107209d88;
        }
      }
      else {
        iVar1 = (int)*(undefined8 *)(puVar2 + 0x18);
        func_0x00010c074980();
        if (iVar1 == 0) {
          lVar6 = *(long *)(puVar2 + 0x18);
          func_0x00010bfe32e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar6 != 0) {
            func_0x00010be8f900(puVar2);
            goto LAB_107209d88;
          }
        }
      }
      func_0x00010be8f940(puVar2);
    }
  }
LAB_107209d88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107209c94; end: 107209de7; -[SCLegacyStoriesReportSession operaViewDidSendEvent:page:params:] */

void FUN_107209c94(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c9a58;
  uVar6 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00(puVar2,param_2,uVar6);
  if ((int)puVar2 == 0) {
    _objc_release(uVar6);
  }
  else {
    uVar3 = param_4;
    func_0x00010c06b7e0();
    _objc_release(uVar6);
    if ((uVar3 & 1) == 0) {
      uVar6 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = uVar3;
      _objc_release(uVar5);
      _objc_release(uVar6);
      uVar6 = *(long *)(param_1 + 0x28) - 0x2c;
      if (((uVar6 < 0x28) && ((1L << (uVar6 & 0x3f) & 0x8000000003U) != 0)) ||
         (*(long *)(param_1 + 0x28) == 5)) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x00010c074980();
        if (iVar1 == 0) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
          func_0x00010c06d9a0();
          if (iVar1 != 0) {
            func_0x00010be8f920(param_1);
          }
          goto LAB_107209d88;
        }
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x00010c074980();
        if (iVar1 == 0) {
          lVar4 = *(long *)(param_1 + 0x18);
          func_0x00010bfe32e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            func_0x00010be8f900(param_1);
            goto LAB_107209d88;
          }
        }
      }
      func_0x00010be8f940(param_1);
    }
  }
LAB_107209d88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107209de8; end: 107209e9b; -[SCLegacyStoriesReportSession _reportForMapInAppReporting] */

void FUN_107209de8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d52d8;
  _objc_alloc(PTR_PTR_1126d52d8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c291e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047de0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2e98;
  func_0x00010c0ba0a0(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec16e0(param_1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107209e9c; end: 107209f4f; -[SCLegacyStoriesReportSession _reportForStoryInAppReporting] */

void FUN_107209e9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d52e0;
  _objc_alloc(PTR_PTR_1126d52e0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c105860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047d00(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2e98;
  func_0x00010c0d4da0(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec16e0(param_1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107209f50; end: 10720a003; -[SCLegacyStoriesReportSession _reportForPublicUserStoryInAppReporting] */

void FUN_107209f50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d52e8;
  _objc_alloc(PTR_PTR_1126d52e8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c105860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047d00(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2e98;
  func_0x00010c11aba0(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec16e0(param_1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10720a004; end: 10720a117; -[SCLegacyStoriesReportSession _reportForHighlightsStoryInAppReporting] */

void FUN_10720a004(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d52f0;
  _objc_alloc(PTR_PTR_1126d52f0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe32e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe32e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe3180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ae80(puVar1,param_2,uVar3,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b2e98;
  func_0x00010c14bd00(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec16e0(param_1,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10720a118; end: 10720a15b; +[SCLegacyStoriesReportSession _isStoriesFeedReportSnapSource:] */

undefined8 FUN_10720a118(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (((0x3e < param_3 - 0x2cU) || ((1L << (param_3 - 0x2cU & 0x3f) & 0x6278489be61fc011U) == 0)) &&
     (param_3 != 5)) {
    return 0;
  }
  return 1;
}



/* Entry: 10720a15c; end: 10720a24f; -[SCLegacyStoriesReportSession _startSafetyReportWithParams:] */

void FUN_10720a15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar4,1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  func_0x00010c058840();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10720a250; end: 10720a323; -[SCLegacyStoriesReportSession reportDidCompleteWithCancelled:] */

void FUN_10720a250(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720a324; end: 10720a327; -[SCLegacyStoriesReportSession reportDidSubmitWithReasonId:comment:] */

void FUN_10720a324(void)

{
  return;
}



/* Entry: 10720a328; end: 10720a373; -[SCLegacyStoriesReportSession .cxx_destruct] */

void FUN_10720a328(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10720a374; end: 10720a933; -[SCLegacyStoriesSharingSession initWithUserSession:viewLocation:operaControlling:operaPageProvider:operaPlaylistItemController:externalLinkSendingService:grapheneRegistry:snapProShareMessageSender:isSavedStorySharingEnabled:boostCoordinator:notificationOSSettingsRetriever:temporaryFileWriter:circumstanceEngine:storiesMediaCoordinator:offPlatformLinkGenerationService:spotlightShareSender:storiesUsageLogger:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_10720a374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
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
  puStack_70 = PTR_PTR_1126f8c60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    puVar1[5] = param_4;
    uVar2 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 7,param_5);
    _objc_storeWeak(puVar1 + 8,param_6);
    _objc_storeWeak(puVar1 + 9,param_7);
    _objc_retain(param_8);
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = param_8;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be718);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cd710);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x000108f21604();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = uVar4;
    _objc_release();
    func_0x000100c67ae4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release();
    func_0x000108f216a8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = uVar4;
    _objc_release(uVar2);
    uVar4 = puVar1[0x10];
    func_0x00010bef9980();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdb40);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_22;
    _objc_release(uVar2);
    uVar4 = puVar1[0x1a];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c07b760();
    *(char *)(puVar1 + 0x1c) = (char)uVar2;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1e) = param_11;
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_18;
    _objc_release(uVar2);
  }
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
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10720a934; end: 10720a95b;  */

void FUN_10720a934(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf501b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationDestinationParser_1125b1a10);
  return;
}



/* Entry: 10720a95c; end: 10720a9a7; -[SCLegacyStoriesSharingSession dealloc] */

void FUN_10720a95c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x80),param_2,param_1);
  puStack_28 = PTR_PTR_1126f8c60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10720a9a8; end: 10720aa23; -[SCLegacyStoriesSharingSession extraPropertiesForStory:] */

void FUN_10720a9a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  _objc_release(param_3);
  if (param_3 == lVar2) {
    func_0x00010bef7f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    func_0x00010bef7f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10720aa24; end: 10720acc3; -[SCLegacyStoriesSharingSession registeredEventsForOperaSession] */

void FUN_10720aa24(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **in_x4;
  undefined8 uVar23;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_100 = puVar16;
  puStack_f8 = puVar16;
  func_0x00010bf6b1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2d30;
  puStack_108 = puVar2;
  puStack_f0 = puVar2;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_110 = puVar16;
  puStack_e8 = puVar16;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2ea8;
  puStack_118 = puVar2;
  puStack_e0 = puVar2;
  func_0x00010c22d420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_120 = puVar16;
  puStack_d8 = puVar16;
  func_0x00010c22d440();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2ea8;
  puStack_128 = puVar2;
  puStack_d0 = puVar2;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_c8 = puVar16;
  func_0x00010c0b4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b2ea8;
  puStack_c0 = puVar2;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_b8 = puVar19;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d30;
  puStack_b0 = puVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  puStack_a8 = puVar4;
  func_0x00010c22a860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2ea8;
  puStack_a0 = puVar5;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2d30;
  puStack_98 = puVar6;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2d30;
  puStack_90 = puVar7;
  func_0x00010c0dc460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e50dd8;
  puVar9 = PTR_PTR_1126b2d30;
  puStack_88 = puVar8;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = &puStack_f8;
  ppuVar22 = (undefined **)0x11;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar10;
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar19);
  _objc_release(puVar2);
  _objc_release(puVar16);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  puVar10 = puStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_130);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10720acc4;
  puStack_190 = puVar3;
  puStack_188 = puVar19;
  puStack_180 = puVar2;
  puStack_178 = puVar16;
  puStack_170 = puVar8;
  puStack_168 = puVar7;
  puStack_160 = puVar6;
  puStack_158 = puVar5;
  puStack_150 = puVar9;
  puStack_148 = puVar4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar22);
  _objc_retain(in_x4);
  puVar16 = PTR_PTR_1126c9a58;
  ppuVar11 = ppuVar22;
  func_0x00010c118b40(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  if ((int)puVar16 != 0) {
    ppuVar15 = ppuVar22;
    func_0x00010c06b7e0();
    _objc_release(ppuVar11);
    if (((ulong)ppuVar15 & 1) != 0) goto LAB_10720b0e0;
    ppuVar11 = ppuVar22;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    ppuVar12 = ppuVar15;
    func_0x00010010fab4(ppuVar15,PTR_DAT_1126a5998);
    ppuVar11 = ppuVar15;
    if ((int)ppuVar12 == 0) {
      ppuVar11 = (undefined **)0x0;
    }
    _objc_retain(ppuVar11);
    _objc_release(ppuVar15);
    if (ppuVar11 == (undefined **)0x0) goto LAB_10720b0d8;
    ppuVar12 = ppuVar22;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar12;
    func_0x00010c0720c0();
    if (((ulong)ppuVar20 & 1) == 0) {
      _objc_retain(ppuVar12);
      uVar13 = *(undefined8 *)(puVar10 + 0x68);
      *(undefined ***)(puVar10 + 0x68) = ppuVar12;
      _objc_release(uVar13);
    }
    ppuVar20 = ppuVar22;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar10 + 0x88);
    *(undefined ***)(puVar10 + 0x88) = ppuVar14;
    _objc_release(uVar13);
    _objc_release(ppuVar20);
    ppuVar20 = ppuVar22;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar10 + 0x58);
    *(undefined ***)(puVar10 + 0x58) = ppuVar14;
    _objc_release(uVar13);
    _objc_release(ppuVar20);
    if (*(undefined ***)(puVar10 + 8) != ppuVar11) {
      uVar13 = *(undefined8 *)(puVar10 + 0x10);
      *(undefined8 *)(puVar10 + 0x10) = 0;
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(puVar10 + 0x18);
      *(undefined8 *)(puVar10 + 0x18) = 0;
      _objc_release(uVar13);
      _objc_retain(ppuVar15);
      uVar13 = *(undefined8 *)(puVar10 + 8);
      *(undefined ***)(puVar10 + 8) = ppuVar11;
      _objc_release(uVar13);
    }
    ppuVar20 = ppuVar21;
    func_0x000107b27f14(ppuVar21,ppuVar22,in_x4);
    if (((ulong)ppuVar20 & 1) != 0) goto LAB_10720b0d0;
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar21;
    func_0x00010c0720c0();
    if (((ulong)ppuVar20 & 1) == 0) {
      lVar17 = *(long *)(puVar10 + 0x28);
      _objc_release(puVar16);
      puVar16 = PTR_PTR_1126afca8;
      if (lVar17 != 0xb) goto LAB_10720af3c;
      if (*(long *)(puVar10 + 0x28) == 0x19) goto LAB_10720b0d0;
      ppuVar15 = &PTR____CFConstantStringClassReference_110ea2cb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2cb8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238700(puVar16);
LAB_10720afac:
      _objc_release(ppuVar15);
    }
    else {
      _objc_release(puVar16);
LAB_10720af3c:
      puVar16 = PTR_PTR_1126b2330;
      func_0x00010c0e9c40(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar16);
      if ((int)ppuVar20 != 0) {
        ppuVar15 = ppuVar22;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar20;
        func_0x00010c067fc0();
        *(undefined ***)(puVar10 + 0x28) = ppuVar14;
LAB_10720afa0:
        _objc_release(ppuVar20);
        goto LAB_10720afac;
      }
      puVar16 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar21;
      func_0x00010c0720c0();
      if ((int)ppuVar20 == 0) {
        puVar2 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        _objc_release(puVar16);
        if ((int)ppuVar20 != 0) goto LAB_10720b024;
        puVar16 = PTR_PTR_1126b2d30;
        func_0x00010bf940a0(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar16);
        if ((int)ppuVar20 == 0) {
          puVar16 = PTR_PTR_1126b2d30;
          func_0x00010c15c9e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar16);
          if ((int)ppuVar20 != 0) {
            uVar13 = *(undefined8 *)(puVar10 + 0x58);
            func_0x00010c0e1b00();
            _objc_retainAutoreleasedReturnValue();
            uVar23 = *(undefined8 *)(puVar10 + 0x158);
            *(undefined8 *)(puVar10 + 0x158) = uVar13;
            _objc_release(uVar23);
            ppuVar15 = *(undefined ***)(puVar10 + 8);
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = *(undefined **)(puVar10 + 8);
            func_0x00010c105880();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = *(long *)(puVar10 + 0x28);
            func_0x000107a59624();
            if (((lVar17 != 0xe) && (lVar17 != 0x1a)) && (lVar17 != 0x1c)) {
              iVar1 = (int)*(undefined8 *)(puVar10 + 8);
              func_0x00010c07f5e0();
              if (iVar1 == 0) {
                uVar18 = *(ulong *)(puVar10 + 8);
                func_0x00010c06d9a0();
                if ((uVar18 & 1) == 0) {
                  func_0x00010c07d1a0();
                }
              }
            }
            puVar2 = puVar10 + 0x38;
            _objc_loadWeakRetained();
            puVar19 = puVar2;
            func_0x00010c27f040();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar19;
            func_0x00010c0f1880();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar19);
            _objc_release(puVar2);
            puVar2 = PTR_PTR_1126b1a18;
            _objc_alloc();
            func_0x00010c0f2220(puVar3);
            func_0x00010c048720();
            puStack_1e8 = &uStack_1f0;
            uStack_1f0 = 0;
            uStack_1e0 = 0x3032000000;
            pcStack_1d8 = FUN_10720bb68;
            uStack_1d0 = 0x10720bb78;
            uStack_1c8 = 0;
            _objc_initWeak(auStack_1f8,puVar10);
            ppuVar20 = ppuVar15;
            func_0x00010c08fa60();
            if (ppuVar20 == (undefined **)0x0) {
LAB_10720b468:
              ppuVar20 = ppuVar15;
              func_0x00010c08fa60();
              if (ppuVar20 != (undefined **)0x0) {
                iVar1 = (int)*(undefined8 *)(puVar10 + 8);
                func_0x00010c07d1a0();
                if (iVar1 != 0) {
                  puVar19 = *(undefined **)(puVar10 + 8);
                  FUN_1071ea420(puVar19);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar19;
                  func_0x00010bf267e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar20 = ppuVar15;
                  func_0x00010b26c050(ppuVar15,puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar4);
                  uVar13 = *(undefined8 *)(puVar10 + 0x120);
                  func_0x00010c269d40(uVar13);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_260 = 0xc2000000;
                  pcStack_258 = FUN_10720bc6c;
                  puStack_250 = &UNK_1109930d0;
                  puStack_238 = &uStack_1f0;
                  _objc_copyWeak(auStack_230,auStack_1f8);
                  _objc_retain(puVar2);
                  puStack_248 = puVar2;
                  _objc_retain(puVar3);
                  puStack_240 = puVar3;
                  func_0x00010c11d620(uVar13);
                  _objc_release(uVar13);
                  _objc_release(puStack_240);
                  _objc_release(puStack_248);
                  _objc_destroyWeak(auStack_230);
                  _objc_release(ppuVar20);
                  goto LAB_10720b770;
                }
              }
              puVar19 = puVar10 + 0x38;
              _objc_loadWeakRetained(puVar19);
              puVar4 = puVar19;
              func_0x00010c27f040();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c0f1880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be47a60(puVar10);
              _objc_release(puVar5);
              _objc_release(puVar4);
            }
            else {
              uVar18 = *(ulong *)(puVar10 + 8);
              func_0x00010c07d1a0();
              puVar19 = PTR_PTR_1126ae720;
              if ((uVar18 & 1) != 0) goto LAB_10720b468;
              puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_220 = 0xc2000000;
              pcStack_218 = FUN_10720bb80;
              puStack_210 = &UNK_110863958;
              _objc_retain(puVar16);
              puStack_208 = puVar16;
              _objc_retain(ppuVar15);
              ppuStack_200 = ppuVar15;
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR_PTR_1126b2498;
              _objc_alloc();
              uVar13 = *(undefined8 *)(puVar10 + 8);
              func_0x00010c105860(uVar13);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar2;
              func_0x00010c15d5c0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c037ea0();
              _objc_release(puVar4);
              _objc_release(uVar13);
              puVar4 = PTR_PTR_1126b0808;
              _objc_alloc();
              func_0x00010c051820();
              uVar13 = puStack_1e8[5];
              puStack_1e8[5] = puVar4;
              _objc_release(uVar13);
              puVar4 = puVar10 + 0x38;
              _objc_loadWeakRetained(puVar4);
              puVar6 = puVar4;
              func_0x00010c27f040();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010c0f1880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be47a60(puVar10);
              _objc_release(puVar7);
              _objc_release(puVar6);
              _objc_release(puVar4);
              _objc_release(puVar5);
              _objc_release(puVar19);
              _objc_release(ppuStack_200);
              puVar19 = puStack_208;
            }
LAB_10720b770:
            _objc_release(puVar19);
            _objc_destroyWeak(auStack_1f8);
            __Block_object_dispose(&uStack_1f0,8);
            _objc_release(uStack_1c8);
            _objc_release(puVar2);
            _objc_release(puVar3);
            _objc_release(puVar16);
            goto LAB_10720afac;
          }
          puVar16 = PTR_PTR_1126b2d30;
          func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar16);
          if ((int)ppuVar20 == 0) {
            puVar16 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = ppuVar21;
            func_0x00010c0720c0();
            _objc_release(puVar16);
            if ((int)ppuVar20 == 0) {
              puVar16 = PTR_PTR_1126b2d30;
              func_0x00010c22a700(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              ppuVar20 = ppuVar21;
              func_0x00010c0720c0();
              _objc_release(puVar16);
              if ((int)ppuVar20 != 0) {
                if (in_x4 == (undefined **)0x0) {
                  ppuVar15 = (undefined **)0x0;
                }
                else {
                  ppuVar20 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar16 = PTR_PTR_1126d52f8;
                  _objc_opt_class(PTR_PTR_1126d52f8);
                  ppuVar14 = ppuVar20;
                  _objc_opt_isKindOfClass(ppuVar20,puVar16);
                  ppuVar15 = ppuVar20;
                  if (((ulong)ppuVar14 & 1) == 0) {
                    ppuVar15 = (undefined **)0x0;
                  }
                  _objc_retain(ppuVar15);
                  _objc_release(ppuVar20);
                }
                ppuVar20 = *(undefined ***)(puVar10 + 8);
                func_0x00010c105880(ppuVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010beb1c20(puVar10);
                goto LAB_10720afa0;
              }
              puVar16 = PTR_PTR_1126b2d30;
              func_0x00010c25fd00(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              ppuVar20 = ppuVar21;
              func_0x00010c0720c0();
              _objc_release(puVar16);
              if ((int)ppuVar20 == 0) {
                puVar2 = PTR_PTR_1126b2d30;
                func_0x00010c0dc460(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                ppuVar20 = ppuVar21;
                func_0x00010c0720c0();
                if (((ulong)ppuVar20 & 1) == 0) {
                  ppuVar20 = ppuVar21;
                  func_0x00010c0720c0();
                  _objc_release(puVar2);
                  if (((ulong)ppuVar20 & 1) == 0) {
                    puVar16 = PTR_PTR_1126b2d30;
                    func_0x00010bfa1100(PTR_PTR_1126b2d30);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar15 = ppuVar21;
                    func_0x00010c0720c0();
                    _objc_release(puVar16);
                    if ((int)ppuVar15 != 0) {
                      func_0x00010bed7dc0(puVar10);
                    }
                    goto LAB_10720b0d0;
                  }
                }
                else {
                  _objc_release(puVar2);
                }
                func_0x000108f22cac();
                _objc_retainAutoreleasedReturnValue();
                puVar16 = puVar2;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                _objc_initWeak(&uStack_1f0,puVar10);
                func_0x00010c105880(ppuVar15);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = 0;
                func_0x0001000819a8(0,0);
                _objc_retainAutoreleasedReturnValue();
                _objc_copyWeak(auStack_2a8,&uStack_1f0);
                _objc_retain(ppuVar22);
                _objc_retain(in_x4);
                func_0x00010c244960(puVar16);
                _objc_release(uVar13);
                _objc_release(ppuVar15);
                _objc_release(in_x4);
                _objc_release(ppuVar22);
                _objc_destroyWeak(auStack_2a8);
                _objc_destroyWeak(&uStack_1f0);
                goto LAB_10720b1b0;
              }
              _objc_initWeak(&uStack_1f0,puVar10);
              uVar13 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_298 = 0xc2000000;
              uStack_290 = 0x10720bdd0;
              puStack_288 = &UNK_110848218;
              _objc_copyWeak(auStack_270,&uStack_1f0);
              _objc_retain(ppuVar22);
              ppuStack_280 = ppuVar22;
              _objc_retain(in_x4);
              ppuStack_278 = in_x4;
              func_0x00010007380c(uVar13,&puStack_2a0);
              _objc_release(uVar13);
              _objc_release(ppuStack_278);
              _objc_release(ppuStack_280);
              _objc_destroyWeak(auStack_270);
              _objc_destroyWeak(&uStack_1f0);
            }
            else {
              puVar16 = puVar10 + 0x38;
              _objc_loadWeakRetained(puVar16);
              puVar2 = puVar16;
              func_0x00010c2bf380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2bf1c0();
              _objc_release(puVar2);
              _objc_release(puVar16);
              func_0x00010be99820(puVar10);
            }
          }
          else {
            func_0x00010bdfa500(puVar10);
          }
        }
        else {
          puVar16 = puVar10 + 0x38;
          _objc_loadWeakRetained(puVar16);
          puVar2 = puVar16;
          func_0x00010c2bf380();
          _objc_retainAutoreleasedReturnValue();
          puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b8 = 0xc2000000;
          pcStack_1b0 = FUN_10720bb00;
          puStack_1a8 = &UNK_110842e18;
          puStack_1a0 = puVar10;
          func_0x00010c2bf1c0();
          _objc_release(puVar2);
LAB_10720b1b0:
          _objc_release(puVar16);
        }
      }
      else {
        _objc_release(puVar16);
LAB_10720b024:
        puVar16 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar16);
        uVar13 = 1;
        if ((int)ppuVar20 != 0) {
          uVar13 = 2;
        }
        *(undefined8 *)(puVar10 + 0x50) = uVar13;
        puVar16 = puVar10 + 0x38;
        _objc_loadWeakRetained(puVar16);
        puVar2 = puVar16;
        func_0x00010c2bf380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bf1c0();
        _objc_release(puVar2);
        _objc_release(puVar16);
        func_0x00010be11480(puVar10);
        func_0x00010c074980();
        if ((((ulong)ppuVar15 & 1) == 0) && (*(long *)(puVar10 + 0x28) == 0x2b)) {
          func_0x00010be10ae0(puVar10);
        }
        func_0x00010be51f40(puVar10);
      }
    }
LAB_10720b0d0:
    _objc_release(ppuVar12);
  }
LAB_10720b0d8:
  _objc_release(ppuVar11);
LAB_10720b0e0:
  _objc_release(in_x4);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  return;
}



/* Entry: 10720acc4; end: 10720baff; -[SCLegacyStoriesSharingSession operaViewDidSendEvent:page:params:] */

void FUN_10720acc4(long param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                  undefined **param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126c9a58;
  ppuVar2 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  if ((int)puVar3 != 0) {
    ppuVar8 = param_4;
    func_0x00010c06b7e0();
    _objc_release(ppuVar2);
    if (((ulong)ppuVar8 & 1) != 0) goto LAB_10720b0e0;
    ppuVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar8;
    func_0x00010010fab4(ppuVar8,PTR_DAT_1126a5998);
    ppuVar2 = ppuVar8;
    if ((int)ppuVar4 == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar8);
    if (ppuVar2 == (undefined **)0x0) goto LAB_10720b0d8;
    ppuVar4 = param_4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar4;
    func_0x00010c0720c0();
    if (((ulong)ppuVar17 & 1) == 0) {
      _objc_retain(ppuVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      *(undefined ***)(param_1 + 0x68) = ppuVar4;
      _objc_release(uVar5);
    }
    ppuVar17 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar17;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined ***)(param_1 + 0x88) = ppuVar6;
    _objc_release(uVar5);
    _objc_release(ppuVar17);
    ppuVar17 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar17;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined ***)(param_1 + 0x58) = ppuVar6;
    _objc_release(uVar5);
    _objc_release(ppuVar17);
    if (*(undefined ***)(param_1 + 8) != ppuVar2) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar5);
      _objc_retain(ppuVar8);
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)(param_1 + 8) = ppuVar2;
      _objc_release(uVar5);
    }
    uVar13 = param_3;
    func_0x000107b27f14(param_3,param_4,param_5);
    if ((uVar13 & 1) != 0) goto LAB_10720b0d0;
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_3;
    func_0x00010c0720c0();
    if ((uVar13 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x28);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126afca8;
      if (lVar9 != 0xb) goto LAB_10720af3c;
      if (*(long *)(param_1 + 0x28) == 0x19) goto LAB_10720b0d0;
      ppuVar8 = &PTR____CFConstantStringClassReference_110ea2cb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2cb8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238700(puVar3);
LAB_10720afac:
      _objc_release(ppuVar8);
    }
    else {
      _objc_release(puVar3);
LAB_10720af3c:
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010c0e9c40(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)uVar13 != 0) {
        ppuVar8 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar17;
        func_0x00010c067fc0();
        *(undefined ***)(param_1 + 0x28) = ppuVar6;
LAB_10720afa0:
        _objc_release(ppuVar17);
        goto LAB_10720afac;
      }
      puVar3 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar13 == 0) {
        puVar7 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        _objc_release(puVar3);
        if ((int)uVar13 != 0) goto LAB_10720b024;
        puVar3 = PTR_PTR_1126b2d30;
        func_0x00010bf940a0(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)uVar13 == 0) {
          puVar3 = PTR_PTR_1126b2d30;
          func_0x00010c15c9e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)uVar13 != 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x58);
            func_0x00010c0e1b00();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = *(undefined8 *)(param_1 + 0x158);
            *(undefined8 *)(param_1 + 0x158) = uVar5;
            _objc_release(uVar18);
            ppuVar8 = *(undefined ***)(param_1 + 8);
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = *(long *)(param_1 + 8);
            func_0x00010c105880();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = *(long *)(param_1 + 0x28);
            func_0x000107a59624();
            if (((lVar10 != 0xe) && (lVar10 != 0x1a)) && (lVar10 != 0x1c)) {
              iVar1 = (int)*(undefined8 *)(param_1 + 8);
              func_0x00010c07f5e0();
              if (iVar1 == 0) {
                uVar13 = *(ulong *)(param_1 + 8);
                func_0x00010c06d9a0();
                if ((uVar13 & 1) == 0) {
                  func_0x00010c07d1a0();
                }
              }
            }
            lVar10 = param_1 + 0x38;
            _objc_loadWeakRetained();
            lVar11 = lVar10;
            func_0x00010c27f040();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010c0f1880();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            _objc_release(lVar10);
            puVar3 = PTR_PTR_1126b1a18;
            _objc_alloc();
            func_0x00010c0f2220(lVar12);
            func_0x00010c048720();
            puStack_b8 = &uStack_c0;
            uStack_c0 = 0;
            uStack_b0 = 0x3032000000;
            pcStack_a8 = FUN_10720bb68;
            uStack_a0 = 0x10720bb78;
            uStack_98 = 0;
            _objc_initWeak(auStack_c8,param_1);
            ppuVar17 = ppuVar8;
            func_0x00010c08fa60();
            if (ppuVar17 == (undefined **)0x0) {
LAB_10720b468:
              ppuVar17 = ppuVar8;
              func_0x00010c08fa60();
              if (ppuVar17 != (undefined **)0x0) {
                iVar1 = (int)*(undefined8 *)(param_1 + 8);
                func_0x00010c07d1a0();
                if (iVar1 != 0) {
                  lVar10 = *(long *)(param_1 + 8);
                  FUN_1071ea420(lVar10);
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar10;
                  func_0x00010bf267e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar17 = ppuVar8;
                  func_0x00010b26c050(ppuVar8,lVar11);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar11);
                  uVar5 = *(undefined8 *)(param_1 + 0x120);
                  func_0x00010c269d40(uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_130 = 0xc2000000;
                  pcStack_128 = FUN_10720bc6c;
                  puStack_120 = &UNK_1109930d0;
                  puStack_108 = &uStack_c0;
                  _objc_copyWeak(auStack_100,auStack_c8);
                  _objc_retain(puVar3);
                  puStack_118 = puVar3;
                  _objc_retain(lVar12);
                  lStack_110 = lVar12;
                  func_0x00010c11d620(uVar5);
                  _objc_release(uVar5);
                  _objc_release(lStack_110);
                  _objc_release(puStack_118);
                  _objc_destroyWeak(auStack_100);
                  _objc_release(ppuVar17);
                  goto LAB_10720b770;
                }
              }
              lVar10 = param_1 + 0x38;
              _objc_loadWeakRetained(lVar10);
              lVar11 = lVar10;
              func_0x00010c27f040();
              _objc_retainAutoreleasedReturnValue();
              lVar16 = lVar11;
              func_0x00010c0f1880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be47a60(param_1);
              _objc_release(lVar16);
              _objc_release(lVar11);
            }
            else {
              uVar13 = *(ulong *)(param_1 + 8);
              func_0x00010c07d1a0();
              puVar7 = PTR_PTR_1126ae720;
              if ((uVar13 & 1) != 0) goto LAB_10720b468;
              puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_f0 = 0xc2000000;
              pcStack_e8 = FUN_10720bb80;
              puStack_e0 = &UNK_110863958;
              _objc_retain(lVar9);
              lStack_d8 = lVar9;
              _objc_retain(ppuVar8);
              ppuStack_d0 = ppuVar8;
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = PTR_PTR_1126b2498;
              _objc_alloc();
              uVar5 = *(undefined8 *)(param_1 + 8);
              func_0x00010c105860(uVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar3;
              func_0x00010c15d5c0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c037ea0();
              _objc_release(puVar15);
              _objc_release(uVar5);
              puVar15 = PTR_PTR_1126b0808;
              _objc_alloc();
              func_0x00010c051820();
              uVar5 = puStack_b8[5];
              puStack_b8[5] = puVar15;
              _objc_release(uVar5);
              lVar10 = param_1 + 0x38;
              _objc_loadWeakRetained(lVar10);
              lVar11 = lVar10;
              func_0x00010c27f040();
              _objc_retainAutoreleasedReturnValue();
              lVar16 = lVar11;
              func_0x00010c0f1880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be47a60(param_1);
              _objc_release(lVar16);
              _objc_release(lVar11);
              _objc_release(lVar10);
              _objc_release(puVar14);
              _objc_release(puVar7);
              _objc_release(ppuStack_d0);
              lVar10 = lStack_d8;
            }
LAB_10720b770:
            _objc_release(lVar10);
            _objc_destroyWeak(auStack_c8);
            __Block_object_dispose(&uStack_c0,8);
            _objc_release(uStack_98);
            _objc_release(puVar3);
            _objc_release(lVar12);
            _objc_release(lVar9);
            goto LAB_10720afac;
          }
          puVar3 = PTR_PTR_1126b2d30;
          func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)uVar13 == 0) {
            puVar3 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)uVar13 == 0) {
              puVar3 = PTR_PTR_1126b2d30;
              func_0x00010c22a700(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)uVar13 != 0) {
                if (param_5 == (undefined **)0x0) {
                  ppuVar8 = (undefined **)0x0;
                }
                else {
                  ppuVar17 = param_5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR_PTR_1126d52f8;
                  _objc_opt_class(PTR_PTR_1126d52f8);
                  ppuVar6 = ppuVar17;
                  _objc_opt_isKindOfClass(ppuVar17,puVar3);
                  ppuVar8 = ppuVar17;
                  if (((ulong)ppuVar6 & 1) == 0) {
                    ppuVar8 = (undefined **)0x0;
                  }
                  _objc_retain(ppuVar8);
                  _objc_release(ppuVar17);
                }
                ppuVar17 = *(undefined ***)(param_1 + 8);
                func_0x00010c105880(ppuVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010beb1c20(param_1);
                goto LAB_10720afa0;
              }
              puVar3 = PTR_PTR_1126b2d30;
              func_0x00010c25fd00(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)uVar13 == 0) {
                puVar7 = PTR_PTR_1126b2d30;
                func_0x00010c0dc460(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = param_3;
                func_0x00010c0720c0();
                if ((uVar13 & 1) == 0) {
                  uVar13 = param_3;
                  func_0x00010c0720c0();
                  _objc_release(puVar7);
                  if ((uVar13 & 1) == 0) {
                    puVar3 = PTR_PTR_1126b2d30;
                    func_0x00010bfa1100(PTR_PTR_1126b2d30);
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = param_3;
                    func_0x00010c0720c0();
                    _objc_release(puVar3);
                    if ((int)uVar13 != 0) {
                      func_0x00010bed7dc0(param_1);
                    }
                    goto LAB_10720b0d0;
                  }
                }
                else {
                  _objc_release(puVar7);
                }
                func_0x000108f22cac();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar7;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                _objc_initWeak(&uStack_c0,param_1);
                func_0x00010c105880(ppuVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = 0;
                func_0x0001000819a8(0,0);
                _objc_retainAutoreleasedReturnValue();
                _objc_copyWeak(auStack_178,&uStack_c0);
                _objc_retain(param_4);
                _objc_retain(param_5);
                func_0x00010c244960(puVar3);
                _objc_release(uVar5);
                _objc_release(ppuVar8);
                _objc_release(param_5);
                _objc_release(param_4);
                _objc_destroyWeak(auStack_178);
                _objc_destroyWeak(&uStack_c0);
                goto LAB_10720b1b0;
              }
              _objc_initWeak(&uStack_c0,param_1);
              uVar5 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_168 = 0xc2000000;
              uStack_160 = 0x10720bdd0;
              puStack_158 = &UNK_110848218;
              _objc_copyWeak(auStack_140,&uStack_c0);
              _objc_retain(param_4);
              ppuStack_150 = param_4;
              _objc_retain(param_5);
              ppuStack_148 = param_5;
              func_0x00010007380c(uVar5,&puStack_170);
              _objc_release(uVar5);
              _objc_release(ppuStack_148);
              _objc_release(ppuStack_150);
              _objc_destroyWeak(auStack_140);
              _objc_destroyWeak(&uStack_c0);
            }
            else {
              lVar9 = param_1 + 0x38;
              _objc_loadWeakRetained(lVar9);
              lVar10 = lVar9;
              func_0x00010c2bf380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2bf1c0();
              _objc_release(lVar10);
              _objc_release(lVar9);
              func_0x00010be99820(param_1);
            }
          }
          else {
            func_0x00010bdfa500(param_1);
          }
        }
        else {
          puVar3 = (undefined *)(param_1 + 0x38);
          _objc_loadWeakRetained(puVar3);
          puVar7 = puVar3;
          func_0x00010c2bf380();
          _objc_retainAutoreleasedReturnValue();
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0xc2000000;
          pcStack_80 = FUN_10720bb00;
          puStack_78 = &UNK_110842e18;
          lStack_70 = param_1;
          func_0x00010c2bf1c0();
          _objc_release(puVar7);
LAB_10720b1b0:
          _objc_release(puVar3);
        }
      }
      else {
        _objc_release(puVar3);
LAB_10720b024:
        puVar3 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        uVar5 = 1;
        if ((int)uVar13 != 0) {
          uVar5 = 2;
        }
        *(undefined8 *)(param_1 + 0x50) = uVar5;
        lVar9 = param_1 + 0x38;
        _objc_loadWeakRetained(lVar9);
        lVar10 = lVar9;
        func_0x00010c2bf380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bf1c0();
        _objc_release(lVar10);
        _objc_release(lVar9);
        func_0x00010be11480(param_1);
        func_0x00010c074980();
        if ((((ulong)ppuVar8 & 1) == 0) && (*(long *)(param_1 + 0x28) == 0x2b)) {
          func_0x00010be10ae0(param_1);
        }
        func_0x00010be51f40(param_1);
      }
    }
LAB_10720b0d0:
    _objc_release(ppuVar4);
  }
LAB_10720b0d8:
  _objc_release(ppuVar2);
LAB_10720b0e0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720bb00; end: 10720bb67;  */

void FUN_10720bb00(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0830a0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c000();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10720bb68; end: 10720bb7f;  */

void FUN_10720bb68(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10720bb80; end: 10720bc6b;  */

void FUN_10720bb80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107d51d8c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar3,param_2,uVar1,uVar2,0,3,0,0);
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



/* Entry: 10720bc6c; end: 10720bd8f;  */

void FUN_10720bc6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010beb1e60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10720bd90;
  puStack_68 = &UNK_110843420;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  _objc_retain(uVar5);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar5;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720bd90; end: 10720be03;  */

void FUN_10720bd90(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720be04; end: 10720be8f;  */

void FUN_10720be04(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2cf40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720be90; end: 10720c127; -[SCLegacyStoriesSharingSession _shareSheetConfigurationFromFetchedContentModel:attribution:] */

void FUN_10720be90(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074fe0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0830a0();
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar6 = *(undefined **)(param_1 + 0x110);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c23fc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lStack_58 = 0;
      puVar4 = puVar6;
      func_0x00010c2bda80(puVar6,param_2,lVar7,puVar5,0,&lStack_58);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lStack_58;
      _objc_release(lVar7);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 == 0) && (puVar6 != (undefined *)0x0)) {
        puVar8 = PTR_PTR_1126b1c68;
        func_0x00010c29be00(PTR_PTR_1126b1c68,param_2,puVar6,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1bc60(param_1,param_2,puVar8,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar6);
        goto LAB_10720c0c8;
      }
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
  }
  else {
    lVar3 = param_3;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar7 != 0) {
      lVar3 = param_3;
      func_0x00010c23fc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040(puVar5,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar4 = PTR_PTR_1126b1c68;
      func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,puVar5,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1bc60(param_1,param_2,puVar4,param_4);
      _objc_retainAutoreleasedReturnValue();
LAB_10720c0c8:
      _objc_release(puVar4);
      _objc_release(puVar5);
      goto LAB_10720c0f8;
    }
  }
  param_1 = 0;
LAB_10720c0f8:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10720c128; end: 10720c38b; -[SCLegacyStoriesSharingSession _generateShareSheetConfigurationFromHighlightStory:attribution:] */

void FUN_10720c128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bfe32e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe32e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bfe3180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  _objc_retain(uVar11);
  puVar4 = PTR_PTR_1126ae720;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10720c38c;
  puStack_88 = &UNK_11093b3c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = uVar11;
  uStack_78 = uVar3;
  uStack_70 = uVar10;
  uStack_68 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(uVar10);
  _objc_retain(uVar3);
  _objc_retain(uVar11);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2498;
  _objc_alloc(PTR_PTR_1126b2498);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe32e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010be36bc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c15d5c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c037ea0(puVar5,param_2,uVar2,uVar7,uVar8,0,0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10720c38c; end: 10720c467;  */

void FUN_10720c38c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar3,param_2,uVar1,uVar2,0,4,0,0);
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



/* Entry: 10720c468; end: 10720c46b; -[SCLegacyStoriesSharingSession _handleSubscribeButtonPressedForPage:params:] */

void FUN_10720c468(void)

{
  return;
}



/* Entry: 10720c46c; end: 10720c51b; -[SCLegacyStoriesSharingSession _subscribeSuccess:isSubscribed:] */

void FUN_10720c46c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b23b28(param_3,param_4,uVar1,*(undefined8 *)(param_1 + 200));
  _objc_release(uVar1);
  if ((int)param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe7580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000108e07094();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107aff838(param_3,uVar2,uVar1,*(undefined8 *)(param_1 + 0xf8));
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720c51c; end: 10720c57f; -[SCLegacyStoriesSharingSession _subscribeFailure:isSubscribed:] */

void FUN_10720c51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b23b28(param_3,param_4,uVar1,*(undefined8 *)(param_1 + 200));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10720c580; end: 10720c79f; -[SCLegacyStoriesSharingSession _handleNotificationOptInForPage:params:targetUserID:] */

void FUN_10720c580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5bf0;
  _objc_retain(param_5);
  func_0x00010c0ebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release();
  if ((int)uVar2 != 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d5070);
    puVar3 = puVar1;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10720c7a8;
    puStack_68 = &UNK_110841f80;
    puStack_60 = puVar4;
    lStack_58 = param_1;
    _objc_retain(puVar4);
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(puStack_60);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = PTR_PTR_1126b4028;
  func_0x00010c258c40(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9280(uVar5);
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010be53b00(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 10720c7a0; end: 10720c7b7;  */

void FUN_10720c7a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notificationsPermissionRequester_112614d48);
  return;
}



/* Entry: 10720c7b8; end: 10720c903; -[SCLegacyStoriesSharingSession _handleNotificationForPublicUserWithCheetahStory:optingIn:interactionContext:] */

void FUN_10720c7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_58;
  _objc_initWeak(puVar2,param_1);
  func_0x000108f21990();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740(param_3);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  func_0x00010c28a700(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10720c904; end: 10720c997;  */

void FUN_10720c904(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0794a0(param_2);
  func_0x00010beba280(lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0794a0();
  func_0x00010be51aa0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720c998; end: 10720c99b;  */

void FUN_10720c998(void)

{
  return;
}



/* Entry: 10720c99c; end: 10720c9af; -[SCLegacyStoriesSharingSession _showOptInPrompt:] */

void FUN_10720c99c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x88);
  uVar10 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain();
  _objc_retain(uVar10);
  lVar1 = lVar11;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    uVar4 = 0;
    func_0x000107fcbeb0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c030320(puVar6);
    _objc_release(puVar5);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eacff8;
    if (param_3 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110ead018;
    }
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bcbeaa8(ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    puVar9 = puVar6;
    func_0x000107afc4d0(puVar6,puVar7,puVar5,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107afd428();
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 10720c9b0; end: 10720ca7b; -[SCLegacyStoriesSharingSession _logCheetahEventForActionType:story:interactionContext:] */

void FUN_10720c9b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cb4cfc(param_3,param_4,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf7dbc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10720ca7c; end: 10720cc9f; -[SCLegacyStoriesSharingSession _launchLegacySendToScopeFromViewController:attribution:shareSheetConfiguration:] */

void FUN_10720ca7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0xa0);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b1a20;
    _objc_alloc(PTR_PTR_1126b1a20);
    if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
      func_0x00010c01d640(puVar3,param_2,1,1,0,0);
    }
    else {
      lVar4 = param_5;
      func_0x00010c26b9e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d640(puVar3,param_2,1,1,0,lVar4 != 0);
      _objc_release(lVar4);
    }
    puVar5 = PTR_PTR_1126c90a0;
    _objc_alloc(PTR_PTR_1126c90a0);
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c22b5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c22b620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031ee0(puVar5,param_2,lVar7,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    if (*(long *)(param_1 + 0xa8) == 0) {
      puVar8 = PTR_PTR_1126b1a28;
      _objc_alloc();
      func_0x00010c038ea0();
      uVar9 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined **)(param_1 + 0xa8) = puVar8;
      _objc_release(uVar9);
    }
    puVar8 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    func_0x00010bff5040();
    uVar9 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bfe63a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720cca0; end: 10720cdc7; -[SCLegacyStoriesSharingSession _fetchCreatorSetting] */

void FUN_10720cca0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000108f22cac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c105880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c244960(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 10720cdc8; end: 10720ce1b;  */

void FUN_10720cdc8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be10b20();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10720ce1c; end: 10720cec3; -[SCLegacyStoriesSharingSession _fetchCreatorSettingWithSnapchatter:] */

void FUN_10720ce1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b7e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be10b00(param_1,param_2,uVar3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10720cec4; end: 10720d0af; -[SCLegacyStoriesSharingSession _fetchCreatorSettingSuccess:posterUserId:] */

void FUN_10720cec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c079480(param_3);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c079480(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ceed8;
  _objc_alloc(PTR_PTR_1126ceed8);
  func_0x00010c04dee0();
  _objc_release(param_4);
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10720d0b0;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 10720d0b0; end: 10720d107;  */

void FUN_10720d0b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c288440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10720d108; end: 10720d22b; -[SCLegacyStoriesSharingSession _fetchFriendScore] */

void FUN_10720d108(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000108f22cac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c105880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c244960(lVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 10720d22c; end: 10720d27f;  */

void FUN_10720d22c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bf119c();
  if ((int)uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be114c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10720d280; end: 10720d3d3; -[SCLegacyStoriesSharingSession _fetchFriendScoreWithSnapchatter:] */

void FUN_10720d280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000108f22a9c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfb8aa0(puVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10720d3d4; end: 10720d427;  */

void FUN_10720d3d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee10c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720d428; end: 10720d5c7; -[SCLegacyStoriesSharingSession _updateStoryScorePropertyWithSnapchatter:friendScore:] */

void FUN_10720d428(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c105880();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  lVar4 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar6 != 0) {
    if (param_4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = *(undefined **)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar3;
    }
    else {
      func_0x00010c150c20(param_4);
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar3;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c288440();
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_4 + 0x30);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010c27dd80();
  uVar1 = lVar2 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar8 = 1;
      if ((lVar2 + 1U < 0x1c) && ((1L << (lVar2 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar2 + 1U < 0x1b) {
          uVar8 = *(undefined8 *)(&UNK_10de20520 + (lVar2 + 1U) * 8);
        }
        else {
          uVar8 = 0;
        }
      }
      goto LAB_10720d664;
    }
    if (uVar1 == 8) {
      uVar8 = 5;
      goto LAB_10720d664;
    }
    if (uVar1 == 10) {
      uVar8 = 0xe;
      goto LAB_10720d664;
    }
  }
  uVar8 = 2;
LAB_10720d664:
  lVar2 = lVar4;
  func_0x00010c25b3c0(lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c0b1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_logStorySnapContextMenuViewWithM_112609e58,uVar8,lVar2,0,
             *(undefined8 *)(param_4 + 0x50));
  return;
}



/* Entry: 10720d5c8; end: 10720d6c7; -[SCLegacyStoriesSharingSession _logContextMenuViewWithStory:] */

void FUN_10720d5c8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c27dd80();
  uVar1 = lVar2 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar4 = 1;
      if ((lVar2 + 1U < 0x1c) && ((1L << (lVar2 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar2 + 1U < 0x1b) {
          uVar4 = *(undefined8 *)(&UNK_10de20520 + (lVar2 + 1U) * 8);
        }
        else {
          uVar4 = 0;
        }
      }
      goto LAB_10720d664;
    }
    if (uVar1 == 8) {
      uVar4 = 5;
      goto LAB_10720d664;
    }
    if (uVar1 == 10) {
      uVar4 = 0xe;
      goto LAB_10720d664;
    }
  }
  uVar4 = 2;
LAB_10720d664:
  lVar2 = param_3;
  func_0x00010c25b3c0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0b1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_logStorySnapContextMenuViewWithM_112609e58,uVar4,lVar2,0,
             *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10720d6c8; end: 10720d7e7; -[SCLegacyStoriesSharingSession _logContextMenuSendWithStory:recipientCount:] */

void FUN_10720d6c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c27dd80();
  uVar1 = lVar2 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar4 = 1;
      if ((lVar2 + 1U < 0x1c) && ((1L << (lVar2 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar2 + 1U < 0x1b) {
          uVar4 = *(undefined8 *)(&UNK_10de20520 + (lVar2 + 1U) * 8);
        }
        else {
          uVar4 = 0;
        }
      }
      goto LAB_10720d76c;
    }
    if (uVar1 == 8) {
      uVar4 = 5;
      goto LAB_10720d76c;
    }
    if (uVar1 == 10) {
      uVar4 = 0xe;
      goto LAB_10720d76c;
    }
  }
  uVar4 = 2;
LAB_10720d76c:
  lVar2 = param_3;
  func_0x00010c25b3c0(param_3);
  _objc_release(param_3);
  func_0x00010c0b11c0(uVar3,param_2,uVar4,lVar2,0,param_4,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10720d7e8; end: 10720d8f3; -[SCLegacyStoriesSharingSession legacySendToScopeDidDismiss:selectedItems:] */

void FUN_10720d7e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf94c40(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720d8f4; end: 10720d91f;  */

void FUN_10720d8f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720d920; end: 10720da6b; -[SCLegacyStoriesSharingSession legacySendToScopeWillSend:sendToSelection:] */

void FUN_10720d920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720da6c; end: 10720dacb;  */

void FUN_10720da6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c22aec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd2e0(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10720dacc; end: 10720dbeb; -[SCLegacyStoriesSharingSession _didDetachUIWithSendToSelection:shareSheetConfiguration:] */

void FUN_10720dacc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf94c40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720dbec; end: 10720dc47;  */

void FUN_10720dbec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9f860(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bea0b60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010bdfd560(lVar1);
    func_0x00010bdfe3e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10720dc48; end: 10720e0b7; -[SCLegacyStoriesSharingSession _sendMessageWithSendToSelection:] */

void FUN_10720dc48(long param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar5);
    if (puVar7 == (undefined *)0x0) goto LAB_10720dfac;
  }
  else {
    _objc_release(puVar5);
  }
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126afca8;
  if (lVar4 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110ea2cb8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2cb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar5);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c07f5e0();
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      _objc_release();
    }
    puVar5 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar3);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if ((puVar7 == (undefined *)0x0) &&
       (puVar7 = puVar3, func_0x00010bf529e0(), puVar7 == (undefined *)0x0)) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      func_0x000108605534(puVar3);
      func_0x00010bf529e0(puVar5);
      puVar7 = puVar5;
      func_0x0001086054d8(puVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR_PTR_1126b5be8;
      _objc_alloc(PTR_PTR_1126b5be8);
      puVar8 = puVar3;
      func_0x00010860560c(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff40a0(ppuVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010c06d9a0();
    if ((int)puVar5 == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c07d1a0();
      if ((iVar2 != 0) && (!bVar1 && ((*(byte *)(param_1 + 0xf0) ^ 0xff) & 1) == 0)) {
        puVar8 = *(undefined **)(param_1 + 8);
        func_0x00010bfe32e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x00010bfe3180();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x000108f51ed0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126b5be0;
        _objc_alloc(PTR_PTR_1126b5be0);
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010be36bc0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000b80(puVar5);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010c116a20(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108534ac8(*(undefined8 *)(param_1 + 0x28));
        func_0x00010c22ae20(uVar6);
        goto LAB_10720df10;
      }
      puVar8 = param_3;
      func_0x00010c122f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010bfcf800(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010befd440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea0700(param_1);
    }
    else {
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126becf8);
      puVar8 = puVar5;
      func_0x00010beecc40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar3 = puVar8;
      func_0x00010bfe63a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010be36bc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = *(undefined **)(param_1 + 8);
      func_0x00010bf25000(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22b020(puVar5);
LAB_10720df10:
      _objc_release(puVar7);
      _objc_release(uVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar8);
  }
  _objc_release(ppuVar9);
LAB_10720dfac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720e0b8; end: 10720e0bf;  */

void FUN_10720e0b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shareMessageSender_112668530);
  return;
}



/* Entry: 10720e0c0; end: 10720e1e3; -[SCLegacyStoriesSharingSession _didFinishSendingWithSendToSelection:] */

void FUN_10720e0c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_10720e1cc;
  }
  else {
    _objc_release(lVar1);
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar4,puVar5,&PTR____CFConstantStringClassReference_110e22c98);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  lVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010be51f20(param_1);
  _objc_release(lVar1);
LAB_10720e1cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720e1e4; end: 10720e36f; -[SCLegacyStoriesSharingSession _sendStoryShareToRecipients:mischiefs:additionalText:destinationInfo:] */

void FUN_10720e1e4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_4;
    func_0x000107e327dc(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108605534();
    func_0x00010bf529e0();
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c246920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    _objc_retain(param_5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720e370; end: 10720e433;  */

void FUN_10720e370(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x0001086063f4(uVar2,*(undefined8 *)(param_1 + 0x30),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0780(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10720e434; end: 10720e503; -[SCLegacyStoriesSharingSession _sendStoryShareToSortedRecipients:additionalText:destinationInfo:] */

void FUN_10720e434(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = param_5;
    func_0x000108605098(param_5,*(undefined8 *)(param_1 + 0xb0));
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2;
      func_0x000108604db4(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be9e900(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720e504; end: 10720e83b; -[SCLegacyStoriesSharingSession _sendArroyoStoryShareToConversations:additionalText:platformAnalytics:additionalTextPlatformAnalytics:] */

void FUN_10720e504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10720e83c;
  puStack_88 = &UNK_110841f20;
  ppuVar3 = &puStack_a0;
  lStack_80 = param_1;
  _objc_retainBlock();
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07f5e0();
  if (iVar2 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar8 = PTR_PTR_1126b5bd8;
      func_0x00010c24b300(PTR_PTR_1126b5bd8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110ea2cd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      ppuVar7 = (undefined **)PTR_PTR_1126b5bd0;
      _objc_alloc(PTR_PTR_1126b5bd0);
      func_0x00010c000c00();
      uVar5 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar1;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10720e8f4;
      puStack_b0 = &UNK_110852668;
      ppuStack_a8 = ppuVar3;
      _objc_retain(ppuVar3);
      func_0x00010c15cbe0(uVar5,param_2,ppuVar7,param_3,param_4,param_5,
                          PTR___dispatch_main_q_11034be20,&puStack_c8);
      _objc_release(uVar5);
      _objc_release(ppuStack_a8);
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar6;
      goto LAB_10720e7e0;
    }
  }
  puVar8 = PTR_PTR_1126c2810;
  _objc_alloc(PTR_PTR_1126c2810);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010be36bc0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27dd80(uVar5);
  func_0x00010c04e240(puVar8,param_2,uVar9,uVar5,0,param_4);
  _objc_release(uVar9);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c1440;
  _objc_opt_class(PTR_PTR_1126c1440);
  uVar5 = uVar9;
  func_0x00010beecc40(uVar9,param_2,puVar10,&PTR___NSConcreteGlobalBlock_1109932e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar5;
  func_0x00010bfe63a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar5);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x10720e910;
  puStack_d8 = &UNK_110852668;
  ppuStack_d0 = ppuVar3;
  _objc_retain(ppuVar3);
  func_0x00010c15d8c0(uVar11,param_2,puVar8,param_3,param_5,param_6,PTR___dispatch_main_q_11034be20,
                      &puStack_f0);
  _objc_release(uVar11);
  ppuVar7 = ppuStack_d0;
LAB_10720e7e0:
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
  _objc_release(puVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10720e83c; end: 10720e8f3;  */

void FUN_10720e83c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10720e8f4; end: 10720e92b;  */

void FUN_10720e8f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010720e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 10720e92c; end: 10720ea9f; -[SCLegacyStoriesSharingSession _sendToPhoneNumbersWithSendToSelection:shareSheetConfiguration:] */

void FUN_10720e92c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar2 != 0)) {
    lVar2 = param_4;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0xe0);
      _objc_release();
      _objc_release(lVar3);
      if (cVar1 != '\x01') goto LAB_10720ea7c;
      lVar3 = param_4;
      func_0x00010c26b9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar2 == 0) goto LAB_10720ea7c;
      lVar3 = *(long *)(param_1 + 0xd0);
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0fb120(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c26b9e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c22c620(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c5a0(lVar3,param_2,lVar2,lVar5,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar3);
LAB_10720ea7c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720eaa0; end: 10720eae3; -[SCLegacyStoriesSharingSession _didDismissSendViewController] */

void FUN_10720eaa0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720eae4; end: 10720eb9b; -[SCLegacyStoriesSharingSession _savePressed] */

void FUN_10720eae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10720eb9c;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000107e003a4(uVar2,uVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10720eb9c; end: 10720ec87;  */

void FUN_10720eb9c(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x2) {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if (puVar1 != (undefined *)0x1) {
        func_0x00010c14b340(*(undefined8 *)(param_1 + 8));
        goto LAB_10720ec74;
      }
    }
    lVar2 = param_1;
    func_0x00010be73b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110db74f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db74f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110db7518;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7518,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1184e0(lVar2);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(lVar2);
  }
LAB_10720ec74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720ec88; end: 10720edf3; -[SCLegacyStoriesSharingSession _deletePressed] */

void FUN_10720ec88(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10720edf4;
  puStack_70 = &UNK_11085c6a8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar5);
  ppuVar3 = &puStack_88;
  uStack_68 = uVar5;
  _objc_retainBlock();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10720ee28;
  puStack_a0 = &UNK_11084aaa8;
  _objc_retain(uVar5);
  uStack_98 = uVar5;
  _objc_retain(ppuVar3);
  ppuVar4 = &puStack_b8;
  ppuStack_90 = ppuVar3;
  _objc_retainBlock(ppuVar4);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bf2c5e0();
  if (iVar2 == 0) {
    func_0x00010beb8ac0(param_1);
  }
  else {
    func_0x00010beb8aa0(param_1);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuStack_90);
  _objc_release(uStack_98);
  _objc_release(ppuVar3);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  return;
}



/* Entry: 10720edf4; end: 10720ee27;  */

void FUN_10720edf4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be37a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720ee28; end: 10720ee37;  */

void FUN_10720ee28(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  ppuVar3 = ppuVar1;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
    func_0x00010bf25280(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b200();
    _objc_release(ppuVar3);
  }
  puVar4 = PTR_PTR_1126c27c0;
  _objc_alloc();
  ppuVar3 = ppuVar1;
  func_0x00010bf25000(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x000108f498a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3f40();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  func_0x000107a0478c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x00010c07f5e0();
  if ((int)ppuVar6 == 0) {
    ppuVar10 = ppuVar1;
    func_0x00010c259cc0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110e43098;
  }
  ppuVar7 = ppuVar1;
  func_0x00010bf3cf60(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar1;
  func_0x00010be36bc0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar1;
  func_0x00010c105860(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f5e0(ppuVar1);
  _objc_retain(uVar2);
  func_0x00010bf6c880(ppuVar5);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  if (((ulong)ppuVar6 & 1) == 0) {
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10720ee38; end: 10720eefb; -[SCLegacyStoriesSharingSession _impalaFlowRefreshFeedCall:] */

void FUN_10720ee38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23e460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720eefc; end: 10720f02b; -[SCLegacyStoriesSharingSession didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_10720eefc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(lVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x150);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf94c20(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(lVar4 + 0x150);
  func_0x00010bfe63a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10720f02c; end: 10720f05f; -[SCLegacyStoriesSharingSession didCancelDeleteStorySnap] */

void FUN_10720f02c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10720f060; end: 10720f063; -[SCLegacyStoriesSharingSession didDeleteSnapProStorySnaps:] */

void FUN_10720f060(void)

{
  return;
}



/* Entry: 10720f064; end: 10720f3df; -[SCLegacyStoriesSharingSession _showDeletionAlertForSpotlightWithMemberRolesWithDeleteHandler:] */

void FUN_10720f064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf25120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea2d18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2d18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1ee18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ee18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110ea2d38;
  uVar2 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2d38,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010720f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar4 + 0x20) + 0x10))();
  return;
}



/* Entry: 10720f3e0; end: 10720f413;  */

void FUN_10720f3e0(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010720f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10720f414; end: 10720f423;  */

void FUN_10720f414(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10720f424; end: 10720f607; -[SCLegacyStoriesSharingSession _showDeletionAlertWithDeleteHandler:] */

void FUN_10720f424(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
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
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1ee18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1ee18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010720f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 10720f608; end: 10720f623;  */

void FUN_10720f608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010720f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10720f624; end: 10720f69f; -[SCLegacyStoriesSharingSession _didSendOperaEvent:] */

void FUN_10720f624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720f6a0; end: 10720f9d7; -[SCLegacyStoriesSharingSession _shareLinkForUsername:inCell:] */

void FUN_10720f6a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **unaff_x28;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010c1beb60(param_4);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c07f8c0();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c14cde0();
    _objc_release();
    iVar1 = (int)puVar4;
    func_0x0001008522a8();
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc40();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc60();
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126aeb08;
    _objc_alloc(PTR_PTR_1126aeb08);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0f80(puVar4);
    _objc_release(puVar7);
    uStack_88 = *(undefined8 *)PTR__UIActivityTypeAddToReadingList_110345978;
    uStack_80 = *(undefined8 *)PTR__UIActivityTypeAssignToContact_110345988;
    uStack_78 = *(undefined8 *)PTR__UIActivityTypePrint_1103459e8;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197fe0(puVar4);
    _objc_initWeak(auStack_90,param_1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10720f9d8;
    puStack_b0 = &UNK_110993210;
    uStack_98 = SUB81(puVar5,0);
    unaff_x28 = &puStack_c8;
    puStack_a0 = puVar6;
    _objc_copyWeak(auStack_a8,auStack_90);
    func_0x00010c17fc60(puVar4);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  lVar8 = param_3;
  func_0x0001008522a8();
  if ((int)lVar8 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar2);
  }
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c22a860(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be004e0(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10720f9d8; end: 10720fa8f;  */

void FUN_10720f9d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x0001008522a8();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c22a860(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be004e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10720fa90; end: 10720fc3b; -[SCLegacyStoriesSharingSession _logFriendStoryOptIn:interactionContext:] */

void FUN_10720fa90(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0x1c;
  if (param_3 == 0) {
    uVar5 = 0x1d;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR____CFConstantStringClassReference_110f41518;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  puVar1 = puVar4;
  func_0x00010bf7dbc0(uVar5);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(lVar8);
  _objc_retain(puVar1);
  uVar5 = *(undefined8 *)(puVar4 + 0x80);
  _objc_opt_class(uVar5);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((int)lVar9 != 0) {
    puVar2 = PTR_PTR_1126b4030;
    func_0x00010bf5b2c0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00010c0720c0();
    if ((int)ppuVar6 == 0) {
      puVar3 = PTR_PTR_1126b4030;
      func_0x00010bf5b2e0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)ppuVar6 == 0) goto LAB_10720fe0c;
    }
    else {
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b4038;
    func_0x00010bf5b6e0(PTR_PTR_1126b4038);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b4040;
    _objc_opt_class(PTR_PTR_1126b4040);
    puVar7 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    _objc_initWeak(auStack_108,puVar4);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10720fe5c;
    puStack_120 = &UNK_110841fb0;
    _objc_copyWeak(auStack_110,auStack_108);
    _objc_retain(puVar2);
    puStack_118 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_138);
    _objc_release(puStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar2);
  }
LAB_10720fe0c:
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release(ppuVar10);
  return;
}


