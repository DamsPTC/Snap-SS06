/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051c8f08; end: 1051c8f8b; -[SCContextQuickCommentActionPerformer .cxx_destruct] */

void FUN_1051c8f08(long param_1)

{
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



/* Entry: 1051c8f8c; end: 1051c9057; -[SCContextQuickShareActionPerformer initWithSnapchattersDataFetcher:quickShareScopeServices:platformAnalyticsCreator:] */

undefined1 *
FUN_1051c8f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6ce0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c9058; end: 1051c93eb; -[SCContextQuickShareActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c9058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar8 = param_3;
  func_0x00010beeed20();
  if ((int)uVar8 == 0x5e) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar2 = param_6;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_6;
      func_0x00010c0b3760(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b2cf0;
      func_0x00010bf4f080(PTR_PTR_1126b2cf0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar1);
      _objc_release(puVar3);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf196e0();
    _objc_release(lVar4);
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0d42e0();
    _objc_release(lVar5);
    if (lVar2 == 0 && lVar4 == 0) {
      puVar3 = PTR_PTR_1126b5bf0;
      func_0x00010c22ab20(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar1);
      _objc_release(puVar3);
      uVar8 = param_3;
      func_0x00010c0ccaa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010beef1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b5cb8;
      func_0x00010beedca0(PTR_PTR_1126b5cb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar1);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar8);
      lVar2 = param_6;
      func_0x00010c0ea4c0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_6;
      func_0x00010c0ea8e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(lVar2);
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))(param_8,0);
      }
    }
    else {
      lVar2 = param_8;
      _objc_retainBlock();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2;
      _objc_release(uVar8);
      uVar8 = param_3;
      func_0x00010c0ccaa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010beef1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b5c68;
      func_0x00010c28ef60(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar7);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar8);
      func_0x00010be0d1e0(param_1);
    }
    _objc_release(puVar1);
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar9 = &PTR____CFConstantStringClassReference_110dca7d8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca7d8,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 1051c93ec; end: 1051c98bf; -[SCContextQuickShareActionPerformer _exposeQuickShareScopeOnViewController:params:isUpsold:] */

void FUN_1051c93ec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
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
  undefined8 uVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12a920(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
  uVar2 = param_4;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar2 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar3 = uVar2;
  func_0x00010c24b5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  uVar3 = param_4;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c242420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c242420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010bf579a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = param_4;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar4 = PTR_DAT_1126a4f40;
  _objc_retain(param_3);
  uVar16 = param_3;
  func_0x00010010fab4(param_3,puVar4);
  uVar1 = param_3;
  if ((int)uVar16 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = param_4;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0ea4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf82a60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar16;
  _objc_release(uVar1);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051c98c0; end: 1051c9903; -[SCContextQuickShareActionPerformer _didComplete] */

void FUN_1051c98c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c9904; end: 1051c9943; -[SCContextQuickShareActionPerformer didCompleteSpotlightQuickShareScope] */

void FUN_1051c9904(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12a920(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdfccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didComplete_11255ccc8);
    return;
  }
  return;
}



/* Entry: 1051c9944; end: 1051c9997; -[SCContextQuickShareActionPerformer .cxx_destruct] */

void FUN_1051c9944(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c9998; end: 1051c9b53; -[SCContextRecommendActionPerformer initWithNotificationPool:lazyBoostCoordinator:featureSettingsService:storiesConfigProvider:spotlightToStoriesPoster:snapProUserProfileIdProvider:] */

undefined1 *
FUN_1051c9998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e6ce8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051c9b54; end: 1051ca2bb; -[SCContextRecommendActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined *
FUN_1051c9b54(long param_1,undefined **param_2,undefined *param_3,undefined **param_4,
             undefined8 param_5,undefined **param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuStack_100;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_3;
  func_0x00010c1230c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_4;
  if (puVar1 == (undefined *)0x0) {
LAB_1051c9cb0:
    if (param_8 != 0) {
      param_2 = (undefined **)0x0;
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
  }
  else {
    puVar2 = param_3;
    func_0x00010c0ccaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010beef1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5c68;
    func_0x00010c1230a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar3 == puVar4) {
      ppuVar5 = param_6;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      param_2 = ppuVar7;
      func_0x000107dd9cf0(ppuVar5,ppuVar7);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      if ((int)ppuVar8 != 0) goto LAB_1051c9cb0;
    }
    ppuVar5 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = ppuVar6;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    ppuVar5 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar9 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar9;
      func_0x00010c241400();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar9);
    }
    else {
      _objc_retain(ppuVar7);
      ppuVar10 = ppuVar7;
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    if (ppuVar10 == (undefined **)0x0) {
      if (param_8 != 0) {
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        _objc_alloc();
        func_0x00010c00e2e0();
        param_2 = ppuVar9;
        (**(code **)(param_8 + 0x10))(param_8,ppuVar9);
        _objc_release(ppuVar9);
      }
    }
    else {
      ppuVar9 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar9;
      func_0x00010c241400();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c22e6a0();
      _objc_release(ppuVar5);
      _objc_release(ppuVar9);
      if (((ulong)ppuVar6 & 1) == 0) {
        _objc_release(ppuStack_100);
        ppuStack_100 = (undefined **)0x0;
      }
      _objc_initWeak(&puStack_90,param_1);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11de00(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1051ca2bc;
      puStack_c0 = &UNK_11086ebe8;
      _objc_retain(param_6);
      ppuVar9 = &puStack_d8;
      param_2 = &puStack_90;
      ppuStack_b8 = param_6;
      _objc_copyWeak(auStack_98,param_2);
      _objc_retain(ppuVar10);
      ppuStack_b0 = ppuVar10;
      _objc_retain(ppuStack_100);
      ppuStack_a8 = ppuStack_100;
      _objc_retain(param_8);
      lStack_a0 = param_8;
      func_0x00010bfa5620(uVar11);
      _objc_release(uVar12);
      _objc_release(uVar11);
      puVar2 = param_3;
      func_0x00010c0ccaa0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010beef1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b5c68;
      func_0x00010c1230a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar3 == puVar4) {
        ppuVar5 = param_6;
        func_0x00010c0ea4c0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b5b28;
        func_0x00010c1342a0(PTR_PTR_1126b5b28);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_6;
        func_0x00010c0ea8e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(ppuVar5);
        _objc_release(ppuVar6);
        _objc_release(puVar2);
        _objc_release(ppuVar5);
        func_0x00010beba8e0(param_1);
        func_0x00010be90720(param_1);
      }
      else {
        puVar2 = param_3;
        func_0x00010c0ccaa0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010beef1e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b5c68;
        func_0x00010c281f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if (puVar3 == puVar4) {
          ppuVar5 = param_6;
          func_0x00010c0ea4c0(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b5b28;
          func_0x00010c2822a0(PTR_PTR_1126b5b28);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = param_6;
          func_0x00010c0ea8e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0eb7c0(ppuVar5);
          _objc_release(ppuVar6);
          _objc_release(puVar2);
          _objc_release(ppuVar5);
          func_0x00010bdfa5a0(param_1);
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b1270;
          func_0x00010c134580(PTR_PTR_1126b1270);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar12;
          func_0x00010bf1f320();
          _objc_release(puVar2);
          _objc_release(uVar12);
          if ((int)uVar11 != 0) {
            ppuVar5 = param_6;
            func_0x00010c0ea4c0(param_6);
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = param_6;
            func_0x00010c0ea8e0(param_6);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_80 = &PTR____CFConstantStringClassReference_110dcab78;
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            ppuStack_88 = ppuVar10;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_78 = puVar2;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eb7c0(ppuVar5);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(ppuVar6);
            _objc_release(ppuVar5);
          }
        }
      }
      _objc_release(lStack_a0);
      _objc_release(ppuStack_a8);
      _objc_release(ppuStack_b0);
      _objc_destroyWeak(auStack_98);
      _objc_release(ppuStack_b8);
      _objc_destroyWeak(&puStack_90);
    }
    _objc_release(ppuVar10);
    _objc_release(ppuStack_100);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 8);
  _objc_destroyWeak(&puStack_90);
  __Unwind_Resume();
  uVar15 = *(ulong *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar1 = PTR_PTR_1126b5b20;
  _objc_opt_class(PTR_PTR_1126b5b20);
  uVar14 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar1);
  uVar15 = uVar13;
  if ((uVar14 & 1) == 0) {
    uVar15 = 0;
  }
  _objc_retain(uVar15);
  _objc_release(uVar13);
  ppuVar9 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010b611948(ppuVar9,uVar15);
  _objc_release(uVar15);
  _objc_release(ppuVar9);
  param_3 = param_3 + 0x40;
  _objc_loadWeakRetained(param_3);
  func_0x00010be011c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 1051ca2bc; end: 1051ca3af;  */

void FUN_1051ca2bc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b5b20;
  _objc_opt_class(PTR_PTR_1126b5b20);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  uVar4 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010b611948(uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be011c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ca3b0; end: 1051ca503; -[SCContextRecommendActionPerformer _deleteRepostedSpotlightWithParams:] */

void FUN_1051ca3b0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c2822c0(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar7 != 0) {
    uVar3 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c0ffba0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar3 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6ca00();
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ca504; end: 1051ca7bb; -[SCContextRecommendActionPerformer _repostToMyStoryWithParams:showUndoToast:] */

void FUN_1051ca504(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c134480(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar9 != 0) {
    uVar3 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c0ffba0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar3 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c24afc0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae720;
    _objc_opt_class(PTR_PTR_1126ae720);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar6 = uVar5;
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar8 = param_1;
    func_0x00010be43400();
    if ((int)lVar8 != 0) {
      puVar2 = PTR_PTR_1126b5cc0;
      _objc_alloc(PTR_PTR_1126b5cc0);
      func_0x00010c037e40();
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40(lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b1270;
      func_0x00010c134460(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar10;
      func_0x00010c067e20(lVar10);
      func_0x00010c105260((double)lVar8 / 1000.0,uVar9);
      _objc_release(puVar11);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(puVar2);
    }
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ca7bc; end: 1051ca80b; -[SCContextRecommendActionPerformer _isRepostableSnap:] */

ulong FUN_1051ca7bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010853a5d4();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x000108539d58(param_3);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1051ca80c; end: 1051caa1f; -[SCContextRecommendActionPerformer _showRecommendNotification] */

long FUN_1051ca80c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c134480(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beba910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showRecommendToStoryNotificatio_11258c3e8)
    ;
    return param_1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4d1a0();
  _objc_release(lVar3);
  lVar3 = 0;
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c073920();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      func_0x000108f59674();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f5968c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126ae558;
    uVar6 = uVar5;
    func_0x00010b0b2614();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126b0ae0;
    func_0x000108f596a4();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 1;
    func_0x00010bf57ee0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d1a0();
    func_0x00010c182560(uVar8);
    _objc_release(uVar1);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  return lVar3;
}



/* Entry: 1051caa20; end: 1051cabeb; -[SCContextRecommendActionPerformer _showRecommendToStoryNotification] */

bool FUN_1051caa20(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c134440(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067e20(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf4d1c0();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae558;
  if (uVar1 < uVar3) {
    func_0x00010b0b2614();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar2,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b0ae0;
    func_0x000108f596d4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000108f596ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57ee0(puVar6,param_2,puVar2,uVar4,uVar5,0,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf4d1c0();
    func_0x00010c182580(uVar7,param_2,lVar9 + 1);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  return uVar1 < uVar3;
}



/* Entry: 1051cabec; end: 1051cae13; -[SCContextRecommendActionPerformer _didTapRecommendWithIsRecommended:storyId:itemId:completion:] */

void FUN_1051cabec(double param_1,long param_2,undefined8 param_3,int param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b30;
  _objc_alloc(PTR_PTR_1126b5b30);
  if (lVar1 == 0) {
    func_0x00010c005f80(puVar2,param_3,0,param_5,0);
  }
  else {
    lVar3 = lVar1;
    func_0x00010bf52680(lVar1);
    lVar4 = lVar1;
    func_0x00010bfe5ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c298be0(lVar1);
    func_0x00010c005f80(puVar2,param_3,lVar3,lVar4,lVar5);
    _objc_release(lVar4);
  }
  uVar9 = 1;
  if (param_4 != 0) {
    uVar9 = 2;
  }
  puVar6 = PTR_PTR_1126b5b38;
  _objc_alloc(PTR_PTR_1126b5b38);
  puVar7 = puVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c04ee20(param_1 * 1000.0,0,puVar6,param_3,puVar7,param_6,puVar2,uVar9,0,0,2);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1051cae14;
  puStack_70 = &UNK_110849530;
  uStack_68 = param_7;
  _objc_retain(param_7);
  func_0x00010c14a0a0(uVar9,param_3,puVar6,&puStack_88);
  _objc_release(uVar9);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1051cae14; end: 1051cae2b;  */

void FUN_1051cae14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051cae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051cae2c; end: 1051cae97; -[SCContextRecommendActionPerformer .cxx_destruct] */

void FUN_1051cae2c(long param_1)

{
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



/* Entry: 1051cae98; end: 1051cb10f; -[SCContextRemixActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051cae98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_4);
  uVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c2a71e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000107dd9cf0(uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar1 = param_3;
    func_0x00010c129560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158e40();
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010c0ea4c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b2d30;
    func_0x00010c129540(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    func_0x00010c0ea8e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2d20;
    func_0x00010c1298c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(puVar9);
    _objc_release(uVar1);
    (**(code **)(param_8 + 0x10))(param_8,0);
    puVar9 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
  }
  else {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
    puVar9 = (undefined *)0x0;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1051cb110; end: 1051cb113;  */

void FUN_1051cb110(void)

{
  return;
}



/* Entry: 1051cb114; end: 1051cb297; -[SCContextRepostActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051cb114(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x3;
  undefined8 in_x5;
  long in_x7;
  undefined *puVar5;
  
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  _objc_retain(in_x3);
  uVar1 = in_x5;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = in_x3;
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  uVar3 = uVar2;
  func_0x00010c2a71e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000107dd9cf0(uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar1 = in_x5;
    func_0x00010c0ea4c0(in_x5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2d30;
    func_0x00010c1342a0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = in_x5;
    func_0x00010c0ea8e0(in_x5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar1);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar1);
    (**(code **)(in_x7 + 0x10))(in_x7,0);
    puVar5 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
  }
  else {
    if (in_x7 != 0) {
      (**(code **)(in_x7 + 0x10))(in_x7,0);
    }
    puVar5 = (undefined *)0x0;
  }
  _objc_release(in_x7);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051cb298; end: 1051cb29b;  */

void FUN_1051cb298(void)

{
  return;
}



/* Entry: 1051cb29c; end: 1051cb403;  */

bool FUN_1051cb29c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08bda0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 0x19;
}



/* Entry: 1051cb404; end: 1051cb48b; -[SCContextActionProvider initWithType:provider:] */

undefined1 *
FUN_1051cb404(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6cf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1051cb48c; end: 1051cb49b; -[SCContextActionProvider matchesActionType:] */

bool FUN_1051cb48c(long param_1,undefined8 param_2,int param_3)

{
  return *(int *)(param_1 + 0x10) == param_3;
}



/* Entry: 1051cb49c; end: 1051cb4c3; -[SCContextActionProvider createActionPerformer] */

void FUN_1051cb49c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cb4c4; end: 1051cb4cf; -[SCContextActionProvider .cxx_destruct] */

void FUN_1051cb4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051cb4d0; end: 1051cce4f; -[SCContextActionsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cb4d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b38 [8];
  undefined *puStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined *puStack_b18;
  undefined1 auStack_b10 [8];
  undefined *puStack_b08;
  undefined8 uStack_b00;
  code *pcStack_af8;
  undefined *puStack_af0;
  undefined1 auStack_ae8 [8];
  undefined *puStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined *puStack_ac8;
  undefined1 auStack_ac0 [8];
  undefined *puStack_ab8;
  undefined8 uStack_ab0;
  code *pcStack_aa8;
  undefined *puStack_aa0;
  undefined1 auStack_a98 [8];
  undefined *puStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined *puStack_a78;
  undefined1 auStack_a70 [8];
  undefined *puStack_a68;
  undefined8 uStack_a60;
  code *pcStack_a58;
  undefined *puStack_a50;
  undefined1 auStack_a48 [8];
  undefined *puStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined *puStack_a28;
  undefined1 auStack_a20 [8];
  undefined *puStack_a18;
  undefined8 uStack_a10;
  code *pcStack_a08;
  undefined *puStack_a00;
  undefined1 auStack_9f8 [8];
  undefined *puStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined *puStack_9d8;
  undefined1 auStack_9d0 [8];
  undefined *puStack_9c8;
  undefined8 uStack_9c0;
  code *pcStack_9b8;
  undefined *puStack_9b0;
  undefined1 auStack_9a8 [8];
  undefined *puStack_9a0;
  undefined8 uStack_998;
  code *pcStack_990;
  undefined *puStack_988;
  undefined1 auStack_980 [8];
  undefined *puStack_978;
  undefined8 uStack_970;
  code *pcStack_968;
  undefined *puStack_960;
  undefined1 auStack_958 [8];
  undefined *puStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined *puStack_938;
  undefined1 auStack_930 [8];
  undefined *puStack_928;
  undefined8 uStack_920;
  code *pcStack_918;
  undefined *puStack_910;
  undefined1 auStack_908 [8];
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined *puStack_8e8;
  undefined1 auStack_8e0 [8];
  undefined *puStack_8d8;
  undefined8 uStack_8d0;
  code *pcStack_8c8;
  undefined *puStack_8c0;
  undefined1 auStack_8b8 [8];
  undefined *puStack_8b0;
  undefined8 uStack_8a8;
  code *pcStack_8a0;
  undefined *puStack_898;
  undefined1 auStack_890 [8];
  undefined *puStack_888;
  undefined8 uStack_880;
  code *pcStack_878;
  undefined *puStack_870;
  undefined1 auStack_868 [8];
  undefined *puStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined *puStack_848;
  undefined1 auStack_840 [8];
  undefined *puStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined *puStack_820;
  undefined1 auStack_818 [8];
  undefined *puStack_810;
  undefined8 uStack_808;
  code *pcStack_800;
  undefined *puStack_7f8;
  undefined1 auStack_7f0 [8];
  undefined *puStack_7e8;
  undefined8 uStack_7e0;
  code *pcStack_7d8;
  undefined *puStack_7d0;
  undefined1 auStack_7c8 [8];
  undefined *puStack_7c0;
  undefined8 uStack_7b8;
  code *pcStack_7b0;
  undefined *puStack_7a8;
  undefined1 auStack_7a0 [8];
  undefined *puStack_798;
  undefined8 uStack_790;
  code *pcStack_788;
  undefined *puStack_780;
  undefined1 auStack_778 [8];
  undefined *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined *puStack_758;
  undefined1 auStack_750 [8];
  undefined1 auStack_748 [8];
  undefined *puStack_740;
  undefined8 uStack_738;
  code *pcStack_730;
  undefined *puStack_728;
  undefined1 auStack_720 [8];
  undefined *puStack_718;
  undefined8 uStack_710;
  code *pcStack_708;
  undefined *puStack_700;
  undefined1 auStack_6f8 [8];
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined *puStack_6d8;
  undefined1 auStack_6d0 [8];
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  code *pcStack_6b8;
  undefined *puStack_6b0;
  undefined1 auStack_6a8 [8];
  undefined *puStack_6a0;
  undefined8 uStack_698;
  code *pcStack_690;
  undefined *puStack_688;
  undefined1 auStack_680 [8];
  undefined *puStack_678;
  undefined8 uStack_670;
  code *pcStack_668;
  undefined *puStack_660;
  undefined1 auStack_658 [8];
  undefined *puStack_650;
  undefined8 uStack_648;
  code *pcStack_640;
  undefined *puStack_638;
  undefined1 auStack_630 [8];
  undefined *puStack_628;
  undefined8 uStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  undefined1 auStack_608 [8];
  undefined *puStack_600;
  undefined8 uStack_5f8;
  code *pcStack_5f0;
  undefined *puStack_5e8;
  undefined1 auStack_5e0 [8];
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  code *pcStack_5c8;
  undefined *puStack_5c0;
  undefined1 auStack_5b8 [8];
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  code *pcStack_5a0;
  undefined *puStack_598;
  long lStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  code *pcStack_578;
  undefined *puStack_570;
  undefined1 auStack_568 [8];
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined1 auStack_540 [8];
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined *puStack_520;
  undefined1 auStack_518 [8];
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined *puStack_4f8;
  undefined1 auStack_4f0 [8];
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  undefined1 auStack_4c8 [8];
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  code *pcStack_4b0;
  undefined *puStack_4a8;
  undefined1 auStack_4a0 [8];
  undefined *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined1 auStack_478 [8];
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined1 auStack_450 [8];
  undefined *puStack_448;
  undefined8 uStack_440;
  code *pcStack_438;
  undefined *puStack_430;
  undefined1 auStack_428 [8];
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined1 auStack_400 [8];
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined1 auStack_3b0 [8];
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined1 auStack_388 [8];
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined1 auStack_360 [8];
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined1 auStack_338 [8];
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271ed44);
  *(undefined **)(param_1 + _DAT_11271ed44) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1051cce50;
  puStack_98 = &UNK_11086ec58;
  _objc_copyWeak(auStack_90,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1051ccf10;
  puStack_c0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_b8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1051cd10c;
  puStack_e8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_e0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1051cd184;
  puStack_110 = &UNK_11086ec58;
  _objc_copyWeak(auStack_108,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1051cd21c;
  puStack_138 = &UNK_11086ec58;
  _objc_copyWeak(auStack_130,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_178 = puVar1;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1051cd2f8;
  puStack_160 = &UNK_11086ec58;
  _objc_copyWeak(auStack_158,auStack_80);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1051cd78c;
  puStack_188 = &UNK_11086ec58;
  _objc_copyWeak(auStack_180,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_1051cd864;
  puStack_1b0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_1a8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_1f0 = puVar1;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_1051cd960;
  puStack_1d8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_1d0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_218 = puVar1;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1051cdb3c;
  puStack_200 = &UNK_11086ec58;
  _objc_copyWeak(auStack_1f8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_240 = puVar1;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_1051cdbd4;
  puStack_228 = &UNK_11086ec58;
  _objc_copyWeak(auStack_220,auStack_80);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  puStack_268 = puVar1;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_1051cde5c;
  puStack_250 = &UNK_11086ec58;
  _objc_copyWeak(auStack_248,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_290 = puVar1;
  uStack_288 = 0xc2000000;
  pcStack_280 = FUN_1051cdefc;
  puStack_278 = &UNK_11086ec58;
  _objc_copyWeak(auStack_270,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_2b8 = puVar1;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_1051cdf58;
  puStack_2a0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_298,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_2e0 = puVar1;
  uStack_2d8 = 0xc2000000;
  pcStack_2d0 = FUN_1051ce09c;
  puStack_2c8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_2c0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_308 = puVar1;
  uStack_300 = 0xc2000000;
  pcStack_2f8 = FUN_1051ce0f8;
  puStack_2f0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_2e8,auStack_80);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  puStack_330 = puVar1;
  uStack_328 = 0xc2000000;
  pcStack_320 = FUN_1051ce1d0;
  puStack_318 = &UNK_11086ec58;
  _objc_copyWeak(auStack_310,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_358 = puVar1;
  uStack_350 = 0xc2000000;
  pcStack_348 = FUN_1051ce3c8;
  puStack_340 = &UNK_11086ec58;
  _objc_copyWeak(auStack_338,auStack_88);
  func_0x00010c125ba0(param_1);
  puStack_380 = puVar1;
  uStack_378 = 0xc2000000;
  pcStack_370 = FUN_1051ce408;
  puStack_368 = &UNK_11086ec58;
  _objc_copyWeak(auStack_360,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_3a8 = puVar1;
  uStack_3a0 = 0xc2000000;
  pcStack_398 = FUN_1051ce52c;
  puStack_390 = &UNK_11086ec58;
  _objc_copyWeak(auStack_388,auStack_88);
  func_0x00010c125ba0(param_1);
  puStack_3d0 = puVar1;
  uStack_3c8 = 0xc2000000;
  uStack_3c0 = 0x1051ce56c;
  puStack_3b8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_3b0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_3f8 = puVar1;
  uStack_3f0 = 0xc2000000;
  pcStack_3e8 = FUN_1051ce5c8;
  puStack_3e0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_3d8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_420 = puVar1;
  uStack_418 = 0xc2000000;
  pcStack_410 = FUN_1051ce678;
  puStack_408 = &UNK_11086ec58;
  _objc_copyWeak(auStack_400,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_448 = puVar1;
  uStack_440 = 0xc2000000;
  pcStack_438 = FUN_1051ce828;
  puStack_430 = &UNK_11086ec58;
  _objc_copyWeak(auStack_428,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_470 = puVar1;
  uStack_468 = 0xc2000000;
  uStack_460 = 0x1051ce884;
  puStack_458 = &UNK_11086ec58;
  _objc_copyWeak(auStack_450,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_498 = puVar1;
  uStack_490 = 0xc2000000;
  pcStack_488 = FUN_1051ce8e0;
  puStack_480 = &UNK_11086ec58;
  _objc_copyWeak(auStack_478,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_4c0 = puVar1;
  uStack_4b8 = 0xc2000000;
  pcStack_4b0 = FUN_1051cea30;
  puStack_4a8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_4a0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_4e8 = puVar1;
  uStack_4e0 = 0xc2000000;
  pcStack_4d8 = FUN_1051ceb2c;
  puStack_4d0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_4c8,auStack_88);
  func_0x00010c125ba0(param_1);
  puStack_510 = puVar1;
  uStack_508 = 0xc2000000;
  uStack_500 = 0x1051ceb6c;
  puStack_4f8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_4f0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_538 = puVar1;
  uStack_530 = 0xc2000000;
  uStack_528 = 0x1051cebc8;
  puStack_520 = &UNK_11086ec58;
  _objc_copyWeak(auStack_518,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_560 = puVar1;
  uStack_558 = 0xc2000000;
  uStack_550 = 0x1051cec24;
  puStack_548 = &UNK_11086ec58;
  _objc_copyWeak(auStack_540,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_588 = puVar1;
  uStack_580 = 0xc2000000;
  pcStack_578 = FUN_1051cec80;
  puStack_570 = &UNK_11086ec58;
  _objc_copyWeak(auStack_568,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_5b0 = puVar1;
  uStack_5a8 = 0xc2000000;
  pcStack_5a0 = FUN_1051ced80;
  puStack_598 = &UNK_11086eda8;
  lStack_590 = param_1;
  func_0x00010c125ba0(param_1);
  puStack_5d8 = puVar1;
  uStack_5d0 = 0xc2000000;
  pcStack_5c8 = FUN_1051cee58;
  puStack_5c0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_5b8,auStack_80);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  puStack_600 = puVar1;
  uStack_5f8 = 0xc2000000;
  pcStack_5f0 = FUN_1051cf0e8;
  puStack_5e8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_5e0,auStack_80);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  puStack_628 = puVar1;
  uStack_620 = 0xc2000000;
  pcStack_618 = FUN_1051cf1a0;
  puStack_610 = &UNK_11086ec58;
  _objc_copyWeak(auStack_608,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_650 = puVar1;
  uStack_648 = 0xc2000000;
  pcStack_640 = FUN_1051cf2ec;
  puStack_638 = &UNK_11086ec58;
  _objc_copyWeak(auStack_630,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_678 = puVar1;
  uStack_670 = 0xc2000000;
  pcStack_668 = FUN_1051cf370;
  puStack_660 = &UNK_11086ec58;
  _objc_copyWeak(auStack_658,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_6a0 = puVar1;
  uStack_698 = 0xc2000000;
  pcStack_690 = FUN_1051cf448;
  puStack_688 = &UNK_11086ec58;
  _objc_copyWeak(auStack_680,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_6c8 = puVar1;
  uStack_6c0 = 0xc2000000;
  pcStack_6b8 = FUN_1051cf55c;
  puStack_6b0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_6a8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_6f0 = puVar1;
  uStack_6e8 = 0xc2000000;
  uStack_6e0 = 0x1051cf630;
  puStack_6d8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_6d0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_718 = puVar1;
  uStack_710 = 0xc2000000;
  pcStack_708 = FUN_1051cf6ec;
  puStack_700 = &UNK_11086ec58;
  _objc_copyWeak(auStack_6f8,auStack_80);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  func_0x00010c125ba0(param_1);
  puStack_740 = puVar1;
  uStack_738 = 0xc2000000;
  pcStack_730 = FUN_1051cf770;
  puStack_728 = &UNK_11086ec58;
  _objc_copyWeak(auStack_720,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_770 = puVar1;
  uStack_768 = 0xc2000000;
  uStack_760 = 0x1051cf7fc;
  puStack_758 = &UNK_11086ee98;
  _objc_copyWeak(auStack_750,auStack_80);
  _objc_copyWeak(auStack_748,auStack_88);
  func_0x00010c125ba0(param_1);
  puStack_798 = puVar1;
  uStack_790 = 0xc2000000;
  pcStack_788 = FUN_1051cf868;
  puStack_780 = &UNK_11086ec58;
  _objc_copyWeak(auStack_778,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_7c0 = puVar1;
  uStack_7b8 = 0xc2000000;
  pcStack_7b0 = FUN_1051cf97c;
  puStack_7a8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_7a0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_7e8 = puVar1;
  uStack_7e0 = 0xc2000000;
  pcStack_7d8 = FUN_1051cf9d8;
  puStack_7d0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_7c8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_810 = puVar1;
  uStack_808 = 0xc2000000;
  pcStack_800 = FUN_1051cfb9c;
  puStack_7f8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_7f0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_838 = puVar1;
  uStack_830 = 0xc2000000;
  uStack_828 = 0x1051cfca0;
  puStack_820 = &UNK_11086ec58;
  _objc_copyWeak(auStack_818,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_860 = puVar1;
  uStack_858 = 0xc2000000;
  uStack_850 = 0x1051cfdb4;
  puStack_848 = &UNK_11086ec58;
  _objc_copyWeak(auStack_840,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_888 = puVar1;
  uStack_880 = 0xc2000000;
  pcStack_878 = FUN_1051cfeb0;
  puStack_870 = &UNK_11086ec58;
  _objc_copyWeak(auStack_868,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_8b0 = puVar1;
  uStack_8a8 = 0xc2000000;
  pcStack_8a0 = FUN_1051cff0c;
  puStack_898 = &UNK_11086ec58;
  _objc_copyWeak(auStack_890,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_8d8 = puVar1;
  uStack_8d0 = 0xc2000000;
  pcStack_8c8 = FUN_1051d0004;
  puStack_8c0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_8b8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_900 = puVar1;
  uStack_8f8 = 0xc2000000;
  uStack_8f0 = 0x1051d00e4;
  puStack_8e8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_8e0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_928 = puVar1;
  uStack_920 = 0xc2000000;
  pcStack_918 = FUN_1051d01c4;
  puStack_910 = &UNK_11086ec58;
  _objc_copyWeak(auStack_908,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_950 = puVar1;
  uStack_948 = 0xc2000000;
  uStack_940 = 0x1051d0220;
  puStack_938 = &UNK_11086ec58;
  _objc_copyWeak(auStack_930,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_978 = puVar1;
  uStack_970 = 0xc2000000;
  pcStack_968 = FUN_1051d027c;
  puStack_960 = &UNK_11086ec58;
  _objc_copyWeak(auStack_958,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_9a0 = puVar1;
  uStack_998 = 0xc2000000;
  pcStack_990 = FUN_1051d0428;
  puStack_988 = &UNK_11086ec58;
  _objc_copyWeak(auStack_980,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_9c8 = puVar1;
  uStack_9c0 = 0xc2000000;
  pcStack_9b8 = FUN_1051d04c0;
  puStack_9b0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_9a8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_9f0 = puVar1;
  uStack_9e8 = 0xc2000000;
  uStack_9e0 = 0x1051d0510;
  puStack_9d8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_9d0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_a18 = puVar1;
  uStack_a10 = 0xc2000000;
  pcStack_a08 = FUN_1051d0560;
  puStack_a00 = &UNK_11086ec58;
  _objc_copyWeak(auStack_9f8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_a40 = puVar1;
  uStack_a38 = 0xc2000000;
  uStack_a30 = 0x1051d0624;
  puStack_a28 = &UNK_11086ec58;
  _objc_copyWeak(auStack_a20,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_a68 = puVar1;
  uStack_a60 = 0xc2000000;
  pcStack_a58 = FUN_1051d0700;
  puStack_a50 = &UNK_11086ec58;
  _objc_copyWeak(auStack_a48,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_a90 = puVar1;
  uStack_a88 = 0xc2000000;
  uStack_a80 = 0x1051d07f0;
  puStack_a78 = &UNK_11086ec58;
  _objc_copyWeak(auStack_a70,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_ab8 = puVar1;
  uStack_ab0 = 0xc2000000;
  pcStack_aa8 = FUN_1051d08ec;
  puStack_aa0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_a98,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_ae0 = puVar1;
  uStack_ad8 = 0xc2000000;
  uStack_ad0 = 0x1051d0ae8;
  puStack_ac8 = &UNK_11086ec58;
  _objc_copyWeak(auStack_ac0,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_b08 = puVar1;
  uStack_b00 = 0xc2000000;
  pcStack_af8 = FUN_1051d0c78;
  puStack_af0 = &UNK_11086ec58;
  _objc_copyWeak(auStack_ae8,auStack_80);
  func_0x00010c125ba0(param_1);
  puStack_b30 = puVar1;
  uStack_b28 = 0xc2000000;
  uStack_b20 = 0x1051d0d14;
  puStack_b18 = &UNK_11086ec58;
  _objc_copyWeak(auStack_b10,auStack_80);
  func_0x00010c125ba0(param_1);
  _objc_copyWeak(auStack_b38,auStack_80);
  func_0x00010c125ba0(param_1);
  _objc_destroyWeak(auStack_b38);
  _objc_destroyWeak(auStack_b10);
  _objc_destroyWeak(auStack_ae8);
  _objc_destroyWeak(auStack_ac0);
  _objc_destroyWeak(auStack_a98);
  _objc_destroyWeak(auStack_a70);
  _objc_destroyWeak(auStack_a48);
  _objc_destroyWeak(auStack_a20);
  _objc_destroyWeak(auStack_9f8);
  _objc_destroyWeak(auStack_9d0);
  _objc_destroyWeak(auStack_9a8);
  _objc_destroyWeak(auStack_980);
  _objc_destroyWeak(auStack_958);
  _objc_destroyWeak(auStack_930);
  _objc_destroyWeak(auStack_908);
  _objc_destroyWeak(auStack_8e0);
  _objc_destroyWeak(auStack_8b8);
  _objc_destroyWeak(auStack_890);
  _objc_destroyWeak(auStack_868);
  _objc_destroyWeak(auStack_840);
  _objc_destroyWeak(auStack_818);
  _objc_destroyWeak(auStack_7f0);
  _objc_destroyWeak(auStack_7c8);
  _objc_destroyWeak(auStack_7a0);
  _objc_destroyWeak(auStack_778);
  _objc_destroyWeak(auStack_748);
  _objc_destroyWeak(auStack_750);
  _objc_destroyWeak(auStack_720);
  _objc_destroyWeak(auStack_6f8);
  _objc_destroyWeak(auStack_6d0);
  _objc_destroyWeak(auStack_6a8);
  _objc_destroyWeak(auStack_680);
  _objc_destroyWeak(auStack_658);
  _objc_destroyWeak(auStack_630);
  _objc_destroyWeak(auStack_608);
  _objc_destroyWeak(auStack_5e0);
  _objc_destroyWeak(auStack_5b8);
  _objc_destroyWeak(auStack_568);
  _objc_destroyWeak(auStack_540);
  _objc_destroyWeak(auStack_518);
  _objc_destroyWeak(auStack_4f0);
  _objc_destroyWeak(auStack_4c8);
  _objc_destroyWeak(auStack_4a0);
  _objc_destroyWeak(auStack_478);
  _objc_destroyWeak(auStack_450);
  _objc_destroyWeak(auStack_428);
  _objc_destroyWeak(auStack_400);
  _objc_destroyWeak(auStack_3d8);
  _objc_destroyWeak(auStack_3b0);
  _objc_destroyWeak(auStack_388);
  _objc_destroyWeak(auStack_360);
  _objc_destroyWeak(auStack_338);
  _objc_destroyWeak(auStack_310);
  _objc_destroyWeak(auStack_2e8);
  _objc_destroyWeak(auStack_2c0);
  _objc_destroyWeak(auStack_298);
  _objc_destroyWeak(auStack_270);
  _objc_destroyWeak(auStack_248);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_1f8);
  _objc_destroyWeak(auStack_1d0);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1051cce50; end: 1051ccf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cce50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b5cc8;
    _objc_alloc(PTR_PTR_1126b5cc8);
    lVar1 = param_1 + _DAT_11271ee0c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c14f0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271ee10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c041900(puVar4,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051ccf10; end: 1051cd0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ccf10(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdef740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdf1fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b5cd0;
    _objc_alloc();
    lVar3 = param_1 + _DAT_11271ee20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c116160();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271ed64;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c119b40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11271ed68;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026220(puVar12,param_2,lVar1,lVar2,lVar4,lVar6,lVar9,lVar11);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1051cd0c4; end: 1051cd10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd0c4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271edb8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cd10c; end: 1051cd21b;  */

void FUN_1051cd10c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdef740(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5cd8;
    _objc_alloc(PTR_PTR_1126b5cd8);
    func_0x00010c0261c0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051cd21c; end: 1051cd2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd21c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b5ce8;
    _objc_alloc(PTR_PTR_1126b5ce8);
    lVar1 = param_1 + _DAT_11271ed70;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271ee5c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_11271ee78;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bfbe800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02eae0(puVar5,param_2,lVar1,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051cd2f8; end: 1051cd72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd2f8(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined8 uVar21;
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
  undefined *puVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar34 = (undefined *)0x0;
  }
  else {
    puVar34 = PTR_PTR_1126b5cf0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271edcc;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271edcc;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf620a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11271edcc;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c258580();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_11271edd0;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c258d20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11271edd4;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_11271edd8;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c15afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_11271edd4;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_11271eddc;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + _DAT_11271eed4);
    lVar35 = (long)_DAT_11271edec;
    _objc_retain();
    lVar35 = param_1 + lVar35;
    _objc_loadWeakRetained();
    lVar22 = lVar35;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_11271ee40;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c06a980();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_1 + _DAT_11271eec4);
    lVar36 = (long)_DAT_11271eec8;
    _objc_retain(uVar37);
    lVar36 = param_1 + lVar36;
    _objc_loadWeakRetained();
    lVar25 = param_1 + _DAT_11271edf0;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1 + _DAT_11271ee6c;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010c122f20();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_1 + _DAT_11271ee64;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar30;
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1 + _DAT_11271ee50;
    _objc_loadWeakRetained();
    lVar33 = lVar32;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e6c0(puVar34,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,
                        lVar20,uVar21,lVar22,lVar24,uVar37,lVar36,lVar26,lVar28,lVar31,lVar33);
    _objc_release(uVar37);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar36);
    _objc_release(uVar21);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar35);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
  return;
}



/* Entry: 1051cd730; end: 1051cd78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd730(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271edbc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cd78c; end: 1051cd863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd78c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b5d08;
    _objc_alloc(PTR_PTR_1126b5d08);
    lVar1 = param_1 + _DAT_11271ed80;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021d00(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051cd864; end: 1051cd95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd864(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b5d10;
    _objc_alloc(PTR_PTR_1126b5d10);
    lVar1 = (long)_DAT_11271ed90;
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271ed94);
    _objc_retain(uVar6);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271ef68;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c016960(puVar5,param_2,uVar6,lVar1,lVar3,lVar4);
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051cd960; end: 1051cdb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cd960(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar14;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126b5d18;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271ee48;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0ca880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271ed84;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf50160();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271ed88;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c26c760();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271ed8c;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0dc280();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044460(puVar14,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar13);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1051cdb3c; end: 1051cdbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cdb3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b5d20;
    _objc_alloc(PTR_PTR_1126b5d20);
    lVar1 = param_1 + _DAT_11271ed6c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c11a360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03bc00(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051cdbd4; end: 1051cddeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cdbd4(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126b5d28;
    _objc_alloc();
    uVar16 = *(undefined8 *)(param_1 + _DAT_11271eeb0);
    lVar15 = (long)_DAT_11271edf8;
    _objc_retain(uVar16);
    lVar15 = param_1 + lVar15;
    _objc_loadWeakRetained();
    lVar1 = lVar15;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11271ed74;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271ed74;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11271ee4c;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c131960();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11271ee50;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04b500(puVar14,param_2,uVar16,lVar1,lVar3,lVar5,lVar8,lVar11,lVar13);
    _objc_release(uVar16);
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
    _objc_release(lVar1);
    _objc_release(lVar15);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1051cddec; end: 1051cde5b;  */

void FUN_1051cddec(void)

{
  _objc_opt_new(PTR_PTR_1126b5d30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cde5c; end: 1051cdefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cde5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5d50;
    _objc_alloc(PTR_PTR_1126b5d50);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271eda4);
    lVar3 = (long)_DAT_11271ef10;
    _objc_retain(uVar2);
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c054780(puVar1,param_2,uVar2,lVar3);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cdefc; end: 1051cdf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cdefc(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5d58;
    _objc_alloc(PTR_PTR_1126b5d58);
    func_0x00010c054720();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cdf58; end: 1051ce09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cdf58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b5d60;
    _objc_alloc(PTR_PTR_1126b5d60);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271ed98);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271eec0);
    lVar8 = (long)_DAT_11271eecc;
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar1 = param_1 + _DAT_11271eed0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271ee80;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdf0480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054740(puVar6,param_2,uVar5,uVar7,lVar8,lVar1,lVar3,lVar4);
    _objc_release(uVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(uVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051ce09c; end: 1051ce0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce09c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5d68;
    _objc_alloc(PTR_PTR_1126b5d68);
    func_0x00010c054720();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051ce0f8; end: 1051ce197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce0f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5d70;
    _objc_alloc(PTR_PTR_1126b5d70);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271eda0);
    lVar3 = (long)_DAT_11271ef14;
    _objc_retain(uVar2);
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c054760(puVar1,param_2,uVar2,lVar3);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051ce198; end: 1051ce1cf;  */

void FUN_1051ce198(void)

{
  _objc_opt_new(PTR_PTR_1126b5d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ce1d0; end: 1051ce37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce1d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b5d88;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271edc8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271edc0;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + _DAT_11271ee14;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    lVar11 = (long)_DAT_11271eebc;
    _objc_retain(uVar10);
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained();
    func_0x00010c05e700(puVar12,param_2,lVar2,lVar4,lVar6,lVar7,lVar9,uVar10,lVar11);
    _objc_release(uVar10);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1051ce380; end: 1051ce3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce380(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271edc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ce3c8; end: 1051ce407;  */

void FUN_1051ce3c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051ce408; end: 1051ce507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce408(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b5d90;
    _objc_alloc(PTR_PTR_1126b5d90);
    lVar1 = param_1 + _DAT_11271ede8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271ee18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_11271ee1c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb180(puVar6,param_2,lVar1,lVar2,lVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051ce508; end: 1051ce52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce508(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271ede8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ce52c; end: 1051ce5c7;  */

void FUN_1051ce52c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051ce5c8; end: 1051ce677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce5c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b5da0;
    _objc_alloc(PTR_PTR_1126b5da0);
    lVar1 = param_1 + _DAT_11271ef48;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271edd4;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c011760(puVar3,param_2,lVar1,lVar2,*(undefined8 *)(param_1 + _DAT_11271edac));
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051ce678; end: 1051ce827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce678(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b5da8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271edc8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271edc0;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + _DAT_11271ee14;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    lVar11 = (long)_DAT_11271eebc;
    _objc_retain(uVar10);
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained();
    func_0x00010c05e700(puVar12,param_2,lVar2,lVar4,lVar6,lVar7,lVar9,uVar10,lVar11);
    _objc_release(uVar10);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1051ce828; end: 1051ce8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce828(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5db0;
    _objc_alloc(PTR_PTR_1126b5db0);
    func_0x00010bff57a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051ce8e0; end: 1051cea2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ce8e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b5dc0;
    _objc_alloc(PTR_PTR_1126b5dc0);
    lVar1 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271eea4);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11271eea8);
    lVar9 = (long)_DAT_11271edf8;
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar9);
    lVar3 = lVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271ee14;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049780(puVar7,param_2,lVar2,uVar6,uVar8,lVar3,lVar5);
    _objc_release(uVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1051cea30; end: 1051ceb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cea30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b5dc8;
    _objc_alloc(PTR_PTR_1126b5dc8);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271eea8);
    lVar6 = (long)_DAT_11271edf8;
    _objc_retain(uVar5);
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar1 = lVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11271ee14;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9ea0(puVar4,param_2,uVar5,lVar1,lVar3);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051ceb2c; end: 1051cec7f;  */

void FUN_1051ceb2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051cec80; end: 1051ced7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cec80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b5de8;
    _objc_alloc(PTR_PTR_1126b5de8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271eeac);
    lVar4 = (long)_DAT_11271edb8;
    _objc_retain(uVar3);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    lVar6 = (long)_DAT_11271eebc;
    _objc_retain(uVar5);
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c037b40(puVar2,param_2,uVar3,lVar1,uVar5,lVar6);
    _objc_release(uVar5);
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051ced80; end: 1051cee57;  */

void FUN_1051ced80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b5d80;
  _objc_opt_new(PTR_PTR_1126b5d80);
  puVar2 = PTR_PTR_1126b5df0;
  _objc_alloc(PTR_PTR_1126b5df0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_1051cd730(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_1051cd730(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0492e0(puVar2,param_2,uVar4,uVar6,puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051cee58; end: 1051cf0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cee58(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar16;
  undefined8 uVar17;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271ee64;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07ea40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      puVar16 = PTR_PTR_1126b5df8;
      _objc_alloc();
      lVar1 = param_1 + _DAT_11271edb8;
      _objc_loadWeakRetained();
      lVar4 = lVar1;
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11271edbc;
      _objc_loadWeakRetained();
      lVar5 = lVar2;
      func_0x00010c244d60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + _DAT_11271edc8;
      _objc_loadWeakRetained();
      lVar6 = lVar3;
      func_0x00010bfcf8c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + _DAT_11271edc0;
      _objc_loadWeakRetained();
      lVar8 = param_1 + _DAT_11271ed58;
      _objc_loadWeakRetained();
      lVar9 = lVar8;
      func_0x00010bf36240();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1 + _DAT_11271edd8;
      _objc_loadWeakRetained(lVar10);
      lVar11 = param_1 + _DAT_11271ed74;
      _objc_loadWeakRetained();
      lVar12 = param_1 + _DAT_11271ef7c;
      _objc_loadWeakRetained();
      lVar13 = param_1 + _DAT_11271ef88;
      _objc_loadWeakRetained();
      lVar14 = param_1 + _DAT_11271edcc;
      _objc_loadWeakRetained();
      uVar17 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
      lVar15 = (long)_DAT_11271eebc;
      _objc_retain(uVar17);
      lVar15 = param_1 + lVar15;
      _objc_loadWeakRetained();
      func_0x00010c05e6e0(puVar16,param_2,lVar4,lVar5,lVar6,lVar7,lVar9,lVar10,lVar11,lVar12,lVar13,
                          lVar14,uVar17,lVar15);
      _objc_release(uVar17);
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
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar1);
      goto LAB_1051cf0a0;
    }
  }
  puVar16 = (undefined *)0x0;
LAB_1051cf0a0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1051cf0cc; end: 1051cf0e7;  */

void FUN_1051cf0cc(void)

{
  _objc_opt_new(PTR_PTR_1126b5e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cf0e8; end: 1051cf143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf0e8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5e08;
    _objc_alloc(PTR_PTR_1126b5e08);
    func_0x00010c048180();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cf144; end: 1051cf19f;  */

void FUN_1051cf144(void)

{
  _objc_opt_new(PTR_PTR_1126b5e10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cf1a0; end: 1051cf2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf1a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b5e20;
    _objc_alloc(PTR_PTR_1126b5e20);
    lVar1 = param_1 + _DAT_11271edc4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271edfc;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff06c0(puVar9,param_2,lVar3,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1051cf2ec; end: 1051cf36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf2ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11271eef4;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126b5e28;
    _objc_alloc(PTR_PTR_1126b5e28);
    func_0x00010c00ebe0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051cf370; end: 1051cf447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf370(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b5e30;
    _objc_alloc(PTR_PTR_1126b5e30);
    lVar1 = (long)_DAT_11271eebc;
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    _objc_retain(uVar5);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271ee00;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd9c0(puVar4,param_2,uVar5,lVar1,lVar3);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051cf448; end: 1051cf55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf448(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b5e38;
    _objc_alloc(PTR_PTR_1126b5e38);
    lVar1 = (long)_DAT_11271eebc;
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    _objc_retain(uVar7);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271ee3c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf81640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd960(puVar6,param_2,uVar7,lVar1,lVar3,lVar5);
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051cf55c; end: 1051cf6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf55c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b5e40;
    _objc_alloc(PTR_PTR_1126b5e40);
    lVar1 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049cc0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051cf6ec; end: 1051cf737;  */

void FUN_1051cf6ec(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5e50;
    _objc_alloc_init(PTR_PTR_1126b5e50);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cf738; end: 1051cf76f;  */

void FUN_1051cf738(void)

{
  _objc_opt_new(PTR_PTR_1126b5e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051cf770; end: 1051cf867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5e68;
    _objc_alloc(PTR_PTR_1126b5e68);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271ee54);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271ee58);
    _objc_retain(uVar2);
    func_0x00010c05a640(puVar1,param_2,uVar2,uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cf868; end: 1051cf97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf868(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b5e70;
    _objc_alloc(PTR_PTR_1126b5e70);
    lVar1 = param_1 + _DAT_11271ee04;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271ee08;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11271eef8;
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271eefc);
    _objc_retain(uVar7);
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c04f120(puVar6,param_2,lVar2,lVar4,uVar7,lVar5);
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051cf97c; end: 1051cf9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf97c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5e78;
    _objc_alloc(PTR_PTR_1126b5e78);
    func_0x00010c02d040();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cf9d8; end: 1051cfb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cf9d8(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar13;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126b5e80;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271edfc;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271ed80;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c08d300();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271edb4;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271ee50;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11271ef50;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c24c7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_11271ed74;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030080(puVar13,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1051cfb9c; end: 1051cfeaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cfb9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5d80;
    _objc_alloc(PTR_PTR_1126b5d80);
    func_0x00010bffdaa0();
    puVar5 = PTR_PTR_1126b5e88;
    _objc_alloc(PTR_PTR_1126b5e88);
    lVar2 = param_1 + _DAT_11271ee04;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271eef8;
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271eefc);
    _objc_retain(uVar6);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c037720(puVar5,param_2,lVar3,uVar6,lVar4,puVar1);
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051cfeb0; end: 1051cff0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cfeb0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5ea0;
    _objc_alloc(PTR_PTR_1126b5ea0);
    func_0x00010c0488c0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051cff0c; end: 1051d0003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051cff0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b5ea8;
    _objc_alloc(PTR_PTR_1126b5ea8);
    lVar1 = param_1 + _DAT_11271ee70;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0c9100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271edfc;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c041580(puVar6,param_2,lVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051d0004; end: 1051d01c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d0004(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b5eb0;
    _objc_alloc(PTR_PTR_1126b5eb0);
    lVar1 = param_1;
    func_0x00010bf4cfe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf81780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271ef64;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0039c0(puVar5,param_2,lVar1,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051d01c4; end: 1051d027b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d01c4(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5ec0;
    _objc_alloc(PTR_PTR_1126b5ec0);
    func_0x00010c041f80();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051d027c; end: 1051d0427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d027c(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b5ed0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271ef24;
    _objc_loadWeakRetained();
    lVar2 = param_1 + _DAT_11271edbc;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11271ee7c;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11271ed80;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c08d300();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11271ee50;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11271ee14;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d640(puVar12,param_2,lVar1,lVar3,lVar5,lVar7,lVar9,lVar11);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1051d0428; end: 1051d04bf;  */

void FUN_1051d0428(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b5ed8;
    _objc_alloc(PTR_PTR_1126b5ed8);
    lVar1 = param_1;
    func_0x00010c24a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5d440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0044a0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051d04c0; end: 1051d055f;  */

void FUN_1051d04c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdef6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051d0560; end: 1051d06ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d0560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b5ee0;
    _objc_alloc(PTR_PTR_1126b5ee0);
    lVar1 = param_1;
    func_0x00010bdf4e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = (long)_DAT_11271ef34;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271ef30);
    _objc_retain(uVar4);
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c03ce80(puVar3,param_2,lVar1,uVar4,lVar2);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051d0700; end: 1051d08eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d0700(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_11271ee50;
    _objc_loadWeakRetained();
    lVar1 = lVar6;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf926c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if ((int)lVar5 != 0) {
      lVar6 = param_1;
      func_0x00010bdf17a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051d07cc;
    }
  }
  lVar6 = 0;
LAB_1051d07cc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1051d08ec; end: 1051d0c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d08ec(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar15;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126b5ef8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271ef3c;
    _objc_loadWeakRetained();
    lVar2 = param_1 + _DAT_11271edb8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271edc0;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11271edd4;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11271edd8;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c15afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11271ee7c;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c8c0(puVar15,param_2,lVar1,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1051d0c78; end: 1051d0daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d0c78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b5f08;
    _objc_alloc(PTR_PTR_1126b5f08);
    lVar1 = (long)_DAT_11271ef44;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271ef40);
    _objc_retain(uVar3);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c042ac0(puVar2,param_2,uVar3,lVar1);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051d0db0; end: 1051d0fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d0db0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126b5f18;
    _objc_alloc(PTR_PTR_1126b5f18);
    uVar16 = *(undefined8 *)(param_1 + _DAT_11271ef6c);
    lVar12 = (long)_DAT_11271ef70;
    _objc_retain(uVar16);
    lVar12 = param_1 + lVar12;
    _objc_loadWeakRetained();
    lVar1 = param_1 + _DAT_11271ef74;
    _objc_loadWeakRetained();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271ef80);
    lVar13 = (long)_DAT_11271ef84;
    _objc_retain();
    lVar13 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar3 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11271ef78;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c22b420();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11271eebc;
    uVar15 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    _objc_retain(uVar15);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar8 = param_1 + _DAT_11271ee60;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11271ee64;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02aac0(puVar14,param_2,uVar16,lVar12,lVar1,uVar2,lVar13,lVar4,lVar6,uVar15,lVar7,
                        lVar9,lVar11);
    _objc_release(uVar15);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar13);
    _objc_release(uVar16);
    _objc_release(lVar1);
    _objc_release(lVar12);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1051d0fd4; end: 1051d110b; -[SCContextActionsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d0fd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  plVar3 = &lStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_11271ed44;
  lVar12 = *(long *)(param_1 + lVar13);
  if (lVar12 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(lVar12);
    lVar1 = lVar12;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar14 = *plStack_110;
      do {
        lVar15 = 0;
        do {
          if (*plStack_110 != lVar14) {
            _objc_enumerationMutation(lVar12);
          }
          func_0x00010bf6e180(*(undefined8 *)(lStack_118 + lVar15 * 8));
          lVar15 = lVar15 + 1;
        } while (lVar1 != lVar15);
        lVar1 = lVar12;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar12);
    uVar2 = *(undefined8 *)(param_1 + lVar13);
    *(undefined8 *)(param_1 + lVar13) = 0;
    _objc_release(uVar2);
  }
  puStack_128 = PTR_PTR_1126e6cf8;
  lStack_130 = param_1;
  _objc_msgSendSuper2(&lStack_130,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_alloc();
    puVar4 = (undefined1 *)plVar3;
    FUN_1051cd0c4();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)plVar3;
    FUN_1051ce508(plVar3);
    _objc_retainAutoreleasedReturnValue();
    if (plVar3 == (long *)0x0) {
      _objc_retain(0);
      _objc_retain(0);
      uVar2 = 0;
      uStack_1b0 = 0;
      puStack_1a8 = (undefined1 *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      puStack_1b8 = (undefined1 *)0x0;
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puStack_1a0 = (undefined1 *)((long)plVar3 + (long)_DAT_11271ee18);
      _objc_loadWeakRetained();
      puStack_1a8 = (undefined1 *)((long)plVar3 + (long)_DAT_11271ee1c);
      _objc_loadWeakRetained();
      uStack_1b0 = *(undefined8 *)((long)plVar3 + (long)_DAT_11271eeb8);
      _objc_retain();
      puStack_1b8 = (undefined1 *)((long)plVar3 + (long)_DAT_11271eebc);
      _objc_loadWeakRetained();
      uVar2 = *(undefined8 *)((long)plVar3 + (long)_DAT_11271eec0);
      _objc_retain(uVar2);
      puVar11 = (undefined1 *)((long)plVar3 + (long)_DAT_11271eecc);
      _objc_loadWeakRetained();
    }
    puVar7 = (undefined1 *)plVar3;
    FUN_1051cd730();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined1 *)plVar3;
    FUN_1051ce380();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001051ce3a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d0e0();
    _objc_release(uVar2);
    _objc_release(plVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar11);
    _objc_release(uStack_1b0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051d110c; end: 1051d133b; -[SCContextActionsEntryPoint _createCameraV2ActionPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d110c(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126b5f20;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1051cd0c4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1051ce508(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uVar10 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    lVar9 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_11271ee18;
    _objc_loadWeakRetained();
    uStack_78 = param_1 + _DAT_11271ee1c;
    _objc_loadWeakRetained();
    uStack_80 = *(undefined8 *)(param_1 + _DAT_11271eeb8);
    _objc_retain();
    uStack_88 = param_1 + _DAT_11271eebc;
    _objc_loadWeakRetained();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271eec0);
    _objc_retain(uVar10);
    lVar9 = param_1 + _DAT_11271eecc;
    _objc_loadWeakRetained();
  }
  lVar5 = param_1;
  FUN_1051cd730();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_1051ce380();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001051ce3a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d0e0(puVar1,param_2,lVar3,lVar4,uStack_70,uStack_78,uStack_80,uStack_88,uVar10,
                      lVar9,lVar6,lVar8,param_1);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051d133c; end: 1051d1743; -[SCContextActionsEntryPoint _createLinkActionPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d133c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
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
  undefined8 uVar21;
  long lStack_108;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051d1744;
  puStack_90 = &UNK_11086eec8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdecc60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5f38;
  _objc_alloc();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11271ede4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar16;
  func_0x00010c278c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_1051ce508();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf28fa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_108 = 0;
    uVar21 = 0;
    lVar17 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(param_1 + _DAT_11271eee0);
    _objc_retain(uVar21);
    lStack_108 = param_1 + _DAT_11271eedc;
    _objc_loadWeakRetained();
    lVar17 = param_1 + _DAT_11271ee24;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar17;
  func_0x00010c096780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11271ee38;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar18;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11271ee2c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar19;
  func_0x00010bf34a60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11271ee80;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar20;
  func_0x00010bf4e700();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_1051d187c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0fe560();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051d187c();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c25df40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c840();
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lStack_108);
  _objc_release(uVar21);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051d1744; end: 1051d187b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d1744(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b5f28;
    _objc_alloc(PTR_PTR_1126b5f28);
    lVar1 = (long)_DAT_11271ee94;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271ee90);
    _objc_retain(uVar3);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c025fa0(puVar2,param_2,uVar3,lVar1);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051d187c; end: 1051d189f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d187c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271ee28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051d18a0; end: 1051d1c5f; -[SCContextActionsEntryPoint _createDeepLinkHandlerCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d18a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_d8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126b5f40;
  _objc_alloc();
  if (param_1 == 0) {
    uStack_70 = 0;
    lVar12 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_11271ed70;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_11271edb4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271ede0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_d8 = 0;
    uVar4 = 0;
  }
  else {
    uStack_88 = *(undefined8 *)(param_1 + _DAT_11271eea8);
    _objc_retain();
    uStack_90 = *(undefined8 *)(param_1 + _DAT_11271eeb4);
    _objc_retain();
    uStack_d8 = *(undefined8 *)(param_1 + _DAT_11271eda4);
    _objc_retain();
    uStack_98 = param_1 + _DAT_11271ef10;
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271eed8);
  }
  _objc_retain();
  lVar5 = param_1;
  FUN_1051ce380();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11271edf4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar14;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11271edf8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11271ee88;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar16;
  func_0x00010c28f660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar18 = 0;
    uVar10 = 0;
    uVar20 = 0;
    lVar17 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271ef04);
    _objc_retain();
    uVar20 = *(undefined8 *)(param_1 + _DAT_11271ef08);
    _objc_retain(uVar20);
    lVar18 = param_1 + _DAT_11271ef0c;
    _objc_loadWeakRetained();
    lVar17 = param_1 + _DAT_11271ee14;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar17;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11271ef60;
    _objc_loadWeakRetained();
  }
  FUN_1051cd730();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ea80(puVar1,param_2,uStack_70,lVar2,lVar3,uStack_88,uStack_90,uStack_d8,uStack_98,
                      uVar4,lVar6,lVar7,lVar8,lVar9,uVar10,uVar20,lVar18,lVar11,lVar19,param_1);
  _objc_release(uVar20);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar17);
  _objc_release(lVar18);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uStack_98);
  _objc_release(uStack_d8);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051d1c60; end: 1051d1da7; -[SCContextActionsEntryPoint _createPromptLensActionPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d1c60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010bdef740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5f48;
  _objc_alloc(PTR_PTR_1126b5f48);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11271ed54;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010bf4c240(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1051cd0c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001051cd0e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0261e0(puVar2,param_2,lVar1,lVar3,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051d1da8; end: 1051d1e3f; -[SCContextActionsEntryPoint _createPlayGameLensActionPerformer] */

void FUN_1051d1da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bdef740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5f50;
  _objc_alloc(PTR_PTR_1126b5f50);
  func_0x0001051cd0e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026200(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051d1e40; end: 1051d1e8b; -[SCContextActionsEntryPoint _createLensTapppableLinkActionPerformer] */

void FUN_1051d1e40(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bdecc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5f58;
  _objc_alloc(PTR_PTR_1126b5f58);
  func_0x00010c009a60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051d1e8c; end: 1051d20af; -[SCContextActionsEntryPoint _createTopLevelReactionActionPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d1e8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = param_1;
  func_0x0001051ce3a4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
  puVar3 = PTR_PTR_1126b5f60;
  _objc_alloc(PTR_PTR_1126b5f60);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11271ee30;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010c25ae20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11271ee34;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar10;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11271ed8c;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c0dc280(lVar11);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11271ee84;
    _objc_loadWeakRetained(lVar12);
  }
  lVar6 = lVar12;
  func_0x00010bfe88c0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_11271ef5c;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010c120b40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dfe0(puVar3,param_2,lVar1,lVar4,lVar5,lVar6,lVar2,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051d20b0; end: 1051d2147; -[SCContextActionsEntryPoint _createMusicUserDataWrapper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d20b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11271ee8c;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c2bd780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010bf56240(lVar2,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


