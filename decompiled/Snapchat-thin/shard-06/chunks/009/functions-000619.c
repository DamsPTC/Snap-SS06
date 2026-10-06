/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104feb1cc; end: 104feb24b;  */

void FUN_104feb1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b38b0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c017860();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104feb24c; end: 104feb287; -[SCSnapEditorLensFetcher .cxx_destruct] */

void FUN_104feb24c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104feb288; end: 104feb3d3; -[SCSnapEditorPreviewFilterDataProviderDelegate initWithFilterArranger:carouselFeature:swipeFilterView:filterDataProvider:previewABProvider:snapDocEditor:] */

undefined1 *
FUN_104feb288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e58b8;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
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



/* Entry: 104feb3d4; end: 104feb3db; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderCanUseUCO] */

undefined8 FUN_104feb3d4(void)

{
  return 1;
}



/* Entry: 104feb3dc; end: 104feb42b; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidCompleteUpdates:isGeoFilterListUpdatedDuringLoading:] */

void FUN_104feb3dc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18160();
  _objc_release(uVar1);
  func_0x00010c09b0c0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010be9c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollToSelectedFilter_112584a28);
  return;
}



/* Entry: 104feb42c; end: 104feb527; -[SCSnapEditorPreviewFilterDataProviderDelegate _scrollToSelectedFilter] */

void FUN_104feb42c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c159780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar1 = lVar2;
    func_0x00010c082fa0();
    _objc_release(lVar2);
    if ((int)lVar1 == 0) {
      ppuVar3 = (undefined **)0x0;
      goto LAB_104feb514;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f274f8;
    _objc_retain(&PTR____CFConstantStringClassReference_110f274f8);
  }
  else {
    lVar1 = lVar2;
    func_0x00010c159780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    ppuVar3 = (undefined **)PTR_PTR_1126b3830;
    func_0x00010bfae1a0(PTR_PTR_1126b3830,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (ppuVar3 == (undefined **)0x0) goto LAB_104feb514;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf5f000(lVar2,param_2,ppuVar3);
  if (lVar2 != 0x7fffffffffffffff) {
    func_0x00010c152520(*(undefined8 *)(param_1 + 0x18),param_2,lVar2);
  }
LAB_104feb514:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 104feb528; end: 104feb52b; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidCompleteUpdates:succeeded:] */

void FUN_104feb528(void)

{
  return;
}



/* Entry: 104feb52c; end: 104feb52f; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidReceiveNewMixerOrderingFromCache:] */

void FUN_104feb52c(void)

{
  return;
}



/* Entry: 104feb530; end: 104feb533; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidUpdateAltitude:] */

void FUN_104feb530(void)

{
  return;
}



/* Entry: 104feb534; end: 104feb8d7; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidUpdateGeoFilterImages:] */

void FUN_104feb534(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **unaff_x20;
  undefined **ppuVar10;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  lStack_b8 = param_1;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  ppuStack_100 = param_3;
  func_0x00010bfc1180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110f273f8;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f27758;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f27778;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f27798;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f277b8;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f277f8;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110e0ad18;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f27838;
    do {
      ppuVar4 = ppuVar2;
      func_0x00010c0dfd40(ppuVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = ppuVar4;
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = ppuVar3;
      ppuVar8 = unaff_x20;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x20);
      ppuVar6 = (undefined **)PTR_PTR_1126b38b8;
      if ((ppuVar4 != (undefined **)0x0) && (param_3 != (undefined **)0x0)) {
        ppuVar5 = ppuVar4;
        func_0x00010bfadea0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuStack_c0;
        func_0x00010bfe5de0(ppuVar6,param_2,ppuStack_c0,ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        ppuVar7 = param_3;
        func_0x00010bfae360();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be8a0;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar5 = ppuVar7;
        }
        _objc_retain(ppuVar5);
        _objc_release(ppuVar7);
        ppuStack_b0 = ppuStack_c8;
        ppuStack_a8 = ppuStack_d0;
        ppuStack_90 = ppuVar8;
        ppuStack_a0 = ppuStack_d8;
        ppuStack_98 = ppuStack_e0;
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_88 = ppuVar4;
        ppuStack_80 = param_3;
        ppuStack_78 = ppuVar5;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,
                            &ppuStack_b0,4);
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = ppuVar8;
        func_0x00010c0d3c80();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar4;
        func_0x00010c0c4fc0();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (ppuVar8 != (undefined **)0x1) {
          ppuVar8 = ppuVar4;
          func_0x00010c0c4fc0(ppuVar4);
          func_0x00010c0df780(puVar9,param_2,ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x20,param_2,puVar9,ppuStack_f8);
          _objc_release(puVar9);
        }
        ppuVar8 = ppuVar4;
        func_0x00010bf0f1c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar8 = ppuVar4;
          func_0x00010bf0f1c0(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x20,param_2,ppuVar8,ppuStack_f0);
          _objc_release(ppuVar8);
        }
        ppuVar8 = ppuVar4;
        func_0x00010c081f00();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar1 = 7;
        if ((int)ppuVar8 == 0) {
          uVar1 = 0;
        }
        ppuVar8 = param_3;
        func_0x00010c073cc0(param_3);
        func_0x00010c0df6e0(puVar9,param_2,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(unaff_x20,param_2,puVar9,ppuStack_e8);
        _objc_release(puVar9);
        ppuVar8 = ppuVar6;
        func_0x00010befa420(*(undefined8 *)(lStack_b8 + 8),param_2,ppuVar6,unaff_x20,uVar1);
        _objc_release(unaff_x20);
        _objc_release(ppuVar5);
        _objc_release(ppuVar6);
      }
      _objc_release(param_3);
      _objc_release(ppuVar4);
      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      ppuVar6 = ppuVar2;
      func_0x00010bf529e0();
    } while (ppuVar10 < ppuVar6);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar10 = ppuStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_104feb8d8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = ppuVar3;
  ppuStack_128 = ppuVar2;
  ppuStack_120 = unaff_x20;
  ppuStack_118 = param_3;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_148 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_140 = ppuVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_140,&ppuStack_148
                        ,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420(ppuVar10[1],param_2,&PTR____CFConstantStringClassReference_110f274f8,puVar9,
                        1);
    _objc_release(puVar9);
  }
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104feb8d8; end: 104feb9a7; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidUpdateVenueFilter:] */

void FUN_104feb8d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&ppuStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110f274f8,puVar1,1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104feb9a8; end: 104feb9ab; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidUpdateVenues:] */

void FUN_104feb9a8(void)

{
  return;
}



/* Entry: 104feb9ac; end: 104feb9af; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidUpdateWeather:] */

void FUN_104feb9ac(void)

{
  return;
}



/* Entry: 104feb9b0; end: 104feba63; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderInsertBroadLocationPromptFilterInVenueFilterPosition:] */

void FUN_104feb9b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f27818;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110f27478,puVar1,4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_104feba64;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f27818;
  puStack_70 = PTR____kCFBooleanTrue_11034ab68;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(*(undefined8 *)(puVar2 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110f27458,puVar3,4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar3 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104feba64; end: 104febb17; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderInsertPromptFilterInVenueFilterPosition:] */

void FUN_104feba64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f27818;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110f27458,puVar1,4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104febb18; end: 104febb4b; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderWillStartUpdates] */

void FUN_104febb18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104febb4c; end: 104febb53; -[SCSnapEditorPreviewFilterDataProviderDelegate shouldDisableMotionFilters] */

undefined8 FUN_104febb4c(void)

{
  return 0;
}



/* Entry: 104febb54; end: 104febb5b; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderCanUseReverseMotionFilter:] */

undefined8 FUN_104febb54(void)

{
  return 0;
}



/* Entry: 104febb5c; end: 104febb63; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderCanUseColorLenses] */

undefined8 FUN_104febb5c(void)

{
  return 1;
}



/* Entry: 104febb64; end: 104febbb3; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderShouldUseVenueFilterInsteadOfLens] */

uint FUN_104febb64(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010bf30e80();
  if (iVar1 != 2) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010c09dea0();
    if (uVar2 < 2) {
      return 0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf923a0(uVar3);
  return (uint)uVar3 ^ 1;
}



/* Entry: 104febbb4; end: 104febbbb; -[SCSnapEditorPreviewFilterDataProviderDelegate cacheCurrentFilterSelection] */

void FUN_104febbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c257670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_storeCurrentFilterInfo_1126737c0);
  return;
}



/* Entry: 104febbbc; end: 104febbc3; -[SCSnapEditorPreviewFilterDataProviderDelegate restoreFilterSelection] */

void FUN_104febbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_restoreFilterInfo_11262cb10);
  return;
}



/* Entry: 104febbc4; end: 104febbf7; -[SCSnapEditorPreviewFilterDataProviderDelegate stopPreviewCarouselUpdates] */

void FUN_104febbc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104febbf8; end: 104febbfb; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidRemoveFilter:filterType:] */

void FUN_104febbf8(void)

{
  return;
}



/* Entry: 104febbfc; end: 104febbff; -[SCSnapEditorPreviewFilterDataProviderDelegate previewFilterDataProviderDidUpdateUnlockable:unlockable:] */

void FUN_104febbfc(void)

{
  return;
}



/* Entry: 104febc00; end: 104febcd7; -[SCSnapEditorPreviewFilterDataProviderDelegate handleLocationAuthorization] */

void FUN_104febc00(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x00010bf4b780();
  if ((uVar4 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf4b780();
    if (iVar1 == 0) goto LAB_104febca8;
  }
  func_0x00010c12c6a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c12c6a0(*(undefined8 *)(param_1 + 8));
LAB_104febca8:
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c28bd20();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c152530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_scrollToInitSectionAndReloadToIn_112632368,0);
  return;
}



/* Entry: 104febcd8; end: 104febd33; -[SCSnapEditorPreviewFilterDataProviderDelegate .cxx_destruct] */

void FUN_104febcd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104febd34; end: 104febd9f; -[SCSnapEditorSmartSwipeFilterViewDelegate initWithPromptViewDelegate:] */

undefined1 * FUN_104febd34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e58c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104febda0; end: 104febda3; -[SCSnapEditorSmartSwipeFilterViewDelegate geoFilterViewNeedsUpdate:] */

void FUN_104febda0(void)

{
  return;
}



/* Entry: 104febda4; end: 104febda7; -[SCSnapEditorSmartSwipeFilterViewDelegate smartSwipeFilterViewDidTapSponsoredSlug:filterId:] */

void FUN_104febda4(void)

{
  return;
}



/* Entry: 104febda8; end: 104febdab; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeFilterView:endedSwipeSessionNumber:] */

void FUN_104febda8(void)

{
  return;
}



/* Entry: 104febdac; end: 104febdaf; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeFilterView:longPressDidCancel:] */

void FUN_104febdac(void)

{
  return;
}



/* Entry: 104febdb0; end: 104febdb3; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeFilterViewDidScroll:] */

void FUN_104febdb0(void)

{
  return;
}



/* Entry: 104febdb4; end: 104febdb7; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeFilterViewWillBeginDragging:] */

void FUN_104febdb4(void)

{
  return;
}



/* Entry: 104febdb8; end: 104febdbb; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeFilterViewWillEndDragging:] */

void FUN_104febdb8(void)

{
  return;
}



/* Entry: 104febdbc; end: 104febe6f; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeViewDidEndDecelerating:] */

void FUN_104febdbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf5eb20(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b38c8;
  _objc_opt_class(PTR_PTR_1126b38c8);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) != 0) {
    func_0x00010c118aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104febe70; end: 104febe73; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeViewDidEndExternalSelection:] */

void FUN_104febe70(void)

{
  return;
}



/* Entry: 104febe74; end: 104febe77; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeViewDidRemoveStackedFilterView:] */

void FUN_104febe74(void)

{
  return;
}



/* Entry: 104febe78; end: 104febe7b; -[SCSnapEditorSmartSwipeFilterViewDelegate swipeViewDidStackFilter:] */

void FUN_104febe78(void)

{
  return;
}



/* Entry: 104febe7c; end: 104febe7f; -[SCSnapEditorSmartSwipeFilterViewDelegate venueFilterView:openPlacePickerTrayWithOnVenueTapped:suggestedVenuesFromFilter:venueIDToDistanceStringMap:] */

void FUN_104febe7c(void)

{
  return;
}



/* Entry: 104febe80; end: 104febe83; -[SCSnapEditorSmartSwipeFilterViewDelegate venueFilterViewDidUpdate:] */

void FUN_104febe80(void)

{
  return;
}



/* Entry: 104febe84; end: 104febe9b; -[SCSnapEditorSmartSwipeFilterViewDelegate promptViewDelegate] */

void FUN_104febe84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104febe9c; end: 104febea7; -[SCSnapEditorSmartSwipeFilterViewDelegate setPromptViewDelegate:] */

void FUN_104febe9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104febea8; end: 104febeaf; -[SCSnapEditorSmartSwipeFilterViewDelegate .cxx_destruct] */

void FUN_104febea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104febeb0; end: 104febf47; -[SCAuraAlertDialogPresenter presentMissingBirthdayAlertWithUiContainer:delegate:] */

void FUN_104febeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000105005e04();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000105005e1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7f720(param_1,param_2,uVar1,uVar2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104febf48; end: 104fec1fb; -[SCAuraAlertDialogPresenter presentClearBirthInfoConfirmationAlertWithUiContainer:delegate:] */

void FUN_104febf48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_4);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105005d5c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104fec1fc;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105005d74();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar4;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104fec2dc;
  puStack_c8 = &UNK_1108482a8;
  puVar9 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar9);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000105005d2c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105005d44();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  func_0x00010bf0c980(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  lVar8 = param_3;
  __Unwind_Resume(param_3);
  pcStack_e8 = FUN_104fec1fc;
  puStack_110 = puVar3;
  puStack_108 = puVar2;
  uStack_100 = param_4;
  lStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_118,lVar8 + 0x20);
  func_0x00010bf84b00(puVar9);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar9);
  return;
}



/* Entry: 104fec1fc; end: 104fec2a3;  */

void FUN_104fec1fc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104fec2a4; end: 104fec2db;  */

void FUN_104fec2a4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf85060(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fec2dc; end: 104fec383;  */

void FUN_104fec2dc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104fec384; end: 104fec3bb;  */

void FUN_104fec384(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf85060(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fec3bc; end: 104fec4e7; -[SCAuraAlertDialogPresenter presentFriendMissBirthInfoAlert:fromSource:uiContainer:delegate:] */

void FUN_104fec3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar4 = param_6;
  _objc_retain(param_6);
  if (param_4 == 1) {
    func_0x000105005dbc();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 0) {
    func_0x000105005da4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = 0;
  }
  uVar1 = param_3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x000105005dd4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c14de00(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be7f720(param_1,param_2,uVar4,puVar3,param_5,param_6,param_7,param_8,uVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fec4e8; end: 104fec57f; -[SCAuraAlertDialogPresenter presentBirthdayPartyDisabledAlertWithUiContainer:delegate:] */

void FUN_104fec4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000105005e34();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000105005e4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7f720(param_1,param_2,uVar1,uVar2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fec580; end: 104fec733; -[SCAuraAlertDialogPresenter _presentWithTitle:description:uiContainer:delegate:] */

void FUN_104fec580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar5 = param_3;
  _objc_retain(param_3);
  func_0x000105005c54();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010c18b5e0(puVar2);
  func_0x00010bf0c980(param_5);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_6 + 0x20);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 104fec734; end: 104fec7cf;  */

void FUN_104fec734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104fec7d0; end: 104fec7db;  */

void FUN_104fec7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dialogDidDismiss__1125ba108,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104fec7dc; end: 104fec8a7; -[SCAuraBirthInfoDataManager initWithFeatureSettingsService:myBirthdayProvider:circumstanceEngine:] */

undefined1 *
FUN_104fec7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e58c8;
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



/* Entry: 104fec8a8; end: 104fec8f7; -[SCAuraBirthInfoDataManager isMyBirthdayAvailable] */

bool FUN_104fec8a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 104fec8f8; end: 104fec95b; -[SCAuraBirthInfoDataManager isMyBirthInfoAvailable] */

bool FUN_104fec8f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf10320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 104fec95c; end: 104fec9f7; -[SCAuraBirthInfoDataManager myBirthday] */

void FUN_104fec95c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fec9f8; end: 104feca67; -[SCAuraBirthInfoDataManager myBirthInfoBase64] */

void FUN_104fec9f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf10320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104feca68; end: 104feca6b; -[SCAuraBirthInfoDataManager settingsBirthInfoTitle] */

void FUN_104feca68(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2498;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2498,
                      &PTR____CFConstantStringClassReference_110dc2378,0);
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



/* Entry: 104feca6c; end: 104fecb57; -[SCAuraBirthInfoDataManager decodeSettingsBirthInfo:] */

void FUN_104feca6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fecb58;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104fecb58; end: 104fecbb3;  */

void FUN_104fecb58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010beaa420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104fecbb4; end: 104fecd47; -[SCAuraBirthInfoDataManager _settingsBirthInfo] */

void FUN_104fecbb4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x00010c0d45e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010c0d4560();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bfe4780(param_1);
      func_0x00010c1a9320(uVar1,param_2,uVar2 & 0xffffffff);
      uVar2 = param_1;
      func_0x00010c0ce8c0(param_1);
      func_0x00010c1c8500(uVar1,param_2,uVar2 & 0xffffffff);
      puVar7 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf650e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      _objc_opt_new();
      func_0x00010c189c20();
      func_0x00010c215260(puVar4,param_2,1);
      puVar5 = puVar4;
      func_0x00010c25d400(puVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000105005d14();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar2 = param_1;
      func_0x00010c09f000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104fecd48; end: 104fecd4b; -[SCAuraBirthInfoDataManager settingsBirthInfoFooter] */

void FUN_104fecd48(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2558;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2558,
                      &PTR____CFConstantStringClassReference_110dc2378,0);
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



/* Entry: 104fecd4c; end: 104fece03; -[SCAuraBirthInfoDataManager myBirthInfo] */

void FUN_104fecd4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c0d4580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bff6b20();
    puVar3 = PTR_PTR_1126b38d0;
    _objc_alloc(PTR_PTR_1126b38d0);
    func_0x00010c008360();
    _objc_retain(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104fece04; end: 104fece07; -[SCAuraBirthInfoDataManager setMyBirthInfoBase64:completion:] */

void FUN_104fece04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedbef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMyBirthInfoBase64_complet_112594960);
  return;
}



/* Entry: 104fece08; end: 104fece17; -[SCAuraBirthInfoDataManager removeMyBirthInfoWithCompletion:] */

void FUN_104fece08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedbef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateMyBirthInfoBase64_complet_112594960,
             &PTR____CFConstantStringClassReference_110daafd8,param_3);
  return;
}



/* Entry: 104fece18; end: 104fece4f; -[SCAuraBirthInfoDataManager shouoldShowBirthInfoSetting] */

void FUN_104fece18(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x000108435fdc();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0785f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMyBirthInfoAvailable_1125fbb88);
    return;
  }
  return;
}



/* Entry: 104fece50; end: 104fecfcb; -[SCAuraBirthInfoDataManager _updateMyBirthInfoBase64:completion:] */

void FUN_104fece50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010c0f8560(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 104fecfcc; end: 104fed003;  */

void FUN_104fecfcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16c630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAuraBirthInfoSettingsBase64__112638ba8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104fed004; end: 104fed043; -[SCAuraBirthInfoDataManager isBirthdayPartyEnabled] */

undefined8 FUN_104fed004(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a7c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104fed044; end: 104fed09f; -[SCAuraBirthInfoDataManager shouldPromptBirthInfoPage] */

bool FUN_104fed044(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf868c0();
  func_0x00010bdd4360(param_1);
  _objc_release(lVar1);
  return lVar2 < (int)param_1;
}



/* Entry: 104fed0a0; end: 104fed0f3; -[SCAuraBirthInfoDataManager setDisplayedBirthInfoPage] */

void FUN_104fed0a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdd4360();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf868c0();
  if (lVar3 < (int)lVar1) {
    func_0x00010c1901a0(lVar2,param_2,(long)(int)lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104fed0f4; end: 104fed10b; -[SCAuraBirthInfoDataManager _birthInfoPageVersion] */

void FUN_104fed0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110dc1db8,0,0);
  return;
}



/* Entry: 104fed10c; end: 104fed147; -[SCAuraBirthInfoDataManager .cxx_destruct] */

void FUN_104fed10c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fed148; end: 104fed1fb; -[SCAuraBirthInfoPageBusinessLogic initWithBirthInfoDataManager:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fed148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e58d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112719198;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271919c),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fed1fc; end: 104fed2d3; -[SCAuraBirthInfoPageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fed1fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112719198);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190180();
  uVar2 = uVar1;
  func_0x00010c0d45e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d4580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b38d8;
  _objc_alloc(PTR_PTR_1126b38d8);
  uVar5 = uVar2;
  func_0x00010c2bedc0(uVar2);
  uVar6 = uVar2;
  func_0x00010c0d0e40(uVar2);
  uVar7 = uVar2;
  func_0x00010bf65700(uVar2);
  func_0x00010c02d120(puVar4,param_2,uVar5,uVar6,uVar7,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fed2d4; end: 104fed367; -[SCAuraBirthInfoPageBusinessLogic handleAction:] */

void FUN_104fed2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104fed368;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fed498;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104fed4d4;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd000(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104fed368; end: 104fed497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fed368(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112719198);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca9a0();
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104fed498; end: 104fed50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fed498(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271919c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf85040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fed510; end: 104fed54b; -[SCAuraBirthInfoPageBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fed510(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271919c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719198,0);
  return;
}



/* Entry: 104fed54c; end: 104fed69f; -[SCAuraBirthInfoPageCreator initWithBirthInfoDataManager:sessionRequestManager:snapTokenProvider:valdiRuntimeProvider:unifiedGRPCClientFactory:performer:] */

undefined1 *
FUN_104fed54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e58d8;
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



/* Entry: 104fed6a0; end: 104fed71b; -[SCAuraBirthInfoPageCreator createBirthInfoPageBusinessLogicHarness:] */

void FUN_104fed6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b38e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff77a0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc(PTR_PTR_1126aec60);
  func_0x00010bff9c80();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fed71c; end: 104fed84f; -[SCAuraBirthInfoPageCreator createBirthInfoPageViewController:] */

void FUN_104fed71c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b38e8;
  _objc_alloc(PTR_PTR_1126b38e8);
  uVar3 = param_3;
  func_0x00010c150e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0424a0(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fed850; end: 104fed88f;  */

void FUN_104fed850(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104fed890; end: 104fed983; -[SCAuraBirthInfoPageCreator _createPlaceSearchService] */

void FUN_104fed890(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf56360(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1dd8,puVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104fed984; end: 104fed9e3; -[SCAuraBirthInfoPageCreator .cxx_destruct] */

void FUN_104fed984(long param_1)

{
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



/* Entry: 104fed9e4; end: 104fedc67; -[SCAuraBirthInfoPageViewController initWithScreen:sessionRequestManager:snapTokenProvider:valdiRuntimeProvider:placeSearchService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fed9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e58e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_1127191b8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127191bc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afe50;
    _objc_alloc();
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040b80();
    lVar6 = (long)_DAT_1127191c0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010c1c1bc0(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_opt_class(PTR_PTR_1126b38f0);
    func_0x00010c181960(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR_PTR_1126b38f8;
    _objc_alloc();
    func_0x00010c019620();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127191c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127191c4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b3900;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0455c0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127191c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127191c8) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1580;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127191cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127191cc) = puVar3;
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127191d0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar5);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fedc68; end: 104fedd17; -[SCAuraBirthInfoPageViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fedc68(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127191b8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104fedd18; end: 104fedd5f;  */

void FUN_104fedd18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb0360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fedd60; end: 104fee0bf; -[SCAuraBirthInfoPageViewController _setupSubviews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fedd60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR_PTR_1126b3908;
  _objc_alloc(PTR_PTR_1126b3908);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104fee0c0;
  puStack_98 = &UNK_1108434b0;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_copyWeak(auStack_b8,auStack_88);
  func_0x00010c02eec0(puVar1);
  func_0x00010c1a4c80();
  puVar2 = PTR_PTR_1126b3910;
  _objc_alloc(PTR_PTR_1126b3910);
  puVar3 = PTR_PTR_1126b3918;
  _objc_alloc(PTR_PTR_1126b3918);
  lVar9 = param_3;
  func_0x00010c0d45c0(param_3);
  lVar4 = param_3;
  func_0x00010c0d45a0(param_3);
  lVar5 = param_3;
  func_0x00010c0d4540(param_3);
  func_0x00010c063700((double)lVar9,(double)lVar4,(double)lVar5,puVar3);
  func_0x00010c02d140(puVar2);
  _objc_release(puVar3);
  lVar9 = param_3;
  func_0x00010c0d4580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar4 != 0) {
    lVar9 = param_3;
    func_0x00010c0d4580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca980(puVar2);
    _objc_release(lVar9);
  }
  puVar3 = PTR_PTR_1126b3920;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127191bc);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar9 = (long)_DAT_1127191d4;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar3;
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127191d0);
  uStack_80 = *(undefined8 *)(param_1 + lVar9);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar8);
  _objc_release(puVar3);
  func_0x00010c222380(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be68480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fee0c0; end: 104fee133;  */

void FUN_104fee0c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fee134; end: 104fee13f; -[SCAuraBirthInfoPageViewController defaultProjectNameV2] */

undefined ** FUN_104fee134(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 104fee140; end: 104fee14b; -[SCAuraBirthInfoPageViewController defaultSubProjectName] */

undefined ** FUN_104fee140(void)

{
  return &PTR____CFConstantStringClassReference_110dc1df8;
}



/* Entry: 104fee14c; end: 104fee1c3; -[SCAuraBirthInfoPageViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104fee14c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_1127191d4);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 104fee1c4; end: 104fee1c7; -[SCAuraBirthInfoPageViewController cardToExpandTransition] */

void FUN_104fee1c4(void)

{
  return;
}



/* Entry: 104fee1c8; end: 104fee1d3; -[SCAuraBirthInfoPageViewController cardTransitionWillBeginWithView:] */

void FUN_104fee1c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104fee1d4; end: 104fee1d7; -[SCAuraBirthInfoPageViewController cardTransitionDidUpdateProgress:] */

void FUN_104fee1d4(void)

{
  return;
}



/* Entry: 104fee1d8; end: 104fee22f; -[SCAuraBirthInfoPageViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fee1d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_4 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127191b8);
    puVar1 = PTR_PTR_1126b3928;
    func_0x00010c2647c0(PTR_PTR_1126b3928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}


