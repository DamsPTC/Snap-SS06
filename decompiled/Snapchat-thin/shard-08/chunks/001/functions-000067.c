/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ce4da4; end: 105ce4dab; -[SCPreviewFiltersLegacyController audioProcessingSessionFactory] */

undefined8 FUN_105ce4da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105ce4dac; end: 105ce4db3; -[SCPreviewFiltersLegacyController previewLatencyLogger] */

undefined8 FUN_105ce4dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105ce4db4; end: 105ce4dbb; -[SCPreviewFiltersLegacyController geoFilterLogger] */

undefined8 FUN_105ce4db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105ce4dbc; end: 105ce4dc3; -[SCPreviewFiltersLegacyController previewTooltipsProvider] */

undefined8 FUN_105ce4dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105ce4dc4; end: 105ce4dcb; -[SCPreviewFiltersLegacyController ucoDependencyFactory] */

undefined8 FUN_105ce4dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105ce4dcc; end: 105ce4dd3; -[SCPreviewFiltersLegacyController specsRenderingMetadataProvider] */

undefined8 FUN_105ce4dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105ce4dd4; end: 105ce4ddb; -[SCPreviewFiltersLegacyController actionInterceptor] */

undefined8 FUN_105ce4dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105ce4ddc; end: 105ce4de3; -[SCPreviewFiltersLegacyController filterStackingUIHelper] */

undefined8 FUN_105ce4ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105ce4de4; end: 105ce4e13; -[SCPreviewFiltersLegacyController setFilterStackingUIHelper:] */

void FUN_105ce4de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ce4e14; end: 105ce4e1b; -[SCPreviewFiltersLegacyController filterStackingUITooltipLabel] */

undefined8 FUN_105ce4e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105ce4e1c; end: 105ce4e4b; -[SCPreviewFiltersLegacyController setFilterStackingUITooltipLabel:] */

void FUN_105ce4e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ce4e4c; end: 105ce4f97; -[SCPreviewFiltersLegacyController .cxx_destruct] */

void FUN_105ce4e4c(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ce4f98; end: 105ce50c3; -[SCPreviewFiltersLegacyControllerToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce4f98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127341cc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar4;
  func_0x00010010fab4(lVar4,PTR_DAT_1126a5108);
  lVar1 = lVar4;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_1127341c4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return;
}



/* Entry: 105ce50c4; end: 105ce50eb;  */

void FUN_105ce50c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ce50ec; end: 105ce512f; -[SCPreviewFiltersLegacyControllerToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce50ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127341cc);
  _objc_destroyWeak(param_1 + _DAT_1127341c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127341c4);
  return;
}



/* Entry: 105ce5130; end: 105ce52e3; -[SCPreviewTooltipLabel initWithText:] */

undefined1 *
FUN_105ce5130(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eccf8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c212f20(puVar1);
    func_0x00010c1cfce0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
    FUN_105ce5320();
    func_0x00010c26c660(puVar1);
    func_0x00010c19f0e0(puVar1);
    func_0x00010bfb68e0(puVar1);
    func_0x00010bfb68e0(puVar1);
    func_0x00010c19f0e0(0,0,param_3 + 24.0,param_4 + 12.0,puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    func_0x00010c213040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105ce52e4; end: 105ce531f; -[SCPreviewTooltipLabel intrinsicContentSize] */

undefined1  [16]
FUN_105ce52e4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined1 auVar1 [16];
  
  FUN_105ce5320();
  func_0x00010c26c660(param_5,param_6,0);
  auVar1._0_8_ = param_3 + 24.0;
  auVar1._8_8_ = param_4 + 12.0;
  return auVar1;
}



/* Entry: 105ce5320; end: 105ce5393;  */

undefined8 FUN_105ce5320(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105ce5394; end: 105ce543f; -[SCPreviewFeatureSmartTemplateDependencyServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127341d0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c3d08;
    _objc_alloc();
    lVar4 = param_1 + _DAT_1127341d4;
    _objc_loadWeakRetained(lVar4);
    lVar2 = lVar4;
    func_0x00010c23ef20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046da0(puVar1,param_2,lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105ce5440; end: 105ce5487; -[SCPreviewFeatureSmartTemplateDependencyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5440(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127341d4);
  _objc_destroyWeak(param_1 + _DAT_1127341d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127341d0,0);
  return;
}



/* Entry: 105ce5488; end: 105ce558b; -[SCPreviewFeatureSmartTemplateImpl initWithTimelineConfiguration:snapDocManager:smartTemplateService:userTrackedLogger:tinsel:] */

undefined1 *
FUN_105ce5488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ecd00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ce558c; end: 105ce5597; -[SCPreviewFeatureSmartTemplateImpl configureWithView:] */

void FUN_105ce558c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105ce5598; end: 105ce59af; -[SCPreviewFeatureSmartTemplateImpl applyBeatSync:to:completion:] */

void FUN_105ce5598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b3088;
  _objc_opt_new(PTR_PTR_1126b3088);
  func_0x00010c1ca380();
  puVar2 = PTR_PTR_1126b3090;
  _objc_opt_new(PTR_PTR_1126b3090);
  func_0x00010c1dcf40();
  func_0x00010c16fc40(puVar2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = (undefined *)0x0;
  lVar5 = lVar4;
  func_0x00010c09a2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puStack_68;
  _objc_retain(puStack_68);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if ((puVar8 == (undefined *)0x0) && (lVar5 != 0)) {
    lVar3 = lVar5;
    func_0x00010bf529e0();
    if (lVar3 == 1) {
      uVar6 = param_4;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = (undefined *)0x0;
      lVar7 = lVar4;
      func_0x00010c12ea00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puStack_70;
      _objc_retain(puStack_70);
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (puVar8 == (undefined *)0x0) {
        lVar3 = param_1 + 0x30;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar5;
        func_0x00010c0dfd40(lVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = (undefined *)0x0;
        lVar10 = lVar4;
        func_0x00010bf08980();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puStack_78;
        _objc_retain(puStack_78);
        _objc_release(lVar9);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (puVar8 == (undefined *)0x0) {
          puVar11 = PTR_PTR_1126b0018;
          _objc_alloc();
          lVar3 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar3);
          lVar4 = lVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c047840();
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_initWeak(auStack_80,param_1);
          param_1 = param_1 + 0x20;
          _objc_loadWeakRetained(param_1);
          _objc_retain(param_5);
          _objc_copyWeak(auStack_88,auStack_80);
          func_0x00010c270060(puVar11);
          _objc_release(param_1);
          _objc_destroyWeak(auStack_88);
          _objc_release(param_5);
          _objc_destroyWeak(auStack_80);
          _objc_release(puVar11);
        }
        else {
          (**(code **)(param_5 + 0x10))(param_5,0,puVar8);
        }
        _objc_release(lVar10);
      }
      else {
        (**(code **)(param_5 + 0x10))(param_5,0,puVar8);
      }
      _objc_release(lVar7);
      _objc_release(uVar6);
      goto LAB_105ce5938;
    }
LAB_105ce5718:
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else if (puVar8 == (undefined *)0x0) goto LAB_105ce5718;
  (**(code **)(param_5 + 0x10))(param_5,0,puVar8);
LAB_105ce5938:
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ce59b0; end: 105ce5a8b;  */

void FUN_105ce59b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf6b5c0();
    _objc_release(lVar2);
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_2;
    func_0x00010c1585e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb320(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ce5a8c; end: 105ce5afb; -[SCPreviewFeatureSmartTemplateImpl disableIncompatibleCTs] */

void FUN_105ce5a8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  func_0x00010c18ec60(lVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ce5afc; end: 105ce5b03; -[SCPreviewFeatureSmartTemplateImpl responderChainPriority] */

undefined8 FUN_105ce5afc(void)

{
  return 0;
}



/* Entry: 105ce5b04; end: 105ce5b1b; -[SCPreviewFeatureSmartTemplateImpl smartTemplateService] */

void FUN_105ce5b04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ce5b1c; end: 105ce5b27; -[SCPreviewFeatureSmartTemplateImpl setSmartTemplateService:] */

void FUN_105ce5b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105ce5b28; end: 105ce5b73; -[SCPreviewFeatureSmartTemplateImpl .cxx_destruct] */

void FUN_105ce5b28(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ce5b74; end: 105ce5d0b; -[SCPreviewFeatureSmartTemplateServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5b74(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112734204;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3d18;
  _objc_alloc(PTR_PTR_1126c3d18);
  func_0x00010c046d60();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112734208);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105ce5d0c; end: 105ce5ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5d0c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
    goto LAB_105ce5eac;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c06e860();
  if ((int)uVar5 == 0) {
LAB_105ce5d68:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c070a20();
    if (iVar1 != 0) goto LAB_105ce5d74;
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0811c0();
    if ((uVar4 & 1) == 0) goto LAB_105ce5d68;
LAB_105ce5d74:
    puVar14 = PTR_PTR_1126c3d10;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26fea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2 + _DAT_1127341f4;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2 + _DAT_1127341f8;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c23ef20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2 + _DAT_1127341fc;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2 + _DAT_112734200;
    _objc_loadWeakRetained(lVar12);
    lVar13 = lVar12;
    func_0x00010c270e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052760(puVar14,param_2,uVar5,lVar7,lVar9,lVar11,lVar13);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
LAB_105ce5eac:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105ce5ed8; end: 105ce5f43; -[SCPreviewFeatureSmartTemplateServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5ed8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734208,0);
  _objc_destroyWeak(param_1 + _DAT_112734200);
  _objc_destroyWeak(param_1 + _DAT_1127341fc);
  _objc_destroyWeak(param_1 + _DAT_1127341f4);
  _objc_destroyWeak(param_1 + _DAT_1127341f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734204);
  return;
}



/* Entry: 105ce5f44; end: 105ce5fef; -[SCPreviewFeatureSmartTemplateServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5f44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273420c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734214;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c23eec0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ce5ff0; end: 105ce6033; -[SCPreviewFeatureSmartTemplateServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce5ff0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734214);
  _objc_destroyWeak(param_1 + _DAT_112734210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273420c);
  return;
}



/* Entry: 105ce6034; end: 105ce60e3; -[SCPreviewFeatureCommerceAttachmentImpl initWithAttachmentToolScopeExposer:merchantInfoProvider:] */

undefined1 *
FUN_105ce6034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecd08;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ce60e4; end: 105ce60eb; -[SCPreviewFeatureCommerceAttachmentImpl responderChainPriority] */

undefined8 FUN_105ce60e4(void)

{
  return 0x7fffffff;
}



/* Entry: 105ce60ec; end: 105ce614f; -[SCPreviewFeatureCommerceAttachmentImpl _prepareStoreInfoHelper:completion:] */

void FUN_105ce60ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ce6150; end: 105ce6243; -[SCPreviewFeatureCommerceAttachmentImpl prepareStoreInfoWithCompletion:] */

void FUN_105ce6150(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfa8920(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ce6244; end: 105ce6297;  */

void FUN_105ce6244(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce6298; end: 105ce62a7; -[SCPreviewFeatureCommerceAttachmentImpl shouldShowStoreButton] */

bool FUN_105ce6298(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 105ce62a8; end: 105ce634f; -[SCPreviewFeatureCommerceAttachmentImpl presentAttachmentTool] */

void FUN_105ce62a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c3d20;
  _objc_alloc(PTR_PTR_1126c3d20);
  func_0x00010c0569c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ce6350; end: 105ce635f; -[SCPreviewFeatureCommerceAttachmentImpl clearAttachments] */

void FUN_105ce6350(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ce6360; end: 105ce636f; -[SCPreviewFeatureCommerceAttachmentImpl hasAttachment] */

bool FUN_105ce6360(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 105ce6370; end: 105ce63b7; -[SCPreviewFeatureCommerceAttachmentImpl attachmentToolDismissed] */

void FUN_105ce6370(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ce63b8; end: 105ce63c3; -[SCPreviewFeatureCommerceAttachmentImpl dismissButtonTapped] */

void FUN_105ce63b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105ce63c4; end: 105ce644f; -[SCPreviewFeatureCommerceAttachmentImpl didAttachProduct:urlString:] */

void FUN_105ce63c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x18),param_2,0);
  _objc_release(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c110d60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce6450; end: 105ce648f; -[SCPreviewFeatureCommerceAttachmentImpl didDetachProduct:] */

void FUN_105ce6450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c110d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce6490; end: 105ce64a7; -[SCPreviewFeatureCommerceAttachmentImpl parentViewControllerDelegate] */

void FUN_105ce6490(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ce64a8; end: 105ce64b3; -[SCPreviewFeatureCommerceAttachmentImpl setParentViewControllerDelegate:] */

void FUN_105ce64a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105ce64b4; end: 105ce64cb; -[SCPreviewFeatureCommerceAttachmentImpl attachingDelegate] */

void FUN_105ce64b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ce64cc; end: 105ce64d7; -[SCPreviewFeatureCommerceAttachmentImpl setAttachingDelegate:] */

void FUN_105ce64cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105ce64d8; end: 105ce653b; -[SCPreviewFeatureCommerceAttachmentImpl .cxx_destruct] */

void FUN_105ce64d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ce653c; end: 105ce663b; -[SCPreviewFeatureCommerceAttachmentServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce653c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3d28;
  _objc_alloc(PTR_PTR_1126c3d28);
  func_0x00010bfffec0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112734234));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ce663c; end: 105ce667b;  */

void FUN_105ce663c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ce667c; end: 105ce68a7; -[SCPreviewFeatureCommerceAttachmentServicesEntryPoint _makeCommerceAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce667c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar6;
  
  lVar13 = (long)_DAT_112734238;
  lVar14 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar14;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c06ec80();
  if ((int)lVar4 == 0) {
    iVar1 = 0;
  }
  else {
    lVar13 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar4 = lVar13;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf42280();
    iVar1 = (int)lVar6;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar13);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar14);
  lVar14 = (long)_DAT_11273423c;
  uVar7 = param_1 + lVar14;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010c2578c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf0d400();
  if (((uVar10 & 1) == 0) && (iVar1 == 0)) {
    lVar13 = param_1 + _DAT_112734240;
    _objc_loadWeakRetained();
    lVar2 = lVar13;
    func_0x00010bf42360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb49e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar13);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((int)lVar4 == 0) {
      puVar11 = (undefined *)0x0;
      goto LAB_105ce6888;
    }
  }
  else {
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  puVar11 = PTR_PTR_1126c3d30;
  _objc_alloc(PTR_PTR_1126c3d30);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112734244);
  param_1 = param_1 + lVar14;
  _objc_loadWeakRetained(param_1);
  lVar14 = param_1;
  func_0x00010c2578c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4bc0(puVar11,param_2,uVar12,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar14);
  _objc_release(param_1);
LAB_105ce6888:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105ce68a8; end: 105ce6917; -[SCPreviewFeatureCommerceAttachmentServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce68a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734244,0);
  _objc_storeStrong(param_1 + _DAT_112734234,0);
  _objc_destroyWeak(param_1 + _DAT_112734240);
  _objc_destroyWeak(param_1 + _DAT_112734238);
  _objc_destroyWeak(param_1 + _DAT_11273423c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734248);
  return;
}



/* Entry: 105ce6918; end: 105ce69c3; -[SCPreviewFeatureCommerceAttachmentServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce6918(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273424c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734254;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf42260(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ce69c4; end: 105ce6a07; -[SCPreviewFeatureCommerceAttachmentServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce69c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734254);
  _objc_destroyWeak(param_1 + _DAT_112734250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273424c);
  return;
}



/* Entry: 105ce6a08; end: 105ce6afb; -[SCCommerceAttachmentToolScope initWithUIContainer:delegate:storeData:attachedProduct:] */

undefined1 *
FUN_105ce6a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ecd10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ce6afc; end: 105ce6b03; -[SCCommerceAttachmentToolScope uiContainer] */

undefined8 FUN_105ce6afc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ce6b04; end: 105ce6b1b; -[SCCommerceAttachmentToolScope delegate] */

void FUN_105ce6b04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ce6b1c; end: 105ce6b23; -[SCCommerceAttachmentToolScope storeModel] */

undefined8 FUN_105ce6b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105ce6b24; end: 105ce6b2b; -[SCCommerceAttachmentToolScope attachedProduct] */

undefined8 FUN_105ce6b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105ce6b2c; end: 105ce6b6f; -[SCCommerceAttachmentToolScope .cxx_destruct] */

void FUN_105ce6b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ce6b70; end: 105ce6bf3; -[SCCommerceAttachmentDataModel initWithAttachmentId:attachmentType:] */

undefined1 *
FUN_105ce6b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecd18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ce6bf4; end: 105ce6c17; -[SCCommerceAttachmentDataModel copyWithZone:] */

undefined8 FUN_105ce6bf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105ce6c18; end: 105ce6c1f; -[SCCommerceAttachmentDataModel attachmentId] */

undefined8 FUN_105ce6c18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ce6c20; end: 105ce6c27; -[SCCommerceAttachmentDataModel attachmentType] */

undefined8 FUN_105ce6c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105ce6c28; end: 105ce6c33; -[SCCommerceAttachmentDataModel .cxx_destruct] */

void FUN_105ce6c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ce6c34; end: 105ce6c3f; -[SCFeatureSettingsService isCommerceAttachmentToolEnabledAvailable] */

void FUN_105ce6c34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e27f98);
  return;
}



/* Entry: 105ce6c40; end: 105ce6c4b; -[SCFeatureSettingsService commerceAttachmentToolEnabledServerParam] */

undefined ** FUN_105ce6c40(void)

{
  return &PTR____CFConstantStringClassReference_110e27f98;
}



/* Entry: 105ce6c4c; end: 105ce6c53; -[SCFeatureSettingsService commerce_attachment_tool_enabled_client_value:] */

undefined * FUN_105ce6c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105ce6c54; end: 105ce6c5b; -[SCFeatureSettingsService commerce_attachment_tool_enabled_server_value:] */

void FUN_105ce6c54(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ce6c5c; end: 105ce6c6b; -[SCFeatureSettingsService commerceAttachmentToolEnabled] */

void FUN_105ce6c5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e27f98,0);
  return;
}



/* Entry: 105ce6c6c; end: 105ce6f67; -[SCPreviewFeatureCustomStickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce6c6c(long param_1,undefined8 param_2)

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
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112734284;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar12;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112734288;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112734278;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar12;
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11273427c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010bf61e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112734280;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11273428c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar12;
  func_0x00010bf04800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112734290;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar12;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_1 + _DAT_112734270;
  _objc_loadWeakRetained();
  lVar8 = lVar12;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105ce6f68;
  puStack_a8 = &UNK_1108e4ca0;
  puVar9 = PTR_PTR_1126ae720;
  lStack_a0 = lVar1;
  lStack_98 = lVar2;
  lStack_90 = lVar3;
  lStack_88 = lVar4;
  lStack_80 = lVar5;
  lStack_78 = lVar6;
  lStack_70 = lVar7;
  lStack_68 = lVar8;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c3d40;
  _objc_alloc(PTR_PTR_1126c3d40);
  func_0x00010c039a00();
  if (param_1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112734294);
  }
  func_0x00010bf9d660(uVar11,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105ce6f68; end: 105ce6faf;  */

void FUN_105ce6f68(void)

{
  _objc_alloc(PTR_PTR_1126c3d38);
  func_0x00010c04c720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ce6fb0; end: 105ce704b; -[SCPreviewFeatureCustomStickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ce6fb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734294,0);
  _objc_destroyWeak(param_1 + _DAT_112734270);
  _objc_destroyWeak(param_1 + _DAT_112734290);
  _objc_destroyWeak(param_1 + _DAT_11273428c);
  _objc_destroyWeak(param_1 + _DAT_112734288);
  _objc_destroyWeak(param_1 + _DAT_112734284);
  _objc_destroyWeak(param_1 + _DAT_112734280);
  _objc_destroyWeak(param_1 + _DAT_11273427c);
  _objc_destroyWeak(param_1 + _DAT_112734278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734274);
  return;
}



/* Entry: 105ce704c; end: 105ce724f; -[SCPreviewFeatureCustomSticker initWithStickerContainer:applicationLifecycleEvents:creativeExpressionsManager:customStickerManager:snapEditor:anrThreadMonitoring:itemViewService:creativeToolsABProvider:] */

undefined1 *
FUN_105ce704c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_1126ecd20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ec0();
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 105ce7250; end: 105ce72eb; -[SCPreviewFeatureCustomSticker dealloc] */

void FUN_105ce7250(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282180();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c12cbe0(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ecd20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105ce72ec; end: 105ce7313; -[SCPreviewFeatureCustomSticker customStickerObservable] */

void FUN_105ce72ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ce7314; end: 105ce7343; -[SCPreviewFeatureCustomSticker configureWithView:] */

void FUN_105ce7314(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105ce7344; end: 105ce7367; -[SCPreviewFeatureCustomSticker activate] */

void FUN_105ce7344(undefined8 param_1)

{
  func_0x00010beac300();
                    /* WARNING: Could not recover jumptable at 0x00010beaebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPasteboardObserving_112589498);
  return;
}



/* Entry: 105ce7368; end: 105ce736f; -[SCPreviewFeatureCustomSticker featureType] */

undefined8 FUN_105ce7368(void)

{
  return 4;
}



/* Entry: 105ce7370; end: 105ce748f; -[SCPreviewFeatureCustomSticker createAndDisplayCustomStickerWithImageData:origin:isAnimated:] */

void FUN_105ce7370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = 0xc2000000;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105ce7490;
  puStack_68 = &UNK_110846320;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x40));
  _CGRectGetMidX();
  uVar3 = uVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x40));
  _CGRectGetMidY();
  func_0x00010bdeab20(uVar2,uVar3,param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105ce7490; end: 105ce74df;  */

void FUN_105ce7490(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ce74e0; end: 105ce75eb; -[SCPreviewFeatureCustomSticker didFinishCuttingStickerWithImageData:atPosition:isFromCutout:origin:] */

void FUN_105ce74e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105ce75ec;
  puStack_68 = &UNK_110846320;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  func_0x00010bdeab20(param_1,param_2,param_3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 105ce75ec; end: 105ce763b;  */

void FUN_105ce75ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ce763c; end: 105ce76ff; -[SCPreviewFeatureCustomSticker dropInteraction:canHandleSession:] */

undefined *
FUN_105ce763c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__kUTTypeImage_11034b1d0;
  uStack_40 = *(undefined8 *)PTR__kUTTypeGIF_11034b1c0;
  _objc_retain(param_4);
  func_0x00010bf0a140(puVar1,param_2,&uStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bfd8260(param_4,param_2,puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIDropProposal_1126c3d48;
  _objc_alloc(PTR__OBJC_CLASS___UIDropProposal_1126c3d48);
  func_0x00010c00e7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 105ce7700; end: 105ce7723; -[SCPreviewFeatureCustomSticker dropInteraction:sessionDidUpdate:] */

void FUN_105ce7700(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UIDropProposal_1126c3d48);
  func_0x00010c00e7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ce7724; end: 105ce7abb; -[SCPreviewFeatureCustomSticker dropInteraction:performDrop:] */

void FUN_105ce7724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [136];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar9 = *(undefined8 *)PTR__kUTTypeImage_11034b1d0;
  uVar10 = *(undefined8 *)PTR__kUTTypeGIF_11034b1c0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar9;
  uStack_98 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010bfd8260();
  _objc_release(puVar1);
  if ((int)lVar2 != 0) {
    lVar2 = param_6;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010c09ef00(param_6);
      _objc_initWeak(auStack_128,param_3);
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_105ce7abc;
      puStack_138 = &UNK_110846320;
      _objc_copyWeak(auStack_130,auStack_128);
      ppuVar4 = &puStack_150;
      _objc_retainBlock();
      puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_105ce7b0c;
      puStack_178 = &UNK_1108e4cd0;
      param_4 = auStack_128;
      _objc_copyWeak(auStack_168,param_4);
      ppuVar5 = &puStack_190;
      ppuStack_170 = ppuVar4;
      uStack_158 = param_2;
      _objc_retainBlock();
      lVar6 = param_6;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar6);
          }
          uVar12 = *(undefined8 *)(lVar11 * 8);
          _objc_retain(uVar9);
          uVar7 = uVar12;
          func_0x00010c0849c0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bfd8240();
          _objc_release(uVar7);
          uVar7 = uVar9;
          if ((int)uVar8 != 0) {
            _objc_retain(uVar10);
            _objc_release(uVar9);
            uVar7 = uVar10;
          }
          func_0x00010c0849c0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09b300();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(uVar7);
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      _objc_release(ppuVar5);
      _objc_destroyWeak(auStack_168);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_130);
      _objc_destroyWeak(auStack_128);
    }
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  _objc_retain(param_4);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_5 + 0x70));
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ce7abc; end: 105ce7b0b;  */

void FUN_105ce7abc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ce7b0c; end: 105ce7c07;  */

void FUN_105ce7b0c(long param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_4 == 0) && (lVar1 != 0)) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105ce7c08;
    puStack_78 = &UNK_11087b938;
    _objc_copyWeak(auStack_60,param_1 + 0x28);
    _objc_retain(param_2);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    lStack_70 = param_2;
    uStack_48 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105ce7c08; end: 105ce7c4b;  */

void FUN_105ce7c08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdeab20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ce7c4c; end: 105ce7c63;  */

void FUN_105ce7c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105ce7c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28),param_3);
  return;
}



/* Entry: 105ce7c64; end: 105ce7ddf; -[SCPreviewFeatureCustomSticker _createAndDisplayCustomStickerWithImageData:atPosition:isFromCutout:origin:isAnimated:completion:] */

void FUN_105ce7c64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_b0;
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_3);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105ce7de0;
  puStack_98 = &UNK_1108e4d30;
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_6;
  uStack_6f = param_8;
  _objc_retain(param_9);
  uStack_90 = param_9;
  _objc_retainBlock(&puStack_b0);
  lVar2 = param_3;
  func_0x00010be9aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf59220();
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(lVar2);
  return;
}



/* Entry: 105ce7de0; end: 105ce7e87;  */

void FUN_105ce7de0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 != 0)) {
    _objc_retain(param_2);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bee0ce0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be04400(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_release(param_2);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce7e88; end: 105ce8227; -[SCPreviewFeatureCustomSticker _scaleImageData:isAnimated:] */

void FUN_105ce7e88(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  _objc_retain(param_5);
  puVar5 = PTR_PTR_1126c3d50;
  if (param_5 == (undefined *)0x0) goto LAB_105ce81fc;
  if (param_6 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    if ((350.0 < param_1) || (func_0x00010c23d0a0(puVar5), 350.0 < param_2)) {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14e260(0x4075e00000000000,PTR__OBJC_CLASS___UIImage_1126aea68,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfe8a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar7;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c08fa60();
      if (puVar8 != (undefined *)0x0) {
        _objc_retain(puVar6);
        puVar8 = puVar6;
        goto LAB_105ce81d8;
      }
LAB_105ce81e4:
      _objc_release(puVar6);
      goto LAB_105ce81ec;
    }
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bf67520(puVar5,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if ((puVar5 != (undefined *)0x0) &&
       (puVar6 = puVar5, func_0x00010bfb6b20(), puVar6 != (undefined *)0x0)) {
      puVar6 = puVar5;
      func_0x00010bfb6920(puVar5,param_4,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c23d0a0(puVar7);
      dVar10 = param_1;
      func_0x00010c14e120(puVar7);
      param_1 = param_1 * dVar10;
      func_0x00010c23d0a0(puVar7);
      func_0x00010c14e120(puVar7);
      param_2 = param_2 * dVar10;
      dVar10 = param_2;
      if (param_2 <= param_1) {
        dVar10 = param_1;
      }
      if (350.0 < dVar10) {
        lVar11 = (long)(param_1 * (350.0 / dVar10));
        lVar12 = (long)(param_2 * (350.0 / dVar10));
        puVar8 = PTR_PTR_1126b9658;
        _objc_alloc();
        func_0x00010c055880();
        puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
        func_0x00010bf69700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4c20();
        func_0x00010c1f5fe0(0x3ff0000000000000,puVar1);
        puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
        _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
        func_0x00010c046ac0(lVar11,lVar12);
        puVar6 = puVar5;
        func_0x00010bfb6b20();
        if (puVar6 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          do {
            _objc_autoreleasePoolPush();
            puVar3 = puVar5;
            func_0x00010bfb6920(puVar5,param_4,puVar9,0);
            _objc_retainAutoreleasedReturnValue();
            puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c0 = 0xc2000000;
            pcStack_b8 = FUN_105ce8228;
            puStack_b0 = &UNK_1108e4d60;
            uStack_a0 = 0;
            uStack_98 = 0;
            puStack_a8 = puVar3;
            lStack_90 = lVar11;
            lStack_88 = lVar12;
            _objc_retain();
            puVar4 = puVar2;
            func_0x00010bfe91c0(puVar2,param_4,&puStack_c8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf8b160(puVar3);
            func_0x00010bef9200(puVar8,param_4,puVar4);
            _objc_release(puVar4);
            _objc_release(puStack_a8);
            _objc_release(puVar3);
            _objc_autoreleasePoolPop(puVar6);
            puVar9 = puVar9 + 1;
            puVar6 = puVar5;
            func_0x00010bfb6b20();
          } while (puVar9 < puVar6);
        }
        puVar9 = puVar8;
        func_0x00010bf92d00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010c08fa60();
        puVar6 = param_5;
        if (puVar3 != (undefined *)0x0) {
          _objc_retain(puVar9);
          _objc_release(param_5);
          puVar6 = puVar9;
        }
        _objc_release(puVar9);
        _objc_release(puVar2);
        param_5 = puVar1;
LAB_105ce81d8:
        _objc_release(param_5);
        param_5 = puVar6;
        puVar6 = puVar8;
        goto LAB_105ce81e4;
      }
LAB_105ce81ec:
      _objc_release(puVar7);
    }
  }
  _objc_release(puVar5);
LAB_105ce81fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 105ce8228; end: 105ce8267;  */

void FUN_105ce8228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ce8268; end: 105ce8443; -[SCPreviewFeatureCustomSticker _setupPasteboardObserving] */

void FUN_105ce8268(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  ppuVar4 = &puStack_d0;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x68));
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf34de0();
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(puVar1);
  func_0x00010c13d1c0(*(undefined8 *)(param_1 + 0x68));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105ce8444;
  puStack_80 = &UNK_1108e4d90;
  ppuVar3 = &puStack_98;
  puStack_78 = &uStack_70;
  puStack_68 = &uStack_70;
  _objc_retainBlock(ppuVar3);
  _objc_initWeak(auStack_a0,param_1);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105ce8458;
  puStack_b8 = &UNK_1108e4dc0;
  puStack_b0 = &uStack_70;
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retainBlock(&puStack_d0);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf72840();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_70,8);
  return;
}



/* Entry: 105ce8444; end: 105ce8457;  */

void FUN_105ce8444(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}


