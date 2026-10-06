/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e015fc; end: 105e01627;  */

void FUN_105e015fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e01628; end: 105e0170f; -[SCSpotlightPlaceTagCarousel _handleTaggedPlaceWithDataObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e01628(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e01710; end: 105e01787;  */

void FUN_105e01710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e01788; end: 105e01887; -[SCSpotlightPlaceTagCarousel _updateTaggedPlaceWithTaggedPlace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e01788(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273706c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    if (param_3 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c4dd0;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010c0fd260(param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = param_3;
      func_0x00010c0fd0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053a20(puVar3,param_2,lVar2,unaff_x22,1);
    }
    lVar4 = (long)_DAT_112737064;
    _objc_retain(puVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar1);
    if (param_3 != 0) {
      _objc_release(puVar3);
      _objc_release(unaff_x22);
      _objc_release(lVar2);
    }
    func_0x00010c128b60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e01888; end: 105e019c3; -[SCSpotlightPlaceTagCarousel _constructPlaceTagsMetadataForPlaceTag:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e01888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c4db8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffcaa0();
  puVar2 = PTR_PTR_1126c4dc0;
  _objc_alloc(PTR_PTR_1126c4dc0);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737068);
  func_0x00010bf529e0(uVar3);
  func_0x00010c0df840(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c297e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0367c0(puVar2,param_2,1,puVar4,puVar5,uVar3,0,puVar1,1);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e019c4; end: 105e01a1b; -[SCSpotlightPlaceTagCarousel _shouldShowRemixPillForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105e019c4(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11273705c) != 0) {
    func_0x00010c0840e0(param_3);
    func_0x00010c0deec0(param_1,param_2,0);
    return param_3 == param_1 + -1;
  }
  return false;
}



/* Entry: 105e01a1c; end: 105e01ad7; -[SCSpotlightPlaceTagCarousel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e01a1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273705c,0);
  _objc_storeStrong(param_1 + _DAT_112737064,0);
  _objc_storeStrong(param_1 + _DAT_11273706c,0);
  _objc_storeStrong(param_1 + _DAT_112737060,0);
  _objc_destroyWeak(param_1 + _DAT_112737058);
  _objc_storeStrong(param_1 + _DAT_112737070,0);
  _objc_storeStrong(param_1 + _DAT_112737074,0);
  _objc_storeStrong(param_1 + _DAT_112737068,0);
  _objc_storeStrong(param_1 + _DAT_112737054,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737050,0);
  return;
}



/* Entry: 105e01ad8; end: 105e01aef;  */

void FUN_105e01ad8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b5d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2b5d8,
                      &PTR____CFConstantStringClassReference_110e2b5f8,0);
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



/* Entry: 105e01af0; end: 105e01b63; -[SCGrapheneSpotlightPostingHintMetric2 init] */

undefined1 * FUN_105e01af0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed2e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e01b64; end: 105e01bdb;  */

void FUN_105e01b64(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108ea610,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105e01bdc; end: 105e01d4f;  */

undefined * FUN_105e01bdc(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *unaff_x22;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  plVar8 = (long *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34131e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108ea660);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_c0;
  pcStack_88 = FUN_105e01d50;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar8;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_b8 = PTR_PTR_1126ed2f0;
  puStack_c0 = puVar2;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
    _objc_release(uVar7);
    *(undefined1 **)((long)ppuVar3 + 0x10) = param_4;
  }
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 105e01d50; end: 105e01dd7; -[SCSpotlightPostingHint initWithPostingHint:visibilityReason:] */

undefined1 *
FUN_105e01d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed2f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e01dd8; end: 105e01dfb; -[SCSpotlightPostingHint copyWithZone:] */

undefined8 FUN_105e01dd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e01dfc; end: 105e01e67; -[SCSpotlightPostingHint hash] */

undefined8 * FUN_105e01dfc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105e01eec;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105e01eec;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_105e01eec;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105e01eec:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105e01e68; end: 105e01f07; -[SCSpotlightPostingHint isEqual:] */

long FUN_105e01e68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e01eec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_105e01eec;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105e01eec;
    }
  }
  lVar3 = 1;
LAB_105e01eec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e01f08; end: 105e01f0f; -[SCSpotlightPostingHint postingHint] */

undefined8 FUN_105e01f08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e01f10; end: 105e01f17; -[SCSpotlightPostingHint visibilityReason] */

undefined8 FUN_105e01f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e01f18; end: 105e01f23; -[SCSpotlightPostingHint .cxx_destruct] */

void FUN_105e01f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e01f24; end: 105e01f2f; +[SCCSpotlightPlaceTagsComponent componentPath] */

undefined ** FUN_105e01f24(void)

{
  return &PTR____CFConstantStringClassReference_110e2b618;
}



/* Entry: 105e01f30; end: 105e01f63; -[SCCSpotlightPlaceTagsComponent initWithViewModel:componentContext:runtime:] */

void FUN_105e01f30(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed2f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105e01f64; end: 105e01fb3; -[SCCSpotlightPlaceTagsComponent setViewModel:] */

void FUN_105e01f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e01fb4; end: 105e01ff7; -[SCCSpotlightPlaceTagsComponent viewModel] */

void FUN_105e01fb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e01ff8; end: 105e01fff; -[SCCSpotlightPlaceTagsLoadState__Enum init] */

void FUN_105e01ff8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105e02000; end: 105e0203b; -[SCCSpotlightPlaceTag initWithPlaceId:title:address:distanceFromCaptureLocation:] */

void FUN_105e02000(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed300;
  uStack_20 = param_1;
  func_0x000105e022d4();
  func_0x000105e022cc(&uStack_20);
  return;
}



/* Entry: 105e0203c; end: 105e0204b; +[SCCSpotlightPlaceTag valdiMarshallableObjectDescriptor] */

void FUN_105e0203c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_placeId_1108ea6c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e0204c; end: 105e0207f; -[SCCSpotlightPlaceTagConfig initWithShowSelectedUI:] */

void FUN_105e0204c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed308;
  uStack_20 = param_1;
  func_0x000105e022d4();
  func_0x000105e022cc(&uStack_20);
  return;
}



/* Entry: 105e02080; end: 105e0208f; +[SCCSpotlightPlaceTagConfig valdiMarshallableObjectDescriptor] */

void FUN_105e02080(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ea750;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e02090; end: 105e02133; -[SCCSpotlightPlaceTagsContext initWithPlaceTagsObservable:blizzardLogger:onResultTap:] */

undefined8 *
FUN_105e02090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ed310;
  uStack_40 = param_1;
  func_0x000105e022d4();
  puVar1 = &uStack_40;
  func_0x000105e022cc(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105e02134; end: 105e0216f; +[SCCSpotlightPlaceTagsContext valdiMarshallableObjectDescriptor] */

void FUN_105e02134(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ea7c8;
  param_1[1] = &PTR_s_SCBridgeObservable_1108ea8a0;
  param_1[2] = &PTR_DAT_1108ea798;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e02170; end: 105e021ef;  */

void FUN_105e02170(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e02290;
  puStack_30 = &UNK_1108ea980;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e021f0; end: 105e0222b; -[SCCSpotlightPlaceTagsData initWithPlaceTags:loadState:] */

void FUN_105e021f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed318;
  uStack_20 = param_1;
  func_0x000105e022d4();
  func_0x000105e022cc(&uStack_20);
  return;
}



/* Entry: 105e0222c; end: 105e0224b; +[SCCSpotlightPlaceTagsData valdiMarshallableObjectDescriptor] */

void FUN_105e0222c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ea8d8;
  param_1[1] = &PTR_DAT_1108ea968;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e0224c; end: 105e0227f; -[SCCSpotlightPlaceTagsViewModel init] */

void FUN_105e0224c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed320;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105e02280; end: 105e0228f; +[SCCSpotlightPlaceTagsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105e02280(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd0f28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e02290; end: 105e022bf;  */

void FUN_105e02290(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105e022c0; end: 105e022df;  */

void FUN_105e022c0(undefined8 *param_1)

{
  undefined8 in_x9;
  
  *param_1 = in_x9;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e022e0; end: 105e0235f; -[SCSendToFirstSnapSectionServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e022e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108ea9d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737084);
  puVar2 = PTR_PTR_1126c4e88;
  _objc_alloc(PTR_PTR_1126c4e88);
  func_0x00010c013600();
  func_0x00010bf9d660(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e02360; end: 105e02367;  */

undefined8 FUN_105e02360(void)

{
  return 0;
}



/* Entry: 105e02368; end: 105e023d3; -[SCSendToFirstSnapSectionServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e02368(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737084,0);
  _objc_destroyWeak(param_1 + _DAT_112737098);
  _objc_destroyWeak(param_1 + _DAT_112737094);
  _objc_destroyWeak(param_1 + _DAT_112737090);
  _objc_destroyWeak(param_1 + _DAT_11273708c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112737088);
  return;
}



/* Entry: 105e023d4; end: 105e02607; -[SCSelectionStoryServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e023d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar9 = (long)_DAT_11273709c;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c105f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c243400();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c071620();
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e02608;
  puStack_90 = &UNK_1108ea9f0;
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_70 = (undefined1)lVar3;
  lStack_88 = lVar2;
  lStack_78 = lVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_68);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127370a0);
  puVar7 = PTR_PTR_1126c4e90;
  _objc_alloc(PTR_PTR_1126c4e90);
  func_0x00010c043fa0();
  func_0x00010bf9d660(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 105e02608; end: 105e026c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e02608(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + _DAT_1127370e0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bf9f4a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010bf58c20(lVar3,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105e026c8; end: 105e0270f;  */

void FUN_105e026c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e02710; end: 105e0280b; -[SCSelectionStoryServicesEntryPoint _createSpotlightObservableRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e02710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c4e98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127370a4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127370a8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_11094e6d0);
  func_0x00010bffea00(puVar1,param_2,lVar3,lVar4,param_3,&PTR___NSConcreteGlobalBlock_11094e6d0);
  _objc_release(param_3);
  _objc_release(&PTR___NSConcreteGlobalBlock_11094e6d0);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e0280c; end: 105e02907; -[SCSelectionStoryServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e0280c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127370e0);
  _objc_destroyWeak(param_1 + _DAT_1127370dc);
  _objc_storeStrong(param_1 + _DAT_1127370a0,0);
  _objc_destroyWeak(param_1 + _DAT_1127370d8);
  _objc_destroyWeak(param_1 + _DAT_1127370d4);
  _objc_destroyWeak(param_1 + _DAT_1127370d0);
  _objc_destroyWeak(param_1 + _DAT_1127370cc);
  _objc_destroyWeak(param_1 + _DAT_1127370c8);
  _objc_destroyWeak(param_1 + _DAT_1127370a4);
  _objc_destroyWeak(param_1 + _DAT_1127370c4);
  _objc_destroyWeak(param_1 + _DAT_1127370c0);
  _objc_destroyWeak(param_1 + _DAT_1127370bc);
  _objc_destroyWeak(param_1 + _DAT_1127370a8);
  _objc_destroyWeak(param_1 + _DAT_1127370b8);
  _objc_destroyWeak(param_1 + _DAT_1127370b4);
  _objc_destroyWeak(param_1 + _DAT_1127370b0);
  _objc_destroyWeak(param_1 + _DAT_11273709c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127370ac);
  return;
}



/* Entry: 105e02908; end: 105e02a3b; -[SCComposerSendToScopeDelegateImpl initWithSendToScope:snapchatterServices:circumstanceEngine:snapSendEvents:legacyLastSnapDataStore:] */

undefined1 *
FUN_105e02908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed328;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e02a3c; end: 105e03d93; -[SCComposerSendToScopeDelegateImpl composerSendToDidCompleteWithSelectionState:newlyCreatedCustomStories:spotlightTile:shouldSend:] */

/* WARNING: Possible PIC construction at 0x000105e02c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105e02c14) */
/* WARNING: Removing unreachable block (ram,0x000105e02c24) */
/* WARNING: Removing unreachable block (ram,0x000105e02c30) */
/* WARNING: Removing unreachable block (ram,0x000105e02c5c) */
/* WARNING: Removing unreachable block (ram,0x000105e02c9c) */
/* WARNING: Removing unreachable block (ram,0x000105e02cbc) */
/* WARNING: Removing unreachable block (ram,0x000105e02d18) */
/* WARNING: Removing unreachable block (ram,0x000105e02d70) */

void FUN_105e02a3c(undefined **param_1,undefined **param_2,undefined **param_3,undefined *param_4,
                  undefined **param_5,undefined **param_6)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **unaff_x21;
  undefined8 uVar11;
  undefined **unaff_x24;
  undefined **ppuVar12;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar13;
  undefined **unaff_x28;
  undefined1 *puVar14;
  code *pcVar15;
  double dVar16;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  long lStack_70;
  
  puVar14 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((int)param_6 == 0) {
    ppuVar8 = param_3;
    if (((ulong)param_1[5] & 1) == 0) {
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = &PTR___NSConcreteGlobalBlock_1108eaa70;
      unaff_x21 = param_3;
      func_0x000100504554();
      _objc_release(param_3);
      param_6 = (undefined **)param_1[1];
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf75420();
      _objc_release(param_6);
      _objc_release(unaff_x21);
    }
    goto LAB_105e03674;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_260 = param_1;
  ppuStack_258 = param_5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_218 = puVar4;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_248 = puVar3;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_228 = puVar4;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined8 *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  ppuStack_250 = param_3;
  puStack_230 = puVar3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_220 = param_3;
  func_0x00010bf52a60();
  puStack_238 = param_4;
  if (param_3 == (undefined **)0x0) {
    ppuStack_240 = (undefined **)0x0;
  }
  else {
    ppuStack_240 = (undefined **)0x0;
    ppuVar8 = (undefined **)*puStack_1c0;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1c0 != ppuVar8) {
          _objc_enumerationMutation(ppuStack_220);
        }
        ppuVar12 = *(undefined ***)(lStack_1c8 + (long)unaff_x21 * 8);
        param_6 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = param_6;
        func_0x00010c27dd80();
        if ((int)ppuVar10 == 1) {
LAB_105e02c04:
          _objc_release(param_6);
LAB_105e02c0c:
          pcVar15 = (code *)0x105e02c14;
          pppuVar2 = &ppuStack_2f0;
          unaff_x24 = ppuVar12;
          goto SUB_105e036c8;
        }
        unaff_x28 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = unaff_x28;
        func_0x00010c27dd80();
        if ((int)ppuVar10 == 2) {
LAB_105e02bfc:
          _objc_release(unaff_x28);
          goto LAB_105e02c04;
        }
        ppuVar10 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar10;
        func_0x00010c27dd80();
        if ((int)ppuVar7 == 6) {
LAB_105e02bf0:
          _objc_release(ppuVar10);
          param_4 = puStack_238;
          goto LAB_105e02bfc;
        }
        unaff_x26 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = unaff_x26;
        func_0x00010c27dd80();
        if ((int)ppuVar7 == 10) {
          _objc_release(unaff_x26);
          goto LAB_105e02bf0;
        }
        unaff_x25 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        param_5 = unaff_x25;
        func_0x00010c27dd80();
        _objc_release(unaff_x25);
        _objc_release(unaff_x26);
        _objc_release(ppuVar10);
        _objc_release(unaff_x28);
        _objc_release(param_6);
        param_4 = puStack_238;
        if ((int)param_5 == 7) goto LAB_105e02c0c;
        ppuVar10 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        param_5 = ppuVar10;
        func_0x00010c27dd80();
        _objc_release(ppuVar10);
        unaff_x28 = ppuVar12;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        if ((int)param_5 == 5) {
          ppuVar10 = unaff_x28;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuStack_240);
          ppuVar12 = param_5;
          ppuStack_240 = ppuVar10;
LAB_105e02d78:
          _objc_release(unaff_x28);
          param_5 = ppuVar12;
        }
        else {
          ppuVar10 = unaff_x28;
          func_0x00010c27dd80();
          _objc_release(unaff_x28);
          if ((int)ppuVar10 == 4) {
            ppuVar10 = (undefined **)PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
            _objc_alloc();
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar12;
            func_0x00010bfe5da0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04e8c0();
            param_2 = (undefined **)0x1;
            unaff_x28 = ppuVar10;
            func_0x000108f92780();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar10);
            _objc_release(ppuVar7);
            _objc_release(ppuVar12);
            func_0x00010befa120(puStack_248);
            goto LAB_105e02d78;
          }
        }
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (param_3 != unaff_x21);
      param_3 = ppuStack_220;
      func_0x00010bf52a60();
    } while (param_3 != (undefined **)0x0);
  }
  _objc_release(ppuStack_220);
  ppuVar8 = ppuStack_260;
  func_0x00010be9f200(ppuStack_260);
  ppuVar10 = ppuStack_250;
  ppuVar12 = ppuStack_250;
  func_0x00010c104900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24bb20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  ppuStack_220 = ppuVar10;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar10;
  func_0x00010bf52a60();
  if (ppuVar7 != (undefined **)0x0) {
    lVar9 = *plStack_200;
    do {
      ppuVar13 = (undefined **)0x0;
      do {
        if (*plStack_200 != lVar9) {
          _objc_enumerationMutation(ppuVar10);
        }
        uVar11 = *(undefined8 *)(lStack_208 + (long)ppuVar13 * 8);
        puVar4 = PTR_PTR_1126c0e38;
        _objc_alloc(PTR_PTR_1126c0e38);
        func_0x00010bfdedc0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c019f00(puVar4);
        _objc_release(uVar11);
        func_0x00010befa120(param_1);
        _objc_release(puVar4);
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar7 != ppuVar13);
      ppuVar7 = ppuVar10;
      func_0x00010bf52a60();
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(ppuVar10);
  ppuVar10 = ppuVar12;
  func_0x00010c15a0e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
LAB_105e03138:
    puStack_268 = (undefined *)0x0;
    unaff_x24 = ppuStack_250;
  }
  else {
    ppuVar7 = ppuVar10;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar7 == (undefined **)0x0) goto LAB_105e03138;
    ppuVar7 = ppuVar10;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar7;
    func_0x00010c067ec0();
    _objc_release(ppuVar7);
    unaff_x24 = ppuStack_250;
    iVar6 = (int)ppuVar13;
    if ((iVar6 == 5) || (iVar6 == 2)) {
      ppuVar7 = ppuVar10;
      func_0x00010bf85d80(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = (undefined **)0x0;
    }
    _objc_retain(ppuVar7);
    if ((iVar6 == 5) || (iVar6 == 2)) {
      _objc_release(ppuVar7);
    }
    puVar4 = PTR_PTR_1126c4ea0;
    _objc_alloc();
    ppuVar13 = ppuVar10;
    func_0x00010c116a20(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ae60();
    puStack_268 = puVar4;
    _objc_release(ppuVar13);
    _objc_release(ppuVar7);
  }
  ppuVar7 = unaff_x24;
  func_0x00010c104600(unaff_x24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1054a0();
  _objc_release(ppuVar7);
  ppuVar7 = unaff_x24;
  func_0x00010c104600(unaff_x24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105480();
  _objc_release(ppuVar7);
  puVar4 = PTR_PTR_1126c4ea8;
  _objc_alloc();
  func_0x00010c04b260();
  ppuVar7 = ppuVar12;
  puStack_270 = puVar4;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
LAB_105e0335c:
    ppuStack_278 = (undefined **)0x0;
  }
  else {
    puVar3 = ppuVar8[1];
    func_0x00010c259540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c23f6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    if (puVar4 == (undefined *)0x0) goto LAB_105e0335c;
    ppuVar7 = ppuVar12;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = ppuVar8[1];
    func_0x00010c259540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c23f6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar7;
    func_0x00010853f90c(ppuVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar13;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = ppuVar8[1];
    ppuStack_278 = ppuVar7;
    func_0x00010c259540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c275800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar5 = puVar3;
    param_2 = (undefined **)PTR_DAT_1126a5230;
    func_0x00010010fab4();
    puVar4 = puVar3;
    if ((int)puVar5 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    func_0x00010befa940(puVar4);
    _objc_release(puVar4);
    _objc_release(ppuVar13);
  }
  ppuVar7 = ppuVar12;
  func_0x00010bfcd360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_280 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (ppuVar7 == (undefined **)0x0) {
    puStack_280 = (undefined *)0x0;
  }
  else {
    ppuVar7 = ppuVar12;
    func_0x00010bfcd360(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bf655e0(dVar16 / 1000.0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
  puVar4 = ppuVar8[6];
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8860();
  _objc_release(puVar4);
  *(undefined1 *)(ppuVar8 + 5) = 1;
  puVar3 = ppuVar8[4];
  puVar4 = PTR_PTR_1126c4eb0;
  _objc_opt_new(PTR_PTR_1126c4eb0);
  func_0x00010c0d9840(puVar3);
  _objc_release(puVar4);
  ppuVar8 = (undefined **)PTR_PTR_1126c4eb8;
  _objc_alloc();
  unaff_x26 = ppuStack_240;
  ppuStack_2a0 = ppuVar8;
  ppuStack_298 = ppuVar10;
  ppuStack_290 = ppuVar12;
  if (ppuStack_240 == (undefined **)0x0) {
    puStack_288 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    ppuStack_178 = ppuStack_240;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = puVar4;
  }
  ppuVar10 = unaff_x24;
  func_0x00010bf37820(unaff_x24);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuStack_220;
  unaff_x28 = ppuStack_220;
  func_0x00010bf6e620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar8;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = unaff_x24;
  func_0x00010c0c7800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar8;
  func_0x00010c22eae0();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110f12eb8;
  func_0x00010c07c240(ppuVar8);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_180 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a8 = ppuStack_258;
  puStack_2c0 = puStack_268;
  puStack_2b8 = puStack_280;
  puStack_2c8 = puStack_270;
  uStack_2d0 = SUB81(ppuVar13,0);
  ppuStack_2f0 = ppuStack_278;
  unaff_x21 = ppuStack_2a0;
  ppuStack_2e8 = unaff_x28;
  ppuStack_2e0 = ppuVar12;
  ppuStack_2d8 = ppuVar7;
  ppuStack_2b0 = unaff_x25;
  func_0x00010c043c00();
  _objc_release(unaff_x25);
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  _objc_release(unaff_x24);
  _objc_release(ppuVar12);
  _objc_release(unaff_x28);
  _objc_release(ppuVar10);
  if (unaff_x26 != (undefined **)0x0) {
    _objc_release(puStack_288);
  }
  param_6 = (undefined **)ppuStack_260[1];
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b5e0();
  _objc_release(param_6);
  _objc_release(unaff_x21);
  _objc_release(puStack_280);
  _objc_release(ppuStack_278);
  _objc_release(puStack_270);
  _objc_release(ppuStack_298);
  _objc_release(puStack_268);
  _objc_release(param_1);
  _objc_release(ppuStack_220);
  _objc_release(ppuStack_290);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(unaff_x26);
  _objc_release(puStack_248);
  _objc_release(puStack_218);
  ppuVar8 = ppuStack_250;
  param_5 = ppuStack_258;
  param_4 = puStack_238;
LAB_105e03674:
  param_3 = param_1;
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar12 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  pcVar15 = (code *)0x105e036c8;
  ___stack_chk_fail();
  pppuVar2 = &ppuStack_2f0;
SUB_105e036c8:
  do {
    *(undefined ***)((long)pppuVar2 + -0x60) = unaff_x28;
    *(undefined **)((long)pppuVar2 + -0x58) = param_4;
    *(undefined ***)((long)pppuVar2 + -0x50) = unaff_x26;
    *(undefined ***)((long)pppuVar2 + -0x48) = unaff_x25;
    *(undefined ***)((long)pppuVar2 + -0x40) = unaff_x24;
    *(undefined ***)((long)pppuVar2 + -0x38) = param_3;
    *(undefined ***)((long)pppuVar2 + -0x30) = param_5;
    *(undefined ***)((long)pppuVar2 + -0x28) = unaff_x21;
    *(undefined ***)((long)pppuVar2 + -0x20) = ppuVar8;
    *(undefined ***)((long)pppuVar2 + -0x18) = param_6;
    *(undefined1 **)((long)pppuVar2 + -0x10) = puVar14;
    *(code **)((long)pppuVar2 + -8) = pcVar15;
    puVar14 = (undefined1 *)((long)pppuVar2 + -0x10);
    *(undefined8 *)((long)pppuVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x21 = ppuVar12;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = unaff_x21;
    func_0x00010c27dd80();
    _objc_release(unaff_x21);
    ppuVar10 = (undefined **)PTR_PTR_1126b3558;
    param_3 = (undefined **)0x0;
    iVar6 = (int)ppuVar8;
    param_6 = ppuVar12;
    if (iVar6 < 6) {
      if (iVar6 == 1) {
        _objc_retain(ppuVar12);
        _objc_alloc();
        ppuVar8 = ppuVar12;
        func_0x00010bf96da0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar8;
        func_0x00010bfe5da0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0();
        _objc_release(ppuVar7);
        _objc_release(ppuVar8);
        unaff_x21 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc();
        param_5 = ppuVar12;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar12;
        func_0x00010c2711a0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        func_0x00010c01bce0();
        _objc_release(ppuVar8);
        goto LAB_105e03c78;
      }
      if (iVar6 == 2) {
        _objc_retain(ppuVar12);
        unaff_x28 = &PTR_PTR_1126b3000;
        puVar4 = PTR_PTR_1126b3558;
        _objc_alloc();
        ppuVar8 = ppuVar12;
        func_0x00010bf96da0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar8;
        func_0x00010bfe5da0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = &PTR_PTR_110cb2fd8;
        func_0x00010c03d4e0();
        _objc_release(ppuVar10);
        _objc_release(ppuVar8);
        ppuVar10 = &PTR_PTR_1126b3000;
        unaff_x21 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc();
        ppuVar8 = ppuVar12;
        func_0x00010c2711a0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)pppuVar2 + -0x140) = puVar4;
        ppuVar7 = unaff_x21;
        func_0x00010c01bce0();
        *(undefined ***)((long)pppuVar2 + -0x148) = ppuVar7;
        _objc_release(ppuVar8);
        param_5 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        ppuVar8 = ppuVar12;
        func_0x00010c0f4aa0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c0ecd60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        *(undefined8 *)((long)pppuVar2 + -0x108) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x110) = 0;
        *(undefined8 *)((long)pppuVar2 + -0xf8) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x100) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x128) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x130) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x118) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x120) = 0;
        *(undefined ***)((long)pppuVar2 + -0x138) = ppuVar12;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar12;
        func_0x00010bf52a60();
        if (ppuVar8 != (undefined **)0x0) {
          unaff_x21 = (undefined **)**(undefined8 **)((long)pppuVar2 + -0x120);
          unaff_x24 = &PTR____CFConstantStringClassReference_110f52c78;
          do {
            ppuVar7 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar2 + -0x120) != unaff_x21) {
                _objc_enumerationMutation(ppuVar12);
              }
              uVar11 = *(undefined8 *)(*(long *)((long)pppuVar2 + -0x128) + (long)ppuVar7 * 8);
              param_4 = PTR_PTR_1126b3558;
              _objc_alloc();
              func_0x00010bfe5da0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c03d4e0();
              _objc_release(uVar11);
              unaff_x26 = (undefined **)PTR_PTR_1126b3560;
              _objc_alloc();
              func_0x00010c01bce0();
              func_0x00010befa120(param_5);
              _objc_release(unaff_x26);
              _objc_release(param_4);
              ppuVar7 = (undefined **)((long)ppuVar7 + 1);
            } while (ppuVar8 != ppuVar7);
            ppuVar8 = ppuVar12;
            func_0x00010bf52a60();
            unaff_x25 = (undefined **)0x0;
          } while (ppuVar8 != (undefined **)0x0);
        }
        _objc_release(ppuVar12);
        param_3 = (undefined **)PTR_PTR_1126b3568;
        _objc_alloc();
        uVar11 = *(undefined8 *)((long)pppuVar2 + -0x148);
        func_0x00010c03d400();
        _objc_release(param_5);
        _objc_release(uVar11);
        _objc_release(*(undefined8 *)((long)pppuVar2 + -0x140));
        ppuVar8 = *(undefined ***)((long)pppuVar2 + -0x138);
        ppuVar12 = ppuVar8;
        goto LAB_105e03d48;
      }
    }
    else {
      if (iVar6 == 6) {
        _objc_retain(ppuVar12);
        ppuVar10 = ppuVar12;
        func_0x00010c259520();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar10 == (undefined **)0x0) {
          param_3 = (undefined **)0x0;
        }
        else {
          unaff_x21 = (undefined **)PTR_PTR_1126b3558;
          _objc_alloc();
          ppuVar8 = ppuVar12;
          func_0x00010bf96da0(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar8;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar10;
          func_0x00010c25b720();
          if ((uint)ppuVar13 < 0xc) {
            unaff_x24 = *(undefined ***)(&PTR_PTR_1108eaac0)[(ulong)ppuVar13 & 0xffffffff];
            _objc_retain(unaff_x24);
          }
          func_0x00010c03d4e0();
          _objc_release(unaff_x24);
          _objc_release(ppuVar7);
          _objc_release(ppuVar8);
          ppuVar8 = ppuVar10;
          func_0x00010bf628a0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar8 == (undefined **)0x0) {
            param_5 = (undefined **)0x0;
          }
          else {
            ppuVar7 = ppuVar10;
            func_0x00010bf628a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar7;
            func_0x00010bf62820();
            uVar1 = (int)ppuVar13 - 1;
            param_5 = (undefined **)0x0;
            if (uVar1 < 7) {
              param_5 = (undefined **)((ulong)uVar1 + 1);
            }
            func_0x000108f42d24();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar7);
          }
          _objc_release(ppuVar8);
          unaff_x25 = (undefined **)PTR_PTR_1126b3560;
          _objc_alloc();
          unaff_x24 = ppuVar12;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bce0();
          _objc_release(unaff_x24);
          param_3 = (undefined **)PTR_PTR_1126b3568;
          _objc_alloc();
          func_0x00010c03d400();
          _objc_release(unaff_x25);
          _objc_release(param_5);
          _objc_release(unaff_x21);
        }
        _objc_release(ppuVar10);
        ppuVar8 = ppuVar12;
      }
      else {
        ppuVar7 = ppuVar12;
        if (iVar6 == 7) {
          _objc_retain(ppuVar12);
          _objc_alloc();
          func_0x00010bf96da0(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar6 != 10) goto LAB_105e03d4c;
          _objc_retain(ppuVar12);
          _objc_alloc();
          func_0x00010bf96da0(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c03d4e0();
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        unaff_x21 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc();
        param_5 = ppuVar12;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        func_0x00010c01bce0();
LAB_105e03c78:
        _objc_release(param_5);
        param_3 = (undefined **)PTR_PTR_1126b3568;
        _objc_alloc();
        func_0x00010c03d400();
        _objc_release(unaff_x21);
        ppuVar8 = ppuVar10;
      }
LAB_105e03d48:
      _objc_release(ppuVar8);
      param_6 = ppuVar12;
      ppuVar8 = ppuVar10;
    }
LAB_105e03d4c:
    ppuVar12 = param_2;
    _objc_release(param_6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar2 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
      return;
    }
    pcVar15 = FUN_105e03d94;
    ___stack_chk_fail();
    pppuVar2 = (undefined ***)((long)pppuVar2 + -0x150);
    param_2 = ppuVar12;
  } while( true );
}



/* Entry: 105e03d94; end: 105e03d9b;  */

void FUN_105e03d94(undefined8 param_1,undefined **param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **unaff_x19;
  int iVar7;
  undefined **ppuVar8;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar9;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar4 = param_2;
    _objc_retain();
    unaff_x21 = param_2;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x21;
    func_0x00010c27dd80();
    _objc_release(unaff_x21);
    ppuVar8 = (undefined **)PTR_PTR_1126b3558;
    unaff_x23 = (undefined *)0x0;
    iVar7 = (int)unaff_x20;
    unaff_x19 = param_2;
    if (iVar7 < 6) {
      if (iVar7 == 1) {
        _objc_retain(param_2);
        _objc_alloc();
        ppuVar6 = param_2;
        func_0x00010bf96da0(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar6;
        func_0x00010bfe5da0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0();
        _objc_release(ppuVar5);
        _objc_release(ppuVar6);
        unaff_x21 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc();
        unaff_x22 = param_2;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_2;
        func_0x00010c2711a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        func_0x00010c01bce0();
        _objc_release(ppuVar6);
        goto LAB_105e03c78;
      }
      if (iVar7 == 2) {
        _objc_retain(param_2);
        unaff_x28 = &PTR_PTR_1126b3000;
        puVar2 = PTR_PTR_1126b3558;
        _objc_alloc();
        ppuVar8 = param_2;
        func_0x00010bf96da0(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar8;
        func_0x00010bfe5da0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = &PTR_PTR_110cb2fd8;
        func_0x00010c03d4e0();
        _objc_release(ppuVar6);
        _objc_release(ppuVar8);
        ppuVar8 = &PTR_PTR_1126b3000;
        unaff_x21 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc();
        ppuVar6 = param_2;
        func_0x00010c2711a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x140) = puVar2;
        ppuVar5 = unaff_x21;
        func_0x00010c01bce0();
        *(undefined ***)((long)register0x00000008 + -0x148) = ppuVar5;
        _objc_release(ppuVar6);
        unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        ppuVar6 = param_2;
        func_0x00010c0f4aa0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c0ecd60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined ***)((long)register0x00000008 + -0x138) = param_2;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_2;
        func_0x00010bf52a60();
        if (ppuVar6 != (undefined **)0x0) {
          unaff_x21 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x120);
          unaff_x24 = &PTR____CFConstantStringClassReference_110f52c78;
          do {
            ppuVar5 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x120) != unaff_x21) {
                _objc_enumerationMutation(param_2);
              }
              uVar9 = *(undefined8 *)
                       (*(long *)((long)register0x00000008 + -0x128) + (long)ppuVar5 * 8);
              unaff_x27 = PTR_PTR_1126b3558;
              _objc_alloc();
              func_0x00010bfe5da0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c03d4e0();
              _objc_release(uVar9);
              unaff_x26 = PTR_PTR_1126b3560;
              _objc_alloc();
              func_0x00010c01bce0();
              func_0x00010befa120(unaff_x22);
              _objc_release(unaff_x26);
              _objc_release(unaff_x27);
              ppuVar5 = (undefined **)((long)ppuVar5 + 1);
            } while (ppuVar6 != ppuVar5);
            ppuVar6 = param_2;
            func_0x00010bf52a60();
            unaff_x25 = (undefined *)0x0;
          } while (ppuVar6 != (undefined **)0x0);
        }
        _objc_release(param_2);
        unaff_x23 = PTR_PTR_1126b3568;
        _objc_alloc();
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x148);
        func_0x00010c03d400();
        _objc_release(unaff_x22);
        _objc_release(uVar9);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
        ppuVar6 = *(undefined ***)((long)register0x00000008 + -0x138);
        param_2 = ppuVar6;
        goto LAB_105e03d48;
      }
    }
    else {
      if (iVar7 == 6) {
        _objc_retain(param_2);
        ppuVar8 = param_2;
        func_0x00010c259520();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar8 == (undefined **)0x0) {
          unaff_x23 = (undefined *)0x0;
        }
        else {
          unaff_x21 = (undefined **)PTR_PTR_1126b3558;
          _objc_alloc();
          ppuVar6 = param_2;
          func_0x00010bf96da0(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar6;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar8;
          func_0x00010c25b720();
          if ((uint)ppuVar3 < 0xc) {
            unaff_x24 = *(undefined ***)(&PTR_PTR_1108eaac0)[(ulong)ppuVar3 & 0xffffffff];
            _objc_retain(unaff_x24);
          }
          func_0x00010c03d4e0();
          _objc_release(unaff_x24);
          _objc_release(ppuVar5);
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar8;
          func_0x00010bf628a0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar6 == (undefined **)0x0) {
            unaff_x22 = (undefined **)0x0;
          }
          else {
            ppuVar5 = ppuVar8;
            func_0x00010bf628a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar5;
            func_0x00010bf62820();
            uVar1 = (int)ppuVar3 - 1;
            unaff_x22 = (undefined **)0x0;
            if (uVar1 < 7) {
              unaff_x22 = (undefined **)((ulong)uVar1 + 1);
            }
            func_0x000108f42d24();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar5);
          }
          _objc_release(ppuVar6);
          unaff_x25 = PTR_PTR_1126b3560;
          _objc_alloc();
          unaff_x24 = param_2;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bce0();
          _objc_release(unaff_x24);
          unaff_x23 = PTR_PTR_1126b3568;
          _objc_alloc();
          func_0x00010c03d400();
          _objc_release(unaff_x25);
          _objc_release(unaff_x22);
          _objc_release(unaff_x21);
        }
        _objc_release(ppuVar8);
        ppuVar6 = param_2;
      }
      else {
        ppuVar6 = param_2;
        if (iVar7 == 7) {
          _objc_retain(param_2);
          _objc_alloc();
          func_0x00010bf96da0(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar6;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar7 != 10) goto LAB_105e03d4c;
          _objc_retain(param_2);
          _objc_alloc();
          func_0x00010bf96da0(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar6;
          func_0x00010bfe5da0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c03d4e0();
        _objc_release(ppuVar5);
        _objc_release(ppuVar6);
        unaff_x21 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc();
        unaff_x22 = param_2;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        func_0x00010c01bce0();
LAB_105e03c78:
        _objc_release(unaff_x22);
        unaff_x23 = PTR_PTR_1126b3568;
        _objc_alloc();
        func_0x00010c03d400();
        _objc_release(unaff_x21);
        ppuVar6 = ppuVar8;
      }
LAB_105e03d48:
      _objc_release(ppuVar6);
      unaff_x19 = param_2;
      unaff_x20 = ppuVar8;
    }
LAB_105e03d4c:
    param_2 = ppuVar4;
    _objc_release(unaff_x19);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
      return;
    }
    unaff_x30 = FUN_105e03d94;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
  } while( true );
}



/* Entry: 105e03d9c; end: 105e03f7b; -[SCComposerSendToScopeDelegateImpl _sendFriendRequestsIfNecessaryToUserIds:] */

void FUN_105e03d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105e03eb4;
  puStack_70 = &UNK_1108475b0;
  uStack_68 = uVar2;
  uStack_60 = param_3;
  uStack_58 = uVar4;
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105e03f7c; end: 105e04207;  */

void FUN_105e03f7c(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_2;
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_2);
    ppuVar1 = param_2;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar10 = *plStack_120;
      do {
        ppuVar11 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          lVar9 = *(long *)(lStack_128 + (long)ppuVar11 * 8);
          lVar2 = lVar9;
          func_0x00010bfb8280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010c2923e0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            func_0x00010c1d0560(puVar6);
          }
          else {
            func_0x00010befa120(puVar8);
          }
          _objc_release(lVar9);
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar1 != ppuVar11);
        ppuVar1 = param_2;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(param_2);
    func_0x00010c0ce860(*(undefined8 *)(param_1 + 0x20));
    lVar10 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf00560(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_105e04208;
      puStack_140 = &UNK_1108eaa90;
      _objc_retain(puVar6);
      ppuVar7 = &puStack_158;
      uVar4 = uVar3;
      puStack_138 = puVar6;
      func_0x000100504554(uVar3);
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126ae5c0;
      func_0x00010c0d1b80(PTR_PTR_1126ae5c0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960();
      _objc_release(uVar3);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puStack_138);
    }
    _objc_release(puVar6);
    _objc_release(puVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  if (ppuVar7 == (undefined **)0x0) {
LAB_105e042f4:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar6 = param_2[4];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b15c8;
    if (puVar6 == (undefined *)0x0) {
      _objc_retain(ppuVar7);
      _objc_alloc();
      func_0x00010c05c0e0();
      _objc_release(ppuVar7);
      puVar6 = puVar8;
      if (puVar8 == (undefined *)0x0) goto LAB_105e042f4;
    }
    puVar8 = PTR_PTR_1126b1940;
    _objc_alloc(PTR_PTR_1126b1940);
    func_0x00010901cb9c(puVar6);
    func_0x00010c048c40(puVar8);
    _objc_release(puVar6);
  }
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e04208; end: 105e04317;  */

void FUN_105e04208(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
LAB_105e042f4:
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b15c8;
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_2);
      _objc_alloc();
      func_0x00010c05c0e0();
      _objc_release(param_2);
      puVar1 = puVar2;
      if (puVar2 == (undefined *)0x0) goto LAB_105e042f4;
    }
    puVar2 = PTR_PTR_1126b1940;
    _objc_alloc(PTR_PTR_1126b1940);
    func_0x00010901cb9c(puVar1);
    func_0x00010c048c40(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e04318; end: 105e0436b; -[SCComposerSendToScopeDelegateImpl .cxx_destruct] */

void FUN_105e04318(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e0436c; end: 105e045d7; -[SCSendToEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e0436c(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = (long)_DAT_1127370fc;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c239cc0();
  if ((int)lVar2 == 0) {
    uVar3 = param_1;
    func_0x00010be43ae0();
    _objc_release(lVar1);
    if ((int)uVar3 != 0) goto LAB_105e04458;
  }
  else {
    uVar3 = param_1;
    func_0x00010bee6840();
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
LAB_105e04458:
      puVar4 = PTR_PTR_1126c4ec0;
      _objc_alloc();
      lVar1 = param_1 + lVar13;
      _objc_loadWeakRetained();
      lVar2 = param_1 + (long)_DAT_112737100;
      _objc_loadWeakRetained(lVar2);
      lVar5 = param_1 + (long)_DAT_112737104;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + (long)_DAT_112737108;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010c243020();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1 + (long)_DAT_11273710c;
      _objc_loadWeakRetained(lVar9);
      lVar10 = lVar9;
      func_0x00010c089fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0444c0(puVar4,param_2,lVar1,lVar2,lVar6,lVar8,lVar10);
      lVar14 = (long)_DAT_112737110;
      uVar12 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar4;
      _objc_release(uVar12);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar12 = *(undefined8 *)(param_1 + (long)_DAT_112737114);
      puVar11 = PTR_PTR_1126c4ec8;
      _objc_alloc(PTR_PTR_1126c4ec8);
      puVar4 = (undefined *)(param_1 + lVar13);
      _objc_loadWeakRetained(puVar4);
      func_0x00010c044480(puVar11,param_2,puVar4,*(undefined8 *)(param_1 + lVar14));
      func_0x00010bf9d620(uVar12,param_2,puVar11);
      _objc_release(puVar11);
      goto LAB_105e045b4;
    }
  }
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c4ed0;
  _objc_alloc(PTR_PTR_1126c4ed0);
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  func_0x00010c0444a0(puVar4,param_2,lVar13,0);
  _objc_release(lVar13);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + (long)_DAT_112737118),param_2,puVar4);
LAB_105e045b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e045d8; end: 105e04653; -[SCSendToEntryPoint _isSendToRewriteEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e045d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11273711c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07d820();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 105e04654; end: 105e046bf; -[SCSendToEntryPoint _useSendToRewriteForTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e04654(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112737104;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf1f440(lVar1,param_2,&PTR____CFConstantStringClassReference_110e2b678,0,0);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 105e046c0; end: 105e04757; -[SCSendToEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e046c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273711c);
  _objc_destroyWeak(param_1 + _DAT_11273710c);
  _objc_storeStrong(param_1 + _DAT_112737114,0);
  _objc_storeStrong(param_1 + _DAT_112737118,0);
  _objc_destroyWeak(param_1 + _DAT_112737108);
  _objc_destroyWeak(param_1 + _DAT_112737100);
  _objc_destroyWeak(param_1 + _DAT_112737104);
  _objc_destroyWeak(param_1 + _DAT_1127370fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737110,0);
  return;
}



/* Entry: 105e04758; end: 105e06523; -[SCSendToInternalEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e04758(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
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
  undefined *puVar60;
  long lVar61;
  undefined *puVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  undefined *puVar119;
  undefined8 uVar120;
  long lVar121;
  undefined8 uVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  ulong uVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lStack_1d8;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1;
  func_0x00010beb51c0();
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x00010bdd0f40(), (int)lVar1 == 0)) {
    if (param_1 == 0) {
      uVar127 = 0;
      goto LAB_105e047fc;
    }
  }
  else {
    lVar1 = param_1 + _DAT_112737120;
    _objc_loadWeakRetained(lVar1);
    lVar121 = lVar1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc40();
    _objc_release(lVar121);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + _DAT_112737124) = 1;
  }
  uVar127 = param_1 + _DAT_1127372b0;
  _objc_loadWeakRetained();
LAB_105e047fc:
  uVar2 = uVar127;
  func_0x00010c072b80();
  _objc_release(uVar127);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_1 + _DAT_112737128;
    _objc_loadWeakRetained();
    lVar121 = lVar1;
    func_0x00010c24b780();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8 = lVar121;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar121);
    _objc_release(lVar1);
  }
  else {
    lStack_1d8 = 0;
  }
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_1 + _DAT_11273712c;
  _objc_loadWeakRetained();
  lVar121 = lVar1;
  func_0x00010c15d320();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = (long)_DAT_112737130;
  uVar120 = *(undefined8 *)(param_1 + lVar129);
  *(long *)(param_1 + lVar129) = lVar121;
  _objc_release(uVar120);
  _objc_release(lVar1);
  uVar120 = *(undefined8 *)(param_1 + lVar129);
  _objc_retain(uVar120);
  lVar121 = (long)_DAT_112737134;
  lVar1 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar129 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar128 = lVar129;
  func_0x00010010fab4(lVar129,PTR_DAT_1126a4f20);
  lVar1 = lVar129;
  if ((int)lVar128 == 0) {
    lVar1 = 0;
  }
  _objc_retain();
  _objc_release(lVar129);
  lVar128 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar3 = lVar128;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar128);
  if (lVar1 == 0) {
    func_0x00010beca8a0(param_1);
  }
  else {
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar122 = *(undefined8 *)(param_1 + _DAT_112737138);
    *(undefined **)(param_1 + _DAT_112737138) = puVar4;
    _objc_release(uVar122);
    func_0x00010c07ab20(lVar129);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105e06524;
    puStack_a0 = &UNK_110858b40;
    _objc_copyWeak(auStack_88,auStack_80);
    lVar128 = lVar129;
    lStack_98 = lVar3;
    uStack_90 = uVar120;
    func_0x00010c25ff60(lVar129);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar128);
    _objc_release(lVar129);
    _objc_destroyWeak(auStack_88);
  }
  puVar5 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  puVar6 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar122 = *(undefined8 *)(param_1 + _DAT_11273713c);
  *(undefined **)(param_1 + _DAT_11273713c) = puVar6;
  _objc_release(uVar122);
  _objc_retain(puVar6);
  puVar7 = PTR_PTR_1126c4ed8;
  _objc_alloc();
  uVar122 = uVar120;
  func_0x00010c269d40(uVar120);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar122;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034960();
  _objc_release(uVar8);
  _objc_release(uVar122);
  lVar9 = param_1;
  func_0x00010be9cdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010be34cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = param_1 + _DAT_112737140;
  _objc_loadWeakRetained();
  lVar11 = lVar129;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar130 = (long)_DAT_112737144;
  lVar129 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar12 = lVar129;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar123 = (long)_DAT_112737148;
  lVar129 = param_1 + lVar123;
  _objc_loadWeakRetained();
  lVar128 = lVar129;
  func_0x00010c259660();
  _objc_retainAutoreleasedReturnValue();
  uVar122 = *(undefined8 *)(param_1 + _DAT_11273714c);
  *(long *)(param_1 + _DAT_11273714c) = lVar128;
  _objc_release(uVar122);
  _objc_release(lVar129);
  lVar129 = (long)_DAT_112737150;
  _objc_retain(lVar12);
  uVar122 = *(undefined8 *)(param_1 + lVar129);
  *(long *)(param_1 + lVar129) = lVar12;
  _objc_release(uVar122);
  puVar13 = PTR_PTR_1126c24f8;
  _objc_alloc();
  lVar132 = (long)_DAT_112737154;
  lVar129 = param_1 + lVar132;
  _objc_loadWeakRetained(lVar129);
  func_0x00010c049540();
  uVar122 = *(undefined8 *)(param_1 + _DAT_112737158);
  *(undefined **)(param_1 + _DAT_112737158) = puVar13;
  _objc_release(uVar122);
  _objc_retain(puVar13);
  _objc_release(lVar129);
  lVar129 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar14 = lVar129;
  func_0x00010c0dafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105e06570;
  puStack_d0 = &UNK_1108eab20;
  puVar15 = PTR_PTR_1126ae720;
  lStack_c8 = lVar14;
  puStack_c0 = puVar6;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar122 = *(undefined8 *)(param_1 + _DAT_11273715c);
  *(undefined **)(param_1 + _DAT_11273715c) = puVar15;
  _objc_release(uVar122);
  _objc_retain(puVar15);
  lVar129 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar16 = lVar129;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_112737160;
  _objc_loadWeakRetained();
  lVar17 = lVar129;
  func_0x00010c0c7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar124 = (long)_DAT_112737164;
  lVar129 = param_1 + lVar124;
  _objc_loadWeakRetained();
  lVar18 = lVar129;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  puVar19 = PTR_PTR_1126c4ee8;
  _objc_alloc();
  lVar84 = (long)_DAT_11273718c;
  lVar129 = param_1 + lVar84;
  _objc_loadWeakRetained();
  lVar87 = lVar129;
  func_0x00010c15a680();
  _objc_retainAutoreleasedReturnValue();
  lVar125 = (long)_DAT_112737198;
  lVar128 = param_1 + lVar125;
  _objc_loadWeakRetained();
  lVar126 = lVar128;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar131 = param_1 + _DAT_11273719c;
  _objc_loadWeakRetained();
  lVar95 = lVar131;
  func_0x00010c15cec0();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar93 = lVar130;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = lVar3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1 + _DAT_1127371a0;
  _objc_loadWeakRetained();
  lVar72 = param_1 + _DAT_1127371a4;
  _objc_loadWeakRetained();
  lVar74 = param_1 + _DAT_1127371a8;
  _objc_loadWeakRetained();
  lVar76 = param_1 + _DAT_1127371ac;
  _objc_loadWeakRetained();
  lVar78 = param_1 + _DAT_1127371b0;
  _objc_loadWeakRetained();
  lVar80 = param_1 + _DAT_1127371b4;
  _objc_loadWeakRetained();
  func_0x00010c007fc0();
  _objc_release(lVar80);
  _objc_release(lVar78);
  _objc_release(lVar76);
  _objc_release(lVar74);
  _objc_release(lVar72);
  _objc_release(lVar70);
  _objc_release(lVar90);
  _objc_release(lVar93);
  _objc_release(lVar130);
  _objc_release(lVar95);
  _objc_release(lVar131);
  _objc_release(lVar126);
  _objc_release(lVar128);
  _objc_release(lVar87);
  _objc_release(lVar129);
  lVar131 = (long)_DAT_1127371b8;
  lVar129 = param_1 + lVar131;
  _objc_loadWeakRetained();
  lVar20 = lVar129;
  func_0x00010c089fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar128 = (long)_DAT_1127371bc;
  lVar129 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar21 = lVar129;
  func_0x00010c246c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar22 = lVar129;
  func_0x00010c244b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar23 = lVar129;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar128 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar24 = lVar128;
  func_0x00010c244ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar128);
  lVar129 = param_1 + lVar84;
  _objc_loadWeakRetained();
  lVar25 = lVar129;
  func_0x00010c15a680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371c0;
  _objc_loadWeakRetained();
  lVar26 = lVar129;
  func_0x00010c15a920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar128 = (long)_DAT_1127371c4;
  lVar129 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar27 = lVar129;
  func_0x00010c15aac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar128 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar28 = lVar128;
  func_0x00010c15aa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar128);
  lVar130 = (long)_DAT_1127371c8;
  lVar129 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar29 = lVar129;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar30 = lVar129;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar31 = lVar129;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar32 = lVar129;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar128 = (long)_DAT_1127371cc;
  lVar129 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar33 = lVar129;
  func_0x00010c0ee260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar128 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar34 = lVar128;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar128);
  lVar124 = param_1 + lVar124;
  _objc_loadWeakRetained();
  lVar35 = lVar124;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar124);
  lVar129 = param_1 + _DAT_1127371d0;
  _objc_loadWeakRetained();
  lVar36 = lVar129;
  func_0x00010c0890a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371d4;
  _objc_loadWeakRetained();
  lVar37 = lVar129;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371d8;
  _objc_loadWeakRetained();
  lVar38 = lVar129;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371dc;
  _objc_loadWeakRetained();
  lVar39 = lVar129;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371e0;
  _objc_loadWeakRetained();
  lVar40 = lVar129;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar41 = lVar129;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371e4;
  _objc_loadWeakRetained();
  lVar42 = lVar129;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar43 = lVar129;
  func_0x00010c105f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar44 = lVar129;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar45 = lVar129;
  func_0x00010bf4c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar46 = lVar129;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar47 = lVar129;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar48 = lVar129;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  _objc_retain(uVar120);
  lVar129 = param_1 + _DAT_1127371e8;
  _objc_loadWeakRetained();
  lVar128 = lVar129;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar128;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar128);
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar50 = lVar129;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371ec;
  _objc_loadWeakRetained();
  lVar51 = lVar129;
  func_0x00010bfb1c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar131 = param_1 + lVar131;
  _objc_loadWeakRetained();
  lVar52 = lVar131;
  func_0x00010c15d620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar131);
  lVar132 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar53 = lVar132;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar132);
  lVar129 = param_1 + _DAT_1127371f0;
  _objc_loadWeakRetained();
  lVar54 = lVar129;
  func_0x00010c154220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371f4;
  _objc_loadWeakRetained();
  lVar128 = lVar129;
  func_0x00010bf22700();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar128;
  (**(code **)(lVar128 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar128);
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_1127371f8;
  _objc_loadWeakRetained();
  lVar56 = lVar129;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar130 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar57 = lVar130;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar130);
  lVar129 = param_1 + _DAT_1127371fc;
  _objc_loadWeakRetained();
  lVar58 = lVar129;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  func_0x00010c076260();
  _objc_release(lVar129);
  lVar129 = param_1 + _DAT_112737200;
  _objc_loadWeakRetained();
  lVar59 = lVar129;
  func_0x00010bf4a5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  puVar60 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  lVar129 = lVar12;
  func_0x000108f3e0a0();
  lVar84 = param_1 + lVar84;
  _objc_loadWeakRetained();
  lVar61 = lVar84;
  func_0x00010c15a680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar84);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105e065a0;
  puStack_128 = &UNK_1108eab50;
  puVar62 = PTR_PTR_1126ae720;
  lStack_120 = lVar53;
  lStack_118 = lVar61;
  lStack_110 = lVar36;
  lStack_108 = lVar49;
  puStack_100 = puVar5;
  puStack_f8 = puVar60;
  lStack_f0 = lVar129;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = param_1 + _DAT_112737204;
  _objc_loadWeakRetained();
  lVar63 = lVar129;
  func_0x00010c15d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar129 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar128 = lVar129;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2312a0();
  _objc_release(lVar128);
  _objc_release(lVar129);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_148,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = param_1 + lVar123;
  _objc_loadWeakRetained();
  lVar64 = lVar123;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar123);
  lVar129 = param_1 + _DAT_112737208;
  _objc_loadWeakRetained();
  lVar65 = lVar129;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar129);
  lVar66 = param_1;
  func_0x00010be1aee0();
  _objc_retainAutoreleasedReturnValue();
  puVar119 = PTR_PTR_1126c4ef8;
  _objc_alloc();
  lVar67 = lVar59;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b940();
  lVar129 = param_1 + _DAT_11273720c;
  _objc_loadWeakRetained();
  lVar68 = lVar129;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar128 = param_1 + _DAT_112737210;
  _objc_loadWeakRetained();
  lVar131 = param_1 + _DAT_112737214;
  _objc_loadWeakRetained();
  lVar130 = param_1 + _DAT_112737218;
  _objc_loadWeakRetained();
  lVar69 = lVar130;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1 + _DAT_11273721c;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010c0e1880();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar73 = lVar72;
  func_0x00010bf8cc00();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + _DAT_112737220;
  _objc_loadWeakRetained();
  lVar75 = lVar74;
  func_0x00010c243020();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + _DAT_112737224;
  _objc_loadWeakRetained();
  lVar77 = lVar76;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1 + _DAT_112737228;
  _objc_loadWeakRetained();
  lVar79 = lVar78;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = param_1 + _DAT_11273722c;
  _objc_loadWeakRetained();
  lVar81 = lVar80;
  func_0x00010c24be40();
  _objc_retainAutoreleasedReturnValue();
  lVar124 = param_1 + _DAT_112737230;
  _objc_loadWeakRetained();
  lVar82 = lVar124;
  func_0x00010c24c260();
  _objc_retainAutoreleasedReturnValue();
  lVar132 = param_1 + _DAT_112737234;
  _objc_loadWeakRetained();
  lVar83 = lVar132;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + _DAT_11273723c;
  _objc_loadWeakRetained();
  lVar85 = lVar84;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = (long)_DAT_112737240;
  lVar123 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar86 = lVar123;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar87 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar88 = lVar87;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar89 = lVar126;
  func_0x00010c0ca880();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar91 = lVar90;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = lVar91;
  func_0x00010c1298e0();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = param_1 + _DAT_112737244;
  _objc_loadWeakRetained();
  lVar94 = lVar93;
  func_0x00010c1228a0();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = param_1 + _DAT_112737248;
  _objc_loadWeakRetained();
  lVar96 = lVar95;
  func_0x00010bfa2a40();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1 + _DAT_11273724c;
  _objc_loadWeakRetained();
  lVar98 = lVar97;
  func_0x00010c2627a0();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = param_1 + _DAT_112737250;
  _objc_loadWeakRetained();
  lVar100 = param_1 + _DAT_112737254;
  _objc_loadWeakRetained();
  lVar101 = param_1 + _DAT_112737258;
  _objc_loadWeakRetained();
  lVar102 = param_1 + _DAT_11273725c;
  _objc_loadWeakRetained();
  lVar103 = param_1 + _DAT_112737260;
  _objc_loadWeakRetained();
  lVar104 = lVar103;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar125 = param_1 + lVar125;
  _objc_loadWeakRetained();
  lVar105 = lVar125;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar106 = param_1 + _DAT_112737268;
  _objc_loadWeakRetained();
  lVar107 = lVar106;
  func_0x00010c15d240();
  _objc_retainAutoreleasedReturnValue();
  lVar108 = param_1 + _DAT_112737270;
  _objc_loadWeakRetained();
  lVar109 = lVar108;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar110 = param_1 + _DAT_112737274;
  _objc_loadWeakRetained();
  lVar111 = lVar110;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1 + lVar121;
  _objc_loadWeakRetained();
  func_0x00010c239cc0();
  lVar112 = param_1 + _DAT_112737278;
  _objc_loadWeakRetained();
  lVar113 = param_1 + _DAT_11273727c;
  _objc_loadWeakRetained();
  lVar114 = param_1 + _DAT_112737280;
  _objc_loadWeakRetained();
  lVar115 = lVar114;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar116 = param_1 + _DAT_112737284;
  _objc_loadWeakRetained();
  lVar117 = lVar116;
  func_0x00010bf5b4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar118 = param_1 + _DAT_112737288;
  _objc_loadWeakRetained();
  func_0x00010c0408c0();
  lVar133 = (long)_DAT_11273728c;
  uVar122 = *(undefined8 *)(param_1 + lVar133);
  *(undefined **)(param_1 + lVar133) = puVar119;
  _objc_release(uVar122);
  _objc_release(lVar118);
  _objc_release(lVar117);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar114);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar121);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(lVar109);
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar125);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar126);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar123);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar132);
  _objc_release(lVar82);
  _objc_release(lVar124);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar130);
  _objc_release(lVar131);
  _objc_release(lVar128);
  _objc_release(lVar68);
  _objc_release(lVar129);
  _objc_release(lVar67);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar133));
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_148);
  _objc_release(lVar63);
  _objc_release(puVar62);
  _objc_release(lVar61);
  _objc_release(puVar60);
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
  _objc_release(uVar120);
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
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar120);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_1d8);
  return;
}



/* Entry: 105e06524; end: 105e0662b;  */

void FUN_105e06524(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010beca8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105e0662c; end: 105e06d77; -[SCSendToInternalEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e0662c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  long lStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long *plStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + _DAT_112737124) == '\x01') {
    lVar13 = param_1 + _DAT_112737120;
    _objc_loadWeakRetained(lVar13);
    lVar3 = lVar13;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112737134;
    _objc_loadWeakRetained(lVar2);
    lVar9 = lVar2;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247a40();
    func_0x00010c24fc40(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar13);
  }
  lVar13 = param_1 + _DAT_11273718c;
  _objc_loadWeakRetained();
  lVar2 = lVar13;
  func_0x00010c15a680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(char *)(param_1 + _DAT_112737290) == '\x01') {
    _dispatch_group_create();
    _dispatch_group_enter();
    puStack_118 = puVar15;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105e06d78;
    puStack_100 = &UNK_110842e18;
    _objc_retain(lVar13);
    lStack_f8 = lVar13;
    func_0x00010be08320(param_1);
    _objc_release(lStack_f8);
  }
  else {
    lVar13 = 0;
  }
  lVar9 = (long)_DAT_11273728c;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010bf5a5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar2 != 0) {
    if (lVar13 == 0) {
      _dispatch_group_create();
      lVar13 = lVar3;
    }
    _dispatch_group_enter(lVar13);
    uVar11 = *(undefined8 *)(param_1 + _DAT_11273713c);
    puStack_148 = puVar15;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_105e06d80;
    puStack_130 = &UNK_110841f80;
    lStack_128 = param_1;
    _objc_retain(lVar13);
    lStack_120 = lVar13;
    func_0x00010c0f7fc0(uVar11);
    _objc_release(lStack_120);
  }
  lVar2 = param_1;
  func_0x00010be6e440();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c15d100();
  if (iVar1 != 0) {
    lVar3 = param_1 + _DAT_112737144;
    _objc_loadWeakRetained();
    lVar12 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x000108f42234();
    _objc_release(lVar12);
    _objc_release(lVar3);
    if ((int)lVar10 != 0) {
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      lStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      plStack_180 = (long *)0x0;
      _objc_retain(lVar2);
      lVar3 = lVar2;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar12 = *plStack_180;
        do {
          lVar10 = 0;
          do {
            if (*plStack_180 != lVar12) {
              _objc_enumerationMutation(lVar2);
            }
            uVar14 = *(ulong *)(lStack_188 + lVar10 * 8);
            uVar4 = uVar14;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_release(uVar4);
            func_0x00010c122a80(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar14;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar14);
            uVar4 = uVar6;
            func_0x00010c0720c0();
            if ((((uVar4 & 1) == 0) && (uVar4 = uVar6, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
               (uVar4 = uVar6, func_0x00010c0720c0(), (int)uVar4 == 0)) {
              uVar4 = uVar6;
              func_0x00010c0720c0();
              if ((int)uVar4 != 0) {
                uVar11 = *(undefined8 *)(param_1 + _DAT_11273714c);
                func_0x00010c269d40(uVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c28b120();
                goto LAB_105e06a10;
              }
              uVar4 = uVar6;
              func_0x00010c0720c0();
              if ((int)uVar4 != 0) {
                uVar11 = *(undefined8 *)(param_1 + _DAT_11273714c);
                func_0x00010c269d40(uVar11);
                _objc_retainAutoreleasedReturnValue();
LAB_105e06af8:
                func_0x00010c28b100();
                goto LAB_105e06a10;
              }
              uVar4 = uVar6;
              func_0x00010c0720c0();
              if ((int)uVar4 != 0) {
                uVar11 = *(undefined8 *)(param_1 + _DAT_11273714c);
                func_0x00010c269d40(uVar11);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_105e06af8;
              }
              uVar4 = uVar6;
              func_0x00010c0720c0();
              if ((int)uVar4 != 0) {
                uVar11 = *(undefined8 *)(param_1 + _DAT_11273714c);
                func_0x00010c269d40(uVar11);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_105e06af8;
              }
            }
            else {
              uVar11 = *(undefined8 *)(param_1 + _DAT_11273714c);
              func_0x00010c269d40(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c28b140();
LAB_105e06a10:
              _objc_release(uVar11);
            }
            _objc_release(uVar5);
            _objc_release(uVar6);
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          lVar3 = lVar2;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar2);
      puVar15 = PTR___NSConcreteStackBlock_11034bd00;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c15d100();
  if (iVar1 != 0) {
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      if (lVar13 == 0) {
        _dispatch_group_create();
        lVar13 = lVar3;
      }
      _dispatch_group_enter(lVar13);
      uVar11 = *(undefined8 *)(param_1 + _DAT_11273713c);
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_105e06da8;
      puStack_1b0 = &UNK_110848ba8;
      puStack_1c8 = puVar15;
      lStack_1a8 = param_1;
      _objc_retain(lVar2);
      lStack_1a0 = lVar2;
      _objc_retain(lVar13);
      lStack_198 = lVar13;
      func_0x00010c0f7fc0(uVar11);
      _objc_release(lStack_198);
      _objc_release(lStack_1a0);
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c15d100();
  if (iVar1 != 0) {
    lVar3 = param_1 + _DAT_11273721c;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010c0e1880();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010c252700();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b780();
    _objc_release(lVar10);
    _objc_release(lVar12);
    _objc_release(lVar9);
    _objc_release(lVar3);
  }
  if (lVar13 == 0) {
    puStack_1f8 = PTR_PTR_1126ed330;
    plVar8 = &lStack_200;
    lStack_200 = param_1;
    _objc_msgSendSuper2(plVar8,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar7 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + _DAT_112737294);
    *(long **)(param_1 + _DAT_112737294) = plVar7;
    _objc_retain();
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_1 + _DAT_11273713c);
    func_0x00010c11de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = 0xc2000000;
    uStack_1e0 = 0x105e06e30;
    puStack_1d8 = &UNK_110842e18;
    puStack_1f0 = puVar15;
    plStack_1d0 = plVar7;
    func_0x000100bc0718(lVar13,uVar11,&puStack_1f0);
    _objc_release(uVar11);
    plVar8 = plVar7;
    func_0x00010c117720(plVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar7);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar8);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar13 + 0x20));
  return;
}



/* Entry: 105e06d78; end: 105e06d7f;  */

void FUN_105e06d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105e06d80; end: 105e06da7;  */

void FUN_105e06d80(long param_1)

{
  func_0x00010bde1100(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e06da8; end: 105e06e27;  */

void FUN_105e06da8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e06e28;
  puStack_40 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010bed5e60(uVar1,param_2,uVar2,&puStack_58);
  _objc_release(uStack_38);
  return;
}



/* Entry: 105e06e28; end: 105e06e37;  */

void FUN_105e06e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105e06e38; end: 105e06ea7; -[SCSendToInternalEntryPoint _attributeDelayedPageEarly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e06e38(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112737144;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 105e06ea8; end: 105e06f3f; -[SCSendToInternalEntryPoint _shouldPushPageEarly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105e06ea8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + _DAT_112737134;
  _objc_loadWeakRetained();
  uVar4 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c4f00;
  _objc_opt_class(PTR_PTR_1126c4f00);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  else {
    func_0x00010c10c520(uVar4);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105e06f40; end: 105e06fe7; -[SCSendToInternalEntryPoint _emitSendToMetricsWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e06f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737130);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e06fe8;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c15fd20(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105e06fe8; end: 105e06ffb;  */

void FUN_105e06fe8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e06ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e06ffc; end: 105e071af; -[SCSendToInternalEntryPoint _sectionExtensionsProviderFutureWithRenderingTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e06ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737298);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105e070f0;
  puStack_40 = &UNK_1108d4780;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105e0714c;
  puStack_68 = &UNK_110846660;
  puStack_60 = puVar1;
  uStack_38 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bf9d5c0(uVar3,param_2,&puStack_58,&puStack_80);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_60);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e071b0; end: 105e072ab; -[SCSendToInternalEntryPoint _headerExtensionFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e071b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273729c);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e072ac;
  puStack_30 = &UNK_110846660;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf9d5c0(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108eab80,&puStack_48);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e072ac; end: 105e07313;  */

void FUN_105e072ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010bf529e0(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf04a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e07314; end: 105e0761f; -[SCSendToInternalEntryPoint _clearTemporaryGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105e07314(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11273728c;
  uVar2 = *(ulong *)(param_1 + lVar14);
  func_0x00010bf5a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release();
  if (uVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar14);
    func_0x00010bf5a5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar14);
    func_0x00010c15d100();
    uVar2 = uVar3;
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar5 = *(long *)(param_1 + _DAT_112737158);
      func_0x00010c0ecca0();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar6 = lVar5;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar13 = *plStack_120;
        do {
          lVar12 = 0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(lVar5);
            }
            lVar7 = *(long *)(lStack_128 + lVar12 * 8);
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            lVar7 = lVar8;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar7;
            func_0x00010c0720c0();
            _objc_release(lVar7);
            if ((int)lVar9 != 0) {
              lVar7 = lVar8;
              func_0x00010c122b80();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar7;
              func_0x00010c08fa60();
              if (lVar9 != 0) {
                func_0x00010befa120(puVar4);
              }
              _objc_release(lVar7);
            }
            _objc_release(lVar8);
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
          lVar6 = lVar5;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      uVar2 = *(ulong *)(param_1 + lVar14);
      func_0x00010bf5a5c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_105e07620;
      puStack_140 = &UNK_110856a28;
      puStack_138 = puVar4;
      _objc_retain(puVar4);
      uVar10 = uVar2;
      func_0x0001006372a4(uVar2,&puStack_158);
      _objc_release(uVar2);
      uVar2 = uVar10;
      func_0x00010bf51e00();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(puStack_138);
      _objc_release(puVar4);
      _objc_release(lVar5);
    }
    param_1 = param_1 + _DAT_1127371f8;
    _objc_loadWeakRetained(param_1);
    lVar14 = param_1;
    func_0x00010bfcf8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b6e0();
    _objc_release(lVar6);
    _objc_release(lVar14);
    _objc_release(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar2;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(uVar2 + 0x20);
  func_0x00010bf4b900(uVar11);
  return (ulong)((uint)uVar11 ^ 1);
}



/* Entry: 105e07620; end: 105e0763f;  */

uint FUN_105e07620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105e07640; end: 105e07843; -[SCSendToInternalEntryPoint _orderedSelectedItemContacts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e07640(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined1 *puStack_258;
  ulong uStack_250;
  undefined *puStack_248;
  long lStack_1c0;
  undefined *puStack_138;
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
  lVar18 = param_1 + _DAT_112737134;
  _objc_loadWeakRetained();
  lVar1 = lVar18;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2312a0();
  _objc_release(lVar1);
  _objc_release(lVar18);
  if ((int)lVar2 == 0) {
    puVar3 = *(undefined **)(param_1 + _DAT_11273715c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar3;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = *(undefined **)(param_1 + _DAT_112737158);
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_130;
    param_4 = auStack_f0;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar18 = *plStack_120;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar18) {
            _objc_enumerationMutation(puVar3);
          }
          uVar17 = *(undefined8 *)(lStack_128 + (long)puVar15 * 8);
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar17;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar17);
          if ((int)uVar7 != 0) {
            func_0x00010befa120(puStack_138);
          }
          puVar15 = puVar15 + 1;
        } while (puVar4 != puVar15);
        param_3 = &uStack_130;
        param_4 = auStack_f0;
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_105e07c00;
    puStack_260 = &UNK_110849530;
    _objc_retain(param_4);
    ppuVar8 = &puStack_278;
    puStack_258 = param_4;
    _objc_retainBlock();
    puVar9 = param_3;
    func_0x00010bf529e0();
    if (puVar9 == (undefined8 *)0x0) {
      (*(code *)ppuVar8[2])(ppuVar8);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      _objc_retain(param_3);
      puVar9 = param_3;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      while (puVar9 != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(param_3);
          }
          uVar10 = *(ulong *)((long)puVar16 * 8);
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010befcf80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          puVar15 = PTR_PTR_1126c24d0;
          _objc_opt_class(PTR_PTR_1126c24d0);
          uVar12 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar15);
          uVar10 = uVar11;
          if ((uVar12 & 1) == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          _objc_release(uVar11);
          uVar11 = uVar10;
          func_0x00010c0faf60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_alloc_init();
          uVar10 = uVar11;
          func_0x00010c08fa60();
          if (uVar10 != 0 && puVar15 != (undefined *)0x0) {
            puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            uStack_250 = uVar11;
            puStack_248 = puVar15;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef7f60(puVar4);
            _objc_release(puVar13);
          }
          _objc_release(puVar15);
          _objc_release(uVar11);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar9 != puVar16);
        puVar9 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      lVar18 = (long)_DAT_112737154;
      puVar15 = puVar3 + lVar18;
      _objc_loadWeakRetained();
      puVar13 = puVar15;
      func_0x00010c0dafc0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar13);
      _objc_release(puVar15);
      if (puVar14 == (undefined *)0x0) {
        (*(code *)ppuVar8[2])(ppuVar8);
      }
      else {
        puVar3 = puVar3 + lVar18;
        _objc_loadWeakRetained(puVar3);
        puVar15 = puVar3;
        func_0x00010c0dafc0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        _objc_retain(ppuVar8);
        func_0x00010c286f80(puVar13);
        _objc_release(puVar13);
        _objc_release(puVar15);
        _objc_release(puVar3);
        _objc_release(ppuVar8);
        _objc_release(puVar4);
      }
      _objc_release(puVar4);
    }
    _objc_release(ppuVar8);
    _objc_release(puStack_258);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
      return;
    }
    ___stack_chk_fail();
    if (param_3[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e07c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3[4] + 0x10))();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
  return;
}



/* Entry: 105e07844; end: 105e07bff; -[SCSendToInternalEntryPoint _updateContactNonSnapchatterLastInteractionTimestampsWithOrderedSelectedItems:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e07844(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_105e07c00;
  puStack_120 = &UNK_110849530;
  _objc_retain(param_4);
  ppuVar1 = &puStack_138;
  uStack_118 = param_4;
  _objc_retainBlock();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(ulong *)(lVar10 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010befcf80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126c24d0;
        _objc_opt_class(PTR_PTR_1126c24d0);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar4 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar5);
        uVar5 = uVar4;
        func_0x00010c0faf60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_alloc_init();
        uVar4 = uVar5;
        func_0x00010c08fa60();
        if (uVar4 != 0 && puVar6 != (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_110 = uVar5;
          puStack_108 = puVar6;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar3);
          _objc_release(puVar8);
        }
        _objc_release(puVar6);
        _objc_release(uVar5);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    lVar11 = (long)_DAT_112737154;
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar9 = lVar2;
    func_0x00010c0dafc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    _objc_release(lVar2);
    if (lVar10 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      param_1 = param_1 + lVar11;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c0dafc0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(ppuVar1);
      func_0x00010c286f80(lVar9);
      _objc_release(lVar9);
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(ppuVar1);
      _objc_release(puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_118);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e07c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e07c00; end: 105e07c1f;  */

void FUN_105e07c00(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e07c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e07c20; end: 105e07f07; -[SCSendToInternalEntryPoint _generateContextualSignalsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e07c20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar11 = (long)_DAT_112737134;
  puVar1 = (undefined *)(param_1 + lVar11);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfba4a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c243400();
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar1 = (undefined *)(param_1 + lVar11);
  _objc_loadWeakRetained();
  puVar3 = puVar1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar9 != (undefined *)0x0) {
    puVar2 = puVar9;
  }
  _objc_retain(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar5 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar5 = lVar11;
  func_0x00010c239cc0();
  _objc_release(lVar11);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = puVar4;
  func_0x00010c2519e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = (undefined4)lVar5;
  lStack_78 = lVar7;
  _objc_copyWeak(auStack_80,auStack_68);
  puVar9 = puVar3;
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar10);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105e07f08; end: 105e07fbf;  */

void FUN_105e07f08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2730;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  func_0x00010be43ac0();
  func_0x00010c03cd60(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e07fc0; end: 105e07fcf; -[SCSendToInternalEntryPoint _isSendToPresentedForRanking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e07fc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112737290);
}



/* Entry: 105e07fd0; end: 105e0803b; -[SCSendToInternalEntryPoint _tapToStartWithAttribution:sendToLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e07fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(byte *)(param_1 + _DAT_112737290) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112737290) = 1;
  _objc_retain(param_3);
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269760();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e0803c; end: 105e08227; -[SCSendToInternalEntryPoint _createNewGroupCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e0803c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_1127371e8;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar9 = (long)_DAT_1127371f8;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar1 = param_1 + _DAT_112737154;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126c4f20;
  _objc_alloc_init(PTR_PTR_1126c4f20);
  lVar1 = param_1 + _DAT_112737144;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b2888;
  _objc_alloc(PTR_PTR_1126b2888);
  param_1 = param_1 + _DAT_1127372a0;
  _objc_loadWeakRetained();
  func_0x00010c05b400(puVar8,param_2,lVar2,lVar3,lVar4,lVar5,lVar9,puVar6,0,lVar7,param_1);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e08228; end: 105e0875f; -[SCSendToInternalEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e08228(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127371b4);
  _objc_destroyWeak(param_1 + _DAT_1127371b0);
  _objc_destroyWeak(param_1 + _DAT_1127371ac);
  _objc_destroyWeak(param_1 + _DAT_1127371a8);
  _objc_destroyWeak(param_1 + _DAT_1127371a4);
  _objc_destroyWeak(param_1 + _DAT_1127371a0);
  _objc_destroyWeak(param_1 + _DAT_112737288);
  _objc_destroyWeak(param_1 + _DAT_1127372a0);
  _objc_destroyWeak(param_1 + _DAT_112737280);
  _objc_destroyWeak(param_1 + _DAT_11273727c);
  _objc_destroyWeak(param_1 + _DAT_112737284);
  _objc_destroyWeak(param_1 + _DAT_112737278);
  _objc_destroyWeak(param_1 + _DAT_112737274);
  _objc_destroyWeak(param_1 + _DAT_112737270);
  _objc_storeStrong(param_1 + _DAT_1127372b4,0);
  _objc_storeStrong(param_1 + _DAT_11273726c,0);
  _objc_storeStrong(param_1 + _DAT_112737264,0);
  _objc_destroyWeak(param_1 + _DAT_112737268);
  _objc_destroyWeak(param_1 + _DAT_112737260);
  _objc_destroyWeak(param_1 + _DAT_11273725c);
  _objc_destroyWeak(param_1 + _DAT_112737258);
  _objc_destroyWeak(param_1 + _DAT_112737254);
  _objc_destroyWeak(param_1 + _DAT_112737250);
  _objc_destroyWeak(param_1 + _DAT_11273724c);
  _objc_destroyWeak(param_1 + _DAT_112737208);
  _objc_destroyWeak(param_1 + _DAT_112737240);
  _objc_destroyWeak(param_1 + _DAT_112737148);
  _objc_storeStrong(param_1 + _DAT_112737238,0);
  _objc_destroyWeak(param_1 + _DAT_11273723c);
  _objc_destroyWeak(param_1 + _DAT_112737128);
  _objc_destroyWeak(param_1 + _DAT_1127372b0);
  _objc_destroyWeak(param_1 + _DAT_112737248);
  _objc_destroyWeak(param_1 + _DAT_112737234);
  _objc_destroyWeak(param_1 + _DAT_112737230);
  _objc_destroyWeak(param_1 + _DAT_11273722c);
  _objc_destroyWeak(param_1 + _DAT_1127371f4);
  _objc_destroyWeak(param_1 + _DAT_1127371f0);
  _objc_destroyWeak(param_1 + _DAT_112737228);
  _objc_destroyWeak(param_1 + _DAT_112737224);
  _objc_storeStrong(param_1 + _DAT_112737188,0);
  _objc_storeStrong(param_1 + _DAT_112737194,0);
  _objc_storeStrong(param_1 + _DAT_112737190,0);
  _objc_storeStrong(param_1 + _DAT_112737184,0);
  _objc_destroyWeak(param_1 + _DAT_11273719c);
  _objc_destroyWeak(param_1 + _DAT_112737220);
  _objc_destroyWeak(param_1 + _DAT_112737198);
  _objc_destroyWeak(param_1 + _DAT_11273721c);
  _objc_destroyWeak(param_1 + _DAT_1127372ac);
  _objc_destroyWeak(param_1 + _DAT_112737204);
  _objc_destroyWeak(param_1 + _DAT_112737214);
  _objc_destroyWeak(param_1 + _DAT_112737210);
  _objc_destroyWeak(param_1 + _DAT_11273712c);
  _objc_destroyWeak(param_1 + _DAT_1127371f8);
  _objc_destroyWeak(param_1 + _DAT_112737144);
  _objc_storeStrong(param_1 + _DAT_112737180,0);
  _objc_storeStrong(param_1 + _DAT_11273717c,0);
  _objc_storeStrong(param_1 + _DAT_112737178,0);
  _objc_storeStrong(param_1 + _DAT_112737174,0);
  _objc_storeStrong(param_1 + _DAT_11273716c,0);
  _objc_storeStrong(param_1 + _DAT_112737170,0);
  _objc_storeStrong(param_1 + _DAT_112737168,0);
  _objc_storeStrong(param_1 + _DAT_11273729c,0);
  _objc_storeStrong(param_1 + _DAT_112737298,0);
  _objc_destroyWeak(param_1 + _DAT_112737120);
  _objc_destroyWeak(param_1 + _DAT_112737218);
  _objc_destroyWeak(param_1 + _DAT_1127371fc);
  _objc_destroyWeak(param_1 + _DAT_112737140);
  _objc_destroyWeak(param_1 + _DAT_1127371e0);
  _objc_destroyWeak(param_1 + _DAT_11273720c);
  _objc_destroyWeak(param_1 + _DAT_112737200);
  _objc_destroyWeak(param_1 + _DAT_1127371d0);
  _objc_destroyWeak(param_1 + _DAT_112737160);
  _objc_destroyWeak(param_1 + _DAT_1127371ec);
  _objc_destroyWeak(param_1 + _DAT_1127372a8);
  _objc_destroyWeak(param_1 + _DAT_112737164);
  _objc_destroyWeak(param_1 + _DAT_1127371cc);
  _objc_destroyWeak(param_1 + _DAT_1127371c8);
  _objc_destroyWeak(param_1 + _DAT_1127371d4);
  _objc_destroyWeak(param_1 + _DAT_1127371dc);
  _objc_destroyWeak(param_1 + _DAT_1127371d8);
  _objc_destroyWeak(param_1 + _DAT_1127371c4);
  _objc_destroyWeak(param_1 + _DAT_112737244);
  _objc_destroyWeak(param_1 + _DAT_1127371c0);
  _objc_destroyWeak(param_1 + _DAT_11273718c);
  _objc_destroyWeak(param_1 + _DAT_1127371e4);
  _objc_destroyWeak(param_1 + _DAT_1127371bc);
  _objc_destroyWeak(param_1 + _DAT_112737154);
  _objc_destroyWeak(param_1 + _DAT_1127371b8);
  _objc_destroyWeak(param_1 + _DAT_1127372a4);
  _objc_destroyWeak(param_1 + _DAT_1127371e8);
  _objc_destroyWeak(param_1 + _DAT_112737134);
  _objc_storeStrong(param_1 + _DAT_112737294,0);
  _objc_storeStrong(param_1 + _DAT_112737138,0);
  _objc_storeStrong(param_1 + _DAT_112737130,0);
  _objc_storeStrong(param_1 + _DAT_11273713c,0);
  _objc_storeStrong(param_1 + _DAT_11273714c,0);
  _objc_storeStrong(param_1 + _DAT_112737150,0);
  _objc_storeStrong(param_1 + _DAT_11273715c,0);
  _objc_storeStrong(param_1 + _DAT_112737158,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273728c,0);
  return;
}



/* Entry: 105e08760; end: 105e08c0f; -[SCSendToRouterImpl initWithCustomStoryCreationScopeExposer:customStoryMembersScopeExposer:customStoryMenuScopeExposer:friendActionSheetScopeExposer:groupActionSheetScopeExposer:newGroupScopeExposer:standardExternalContentShareScopeExposer:webBrowsingScopeExposer:memberRolesScopeExposer:selectionTracker:selectionGroupObservableRepository:snapchattersDataFetcher:sendToPublicProfileOnboardingScopeExposer:sendToSpotlightEducationScopeExposer:storiesBlizzardLogger:sendToActionMenuLogger:circumstanceEngine:sendToSessionId:customStoryMenuScopeServices:customStoryCreationScopeServices:memberRolesScopeServices:sendToPublicProfileOnboardingScopeServices:sendToSpotlightEducationScopeServices:customStoryMembersScopeServices:] */

undefined8 *
FUN_105e08760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126ed338;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_21);
    _objc_storeWeak(puVar1 + 0x16,param_22);
    _objc_storeWeak(puVar1 + 0x17,param_23);
    _objc_storeWeak(puVar1 + 0x18,param_24);
    _objc_storeWeak(puVar1 + 0x19,param_25);
    _objc_storeWeak(puVar1 + 0x1a,param_26);
  }
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



/* Entry: 105e08c10; end: 105e08ce3; -[SCSendToRouterImpl showCustomStoryCreationWithPresentingViewController:delegate:] */

void FUN_105e08c10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar2 = param_1 + 0xb0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1 + 0xb0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf244a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e08ce4; end: 105e08d2b; -[SCSendToRouterImpl completeCustomStoryCreation] */

void FUN_105e08ce4(long param_1)

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



/* Entry: 105e08d2c; end: 105e08d73; -[SCSendToRouterImpl completeNewGroupCreation] */

void FUN_105e08d2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e08d74; end: 105e08e27; -[SCSendToRouterImpl showNewGroupPageWithSelectedItems:uiContainer:delegate:source:] */

void FUN_105e08d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4f28;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043c40();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e08e28; end: 105e08f3b; -[SCSendToRouterImpl showExternalShareSheetForPhoneNumber:uiContainer:textConfiguration:mediaConfiguration:sharingMetadata:sendToSessionId:delegate:] */

void FUN_105e08e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b24a0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0574c0();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e08f3c; end: 105e08f83; -[SCSendToRouterImpl completeExternalShareSheetShare] */

void FUN_105e08f3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e08f84; end: 105e09027; -[SCSendToRouterImpl showGroupMiniProfileForGroupId:uiContainer:presentingViewController:] */

void FUN_105e08f84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2858;
    _objc_alloc(PTR_PTR_1126b2858);
    func_0x00010c0584e0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e09028; end: 105e090db; -[SCSendToRouterImpl showSnapchatterMiniProfileForUserId:uiContainer:presentingViewController:] */

void FUN_105e09028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    func_0x00010c058a60();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e090dc; end: 105e091e3; -[SCSendToRouterImpl showCustomStoryActionMenuForPublicationId:storyType:presentingViewController:] */

void FUN_105e090dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_4;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar3 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf24480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,lVar4);
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e091e4; end: 105e091ef; -[SCSendToRouterImpl showSpotlightSubmissionViolationPromptWithText:] */

void FUN_105e091e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126afca8,PTR_s_showMessageWithText__11266bbe8);
  return;
}



/* Entry: 105e091f0; end: 105e094ff; -[SCSendToRouterImpl showPrivateStoryFirstTimePostForPublicationId:onAccept:presentingViewController:] */

void FUN_105e091f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b798,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puVar3);
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
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc75f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc75f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e2b7b8;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b7b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_5);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000105e09530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e09500; end: 105e09533;  */

void FUN_105e09500(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e09530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e09534; end: 105e095d3;  */

void FUN_105e09534(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20) + 0xd0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0xd0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf23f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105e095d4; end: 105e095e3;  */

void FUN_105e095d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e095e4; end: 105e097a7; -[SCSendToRouterImpl showCustomStoryFirstTimePostForCustomStory:onAccept:hasBlockedUsers:presentingViewController:] */

void FUN_105e095e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_70 = param_5;
    _objc_retain(param_6);
    func_0x00010c2448c0(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e097a8; end: 105e09877;  */

void FUN_105e097a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11ac00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb88a0(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e09878; end: 105e098b7; -[SCSendToRouterImpl showCommunityStoryFirstTimePostForCustomStory:onAccept:presentingViewController:] */

void FUN_105e09878(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 != 0) {
    func_0x00010c239380(PTR_PTR_1126c24a8,param_2,param_4,0,param_5,*(undefined8 *)(param_1 + 0x78),
                        param_1,0,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}



/* Entry: 105e098b8; end: 105e09c5f; -[SCSendToRouterImpl _showCustomStoryFirstTimePostWithCustomStoryId:creatorDisplayName:onAccept:hasBlockedUsers:presentingViewController:] */

void FUN_105e098b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b798,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
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
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_6 == 0) {
    if (param_4 == 0) {
      func_0x000108f57c4c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e09b24;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2b7f8;
  }
  else {
    if (param_4 == 0) {
      func_0x000108f57c64();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e09b24;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2b7d8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar6;
LAB_105e09b24:
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e2b818;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b818,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar8);
  _objc_release(ppuVar6);
  func_0x00010c10eda0(param_7);
  _objc_release(puVar7);
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010bf84b00(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000105e09c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e09c60; end: 105e09c93;  */

void FUN_105e09c60(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e09c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}


